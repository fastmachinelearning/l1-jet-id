import numpy as np
import os
import time
import argparse
import random
import sys

import tensorflow as tf
from tensorflow.keras.models import Model
from tensorflow.keras.layers import (
    Input,
    Concatenate,
    Flatten,
    BatchNormalization,
    Activation,
)
from tensorflow.keras.optimizers import Adam
from qkeras import QActivation, QDense, QConv1D, QConv2D, quantized_bits
from qkeras.autoqkeras.utils import print_qmodel_summary

from sklearn.metrics import accuracy_score
from tensorflow_model_optimization.python.core.sparsity.keras import pruning_wrapper


from node_edge_projection import NodeEdgeProjection

#sys.path.append("..")
import util.data

# Initiate the parser
parser = argparse.ArgumentParser()
parser.add_argument("-nmax", type=int, default=8, help="number of particle")
parser.add_argument("-De", type=int, default=8, help="De")
parser.add_argument("-Do", type=int, default=6, help="Do")
parser.add_argument("-NL", type=int, default=0, help="number of layer for the MLP_e")
parser.add_argument("-SE", type=int, default=0, help="scale_e")
parser.add_argument("-SN", type=int, default=2, help="scale_n")
parser.add_argument("-SG", type=int, default=4096, help="size of the first layer of MLP_g")
parser.add_argument("-batch", type=int, default=512, help="batch")
parser.add_argument("-epochs", type=int, default=200, help="epochs")
parser.add_argument("-patience", type=int, default=40, help="patience")
parser.add_argument("-acc", type=int, default=0, help="accuracy or loss")
parser.add_argument("-p_en", type=int, default=0, help="enable train with pruning")
parser.add_argument("-p_rate", type=float, default=0.5, help="pruning rate")
parser.add_argument("-seed", type=int, default=1, help="seed")
parser.add_argument("-VK", type=int, default=4, help="val_kfold")
parser.add_argument("-nbits", type=int, default=8, help="number of bits")
args = parser.parse_args()


random.seed(args.seed)
np.random.seed(args.seed)
tf.random.set_seed(args.seed)

kfolds = 5
val_kfold = args.VK
train_kfolds = [kfold for kfold in range(kfolds) if kfold != val_kfold]

nconst = args.nmax

fpath = f'./data_kfold/jets_{nconst}constituents_ptetaphi_nonorm'
fnames_train = [f'jet_images_c{nconst}_minpt2.0_ptetaphi_nonorm_{train_kfold}'
                     for train_kfold in train_kfolds]
fname_val = f'jet_images_c{nconst}_minpt2.0_ptetaphi_nonorm_{val_kfold}'

data = util.data.Data.load_kfolds(fpath, fnames_train, fname_val)
print (data.train_data.shape)


#jetConstituent = np.load("data/jetConstituent_150_3f.npy")
#target = np.load("data/jetConstituent_target_150_3f.npy")

#jetConstituent = data.train_data 
#target = data.train_target 

# Restrict the number of constituents to a maximum of NMAX
#jetConstituent = jetConstituent[:, 0:nmax, :]

# Shuffles jet constituents
#print("Before --->> jetConstituent[0,0:4,0] = ", jetConstituent[0, 0:4, 0])
#for i in range(jetConstituent.shape[0]):
#    jetConstituent[i] = jetConstituent[i, np.random.permutation(nconstit), :]
#print("After --->> jetConstituent[0,0:4,0] = ", jetConstituent[0, 0:4, 0])

#from sklearn.model_selection import train_test_split

#X = jetConstituent
#Y = target
#del jetConstituent, target

#X_train_val, X_test, Y_train_val, Y_test = train_test_split(
#    X, Y, test_size=0.33, random_state=7
#)

X_train = data.train_data
X_val = data.test_data
X_test = data.test_data

Y_train = data.train_target
Y_val = data.test_target
Y_test = data.test_target

# nomilization
interquantile_range_32 = [120, 0.27, 0.27]
interquantile_range_16 = [166, 0.24, 0.24]
interquantile_range_8  = [219, 0.20, 0.20]


nmax =      args.nmax
if nmax == 8:
    X_train     = X_train / interquantile_range_8
    X_val       = X_val   / interquantile_range_8
    X_test      = X_test  / interquantile_range_8
elif nmax == 16:
    X_train     = X_train / interquantile_range_16
    X_val       = X_val   / interquantile_range_16
    X_test      = X_test  / interquantile_range_16
