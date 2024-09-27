#!/usr/bin/env python

# Run the training of the mlp network given a configuration file.
import argparse
import os
import yaml


from fast_jetclass.mlp.train import main


parser = argparse.ArgumentParser(formatter_class=argparse.ArgumentDefaultsHelpFormatter)
parser.add_argument("--config_file", type=str)
parser.add_argument("--gpu", type=str, default="0")
parser.add_argument("--seed", type=int, default=42)
args = parser.parse_args()

os.environ["CUDA_VISIBLE_DEVICES"] = args.gpu

with open(args.config_file, "r") as stream:
    config = yaml.load(stream, Loader=yaml.Loader)

main(config)
