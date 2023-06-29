# Standardisation methods for the jet data.

import numpy as np
from sklearn.preprocessing import RobustScaler

from terminal_colors import tcols


def apply_standardisation(choice: str, x_data: np.ndarray, feat_range: tuple = (0, 1)):
    """Choose the type of normalisation to apply to the data.

    Args:
        choice: The choice of the user with repsect to the type of norm to apply.
        x_data: Array containing the data to normalise.
        feat_range: The range that each feature will be normalised to, e.g., in minmax.

    Returns:
        Normalised x_data numpy array.
    """
    if choice == "nonorm":
        print("Skipping normalisation...")
        return x_data

    print(tcols.OKGREEN + f"Applying {choice} normalisation..." + tcols.ENDC)
    switcher = {
        "minmax": lambda: minmax(x_data, feat_range),
        "robust": lambda: robust(x_data),
        "standard": lambda: standard(x_data),
    }

    x_data = switcher.get(choice, lambda: None)()

    if x_data is None:
        raise NameError(
            "Type of normalisation does not exist! Please choose from "
            f"the following list: {list(switcher.keys())}"
        )

    return x_data


def minmax(x: np.ndarray, feature_range: tuple = (0, 1)) -> np.ndarray:
    """Applies minmax normalisation to the data, i.e., every feature of every sample
    is divided by the maximum for that respective feature.

    Args:
        x: Data array.
        feature_range: Minimum and maximum of features after the normalisation.
    """
    min_feats = x.min(axis=0).min(axis=0)
    max_feats = x.max(axis=0).max(axis=0)
    x_norm = (x - min_feats) / (max_feats - min_feats)
    x_norm = x_norm * (feature_range[1] - feature_range[0]) + feature_range[0]

    return x_norm


def robust(x: np.ndarray, percentiles: list = [95, 5]) -> np.ndarray:
    """Applies robust normalisation to the data, i.e., the median of every feature is
    subtracted from every respective sample belonging to that feature and then each
    feature is scaled with respect to the respective inter-quantile range between
    the 1st and 3rd quantiles.

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

    x_norm = (x - x_median) / interquantile_range

    return x_norm


def standard(x: np.ndarray) -> np.ndarray:
    """Applies standard normalisation to the data, i.e., the mean of each feature is
    subtracted from every sample belonging to the respective feature and then divided
    by the corresponding standard deviation.
    """
    x_mean = []
    x_std = []

    for feature_idx in range(x.shape[-1]):
        x_feature = x[:, :, feature_idx].flatten()
        x_mean.append(x_feature.mean(axis=0))
        x_std.append(x_feature.std(axis=0))

    x_norm = (x - x_mean) / x_std

    return x_norm
