# Implementation of a simple MLP.

import numpy as np

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL
import qkeras

from fast_jetclass.util import flops


class MLPRegularQuantised(keras.Model):
    """Same as above, but this time with L1 regularisation.

    Attributes:
        layers: List, where each element represents the number of nodes in a certain
            layer. The lenght of the list is equal to the depth of the network.
        activ: Activation function to use between the dense layers.
        kwargs: Regularisation parameters.
    """

    def __init__(
        self,
        input_size: tuple,
        layers: list,
        activ: str = "relu",
        output_dim: int = 5,
        nbits: int = 8,
        **kwargs,
    ):
        super(MLPRegularQuantised, self).__init__(name="MLPRegularisedQuantised")
        self.input_size = input_size
        self.mlp_layers = layers
        self.activ = activ
        self.output_dim = output_dim
        self.quant = format_quantiser(nbits)
        self.activ = format_qactivation(activ, 8)

        self._build_mlp(**kwargs)
        self.output_layer = KL.Dense(output_dim)

    def _build_mlp(self, **kwargs):
        input_shape = list(self.input_size[1:])
        self.mlp = keras.Sequential()
        for layer_nodes in self.mlp_layers:
            self.mlp.add(
                qkeras.QDense(
                    layer_nodes,
                    kernel_regularizer=keras.regularizers.L1(kwargs["l1_coeff"]),
                    bias_quantizer=self.quant,
                    kernel_quantizer=self.quant,
                )
            )
            self.mlp.add(qkeras.QActivation(self.activ))

    def call(self, inputs: np.ndarray):
        inputs = KL.Flatten()(inputs)
        mlp_outputs = self.mlp(inputs)
        logits = self.output_layer(mlp_outputs)

        return logits


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
