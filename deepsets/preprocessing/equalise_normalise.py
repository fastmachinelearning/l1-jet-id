# Normalise numpy arrays and split them into training, validation, and testing sub
# data sets to make them ready for the machine learning algorithms.

import os
import argparse

import numpy as np
from sklearn.model_selection import StratifiedKFold

import feature_selection
import standardisation
import plots
import util
from terminal_colors import tcols


def main(args):
    print("Loading the files...\n")
    x_data_train = np.load(args.x_data_path_train, "r")
    y_data_train = np.load(args.y_data_path_train, "r")
    x_data_test = np.load(args.x_data_path_test, "r")
    y_data_test = np.load(args.y_data_path_test, "r")

    # Equalise the number of jets per class.
    x_data_train, y_data_train = util.equalise_classes(x_data_train, y_data_train)
    x_data_test, y_data_test = util.equalise_classes(x_data_test, y_data_test)

    # Perform feature selection.
    x_data_train = feature_selection.get_features_numpy(x_data_train, args.feats)
    x_data_test = feature_selection.get_features_numpy(x_data_test, args.feats)

    print("Normalising data...")
    norm_params = standardisation.fit_standardisation(args.norm, x_data_train)
    x_data_train = standardisation.apply_standardisation(
        args.norm, x_data_train, norm_params
    )
    x_data_test = standardisation.apply_standardisation(
        args.norm, x_data_test, norm_params
    )

    print("Plotting training data...")
    plots_folder = format_output_filename(args.x_data_path_train, args.feats, args.norm)
    plots_path = os.path.join(args.output_dir, plots_folder)
    plots.constituent_number(plots_path, x_data_train)

    if not os.path.exists(args.output_dir):
        os.makedirs(args.output_dir)

    output_name = format_output_filename(args.x_data_path_train, args.feats, args.norm)

    print(tcols.OKGREEN + "Saving test data..." + tcols.ENDC)
    np.save(os.path.join(args.output_dir, "x_" + output_name + "_test"), x_data_test)
    np.save(os.path.join(args.output_dir, "y_" + output_name + "_test"), y_data_test)

    split_kfold_data(
        x_data_train,
        y_data_train,
        args.kfolds,
        args.shuffle_seed,
        args.output_dir,
        output_name,
        plots_path,
    )

    util.save_hyperparameters_file(vars(args), args.output_dir)


def split_kfold_data(
    x_data: np.ndarray,
    y_data: np.ndarray,
    nfolds: int,
    seed: int,
    output_dir: str,
    output_name: str,
    plots_path: str,
):
    """Splits the data into a nfolds number of partitions.

    The data is frist segregated into classes. Then each kfold is built such that
    it contains an equal number of samples for each class.
    """
    x_data_segregated, y_data_segregated = util.segregate_data(x_data, y_data)
    ndata_per_class = y_data_segregated[0].shape[0]
    ndata_class_kfold = int(ndata_per_class / nfolds)

    for kfold in range(nfolds):
        start_kfold = ndata_class_kfold * kfold
        end_kfold = ndata_class_kfold * (kfold + 1)
        x_data_kfold = x_data_segregated[0][start_kfold:end_kfold, :, :]
        y_data_kfold = y_data_segregated[0][start_kfold:end_kfold, :]
        for x_data, y_data in zip(x_data_segregated[1:], y_data_segregated[1:]):
            x_data_kfold = np.concatenate(
                (x_data_kfold, x_data[start_kfold:end_kfold, :, :]),
                axis=0,
            )
            y_data_kfold = np.concatenate(
                (y_data_kfold, y_data[start_kfold:end_kfold, :]),
                axis=0,
            )

        print("\n")
        print(tcols.HEADER + f"Shuffling jets in kfold {kfold}..." + tcols.ENDC)
        x_data_kfold, y_data_kfold = shuffle_jets(
            x_data_kfold, y_data_kfold, seed + kfold
        )

        print(tcols.HEADER + f"Shuffling constituents in kfold {kfold}..." + tcols.ENDC)
        rng = np.random.default_rng(seed + kfold)
        seeds = rng.integers(low=0, high=10000, size=x_data_kfold.shape[0])
        x_data_kfold = shuffle_constituents(x_data_kfold, seeds)

        print(tcols.OKGREEN + f"Shuffling done! \U0001F0CF" + tcols.ENDC)
        print(tcols.HEADER + f"Jets per class in kfold {kfold}" + tcols.ENDC)
        print_jets_per_class(y_data_kfold)

        plots_path_kfold = plots_path + f"_kfold{kfold}"
        plots.normalised_data(plots_path_kfold, x_data_kfold, y_data_kfold)
        np.save(os.path.join(output_dir, f"x_{output_name}_{kfold}"), x_data_kfold)
        np.save(os.path.join(output_dir, f"y_{output_name}_{kfold}"), y_data_kfold)


