# Script that synthesizes a given deepsets model and then returns the performance
# performance metrics for the synthesis.
import sys
import io
import os
import collections.abc
import json
import contextlib

import numpy as np
import tensorflow as tf
import hls4ml
from tensorflow_model_optimization.python.core.sparsity.keras import pruning_wrapper
from tensorflow_model_optimization.sparsity.keras import strip_pruning
import qkeras

# np.random.seed(12)
# tf.random.set_seed(12)

from tensorflow import keras
import tensorflow.keras.layers as KL

from fast_jetclass.util import util
from fast_jetclass.util import plots
from fast_jetclass.util.terminal_colors import tcols
from fast_jetclass.data.data import HLS4MLData150


def main(args, synth_config: dict):
    util.device_info()
    synthesis_dir = util.make_output_directories(args.model_dir, "synthesis")

    print(tcols.OKGREEN + "\nIMPORTING DATA AND MODEL\n" + tcols.ENDC)
    root_dir = os.path.dirname(os.path.abspath(args.model_dir))
    hyperparams = util.load_hyperparameter_file(root_dir)
    valid_data = util.import_data(hyperparams["data_hyperparams"], train=False)

    # Take the first 6000 events to do the diagnosis of the synthesis.
    # More are not really needed and it increases the runtime of this script by a lot.
    valid_data.x = valid_data.x[:6000]
    valid_data.y = valid_data.y[:6000]
    valid_data.shuffle_constituents(args.seed)
    model = import_model(args.model_dir, hyperparams)

    print(tcols.OKGREEN + "\nCONFIGURING SYNTHESIS\n" + tcols.ENDC)
    hls4ml_config = hls4ml.utils.config_from_keras_model(model, granularity="name")
    deep_dict_update(hls4ml_config, synth_config)

    model_activations = get_model_activations(model)
    # Set the model activation function rounding and saturation modes.
    hls4ml.model.optimizer.get_optimizer("output_rounding_saturation_mode").configure(
        layers=model_activations,
        rounding_mode="AP_RND",
        saturation_mode="AP_SAT",
    )

    if args.diagnose:
        for layer in hls4ml_config["LayerName"].keys():
            hls4ml_config["LayerName"][layer]["Trace"] = True

    print(tcols.HEADER + "Configuration for hls4ml: " + tcols.ENDC)
    print(json.dumps(hls4ml_config, indent=4, sort_keys=True))
    hls_model = hls4ml.converters.convert_from_keras_model(
        model,
        project_name="mlp_synthesis",
        hls_config=hls4ml_config,
        output_dir=synthesis_dir,
        part="xcvu13p-flga2577-2-e",
        io_type="io_parallel",
    )

    hls_model.compile()
    if args.diagnose:
        print(tcols.OKGREEN + "\nRUNNING MODEL DIAGNOSTICS" + tcols.ENDC)
        run_trace(model, hls_model, valid_data.x, synthesis_dir)
        profile_model(model, hls_model, valid_data.x, synthesis_dir)
    hls_model.write()

    print(tcols.OKGREEN + "\nTESTING MODEL PERFORMANCE\n" + tcols.ENDC)
    print(tcols.HEADER + f"\nRunning inference for {args.model_dir}" + tcols.ENDC)
    y_pred = run_inference(model, valid_data)
    acc = calculate_accuracy(y_pred, valid_data.y)
    y_pred = hls_model.predict(valid_data.x)
    acc_synth = calculate_accuracy(y_pred, valid_data.y)
    print(f"Accuracy model: {acc:.3f}")
    print(f"Accuracy synthed model: {acc_synth:.3f}")
    print(f"Accuracy ratio: {acc_synth/acc:.3f}")


def import_model(model_dir: str, hyperparams: dict):
    """Imports the model from a specified path. Model is saved in tf format."""
    print(tcols.HEADER + "\n\nMLP hyperparams and architecture: " + tcols.ENDC)
    print(json.dumps(hyperparams["model_hyperparams"], indent=4, sort_keys=True))
    model = keras.models.load_model(
        model_dir,
        compile=False,
        custom_objects={
            "QDense": qkeras.QDense,
            "QActivation": qkeras.QActivation,
            "quantized_bits": qkeras.quantized_bits,
            "PruneLowMagnitude": pruning_wrapper.PruneLowMagnitude,
        },
    )
    if "pruning_rate" in hyperparams["training_hyperparams"].keys():
        if hyperparams["training_hyperparams"]["pruning_rate"] > 0:
            model = strip_pruning(model)

    model.summary(expand_nested=True)

    return model


