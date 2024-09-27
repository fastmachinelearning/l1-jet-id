# Deepsets models in a format friendly for synthetisation. For more details on the
# architecture see the deepsets.py file.

import numpy as np

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL
import qkeras


def mlp_regularised_synth(
    input_size: tuple, layers: list, activ: str = "relu", nbits: int = 8, **kwargs
):
    """Quantised MLP like in mlp_quantised.py but in a format consistent with hls4ml."""

    nclasses = 5
    quantizer = format_quantiser(nbits)
    activ = format_qactivation(activ, nbits)

    mlp_input = keras.Input(shape=input_size[1:], name="input_layer")
    mlp_layer = KL.Flatten()(mlp_input)
    mlp_layer = qkeras.QDense(
        layers[0],
        kernel_regularizer=keras.regularizers.L1(kwargs["l1_coeff"]),
        bias_quantizer=quantizer,
        kernel_quantizer=quantizer,
    )(mlp_layer)
    mlp_activ = qkeras.QActivation(activ)(mlp_layer)

    layers.pop(0)
    for layer_nodes in layers:
        if "l1_coeff" in kwargs:
            mlp_layer = qkeras.QDense(
                layer_nodes,
                kernel_regularizer=keras.regularizers.L1(kwargs["l1_coeff"]),
                bias_quantizer=quantizer,
                kernel_quantizer=quantizer,
            )(mlp_activ)
        else:
            mlp_layer = qkeras.QDense(
                layer_nodes,
                bias_quantizer=quantizer,
                kernel_quantizer=quantizer,
            )(mlp_activ)
        mlp_activ = qkeras.QActivation(activ)(mlp_layer)

    mlp_layer = KL.Dense(nclasses)(mlp_activ)
    mlp_output = KL.Softmax()(mlp_layer)
    mlp = keras.Model(mlp_input, mlp_output, name="mlp")

    return mlp


def format_quantiser(nbits: int):
    """Format the quantisation of the ml floats in a QKeras way."""
    if nbits == 1:
        return "binary(alpha=1)"
    elif nbits == 2:
        return "ternary(alpha=1)"
    else:
        return f"quantized_bits({nbits}, 0, alpha=1)"


def format_qactivation(activation: str, nbits: int) -> str:
    """Format the activation function strings in a QKeras friendly way."""
    return f"quantized_{activation}({nbits}, 0)"
