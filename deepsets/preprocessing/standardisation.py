# Standardisation methods for the jet data.

import numpy as np
from sklearn.preprocessing import RobustScaler

from terminal_colors import tcols


def apply_standardisation(choice: str, x_data: np.ndarray, norm_params: dict):
    """Choose the type of normalisation to apply to the data.

    Args:
        choice: The choice of the user with repsect to the type of norm to apply.
        x_data: Array containing the data to normalise.
        norm_params: The parameters needed to apply the chosen normalisation.

    Returns:
        Normalised x_data numpy array.
    """
    if choice == "nonorm":
        print("Skipping normalisation...")
        return x_data

    switcher = {
        "minmax": lambda: minmax_apply(x_data, **norm_params),
        "robust": lambda: robust_apply(x_data, **norm_params),
        "robust_fast": lambda: robust_fast_apply(x_data, **norm_params),
        "standard": lambda: standard_apply(x_data, **norm_params),
    }

    x_data = switcher.get(choice, lambda: None)()

    if x_data is None:
        raise NameError(
            "Type of normalisation does not exist! Please choose from "
            f"the following list: {list(switcher.keys())}"
        )

    return x_data


def fit_standardisation(choice: str, x_data: np.ndarray):
    """Choose the type of normalisation to fit to the data.

    Args:
        choice: The choice of the user with repsect to the type of norm to apply.
        x_data: Array containing the data to fit to.

    Returns:
        Parameters for that normalisation such as the mean, std, etc...
    """
    if choice == "nonorm":
        print("Skipping normalisation...")
        return x_data

    print(tcols.OKGREEN + f"Fitting {choice} normalisation..." + tcols.ENDC)
    switcher = {
        "minmax": lambda: minmax_fit(x_data),
        "robust": lambda: robust_fit(x_data),
        "robust_fast": lambda: robust_fit(x_data),
        "standard": lambda: standard_fit(x_data),
    }

    norm_params = switcher.get(choice, lambda: None)()

    if norm_params is None:
        raise NameError(
            "Type of normalisation does not exist! Please choose from "
            f"the following list: {list(switcher.keys())}"
        )

    print("The normalisation parameters are: ")
    print("\n".join(f"{param}: {value}" for param, value in norm_params.items()))
    print(f"{'':-<25}\n")

    return norm_params


def minmax_fit(x: np.ndarray) -> np.ndarray:
    """Finds the minimum and maximum of each feature in the given data."""
    min_feats = x.min(axis=0).min(axis=0)
    max_feats = x.max(axis=0).max(axis=0)

    return {"min_feats": min_feats, "max_feats": max_feats}


def minmax_apply(
    x: np.ndarray,
    min_feats: np.ndarray,
    max_feats: np.ndarray,
    feature_range: tuple = (0, 1),
) -> np.ndarray:
    """Applies minmax normalisation to the data.

    Every feature of every sample is divided by the maximum for that respective feature.
    """
    x_norm = (x - min_feats) / (max_feats - min_feats)
    x_norm = x_norm * (feature_range[1] - feature_range[0]) + feature_range[0]

    return x_norm


def robust_fit(x: np.ndarray, percentiles: list = [95, 5]) -> np.ndarray:
    """Fits data to find parameters for robust normalisation.

    Args:
        x: Data array.
        percentiles: Between which percentiles to normalise. The default is from the
            google interaction network paper. The sklearn standard is [75, 25].
    """
    x_median = []
    interquantile_range = []

    for feature_idx in range(x.shape[-1]):
        x_feature = x[:, :, feature_idx].flatten()
        x_median.append(np.nanmedian(x_feature, axis=0))
        quantile_high, quantile_low = np.nanpercentile(x_feature, percentiles)
        interquantile_range.append(quantile_high - quantile_low)

    return {"x_median": x_median, "interquantile_range": interquantile_range}


def robust_apply(x: np.ndarray, x_median: np.ndarray, interquantile_range: np.ndarray):
    """Applies robust normalisation to the data.

    The median of every feature is subtracted from every respective sample belonging to
    that feature and then each feature is scaled with respect to the respective
    inter-quantile range between the 1st and 3rd quantiles.
    """
    return (x - x_median) / interquantile_range


def robust_fast_apply(
    x: np.ndarray, x_median: np.ndarray, interquantile_range: np.ndarray
):
    """Applies robust normalisation to the data, but without median shift."""
    return x / interquantile_range


def standard_fit(x: np.ndarray) -> np.ndarray:
    """Finds the mean and the standard deviation of each feature in the input data."""
    x_mean = []
    x_std = []

    for feature_idx in range(x.shape[-1]):
        x_feature = x[:, :, feature_idx].flatten()
        x_mean.append(x_feature.mean(axis=0))
        x_std.append(x_feature.std(axis=0))

    return {"x_mean": x_mean, "x_std": x_std}


def standard_apply(x: np.ndarray, x_mean: np.ndarray, x_std: np.ndarray) -> np.ndarray:
    """Applies standard normalisation to the data.

    The mean of each feature is subtracted from every sample belonging to the
    respective feature and then divided by the corresponding standard deviation.
    """
    return (x - x_mean) / x_std
