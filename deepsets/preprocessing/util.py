# Utility methods for data pre-processing.

import os
import json
import numpy as np
from terminal_colors import tcols


def make_output_directories(locations: list, outdir: str):
    """Create an output directory in a list of locations."""
    if isinstance(locations, str):
        return make_output_directory(location, outdir)

    return [make_output_directory(location, outdir) for location in locations]


def make_output_directory(location: str, outdir: str) -> str:
    """Create the output directory in a designated location."""
    outdir = os.path.join(location, outdir)
    if not os.path.exists(outdir):
        os.makedirs(outdir)

    return outdir


def equalise_classes(x_data: np.ndarray, y_data: np.ndarray):
    """Equalize the number of events each class has in the data file.

    Args:
        x_data: Array containing the data to equalize.
        y_data: Corresponding onehot encoded target array.

    Returns:
        The data with equal number of events per class and the corresp target.
        This data is not shuffled.
    """
    print("Equalizing data classes...")
    x_data_segregated, y_data_segregated = segregate_data(x_data, y_data)
    maxdata_class = get_min_data_of_classes(x_data_segregated)

    x_data = x_data_segregated[0][:maxdata_class, :, :]
    y_data = y_data_segregated[0][:maxdata_class, :]
    for x_data_class, y_data_class in zip(x_data_segregated[1:], y_data_segregated[1:]):
        x_data = np.concatenate((x_data, x_data_class[:maxdata_class, :, :]), axis=0)
        y_data = np.concatenate((y_data, y_data_class[:maxdata_class, :]), axis=0)

    return x_data, y_data


def segregate_data(x_data: np.array, y_data: np.array):
    """Divides the data into separate arrays for each class.

    Args:
        x_data: Array containing the data to equalize.
        y_data: Corresponding onehot encoded target array.

    Returns:
        List of numpy arrays, each numpy array corresponding to a class of data.
        First list is for data and second list is corresponding target.
    """
    x_data_segregated = []
    y_data_segregated = []
    num_data_classes = y_data.shape[1]

    for data_class_nb in range(num_data_classes):
        class_elements_boolean = np.argmax(y_data, axis=1) == data_class_nb
        x_data_segregated.append(x_data[class_elements_boolean])
        y_data_segregated.append(y_data[class_elements_boolean])

    return x_data_segregated, y_data_segregated


def get_min_data_of_classes(x_data_segregated: np.ndarray):
    """Get the amount of data the class with the lowest representation has."""
    num_classes = len(x_data_segregated)
    num_datapoints_per_class = [len(x_data_class) for x_data_class in x_data_segregated]
    desired_datapoints_per_class = min(num_datapoints_per_class)

    return desired_datapoints_per_class


def save_hyperparameters_file(hyperparams: dict, outdir: str):
    """Saves the hyperparameters dictionary that defines an net to a file."""
    hyperparams_file_path = os.path.join(outdir, "hyperparameters.json")
    with open(hyperparams_file_path, "w") as file:
        json.dump(hyperparams, file)

    print(tcols.OKGREEN + "Saved preprocessing hyperparameters to json." + tcols.ENDC)
