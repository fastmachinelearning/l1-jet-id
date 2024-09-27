# Handles the data importing and small preprocessing for the interaction network.

import os
from pathlib import Path
import wget
import tarfile

import h5py
import pickle
import numpy as np
import sklearn.model_selection
import tensorflow as tf

from fast_jetclass.data import standardization
from fast_jetclass.data import plots
from fast_jetclass.util.terminal_colors import tcols


class HLS4MLData150(object):
    """Data class for importing and processing the jet data.

    The raw data is available at https://zenodo.org/records/3602260.
    See Moreno et. al. 2019 - JEDI-net: a jet identification algorithm for a full
    description of this data set, section 3.

    Args:
        root: The root directory of the data. It should contain a 'raw' and 'processed'
            folder with raw and processed data. Otherwise, these will be generated.
        nconst: The number of constituents the jet data should be sampled down to.
            The raw number of constituents is 150.
        feats: Which feature selection scheme should be applied. 'ptetaphi' for getting
            the transverse momentum, pseudo-rapidity, and azimuthal angle of each
            cosntituents for every jet. Otherwise, 'allfeats' gets all the features of
            each constituents.
        norm: What kind of normalisation to apply to the features of the data.
            Currently implemented: minmax, robust, or standard.
        train: Whether to import the training data (True) or validation data (False)
            of this data set.
        seed: If provided, shuffles the *constituents* in the data set with given seed.
    """

    def __init__(
        self,
        root: str,
        nconst: int,
        feats: str,
        norm: str,
        train: bool,
        kfolds: 0,
        seed: int = None,
    ):
        super().__init__()
        self.root = Path(root)
        self.nconst = nconst
        self.norm = norm
        self.feats = feats
        self.train = train
        self.type = "train" if self.train else "val"
        self.seed = seed
        self.min_pt = 2
        self.kfolds = kfolds
        self.norm_params = None

        self.train_url = (
            "https://zenodo.org/records/3602260/files/hls4ml_LHCjet_150p_train.tar.gz"
        )
        self.test_url = (
            "https://zenodo.org/records/3602260/files/hls4ml_LHCjet_150p_val.tar.gz"
        )

        self.preproc_output_name = f"{self.type}_{self.nconst}const.npy"
        self.proc_output_name = (
            f"{self.type}_{self.norm}_{self.nconst}const_{self.feats}.npy"
        )
        self.data_file_dir = self._get_raw_data()
        self.x = None
        self.y = None
        self._get_processed_data()
        self._kfold()

        self.njets = self.x.shape[0]
        self.nfeats = self.x.shape[-1]

    def _get_raw_data(self) -> str:
        """Downloads and unzips the raw data if it does not exist.

        This method checks the given root directory specified the init of the class.
        This root directory should have a specific structure, with the raw data files in
        a subfolder called "raw".
        """
        if not self._check_raw_data_exists():
            self._download_data()

        return self.root / "raw" / self.type

    def _check_raw_data_exists(self) -> bool:
        """Checks if the data exists in the given root dir or needs to be downloaded."""
        if self.root.is_dir():
            raw_dir = self.root / "raw"
            if raw_dir.is_dir():
                data_dir = raw_dir / self.type
                if data_dir.is_dir():
                    if any(data_dir.iterdir()):
                        return 1

        return 0

    def _check_preprocessed_data_exists(self) -> bool:
        """Checks if the preprocessed data exisits or needs to be re-processed."""
        if self.root.is_dir():
            preproc_folder = self.root / "preprocessed"
            x_preproc_file = preproc_folder / f"x_{self.preproc_output_name}"
            y_preproc_file = preproc_folder / f"y_{self.preproc_output_name}"

            if x_preproc_file.is_file() and y_preproc_file.is_file():
                self.x_preprocessed = np.load(x_preproc_file)
                self.y_preprocessed = np.load(y_preproc_file)
                return 1

        return 0

    def _check_processed_data_exists(self) -> bool:
        """Checks if the processed data exisits or needs to be re-processed."""
        if self.root.is_dir():
            proc_folder = self.root / "processed"
            x_proc_file = proc_folder / f"x_{self.proc_output_name}"
            y_proc_file = proc_folder / f"y_{self.proc_output_name}"

            if x_proc_file.is_file() and y_proc_file.is_file():
                self.x = np.load(x_proc_file)
                self.y = np.load(y_proc_file)
                return 1

        return 0

    def _download_data(self):
        """Downloads the jet data if it does not already exist."""
        raw_dir = self.root / "raw"
        if not raw_dir.is_dir():
            os.makedirs(raw_dir)

        if self.train:
            data_file_path = wget.download(self.train_url, out=str(raw_dir))
        else:
            data_file_path = wget.download(self.test_url, out=str(raw_dir))

        print("")
        data_tar = tarfile.open(data_file_path, "r:gz")
        data_tar.extractall(str(raw_dir))
        data_tar.close()
        os.remove(data_file_path)

    def _import_raw_data(self) -> tuple[np.ndarray, np.ndarray]:
        """Imports the raw data files into a numpy array."""
        dfiles = list(file for file in self.data_file_dir.iterdir() if file.is_file())
        data = h5py.File(dfiles[0])
        self.x_raw = data["jetConstituentList"]
        self.y_raw = data["jets"][:, -6:-1]

        for file_path in dfiles[1:]:
            data = h5py.File(file_path)
            add_x_data = data["jetConstituentList"]
            add_y_data = data["jets"][:, -6:-1]
            self.x_raw = np.concatenate((self.x_raw, add_x_data), axis=0)
            self.y_raw = np.concatenate((self.y_raw, add_y_data), axis=0)

    def _preproc_raw_data(self):
        """Applies preprocessing to the raw data.

        The raw data contains jets (samples), each comprising up to 150 particle
        constituents. Every constituent has a feature called transverse momentum which
        describes, loosely speaking, the energy of the particle. This method filters
        out all jet constituents that have this transverse momentum below a given
        minimum threshold. Additionally, the constituents in the raw data are
        ordered in descending order of tranverse momentum value. The first n
        constituents are taken for each jet, where n is a number between 1 and 150.
        """
        self.x_preprocessed = np.copy(self.x_raw)
        del self.x_raw
        self.y_preprocessed = np.copy(self.y_raw)
        del self.y_raw
        self._cut_transverse_momentum()
        self._restrict_nb_constituents()

        preproc_dir = self.root / "preprocessed"
        if not preproc_dir.is_dir():
            os.makedirs(preproc_dir)
        np.save(preproc_dir / f"x_{self.preproc_output_name}", self.x_preprocessed)
        np.save(preproc_dir / f"y_{self.preproc_output_name}", self.y_preprocessed)

    def _process_data(self):
        """Processes the already processed data.

        Namely, certain features are selected for each constituent of each jet.
        Furthermore, each feature is normalized, using a certain normalization scheme.
        For example, minmax normalization.
        """
        self.x = np.copy(self.x_preprocessed)
        del self.x_preprocessed
        self.y = np.copy(self.y_preprocessed)
        del self.y_preprocessed

        proc_folder = self.root / "processed"
        self._get_features()
        self.norm_params = self._get_normalisation_params()
        self._save_norm_parameters()

        self.x = standardization.apply_standardisation(
            self.norm, self.x, self.norm_params
        )
        if self.seed and self.train:
            self.shuffle_constituents(self.seed)
        self._plot_data()

        if not proc_folder.is_dir():
            os.makedirs(proc_folder)
        proc_folder = self.root / "processed"
        np.save(proc_folder / f"x_{self.proc_output_name}", self.x)
        np.save(proc_folder / f"y_{self.proc_output_name}", self.y)

        # Free up memory after finishing the preprocessing.
        del self.x
        del self.y
        self.x = np.load(proc_folder / f"x_{self.proc_output_name}")
        self.y = np.load(proc_folder / f"y_{self.proc_output_name}")

    def _get_normalisation_params(self) -> list[float]:
        """Computes the normalisation parameters on the training data.

        For example, computes the mean and standard deviation of a feature on the
        training data and then applies it to the validation data.
        This is done such that no information on the validation data is used before
        passing it through the machine learning algorithm.
        """
        proc_folder = self.root / "processed"
        if not self.train:
            try:
                params = f"normparams_{self.norm}_{self.nconst}const_{self.feats}.pkl"
                with open(proc_folder / params, "rb") as file:
                    norm_params = pickle.load(file)
                    return norm_params
            except OSError as e:
                print("\nProcessed training data not found when normalising val data.")
                print("The moments of the training data are needed.")
                print("Processing training data with same hyperparameters first!")
                x_data_train = HLS4MLData150(
                    self.root, self.nconst, self.feats, self.norm, True, self.kfolds
                )
                return x_data_train.norm_params

        return standardization.fit_standardisation(self.norm, self.x)

    def _get_processed_data(self):
        """Imports the processed data if it exists. If not, generates it."""
        if not self._check_processed_data_exists():
            if not self._check_preprocessed_data_exists():
                self._import_raw_data()
                self._preproc_raw_data()

            self._process_data()

    def _save_norm_parameters(self):
        """Save the normalisation parameters to a file for importing."""
        proc_folder = self.root / "processed"
        if not proc_folder.is_dir():
            os.makedirs(proc_folder)
        params_filename = f"normparams_{self.norm}_{self.nconst}const_{self.feats}.pkl"
        with open(proc_folder / params_filename, "wb") as file:
            pickle.dump(self.norm_params, file)

    def _plot_data(self):
        """Plots the normalised data."""
        print("Plotting data...")
        plots_folder = self.root / f"plots_{self.norm}_{self.nconst}const_{self.feats}"
        if not plots_folder.is_dir():
            os.makedirs(plots_folder)

        plots.constituent_number(plots_folder, self.x, self.type)
        plots.normalised_data(plots_folder, self.x, self.y, self.type, self.feats)

    def _get_features(self) -> np.ndarray:
        """Choose what feature selection to employ on the data. Return shape."""
        switcher = {
            "ptetaphi": lambda: self._select_features_ptetaphi(self.x),
            "allfeats": lambda: self._select_features_all(self.x),
        }

        self.x = switcher.get(self.feats, lambda: None)()
        if self.x is None:
            raise TypeError("Feature selection name not valid!")

    def _select_features_ptetaphi(self, data: np.ndarray) -> np.ndarray:
        """Selects (pT, etarel, phirel) features from the numpy jet array."""
        return data[:, :, [5, 8, 11]]

    def _select_features_all(self, data: np.ndarray):
        """Gets all the features from the numpy jet array.

        The features in this kind of 'selection' are:'
        (px, py, pz, E, Erel, pT, ptrel, eta, etarel, etarot, phi, phirel, phirot,
        deltaR, cos(theta), cos(thetarel), pdgid)
        """
        return data[:, :, :]

    def _cut_transverse_momentum(self):
        """Remove constituents that are below a certain transverse momentum from jets.

        If a jet has no constituents with a momentum above the given threshold, then
        the whole jet is removed.
        """
        boolean_mask = self.x_preprocessed[:, :, 5] > self.min_pt
        structure_memory = boolean_mask.sum(axis=1)
        self.x_preprocessed = np.split(
            self.x_preprocessed[boolean_mask, :], np.cumsum(structure_memory)[:-1]
        )
        self.x_preprocessed = [
            jet_const for jet_const in self.x_preprocessed if jet_const.size > 0
        ]
        self.y_preprocessed = self.y_preprocessed[structure_memory > 0]

    def _restrict_nb_constituents(self) -> np.ndarray:
        """Force each jet to have an equal number of constituents.

        If the jet has more constituents then the given number, the surplus is discarded.
        If the jet has less than the given number, then the jet vector is padded with 0
        values until its length reaches the given number.
        """
        for jet in range(len(self.x_preprocessed)):
            if self.x_preprocessed[jet].shape[0] >= self.nconst:
                self.x_preprocessed[jet] = self.x_preprocessed[jet][: self.nconst, :]
            else:
                padding_length = self.nconst - self.x_preprocessed[jet].shape[0]
                self.x_preprocessed[jet] = np.pad(
                    self.x_preprocessed[jet], ((0, padding_length), (0, 0))
                )
        self.x_preprocessed = np.array(self.x_preprocessed)

    def shuffle_constituents(self, seed: int):
        """Shuffles the constituents based on an array of seeds.

        Each jet's constituents is shuffled with respect to a seed that is fixed.
        This seed is different for each jet.
        """
        print("Shuffling constituents...")
        rng = np.random.default_rng(seed)
        seeds = rng.integers(low=0, high=10000, size=self.x.shape[0])

        for jet_idx, seed in enumerate(seeds):
            shuffling = np.random.RandomState(seed=seed).permutation(self.x.shape[1])
            self.x[jet_idx, :] = self.x[jet_idx, shuffling]

        print(tcols.OKGREEN + f"Shuffling done! \U0001F0CF" + tcols.ENDC)

    def _kfold(self):
        """Creates a kfolded view of the data."""
        if self.kfolds <= 0 or not self.train:
            return

        print(tcols.OKGREEN)
        print(f"Splitting the data into k={self.kfolds} kfolds.")
        print(tcols.ENDC)

        kfolder = sklearn.model_selection.StratifiedKFold(
            n_splits=self.kfolds, shuffle=True
        )
        # Convert back from one-hot to class targets since sklearn function does not
        # like one-hot targets.
        self.kfolds = kfolder.split(self.x, np.argmax(self.y, axis=-1))

    def show_details(self):
        """Prints some key details of the data set."""
        data_type = "Training" if self.train else "Validation"
        print(tcols.HEADER + f"{data_type} data details:" + tcols.ENDC)
        print(f"Dataset size: {self.x.shape[0]} jets")
        print(f"Number of constituents: {self.x.shape[1]}")
        print(f"Number of features: {self.x.shape[2]}")
        print("")
