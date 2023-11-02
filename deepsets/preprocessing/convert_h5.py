# Convert root file containing jet constituent data to .h5 file.

import os
from pathlib import Path

import uproot
import awkward as ak
import numpy as np
import vector
import h5py
import logging

vector.register_awkward()
logging.basicConfig(level=logging.INFO)

MAX_PARTICLES = 150
INPUT_FILE = "processed-pythia82-lhc13-WW-pt1-50k-r1_h022_e0175_t220_nonu_withPars.root"
OUTPUT_FILE = "processed-pythia82-lhc13-WW-pt1-50k-r1_h022_e0175_t220_nonu_withPars.h5"


def main(args):
    branches = ["j1_px", "j1_py", "j1_pz", "j1_e", "j1_pdgid"]
    input_file = uproot.open(args["input_file"])
    print(input_file)
    exit(1)
    arrays = input_file["t_allpar"].arrays(branches)
    px = arrays["j1_px"]
    py = arrays["j1_py"]
    pz = arrays["j1_pz"]
    e = arrays["j1_e"]
    pdgid = arrays["j1_pdgid"]

    particles = ak.zip(
        {
            "px": px,
            "py": py,
            "pz": pz,
            "E": e,
            "pdgid": pdgid,
        },
        with_name="Momentum4D",
    )

    # sort particles by pt
    ptsort = ak.argsort(particles.pt, axis=1, ascending=False)
    particles = particles[ptsort]

    jet_px = ak.sum(px, axis=1)
    jet_py = ak.sum(py, axis=1)
    jet_pz = ak.sum(pz, axis=1)
    jet_e = ak.sum(e, axis=1)

    jets = ak.zip(
        {
            "px": jet_px,
            "py": jet_py,
            "pz": jet_pz,
            "E": jet_e,
        },
        with_name="Momentum4D",
    )

    px = particles.px
    py = particles.py
    pz = particles.pz
    e = particles.E
    erel = e / jets.E
    pt = particles.pt
    ptrel = pt / jets.pt
    eta = particles.eta
    etarel = eta - jets.eta
    phi = particles.phi
    phirel = particles.deltaphi(jets)
    deltaR = particles.deltaR(jets)
    costheta = particles.costheta
    pdgid = particles.pdgid

    # difference with respect to max pt particle
    x = eta - particles[:, 0].eta
    y = particles.deltaphi(particles[:, 0])
    w = pt

    # etarot, phirot = rotate_and_reflect(x, y, w)
    # costhetarel = np.cos(2.0 * np.arctan(np.exp(-etarot)))

    jetConstituentList = np.stack(
        [
            to_np_array(arr)
            for arr in [
                px,
                py,
                pz,
                e,
                erel,
                pt,
                ptrel,
                eta,
                etarel,
                # etarot,
                phi,
                phirel,
                # phirot,
                deltaR,
                costheta,
                # costhetarel,
                pdgid,
            ]
        ],
        axis=-1,
    )

    # print(f"{jetConstituentList=}")
    # print(jetConstituentList.shape)

    input_file_name = Path(args["input_file"]).stem
    output_file = os.path.join(args["output_dir"], input_file_name, ".h5")
    with h5py.File(output_file, "w") as output:
        output.create_dataset("jetConstituentList", data=jetConstituentList)


def to_np_array(ak_array, max_n=MAX_PARTICLES, pad=0):
    return ak.fill_none(
        ak.pad_none(ak_array, max_n, clip=True, axis=-1), pad
    ).to_numpy()


# rotation + (possible) reflection needed later
def rotate_and_reflect(x, y, w):
    rot_x = []
    rot_y = []
    theta = 0
    maxPt = -1
    for ix, iy, iw in zip(x, y, w):
        dR = np.sqrt(ix * ix + iy * iy)
        thisPt = iw
        if dR > 0.1 and thisPt > maxPt:
            maxPt = thisPt
            # rotation in eta-phi plane c.f  https://arxiv.org/abs/1407.5675 and https://arxiv.org/abs/1511.05190:
            # theta = -np.arctan2(iy,ix)-np.radians(90)
            # rotation by lorentz transformation c.f. https://arxiv.org/abs/1704.02124:
            px = iw * np.cos(iy)
            py = iw * np.sin(iy)
            pz = iw * np.sinh(ix)
            theta = np.arctan2(py, pz) + np.radians(90)

    c, s = np.cos(theta), np.sin(theta)
    R = np.matrix("{} {}; {} {}".format(c, -s, s, c))
    for ix, iy, iw in zip(x, y, w):
        # rotation in eta-phi plane:
        # rot = R*np.matrix([[ix],[iy]])
        # rix, riy = rot[0,0], rot[1,0]
        # rotation by lorentz transformation
        px = iw * np.cos(iy)
        py = iw * np.sin(iy)
        pz = iw * np.sinh(ix)
        rot = R * np.matrix([[py], [pz]])
        px1 = px
        py1 = rot[0, 0]
        pz1 = rot[1, 0]
        iw1 = np.sqrt(px1 * px1 + py1 * py1)
        rix, riy = np.arcsinh(pz1 / iw1), np.arcsin(py1 / iw1)
        rot_x.append(rix)
        rot_y.append(riy)

    # now reflect if leftSum > rightSum
    leftSum = 0
    rightSum = 0
    for ix, iy, iw in zip(x, y, w):
        if ix > 0:
            rightSum += iw
        elif ix < 0:
            leftSum += iw
    if leftSum > rightSum:
        ref_x = [-1.0 * rix for rix in rot_x]
        ref_y = rot_y
    else:
        ref_x = rot_x
        ref_y = rot_y

    return np.array(ref_x), np.array(ref_y)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        formatter_class=argparse.ArgumentDefaultsHelpFormatter
    )
    parser.add_argument(
        "--input_file",
        type=str,
        required=True,
        help="Path to the input file to process.",
    )
    parser.add_argument(
        "--output_dir",
        type=str,
        required=True,
        help="Path to the output folder with the data.",
    )
    args = parser.parse_args()

    main(args)
