# Implementation of the permutation invariant Deep Sets network from the
# https://arxiv.org/abs/1703.06114 paper.

import numpy as np
import itertools

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL
import qkeras


class NodeEdgeProjection(KL.Layer):
    """Layer that build the adjacency matrix for the interaction network graph.

    Attributes:
        receiving: Whether we are building the receiver (True) or sender (False)
            adjency matrix.
        node_to_edge: Whether the projection happens from nodes to edges (True) or
            the edge matrix gets projected into the nodes (False).
    """

    def __init__(self, receiving: bool = True, node_to_edge: bool = True, **kwargs):
        super().__init__(**kwargs)
        self._receiving = receiving
        self._node_to_edge = node_to_edge

    def build(self, input_shape: tuple):
        if self._node_to_edge:
            self._n_nodes = input_shape[-2]
            self._n_edges = self._n_nodes * (self._n_nodes - 1)
        else:
            self._n_edges = input_shape[-2]
            self._n_nodes = int((np.sqrt(4 * self._n_edges + 1) + 1) / 2)

        self._adjacency_matrix = self._assign_adjacency_matrix()

    def _assign_adjacency_matrix(self):
        receiver_sender_list = itertools.permutations(range(self._n_nodes), r=2)
        if self._node_to_edge:
            shape, adjacency_matrix = self._assign_node_to_edge(receiver_sender_list)
        else:
            shape, adjacency_matrix = self._assign_edge_to_node(receiver_sender_list)

        return tf.Variable(
            initial_value=adjacency_matrix,
            name="adjacency_matrix",
            dtype="float32",
            shape=shape,
            trainable=False,
        )

    def _assign_node_to_edge(self, receiver_sender_list: list):
        shape = (1, self._n_edges, self._n_nodes)
        adjacency_matrix = np.zeros(shape, dtype=float)
        for i, (r, s) in enumerate(receiver_sender_list):
            if self._receiving:
                adjacency_matrix[0, i, r] = 1
            else:
                adjacency_matrix[0, i, s] = 1

        return shape, adjacency_matrix

    def _assign_edge_to_node(self, receiver_sender_list: list):
        shape = (1, self._n_nodes, self._n_edges)
        adjacency_matrix = np.zeros(shape, dtype=float)
        for i, (r, s) in enumerate(receiver_sender_list):
            if self._receiving:
                adjacency_matrix[0, r, i] = 1
            else:
                adjacency_matrix[0, s, i] = 1

        return shape, adjacency_matrix

    def call(self, inputs):
        return tf.matmul(self._adjacency_matrix, inputs)

    def get_config(self):
        config = super().get_config()
        config.update(
            {
                "receiving": self._receiving,
                "node_to_edge": self._node_to_edge,
            }
        )
        return config


