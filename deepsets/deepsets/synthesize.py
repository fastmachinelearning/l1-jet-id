# Script that synthesizes a given deepsets model and then returns the performance
# performance metrics for the synthesis.
import os
import numpy as np
import tensorflow as tf
import hls4ml
from tensorflow_model_optimization.python.core.sparsity.keras import pruning_wrapper
from tensorflow_model_optimization.sparsity.keras import strip_pruning
import qkeras

np.random.seed(12)
tf.random.set_seed(12)

from tensorflow import keras
import tensorflow.keras.layers as KL

import util.util
import util.plots
import util.data
from . import flops
from util.terminal_colors import tcols


def main(args):
    util.util.device_info()
    seed = args['const_seed']
    model_dir = args['model_dir']
    plots_dir = util.util.make_output_directories(args['model_dir'], f"plots_{seed}")
    synthesis_dir = util.util.make_output_directories(
        args['model_dir'], 'synthesis_final'
    )

    print(tcols.OKGREEN + "\nIMPORTING DATA AND MODEL\n" + tcols.ENDC)
    hyperparam_dict = util.util.load_hyperparameter_files(args["model_dir"])
    data = import_data(hyperparam_dict)
    data.test_data = shuffle_constituents(data.test_data, seed)
    model = import_model(model_dir, hyperparam_dict)

    print(tcols.OKGREEN + "\nCONFIGURING MODEL\n" + tcols.ENDC)
    config = hls4ml.utils.config_from_keras_model(model, granularity="name")
    config = config_hls4ml(config)

    model_activations = get_model_activations(model)
    hls4ml.model.optimizer.get_optimizer("output_rounding_saturation_mode").configure(
        layers=model_activations,
        rounding_mode="AP_RND",
        saturation_mode="AP_SAT",
    )

    for layer in config['LayerName'].keys():
        config['LayerName'][layer]['Trace'] = True

    hls_model = hls4ml.converters.convert_from_keras_model(
        model,
        hls_config=config,
        output_dir=synthesis_dir,
        part="xcvu13p-flga2577-2-e",
        # part="xcvu9p-flga2577-2l-e",
        io_type="io_parallel",
    )

    print(tcols.OKGREEN + "\nRUNNING MODEL DIAGNOSTICS\n" + tcols.ENDC)
    hls_model.compile()
    run_trace(model, hls_model, data.test_data[:1000], sample_number=0)
    profile_model(model, hls_model, data.test_data, synthesis_dir)
    hls_model.write()

    print(tcols.OKGREEN + "\nTESTING MODEL PERFORMANCE\n" + tcols.ENDC)
    print(tcols.HEADER + f"\nRunning inference for {model_dir}" + tcols.ENDC)
    y_pred = run_inference(model, data, plots_dir)
    acc = calculate_accuracy(y_pred, data.test_target)
    y_pred = run_inference(hls_model, data, plots_dir)
    acc_synth = calculate_accuracy(y_pred, data.test_target)
    print(f"Accuracy model: {acc:.3f}")
    print(f"Accuracy synthed model: {acc_synth:.3f}")
    print(f"Accuracy ratio: {acc_synth/acc:.3f}")


def config_hls4ml(config: dict):
    """Adds additional configuration to hls4ml config dictionary."""
    config['Model']['Strategy']= 'Latency'

    config['LayerName']['phi1']['ParallelizationFactor'] = 1
    config['LayerName']['phi1']['ReuseFactor'] = 2
    config['LayerName']['phi1']['Strategy'] = "Latency"
    config["LayerName"]['phi1']["ConvImplementation"] = "Pointwise"
    config['LayerName']['phi2']['ParallelizationFactor'] = 1
    config['LayerName']['phi2']['ReuseFactor'] = 2
    config['LayerName']['phi2']['Strategy'] = "Latency"
    config["LayerName"]['phi2']["ConvImplementation"] = "Pointwise"
    config['LayerName']['phi3']['ParallelizationFactor'] = 1
    config['LayerName']['phi3']['ReuseFactor'] = 2
    config['LayerName']['phi3']['Strategy'] = "Latency"
    config["LayerName"]['phi3']["ConvImplementation"] = "Pointwise"

    config["LayerName"]['input_layer']["Precision"] = "ap_fixed<12,4,AP_RND,AP_SAT>"
    util.util.nice_print_dictionary('HLS Configuration', config)

    return config


