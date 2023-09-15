import itertools

import tensorflow as tf
import numpy as np


class NodeEdgeProjection(tf.keras.layers.Layer):
    def __init__(self, receiving=True, node_to_edge=True, **kwargs):
        super().__init__(**kwargs)

        self._receiving = receiving
        self._node_to_edge = node_to_edge

    def build(self, input_shape):
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
            shape = (1, self._n_edges, self._n_nodes)
        else:
            shape = (1, self._n_nodes, self._n_edges)
        adjacency_matrix = np.zeros(shape, dtype=float)

        for i, (r, s) in enumerate(receiver_sender_list):
            if self._node_to_edge:
                if self._receiving:
                    adjacency_matrix[0, i, r] = 1
                else:
                    adjacency_matrix[0, i, s] = 1
            else:
                if self._receiving:
                    adjacency_matrix[0, r, i] = 1
                else:
                    adjacency_matrix[0, s, i] = 1

        return tf.Variable(
            initial_value=adjacency_matrix,
            name="adjacency_matrix",
            dtype="float32",
            shape=shape,
            trainable=False,
        )

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