def shuffle_jets(x_data: np.ndarray, y_data: np.ndarray, seed: int):
    """Shuffles the jets inside a data array."""
    nevents = x_data.shape[0]
    shuffle = np.random.default_rng(seed=seed).permutation(nevents)

    return x_data[shuffle, :, :], y_data[shuffle, :]


def shuffle_constituents(data: np.ndarray, seeds: np.ndarray) -> np.ndarray:
    """Shuffles the constituents based on an array of seeds.

    Note that each jet's constituents is shuffled with respect to a seed that is fixed.
    This seed is different for each jet.
    """

    for jet_idx, seed in enumerate(seeds):
        shuffling = np.random.default_rng(seed=seed).permutation(data.shape[1])
        data[jet_idx, :] = data[jet_idx, shuffling]

    return data


def format_output_filename(input_name: str, feats_sel: str, norm_name: str) -> str:
    """Formats the name of the output file given a certain convention so the data
    loading for the ml models is easier.
    """
    input_name_separated = os.path.splitext(os.path.basename(input_name))[0].split("_")
    input_base_name = input_name_separated[1:]

    output_filename = "_".join(input_base_name)

    return output_filename + "_" + feats_sel + "_" + norm_name


def print_jets_per_class(y_data: np.array):
    print(f"Number of gluon jets: {np.sum(np.argmax(y_data, axis=1)==0)}")
    print(f"Number of quark jets: {np.sum(np.argmax(y_data, axis=1)==1)}")
    print(f"Number of W jets: {np.sum(np.argmax(y_data, axis=1)==2)}")
    print(f"Number of Z jets: {np.sum(np.argmax(y_data, axis=1)==3)}")
    print(f"Number of top jets: {np.sum(np.argmax(y_data, axis=1)==4)}")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        formatter_class=argparse.ArgumentDefaultsHelpFormatter
    )
    parser.add_argument(
        "--x_data_path_train",
        type=str,
        required=True,
        help="Path to the training data file to process.",
    )
    parser.add_argument(
        "--y_data_path_train",
        type=str,
        required=True,
        help="Paths to the training target file corresponding to the data.",
    )
    parser.add_argument(
        "--x_data_path_test",
        type=str,
        required=True,
        help="Path to the test data file to process.",
    )
    parser.add_argument(
        "--y_data_path_test",
        type=str,
        required=True,
        help="Paths to the test target file corresponding to the data.",
    )
    parser.add_argument(
        "--feats",
        type=str,
        default="ptetaphi",
        choices=["ptetaphi", "allfeats"],
        help="The type of feature selection to be employed.",
    )
    parser.add_argument(
        "--norm",
        type=str,
        default="nonorm",
        choices=["nonorm", "standard", "robust", "robust_fast", "minmax"],
        help="The type of normalisation to apply to the data.",
    )
    parser.add_argument(
        "--shuffle_seed",
        type=int,
        default=123,
        help="Seed for shuffling the jets in the data set.",
    )
    parser.add_argument(
        "--kfolds",
        type=int,
        default=5,
        help="Number of kfolds to split data into.",
    )
    parser.add_argument(
        "--output_dir", type=str, required=True, help="Path to the output folder."
    )
    args = parser.parse_args()
    main(args)
