#ifndef NNET_NODE_EDGE_PROJECTION_H_
#define NNET_NODE_EDGE_PROJECTION_H_

#include "nnet_common.h"
#include <cstdlib>

namespace nnet {

struct node_edge_projection_config {
  static const unsigned n_in = 10;
  static const unsigned n_nodes = 10;
  static const unsigned n_edges = 90;
  static const bool receiving = true;
  static const bool node_to_edge = true;
  static const unsigned in_width = 10;
  static const unsigned out_width = 90;
  typedef model_default_t accum_t;
};

// (Rr)T * X
template <class data_T, class res_T, typename CONFIG_T>
void node_edge_projection_bmm_rrtx(
  data_T data[CONFIG_T::in_width * CONFIG_T::n_in],
  res_T  res[CONFIG_T::out_width * CONFIG_T::n_in]) {
  #pragma HLS PIPELINE II=1
  for (int i = 0; i < CONFIG_T::in_width; i++) {
    for (int k = 0; k < (CONFIG_T::in_width - 1); k++) {
      for (int j = 0; j < CONFIG_T::n_in; j++) {
        int index_res = i * CONFIG_T::n_in * (CONFIG_T::in_width - 1) +
                        k * CONFIG_T::n_in + j;
        int index_data = i * CONFIG_T::n_in + j;
        res[index_res] = data[index_data];
      }
    }
  }
}

// (Rs)T * X
template <class data_T, class res_T, typename CONFIG_T>
void node_edge_projection_bmm_rstx(
  data_T data[CONFIG_T::in_width * CONFIG_T::n_in],
  res_T  res[CONFIG_T::out_width * CONFIG_T::n_in]) {
  #pragma HLS PIPELINE II=1
  for (int i = 0; i < CONFIG_T::in_width; i++) {
    for (int k = 0; k < (CONFIG_T::in_width - 1); k++) {
      for (int j = 0; j < CONFIG_T::n_in; j++) {
        int index_res = i * CONFIG_T::n_in * (CONFIG_T::in_width - 1) +
                        k * CONFIG_T::n_in + j;
        int index_data = ((k < i) ? k : (k + 1)) * CONFIG_T::n_in + j;
        res[index_res] = data[index_data];
      }
    }
  }
}

// (Rr) * E
template <class data_T, class res_T, typename CONFIG_T>
void node_edge_projection_bmm_rre(
  data_T data[CONFIG_T::in_width * CONFIG_T::n_in],
  res_T  res[CONFIG_T::out_width * CONFIG_T::n_in]) {
  #pragma HLS PIPELINE II=1

 typename CONFIG_T::accum_t acc[CONFIG_T::n_in];
  #pragma HLS ARRAY_PARTITION variable=acc complete

  for (int i = 0; i < CONFIG_T::out_width; i++) {
    for (int k = 0; k < (CONFIG_T::out_width - 1); k++) {
      for (int j = 0; j < CONFIG_T::n_in; j++) {

        int index = i * CONFIG_T::n_in * (CONFIG_T::out_width - 1) +
                    k * CONFIG_T::n_in + j;
        typename CONFIG_T::accum_t tmp = (k == 0) ? ((typename CONFIG_T::accum_t)0) : acc[j];
        acc[j] = tmp + data[index];
      }
    }
    for (int j = 0; j < CONFIG_T::n_in; j++) {
      res[i * CONFIG_T::n_in + j] = (res_T)acc[j];
    }
  }
}

template <class data_T, class res_T, typename CONFIG_T>
void node_edge_projection(data_T data[CONFIG_T::in_width * CONFIG_T::n_in],
                          res_T res[CONFIG_T::out_width * CONFIG_T::n_in]) {
  assert(CONFIG_T::receiving || CONFIG_T::node_to_edge);

  if (CONFIG_T::receiving && CONFIG_T::node_to_edge) {
    node_edge_projection_bmm_rrtx<data_T, res_T, CONFIG_T>(data, res);
  } else if (!CONFIG_T::receiving && CONFIG_T::node_to_edge) {
    node_edge_projection_bmm_rstx<data_T, res_T, CONFIG_T>(data, res);
  } else if (CONFIG_T::receiving && !CONFIG_T::node_to_edge) {
    node_edge_projection_bmm_rre<data_T, res_T, CONFIG_T>(data, res);
  }
}

} // namespace nnet

#endif
