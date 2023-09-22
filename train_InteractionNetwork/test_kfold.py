
import numpy as np
import os
import time
import argparse
import random
import sys

import tensorflow as tf
from tensorflow import keras
from tensorflow.keras.models import Model
from tensorflow.keras.layers import Input, Concatenate, Flatten, BatchNormalization, Activation

from tensorflow.keras.optimizers import Adam
from qkeras import QActivation, QDense, QConv1D, QConv2D, quantized_bits
from qkeras.autoqkeras.utils import print_qmodel_summary

from sklearn.metrics import accuracy_score
from tensorflow_model_optimization.python.core.sparsity.keras import pruning_wrapper
from tensorflow.keras.callbacks import EarlyStopping, ModelCheckpoint, ReduceLROnPlateau

from node_edge_projection import NodeEdgeProjection

sys.path.append("..")
import util.data
import util.plots
import util.util
from util.terminal_colors import tcols

#os.environ['CUDA_VISIBLE_DEVICES'] = "0"
# Initiate the parser
parser = argparse.ArgumentParser()
parser.add_argument("-nmax", type=int, default=8, help="number of particle")
parser.add_argument("-mdir", type=str, help="directory for the models")
parser.add_argument("-seed", type=int, default=1, help="seed")
parser.add_argument("-nbits", type=int, default=8, help="number of bits")
args = parser.parse_args()

random.seed(args.seed)
np.random.seed(args.seed)
tf.random.set_seed(args.seed)

# replace with your own model_dir
model_dir = args.mdir 

nmax = args.nmax
# Quantized bits

nbits = args.nbits
integ = 0



fpath = f'./data_kfold/jets_{nmax}constituents_ptetaphi_nonorm'
fname_test = f'jet_images_c{nmax}_minpt2.0_ptetaphi_nonorm'

data = util.data.Data(fpath=fpath, fname=fname_test, only_test=True)

X_test = data.test_data
Y_test = data.test_target

interquantile_range_32 = [120, 0.27, 0.27]
interquantile_range_16 = [166, 0.24, 0.24]
interquantile_range_8  = [219, 0.20, 0.20]
    
if nmax == 8:
    X_test      = X_test      / interquantile_range_8
elif nmax == 16:
    X_test      = X_test      / interquantile_range_16
elif nmax == 32:
    X_test      = X_test      / interquantile_range_32
    
    # The dataset is N_jets x N_constituents x N_features
njet = X_test.shape[0]
nconstit = X_test.shape[1]
nfeat = X_test.shape[2]

ntargets = Y_test.shape[1]
    
print("#jets = ", njet)
print("#constituents = ", nconstit)
print("#targets = ", ntargets)
print("#features = ", nfeat)
    
print(X_test.shape, Y_test.shape)



kfolds = 5
accuracy_keras = []
kfold_metrics = {
    "fprs": [],
    "aucs": [],
    "fats": [],
    "accs": [],
    "loss": []
}

for i in range (kfolds):
    
    val_kfold = i
    #train_kfolds = [kfold for kfold in range(kfolds) if kfold != test_kfold]

    mname = "model_QInteractionNetwork_nconst_{}_nbits_{}_kfold_{}".format(
            nmax, 
            nbits,
            val_kfold,
    )
        
    model = tf.keras.models.load_model(
        "{}/{}.h5".format(model_dir, mname),
        custom_objects={
            "QDense": QDense,
            "QActivation": QActivation,
            "QConv1D": QConv1D,
            "QConv2D": QConv2D,
            "quantized_bits": quantized_bits,
            #"GarNet": GarNet,
            "NodeEdgeProjection": NodeEdgeProjection,
            "PruneLowMagnitude": pruning_wrapper.PruneLowMagnitude,
        },
    )
    
    y_keras = model.predict(X_test)
    
    accuracy_keras.append(float(
        accuracy_score(np.argmax(Y_test, axis=1), np.argmax(y_keras, axis=1))
    ))
    
    acc = keras.metrics.CategoricalAccuracy()
    acc.update_state(Y_test, y_keras)
    
    categorical_crossent = keras.losses.CategoricalCrossentropy()
    ce_loss = categorical_crossent(Y_test, y_keras).numpy()
    
    plots_dir = model_dir
    roc_metrics = util.plots.roc_curves(plots_dir, y_keras, Y_test, val_kfold)
    util.plots.dnn_output(plots_dir, y_keras)
    
    model_kfold_metrics = {}
    model_kfold_metrics.update({"fprs": roc_metrics[0]})
    model_kfold_metrics.update({"aucs": roc_metrics[2]})
    model_kfold_metrics.update({"fats": roc_metrics[3]})
    model_kfold_metrics.update({"accs": acc.result().numpy()})
    model_kfold_metrics.update({"loss": ce_loss})

    for key in model_kfold_metrics.keys():
        kfold_metrics[key].append(model_kfold_metrics[key])
        
    
print("inference done")    

print(kfold_metrics)

accuracy_average = np.mean(np.array(accuracy_keras))
accuracy_errs = np.std(np.array(accuracy_keras))
print(accuracy_average)
print(accuracy_errs)
print(accuracy_keras)

tprs_baseline = roc_metrics[1]


avg_metrics = {}
for key, value in kfold_metrics.items():
    avg_metrics.update(
        {f"{key}": np.mean(value, axis=0), f"{key}_errs": np.std(value, axis=0)}
    )
variance_fats = np.var(kfold_metrics['fats'])

roc_uncert_plot_data = avg_metrics.copy()
del roc_uncert_plot_data['accs']
del roc_uncert_plot_data['accs_errs']
del roc_uncert_plot_data['loss']
del roc_uncert_plot_data['loss_errs']


roc_uncert_plot_data.update({'tpr': tprs_baseline, 'outdir': model_dir})
util.plots.roc_curves_uncert(**roc_uncert_plot_data)

inverse_fats = 1 / np.mean(avg_metrics['fats'])
inverse_fats_error = inverse_fats**2 * np.sqrt(np.sum(variance_fats))

print(f"Accuracy: {avg_metrics['accs']:.3f} \u00B1 {avg_metrics['accs_errs']:.3f}")
print(f"Avg loss: {avg_metrics['loss']:.3f} \u00B1 {avg_metrics['loss_errs']:.3f}")
print(f"Average 1/<FPR>: {inverse_fats:.3f} \u00B1 {inverse_fats_error:.3f}")

