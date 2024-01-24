
python train_kfold.py -nmax 32 -De 3  -NL 0 -SE 0 -SN 6 -SG 3072 -p_en 1 -p_rate 0.50 -epochs 600 -patience 40 -batch 128

python train_kfold.py -nmax 16 -De  6 -NL 1 -SE 2 -SN 4 -SG 1024 -epochs 600 -patience 40 -batch 512

python train_kfold.py -nmax 8  -De  6 -NL 1 -SE 2 -SN 4 -SG 1024 -epochs 600 -patience 40 -batch 128

