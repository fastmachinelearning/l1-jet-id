# Prepare the data for training our machine learning algorithms by selecting certain
# features from the big jet images dataset. Additionally applies some cuts to these
# features. More details about the data set are available at:
# https://github.com/pierinim/tutorials/blob/master/GGI_Jan2021/Lecture1/
# Notebook1_ExploreDataset.ipynb
# The link where one can download this data set is at:
# https://zenodo.org/record/3602260#.YnT0xZpBz0o
import os
import argparse

import numpy as np
import h5py

from terminal_colors import tcols


def main(args):
    data_file_paths = get_file_paths(args.data_file_dir)
    data = h5py.File(data_file_paths[0])
    x_data = data["jetConstituentList"]
    y_data = data["jets"][:, -6:-1]

    print(tcols.HEADER + "Importing files:" + tcols.ENDC)
    for file_path in data_file_paths[1:]:
        print(file_path)
        data = h5py.File(file_path)
        add_x_data = data["jetConstituentList"]
        add_y_data = data["jets"][:, -6:-1]
        x_data = np.concatenate((x_data, add_x_data), axis=0)
        y_data = np.concatenate((y_data, add_y_data), axis=0)
    print("Data is imported! \U0001F370 \n")

    x_data, y_data = cut_transverse_momentum(x_data, y_data, args.min_pt)
    x_data = restrict_nb_constituents(x_data, args.max_constituents)
    print_data_dimensions(x_data)

    out_file_name = make_output_file_name(args)

    np.save(os.path.join(args.output_dir, f"x_{out_file_name}"), x_data)
    np.save(os.path.join(args.output_dir, f"y_{out_file_name}"), y_data)

    print(tcols.OKGREEN + f"Saved processed data to {args.output_dir}." + tcols.ENDC)


def get_file_paths(data_file_dir: str) -> list:
    """Gets path to the data files inside a given directory.

    Args:
        data_file_dir: Path to directory containing the data files.

    Returns:
        Array of paths to the data files themselves.
    """
    file_names = os.listdir(data_file_dir)
    file_paths = [os.path.join(data_file_dir, file_name) for file_name in file_names]

    return file_paths


def cut_transverse_momentum(x_data: np.ndarray, y_data: np.ndarray, minimum_pt: float):
    """Reject constituents that are below a certain transverse momentum.

    If a jet has no constituents with a momentum above the given threshold, then
    the whole jet is removed.

    Args:
        x_data: Array containing the unprocessed data.
        y_data: Array containing the target.
        minimum_pt: The minimum transverse momentum an event can have (GeV).

    Returns:
        The processed data array together with the processed target.
    """
    print(f"Dropping constituents with momentum below {minimum_pt}.")
    boolean_mask = x_data[:, :, 5] > minimum_pt
    structure_memory = boolean_mask.sum(axis=1)
    x_data = np.split(x_data[boolean_mask, :], np.cumsum(structure_memory)[:-1])
    x_data = [jet_const for jet_const in x_data if jet_const.size > 0]
    y_data = y_data[structure_memory > 0]

    return x_data, y_data


def restrict_nb_constituents(x_data: np.ndarray, max_constituents: int):
    """Force each jet to have an equal number of constituents.

    If the jet has more, then the ones after the given number are discarded. If the jet
    has less than the number of max constituents, then it is padded with 0 values.

    Args:
        x_data: Data array to be processed.
        max_constituents: Exact number of constituents that a jet should have.

    Returns:
        The data array with a fixed number of constituents per jet.
    """
    print(f"Setting the max number of constituents per jet to {max_constituents}.")
    for jet in range(len(x_data)):
        if x_data[jet].shape[0] >= max_constituents:
            x_data[jet] = x_data[jet][:max_constituents, :]
        else:
            padding_length = max_constituents - x_data[jet].shape[0]
            x_data[jet] = np.pad(x_data[jet], ((0, padding_length), (0, 0)))

    return np.array(x_data)


def print_data_dimensions(data: np.ndarray):
    """Prints the dimensions of the data explicitely."""
    print(tcols.OKGREEN + "The processed data has dimensions: " + tcols.ENDC)
    print("--------------")
    print(f"Number of jets = {data.shape[0]}")
    print(f"Number of constituents = {data.shape[1]}")
    print(f"Number of features = {data.shape[2]}")
    print("--------------\n")


def make_output_file_name(args):
    prefix = "jet_images"
    constituents = f"_c{args.max_constituents}"
    min_pt = f"_minpt{args.min_pt}"

    return prefix + constituents + min_pt + f"_{args.flag}"


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        formatter_class=argparse.ArgumentDefaultsHelpFormatter
    )
    parser.add_argument(
        "data_file_dir",
        type=str,
        help="Path to directories with .h5 files containing jet image data.",
    )
    parser.add_argument(
        "output_dir", type=str, help="Directory to save the processed data in."
    )
    parser.add_argument(
        "--min_pt",
        type=float,
        default=2,
        help="Minimum transverse momentum that the data should have.",
    )
    parser.add_argument(
        "--max_constituents",
        type=int,
        default=8,
        help="Maximum number of jet constituents data should have.",
    )
    parser.add_argument(
        "--flag",
        type=str,
        default="",
        help="Attach a string to the end of the output file name.",
    )
    args = parser.parse_args()

    main(args)
