# Implementation of a simple MLP.

import numpy as np

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL

from fast_jetclass.util import flops


class MLP(keras.Model):
    """Simple MLP implementation with variable number of layers and nodes per layer.

    Attributes:
        layers: List, where each element represents the number of nodes in a certain
            layer. The lenght of the list is equal to the depth of the network.
        activ: Activation function to use between the dense layers.
    """

    def __init__(
        self,
        input_size: tuple,
        layers: list,
        activ: str = "relu",
        output_dim: int = 5,
    ):
        super(MLP, self).__init__(name="MLP")
        self.input_size = input_size
        self.mlp_layers = layers
        self.activ = activ
        self.output_dim = output_dim
        self.flops = {"layer": 0, "activation": 0}

        self._build_mlp()
        self.output_layer = KL.Dense(self.output_dim)

    def _build_mlp(self):
        input_shape = list(self.input_size[1:])
        self.mlp = keras.Sequential()
        for layer_nodes in self.mlp_layers:
            self.mlp.add(KL.Dense(layer_nodes))
            self.flops["layer"] += flops.get_flops_dense(input_shape, layer_nodes)
            self.mlp.add(KL.Activation(self.activ))
            self.flops["activation"] += flops.get_flops_activ(input_shape, self.activ)

        self.flops["layer"] += flops.get_flops_dense(input_shape, self.output_dim)

    def call(self, inputs: np.ndarray):
        inputs = KL.Flatten()(inputs)
        mlp_outputs = self.mlp(inputs)
        logits = self.output_layer(mlp_outputs)

        return logits


class MLPRegular(keras.Model):
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
        **kwargs
    ):
        super(MLPRegular, self).__init__(name="MLPRegularised")
        self.input_size = input_size
        self.mlp_layers = layers
        self.activ = activ
        self.output_dim = output_dim
        self.flops = {"layer": 0, "activation": 0}

        self._build_mlp(**kwargs)
        self.output_layer = KL.Dense(self.output_dim)

    def _build_mlp(self, **kwargs):
        input_shape = list(self.input_size[1:])
        self.mlp = keras.Sequential()
        for layer_nodes in self.mlp_layers:
            self.mlp.add(
                KL.Dense(
                    layer_nodes,
                    kernel_regularizer=keras.regularizers.L1(kwargs["l1_coeff"]),
                )
            )
            self.flops["layer"] += flops.get_flops_dense(input_shape, layer_nodes)
            self.mlp.add(KL.Activation(self.activ))
            self.flops["activation"] += flops.get_flops_activ(input_shape, self.activ)

        self.flops["layer"] += flops.get_flops_dense(input_shape, self.output_dim)

    def call(self, inputs: np.ndarray):
        inputs = KL.Flatten()(inputs)
        mlp_outputs = self.mlp(inputs)
        logits = self.output_layer(mlp_outputs)

        return logits
