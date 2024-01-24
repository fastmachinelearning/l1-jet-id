# pip install git+https://github.com/com:fastmachinelearning/hls4ml.git@main

import sys, os, time
import hls4ml
import pickle
import tensorflow as tf
from tensorflow_model_optimization.sparsity.keras import strip_pruning
from tensorflow_model_optimization.python.core.sparsity.keras import pruning_wrapper
from tensorflow_model_optimization.sparsity.keras import strip_pruning

from qkeras import QActivation, QDense, QConv1D, QConv2D, quantized_bits
from node_edge_projection import NodeEdgeProjection
from hls_node_edge_projection import register_custom_layer
from qkeras.autoqkeras.utils import print_qmodel_summary

from pathlib import Path
import pprint

import numpy as np
from sklearn.metrics import roc_curve, auc, accuracy_score

#from garnet import GarNet

import matplotlib.pyplot as plt

from joblib import Parallel, delayed
import time
import shutil

import argparse

import os

def check_sparsity(model):
    allWeightsByLayer = {}
    
    print("\n")
    print("Checking Sparity")
    for layer in model.layers:
        if (layer._name).find("batch")!=-1 or len(layer.get_weights())<1:
            continue
        weights=layer.weights[0].numpy().flatten()
        allWeightsByLayer[layer._name] = weights
        print('Layer {}: % of zeros = {}'.format(layer._name,np.sum(weights==0)/np.size(weights)))


