# Normalise numpy arrays and split them into training, validation, and testing sub
# data sets to make them ready for the machine learning algorithms.

import os
import argparse

# Silence the info from tensorflow in which it brags that it can run on cpu nicely.
os.environ["TF_CPP_MIN_LOG_LEVEL"] = "1"
import numpy as np
import tensorflow as tf
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

    x_data_train, y_data_train = util.equalise_classes(x_data_train, y_data_train)
    x_data_test, y_data_test = util.equalise_classes(x_data_test, y_data_test)

    x_data = np.concatenate((x_data_train, x_data_test), axis=0)
    y_data = np.concatenate((y_data_train, y_data_test), axis=0)
    del x_data_train
    del x_data_test
    x_data = feature_selection.get_features_numpy(x_data, args.feats)

    print("Normalising and plotting data...")
    x_data = standardisation.apply_standardisation(args.norm, x_data)
    plots_folder = format_output_filename(args.x_data_path_train, args.feats, args.norm)
    plots_path = os.path.join(args.output_dir, plots_folder)
    plots.constituent_number(plots_path, x_data)
    plots.normalised_data(plots_path, x_data, y_data)

    if not os.path.exists(args.output_dir):
        os.makedirs(args.output_dir)

    output_name = format_output_filename(args.x_data_path_train, args.feats, args.norm)

    if args.kfolds == 0:
        split_train_valid_test(
            x_data,
            y_data_train,
            y_data_test,
            args.shuffle_seed,
            args.val_split,
            args.output_dir,
            output_name,
        )

        return

    split_kfold_data(
        x_data, y_data, args.kfolds, args.shuffle_seed, args.output_dir, output_name
    )


def split_kfold_data(
    x_data: np.ndarray,
    y_data: np.ndarray,
    nfolds: int,
    seed: int,
    output_dir: str,
    output_name: str,
):
    """Splits the data into a nfolds number of partitions.

    The data is frist segregated into classes. Then each kfold is built such that
    it contains an equal number of samples for each class.
    """
    x_data_segregated, y_data_segregated = util.segregate_data(x_data, y_data)
    maxdata_class = util.get_min_data_of_classes(x_data_segregated)
    maxdata_class_kfold = int(maxdata_class / nfolds)

    for kfold in range(nfolds):
        start_kfold = maxdata_class_kfold * kfold
        end_kfold = maxdata_class_kfold * (kfold + 1)
        x_data_kfold = x_data_segregated[0][start_kfold:end_kfold, :, :]
        y_data_kfold = y_data_segregated[0][start_kfold:end_kfold, :]
        for x_data, y_data in zip(x_data_segregated[1:], y_data_segregated[1:]):
            start_kfold = maxdata_class_kfold * kfold
            end_kfold = maxdata_class_kfold * (kfold + 1)
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
        x_data_kfold, y_data_kfold = shuffle_jets(x_data_kfold, y_data_kfold, seed)

        print(tcols.HEADER + f"Shuffling constituents in kfold {kfold}..." + tcols.ENDC)
        rng = np.random.default_rng(seed + kfold)
        seeds = rng.integers(low=0, high=10000, size=x_data_kfold.shape[0])
        x_data_kfold = shuffle_constituents(x_data_kfold, seeds)

        print(tcols.OKGREEN + f"Shuffling done! \U0001F0CF" + tcols.ENDC)
        print(tcols.HEADER + f"Jets per class in kfold {kfold}" + tcols.ENDC)
        print_jets_per_class(y_data_kfold)

        np.save(os.path.join(output_dir, f"x_{output_name}_{kfold}"), x_data_kfold)
        np.save(os.path.join(output_dir, f"y_{output_name}_{kfold}"), y_data_kfold)


