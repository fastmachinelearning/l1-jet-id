# Loads a model and runs it on data it was not trained on.

import os
import json
import glob

# Silence the info from tensorflow in which it brags that it can run on cpu nicely.
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "2"

import numpy as np
import tensorflow as tf
from tensorflow import keras
import sklearn

# keras.utils.set_random_seed(123)

from fast_jetclass.util import util
from fast_jetclass.util import plots
from fast_jetclass.util import flops
from fast_jetclass.util.terminal_colors import tcols
from fast_jetclass.data.data import HLS4MLData150

# Set keras float precision. Default is float32.
# tf.keras.backend.set_floatx("float64")


def main(args):
    util.device_info()
    # Get the model directory for each of the kfolds.
    model_dirs = glob.glob(os.path.join(args.root_dir, "*kfold*"))
    hyperparams = util.load_hyperparameter_file(args.root_dir)

    # The data configuration should be the same for all kfolds, so take it from one.
    valid_data = util.import_data(hyperparams["data_hyperparams"], train=False)
    valid_data.shuffle_constituents(args.seed)

    util.nice_print_dictionary(
        "Testing model w/ hps:", hyperparams["model_hyperparams"]
    )
    kfold_metrics = {
        "tprs": [],
        "fprs": [],
        "aucs": [],
        "fats": [],
        "accs": [],
        "loss": [],
    }
    for idx, model_dir in enumerate(model_dirs):
        print(f"Testing model from kfold configuration {idx}")
        model_metrics = evaluate_model(valid_data, hyperparams, model_dir, args.seed)
        for key in kfold_metrics.keys():
            kfold_metrics[key].append(model_metrics[key])

    compute_average_metrics(kfold_metrics, args.root_dir)


def evaluate_model(data: HLS4MLData150, hyperparams: dict, model_dir: str, seed: int):
    """Evaluate a model given its hyperparameters."""
    model = import_model(model_dir, hyperparams)
    plots_dir = util.make_output_directories(model_dir, f"plots_{seed}")

    print(tcols.HEADER + f"\nRunning inference for {model_dir}" + tcols.ENDC)
    y_pred = run_inference(model, data, plots_dir)

    roc_metrics = plots.roc_curves(plots_dir, y_pred, data.y)
    plots.dnn_output(plots_dir, y_pred)
    print(tcols.OKGREEN + "\nPlotting done! \U0001F4C8\U00002728" + tcols.ENDC)

    kfold_metrics = {}
    kfold_metrics.update({"fprs": roc_metrics[0]})
    kfold_metrics.update({"tprs": roc_metrics[1]})
    kfold_metrics.update({"aucs": roc_metrics[2]})
    kfold_metrics.update({"fats": roc_metrics[3]})
    kfold_metrics.update({"accs": calculate_accuracy(y_pred, data.y)})
    kfold_metrics.update({"loss": compute_crossent(y_pred, data.y)})

    save_model_weights(model_dir, model)

    return kfold_metrics


def compute_average_metrics(kfold_metrics: dict, kfold_root_dir: str):
    """Compute the average metrics over the kfolds."""
    print(tcols.HEADER + "\nAVERAGE RESULTS..." + tcols.ENDC)
    outdir = util.make_output_directory(kfold_root_dir, "average_plots")

    # Get an array of TPRs corresponding to the points where the FPRs were computed
    # for a certain kfold. Arbitrarily, choose the TPRs of the 1st kfold.
    tprs_baseline = kfold_metrics["tprs"][0]
    kfold_metrics.pop("tprs")

    avg_metrics = {}
    for key, value in kfold_metrics.items():
        avg_metrics.update(
            {f"{key}": np.mean(value, axis=0), f"{key}_errs": np.std(value, axis=0)}
        )
    variance_fats = np.var(kfold_metrics["fats"], axis=0)

    roc_uncert_plot_data = avg_metrics.copy()
    del roc_uncert_plot_data["accs"]
    del roc_uncert_plot_data["accs_errs"]
    del roc_uncert_plot_data["loss"]
    del roc_uncert_plot_data["loss_errs"]

    roc_uncert_plot_data.update({"tpr": tprs_baseline, "outdir": outdir})
    plots.roc_curves_uncert(**roc_uncert_plot_data)
    inverse_fats = 1 / np.mean(avg_metrics["fats"])
    mean_fats_err = np.sqrt(np.sum(variance_fats))
    inverse_fats_error = mean_fats_err * (inverse_fats**2)

    print(f"Accuracy: {avg_metrics['accs']:.3f} \u00B1 {avg_metrics['accs_errs']:.3f}")
    print(f"Avg loss: {avg_metrics['loss']:.3f} \u00B1 {avg_metrics['loss_errs']:.3f}")
    print(f"Average 1/<FPR>: {inverse_fats:.3f} \u00B1 {inverse_fats_error:.3f}")


def save_model_weights(model_dir: str, model: keras.Model):
    """Saves the weights of a keras model to a specified path."""
    print(tcols.OKGREEN + "\nSaving the model weights..." + tcols.ENDC)
    weights_file_path = os.path.join(model_dir, "model_weights.h5")
    model.save_weights(weights_file_path, save_format="h5")


def run_inference(model: keras.Model, data: HLS4MLData150, plots_dir: str):
    """Computes predictions of a model and saves them to numpy files."""
    y_pred = model.predict(data.x)
    if isinstance(model.layers[-1], keras.layers.Dense):
        # Pass the outputs through a softmax layer if the last layer is just a dense.
        # i.e., there's not softmax intrinsic to the network in the last layer.
        y_pred = tf.nn.softmax(y_pred).numpy()

    y_pred.astype("float32").tofile(os.path.join(plots_dir, "y_pred.dat"))

    return y_pred


def compute_crossent(y_pred: np.ndarray, y_true: np.ndarray):
    """Computes corss-entropy loss given the predictions of the model and the truth."""
    categorical_crossent = keras.losses.CategoricalCrossentropy()
    ce_loss = categorical_crossent(y_true, y_pred).numpy()
    print(tcols.OKCYAN + f"Cross-entropy loss: " + tcols.ENDC, ce_loss)

    return ce_loss


def import_model(model_dir: str, hyperparams: dict):
    """Imports the model from a specified path. Model is saved in tf format."""
    print(tcols.HEADER + "Importing the model..." + tcols.ENDC)
    model = keras.models.load_model(model_dir, compile=False)
    model.summary(expand_nested=True)

    return model


def count_flops(model_dir: str, model: keras.Model):
    """Counts the flops a model does and saves the result to a text file."""
    nflops = flops.get_flops_ds(model)
    print("\n".join(f"{k} FLOPs: {v}" for k, v in nflops.items()))
    print(f"{'':=<65}")
    util.save_flops_file(nflops, model_dir)


def calculate_accuracy(y_pred: np.ndarray, y_true: np.ndarray):
    """Computes accuracy for a model's predictions."""
    acc = keras.metrics.CategoricalAccuracy()
    acc.update_state(y_true, y_pred)
    print(tcols.OKCYAN + f"Accuracy: " + tcols.ENDC, acc.result().numpy())

    return acc.result().numpy()
