//Numpy array shape [5]
//Min -0.464156985283
//Max 0.299312382936
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
dense_bias_t b16[5];
#else
dense_bias_t b16[5] = {  0.299312,   0.285264,  -0.201962,   0.169137,  -0.464157};
#endif

#endif