def split_train_valid_test(
    x_data: np.ndarray,
    y_data_train: np.ndarray,
    y_data_test: np.ndarray,
    seed: int,
    val_split: float,
    output_dir: str,
    output_name: str,
):
    """Splits the data into training, validation, and test data sets.

    The training data is the same as described in the following link
    https://zenodo.org/record/3602260#.YnT0xZpBz0o
    However, the number of jets is lower since the classes are equalised.
    Furthermore, the validation and testing datasets referred to here are each a
    different 50% of the validation data set mentioned on zenodo, again slightly
    reduced such that each class has an equal representation.
    """
    x_data_train = x_data[: y_data_train.shape[0]]
    x_data_test = x_data[y_data_train.shape[0] :]
    del x_data

    y_category = np.argwhere(y_data_test == 1)[:, 1]
    val_idx, test_idx = next(
        StratifiedKFold(n_splits=int(1 / val_split)).split(x_data_test, y_category)
    )
    x_data_val, y_data_val = x_data_test[val_idx], y_data_test[val_idx]
    x_data_test, y_data_test = x_data_test[test_idx], y_data_test[test_idx]

    print(tcols.HEADER + "Shuffling jets..." + tcols.ENDC)
    x_data_train, y_data_train = shuffle_jets(x_data_train, y_data_train, seed)
    x_data_val, y_data_val = shuffle_jets(x_data_val, y_data_val, seed)
    x_data_test, y_data_test = shuffle_jets(x_data_test, y_data_test, seed)

    print(tcols.HEADER + "Shuffling constituents..." + tcols.ENDC)
    rng = np.random.default_rng(seed)
    tr_seeds = rng.integers(low=0, high=10000, size=x_data_train.shape[0])
    va_seeds = rng.integers(low=0, high=10000, size=x_data_val.shape[0])
    te_seeds = rng.integers(low=0, high=10000, size=x_data_test.shape[0])

    x_data_train = shuffle_constituents(x_data_train, tr_seeds)
    x_data_val = shuffle_constituents(x_data_val, va_seeds)
    x_data_test = shuffle_constituents(x_data_test, te_seeds)

    print(tcols.OKGREEN + f"Shuffling done! \U0001F0CF" + tcols.ENDC)

    print("\n")
    print(tcols.HEADER + "Training data" + tcols.ENDC)
    print_jets_per_class(y_data_train)
    print("\n")
    print(tcols.HEADER + "Validation data" + tcols.ENDC)
    print_jets_per_class(y_data_val)
    print("\n")
    print(tcols.HEADER + "Test data" + tcols.ENDC)
    print_jets_per_class(y_data_test)

    np.save(os.path.join(output_dir, "x_" + output_name + "_train"), x_data_train)
    np.save(os.path.join(output_dir, "x_" + output_name + "_val"), x_data_val)
    np.save(os.path.join(output_dir, "x_" + output_name + "_test"), x_data_test)
    np.save(os.path.join(output_dir, "y_" + output_name + "_train"), y_data_train)
    np.save(os.path.join(output_dir, "y_" + output_name + "_val"), y_data_val)
    np.save(os.path.join(output_dir, "y_" + output_name + "_test"), y_data_test)

    print(tcols.OKGREEN + f"\nSaved data at {args.output_dir}." + tcols.ENDC)


def shuffle_jets(x_data: np.ndarray, y_data: np.ndarray, seed: int):
    """Shuffles the jets inside a data array."""
    nevents = x_data.shape[0]
    shuffle = np.random.RandomState(seed=seed).permutation(nevents)

    return x_data[shuffle], y_data[shuffle]


def shuffle_constituents(data: np.ndarray, seeds: np.ndarray) -> np.ndarray:
    """Shuffles the constituents based on an array of seeds.

    Note that each jet's constituents is shuffled with respect to a seed that is fixed.
    This seed is different for each jet.
    """

    for jet_idx, seed in enumerate(seeds):
        shuffling = np.random.RandomState(seed=seed).permutation(data.shape[1])
        data[jet_idx, :] = data[jet_idx, shuffling]

    return data


def format_output_filename(input_name: str, feats_sel: str, norm_name: str) -> str:
    """Formats the name of the output file given a certain convention so the data
    loading for the ml models is easier.
    """
    input_name_separated = os.path.basename(input_name).split("_")
    input_base_name = input_name_separated[1:-1]

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
        default="andre",
        choices=["andre", "jedinet"],
        help="The type of feature selection to be employed.",
    )
    parser.add_argument(
        "--norm",
        type=str,
        default="nonorm",
        choices=["nonorm", "standard", "robust", "minmax"],
        help="The type of normalisation to apply to the data.",
    )
    parser.add_argument(
        "--val_split",
        type=float,
        default=0.5,
        help="The percentage of data to be used as validation from the test set.",
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
        default=10,
        help="Number of kfolds to split data into.",
    )
    parser.add_argument(
        "--output_dir", type=str, required=True, help="Path to the output folder."
    )
    args = parser.parse_args()
    main(args)
