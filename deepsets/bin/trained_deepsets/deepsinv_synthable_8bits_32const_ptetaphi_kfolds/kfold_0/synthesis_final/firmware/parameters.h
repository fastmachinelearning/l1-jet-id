#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_fixed.h"
#include "ap_int.h"

#include "nnet_utils/nnet_code_gen.h"
#include "nnet_utils/nnet_helpers.h"
// hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_conv1d.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_pooling.h"
#include "nnet_utils/nnet_pooling_stream.h"
#include "nnet_utils/nnet_sepconv1d_stream.h"

// hls-fpga-machine-learning insert weights
#include "weights/w19.h"
#include "weights/b19.h"
#include "weights/w20.h"
#include "weights/b20.h"
#include "weights/w21.h"
#include "weights/b21.h"
#include "weights/w13.h"
#include "weights/b13.h"
#include "weights/w16.h"
#include "weights/b16.h"

// hls-fpga-machine-learning insert layer-config
// phi1
struct config19_mult : nnet::dense_config {
    static const unsigned n_in = 3;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 4;
    static const unsigned strategy = nnet::latency;
    static const unsigned n_zeros = 48;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef phi1_bias_t bias_t;
    typedef phi1_weight_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config19 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 32;
    static const unsigned n_chan = 3;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 32;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 32;
    static const unsigned reuse_factor = 4;
    static const unsigned n_zeros = 48;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::pointwise;
    static const unsigned min_width = 32;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 32;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::fill_buffer_19<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef phi1_bias_t bias_t;
    typedef phi1_weight_t weight_t;
    typedef config19_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_unscaled<K, S, W>;
};
const ap_uint<config19::filt_width> config19::pixels[] = {0};

// q_activation
struct relu_config4 : nnet::activ_config {
    static const unsigned n_in = 1024;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef q_activation_table_t table_t;
};

// phi2
struct config20_mult : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 4;
    static const unsigned strategy = nnet::latency;
    static const unsigned n_zeros = 512;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef phi2_bias_t bias_t;
    typedef phi2_weight_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config20 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 32;
    static const unsigned n_chan = 32;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 32;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 32;
    static const unsigned reuse_factor = 4;
    static const unsigned n_zeros = 512;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::pointwise;
    static const unsigned min_width = 32;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 32;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::fill_buffer_20<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef phi2_bias_t bias_t;
    typedef phi2_weight_t weight_t;
    typedef config20_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_unscaled<K, S, W>;
};
const ap_uint<config20::filt_width> config20::pixels[] = {0};

// q_activation_1
struct relu_config7 : nnet::activ_config {
    static const unsigned n_in = 1024;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef q_activation_1_table_t table_t;
};

// phi3
struct config21_mult : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 32;
    static const unsigned reuse_factor = 4;
    static const unsigned strategy = nnet::latency;
    static const unsigned n_zeros = 512;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    typedef model_default_t accum_t;
    typedef phi3_bias_t bias_t;
    typedef phi3_weight_t weight_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

struct config21 : nnet::conv1d_config {
    static const unsigned pad_left = 0;
    static const unsigned pad_right = 0;
    static const unsigned in_width = 32;
    static const unsigned n_chan = 32;
    static const unsigned filt_width = 1;
    static const unsigned kernel_size = filt_width;
    static const unsigned n_filt = 32;
    static const unsigned stride_width = 1;
    static const unsigned dilation = 1;
    static const unsigned out_width = 32;
    static const unsigned reuse_factor = 4;
    static const unsigned n_zeros = 512;
    static const bool store_weights_in_bram = false;
    static const unsigned strategy = nnet::latency;
    static const nnet::conv_implementation implementation = nnet::conv_implementation::pointwise;
    static const unsigned min_width = 32;
    static const ap_uint<filt_width> pixels[min_width];
    static const unsigned n_partitions = 32;
    static const unsigned n_pixels = out_width / n_partitions;
    template<class data_T, class CONFIG_T>
    using fill_buffer = nnet::fill_buffer_21<data_T, CONFIG_T>;
    typedef model_default_t accum_t;
    typedef phi3_bias_t bias_t;
    typedef phi3_weight_t weight_t;
    typedef config21_mult mult_config;
    template<unsigned K, unsigned S, unsigned W>
    using scale_index = nnet::scale_index_unscaled<K, S, W>;
};
const ap_uint<config21::filt_width> config21::pixels[] = {0};

// q_activation_2
struct relu_config10 : nnet::activ_config {
    static const unsigned n_in = 1024;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef q_activation_2_table_t table_t;
};

// q_activation_3
struct linear_config11 : nnet::activ_config {
    static const unsigned n_in = 1024;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef q_activation_3_table_t table_t;
};

// global_average_pooling1d
struct config12 : nnet::pooling1d_config {
    static const unsigned n_in = 32;
    static const unsigned n_filt = 32;
    static const nnet::Pool_Op pool_op = nnet::Average;
    static const unsigned reuse_factor = 1;
    typedef model_default_t accum_t;
};

// rho
struct config13 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 32;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 514;
    static const unsigned n_nonzeros = 510;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef bias13_t bias_t;
    typedef weight13_t weight_t;
    typedef layer13_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// q_activation_4
struct relu_config15 : nnet::activ_config {
    static const unsigned n_in = 32;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    typedef q_activation_4_table_t table_t;
};

// dense
struct config16 : nnet::dense_config {
    static const unsigned n_in = 32;
    static const unsigned n_out = 5;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 80;
    static const unsigned n_nonzeros = 80;
    static const unsigned multiplier_limit = DIV_ROUNDUP(n_in * n_out, reuse_factor) - n_zeros / reuse_factor;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef dense_bias_t bias_t;
    typedef dense_weight_t weight_t;
    typedef layer16_index index_t;
    template<class x_T, class y_T>
    using product = nnet::product::mult<x_T, y_T>;
};

// softmax
struct Softmax_config18 : nnet::activ_config {
    static const unsigned n_in = 5;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned axis = -1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::stable;
    typedef softmax_exp_table_t exp_table_t;
    typedef softmax_inv_table_t inv_table_t;
};


#endif
