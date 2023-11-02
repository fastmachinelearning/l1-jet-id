# Quantised deepsets networks equivalent to the float32 implementations in deepsets.py.

import numpy as np

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL
import qkeras


class DeepSetsInvQuantised(keras.Model):
    """Deep sets permutation invariant graph network https://arxiv.org/abs/1703.06114.

    Attributes:
        nnodes_phi: Number of nodes in the layers of the phi neural network.
        nnodes_rho: Number of nodes in the layers of the rho neural network.
        activ: Activation function to use between the dense layers.
        nbits: Bit width to quantised the layers to.
    """

    def __init__(
        self,
        nnodes_phi: int = 32,
        nnodes_rho: int = 16,
        activ: str = "elu",
        nbits: int = 8,
    ):
        super(DeepSetsInvQuantised, self).__init__(name="DeepSetsInvQuantised")
        nclass = 5
        nbits = format_quantiser(nbits)
        activ = format_qactivation(activ, nbits)

        self.phi = keras.Sequential(
            [
                qkeras.QDense(nnodes_phi, kernel_quantizer=nbits, bias_quantizer=nbits),
                qkeras.QActivation(activ),
                qkeras.QDense(nnodes_phi, kernel_quantizer=nbits, bias_quantizer=nbits),
                qkeras.QActivation(activ),
                qkeras.QDense(nnodes_phi, kernel_quantizer=nbits, bias_quantizer=nbits),
                qkeras.QActivation(activ),
            ]
        )

        self.rho = keras.Sequential(
            [
                qkeras.QDense(nnodes_rho, kernel_quantizer=nbits, bias_quantizer=nbits),
                qkeras.QActivation(activ),
                qkeras.QDense(nclass, kernel_quantizer=nbits, bias_quantizer=nbits),
            ]
        )

    def call(self, inputs: np.ndarray, **kwargs):
        phi_output = self.phi(inputs)
        sum_output = tf.reduce_mean(phi_output, axis=1)
        rho_output = self.rho(sum_output)

        return rho_output


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
