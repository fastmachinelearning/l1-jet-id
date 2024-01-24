# kfolding training
## data loading
Please have a try of example_kfold_data_load.ipynb

## Train models
Train a model with data fold 4 as the validation dataset: 
```bash
python train_kfold_single.py -nmax 8 
```
Hyperparameter tuning can be done using this script to find the best hyper-parameters for the model.


## Train all fold model
After finding the optimal hyperparameter, train all the kfolding models based the found hyperparameters. 
Train all models:
```bash
python train_kfold.py -nmax 8 -De xx -NL xx -SE xx
```


## Inference/test

Please try test_kfold.ipynb
or using command:
```bash
python test_kfold.py -nmax 8 -mdir [DIR of models]
```

# syntheiss

```bash
python synthesize.py -C --model model_QInteractionNetwork_NodeEdgeProj_Conv1D_nconst_32_nbits_8 -o SYN_RESULT_PI_NET_n32
python synthesize.py -C --model model_QInteractionNetwork_NodeEdgeProj_Conv1D_nconst_16_nbits_8 -o SYN_RESULT_PI_NET_n16
python synthesize.py -C --model model_QInteractionNetwork_NodeEdgeProj_Conv1D_nconst_8_nbits_8 -o SYN_RESULT_PI_NET_n8
```
add -B for build



# non kfolding training

## Prepare the dataset
```bash
python create_dataset.py
```
It create two .npy files with 150 particles. 

## Train models
```bash
python train.py -nmax 16 -De 8 -NL 0 -SE 0
```
This scrip trains a model using 16 particles. The De is 8. The hidden number of layer for MLP_e is 0 so that the scale_e is unnecessary. 



 
