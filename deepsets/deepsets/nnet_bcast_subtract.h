#ifndef NNET_BROADCAST_SUBTRACT_H_
#define NNET_BROADCAST_SUBTRACT_H_

#include "nnet_common.h"

namespace nnet {


template <class input1_T, class input2_T, class res_T, typename CONFIG_T>
void bcast_subtract(input1_T data1[CONFIG_T::n_elem1], input2_T data2[CONFIG_T::n_elem2], res_T res[CONFIG_T::n_elem1]) {
    #pragma HLS PIPELINE

    constexpr int n_rows = CONFIG_T::n_elem1 / CONFIG_T::n_elem2; 

    for (int r = 0; r < n_rows; r++) {
        #pragma HLS UNROLL
        for (int c = 0; c < CONFIG_T::n_elem2; c++) {
            #pragma HLS UNROLL
            res[r * CONFIG_T::n_elem2 + c] = data1[r * CONFIG_T::n_elem2 + c] - data2[c];
        }
    }
}

} // namespace nnet

#endif
