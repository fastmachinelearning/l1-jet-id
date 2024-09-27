from tensorflow import keras
import hls4ml
import numpy as np

keras.utils.set_random_seed(42)


##### Custom stuff via extension API #####


# Keras layer (just a "marker" since Subtract support broadcasting despite what the docs say)
class BroadcastSubtract(keras.layers.Subtract):
    pass


# hls4ml implementation
class HBroadcastSubtract(hls4ml.model.layers.Layer):
    def initialize(self):
        # Be careful that the second input must be broadcasted, not the first one
        inp1 = self.get_input_variable(self.inputs[0])
        self.add_output_variable(inp1.shape, inp1.dim_names)


# Templates
bcast_subtract_config_template = """struct config{index} {{
    static const unsigned n_elem1 = {n_elem1};
    static const unsigned n_elem2 = {n_elem2};
}};\n"""
bcast_subtract_function_template = "nnet::bcast_subtract<{input1_t}, {input2_t}, {output_t}, {config}>({input1}, {input2}, {output});"
bcast_subtract_include_list = ["nnet_utils/nnet_bcast_subtract.h"]


class BroadcastSubtractConfigTemplate(hls4ml.backends.template.LayerConfigTemplate):
    def __init__(self):
        super().__init__(HBroadcastSubtract)
        self.template = bcast_subtract_config_template

    def format(self, node):
        params = self._default_config_params(node)
        params["n_elem1"] = node.get_input_variable(node.inputs[0]).size_cpp()
        params["n_elem2"] = node.get_input_variable(node.inputs[1]).size_cpp()

        return self.template.format(**params)


class BroadcastSubtractFunctionTemplate(hls4ml.backends.template.FunctionCallTemplate):
    def __init__(self):
        super().__init__(HBroadcastSubtract, include_header=bcast_subtract_include_list)
        self.template = bcast_subtract_function_template

    def format(self, node):
        params = {}
        params["config"] = f"config{node.index}"
        params["input1_t"] = node.get_input_variable(node.inputs[0]).type.name
        params["input2_t"] = node.get_input_variable(node.inputs[1]).type.name
        params["output_t"] = node.get_output_variable().type.name
        params["input1"] = node.get_input_variable(node.inputs[0]).name
        params["input2"] = node.get_input_variable(node.inputs[1]).name
        params["output"] = node.get_output_variable().name

        return self.template.format(**params)


# Parser for converter
def parse_bcast_subtract_layer(keras_layer, input_names, input_shapes, data_reader):
    from hls4ml.converters.keras_to_hls import parse_default_keras_layer

    layer = parse_default_keras_layer(keras_layer, input_names)
    output_shape = input_shapes[0][:]

    return layer, output_shape


from pathlib import Path

hls4ml.converters.register_keras_layer_handler(
    "BroadcastSubtract", parse_bcast_subtract_layer
)
hls4ml.model.layers.register_layer("BroadcastSubtract", HBroadcastSubtract)
backend = hls4ml.backends.get_backend("Vivado")
backend.register_template(BroadcastSubtractConfigTemplate)
backend.register_template(BroadcastSubtractFunctionTemplate)
p = Path(__file__).parent / "nnet_bcast_subtract.h"
backend.register_source(p)

##### End of custom stuff #####


input_shape = (16, 16)
deepsets_input = keras.Input(shape=input_shape, name="input_layer")

# Permutation Equivariant Layer
x_max = keras.layers.GlobalMaxPooling1D(keepdims=True)(deepsets_input)
x_lambd = keras.layers.Dense(32, use_bias=False, name="lambda")(x_max)
x_gamma = keras.layers.Dense(32, use_bias=False, name="gamma")(deepsets_input)
# x = keras.layers.Subtract()([x_gamma, x_lambd])
# x = x_gamma - x_lambd
x = BroadcastSubtract()([x_gamma, x_lambd])
x = keras.layers.Activation("elu")(x)


x_max = keras.layers.GlobalMaxPooling1D()(x)
x = keras.layers.Dense(16)(x)
x = keras.layers.Activation("elu")(x)
deepsets_output = keras.layers.Dense(5)(x)
deepsets_network = keras.Model(
    deepsets_input, deepsets_output, name="deepsets_equivariant"
)
deepsets_network.summary()

sample = np.expand_dims(np.random.rand(*input_shape), axis=0)

res = deepsets_network(sample)
print(res)

config = hls4ml.utils.config_from_keras_model(deepsets_network, granularity="name")

config["LayerName"]["lambda"]["ParallelizationFactor"] = 32

outname = "/data/hlssynt-users/thaarres/ds_equivariant"
hls_model = hls4ml.converters.convert_from_keras_model(
    deepsets_network, hls_config=config, output_dir=outname
)
hls_model.compile()

res_hls = hls_model.predict(sample)
print(res_hls)

report = hls_model.build()
print(report)
