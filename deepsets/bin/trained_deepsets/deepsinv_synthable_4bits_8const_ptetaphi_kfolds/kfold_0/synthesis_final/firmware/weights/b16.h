//Numpy array shape [5]
//Min -0.514755785465
//Max 0.785782992840
//Number of zeros 0

#ifndef B16_H_
#define B16_H_

#ifndef __SYNTHESIS__
dense_bias_t b16[5];
#else
dense_bias_t b16[5] = { -0.221961,  -0.514756,   0.030357,   0.785783,  -0.124749};
#endif

#endif
