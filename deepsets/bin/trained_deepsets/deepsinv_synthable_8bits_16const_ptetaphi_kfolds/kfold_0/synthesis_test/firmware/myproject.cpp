#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t input_layer[N_INPUT_1_1*N_INPUT_2_1],
    result_t layer18_out[N_LAYER_16]
) {

    // hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=input_layer complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer18_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=input_layer,layer18_out 
    #pragma HLS DATAFLOW 

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        // hls-fpga-machine-learning insert load weights
        nnet::load_weights_from_txt<phi1_weight_t, 96>(w19, "w19.txt");
        nnet::load_weights_from_txt<phi1_bias_t, 32>(b19, "b19.txt");
        nnet::load_weights_from_txt<phi2_weight_t, 1024>(w20, "w20.txt");
        nnet::load_weights_from_txt<phi2_bias_t, 32>(b20, "b20.txt");
        nnet::load_weights_from_txt<phi3_weight_t, 1024>(w21, "w21.txt");
        nnet::load_weights_from_txt<phi3_bias_t, 32>(b21, "b21.txt");
        nnet::load_weights_from_txt<weight13_t, 1024>(w13, "w13.txt");
        nnet::load_weights_from_txt<bias13_t, 32>(b13, "b13.txt");
        nnet::load_weights_from_txt<dense_weight_t, 160>(w16, "w16.txt");
        nnet::load_weights_from_txt<dense_bias_t, 5>(b16, "b16.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    // hls-fpga-machine-learning insert layers

    layer19_t layer19_out[N_OUTPUTS_19*N_FILT_19];
    #pragma HLS ARRAY_PARTITION variable=layer19_out complete dim=0
    nnet::pointwise_conv_1d_cl<input_t, layer19_t, config19>(input_layer, layer19_out, w19, b19); // phi1
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer19_t>(layer19_out, "phi1", N_OUTPUTS_19*N_FILT_19);
#endif

    layer4_t layer4_out[N_LAYER_1_2*N_LAYER_2_2];
    #pragma HLS ARRAY_PARTITION variable=layer4_out complete dim=0
    nnet::relu<layer19_t, layer4_t, relu_config4>(layer19_out, layer4_out); // q_activation
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer4_t>(layer4_out, "q_activation", N_LAYER_1_2*N_LAYER_2_2);
#endif

    layer20_t layer20_out[N_OUTPUTS_20*N_FILT_20];
    #pragma HLS ARRAY_PARTITION variable=layer20_out complete dim=0
    nnet::pointwise_conv_1d_cl<layer4_t, layer20_t, config20>(layer4_out, layer20_out, w20, b20); // phi2
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer20_t>(layer20_out, "phi2", N_OUTPUTS_20*N_FILT_20);
#endif

    layer7_t layer7_out[N_LAYER_1_5*N_LAYER_2_5];
    #pragma HLS ARRAY_PARTITION variable=layer7_out complete dim=0
    nnet::relu<layer20_t, layer7_t, relu_config7>(layer20_out, layer7_out); // q_activation_1
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer7_t>(layer7_out, "q_activation_1", N_LAYER_1_5*N_LAYER_2_5);
#endif

    layer21_t layer21_out[N_OUTPUTS_21*N_FILT_21];
    #pragma HLS ARRAY_PARTITION variable=layer21_out complete dim=0
    nnet::pointwise_conv_1d_cl<layer7_t, layer21_t, config21>(layer7_out, layer21_out, w21, b21); // phi3
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer21_t>(layer21_out, "phi3", N_OUTPUTS_21*N_FILT_21);
#endif

    layer10_t layer10_out[N_LAYER_1_8*N_LAYER_2_8];
    #pragma HLS ARRAY_PARTITION variable=layer10_out complete dim=0
    nnet::relu<layer21_t, layer10_t, relu_config10>(layer21_out, layer10_out); // q_activation_2
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer10_t>(layer10_out, "q_activation_2", N_LAYER_1_8*N_LAYER_2_8);
#endif

    layer11_t layer11_out[N_LAYER_1_8*N_LAYER_2_8];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    nnet::linear<layer10_t, layer11_t, linear_config11>(layer10_out, layer11_out); // q_activation_3
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer11_t>(layer11_out, "q_activation_3", N_LAYER_1_8*N_LAYER_2_8);
#endif

    layer12_t layer12_out[N_FILT_12];
    #pragma HLS ARRAY_PARTITION variable=layer12_out complete dim=0
    nnet::global_pooling1d_cl<layer11_t, layer12_t, config12>(layer11_out, layer12_out); // global_average_pooling1d
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer12_t>(layer12_out, "global_average_pooling1d", N_FILT_12);
#endif

    layer13_t layer13_out[N_LAYER_13];
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0
    nnet::dense<layer12_t, layer13_t, config13>(layer12_out, layer13_out, w13, b13); // rho
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer13_t>(layer13_out, "rho", N_LAYER_13);
#endif

    layer15_t layer15_out[N_LAYER_13];
    #pragma HLS ARRAY_PARTITION variable=layer15_out complete dim=0
    nnet::relu<layer13_t, layer15_t, relu_config15>(layer13_out, layer15_out); // q_activation_4
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer15_t>(layer15_out, "q_activation_4", N_LAYER_13);
#endif

    layer16_t layer16_out[N_LAYER_16];
    #pragma HLS ARRAY_PARTITION variable=layer16_out complete dim=0
    nnet::dense<layer15_t, layer16_t, config16>(layer15_out, layer16_out, w16, b16); // dense
#ifndef __SYNTHESIS__
    nnet::save_layer_output<layer16_t>(layer16_out, "dense", N_LAYER_16);
#endif

    nnet::softmax<layer16_t, result_t, Softmax_config18>(layer16_out, layer18_out); // softmax
#ifndef __SYNTHESIS__
    nnet::save_layer_output<result_t>(layer18_out, "softmax", N_LAYER_16);
#endif

}
