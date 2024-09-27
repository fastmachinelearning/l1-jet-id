[![Email Badge](https://img.shields.io/badge/blah-podagiu%40ethz.ch-blue?style=flat-square&logo=minutemailer&logoColor=white&label=%20&labelColor=grey)](mailto:podagiu@ethz.ch)
[![Zenodo Badge](https://img.shields.io/badge/blah-10.5281%2Fzenodo.10553804-blue?style=flat-square&label=Zenodo&labelColor=grey)](https://zenodo.org/records/10553805)

# Ultrafast Jet Classification using Geometric Learning for the HL-LHC

Code repository corresponding to the [Ultrafast Jet Classification at the HL-LHC](https://arxiv.org/abs/2402.01876) paper.

Three machine learning models are used to perform jet origin classification. 
These models are optimized for deployment on a field-programmable gate array device. 
In this context, we demonstrate how latency and resource consumption scale with the input size and choice of algorithm. 
Through quantization-aware training and efficient synthetization for a specific field programmable gate array, we show that O(100) ns inference of geometric learning architectures such as Deep Sets and Interaction Networks is feasible at a relatively low computational resource cost.

## Installation
The main dependencies can be installed using `conda` by running the following command in the terminal while in this repository's directory
```
conda env create -f fast_jetclass.yml
```
Alternatively, one can install the following packages manually:
```
  - python=3.10
  - pyyaml
  - numpy
  - python-wget
  - scikit-learn
  - matplotlib
  - pydot
  - pydotplus
  - tensorflow==2.14
  - qkeras==0.9
  - tensorflow-model-optimization==0.8.0
```

Then, after installing the dependencies, install this repository using
```
pip install .
```
while still in this repository's directory.

### Additional Dependencies for Synthesis
The synthesis of the models for the FPGA are done using `hls4ml`.
Hence, a particular version of this package is needed for running `*_synth` part of the scripts.
To install this, execute `pip install .` inside the `hls4ml` directory of this repository.
Additionally, for the profiling of the synthesized models, one also needs a subpackage of `hls4ml`, installed with
```
pip install hls4ml[profiling]
conda install pydot
conda install pydotplus
```
I honestly have not found a way of making the profiling package work without `conda`.

If you do not need profiling, omit the `--diagnose` flag when running the `*_synth` scripts.
The profiling subpackage is a bit buggy, so if you encounter an error, contact the authors of this package; in the current version there are a couple of issues that are fixed by going into the source code of the profiling and changing a few lines.
Contact me at the email address above if you need help with this.

## Running the Scripts
Examples of running the scripts, from training to synthesis, are given for each model in the README of the scripts directory in this repository.
All the experiments executed for the corresponding paper of this code have their configuration in the `scripts/configs` folder.
