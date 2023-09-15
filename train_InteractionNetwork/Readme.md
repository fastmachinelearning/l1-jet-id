
# Prepare the dataset
```bash
python create_dataset.py
```
It create two .npy files with 150 particles. 

# Train models
```bash
python train.py -nmax 16 -De 8 -NL 0 -SE 0
```
This scrip trains a model using 16 particles. The De is 8. The hidden number of layer for MLP_e is 0 so that the scale_e is unnecessary. 



 