elif nmax == 32:
    X_train     = X_train / interquantile_range_32
    X_val       = X_val   / interquantile_range_32
    X_test      = X_test  / interquantile_range_32


# The dataset is N_jets x N_constituents x N_features
njet = X_train.shape[0]
nconstit = X_train.shape[1]
nfeat = X_train.shape[2]

ntargets = Y_train.shape[1]

print("#jets = ", njet)
print("#constituents = ", nconstit)
print("#targets = ", ntargets)
print("#features = ", nfeat)

print(X_train.shape, X_test.shape, Y_train.shape, Y_test.shape)

print( f"number of G jets for training/validation: {np.sum(np.argmax(Y_train, axis=1) == 0)}/{np.sum(np.argmax(Y_val, axis=1) == 0)}")
print( f"number of Q jets for training/validation: {np.sum(np.argmax(Y_train, axis=1) == 1)}/{np.sum(np.argmax(Y_val, axis=1) == 1)}")
print( f"number of W jets for training/validation: {np.sum(np.argmax(Y_train, axis=1) == 2)}/{np.sum(np.argmax(Y_val, axis=1) == 2)}")
print( f"number of Z jets for training/validation: {np.sum(np.argmax(Y_train, axis=1) == 3)}/{np.sum(np.argmax(Y_val, axis=1) == 3)}")
print( f"number of T jets for training/validation: {np.sum(np.argmax(Y_train, axis=1) == 4)}/{np.sum(np.argmax(Y_val, axis=1) == 4)}")

print("number of G jets for testing: %i" % np.sum(np.argmax(Y_test, axis=1) == 0))
print("number of Q jets for testing: %i" % np.sum(np.argmax(Y_test, axis=1) == 1))
print("number of W jets for testing: %i" % np.sum(np.argmax(Y_test, axis=1) == 2))
print("number of Z jets for testing: %i" % np.sum(np.argmax(Y_test, axis=1) == 3))
print("number of T jets for testing: %i" % np.sum(np.argmax(Y_test, axis=1) == 4))

# baseline keras model

#exit()

# Params for 8 constituents - try
De = args.De  # size of latent edges features representations
Do = args.Do  # size of latent nodes features representations
scale_e = args.SE  # multiplicative factor for # hidden neurons in Edges MLP
scale_n = args.SN  # multiplicative factor for # hidden neurons in Nodes MLP

#if nmax == 32:
#    scale_g = float(args.SG/(nmax*Do))/(nmax*Do)
#elif nmax == 16:
#    scale_g = float(args.SG/(nmax*Do))/(nmax*Do)
#    #scale_g = 0.35  # multiplicative factor for # hidden neurons in Graph MLP
#elif nmax == 8:
#    scale_g = float(args.SG/(nmax*Do))/(nmax*Do)
#    #scale_g = 1  # multiplicative factor for # hidden neurons in Graph MLP


scale_g = float(args.SG/(nmax*Do))/(nmax*Do)
NL = args.NL


# Interaction Network model parameters
N = nconstit
P = nfeat
Nr = N * (N - 1)  # number of relations ( edges )
Dr = 0
Dx = 0

# Quantized bits
nbits = args.nbits
integ = 0

# Set QKeras quantizer and activation
if nbits == 1:
    qbits = "binary(alpha=1)"
elif nbits == 2:
    qbits = "ternary(alpha=1)"
else:
    qbits = "quantized_bits({},0,alpha=1)".format(nbits)

qact = "quantized_relu({},0)".format(nbits)

# Print
print("Training with max # of contituents = ", nconstit)
print("Number of node features = ", nfeat)
print("Quantization with nbits=", nbits)
print("Quantization of integer part=", integ)

# Input shape
inp = Input(shape=(nconstit, nfeat), name="in_layer")

# Batch normalize the inputs
#x = BatchNormalization(name="batchnorm")(inp)
x = inp

# Project to edges
ORr = NodeEdgeProjection(name="proj_1", receiving=True, node_to_edge=True)(x)
ORs = NodeEdgeProjection(name="proj_2", receiving=False, node_to_edge=True)(x)
#ORr = NodeEdgeProjection(name="proj_1", receiving=True, node_to_edge=True)(inp)
#ORs = NodeEdgeProjection(name="proj_2", receiving=False, node_to_edge=True)(inp)

inp_e = Concatenate(axis=-1)(
    [ORr, ORs]
)  # Concatenates Or and Os  ( no relations features Ra matrix )

