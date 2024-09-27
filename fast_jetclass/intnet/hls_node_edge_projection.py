# Implement the node to edge projection layer from intnet.py in HLS4ML.
import numpy as np
from pathlib import Path

import hls4ml
from hls4ml.model.attributes import Attribute, TypeAttribute


# Configuration template for hls4ml.
config_template = """struct config{index} : nnet::node_edge_projection_config {{
    static const unsigned n_in = {n_in};
    static const unsigned n_nodes = {n_nodes};
    static const unsigned n_edges = {n_edges};
    static const bool receiving = {receiving};
    static const bool node_to_edge = {node_to_edge};
    static const unsigned in_width = {in_width};
    static const unsigned out_width = {out_width};
    typedef {accum_t.name} accum_t;
}};\n"""

function_template = (
    "nnet::node_edge_projection<{input_t}, {output_t}, {config}>({input}, {output});"
)
include_list = ["nnet_utils/nnet_node_edge_projection.h"]


class HLSNodeEdgeProjection(hls4ml.model.layers.Layer):
    """hls4ml implementation of NodeEdgeProjection layer from inetnet.py."""

    _expected_attributes = [
        Attribute("n_in"),
        Attribute("n_nodes"),
        Attribute("n_edges"),
        Attribute("receiving", value_type=bool, default=True),
        Attribute("node_to_edge", value_type=bool, default=True),
        Attribute("in_width"),
        Attribute("out_width"),
        TypeAttribute("accum"),
    ]

    def initialize(self):
        if self.attributes["node_to_edge"]:
            shape = [self.attributes["n_edges"], self.attributes["n_in"]]
        else:
            shape = [self.attributes["n_nodes"], self.attributes["n_in"]]
        dims = [f"N_OUT_{self.index}_0", f"N_OUT_{self.index}_1"]
        self.add_output_variable(shape, dims)


class HLSNodeEdgeProjectionConfigTemplate(hls4ml.backends.template.LayerConfigTemplate):
    def __init__(self):
        super().__init__(HLSNodeEdgeProjection)
        self.template = config_template

    def format(self, node):
        params = self._default_config_params(node)
        params["receiving"] = str(params["receiving"]).lower()
        params["node_to_edge"] = str(params["node_to_edge"]).lower()
        return self.template.format(**params)


class HLSNodeEdgeProjectionFunctionTemplate(
    hls4ml.backends.template.FunctionCallTemplate
):
    def __init__(self):
        super().__init__(HLSNodeEdgeProjection, include_header=include_list)
        self.template = function_template

    def format(self, node):
        params = self._default_function_params(node)
        return self.template.format(**params)


def parse_node_edge_projection_layer(
    keras_layer, input_names, input_shapes, data_reader
):
    """Parse the layer for HLS4ML."""
    layer = {}
    layer["class_name"] = "HLSNodeEdgeProjection"
    layer["name"] = keras_layer["config"]["name"]
    layer["n_in"] = input_shapes[0][2]
    layer["receiving"] = keras_layer["config"]["receiving"]
    layer["node_to_edge"] = keras_layer["config"]["node_to_edge"]

    if layer["node_to_edge"]:
        layer["n_nodes"] = input_shapes[0][1]
        layer["n_edges"] = layer["n_nodes"] * (layer["n_nodes"] - 1)
    else:
        layer["n_edges"] = input_shapes[0][1]
        layer["n_nodes"] = int((np.sqrt(4 * layer["n_edges"] + 1) + 1) / 2)

    layer["in_width"] = input_shapes[0][1]
    layer["out_width"] = layer["n_edges"] if layer["node_to_edge"] else layer["n_nodes"]

    output_shapes = [input_shapes[0][0], layer["out_width"], layer["n_in"]]

    if input_names is not None:
        layer["inputs"] = input_names

    return layer, output_shapes


def register_custom_layer():
    """Register the custom HLS layer in Keras."""
    hls4ml.converters.register_keras_layer_handler(
        "NodeEdgeProjection", parse_node_edge_projection_layer
    )

    # Register the hls4ml's IR layer
    hls4ml.model.layers.register_layer("HLSNodeEdgeProjection", HLSNodeEdgeProjection)

    # Register the optimization passes (if any)
    backend = hls4ml.backends.get_backend("Vivado")

    # Register template passes for the given backend
    backend.register_template(HLSNodeEdgeProjectionConfigTemplate)
    backend.register_template(HLSNodeEdgeProjectionFunctionTemplate)

    # Register HLS implementation
    backend.register_source(
        Path(Path(__file__).resolve().parents[0] / "nnet_node_edge_projection.h")
    )