def synthesize(mname, datapath, plotpath, ONAME, build=False, trace=False):

    nfeat = 3

    if mname.split("_")[-4] == "De":
        nconst = int(mname.split("_")[-5])
    #    De = int(mname.split("_")[-3])
    else:
        nconst = int(mname.split("_")[-3])
    #    De = 2 * nfeat

    model = tf.keras.models.load_model(
        "models/{}.h5".format(mname),
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
    model  = strip_pruning(model)
    check_sparsity(model)

    model.summary()
    print("nconst: ", nconst)
    print("nfeat: ", nfeat)
    
    


    #reuse_factor_conv1d_raw = int(nfeat * nconst * (nconst*(nconst-1)) / 6144)
    #if reuse_factor_conv1d_raw < 1:
    #    reuse_factor_conv1d = 1
    #elif reuse_factor_conv1d_raw < 8:
    #    reuse_factor_conv1d = 8
    #elif reuse_factor_conv1d_raw < 16:
    #    reuse_factor_conv1d = 16
    #elif reuse_factor_conv1d_raw < 32:
    #    reuse_factor_conv1d = 32

    #reuse_factor_conv1d = nconst
    if args.rf == -1:
        reuse_factor_conv1d = nconst
    else:
        reuse_factor_conv1d = args.rf
        
    #reuse_factor_conv1d = 1
    print("reuse factor: ", reuse_factor_conv1d)

    register_custom_layer()
    # remove unncessary linear layers by explicitly specifying layer names
    hls4ml.model.optimizer.get_optimizer("output_rounding_saturation_mode").configure(
        layers=[
            "qrelu_e1",
            "qrelu_e2",
            "qrelu_e3",
            "qrelu_n1",
            "qrelu_n2",
            "qrelu_n3",
            "qrelu_g1",
            "softmax_g2",
        ],
        rounding_mode="AP_RND",
        saturation_mode="AP_SAT",
    )
    config = hls4ml.utils.config_from_keras_model(
        model, granularity="name", default_precision="ap_fixed<16,6>"
        #model, granularity="name", default_precision="ap_fixed<20,10>"
        #model, granularity="name", default_precision="ap_fixed<32,16>"
    )
    # config = hls4ml.utils.config_from_keras_model(model, granularity='name', default_precision='ap_fixed<32,16>')
    config["Model"]["Strategy"] = "Latency"

    # Handle large span of numerical values in input
    #inputPrecision = "ap_fixed<20,10,AP_RND,AP_SAT>"
    inputPrecision = "ap_fixed<12,4,AP_RND,AP_SAT>"
    #inputPrecision = "ap_fixed<32,16,AP_RND,AP_SAT>"
    #inputPrecision = "ap_fixed<16,6,AP_RND,AP_SAT>"
    #inputPrecision = 'ap_fixed<32,16,AP_RND,AP_SAT>'
    for layer in model.layers:
        if layer.__class__.__name__ in ["InputLayer"]:
            #config["LayerName"][layer.name]["Precision"] = 'ap_fixed<32,16,AP_RND,AP_SAT>'
            config["LayerName"][layer.name]["Precision"] = inputPrecision 
            #config["LayerName"][layer.name]["Precision"] = "ap_fixed<16,6,AP_RND,AP_SAT>"
            config["LayerName"][layer.name]["Trace"] = trace
        #if layer.__class__.__name__ in ["BatchNormalization"]:
        #    config["LayerName"][layer.name]["Precision"] = inputPrecision
        #if layer.__class__.__name__ in ["Concatenate"]:
        #    config["LayerName"]["concatenate"]["Precision"] = inputPrecision_nosat
        #    #config["LayerName"]["concatenate"]["Precision"] =  "ap_fixed<16,6,AP_RND,AP_SAT>"
        #if layer.__class__.__name__ in ["Concatenate"]:
        #    #config["LayerName"]["concatenate_1"]["Precision"] = inputPrecision 
        #    config["LayerName"]["concatenate_1"]["Precision"] = "ap_fixed<16,6,AP_RND,AP_SAT>"

        if layer.__class__.__name__ in [
            "Permute",
            "Concatenate",
            "Flatten",
            "Reshape",
        ]:
            print("Skipping trace for:", layer.name)
        else:
            config["LayerName"][layer.name]["Trace"] = trace

    if "InteractionNetwork" in mname:  # For interaction network
        for layer in model.layers:
            config["LayerName"][layer.name]["Strategy"] = "latency"

            if "NodeEdgeProjection" in layer.__class__.__name__ and layer.name == "proj_3":
                print("Configure the precision of the NodeEdgeProjection proj_3")
                #config["LayerName"]["proj_3"]["Precision"]["accum"] = "ap_fixed<20, 10>" 
                config["LayerName"]["proj_3"]["Precision"] = "ap_fixed<16, 6>" 
                #config["LayerName"]["proj_3"]["Precision"] = "ap_fixed<32, 16>" 
                #config["LayerName"]["proj_3"]["accum_t"] = inputPrecision 
                #config["LayerName"]["proj_3"]["proj_3_accum_t"] = inputPrecision 
                #config["LayerName"]["proj_3"]["Precision"] = inputPrecision 

            #if "Concatenate" in layer.__class__.__name__ and layer.name == "concatenate":
            #    #config["LayerName"]["concatenate"]["Precision"] = "ap_fixed<12,4,AP_RND,AP_SAT>"
            #    config["LayerName"]["concatenate"]["Precision"] = "ap_fixed<12,4>"

            if "Concatenate" in layer.__class__.__name__ and layer.name == "concatenate_1":
                config["LayerName"]["concatenate_1"]["Precision"] = "ap_fixed<16,6,AP_RND,AP_SAT>"
                #config["LayerName"]["concatenate_1"]["Precision"] = "ap_fixed<32,16,AP_RND,AP_SAT>"

            #if "Softmax" in layer.__class__.__name__ and layer.name == "softmax_g2":
            #    config["LayerName"]["softmax_g2"]["Precision"] = "ap_fixed<18,8,AP_RND,AP_SAT>"


            if "Conv1D" in layer.__class__.__name__ and layer.name == "conv1D_e1":
                config["LayerName"]["conv1D_e1"][ "ReuseFactor" ] = reuse_factor_conv1d  # divisors of nconst*(nconst-1)
            if "Conv1D" in layer.__class__.__name__ and layer.name == "conv1D_e2":
                config["LayerName"]["conv1D_e2"][ "ReuseFactor" ] = reuse_factor_conv1d  # divisors of nconst*(nconst-1)
            if "Conv1D" in layer.__class__.__name__ and layer.name == "conv1D_e3":
                config["LayerName"]["conv1D_e3"][ "ReuseFactor" ] = reuse_factor_conv1d  # divisors of nconst*(nconst-1)
            if "Conv1D" in layer.__class__.__name__:
                config["LayerName"][layer.name]["ConvImplementation"] = "Pointwise"

        config["LayerName"]["conv1D_n1"]["ReuseFactor"] = reuse_factor_conv1d  # divisors of nconst
        config["LayerName"]["conv1D_n2"]["ReuseFactor"] = reuse_factor_conv1d
        if "conv1D_n3" in config["LayerName"]:
            config["LayerName"]["conv1D_n3"]["ReuseFactor"] = reuse_factor_conv1d

    output_dir = f"{ONAME}/{mname}"

    hls_model = hls4ml.converters.convert_from_keras_model(
        model,
        hls_config=config,
        output_dir=output_dir,
        io_type="io_parallel",
        #part="xcvu9p-flgb2104-2l-e",
        part="xcvu13p-flga2577-2-e",
    )
    hls_model.compile()

    # Do plots
    hls4ml.utils.plot_model(
        hls_model,
        show_shapes=True,
        show_precision=True,
        to_file=f"{plotpath}/hls4ml_in_plot_{mname}.png",
    )
    tf.keras.utils.plot_model(model, to_file=f"{plotpath}/keras_in_plot_{mname}.png")

    # Copy the model to the output dir
    os.system(f"cp models/{mname}.h5 {ONAME}/")

    # Has shape (-1,8,3)
    X_test = np.ascontiguousarray(
        np.load("{}/x_test_{}const.npy".format(datapath, nconst))
    )

    # nomilization
    interquantile_range_32 = [120, 0.27, 0.27]
    interquantile_range_16 = [166, 0.24, 0.24]
    interquantile_range_8  = [219, 0.20, 0.20]
    
    nmax = nconst
    if nmax == 8:
        X_test      = X_test  / interquantile_range_8
    elif nmax == 16:
        X_test      = X_test  / interquantile_range_16
    elif nmax == 32:
        X_test      = X_test  / interquantile_range_32


    Y_test = np.load(
        "{}/y_test_{}const.npy".format(datapath, nconst), allow_pickle=True
    )
    X_test = X_test[:3000]
    Y_test = Y_test[:3000]

    if mname.find("QMLP") != -1:
        X_test = np.reshape(X_test, (-1, 24))

    y_keras = model.predict(X_test)
    y_hls = hls_model.predict(np.ascontiguousarray(X_test))

    accuracy_keras = float(
        accuracy_score(np.argmax(Y_test, axis=1), np.argmax(y_keras, axis=1))
    )
    accuracy_hls4ml = float(
        accuracy_score(np.argmax(Y_test, axis=1), np.argmax(y_hls, axis=1))
    )

    accs = {}
    accs["cpu"] = accuracy_keras
    accs["fpga"] = accuracy_hls4ml

    print("reuse factor: ", reuse_factor_conv1d)
    with open("{}/{}/acc.txt".format(ONAME, mname), "wb") as fp:
        pickle.dump(accs, fp)
    print("Keras:\n", accuracy_keras)
    print("hls4ml:\n", accuracy_hls4ml)

    accs_log = np.zeros(2)
    accs_log[0] = accuracy_keras
    accs_log[1] = accuracy_hls4ml
    np.savetxt("{}/acc.log".format(ONAME), accs_log, fmt="%.6f")

    # Plot the ROC curves
    colors = ["#d73027", "#fc8d59", "#fee090", "#e0f3f8", "#91bfdb", "#4575b4"]
    labels = ["gluon", "quark", "W", "Z", "top"]
    fpr = {}
    tpr = {}
    auc1 = {}
    fig = plt.figure()
    ax = fig.add_subplot()

    for i, label in enumerate(labels):
        fpr[label], tpr[label], threshold = roc_curve(Y_test[:, i], y_keras[:, i])
        auc1[label] = auc(fpr[label], tpr[label])
        ax.plot(
            tpr[label],
            fpr[label],
            label="%s, auc = %.1f%%" % (label, auc1[label] * 100.0),
            c=colors[i],
        )
        fpr[label], tpr[label], threshold = roc_curve(Y_test[:, i], y_hls[:, i])
        auc1[label] = auc(fpr[label], tpr[label])
        ax.plot(
            tpr[label],
            fpr[label],
            label="%s HLS, auc = %.1f%%" % (label, auc1[label] * 100.0),
            linestyle="dotted",
            c=colors[i],
        )
    ax.semilogy()
    ax.set_xlabel("sig. efficiency")
    ax.set_ylabel("bkg. mistag rate")
    ax.set_ylim(0.001, 1)
    ax.set_xlim(0.0, 1.0)
    plt.figtext(0.2, 0.83, r"{}".format(mname))
    # ax.set_grid(True)
    ax.legend(loc="lower right")
    plt.savefig(f"{plotpath}/ROC_keras_{mname}.png")

    # if not 'GarNet' in mname: #TODO! Add profiling for multiple inputs
    if trace:
        print("Running tracing!")
        profile_plots = hls4ml.model.profiling.numerical(model, hls_model, X_test)
        for i, p in enumerate(profile_plots):
            p.savefig(f"{plotpath}/profile_{mname}_{i}.png")

        fig = hls4ml.model.profiling.compare(model, hls_model, X_test)
        fig.savefig(f"{plotpath}/compare_{mname}.png")


        y_hls, hls4ml_trace = hls_model.trace(X_test)
        keras_trace = hls4ml.model.profiling.get_ymodel_keras(model, X_test)

        for layer in hls4ml_trace.keys():
            plt.figure()
            plt.scatter(
                hls4ml_trace[layer].flatten(), keras_trace[layer].flatten(), s=0.2
            )
            min_x = min(np.amin(hls4ml_trace[layer]), np.amin(keras_trace[layer]))
            max_x = max(np.amax(hls4ml_trace[layer]), np.amax(keras_trace[layer]))
            plt.plot([min_x, max_x], [min_x, max_x], c="gray")
            plt.xlabel("hls4ml {}".format(layer))
            plt.ylabel("QKeras {}".format(layer))
            plt.savefig(os.path.join(plotpath, f"profile_2d_{layer}.png"))

    if build:
        print("Running synthesis!")
        report = hls_model.build(csim=False, synth=True, vsynth=True)
        print(report["CSynthesisReport"])


def getReports(indir):

    with open("{}/acc.txt".format(indir), "rb") as fp:
        acc = pickle.load(fp)

    data_ = {}
    if "Garnet" in indir:
        data_["architecture"] = "GarNet"
    elif "GraphConv" in indir:
        data_["architecture"] = "GCN"
    elif "InteractionNetwork" in indir:
        data_["architecture"] = "IN"
    else:
        data_["architecture"] = "MLP"

    data_["precision"] = str(indir.split("_")[-1].replace("bit", "")).replace("/", "")
    data_["acc_ratio"] = round(acc["fpga"] / acc["cpu"], 2)
    report_vsynth = Path("{}/vivado_synth.rpt".format(indir))
    report_csynth = Path(
        "{}/myproject_prj/solution1/syn/report/myproject_csynth.rpt".format(indir)
    )

    if report_vsynth.is_file() and report_csynth.is_file():
        # Get the resources from the logic synthesis report
        with report_vsynth.open() as report:
            lines = np.array(report.readlines())
            lut = int(
                lines[np.array(["CLB LUTs*" in line for line in lines])][0].split("|")[
                    2
                ]
            )
            ff = int(
                lines[np.array(["CLB Registers" in line for line in lines])][0].split(
                    "|"
                )[2]
            )
            bram = float(
                lines[np.array(["Block RAM Tile" in line for line in lines])][0].split(
                    "|"
                )[2]
            )
            dsp = int(
                lines[np.array(["DSPs" in line for line in lines])][0].split("|")[2]
            )
            lut_rel = round(
                float(
                    lines[np.array(["CLB LUTs*" in line for line in lines])][0]
                    .split("|")[5]
                    .replace("<", "")
                ),
                1,
            )
            ff_rel = round(
                float(
                    lines[np.array(["CLB Registers" in line for line in lines])][
                        0
                    ].split("|")[5]
                ),
                1,
            )
            bram_rel = round(
                float(
                    lines[np.array(["Block RAM Tile" in line for line in lines])][
                        0
                    ].split("|")[5]
                ),
                1,
            )
            dsp_rel = round(
                float(
                    lines[np.array(["DSPs" in line for line in lines])][0].split("|")[5]
                ),
                1,
            )

            data_["lut"] = "{} ({}\%)".format(lut, lut_rel)
            data_["ff"] = "{} ({}\%)".format(ff, ff_rel)
            data_["bram"] = "{} ({}\%)".format(bram, bram_rel)
            data_["dsp"] = "{} ({}\%)".format(dsp, dsp_rel)

        with report_csynth.open() as report:
            lines = np.array(report.readlines())
            lat_line = lines[
                np.argwhere(
                    np.array(["Latency (cycles)" in line for line in lines])
                ).flatten()[0]
                + 3
            ]
            data_["latency_clks"] = round(int(lat_line.split("|")[2]))
            data_["latency_ns"] = round(int(lat_line.split("|")[2]) * 5.0)
            data_["latency_ii"] = round(int(lat_line.split("|")[6]))

    return data_


# Initiate the parser
parser = argparse.ArgumentParser()
parser.add_argument("-C", "--create", help="Create projects", action="store_true")
parser.add_argument("-T", "--trace", help="Trace", action="store_true")
parser.add_argument("-B", "--build", help="Build projects", action="store_true")
# parser.add_argument("--plotdir", help="Output path for plots", default="/eos/home-t/thaarres/www/l1_jet_tagging/l1_jet_tagging_hls4ml_dataset/")
parser.add_argument("--plotdir", help="Output path for plots", default=None)
# parser.add_argument("--datadir", help="Input path for data", default="/eos/home-t/thaarres/www/l1_jet_tagging/l1_jet_tagging_hls4ml_dataset/")
parser.add_argument("--datadir", help="Input path for data", default="./data")
parser.add_argument("--model", help="Choose one model; otherwise do all", default=None)
# parser.add_argument("-o", "--outdir", help="Output path for projects", default="/home/thaarres/HLS_PRJS/")
parser.add_argument(
    "-o", "--outdir", help="Output path for projects", default="./HLS_PRJS/"
)
parser.add_argument("-D", "--debug", help="High verbose", action="store_true")
parser.add_argument("-R", "--rf", help="reuse factor", type=int , default=-1)
args = parser.parse_args()


if __name__ == "__main__":

    # List of models to synthesize
    models = [
        "model_QInteractionNetwork_NodeEdgeProj_Conv1D_nconst_8_nbits_8",
        "model_QInteractionNetwork_NodeEdgeProj_Conv1D_nconst_16_nbits_8",
        "model_QInteractionNetwork_NodeEdgeProj_Conv1D_nconst_32_nbits_8",
    ]

    # just do one model
    if args.model and args.model in models:
        modelname = args.model
    else:
        print(
            "{} is not a valid model from possible models: {}".format(
                args.model, models
            )
        )
        exit()

    ONAME = args.outdir
    # ONAME = '{}_{}'.format(ONAME, time.strftime("%Y%m%d-%H%M%S"))

    if args.plotdir:
        PLOTS = args.plotdir
    else:
        PLOTS = ONAME

    print("output dir:", ONAME)

    DATA = args.datadir
    DEBUG = args.debug

    # Generate projects and produce firmware
    if args.create or args.build:
        start = time.time()
        synthesize( modelname, DATA, PLOTS, ONAME, build=args.build, trace=args.trace)
        end = time.time()
        print("Ended after {:.4f} s".format(end - start))

    # Only read projects
    else:

        import pandas

        dataMap = {
            "architecture": [],
            "precision": [],
            "acc_ratio": [],
            "dsp": [],
            "lut": [],
            "ff": [],
            "bram": [],
            "latency_clks": [],
            "latency_ns": [],
            "latency_ii": [],
        }

        for mname in models:
            print("Reading hls project {}/{}/".format(ONAME, mname))

            datai = getReports("{}/{}/".format(ONAME, mname))
            for key in datai.keys():
                dataMap[key].append(datai[key])

        dataPandas = pandas.DataFrame(dataMap)
        print(dataPandas)
        print(
            dataPandas.to_latex(
                columns=[
                    "architecture",
                    "precision",
                    "acc_ratio",
                    "latency_ns",
                    "latency_clks",
                    "latency_ii",
                    "dsp",
                    "lut",
                    "ff",
                    "bram",
                ],
                header=[
                    "Architecture",
                    "Precision ( \# bits )",
                    "Accuracy Ratio (FPGA/CPU)",
                    "Latency [ns]",
                    "Latency [clock cycles]",
                    "II [clock cycles]",
                    "DSP",
                    "LUT",
                    "FF",
                    "BRAM",
                ],
                index=False,
                escape=False,
            )
        )

    print("output dir:", ONAME)
