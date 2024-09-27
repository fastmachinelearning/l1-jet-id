# Deepsets models in a format friendly for synthetisation. For more details on the
# architecture see the deepsets.py file.

import numpy as np

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL
import qkeras


def deepsets_invariant_synth(
    input_size: tuple,
    phi_layers: list = [32, 32, 32],
    rho_layers: list = [16],
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
        phi_layers: List of number of nodes for each layer of the phi network.
        rho_layers: List of number of nodes for each layer of the rho network.
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

    deepsets_input = keras.Input(shape=input_size[1:], name="input_layer")

    # Phi network.
    x = qkeras.QDense(
        phi_layers[0], kernel_quantizer=quant, bias_quantizer=quant, name=f"phi{1}"
    )(deepsets_input)
    x = qkeras.QActivation(activ)(x)
    for i, layer in enumerate(phi_layers[1:]):
        x = qkeras.QDense(
            layer, kernel_quantizer=quant, bias_quantizer=quant, name=f"phi{i+2}"
        )(x)
        x = qkeras.QActivation(activ)(x)

    # Trick to change the precision of the input to the aggregator.
    x = qkeras.QActivation(
        qkeras.quantized_bits(**aggreg_precision, symmetric=0, keep_negative=1)
    )(x)

    # Aggregator
    agg = choose_aggregator(aggreg)
    x = agg(x)

    # Rho network.
    for i, layer in enumerate(rho_layers):
        x = qkeras.QDense(
            layer, kernel_quantizer=quant, bias_quantizer=quant, name=f"rho{i+1}"
        )(x)
        x = qkeras.QActivation(activ)(x)

    deepsets_output = KL.Dense(output_dim)(x)
    deepsets_output = KL.Softmax()(deepsets_output)
    deepsets = keras.Model(deepsets_input, deepsets_output, name="deepsets_invariant")

    return deepsets


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
