# Deepsets models in a format friendly for synthetisation. For more details on the
# architecture see the deepsets.py file.

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


def intnet_synth(
    input_size: tuple,
    effects_layers: list = [32, 32, 32],
    objects_layers: list = [16],
    classifier_layers: list = [32, 32],
    output_dim: int = 5,
    activ: str = "relu",
    aggreg: str = "mean",
    aggreg_precision: dict = {"bits": 20, "integer": 10},
    nbits: int = 8,
):
    """Deep sets permutation invariant graph network https://arxiv.org/abs/1703.06114.

    The weights of this model are quantised to a given number of bits.

    Attributes:
        input_size: Tuple with the shape of the input data.
        effects_layers: List of number of nodes for each layer of the effects MLP.
        objects_layers: List of number of nodes for each layer of the objects MLP.
        classifier_layers: List of number of nodes for each layer of the classifier MLP.
        activ: String that specifies Activation function to use between the dense layers.
        aggreg: String that specifies the type of aggregator to use after the phi net.
        output_dim: The output dimension of the network. For a supervised task, this is
            equal to the number of classes.
        nbits: Number of bits to quantise the weights of the model to.
    """
    quant = format_quantiser(nbits)
    # Activation precision is fixed to 8. Decreasing this precision would have severe
    # impacts on the performance of the model.
    activ = format_qactivation(activ, 8)

    intnet_input = keras.Input(shape=input_size[1:], name="input_layer")

    # No operations done for the first two node-edge projection layers.
    receiver_matrix = NodeEdgeProjection(
        name="receiver_matrix", receiving=True, node_to_edge=True
    )(intnet_input)
    sender_matrix = NodeEdgeProjection(
        name="sender_matrix", receiving=False, node_to_edge=True
    )(intnet_input)

    input_effects = KL.Concatenate(axis=-1, name="concat_eff")(
        [receiver_matrix, sender_matrix]
    )
    # Effects network.
    x = qkeras.QConv1D(
        effects_layers[0],
        kernel_size=1,
        kernel_quantizer=quant,
        bias_quantizer=quant,
        name=f"effects{1}",
    )(intnet_input)
    x = qkeras.QActivation(activ)(x)
    for i, layer in enumerate(effects_layers[1:]):
        x = qkeras.QConv1D(
            layer,
            kernel_size=1,
            kernel_quantizer=quant,
            bias_quantizer=quant,
            name=f"effects{i+2}",
        )(x)
        x = qkeras.QActivation(activ)(x)

    input_objects = KL.Concatenate(axis=-1, name="concat_obj")([intnet_input, x])

    # Objects network.
    x = qkeras.QConv1D(
        objects_layers[0],
        kernel_size=1,
        kernel_quantizer=quant,
        bias_quantizer=quant,
        name=f"objects{1}",
    )(input_objects)
    x = qkeras.QActivation(activ)(x)
    for i, layer in enumerate(objects_layers[1:]):
        x = qkeras.QConv1D(
            layer,
            kernel_size=1,
            kernel_quantizer=quant,
            bias_quantizer=quant,
            name=f"objects{i+2}",
        )(x)
        x = qkeras.QActivation(activ)(x)

    # Trick to change the precision of the input to the aggregator.
    x = qkeras.QActivation(
        qkeras.quantized_bits(**aggreg_precision, symmetric=0, keep_negative=1)
    )(x)

    # Aggregator
    agg = choose_aggregator(aggreg)
    x = agg(x)

    # Classifier network.
    for i, layer in enumerate(classifier_layers):
        x = qkeras.QDense(
            layer, kernel_quantizer=quant, bias_quantizer=quant, name=f"class{i+1}"
        )(x)
        x = qkeras.QActivation(activ)(x)

    intnet_output = KL.Dense(output_dim)(x)
    intnet_output = KL.Softmax()(intnet_output)
    intnet = keras.Model(intnet_input, intnet_output, name="InteractionNetwork")

    return intnet


def choose_aggregator(choice: str):
    """Choose the aggregator keras object based on an input string."""
    switcher = {
        "mean": lambda: KL.GlobalAveragePooling1D(),
        "max": lambda: KL.GlobalMaxPooling1D(),
    }
    agg = switcher.get(choice, lambda: None)()
    if agg is None:
        raise ValueError(
            "Given aggregation string is not implemented. "
            "See deepsets.py and add string and corresponding object there."
        )

    return agg


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
