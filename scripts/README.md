# Running the Scripts

All the experiments executed for the corresponding paper of this code have their configuration in the `scripts/configs` folder.
Here is a walkthrough from training an MLP to synthesizing it. This is analogous for the intnet and deepsets models. 

1. Train a floating point MLP on data with the most energetic 8 particles
```
./mlp_train --config configs/mlp_float32/mlp_float32_8const.yml --gpu 0
```

2. When the model finishes training, compute its performance on the test data set
```
./mlp_test --root_dir trained_mlps/mlp_float32_8const --gpu 0 --seed 123
```

3. Train a quantised precision model, e.g. weights are quantized to 8 bits, on the same data
```
./mlp_train --config configs/mlp_8bit_8const/mlp_8bit_8const.yml --gpu 0
```

4. Test the quantised precision model
```
./mlp_test --root_dir trained_mlps/mlp_8bit_8const --gpu 0 --seed 123
```

5. Train the same quantised model, but with an architecture that lends itself to synthetisation (hls4ml cannot synthesise models that are written in the class api of keras)
```
./mlp_train --config configs/mlp_8bit_8const/mlp_8bit_8const_synthtrain.yml --gpu 0
```

6. Test the synth ready model, it should have approximately the same accuracy as the quantised model
```
./mlp_test --root_dir trained_mlps/mlp_8bit_8const_synth --gpu 0 --seed 123
```

7. Generate the synthesis configuration for the model corresponding to the first kfolding, by default (other kfoldings should give you the same result)

```
./mlp_synth --config configs/mlp_8bit_8const/mlp_8bit_8const_synthparams.yml --model_dir trained_mlps/mlp_8bit_8const_synth/kfolding1
```

7a. The step above can be also be done with model profiling, that gives you more information about the synthesized model performance; this is not required for the next step, and you might also encounter issues due to hls4ml[profiling] being a bit buggy
```
./mlp_synth --config configs/mlp_8bit_8const/mlp_8bit_8const_synthparams.yml --model_dir trained_mlps/mlp_8bit_8const_synth/kfolding1 --diagnose
```

8. The synthesis is performed using vivado_hls; in the `trained_mlps/mlp_8bit_8const_synth/kfolding1/synthesis` folder, run `vivado_hls` using the following command for example
```
vivado_hls -f build_prj.tcl
```

9. To get a more accurate resource estimation, run the following command in the same folder **after the synthesis is finished**
```
vivado -mode batch -source vivado_synth.tcl
```

The vivado report with an approximation of the latency of the model can be found in 
```
trained_mlps/mlp_8bit_8const_synth/kfolding1/synthesis/mlp_synthesis_prj/syn/report/mlp_synthesis_csynth.rpt
```
while a more accurate resource estimation can be found in
```
trained_mlps/mlp_8bit_8const_synth/kfolding1/synthesis/vivado_synth.rpt
```
