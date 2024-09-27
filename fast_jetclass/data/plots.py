# Select feature labels.

import os
import operator
import numpy as np
import matplotlib.pyplot as plt

from fast_jetclass.util.terminal_colors import tcols


def select_feature_labels(choice: str) -> list[str]:
    """Gets the feature labels for a certain type of selection."""
    all_feature_labels = [
        "$p_x$",
        "$p_y$",
        "$p_z$",
        "$E$",
        "$E_{rel}$",
        "$p_T$",
        "$p_T^{rel}$",
        "$\\eta$",
        "$\\eta^\\mathrm{rel}$",
        "$\\eta^\\mathrm{rot}$",
        "$\\phi$",
        "$\\phi^\\mathrm{rel}$",
        "$\\phi^\\mathrm{rot}$",
        "$\\Delta_R$",
        "$\\cos(\\theta)$",
        "$\\cos(\\theta^\\mathrm{rel})$",
    ]
    andre_feature_labels = ["p_T", "\\eta^\\mathrm{rel}", "\\phi^\\mathrm{rel}"]

    switcher = {
        "ptetaphi": lambda: operator.itemgetter(5, 8, 11)(all_feature_labels),
        "allfeats": lambda: all_feature_labels,
    }

    feature_labels = switcher.get(choice, lambda: None)()
    if feature_labels is None:
        raise TypeError("Feature labels name not valid!")

    return feature_labels


def count_constituents_per_jet(x_data: np.array):
    """Count the number of non-zero constituents for each of the jets in the dataset."""
    constituents_distribution = []
    for jet in x_data:
        const_nb = 0
        for const in jet:
            if const[0] != 0:
                const_nb += 1
        constituents_distribution.append(const_nb)

    return constituents_distribution


def normalised_data(
    outdir: str, x_data: np.ndarray, y_data: np.ndarray, train_or_val: str, feats: str
):
    """Plots the data after it has been normalised."""
    if not os.path.exists(outdir):
        os.makedirs(outdir)

    print("Plotting the normalised data...")
    plt.rc("xtick", labelsize=23)
    plt.rc("ytick", labelsize=23)
    plt.rc("axes", titlesize=25)
    plt.rc("axes", labelsize=25)
    plt.rc("legend", fontsize=22)

    x_data_seg, _ = segregate_data(x_data, y_data)
    colors = ["#648FFF", "#785EF0", "#DC267F", "#FE6100", "#FFB000"]
    data_classes = ["Gluon", "Quark", "W", "Z", "Top"]
    feature_labels = select_feature_labels(feats)

    for feature in range(x_data_seg[0].shape[2]):
        plt.xlim(
            np.amin(x_data_seg[0][:, :, feature]), np.amax(x_data_seg[0][:, :, feature])
        )
        plt.figure(figsize=(12, 10))

        for data_class_idx in range(len(x_data_seg)):
            plt.hist(
                x=x_data_seg[data_class_idx][:, :, feature].flatten(),
                bins=60,
                alpha=0.5,
                histtype="step",
                linewidth=2.5,
                label=data_classes[data_class_idx],
                density=True,
                color=colors[data_class_idx],
            )

        plt.xlabel(feature_labels[feature])
        plt.ylabel("Probability Density")
        plt.gca().set_yscale("log")
        plt.legend()
        plt.savefig(
            os.path.join(outdir, f"{feature_labels[feature]}_{train_or_val}_.pdf")
        )
        plt.close()

    print(tcols.OKGREEN + "Plots saved to: " + tcols.ENDC, outdir, "\U0001f4ca")


def constituent_number(outdir: str, x_data: np.ndarray, train_or_val: str):
    """Plot the number of constituents in the data that is being normalised per jet."""
    if not os.path.exists(outdir):
        os.makedirs(outdir)

    print("Plotting the number of constituents in data...")
    plt.rc("xtick", labelsize=23)
    plt.rc("ytick", labelsize=23)
    plt.rc("axes", titlesize=25)
    plt.rc("axes", labelsize=25)
    plt.rc("legend", fontsize=22)

    constituents_distribution = count_constituents_per_jet(x_data)
    median_const = np.median(constituents_distribution)
    average_const = np.average(constituents_distribution)

    plt.xlim(0, 150)
    plt.figure(figsize=(12, 10))
    plt.hist(
        x=constituents_distribution,
        bins=150,
        alpha=0.4,
        histtype="step",
        linewidth=2.5,
        label=f"Median: {median_const}\n Average: {average_const:.3f}",
        color="#648FFF",
    )
    plt.xlabel("Number of Constituents")
    plt.ylabel("Number of Jets")
    plt.legend()
    plt.gca().set_yscale("log")
    plt.savefig(os.path.join(outdir, f"constituents_plot_{train_or_val}.pdf"))
    plt.close()

    print(tcols.OKGREEN + "Plots saved to: " + tcols.ENDC, outdir, "\U0001f4ca")


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
