# Implementation of the permutation invariant Deep Sets network from the
# https://arxiv.org/abs/1703.06114 paper.

import numpy as np
import itertools

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL

from fast_jetclass.util import flops


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


class IntNet(keras.Model):
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
    ):
        super(IntNet, self).__init__(name="InteractionNetwork")
        self.input_size = input_size
        self.number_edges = input_size[1] * (input_size[1] - 1)
        self.effects_layers = effects_layers
        self.objects_layers = objects_layers
        self.classifier_layers = classifier_layers

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
            self.effects.add(KL.Conv1D(layer, kernel_size=1))
            self.flops["layer"] += flops.get_flops_conv1d(input_shape, layer)
            input_shape[-1] = layer

            self.effects.add(KL.Activation(self.activ))
            self.flops["activation"] += flops.get_flops_activ(input_shape, self.activ)

    def _build_objects_net(self):
        input_shape = [
            self.input_size[1],
            self.input_size[-1] + self.effects_layers[-1],
        ]
        self.objects = keras.Sequential(name="ObjectsNetwork")

        for layer in self.objects_layers:
            self.objects.add(KL.Conv1D(layer, kernel_size=1))
            self.flops["layer"] += flops.get_flops_conv1d(input_shape, layer)
            input_shape[-1] = layer

            self.objects.add(KL.Activation(self.activ))
            self.flops["activation"] += flops.get_flops_activ(input_shape, self.activ)

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
        # Sum number of inputs into the aggregator + 1 division times number of feats.
        self.flops["bottleneck"] = (self.objects_layers[-1] + 1) * self.input_size[-1]

        return tf.reduce_mean

    def _get_max_aggregator(self):
        """Get max aggregator object and calculate number of flops."""
        # FLOPs calculation WIP.

        return tf.reduce_max

    def _build_classifier(self):
        input_shape = self.objects_layers[-1]
        self.classifier = keras.Sequential(name="ClassifierNetwork")
        for layer in self.classifier_layers:
            self.classifier.add(KL.Dense(layer))
            self.flops["layer"] += flops.get_flops_dense(input_shape, layer)
            input_shape = layer

            self.classifier.add(KL.Activation(self.activ))
            self.flops["activation"] += flops.get_flops_activ(input_shape, self.activ)

        # Get the flops of the output layer.
        self.flops["layer"] += flops.get_flops_dense(layer, self.output_dim)

    def save_flops(self, outdir):
        """Saves flops of model to output directory."""
        flops_file_path = os.path.join(outdir, "flops.json")
        with open(flops_file_path, "w") as file:
            json.dump(flops, file)
        print(tcols.OKGREEN + "Saved flops information to json file." + tcols.ENDC)

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