# Edges MLP ( takes as inputs nodes features of a fully conected graph edges )

# Define the Edges MLP layers
nhidden_e = int((2 * P + Dr) * scale_e)
if NL == 2:
    h = QConv1D(
        nhidden_e,
        kernel_size=1,
        kernel_quantizer=qbits,
        bias_quantizer=qbits,
        name="conv1D_e1",
    )(inp_e)
    h = QActivation(qact, name="qrelu_e1")(h)
    h = QConv1D(
        int(nhidden_e / 2),
        kernel_size=1,
        kernel_quantizer=qbits,
        bias_quantizer=qbits,
        name="conv1D_e2",
    )(h)
    h = QActivation(qact, name="qrelu_e2")(h)
    h = QConv1D(
        De,
        kernel_size=1,
        kernel_quantizer=qbits,
        bias_quantizer=qbits,
        name="conv1D_e3",
    )(h)
if NL == 1:
    h = QConv1D(
        nhidden_e,
        kernel_size=1,
        kernel_quantizer=qbits,
        bias_quantizer=qbits,
        name="conv1D_e1",
    )(inp_e)
    h = QActivation(qact, name="qrelu_e1")(h)
    h = QConv1D(
        De,
        kernel_size=1,
        kernel_quantizer=qbits,
        bias_quantizer=qbits,
        name="conv1D_e3",
    )(h)
elif NL == 0:
    h = QConv1D(
        De,
        kernel_size=1,
        kernel_quantizer=qbits,
        bias_quantizer=qbits,
        name="conv1D_e3",
    )(inp_e)

out_e = QActivation(qact, name="qrelu_e3")(h)

# Project to nodes
out_e = NodeEdgeProjection(name="proj_3", receiving=True, node_to_edge=False)(out_e)

# Nodes MLP ( takes as inputs node features and embeding from edges MLP )

# Concatenate input Node features and Edges MLP output for the Nodes MLP input
inp_n = Concatenate(axis=-1)(
    [x, out_e]
)  #  Original IN was C = tf.concat([N,x,E], axis=1)

# Define the Nodes MLP layers
nhidden_n = int((P + Dx + De) * scale_n)  # number of neurons in Nodes MLP hidden layer
h = QConv1D(
    nhidden_n,
    kernel_size=1,
    kernel_quantizer=qbits,
    bias_quantizer=qbits,
    name="conv1D_n1",
)(inp_n)
h = QActivation(qact, name="qrelu_n1")(h)
h = QConv1D(
    int(nhidden_n / 2),
    kernel_size=1,
    kernel_quantizer=qbits,
    bias_quantizer=qbits,
    name="conv1D_n2",
)(h)
h = QActivation(qact, name="qrelu_n2")(h)
h = QConv1D(
    Do, kernel_size=1, kernel_quantizer=qbits, bias_quantizer=qbits, name="conv1D_n3"
)(h)
out_n = QActivation(qact, name="qrelu_n3")(h)

#  Graph classification MLP

# Flatten input for the Graph classifier MLP
inp_g = Flatten()(out_n)

# Define Graph classifier MLP  layers
nhidden_g = int((Do * N) * scale_g)  # Number of nodes in graph MLP hidden layer
h = QDense(nhidden_g, kernel_quantizer=qbits, bias_quantizer=qbits, name="dense_g1")(
    inp_g
)
h = QActivation(qact, name="qrelu_g1")(h)
h = QDense(ntargets, kernel_quantizer=qbits, bias_quantizer=qbits, name="dense_g2")(h)
out = Activation("softmax", name="softmax_g2")(h)

# create the model
model = Model(inputs=inp, outputs=out)

# Define the optimizer ( minimization algorithm )
optim = Adam(learning_rate=0.0005)

