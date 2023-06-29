# Select feature labels.

import os
import numpy as np
import matplotlib.pyplot as plt

import util
from terminal_colors import tcols


def select_feature_labels(filename: str) -> list[str]:
    """Gets the feature labels for a certain type of selection."""
    jedinet_feature_labels = [
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
        "$\\cos(\\theta^\\mathrm{rel}$",
    ]
    andre_feature_labels = ["p_T", "\\eta^\\mathrm{rel}", "\\phi^\\mathrm{rel}"]
    choice = filename.split("_")[4]

    switcher = {
        "andre": lambda: andre_feature_labels,
        "jedinet": lambda: jedinet_feature_labels,
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


def normalised_data(outdir: str, x_data: np.ndarray, y_data: np.ndarray):
    """Plots the data after it has been normalised."""
    if not os.path.exists(outdir):
        os.makedirs(outdir)

    print("Plotting the normalised data...")
    plt.rc("xtick", labelsize=23)
    plt.rc("ytick", labelsize=23)
    plt.rc("axes", titlesize=25)
    plt.rc("axes", labelsize=25)
    plt.rc("legend", fontsize=22)

    x_data_seg, _ = util.segregate_data(x_data, y_data)
    colors = ["#648FFF", "#785EF0", "#DC267F", "#FE6100", "#FFB000"]
    data_classes = ["Gluon", "Quark", "W", "Z", "Top"]
    feature_labels = select_feature_labels(os.path.basename(outdir))

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
        plt.savefig(os.path.join(outdir, feature_labels[feature] + ".pdf"))
        plt.close()

    print(tcols.OKGREEN + "Plots saved to: " + tcols.ENDC, outdir, "\U0001f4ca")


def constituent_number(outdir: str, x_data: np.ndarray):
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

    plt.xlim(0, 150)
    plt.figure(figsize=(12, 10))
    plt.hist(
        x=constituents_distribution,
        bins=150,
        alpha=0.4,
        histtype="step",
        linewidth=2.5,
        label=f"Median: {median_const}",
        color="#648FFF",
    )
    plt.xlabel("Number of Constituents")
    plt.ylabel("Number of Jets")
    plt.legend()
    plt.gca().set_yscale("log")
    plt.savefig(os.path.join(outdir, "constituents_plot.pdf"))
    plt.close()

    print(tcols.OKGREEN + "Plots saved to: " + tcols.ENDC, outdir, "\U0001f4ca")
