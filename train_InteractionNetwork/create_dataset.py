import numpy as np
import h5py
import os

os.system("zenodo_get 10.5281/zenodo.3602260 -o data")
os.system("tar xvzf data/hls4ml_LHCjet_150p_train.tar.gz -C data/")

# Data PATH
TRAIN_PATH = "data/train/"


first = True
for file in os.listdir(TRAIN_PATH):
    print("Appending %s" % file)

    with h5py.File(TRAIN_PATH + file, "r") as data:
        if first:
            first = False
            jetConstituent = data["jetConstituentList"][:, :, [5, 8, 11]]
            target = data["jets"][:, -6:-1]
            print("Keys in H5PY files = ", list(data.keys()))
            print(" ")
            featurenames = data.get("jetFeatureNames")
            print("Jets Features = ", featurenames[:])
            print(" ")
            featurenames = data.get("particleFeatureNames")
            print("Jet Constituents Features = ", featurenames[:])
            print(" ")
            images = data.get("jetImage")
            print("Jet Images = ", images[:])
            print("Jet Image Shape = ", images.shape)
            print(" ")
        else:
            # Read (Pt,Etarel,Phirel)
            jetConstituent = np.concatenate(
                [jetConstituent, data["jetConstituentList"][:, :, [5, 8, 11]]], axis=0
            )
            target = np.concatenate([target, data["jets"][:, -6:-1]], axis=0)

print("Target shape =", target.shape)
print("Jet Constituents shape =", jetConstituent.shape)

# The dataset is N_jets x N_constituents x N_features
njet = jetConstituent.shape[0]
nconstit = jetConstituent.shape[1]
nfeat = jetConstituent.shape[2]


# Filter out constituents with Pt<2GeV
Ptmin = 2.0
constituents = np.zeros((njet, nconstit, nfeat), dtype=np.float32)
ij = 0
max_constit = 0
for j in range(njet):
    ic = 0
    for c in range(nconstit):
        if jetConstituent[j, c, 0] < Ptmin:
            continue
        constituents[ij, ic, :] = jetConstituent[j, c, :]
        ic += 1
    if ic > 0:
        if ic > max_constit:
            max_constit = ic
        target[ij, :] = target[j, :]  # assosicate the correct target a given graph
        ij += 1


# Resizes the jets constituents and target arrays
jetConstituent = constituents[0:ij, 0:max_constit, :]
target = target[0:ij, :]

# transform pt -> log(pt+1)
# jetConstituent[:, :, 0] = np.log(jetConstituent[:, :, 0] + 1)
np.save("data/jetConstituent_150_3f.npy", jetConstituent)
np.save("data/jetConstituent_target_150_3f.npy", target)