if args.p_en:
    import tensorflow_model_optimization as tfmot
    from tensorflow_model_optimization.sparsity import keras as sparsity
    from tensorflow_model_optimization.python.core.sparsity.keras import pruning_callbacks

    NSTEPS =   int(len(X_train))  // args.batch

    def pruneFunction(layer):
        pruning_params = {
            'pruning_schedule': sparsity.PolynomialDecay(
                initial_sparsity=0.0, final_sparsity=args.p_rate, begin_step=NSTEPS * 2, end_step=NSTEPS * 10, frequency=NSTEPS
            )
        }
        #pruning_params_mlp_e = {
        #    'pruning_schedule': sparsity.PolynomialDecay(
        #        initial_sparsity=0.0, final_sparsity=0.5, begin_step=NSTEPS * 2, end_step=NSTEPS * 10, frequency=NSTEPS
        #    )
        #}
        if isinstance(layer, tf.keras.layers.Conv1D): 
            return tfmot.sparsity.keras.prune_low_magnitude(layer, **pruning_params)
        #if isinstance(layer, tf.keras.layers.Conv1D) and layer.name != 'conv1D_e3':   
        #    return tfmot.sparsity.keras.prune_low_magnitude(layer, **pruning_params)
        #if isinstance(layer, tf.keras.layers.Conv1D) and layer.name == 'conv1D_e3':
        #    return tfmot.sparsity.keras.prune_low_magnitude(layer, **pruning_params_mlp_e)
        if isinstance(layer, tf.keras.layers.Dense) and layer.name != 'dense_g2': # exclude output_dense
            return tfmot.sparsity.keras.prune_low_magnitude(layer, **pruning_params)
        return layer

    print_qmodel_summary(model)
    model = tf.keras.models.clone_model(model, clone_function=pruneFunction)

    model.compile(
        optimizer=optim, loss="categorical_crossentropy", metrics=["categorical_accuracy"]
    )
    
    pr = pruning_callbacks.UpdatePruningStep() 
else:

    # Compile the Model
    model.compile(
        optimizer=optim, loss="categorical_crossentropy", metrics=["categorical_accuracy"]
    )

# Model Summary
model.summary()

from tensorflow.keras.callbacks import EarlyStopping, ModelCheckpoint, ReduceLROnPlateau


outputdir = "nconst{}_nbits{}_De{}_Do{}_NL{}_SE{}_SN{}_SG{}_batch{}_acc{}_P{}_Seed{}_Kfold{}_{}".format(
    nmax,
    nbits,
    De,
    Do,
    NL,
    scale_e,
    scale_n,
    args.SG,
    args.batch,
    args.acc,
    args.p_en,
    args.seed,
    args.VK,
    time.strftime("%Y%m%d-%H%M%S"),
)

print("output dir: ", outputdir)
os.mkdir(outputdir)


mname = "model_QInteractionNetwork_nconst_{}_nbits_{}".format(
        nmax, 
        nbits,
)


patience = args.patience

if args.acc:
    # early stopping callback
    es = EarlyStopping(monitor="val_categorical_accuracy", patience=patience)
    # Learning rate scheduler
    ls = ReduceLROnPlateau(
        monitor="val_categorical_accuracy", factor=0.2, patience=patience
    )

    chkp = ModelCheckpoint(
        outputdir
        + "/"
        + mname
        + ".h5",
        monitor="val_categorical_accuracy",
        verbose=1,
        save_best_only=True,
        save_weights_only=False,
        mode="auto",
        save_freq="epoch",
    )
else:
    # early stopping callback
    es = EarlyStopping(monitor="val_loss", patience=patience)
    # Learning rate scheduler
    ls = ReduceLROnPlateau(monitor="val_loss", factor=0.2, patience=patience)

    # model checkpoint callback
    # this saves our model architecture + parameters into mlp_model.h5
    chkp = ModelCheckpoint(
        outputdir
        + "/"
        + mname 
        + ".h5",
        monitor="val_loss",
        verbose=1,
        save_best_only=True,
        save_weights_only=False,
        mode="auto",
        save_freq="epoch",
    )


if args.p_en:
    jetid_callbacks = [es, ls, chkp, pr]
else: 
    jetid_callbacks = [es, ls, chkp]


# Train classifier
history = model.fit(
    X_train,
    Y_train,
    epochs=args.epochs,
    batch_size=args.batch,  # small batch
    verbose=1,
    callbacks=jetid_callbacks,
    #validation_split=0.2,
    validation_data=(X_val, Y_val),
)


model = tf.keras.models.load_model(
    "{}/{}.h5".format(outputdir, mname),
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
accuracy_keras = float(
    accuracy_score(np.argmax(Y_test, axis=1), np.argmax(y_keras, axis=1))
)

accs = np.zeros(3)
accs[0] = accuracy_keras
if(args.p_en):
    accs[1] = args.p_rate

np.savetxt("{}/acc.txt".format(outputdir), accs, fmt="%.6f")
print("Keras:\n", accuracy_keras)

print("output dir: ", outputdir)
