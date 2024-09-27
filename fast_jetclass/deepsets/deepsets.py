# Implementation of the permutation invariant Deep Sets network from the
# https://arxiv.org/abs/1703.06114 paper.

import numpy as np

import tensorflow as tf
from tensorflow import keras
import tensorflow.keras.layers as KL
import qkeras

from fast_jetclass.util import flops


class DeepSetsInv(keras.Model):
    """Deep sets permutation invariant graph network https://arxiv.org/abs/1703.06114.

    Attributes:
        input_size: Tuple with the shape of the input data.
        phi_layers: List of number of nodes for each layer of the phi network.
        rho_layers: List of number of nodes for each layer of the rho network.
        activ: String that specifies Activation function to use between the dense layers.
        aggreg: String that specifies the type of aggregator to use after the phi net.
        output_dim: The output dimension of the network. For a supervised task, this is
            equal to the number of classes.
    """

    def __init__(
        self,
        input_size: tuple,
        phi_layers: list = [32, 32, 32],
        rho_layers: list = [16],
        output_dim: int = 5,
        activ: str = "relu",
        aggreg: str = "mean",
    ):
        super(DeepSetsInv, self).__init__(name="InvariantDeepsets")
        self.input_size = input_size
        self.output_dim = output_dim
        self.phi_layers = phi_layers
        self.rho_layers = rho_layers
        self.aggreg = aggreg
        self.activ = activ
        self.flops = {"layer": 0, "activation": 0, "bottleneck": 0}

        self._build_phi()
        self._build_agg()
        self._build_rho()
        self.output_layer = KL.Dense(self.output_dim, name="OutputLayer")

    def _build_phi(self):
        input_shape = list(self.input_size[1:])
        self.phi = keras.Sequential(name="PhiNetwork")
        for layer in self.phi_layers:
            self.phi.add(KL.Dense(layer))
            self.flops["layer"] += flops.get_flops_dense(input_shape, layer)
            input_shape[-1] = layer

            self.phi.add(KL.Activation(self.activ))
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

    def _build_rho(self):
        input_shape = self.phi_layers[-1]
        self.rho = keras.Sequential(name="RhoNetwork")
        for layer in self.rho_layers:
            self.rho.add(KL.Dense(layer))
            self.flops["layer"] += flops.get_flops_dense(input_shape, layer)
            input_shape = layer

            self.rho.add(KL.Activation(self.activ))
            self.flops["activation"] += flops.get_flops_activ(input_shape, self.activ)

        # Get the flops of the output layer.
        self.flops["layer"] += flops.get_flops_dense(layer, self.output_dim)

    def _get_mean_aggregator(self):
        """Get mean aggregator object and calculate number of flops."""
        # Sum number of inputs into the aggregator + 1 division times number of feats.
        self.flops["bottleneck"] = (self.phi_layers[-1] + 1) * self.input_size[-1]

        return tf.reduce_mean

    def _get_max_aggregator(self):
        """Get max aggregator object and calculate number of flops."""
        # FLOPs calculation WIP.

        return tf.reduce_max

    def save_flops(self, outdir):
        """Saves flops of model to output directory."""
        flops_file_path = os.path.join(outdir, "flops.json")
        with open(flops_file_path, "w") as file:
            json.dump(flops, file)
        print(tcols.OKGREEN + "Saved flops information to json file." + tcols.ENDC)

    def call(self, inputs: np.ndarray, **kwargs):
        phi_output = self.phi(inputs)
        agg_output = self.agg(phi_output, axis=1)
        rho_output = self.rho(agg_output)
        logits = self.output_layer(rho_output)

        return logits