def import_data(hyperparams):
    """Import the data used for training and validating the network."""
    fpath = hyperparams['data_hyperparams']['fpath']
    if hyperparams['data_hyperparams']['fname_test']:
        fname = hyperparams['data_hyperparams']['fname_test'].rsplit('_', 1)[0]
    else:
        fname = hyperparams['data_hyperparams']['fname']

    return util.data.Data(fpath=fpath, fname=fname, only_test=True)


def import_model(model_dir: str, hyperparams: dict):
    """Imports the model from a specified path. Model is saved in tf format."""
    print(tcols.HEADER + "Importing the model..." + tcols.ENDC)
    util.util.nice_print_dictionary("DS hps:", hyperparams["model_hyperparams"])
    model = keras.models.load_model(
        model_dir,
        compile=False,
        custom_objects={
            "QDense": qkeras.QDense,
            "QActivation": qkeras.QActivation,
            "quantized_bits": qkeras.quantized_bits,
            "PruneLowMagnitude": pruning_wrapper.PruneLowMagnitude
        }
    )
    if 'pruning_rate' in hyperparams['training_hyperparams']:
        if hyperparams['training_hyperparams']['pruning_rate'] > 0:
            model = strip_pruning(model)

    model.summary(expand_nested=True)

    return model


def calculate_accuracy(y_pred: np.ndarray, y_true: np.ndarray):
    """Computes accuracy for a model's predictions."""
    acc = keras.metrics.CategoricalAccuracy()
    acc.update_state(y_true, y_pred)

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


def run_inference(model: keras.Model, data: util.data.Data, plots_dir: list):
    """Computes predictions of a model and saves them to numpy files."""
    y_pred = tf.nn.softmax(model.predict(data.test_data)).numpy()
    y_pred.astype("float32").tofile(os.path.join(plots_dir, "y_pred.dat"))

    return y_pred


def profile_model(model: keras.Model, hls_model: hls4ml.model, data: np.ndarray, outdir):
    """Profile the hls4ml model to see if it loses performance and if yes, where."""
    fig1, fig2, fig3, fig4 = hls4ml.model.profiling.numerical(
        model=model, hls_model=hls_model, X=data[:5000]
    )

    fig1.savefig(os.path.join(outdir, 'fig1'))
    fig2.savefig(os.path.join(outdir, 'fig2'))
    fig3.savefig(os.path.join(outdir, 'fig3'))
    fig4.savefig(os.path.join(outdir, 'fig4'))
    hls4ml.utils.plot_model(
        hls_model,
        show_shapes=True,
        show_precision=True,
        to_file=os.path.join(outdir, 'model_plot.png')
    )


def run_trace(
    model: keras.Model, hls_model: hls4ml.model, data: np.ndarray, sample_number: int
    ):
    """Shows output of every layer given a certain sample."""
    hls4ml_pred, hls4ml_trace = hls_model.trace(data)
    keras_trace = hls4ml.model.profiling.get_ymodel_keras(model, data)
    for layer in model.layers:
        if layer.name == 'input_layer':
            continue
        print(f"Layer output HLS4ML for {layer.name}")
        print(hls4ml_trace[layer.name][sample_number])
        print(f"Layer output KERAS for {layer.name}")
        print(keras_trace[layer.name][sample_number])

        print('')


def get_model_activations(model: keras.Model):
    """Loooks at the layers in a model and returns a list with all the activations."""
    model_activations = []
    for layer in model.layers:
        if 'activation' in layer.name:
            model_activations.append(layer.name)

    return model_activations
