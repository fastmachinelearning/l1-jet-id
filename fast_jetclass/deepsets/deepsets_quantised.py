# Quantised deepsets networks equivalent to the float32 implementations in deepsets.py.

import numpy as np

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL
import qkeras


class DeepSetsInvQuantised(keras.Model):
    """Deep sets permutation invariant graph network https://arxiv.org/abs/1703.06114.

    The weights of this model are quantised to a given number of bits.

    Attributes:
        input_size: Tuple with the shape of the input data.
        phi_layers: List of number of nodes for each layer of the phi network.
        rho_layers: List of number of nodes for each layer of the rho network.
        activ: String that specifies Activation function to use between the dense layers.
        aggreg: String that specifies the type of aggregator to use after the phi net.
        output_dim: The output dimension of the network. For a supervised task, this is
            equal to the number of classes.
        nbits: Number of bits to quantise the weights of the model to.
    """

    def __init__(
        self,
        input_size: tuple,
        phi_layers: list = [32, 32, 32],
        rho_layers: list = [16],
        output_dim: int = 5,
        activ: str = "relu",
        aggreg: str = "mean",
        nbits: int = 8,
    ):
        super(DeepSetsInvQuantised, self).__init__(name="InvariantDeepsetsQuantised")
        self.input_size = input_size
        self.output_dim = output_dim
        self.phi_layers = phi_layers
        self.rho_layers = rho_layers
        self.aggreg = aggreg
        self.quant = format_quantiser(nbits)
        self.activ = format_qactivation(activ, 8)

        self._build_phi()
        self._build_agg()
        self._build_rho()
        self.output_layer = KL.Dense(self.output_dim, name="OutputLayer")

    def _build_phi(self):
        self.phi = keras.Sequential(name="PhiNetwork")
        for layer in self.phi_layers:
            self.phi.add(
                qkeras.QDense(
                    layer, kernel_quantizer=self.quant, bias_quantizer=self.quant
                )
            )
            self.phi.add(qkeras.QActivation(self.activ))

    def _build_agg(self):
        switcher = {
            "mean": lambda: tf.reduce_mean,
            "max": lambda: tf.reduce_max,
        }
        self.agg = switcher.get(self.aggreg, lambda: None)()
        if self.agg is None:
            raise ValueError(
                "Given aggregation string is not implemented. "
                "See deepsets.py and add string and corresponding object there."
            )

    def _build_rho(self):
        input_shape = self.phi_layers[-1]
        self.rho = keras.Sequential(name="RhoNetwork")
        for layer in self.rho_layers:
            self.rho.add(
                qkeras.QDense(
                    layer, kernel_quantizer=self.quant, bias_quantizer=self.quant
                )
            )
            self.rho.add(qkeras.QActivation(self.activ))

    def call(self, inputs: np.ndarray, **kwargs):
        phi_output = self.phi(inputs)
        agg_output = self.agg(phi_output, axis=1)
        rho_output = self.rho(agg_output)
        logits = self.output_layer(rho_output)

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
