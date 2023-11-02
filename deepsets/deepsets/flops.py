# Calculates the number of FLOPs in the DeepSets models.

import numpy as np
import functools

import tensorflow as tf
from tensorflow import keras


def get_flops(model: keras.Model) -> dict:
    """Calculates and returns the number of floating point operations in a DS model.

    Only works for the models in deepsets/deepsets.py which are comprised of sequential
    layers. This method does not work for the other implementations of the deepsets
    models such as deepsets_quantised.py or deepsets_synth.py
    """

    flops = {"layer": 0, "activation": 0, "bottleneck": 0}
    flops["bottleneck"] += get_flops_bottleneck(model.layers[0].get_config())
    for layer in model.layers:
        layer_deets = layer.get_config()
        flops = get_flops_sequential(layer_deets, flops)

    flops.update({"total_flops": sum(flops.values())})
    return flops


def get_flops_sequential(sequential_layer: dict, flops: dict) -> dict:
    """Calculate number of floating point operations in sequential comb of layers."""
    input_layer = sequential_layer["layers"][0]
    input_shape = list(input_layer["config"]["batch_input_shape"][1:])
    for layer in sequential_layer["layers"][1:]:
        if layer["class_name"] == "Dense":
            flops["layer"] += get_flops_dense(input_shape, layer["config"])
            input_shape[-1] = layer["config"]["units"]
        elif layer["class_name"] == "EquivariantMean":
            flops["layer"] += get_flops_equimean(input_shape, layer["config"]["dim"])
            input_shape[-1] = layer["config"]["dim"]
        elif layer["class_name"] == "EquivariantMax":
            flops["layer"] += get_flops_equimax(input_shape, layer["config"]["dim"])
            input_shape[-1] = layer["config"]["dim"]
        elif layer["class_name"] == "Activation":
            flops["activation"] += get_flops_activ(
                input_shape, layer["config"]["activation"]
            )

    return flops


def get_flops_dense(input_shape: list, dense_layer: dict) -> int:
    """Calculate the number of floating point operations in a dense layer."""
    activation = dense_layer["activation"]
    activation_flops = get_flops_activ(input_shape, activation)

    units = dense_layer["units"]
    MAC = functools.reduce(lambda x, y: x * y, input_shape) * units

    if dense_layer["use_bias"] == True:
        ADD = units
        return ADD + MAC * 2

    return MAC * 2


def get_flops_activ(input_shape: list, activation: str) -> int:
    """Approximates the number of floating point operations in an activation.

    According to https://stackoverflow.com/q/41251698 tanh has 20-100 FLOPs.
    """
    ninputs = functools.reduce(lambda x, y: x * y, input_shape)

    switcher = {
        "relu": lambda: ninputs,
        "tanh": lambda: ninputs * 50,
        "linear": lambda: 0,
    }

    activation_flops = switcher.get(activation, lambda: None)()
    if activation_flops == None:
        raise RuntimeError(f"Number of flops calc. not implemented for {activation}.")

    return activation_flops


def get_flops_equimean(input_shape: list, layer_dim: int) -> int:
    """Calculates the number of floating point operations in an equivariant layer.

    The layer is defined in ./deepsets/deepsets.py, class EquivariantMean.
    """
    number_of_constituents = input_shape[0]
    number_of_features = input_shape[1]
    # (nconst_additions + 1 division) * number_of_features operations
    mean_flops = (number_of_constituents + 1) * number_of_features
    lambda_macs = layer_dim * number_of_features
    gamma_macs = layer_dim * number_of_features * number_of_constituents
    gamma_bias = layer_dim
    subtract_flops = number_of_constituents * number_of_features

    return mean_flops + lambda_macs * 2 + gamma_macs * 2 + gamma_bias + subtract_flops


def get_flops_equimax(input_shape: list, layer_dim: int) -> int:
    """Calculates the number of floating point operations in an equivariant layer.

    The layer is defined in ./deepsets/deepsets.py, class EquivariantMax.
    """
    number_of_constituents = input_shape[0]
    number_of_features = input_shape[1]
    max_flops = (number_of_constituents - 1) * number_of_features
    lambda_macs = layer_dim * number_of_features
    gamma_macs = layer_dim * number_of_features * number_of_constituents
    gamma_bias = layer_dim
    subtract_flops = number_of_constituents * number_of_features

    return max_flops + lambda_macs * 2 + gamma_macs * 2 + gamma_bias + subtract_flops


def get_flops_bottleneck(first_sequential_layer: dict):
    """Get the number of floating point operations in the bottleneck of the model.

    The bottleneck is defined as a permutation invariant operation after the
    first sequential network as shown in deepsets/deepsets.py.
    THIS METHOD IS WRITTEN ASUMMING THAT THIS OPERATION IS THE MEAN.
    """
    input_layer = first_sequential_layer["layers"][0]
    input_shape = list(input_layer["config"]["batch_input_shape"][1:])
    output_layer = first_sequential_layer["layers"][-2]
    if output_layer["class_name"] == "Dense":
        output_shape = input_shape[:-1] + [output_layer["config"]["units"]]
    else:
        output_shape = input_shape[:-1] + [output_layer["config"]["dim"]]

    # (nconst_additions + 1 division) * number_of_features operations
    mean_flops = (output_shape[1] + 1) * output_shape[0]

    return mean_flops


def get_flops_tfgraph(model_path: str) -> int:
    """Computes the number of FLOPs using the tensorflow profiler.

    Currently doesn't work that well for the deepsets models, no matter the
    implementation api used for them.
    """
    session = tf.compat.v1.Session()
    graph = tf.compat.v1.get_default_graph()

    with graph.as_default():
        with session.as_default():
            model = tf.keras.models.load_model(model_path, compile=False)

            run_meta = tf.compat.v1.RunMetadata()
            opts = tf.compat.v1.profiler.ProfileOptionBuilder.float_operation()

            # We use the Keras session graph in the call to the profiler.
            flops = tf.compat.v1.profiler.profile(
                graph=graph, run_meta=run_meta, cmd="op", options=opts
            )

    tf.compat.v1.reset_default_graph()

    return flops.total_float_ops
