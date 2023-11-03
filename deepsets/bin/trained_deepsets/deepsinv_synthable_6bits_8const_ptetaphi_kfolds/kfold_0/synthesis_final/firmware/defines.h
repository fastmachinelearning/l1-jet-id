#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_fixed.h"
#include "ap_int.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

// hls-fpga-machine-learning insert numbers
#define N_INPUT_1_1 8
#define N_INPUT_2_1 3
#define N_OUTPUTS_19 8
#define N_FILT_19 32
#define N_LAYER_1_2 8
#define N_LAYER_2_2 32
#define N_OUTPUTS_20 8
#define N_FILT_20 32
#define N_LAYER_1_5 8
#define N_LAYER_2_5 32
#define N_OUTPUTS_21 8
#define N_FILT_21 32
#define N_LAYER_1_8 8
#define N_LAYER_2_8 32
#define N_LAYER_1_8 8
#define N_LAYER_2_8 32
#define N_FILT_12 32
#define N_LAYER_13 32
#define N_LAYER_13 32
#define N_LAYER_16 5
#define N_LAYER_16 5

// hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<12,4,AP_RND,AP_SAT> input_t;
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> layer19_t;
typedef ap_fixed<6,1> phi1_weight_t;
typedef ap_fixed<6,1> phi1_bias_t;
typedef ap_ufixed<8,0,AP_RND,AP_SAT> layer4_t;
typedef ap_fixed<18,8> q_activation_table_t;
typedef ap_fixed<16,6> layer20_t;
typedef ap_fixed<6,1> phi2_weight_t;
typedef ap_fixed<6,1> phi2_bias_t;
typedef ap_ufixed<8,0,AP_RND,AP_SAT> layer7_t;
typedef ap_fixed<18,8> q_activation_1_table_t;
typedef ap_fixed<16,6> layer21_t;
typedef ap_fixed<6,1> phi3_weight_t;
typedef ap_fixed<6,1> phi3_bias_t;
typedef ap_ufixed<8,0,AP_RND,AP_SAT> layer10_t;
typedef ap_fixed<18,8> q_activation_2_table_t;
typedef ap_fixed<12,4,AP_RND,AP_SAT> layer11_t;
typedef ap_fixed<18,8> q_activation_3_table_t;
typedef ap_fixed<16,6> layer12_t;
typedef ap_fixed<16,6> layer13_t;
typedef ap_fixed<6,1> weight13_t;
typedef ap_fixed<6,1> bias13_t;
typedef ap_uint<1> layer13_index;
typedef ap_ufixed<8,0,AP_RND,AP_SAT> layer15_t;
typedef ap_fixed<18,8> q_activation_4_table_t;
typedef ap_fixed<16,6> layer16_t;
typedef ap_fixed<16,6> dense_weight_t;
typedef ap_fixed<16,6> dense_bias_t;
typedef ap_uint<1> layer16_index;
typedef ap_fixed<16,6> result_t;
typedef ap_fixed<18,8> softmax_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> softmax_exp_table_t;
typedef ap_fixed<18,8,AP_RND,AP_SAT> softmax_inv_table_t;

#endif
