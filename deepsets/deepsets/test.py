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

import util.util
import util.plots
import util.data
from . import flops
from util.terminal_colors import tcols

# Set keras float precision. Default is float32.
# tf.keras.backend.set_floatx("float64")


def main(args):
    util.util.device_info()
    seed = args["const_seed"]
    if args["kfolds"]:
        kfold_root_dir = args["model_dir"]
        args["model_dir"] = get_kfolded_models(args["model_dir"])

    plots_dir = util.util.make_output_directories(
        args["model_dir"], f"plots_{args['const_seed']}"
    )
    hyperparam_dict = util.util.load_hyperparameter_files(args["model_dir"])

    if args["kfolds"]:
        data = import_data(hyperparam_dict[0])
        data.test_data = shuffle_constituents(data.test_data, seed)
        kfold_metrics = {"fprs": [], "aucs": [], "fats": [], "accs": [], "loss": []}
        for idx, hyperparams in enumerate(hyperparam_dict):
            tprs_baseline, model_kfold_metrics = evaluate_model(
                data, hyperparams, args["model_dir"][idx], plots_dir[idx], seed
            )
            for key in model_kfold_metrics.keys():
                kfold_metrics[key].append(model_kfold_metrics[key])

        compute_average_metrics(tprs_baseline, kfold_metrics, kfold_root_dir)
    else:
        data = import_data(hyperparam_dict)
        data.test_data = shuffle_constituents(data.test_data, seed)
        _, model_metrics = evaluate_model(
            data, hyperparam_dict, args["model_dir"], plots_dir, seed
        )
        util.util.nice_print_dictionary(model_metrics)


def compute_average_metrics(tprs_baseline, kfold_metrics: dict, kfold_root_dir: str):
    """Compute the average metrics over the kfolds."""
    print(tcols.HEADER + "\nAVERAGE RESULTS..." + tcols.ENDC)
    outdir = util.util.make_output_directory(kfold_root_dir, "average_plots")

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
    util.plots.roc_curves_uncert(**roc_uncert_plot_data)
    inverse_fats = 1 / np.mean(avg_metrics["fats"])
    mean_fats_err = np.sqrt(np.sum(variance_fats))
    inverse_fats_error = mean_fats_err * (inverse_fats**2)

    print(f"Accuracy: {avg_metrics['accs']:.3f} \u00B1 {avg_metrics['accs_errs']:.3f}")
    print(f"Avg loss: {avg_metrics['loss']:.3f} \u00B1 {avg_metrics['loss_errs']:.3f}")
    print(f"Average 1/<FPR>: {inverse_fats:.3f} \u00B1 {inverse_fats_error:.3f}")


def evaluate_model(data, hyperparams: dict, model_dir: str, plots_dir: list, seed: int):
    """Evaluate a model given its hyperparameters."""
    model = import_model(model_dir, hyperparams)

    if hyperparams["model_hyperparams"]["nbits"] < 1:
        # Counting of FLOPs only implemented for the floating point models.
        count_flops(model_dir, model)

    print(tcols.HEADER + f"\nRunning inference for {model_dir}" + tcols.ENDC)
    y_pred = run_inference(model, data, plots_dir)

    roc_metrics = util.plots.roc_curves(plots_dir, y_pred, data.test_target)
    util.plots.dnn_output(plots_dir, y_pred)
    print(tcols.OKGREEN + "\nPlotting done! \U0001F4C8\U00002728" + tcols.ENDC)

    kfold_metrics = {}
    kfold_metrics.update({"fprs": roc_metrics[0]})
    kfold_metrics.update({"aucs": roc_metrics[2]})
    kfold_metrics.update({"fats": roc_metrics[3]})
    kfold_metrics.update({"accs": calculate_accuracy(y_pred, data.test_target)})
    kfold_metrics.update({"loss": compute_crossent(y_pred, data.test_target)})

    save_model_weights(model_dir, model)

    return roc_metrics[1], kfold_metrics


def save_model_weights(model_dir: str, model: keras.Model):
    """Saves the weights of a keras model to a specified path."""
    print(tcols.OKGREEN + "\nSaving the model weights..." + tcols.ENDC)
    weights_file_path = os.path.join(model_dir, "model_weights.h5")
    model.save_weights(weights_file_path, save_format="h5")


def get_kfolded_models(kfolds_folder: str):
    return glob.glob(os.path.join(kfolds_folder, "*kfold*"))


def run_inference(model: keras.Model, data: util.data.Data, plots_dir: list):
    """Computes predictions of a model and saves them to numpy files."""
    y_pred = model.predict(data.test_data)
    y_pred.astype("float32").tofile(os.path.join(plots_dir, "y_pred.dat"))

    return y_pred


def compute_crossent(y_pred: np.ndarray, y_true: np.ndarray):
    """Computes corss-entropy loss given the predictions of the model and the truth."""
    categorical_crossent = keras.losses.CategoricalCrossentropy()
    ce_loss = categorical_crossent(y_true, y_pred).numpy()
    print(tcols.OKCYAN + f"Cross-entropy loss: " + tcols.ENDC, ce_loss)

    return ce_loss


def import_data(hyperparams):
    """Import the data used for training and validating the network."""
    fpath = hyperparams["data_hyperparams"]["fpath"]
    if hyperparams["data_hyperparams"]["fname_test"]:
        fname = hyperparams["data_hyperparams"]["fname_test"].rsplit("_", 1)[0]
    else:
        fname = hyperparams["data_hyperparams"]["fname"]

    return util.data.Data(fpath=fpath, fname=fname, only_test=True)


def import_model(model_dir: str, hyperparams: dict):
    """Imports the model from a specified path. Model is saved in tf format."""
    print(tcols.HEADER + "Importing the model..." + tcols.ENDC)
    util.util.nice_print_dictionary("DS hps:", hyperparams["model_hyperparams"])
    model = keras.models.load_model(model_dir, compile=False)
    model.summary(expand_nested=True)

    return model


def count_flops(model_dir: str, model: keras.Model):
    """Counts the flops a model does and saves the result to a text file."""
    nflops = flops.get_flops(model)
    print("\n".join(f"{k} FLOPs: {v}" for k, v in nflops.items()))
    print(f"{'':=<65}")
    util.util.save_flops_file(nflops, model_dir)


def calculate_accuracy(y_pred: np.ndarray, y_true: np.ndarray):
    """Computes accuracy for a model's predictions."""
    acc = keras.metrics.CategoricalAccuracy()
    acc.update_state(y_true, y_pred)
    print(tcols.OKCYAN + f"Accuracy: " + tcols.ENDC, acc)

    return acc.result().numpy()


def shuffle_constituents(data: np.ndarray, const_seed: int) -> np.ndarray:
    """Shuffles the constituents based on an array of seeds.

    Note that each jet's constituents is shuffled with respect to a seed that is fixed.
    This seed is different for each jet.
    """
    print("Shuffling constituents...")

    rng = np.random.default_rng(const_seed)
    seeds = rng.integers(low=0, high=10000, size=data.shape[0])

    for jet_idx, seed in enumerate(seeds):
        shuffling = np.random.RandomState(seed=seed).permutation(data.shape[1])
        data[jet_idx, :] = data[jet_idx, shuffling]

    print(tcols.OKGREEN + f"Shuffling done! \U0001F0CF" + tcols.ENDC)

    return data
