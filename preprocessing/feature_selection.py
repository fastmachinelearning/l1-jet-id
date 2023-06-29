# Feature selection methods partaining for the jet particle data.

import h5py
import tensorflow as tf
import numpy as np


def get_features(sample, label, feat_selection: str):
    """Choose what feature selection to employ on the data. Return shape."""
    switcher = {
        "andre": lambda: select_features_andre(sample, label),
        "jedinet": lambda: select_features_jedinet(sample, label),
    }

    data = switcher.get(feat_selection, lambda: None)()
    if data is None:
        raise TypeError("Feature selection name not valid!")

    return data


def get_features_numpy(data: np.ndarray, feat_selection: str):
    """Choose what feature selection to employ on the data. Return shape."""
    switcher = {
        "andre": lambda: select_features_andre_numpy(data),
        "jedinet": lambda: select_features_jedinet_numpy(data),
    }

    data = switcher.get(feat_selection, lambda: None)()
    if data is None:
        raise TypeError("Feature selection name not valid!")

    return data


def _floats_feature(value):
    return tf.train.Feature(float_list=tf.train.FloatList(value=value))


def _int64_feature(value):
    if type(value) != list:
        value = [value]
    return tf.train.Feature(int64_list=tf.train.Int64List(value=value))


def select_features_andre_numpy(data: np.ndarray):
    """Selects (pT, etarel, phirel) features from the numpy jet array."""
    return data[:, :, [5, 8, 11]]


def select_features_jedinet_numpy(data: np.ndarray):
    """Gets all the features from the numpy jet array.

    The features in this kind of 'selection' are:'
    (px, py, pz, E, Erel, pT, ptrel, eta, etarel, etarot, phi, phirel, phirot, deltaR,
    cos(theta), cos(thetarel), pdgid)
    """
    return data[:, :, :]


def select_features_andre(sample, label):
    """Selects (pT, etarel, phirel) features for each sample in the .h5 data.

    Args:
        sample: The data sample.
        label: The corresponding label.

    Returns:
        Dictionary of features to be used in constructing a tf record example.
    """
    return {
        "pt": _floats_feature(sample[:, 5]),
        "eta": _floats_feature(sample[:, 8]),
        "phi": _floats_feature(sample[:, 11]),
        "label": _floats_feature(label[-6:-1]),
    }


def select_features_jedinet(sample, label):
    """Gets all the features for each sample in the .h5 data.

    The features in this kind of 'selection' are:'
    (px, py, pz, E, Erel, pT, ptrel, eta, etarel, etarot, phi, phirel, phirot, deltaR,
    cos(theta), cos(thetarel), pdgid)

    Args:
        sample: The data sample.
        label: The corresponding label.

    Returns:
        Dictionary of features to be used in constructing a tf record example.
    """
    return {
        "px": _floats_feature(sample[:, 0]),
        "py": _floats_feature(sample[:, 1]),
        "pz": _floats_feature(sample[:, 2]),
        "E": _floats_feature(sample[:, 3]),
        "Erel": _floats_feature(sample[:, 4]),
        "pt": _floats_feature(sample[:, 5]),
        "ptrel": _floats_feature(sample[:, 6]),
        "eta": _floats_feature(sample[:, 7]),
        "etarel": _floats_feature(sample[:, 8]),
        "etarot": _floats_feature(sample[:, 9]),
        "phi": _floats_feature(sample[:, 10]),
        "phirel": _floats_feature(sample[:, 11]),
        "phirot": _floats_feature(sample[:, 12]),
        "deltaR": _floats_feature(sample[:, 13]),
        "cos(theta)": _floats_feature(sample[:, 14]),
        "cos(thetarel)": _floats_feature(sample[:, 15]),
        "label": _floats_feature(label[-6:-1]),
    }