class IntNetQuantised(keras.Model):
    """Interaction network model from https://arxiv.org/abs/1612.00222.

    Attributes:
        input_size: Tuple with the shape of the input data.
        effects_layers: List of number of nodes for each layer of the effects MLP.
        objects_layers: List of number of nodes for each layer of the objects MLP.
        classifier_layers: List of number of nodes for each layer of the classifier MLP.
        activ: String that specifies Activation function to use between the dense layers.
        aggreg: String that specifies the type of aggregator to use after the obj net.
        output_dim: The output dimension of the network. For a supervised task, this is
            equal to the number of classes, which in our case is 5.
        nbits: Number of bits that the model is quantised to.
    """

    def __init__(
        self,
        input_size: tuple,
        effects_layers: list = [32, 32, 32],
        objects_layers: list = [16],
        classifier_layers: list = [32, 32],
        output_dim: int = 5,
        activ: str = "relu",
        aggreg: str = "mean",
        nbits: int = 8,
    ):
        super(IntNetQuantised, self).__init__(name="InteractionNetworkQuantised")
        self.input_size = input_size
        self.number_edges = input_size[1] * (input_size[1] - 1)
        self.effects_layers = effects_layers
        self.objects_layers = objects_layers
        self.classifier_layers = classifier_layers
        self.quant = format_quantiser(nbits)
        self.activ = format_qactivation(activ, 8)

        self.output_dim = output_dim
        self.aggreg = aggreg
        self.activ = activ
        self.flops = {"layer": 0, "activation": 0, "bottleneck": 0}

        self.receiver_matrix_proj = NodeEdgeProjection(
            name="receiver_matrix", receiving=True, node_to_edge=True
        )
        self.sender_matrix_proj = NodeEdgeProjection(
            name="sender_matrix", receiving=False, node_to_edge=True
        )
        self.effects_proj = NodeEdgeProjection(
            name="prj_effects", receiving=True, node_to_edge=False
        )

        self._build_effects_net()
        self._build_objects_net()
        self._build_agg()
        self._build_classifier()
        self.output_layer = KL.Dense(self.output_dim, name="OutputLayer")

    def _build_effects_net(self):
        input_shape = [self.input_size[1], self.input_size[-1] * 2]
        self.effects = keras.Sequential(name="EffectsNetwork")

        for layer in self.effects_layers:
            self.effects.add(
                qkeras.QConv1D(
                    layer,
                    kernel_size=1,
                    kernel_quantizer=self.quant,
                    bias_quantizer=self.quant,
                )
            )
            self.effects.add(qkeras.QActivation(self.activ))

    def _build_objects_net(self):
        input_shape = [
            self.input_size[1],
            self.input_size[-1] + self.effects_layers[-1],
        ]
        self.objects = keras.Sequential(name="ObjectsNetwork")

        for layer in self.objects_layers:
            self.objects.add(
                qkeras.QConv1D(
                    layer,
                    kernel_size=1,
                    kernel_quantizer=self.quant,
                    bias_quantizer=self.quant,
                )
            )
            self.objects.add(qkeras.QActivation(self.activ))

    def _build_agg(self):
        switcher = {
            "mean": lambda: self._get_mean_aggregator(),
            "max": lambda: self._get_max_aggregator(),
        }
        self.agg = switcher.get(self.aggreg, lambda: None)()
        if self.agg is None:
            raise ValueError(
                "Given aggregation string is not implemented. "
                "See deepsets.py and add string and corresponding object there."
            )

    def _get_mean_aggregator(self):
        """Get mean aggregator object and calculate number of flops."""

        return tf.reduce_mean

    def _get_max_aggregator(self):
        """Get max aggregator object and calculate number of flops."""

        return tf.reduce_max

    def _build_classifier(self):
        input_shape = self.objects_layers[-1]
        self.classifier = keras.Sequential(name="ClassifierNetwork")
        for layer in self.classifier_layers:
            self.classifier.add(
                qkeras.QDense(
                    layer, kernel_quantizer=self.quant, bias_quantizer=self.quant
                )
            )
            self.classifier.add(qkeras.QActivation(self.activ))

    def call(self, inputs: np.ndarray, **kwargs):
        # Shape the input to a graph.
        receiver_matrix = self.receiver_matrix_proj(inputs)
        sender_matrix = self.sender_matrix_proj(inputs)
        input_effects = KL.Concatenate(axis=-1, name="concat_eff")(
            [receiver_matrix, sender_matrix]
        )

        # Compute the effects between the nodes.
        effects_output = self.effects(input_effects)
        effects_output = self.effects_proj(effects_output)

        # Compute the effects on the nodes.
        input_objects = KL.Concatenate(axis=-1, name="concat_obj")(
            [inputs, effects_output]
        )
        objects_output = self.objects(input_objects)

        # Aggregate the output and classify the graph.
        aggreg_output = self.agg(objects_output, axis=1)
        classifier_output = self.classifier(aggreg_output)
        logits = self.output_layer(classifier_output)

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
