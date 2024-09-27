# Utility methods for the mlp network training, testing, etc...

import os
import json
import numpy as np

import tensorflow as tf
from tensorflow import keras
import tensorflow_model_optimization as tfmot
from tensorflow_model_optimization.sparsity import keras as sparsity

from fast_jetclass.mlp.mlp import MLP
from fast_jetclass.mlp.mlp import MLPRegular
from fast_jetclass.mlp.mlp_quantised import MLPRegularQuantised
from fast_jetclass.mlp.mlp_synth import mlp_regularised_synth
from fast_jetclass.util.terminal_colors import tcols


def choose_mlp(mlp_type: str, model_hyperparams: dict) -> keras.models.Model:
    """Constructs an MLP keras model, ready for training, and returns it.

    Args:
        mlp_type: String specifying the type of mlp, e.g., quantised or not.
        model_hyperparams: Hyperparameters concerning the architecture of the model.
            trainable model object in keras, including the optimizer.
    """
    print("Instantiating model with the hyperparameters:")
    for key in model_hyperparams:
        print(f"{key}: {model_hyperparams[key]}")

    switcher = {
        "mlp": lambda: MLP(**model_hyperparams),
        "mlp_reg": lambda: MLPRegular(**model_hyperparams),
        "qmlp_reg": lambda: MLPRegularQuantised(**model_hyperparams),
        "smlp_reg": lambda: mlp_regularised_synth(**model_hyperparams),
    }

    model = switcher.get(mlp_type, lambda: None)()

    return model


def compile_mlp(njets: int, input_size: tuple, model: keras.Model, hps: dict):
    """Compile the mlp model architecture in the keras framework.

    Args:
        njets: The total number of jets in the data set.
        input_size: Tuple containing the batch size, number of constituents per jet,
            and the number of features per constituent, respectively.
        model: The model object in keras.
        hps: Dictionary with hyperparameters used in compilation process.
    """
    model_callbacks = []
    if "pruning_rate" in hps.keys():
        if hps["pruning_rate"] < 0 or hps["pruning_rate"] > 1:
            raise ValueError("Given pruning rate is not valid!")
        nsteps = njets // input_size[0]
        model = prune_model(model, nsteps, hps["pruning_rate"])
        model_callbacks.append(pruning_callbacks.UpdatePruningStep())

    loss = choose_loss(hps["loss"])
    optimizer = load_optimizer(hps["optimizer"], **hps["optimizer_hps"])

    opt_callbacks = hps["optimizer_callbacks"]
    early_stopping = keras.callbacks.EarlyStopping(**opt_callbacks["early_stopping"])
    lr_decay = keras.callbacks.ReduceLROnPlateau(**opt_callbacks["lr_decay"])

    model_callbacks.append(early_stopping)
    model_callbacks.append(lr_decay)

    model.compile(loss=loss, optimizer=optimizer, metrics=hps["metrics"])
    model.build(input_size)
    print(tcols.OKGREEN + "Model compiled and built!" + tcols.ENDC)

    return model, model_callbacks


def load_optimizer(choice: str, **kwargs) -> keras.optimizers.Optimizer:
    """Return tensorflow optimizer object given a string identifier."""

    switcher = {
        "adam": lambda: keras.optimizers.Adam(**kwargs),
    }

    optimiser = switcher.get(choice, lambda: None)()

    return optimiser


def choose_loss(choice: str, **kwargs) -> keras.losses.Loss:
    """Return tensorflow loss object given an identifier string."""

    switcher = {
        "categorical_crossentropy": lambda: keras.losses.CategoricalCrossentropy(
            **kwargs
        ),
        "softmax_with_crossentropy": lambda: tf.nn.softmax_cross_entropy_with_logits,
    }

    loss = switcher.get(choice, lambda: None)()

    return loss


def prune_model(model, nsteps: int, pruning_rate: float = 0.5):
    """Prunes the weights of a model with a given pruning rate."""

    def prune_function(layer):
        pruning_params = {
            "pruning_schedule": sparsity.PolynomialDecay(
                initial_sparsity=0.0,
                final_sparsity=pruning_rate,
                begin_step=nsteps * 2,
                end_step=nsteps * 10,
                frequency=nsteps,
            )
        }
        if isinstance(layer, tf.keras.layers.Dense) and layer.name != "output":
            return tfmot.sparsity.keras.prune_low_magnitude(layer, **pruning_params)
        return layer

    model = tf.keras.models.clone_model(model, clone_function=prune_function)

    return model
