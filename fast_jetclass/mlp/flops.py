# Calculates the number of FLOPs in the mlp models.

import numpy as np
import functools

import tensorflow as tf
from tensorflow import keras


def get_flops(model: keras.Model) -> dict:
    """Calculates and returns the number of floating point operations in a DS model.

    Only works for the models in mlp/mlp.py which are comprised of sequential
    layers. This method does not work for the other implementations of the mlp
    models such as mlp_quantised.py or mlp_synth.py
    """

    flops = {"layer": 0, "activation": 0}
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
