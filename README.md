# l1-jet-id

[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.10553804.svg)](https://doi.org/10.5281/zenodo.10553804)

Code for Level-1 jet tagging 

## Data
Raw data: https://zenodo.org/record/3602260#.YnT0xZpBz0o

Kfolded data (k=10) with each consituent having transverse momentum larger than 2 GeV (pT > 2 GeV): [https://cernbox.cern.ch/s/L714Jx0ENCg8uTd](https://cernbox.cern.ch/s/L714Jx0ENCg8uTd)

The 5 jet classes have equal representation in *each* kfold. The jets in every kfold are shuffled using different seeds. Moreover, the constituents of each jet are shuffled using a different seed.

For robust normalisation data, the parameters are:
```
x_median: [13.901342868804932, 0.0, 0.0]
interquantile_range: [119.6879810333252, 0.27309816256165514, 0.27362077757716186]
```
## K-Folding 
Consider the 5 folds (k=5) and label them: 1, 2, 3, 4, 5

[1, 2, 3, 4] for training + [5] for validation <- use this one for hyperparameter optimization (HO)

[2, 3, 4, 5] for training + [1] for validation

[3, 4, 5, 1] for training + [2] for validation

[4, 5, 1, 2] for training + [3] for validation

[5, 1, 2, 3] for training + [4] for validation

