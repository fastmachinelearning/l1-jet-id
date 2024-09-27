# Definition of the training procedure for the deepsets network.

import os
import numpy as np

import tensorflow as tf
from tensorflow import keras

# Set keras seed for reproducibility.
# keras.utils.set_random_seed(123)

import absl.logging

absl.logging.set_verbosity(absl.logging.ERROR)

from fast_jetclass.util import util
from fast_jetclass.util import plots
from fast_jetclass.util.terminal_colors import tcols
from fast_jetclass.deepsets import util as dsutil
from fast_jetclass.data.data import HLS4MLData150

# Set keras float precision. Default is float32.
# tf.keras.backend.set_floatx("float64")


def main(config: dict):
    util.device_info()
    outdir = util.make_output_directory("trained_deepsets", config["outdir"])
    util.save_hyperparameters_file(config, outdir)

    train_data = util.import_data(config["data_hyperparams"], train=True)
    batch_size = config["training_hyperparams"]["batch_size"]
    input_size = (batch_size, train_data.nconst, train_data.nfeats)

    model, model_callbacks = build_model(config, train_data.njets, input_size)
    initial_weights = model.get_weights()

    util.print_training_attributes(model, config["training_hyperparams"])
    for kfold, (train_idx, valid_idx) in enumerate(train_data.kfolds):
        print(tcols.HEADER + f"\nTRAINING kfolding {kfold + 1} \U0001F4AA" + tcols.ENDC)
        train_kfolds = (train_data.x[train_idx], train_data.y[train_idx])
        valid_kfolds = (train_data.x[valid_idx], train_data.y[valid_idx])
        outdir_kfold = util.make_output_directory(outdir, f"kfolding{kfold + 1}")
        train_and_save(
            model,
            model_callbacks,
            train_kfolds,
            valid_kfolds,
            config["training_hyperparams"],
            outdir_kfold,
        )
        model.set_weights(initial_weights)
        tf.keras.backend.clear_session()


def build_model(config: dict, njets: int, input_size: tuple):
    """Instantiate the model with chosen hyperparams and return it."""
    print(tcols.HEADER + "\n\nINSTANTIATING MODEL:" + tcols.ENDC)
    config["model_hyperparams"].update({"input_size": input_size})
    model = dsutil.choose_deepsets(config["model_type"], config["model_hyperparams"])
    model, model_callbacks = dsutil.compile_deepsets(
        njets, input_size, model, config["compilation_hyperparams"]
    )
    model.summary(expand_nested=True)
    if not "nbits" in config["model_hyperparams"]:
        print(tcols.OKGREEN + f"Model FLOPs: " + tcols.ENDC, sum(model.flops.values()))

    return model, model_callbacks


def train_and_save(
    model: keras.Model,
    model_callbacks: list,
    train_data: tuple,
    valid_data: tuple,
    hps: dict,
    outdir: str,
):
    """Run keras training and save model at the end."""
    history = model.fit(
        x=train_data[0],
        y=train_data[1],
        callbacks=model_callbacks,
        validation_data=valid_data,
        **hps,
    )
    print(tcols.OKGREEN + "\n\n\nSAVING MODEL TO: " + tcols.ENDC, outdir)
    model.save(outdir, save_format="tf")
    plot_model_performance(history.history, outdir)


def plot_model_performance(history: dict, outdir: str):
    """Does different plots that show the performance of the trained model."""
    plots.loss_vs_epochs(outdir, history["loss"], history["val_loss"])
    plots.accuracy_vs_epochs(
        outdir,
        history["categorical_accuracy"],
        history["val_categorical_accuracy"],
    )
