# Utility methods for the interaction network training, testing, etc...

import os
import json
import glob
import numpy as np

import tensorflow as tf
from tensorflow import keras

from .terminal_colors import tcols
from fast_jetclass.data import data


def make_output_directories(locations: list, outdir: str):
    """Create an output directory in a list of locations."""
    if isinstance(locations, str):
        return make_output_directory(locations, outdir)

    return [make_output_directory(location, outdir) for location in locations]


def make_output_directory(location: str, outdir: str) -> str:
    """Create the output directory in a designated location."""
    outdir = os.path.join(location, outdir)
    if not os.path.exists(outdir):
        os.makedirs(outdir)

    return outdir


def import_data(config: dict, train: bool):
    """Imports the jet data, ready for training."""
    print(tcols.OKGREEN + "Importing data... " + tcols.ENDC, end="")
    jet_data = data.HLS4MLData150(**config, train=train)

    print(tcols.OKGREEN, end="")
    print("training data imported!" if train else "validation data imported!")
    print(tcols.ENDC)
    jet_data.show_details()

    return jet_data


def nice_print_dictionary(dictionary_name: str, dictionary: dict):
    """Logs useful details about the data used to train the interaction network."""
    print(tcols.HEADER + f"\n{dictionary_name}" + tcols.ENDC)
    print(tcols.HEADER + "-----------" + tcols.ENDC)
    if not bool(dictionary):
        print(tcols.WARNING + "Dictionary is empty.\n" + tcols.ENDC)
        return
    for key in dictionary:
        print(f"{key}: {dictionary[key]}")


def device_info():
    """Prints what device the tensorflow network will run on."""
    gpu_devices = tf.config.list_physical_devices("GPU")
    if gpu_devices:
        details = tf.config.experimental.get_device_details(gpu_devices[0])
        print(tcols.OKCYAN + f"\nGPU: {details.get('device_name')}" + tcols.ENDC)
        print("Activating procedural GPU memory growth...\n")
        for gpu in gpu_devices:
            tf.config.experimental.set_memory_growth(gpu, True)
    else:
        print(tcols.WARNING + "\nNo GPU detected. Running on CPU.\n" + tcols.ENDC)


def save_hyperparameters_file(hyperparams: dict, outdir: str):
    """Saves the hyperparameters dictionary that defines an net to a file."""
    hyperparams_file_path = os.path.join(outdir, "hyperparameters.json")
    with open(hyperparams_file_path, "w") as file:
        json.dump(hyperparams, file)

    print(tcols.OKGREEN + "Saved hyperparameters to json file." + tcols.ENDC)


def save_flops_file(flops: dict, outdir: str):
    """Saves the flops dictionary to file inside given outdir."""
    flops_file_path = os.path.join(outdir, "flops.json")
    with open(flops_file_path, "w") as file:
        json.dump(flops, file)

    print(tcols.OKGREEN + "Saved flops information to json file." + tcols.ENDC)


def load_hyperparameter_files(model_dirs: list):
    """Load hyperparameters of multiple models and put them in an array."""
    if isinstance(model_dirs, str):
        return load_hyperparameter_file(model_dirs)

    return [load_hyperparameter_file(model_dir) for model_dir in model_dirs]


def load_hyperparameter_file(model_dir: str):
    """Loads a hyperparameters file given the directory that it's in."""
    with open(os.path.join(model_dir, "hyperparameters.json")) as file:
        hyperparams = json.load(file)

    return hyperparams


def print_training_attributes(model: keras.models.Model, train_hyperparams: dict):
    """Prints model attributes so all interesting infromation is printed."""
    print("\nTraining parameters")
    print("-------------------")
    print(tcols.OKGREEN + "Optimizer: \t" + tcols.ENDC, model.optimizer.get_config())
    print(
        tcols.OKGREEN + "Batch size: \t" + tcols.ENDC, train_hyperparams["batch_size"]
    )
    print(tcols.OKGREEN + "Training epochs:" + tcols.ENDC, train_hyperparams["epochs"])
    print("")