def calculate_accuracy(y_pred: np.ndarray, y_true: np.ndarray):
    """Computes accuracy for a model's predictions, given the true labels y_true."""
    acc = keras.metrics.CategoricalAccuracy()
    acc.update_state(y_true, y_pred)

    return acc.result().numpy()


def run_inference(model: keras.Model, data: HLS4MLData150):
    """Computes predictions of a model and saves them to numpy files."""
    y_pred = model.predict(data.x)
    if isinstance(model.layers[-1], keras.layers.Dense):
        # Pass the outputs through a softmax layer if the last layer is just a dense.
        y_pred = tf.nn.softmax(y_pred).numpy()

    return y_pred


def profile_model(
    model: keras.Model, hls_model: hls4ml.model, data: np.ndarray, outdir
):
    """Profile the hls4ml model to see the bit width of every layer.

    The plots in this function show the distribution of weights in the network.
    """
    fig1, fig2, fig3, fig4 = hls4ml.model.profiling.numerical(
        model=model, hls_model=hls_model, X=data[:5000]
    )

    fig1.savefig(os.path.join(outdir, "fig1"))
    fig2.savefig(os.path.join(outdir, "fig2"))
    fig3.savefig(os.path.join(outdir, "fig3"))
    fig4.savefig(os.path.join(outdir, "fig4"))
    hls4ml.utils.plot_model(
        hls_model,
        show_shapes=True,
        show_precision=True,
        to_file=os.path.join(outdir, "model_plot.png"),
    )


def run_trace(model: keras.Model, hls_model: hls4ml.model, data: np.ndarray, outdir):
    """Shows output of every layer given a certain sample.

    This is used to compute the outputs in every layer for the hls4ml firmware model
    against the qkeras model. The outputs of the quantized layers is not quantized
    itself in the QKERAS model but it is in hls4ml. A big difference in outputs is
    indicative that the precision of these outputs should be set higher manually
    in hls4ml.
    """
    # Show the weights of the network only for 3 of the samples, as defined below.
    sample_numbers = [0, 49, 99]

    # Take just the first 100 events of the data set.
    hls4ml_pred, hls4ml_trace = hls_model.trace(data[:100])
    keras_trace = hls4ml.model.profiling.get_ymodel_keras(model, data[:100])

    # Write the weights of the hls4ml and qkeras networks for the 3 specified samples.
    trace_file_path = os.path.join(outdir, "trace_output.log")
    with open(trace_file_path, "w") as trace_file:
        for sample_number in sample_numbers:
            for layer in model.layers:
                # Skip input and flatten layers since they are not really layers.
                if layer.name == "input_layer":
                    continue
                if layer.name == "flatten":
                    continue
                trace_file.write(f"Layer output HLS4ML for {layer.name}")
                trace_file.write(str(hls4ml_trace[layer.name][sample_number]))
                trace_file.write(f"Layer output KERAS for {layer.name}")
                trace_file.write(str(keras_trace[layer.name][sample_number]))
                trace_file.write("\n")

    print(tcols.OKGREEN)
    print(f"Wrote trace for samples {sample_numbers} to file {trace_file_path}.")
    print(tcols.ENDC)


def get_model_activations(model: keras.Model):
    """Looks at the layers in a model and returns a list with all the activations.

    This is done such that the precision of the activation functions is set separately
    for the synthesis on the FPGA.
    """
    model_activations = []
    for layer in model.layers:
        if "activation" in layer.name:
            model_activations.append(layer.name)

    return model_activations


def deep_dict_update(d, u):
    """Updates a deep dictionary on its deepsets entries."""
    for k, v in u.items():
        if isinstance(v, collections.abc.Mapping):
            d[k] = deep_dict_update(d.get(k, {}), v)
        else:
            d[k] = v
    return d


@contextlib.contextmanager
def nostdout():
    """Suppresses the terminal output of a function."""
    save_stdout = sys.stdout
    sys.stdout = io.BytesIO()
    yield
    sys.stdout = save_stdout
