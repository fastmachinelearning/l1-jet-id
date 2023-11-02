# Deepsets models in a format friendly for synthetisation. For more details on the
# architecture see the deepsets.py file.

import numpy as np

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL
import qkeras


def deepsets_invariant_synth(
    input_shape: tuple,
    nnodes_phi: int = 32,
    nnodes_rho: int = 16,
    activ: str = "relu",
    nbits: int = 8,
):
    """Invariant deepsets network using functional API to be compatible with hls4ml.

    The details of this architecture can be found in deepsets.py.
    """

    nclasses = 5
    nbits = format_quantiser(nbits)
    activ = format_qactivation(activ, nbits)

    deepsets_input = keras.Input(shape=input_shape, name="input_layer")

    # Phi network.
    x_phi = qkeras.QDense(
        nnodes_phi, kernel_quantizer=nbits, bias_quantizer=nbits, name="phi1"
    )(deepsets_input)
    x_phi = qkeras.QActivation(activ)(x_phi)

    x_phi = qkeras.QDense(
        nnodes_phi, kernel_quantizer=nbits, bias_quantizer=nbits, name="phi2"
    )(x_phi)
    x_phi = qkeras.QActivation(activ)(x_phi)

    x_phi = qkeras.QDense(
        nnodes_phi, kernel_quantizer=nbits, bias_quantizer=nbits, name="phi3"
    )(x_phi)
    phi_output = qkeras.QActivation(activ)(x_phi)

    # Invariant operation
    # inv_operation_output = KL.GlobalMaxPooling1D()(phi_output)
    phi_output = qkeras.QActivation(
        qkeras.quantized_bits(bits=12, integer=3, symmetric=0, keep_negative=1)
    )(phi_output)
    inv_operation_output = KL.GlobalAveragePooling1D()(phi_output)

    # Rho network.
    x_rho = qkeras.QDense(
        nnodes_rho, kernel_quantizer=nbits, bias_quantizer=nbits, name="rho"
    )(inv_operation_output)
    x_rho = qkeras.QActivation(activ)(x_rho)

    deepsets_output = KL.Dense(nclasses)(x_rho)
    deepsets_output = KL.Softmax()(deepsets_output)
    deepsets = keras.Model(deepsets_input, deepsets_output, name="deepsets_invariant")

    return deepsets


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
