# Training of the model defined in the model.py file.

import os
import numpy as np

# Silence the info from tensorflow in which it brags that it can run on cpu nicely.
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "2"
import tensorflow as tf
from tensorflow import keras
from tensorflow_model_optimization.python.core.sparsity.keras import pruning_callbacks

# keras.utils.set_random_seed(123)

import absl.logging
absl.logging.set_verbosity(absl.logging.ERROR)

import util.util
import util.plots
import util.data
from util.terminal_colors import tcols
from . import util as dsutil

# Set keras float precision. Default is float32.
# tf.keras.backend.set_floatx("float64")


def main(args):
    util.util.device_info()
    outdir = util.util.make_output_directory("trained_deepsets", args["outdir"])
    util.util.save_hyperparameters_file(args, outdir)

    data = util.data.Data.load_kfolds(**args["data_hyperparams"])
    model = build_model(args, data)
    history = train_model(model, data, args)

    print(tcols.OKGREEN + "\n\n\nSAVING MODEL TO: " + tcols.ENDC, outdir)
    model.save(outdir, save_format="tf")
    plot_model_performance(history.history, outdir)


def build_model(args: dict, data: util.data.Data):
    """Instantiate the model with chosen hyperparams and return it."""
    print(tcols.HEADER + "\n\nINSTANTIATING MODEL" + tcols.ENDC)
    model = dsutil.choose_deepsets(
        args["deepsets_type"],
        data.ntrain_jets,
        data.ncons,
        data.nfeat,
        args["model_hyperparams"],
        args["compilation"],
        args["training_hyperparams"],
    )
    model.summary(expand_nested=True)

    return model


def train_model(model, data, args: dict):
    """Fit the model to the data."""
    print(tcols.HEADER + "\n\nTRAINING THE MODEL \U0001F4AA" + tcols.ENDC)
    dsutil.print_training_attributes(model, args)

    history = model.fit(
        data.train_data,
        data.train_target,
        epochs=args["training_hyperparams"]["epochs"],
        batch_size=args["training_hyperparams"]["batch"],
        verbose=2,
        callbacks=get_tensorflow_callbacks(args),
        validation_data=(data.test_data, data.test_target),
        shuffle=True,
    )

    return history


def plot_model_performance(history: dict, outdir: str):
    """Does different plots that show the performance of the trained model."""
    util.plots.loss_vs_epochs(outdir, history["loss"], history["val_loss"])
    util.plots.accuracy_vs_epochs(
        outdir,
        history["categorical_accuracy"],
        history["val_categorical_accuracy"],
    )


def get_tensorflow_callbacks(args: dict):
    """Prepare the callbacks for the training."""
    early_stopping = keras.callbacks.EarlyStopping(
        monitor="val_categorical_accuracy", patience=20
    )
    learning = keras.callbacks.ReduceLROnPlateau(
        monitor="val_categorical_accuracy", factor=0.8, patience=10, min_lr=0.0001
    )
    if args["training_hyperparams"]["pruning_rate"] > 0:
        pruning = pruning_callbacks.UpdatePruningStep()
        return [early_stopping, learning, pruning]

    return [early_stopping, learning]
