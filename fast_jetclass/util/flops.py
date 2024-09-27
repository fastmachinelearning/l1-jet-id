# Calculates the number of FLOPs in the DeepSets models.

import numpy as np
import functools

import tensorflow as tf
from tensorflow import keras


def get_flops_dense(input_shape: list | int, units: int) -> int:
    """Calculate the number of floating point operations in a dense layer."""
    if isinstance(input_shape, list):
        MAC = functools.reduce(lambda x, y: x * y, input_shape) * units
    else:
        MAC = input_shape * units

    # Add biases.
    ADD = units

    return MAC * 2 + ADD


def get_flops_conv1d(input_shape: list | int, units: int, kernel_size: int = 1) -> int:
    """Calculate the number of floating point operations in a dense layer."""
    if isinstance(input_shape, list):
        MAC = kernel_size * functools.reduce(lambda x, y: x * y, input_shape) * units
    else:
        MAC = input_shape * units

    # Add biases.
    ADD = units

    return MAC * 2 + ADD


def get_flops_activ(input_shape: list | int, activation: str) -> int:
    """Approximates the number of floating point operations in an activation.

    According to https://stackoverflow.com/q/41251698 tanh has 20-100 FLOPs.
    """
    if isinstance(input_shape, list):
        ninputs = functools.reduce(lambda x, y: x * y, input_shape)
    else:
        ninputs = input_shape

    switcher = {
        "relu": lambda: ninputs,
        "tanh": lambda: ninputs * 50,
        "linear": lambda: 0,
    }

    activation_flops = switcher.get(activation, lambda: None)()
    if activation_flops == None:
        raise RuntimeError(f"Number of flops calc. not implemented for {activation}.")

    return activation_flops
