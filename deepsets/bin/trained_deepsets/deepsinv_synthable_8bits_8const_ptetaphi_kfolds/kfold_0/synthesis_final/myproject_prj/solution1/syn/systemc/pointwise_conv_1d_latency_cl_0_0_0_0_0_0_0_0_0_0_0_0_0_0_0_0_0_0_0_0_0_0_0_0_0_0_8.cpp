#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1161_fu_1791_p0() {
    mul_ln1118_1161_fu_1791_p0 =  (sc_lv<8>) (zext_ln1118_3449_fu_12459098_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1161_fu_1791_p2() {
    mul_ln1118_1161_fu_1791_p2 = (!mul_ln1118_1161_fu_1791_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1161_fu_1791_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1163_fu_1605_p0() {
    mul_ln1118_1163_fu_1605_p0 =  (sc_lv<8>) (zext_ln1118_1486_fu_12459310_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1163_fu_1605_p2() {
    mul_ln1118_1163_fu_1605_p2 = (!mul_ln1118_1163_fu_1605_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1163_fu_1605_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1164_fu_2206_p0() {
    mul_ln1118_1164_fu_2206_p0 =  (sc_lv<8>) (zext_ln1116_266_fu_12459457_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1164_fu_2206_p2() {
    mul_ln1118_1164_fu_2206_p2 = (!mul_ln1118_1164_fu_2206_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1164_fu_2206_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1165_fu_3268_p0() {
    mul_ln1118_1165_fu_3268_p0 =  (sc_lv<8>) (mul_ln1118_1165_fu_3268_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1165_fu_3268_p00() {
    mul_ln1118_1165_fu_3268_p00 = esl_zext<14,8>(p_read120.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1165_fu_3268_p2() {
    mul_ln1118_1165_fu_3268_p2 = (!mul_ln1118_1165_fu_3268_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1165_fu_3268_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1166_fu_2705_p0() {
    mul_ln1118_1166_fu_2705_p0 =  (sc_lv<8>) (zext_ln1116_275_fu_12463117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1166_fu_2705_p2() {
    mul_ln1118_1166_fu_2705_p2 = (!mul_ln1118_1166_fu_2705_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1166_fu_2705_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1167_fu_2198_p0() {
    mul_ln1118_1167_fu_2198_p0 =  (sc_lv<8>) (zext_ln1116_252_fu_12458437_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1167_fu_2198_p2() {
    mul_ln1118_1167_fu_2198_p2 = (!mul_ln1118_1167_fu_2198_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1167_fu_2198_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1168_fu_2613_p0() {
    mul_ln1118_1168_fu_2613_p0 =  (sc_lv<8>) (zext_ln1116_257_fu_12458857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1168_fu_2613_p2() {
    mul_ln1118_1168_fu_2613_p2 = (!mul_ln1118_1168_fu_2613_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1168_fu_2613_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1169_fu_2050_p0() {
    mul_ln1118_1169_fu_2050_p0 =  (sc_lv<8>) (zext_ln1118_1589_fu_12465341_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1169_fu_2050_p2() {
    mul_ln1118_1169_fu_2050_p2 = (!mul_ln1118_1169_fu_2050_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1169_fu_2050_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_116_fu_2612_p0() {
    mul_ln1118_116_fu_2612_p0 =  (sc_lv<8>) (zext_ln1118_84_fu_12400619_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_116_fu_2612_p2() {
    mul_ln1118_116_fu_2612_p2 = (!mul_ln1118_116_fu_2612_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_116_fu_2612_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1171_fu_2313_p0() {
    mul_ln1118_1171_fu_2313_p0 =  (sc_lv<8>) (zext_ln1116_266_fu_12459457_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1171_fu_2313_p2() {
    mul_ln1118_1171_fu_2313_p2 = (!mul_ln1118_1171_fu_2313_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1171_fu_2313_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1172_fu_2314_p0() {
    mul_ln1118_1172_fu_2314_p0 =  (sc_lv<8>) (zext_ln1116_307_fu_12470386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1172_fu_2314_p2() {
    mul_ln1118_1172_fu_2314_p2 = (!mul_ln1118_1172_fu_2314_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1172_fu_2314_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1173_fu_1694_p0() {
    mul_ln1118_1173_fu_1694_p0 =  (sc_lv<8>) (zext_ln708_555_fu_12459673_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1173_fu_1694_p2() {
    mul_ln1118_1173_fu_1694_p2 = (!mul_ln1118_1173_fu_1694_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1173_fu_1694_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1174_fu_3122_p0() {
    mul_ln1118_1174_fu_3122_p0 =  (sc_lv<8>) (zext_ln1118_1498_fu_12459810_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1174_fu_3122_p2() {
    mul_ln1118_1174_fu_3122_p2 = (!mul_ln1118_1174_fu_3122_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1174_fu_3122_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1175_fu_3124_p0() {
    mul_ln1118_1175_fu_3124_p0 =  (sc_lv<8>) (zext_ln1118_3428_fu_12458521_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1175_fu_3124_p2() {
    mul_ln1118_1175_fu_3124_p2 = (!mul_ln1118_1175_fu_3124_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1175_fu_3124_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1176_fu_1881_p0() {
    mul_ln1118_1176_fu_1881_p0 =  (sc_lv<8>) (zext_ln1118_1460_fu_12458580_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1176_fu_1881_p2() {
    mul_ln1118_1176_fu_1881_p2 = (!mul_ln1118_1176_fu_1881_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1176_fu_1881_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1177_fu_2943_p0() {
    mul_ln1118_1177_fu_2943_p0 =  (sc_lv<8>) (zext_ln1118_3433_fu_12458624_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1177_fu_2943_p2() {
    mul_ln1118_1177_fu_2943_p2 = (!mul_ln1118_1177_fu_2943_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1177_fu_2943_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1178_fu_2322_p0() {
    mul_ln1118_1178_fu_2322_p0 =  (sc_lv<8>) (zext_ln1118_3439_fu_12458799_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1178_fu_2322_p2() {
    mul_ln1118_1178_fu_2322_p2 = (!mul_ln1118_1178_fu_2322_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1178_fu_2322_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_117_fu_2077_p0() {
    mul_ln1118_117_fu_2077_p0 =  (sc_lv<8>) (mul_ln1118_117_fu_2077_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_117_fu_2077_p00() {
    mul_ln1118_117_fu_2077_p00 = esl_zext<16,8>(p_read7.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_117_fu_2077_p2() {
    mul_ln1118_117_fu_2077_p2 = (!mul_ln1118_117_fu_2077_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_117_fu_2077_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1180_fu_3172_p0() {
    mul_ln1118_1180_fu_3172_p0 =  (sc_lv<8>) (zext_ln1118_3447_fu_12459014_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1180_fu_3172_p2() {
    mul_ln1118_1180_fu_3172_p2 = (!mul_ln1118_1180_fu_3172_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1180_fu_3172_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1181_fu_2325_p0() {
    mul_ln1118_1181_fu_2325_p0 =  (sc_lv<8>) (zext_ln1118_1476_fu_12459068_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1181_fu_2325_p2() {
    mul_ln1118_1181_fu_2325_p2 = (!mul_ln1118_1181_fu_2325_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1181_fu_2325_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1182_fu_2326_p0() {
    mul_ln1118_1182_fu_2326_p0 =  (sc_lv<8>) (zext_ln1118_3449_fu_12459098_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1182_fu_2326_p2() {
    mul_ln1118_1182_fu_2326_p2 = (!mul_ln1118_1182_fu_2326_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1182_fu_2326_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1183_fu_3391_p0() {
    mul_ln1118_1183_fu_3391_p0 =  (sc_lv<8>) (zext_ln1118_3450_fu_12459144_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1183_fu_3391_p2() {
    mul_ln1118_1183_fu_3391_p2 = (!mul_ln1118_1183_fu_3391_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1183_fu_3391_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1184_fu_2328_p0() {
    mul_ln1118_1184_fu_2328_p0 =  (sc_lv<8>) (zext_ln1118_1604_fu_12465556_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1184_fu_2328_p2() {
    mul_ln1118_1184_fu_2328_p2 = (!mul_ln1118_1184_fu_2328_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1184_fu_2328_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1185_fu_1709_p0() {
    mul_ln1118_1185_fu_1709_p0 =  (sc_lv<8>) (mul_ln1118_1185_fu_1709_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1185_fu_1709_p00() {
    mul_ln1118_1185_fu_1709_p00 = esl_zext<16,8>(p_read122.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1185_fu_1709_p2() {
    mul_ln1118_1185_fu_1709_p2 = (!mul_ln1118_1185_fu_1709_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1185_fu_1709_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1186_fu_3190_p0() {
    mul_ln1118_1186_fu_3190_p0 =  (sc_lv<8>) (zext_ln708_556_fu_12459755_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1186_fu_3190_p2() {
    mul_ln1118_1186_fu_3190_p2 = (!mul_ln1118_1186_fu_3190_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1186_fu_3190_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1187_fu_1825_p0() {
    mul_ln1118_1187_fu_1825_p0 =  (sc_lv<8>) (zext_ln1116_275_fu_12463117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1187_fu_1825_p2() {
    mul_ln1118_1187_fu_1825_p2 = (!mul_ln1118_1187_fu_1825_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1187_fu_1825_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1188_fu_3230_p0() {
    mul_ln1118_1188_fu_3230_p0 =  (sc_lv<8>) (zext_ln1116_252_fu_12458437_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1188_fu_3230_p2() {
    mul_ln1118_1188_fu_3230_p2 = (!mul_ln1118_1188_fu_3230_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1188_fu_3230_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1189_fu_1827_p0() {
    mul_ln1118_1189_fu_1827_p0 =  (sc_lv<8>) (zext_ln1116_253_fu_12458507_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1189_fu_1827_p2() {
    mul_ln1118_1189_fu_1827_p2 = (!mul_ln1118_1189_fu_1827_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1189_fu_1827_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_118_fu_3055_p0() {
    mul_ln1118_118_fu_3055_p0 =  (sc_lv<8>) (zext_ln1116_5_fu_12400759_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_118_fu_3055_p2() {
    mul_ln1118_118_fu_3055_p2 = (!mul_ln1118_118_fu_3055_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_118_fu_3055_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1190_fu_3233_p0() {
    mul_ln1118_1190_fu_3233_p0 =  (sc_lv<8>) (zext_ln1118_3438_fu_12458752_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1190_fu_3233_p2() {
    mul_ln1118_1190_fu_3233_p2 = (!mul_ln1118_1190_fu_3233_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1190_fu_3233_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1191_fu_1830_p0() {
    mul_ln1118_1191_fu_1830_p0 =  (sc_lv<8>) (zext_ln1118_1589_fu_12465341_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1191_fu_1830_p2() {
    mul_ln1118_1191_fu_1830_p2 = (!mul_ln1118_1191_fu_1830_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1191_fu_1830_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1192_fu_2514_p0() {
    mul_ln1118_1192_fu_2514_p0 =  (sc_lv<8>) (zext_ln1116_258_fu_12458955_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1192_fu_2514_p2() {
    mul_ln1118_1192_fu_2514_p2 = (!mul_ln1118_1192_fu_2514_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1192_fu_2514_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1193_fu_1832_p0() {
    mul_ln1118_1193_fu_1832_p0 =  (sc_lv<8>) (zext_ln1118_1475_fu_12459025_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1193_fu_1832_p2() {
    mul_ln1118_1193_fu_1832_p2 = (!mul_ln1118_1193_fu_1832_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1193_fu_1832_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1195_fu_2665_p0() {
    mul_ln1118_1195_fu_2665_p0 =  (sc_lv<8>) (zext_ln1116_265_fu_12459423_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1195_fu_2665_p2() {
    mul_ln1118_1195_fu_2665_p2 = (!mul_ln1118_1195_fu_2665_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1195_fu_2665_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1196_fu_2158_p0() {
    mul_ln1118_1196_fu_2158_p0 =  (sc_lv<8>) (zext_ln708_711_fu_12459516_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1196_fu_2158_p2() {
    mul_ln1118_1196_fu_2158_p2 = (!mul_ln1118_1196_fu_2158_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1196_fu_2158_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1198_fu_2027_p0() {
    mul_ln1118_1198_fu_2027_p0 =  (sc_lv<8>) (zext_ln1118_1462_fu_12458618_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1198_fu_2027_p2() {
    mul_ln1118_1198_fu_2027_p2 = (!mul_ln1118_1198_fu_2027_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1198_fu_2027_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1199_fu_2038_p0() {
    mul_ln1118_1199_fu_2038_p0 =  (sc_lv<8>) (zext_ln1118_1463_fu_12458644_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1199_fu_2038_p2() {
    mul_ln1118_1199_fu_2038_p2 = (!mul_ln1118_1199_fu_2038_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1199_fu_2038_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_119_fu_2520_p0() {
    mul_ln1118_119_fu_2520_p0 =  (sc_lv<8>) (zext_ln1116_6_fu_12400857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_119_fu_2520_p2() {
    mul_ln1118_119_fu_2520_p2 = (!mul_ln1118_119_fu_2520_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_119_fu_2520_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_11_fu_2157_p0() {
    mul_ln1118_11_fu_2157_p0 =  (sc_lv<8>) (zext_ln1116_14_fu_12401359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_11_fu_2157_p2() {
    mul_ln1118_11_fu_2157_p2 = (!mul_ln1118_11_fu_2157_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_11_fu_2157_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1200_fu_3016_p0() {
    mul_ln1118_1200_fu_3016_p0 =  (sc_lv<8>) (mul_ln1118_1200_fu_3016_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1200_fu_3016_p00() {
    mul_ln1118_1200_fu_3016_p00 = esl_zext<16,8>(p_read102.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1200_fu_3016_p2() {
    mul_ln1118_1200_fu_3016_p2 = (!mul_ln1118_1200_fu_3016_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1200_fu_3016_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1203_fu_2453_p0() {
    mul_ln1118_1203_fu_2453_p0 =  (sc_lv<8>) (zext_ln1116_262_fu_12459127_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1203_fu_2453_p2() {
    mul_ln1118_1203_fu_2453_p2 = (!mul_ln1118_1203_fu_2453_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1203_fu_2453_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1204_fu_1946_p0() {
    mul_ln1118_1204_fu_1946_p0 =  (sc_lv<8>) (zext_ln1118_1538_fu_12462855_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1204_fu_1946_p2() {
    mul_ln1118_1204_fu_1946_p2 = (!mul_ln1118_1204_fu_1946_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1204_fu_1946_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1205_fu_2896_p0() {
    mul_ln1118_1205_fu_2896_p0 =  (sc_lv<8>) (zext_ln1118_1486_fu_12459310_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1205_fu_2896_p2() {
    mul_ln1118_1205_fu_2896_p2 = (!mul_ln1118_1205_fu_2896_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1205_fu_2896_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1206_fu_2698_p0() {
    mul_ln1118_1206_fu_2698_p0 =  (sc_lv<8>) (zext_ln1116_265_fu_12459423_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1206_fu_2698_p2() {
    mul_ln1118_1206_fu_2698_p2 = (!mul_ln1118_1206_fu_2698_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1206_fu_2698_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1207_fu_3423_p0() {
    mul_ln1118_1207_fu_3423_p0 =  (sc_lv<8>) (zext_ln1116_266_fu_12459457_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1207_fu_3423_p2() {
    mul_ln1118_1207_fu_3423_p2 = (!mul_ln1118_1207_fu_3423_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1207_fu_3423_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1208_fu_2832_p0() {
    mul_ln1118_1208_fu_2832_p0 =  (sc_lv<8>) (mul_ln1118_1208_fu_2832_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1208_fu_2832_p00() {
    mul_ln1118_1208_fu_2832_p00 = esl_zext<14,8>(p_read126.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1208_fu_2832_p2() {
    mul_ln1118_1208_fu_2832_p2 = (!mul_ln1118_1208_fu_2832_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1208_fu_2832_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_120_fu_1985_p0() {
    mul_ln1118_120_fu_1985_p0 =  (sc_lv<8>) (zext_ln1118_77_fu_12404602_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_120_fu_1985_p2() {
    mul_ln1118_120_fu_1985_p2 = (!mul_ln1118_120_fu_1985_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_120_fu_1985_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1210_fu_2740_p0() {
    mul_ln1118_1210_fu_2740_p0 =  (sc_lv<8>) (zext_ln1118_1528_fu_12462653_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1210_fu_2740_p2() {
    mul_ln1118_1210_fu_2740_p2 = (!mul_ln1118_1210_fu_2740_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1210_fu_2740_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1211_fu_2233_p0() {
    mul_ln1118_1211_fu_2233_p0 =  (sc_lv<8>) (zext_ln1118_3447_fu_12459014_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1211_fu_2233_p2() {
    mul_ln1118_1211_fu_2233_p2 = (!mul_ln1118_1211_fu_2233_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1211_fu_2233_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1212_fu_1726_p0() {
    mul_ln1118_1212_fu_1726_p0 =  (sc_lv<8>) (zext_ln1116_297_fu_12467889_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1212_fu_1726_p2() {
    mul_ln1118_1212_fu_1726_p2 = (!mul_ln1118_1212_fu_1726_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1212_fu_1726_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1213_fu_2620_p0() {
    mul_ln1118_1213_fu_2620_p0 =  (sc_lv<8>) (zext_ln1116_318_fu_12472422_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1213_fu_2620_p2() {
    mul_ln1118_1213_fu_2620_p2 = (!mul_ln1118_1213_fu_2620_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1213_fu_2620_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1214_fu_2141_p0() {
    mul_ln1118_1214_fu_2141_p0 =  (sc_lv<8>) (zext_ln1116_265_fu_12459423_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1214_fu_2141_p2() {
    mul_ln1118_1214_fu_2141_p2 = (!mul_ln1118_1214_fu_2141_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1214_fu_2141_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1215_fu_3119_p0() {
    mul_ln1118_1215_fu_3119_p0 =  (sc_lv<8>) (zext_ln1116_266_fu_12459457_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1215_fu_3119_p2() {
    mul_ln1118_1215_fu_3119_p2 = (!mul_ln1118_1215_fu_3119_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1215_fu_3119_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1216_fu_2584_p0() {
    mul_ln1118_1216_fu_2584_p0 =  (sc_lv<8>) (zext_ln708_711_fu_12459516_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1216_fu_2584_p2() {
    mul_ln1118_1216_fu_2584_p2 = (!mul_ln1118_1216_fu_2584_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1216_fu_2584_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1217_fu_2049_p0() {
    mul_ln1118_1217_fu_2049_p0 =  (sc_lv<8>) (zext_ln1118_3476_fu_12459688_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1217_fu_2049_p2() {
    mul_ln1118_1217_fu_2049_p2 = (!mul_ln1118_1217_fu_2049_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1217_fu_2049_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1218_fu_3027_p0() {
    mul_ln1118_1218_fu_3027_p0 =  (sc_lv<8>) (zext_ln1118_3480_fu_12459764_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1218_fu_3027_p2() {
    mul_ln1118_1218_fu_3027_p2 = (!mul_ln1118_1218_fu_3027_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1218_fu_3027_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1219_fu_2464_p0() {
    mul_ln1118_1219_fu_2464_p0 =  (sc_lv<8>) (zext_ln1118_1497_fu_12459802_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1219_fu_2464_p2() {
    mul_ln1118_1219_fu_2464_p2 = (!mul_ln1118_1219_fu_2464_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1219_fu_2464_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_121_fu_1422_p0() {
    mul_ln1118_121_fu_1422_p0 =  (sc_lv<8>) (zext_ln1118_27_fu_12401038_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_121_fu_1422_p2() {
    mul_ln1118_121_fu_1422_p2 = (!mul_ln1118_121_fu_1422_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_121_fu_1422_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1220_fu_1957_p0() {
    mul_ln1118_1220_fu_1957_p0 =  (sc_lv<8>) (zext_ln1116_275_fu_12463117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1220_fu_1957_p2() {
    mul_ln1118_1220_fu_1957_p2 = (!mul_ln1118_1220_fu_1957_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1220_fu_1957_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1221_fu_2963_p0() {
    mul_ln1118_1221_fu_2963_p0 =  (sc_lv<8>) (zext_ln1118_3431_fu_12458589_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1221_fu_2963_p2() {
    mul_ln1118_1221_fu_2963_p2 = (!mul_ln1118_1221_fu_2963_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1221_fu_2963_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1222_fu_2400_p0() {
    mul_ln1118_1222_fu_2400_p0 =  (sc_lv<8>) (zext_ln1118_3432_fu_12458610_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1222_fu_2400_p2() {
    mul_ln1118_1222_fu_2400_p2 = (!mul_ln1118_1222_fu_2400_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1222_fu_2400_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1223_fu_1570_p0() {
    mul_ln1118_1223_fu_1570_p0 =  (sc_lv<8>) (zext_ln708_550_fu_12458792_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1223_fu_1570_p2() {
    mul_ln1118_1223_fu_1570_p2 = (!mul_ln1118_1223_fu_1570_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1223_fu_1570_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1225_fu_2193_p0() {
    mul_ln1118_1225_fu_2193_p0 =  (sc_lv<8>) (zext_ln1118_1477_fu_12459091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1225_fu_2193_p2() {
    mul_ln1118_1225_fu_2193_p2 = (!mul_ln1118_1225_fu_2193_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1225_fu_2193_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1226_fu_2999_p0() {
    mul_ln1118_1226_fu_2999_p0 =  (sc_lv<8>) (zext_ln1116_262_fu_12459127_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1226_fu_2999_p2() {
    mul_ln1118_1226_fu_2999_p2 = (!mul_ln1118_1226_fu_2999_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1226_fu_2999_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1227_fu_1573_p0() {
    mul_ln1118_1227_fu_1573_p0 =  (sc_lv<8>) (zext_ln1118_1484_fu_12459223_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1227_fu_1573_p2() {
    mul_ln1118_1227_fu_1573_p2 = (!mul_ln1118_1227_fu_1573_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1227_fu_1573_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1228_fu_1574_p0() {
    mul_ln1118_1228_fu_1574_p0 =  (sc_lv<8>) (zext_ln1118_1485_fu_12459281_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1228_fu_1574_p2() {
    mul_ln1118_1228_fu_1574_p2 = (!mul_ln1118_1228_fu_1574_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1228_fu_1574_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1229_fu_3002_p0() {
    mul_ln1118_1229_fu_3002_p0 =  (sc_lv<8>) (zext_ln1118_1788_fu_12472458_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1229_fu_3002_p2() {
    mul_ln1118_1229_fu_3002_p2 = (!mul_ln1118_1229_fu_3002_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1229_fu_3002_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_122_fu_2428_p0() {
    mul_ln1118_122_fu_2428_p0 =  (sc_lv<8>) (zext_ln1116_21_fu_12404885_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_122_fu_2428_p2() {
    mul_ln1118_122_fu_2428_p2 = (!mul_ln1118_122_fu_2428_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_122_fu_2428_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1230_fu_1576_p0() {
    mul_ln1118_1230_fu_1576_p0 =  (sc_lv<8>) (zext_ln1118_1615_fu_12465678_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1230_fu_1576_p2() {
    mul_ln1118_1230_fu_1576_p2 = (!mul_ln1118_1230_fu_1576_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1230_fu_1576_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1231_fu_1577_p0() {
    mul_ln1118_1231_fu_1577_p0 =  (sc_lv<8>) (zext_ln1118_1577_fu_12465201_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1231_fu_1577_p2() {
    mul_ln1118_1231_fu_1577_p2 = (!mul_ln1118_1231_fu_1577_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1231_fu_1577_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1233_fu_2383_p0() {
    mul_ln1118_1233_fu_2383_p0 =  (sc_lv<8>) (zext_ln1118_3439_fu_12458799_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1233_fu_2383_p2() {
    mul_ln1118_1233_fu_2383_p2 = (!mul_ln1118_1233_fu_2383_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1233_fu_2383_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1234_fu_2201_p0() {
    mul_ln1118_1234_fu_2201_p0 =  (sc_lv<8>) (zext_ln1118_1473_fu_12458965_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1234_fu_2201_p2() {
    mul_ln1118_1234_fu_2201_p2 = (!mul_ln1118_1234_fu_2201_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1234_fu_2201_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1235_fu_2202_p0() {
    mul_ln1118_1235_fu_2202_p0 =  (sc_lv<8>) (zext_ln1118_1511_fu_12461124_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1235_fu_2202_p2() {
    mul_ln1118_1235_fu_2202_p2 = (!mul_ln1118_1235_fu_2202_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1235_fu_2202_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1236_fu_1581_p0() {
    mul_ln1118_1236_fu_1581_p0 =  (sc_lv<8>) (zext_ln1118_1482_fu_12459181_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1236_fu_1581_p2() {
    mul_ln1118_1236_fu_1581_p2 = (!mul_ln1118_1236_fu_1581_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1236_fu_1581_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1237_fu_1584_p0() {
    mul_ln1118_1237_fu_1584_p0 =  (sc_lv<8>) (zext_ln1116_307_fu_12470386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1237_fu_1584_p2() {
    mul_ln1118_1237_fu_1584_p2 = (!mul_ln1118_1237_fu_1584_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1237_fu_1584_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1238_fu_1585_p0() {
    mul_ln1118_1238_fu_1585_p0 =  (sc_lv<8>) (zext_ln1118_3468_fu_12459541_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1238_fu_1585_p2() {
    mul_ln1118_1238_fu_1585_p2 = (!mul_ln1118_1238_fu_1585_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1238_fu_1585_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1239_fu_3014_p0() {
    mul_ln1118_1239_fu_3014_p0 =  (sc_lv<8>) (zext_ln1118_1497_fu_12459802_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1239_fu_3014_p2() {
    mul_ln1118_1239_fu_3014_p2 = (!mul_ln1118_1239_fu_3014_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1239_fu_3014_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_123_fu_3378_p0() {
    mul_ln1118_123_fu_3378_p0 =  (sc_lv<8>) (zext_ln708_10_fu_12401762_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_123_fu_3378_p2() {
    mul_ln1118_123_fu_3378_p2 = (!mul_ln1118_123_fu_3378_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_123_fu_3378_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_124_fu_2899_p0() {
    mul_ln1118_124_fu_2899_p0 =  (sc_lv<8>) (mul_ln1118_124_fu_2899_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_124_fu_2899_p00() {
    mul_ln1118_124_fu_2899_p00 = esl_zext<13,8>(p_read.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_124_fu_2899_p2() {
    mul_ln1118_124_fu_2899_p2 = (!mul_ln1118_124_fu_2899_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_124_fu_2899_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_125_fu_2336_p0() {
    mul_ln1118_125_fu_2336_p0 =  (sc_lv<8>) (zext_ln1116_1_fu_12400409_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_125_fu_2336_p2() {
    mul_ln1118_125_fu_2336_p2 = (!mul_ln1118_125_fu_2336_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_125_fu_2336_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_126_fu_3286_p0() {
    mul_ln1118_126_fu_3286_p0 =  (sc_lv<8>) (zext_ln1116_2_fu_12400473_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_126_fu_3286_p2() {
    mul_ln1118_126_fu_3286_p2 = (!mul_ln1118_126_fu_3286_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_126_fu_3286_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_127_fu_2723_p0() {
    mul_ln1118_127_fu_2723_p0 =  (sc_lv<8>) (mul_ln1118_127_fu_2723_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_127_fu_2723_p00() {
    mul_ln1118_127_fu_2723_p00 = esl_zext<16,8>(p_read4.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_127_fu_2723_p2() {
    mul_ln1118_127_fu_2723_p2 = (!mul_ln1118_127_fu_2723_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_127_fu_2723_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_128_fu_2132_p0() {
    mul_ln1118_128_fu_2132_p0 =  (sc_lv<8>) (zext_ln1116_42_fu_12409585_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_128_fu_2132_p2() {
    mul_ln1118_128_fu_2132_p2 = (!mul_ln1118_128_fu_2132_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_128_fu_2132_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_129_fu_1737_p0() {
    mul_ln1118_129_fu_1737_p0 =  (sc_lv<8>) (zext_ln1118_87_fu_12400654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_129_fu_1737_p2() {
    mul_ln1118_129_fu_1737_p2 = (!mul_ln1118_129_fu_1737_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_129_fu_1737_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_12_fu_2964_p0() {
    mul_ln1118_12_fu_2964_p0 =  (sc_lv<8>) (zext_ln1118_39_fu_12401492_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_12_fu_2964_p2() {
    mul_ln1118_12_fu_2964_p2 = (!mul_ln1118_12_fu_2964_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_12_fu_2964_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_130_fu_2659_p0() {
    mul_ln1118_130_fu_2659_p0 =  (sc_lv<8>) (zext_ln1116_8_fu_12400909_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_130_fu_2659_p2() {
    mul_ln1118_130_fu_2659_p2 = (!mul_ln1118_130_fu_2659_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_130_fu_2659_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_131_fu_2152_p0() {
    mul_ln1118_131_fu_2152_p0 =  (sc_lv<8>) (zext_ln1116_45_fu_12409791_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_131_fu_2152_p2() {
    mul_ln1118_131_fu_2152_p2 = (!mul_ln1118_131_fu_2152_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_131_fu_2152_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_132_fu_2595_p0() {
    mul_ln1118_132_fu_2595_p0 =  (sc_lv<8>) (zext_ln1118_32_fu_12401125_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_132_fu_2595_p2() {
    mul_ln1118_132_fu_2595_p2 = (!mul_ln1118_132_fu_2595_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_132_fu_2595_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_133_fu_2088_p0() {
    mul_ln1118_133_fu_2088_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12401271_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_133_fu_2088_p2() {
    mul_ln1118_133_fu_2088_p2 = (!mul_ln1118_133_fu_2088_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_133_fu_2088_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_134_fu_2954_p0() {
    mul_ln1118_134_fu_2954_p0 =  (sc_lv<8>) (mul_ln1118_134_fu_2954_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_134_fu_2954_p00() {
    mul_ln1118_134_fu_2954_p00 = esl_zext<12,8>(p_read22.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_134_fu_2954_p2() {
    mul_ln1118_134_fu_2954_p2 = (!mul_ln1118_134_fu_2954_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_134_fu_2954_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_135_fu_2503_p0() {
    mul_ln1118_135_fu_2503_p0 =  (sc_lv<8>) (zext_ln1116_15_fu_12401435_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_135_fu_2503_p2() {
    mul_ln1118_135_fu_2503_p2 = (!mul_ln1118_135_fu_2503_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_135_fu_2503_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_136_fu_2769_p0() {
    mul_ln1118_136_fu_2769_p0 =  (sc_lv<8>) (zext_ln1116_47_fu_12410040_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_136_fu_2769_p2() {
    mul_ln1118_136_fu_2769_p2 = (!mul_ln1118_136_fu_2769_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_136_fu_2769_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_137_fu_3137_p0() {
    mul_ln1118_137_fu_3137_p0 =  (sc_lv<8>) (zext_ln1118_7_fu_12400358_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_137_fu_3137_p2() {
    mul_ln1118_137_fu_3137_p2 = (!mul_ln1118_137_fu_3137_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_137_fu_3137_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_138_fu_3395_p0() {
    mul_ln1118_138_fu_3395_p0 =  (sc_lv<8>) (zext_ln1116_43_fu_12409691_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_138_fu_3395_p2() {
    mul_ln1118_138_fu_3395_p2 = (!mul_ln1118_138_fu_3395_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_138_fu_3395_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_13_fu_1538_p0() {
    mul_ln1118_13_fu_1538_p0 =  (sc_lv<8>) (zext_ln1118_226_fu_12401666_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_13_fu_1538_p2() {
    mul_ln1118_13_fu_1538_p2 = (!mul_ln1118_13_fu_1538_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_13_fu_1538_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_140_fu_1531_p0() {
    mul_ln1118_140_fu_1531_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12401271_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_140_fu_1531_p2() {
    mul_ln1118_140_fu_1531_p2 = (!mul_ln1118_140_fu_1531_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_140_fu_1531_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_141_fu_3398_p0() {
    mul_ln1118_141_fu_3398_p0 =  (sc_lv<8>) (zext_ln1118_204_fu_12401371_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_141_fu_3398_p2() {
    mul_ln1118_141_fu_3398_p2 = (!mul_ln1118_141_fu_3398_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_141_fu_3398_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_142_fu_3400_p0() {
    mul_ln1118_142_fu_3400_p0 =  (sc_lv<8>) (zext_ln1116_42_fu_12409585_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_142_fu_3400_p2() {
    mul_ln1118_142_fu_3400_p2 = (!mul_ln1118_142_fu_3400_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_142_fu_3400_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_143_fu_2524_p0() {
    mul_ln1118_143_fu_2524_p0 =  (sc_lv<8>) (zext_ln708_1_fu_12400694_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_143_fu_2524_p2() {
    mul_ln1118_143_fu_2524_p2 = (!mul_ln1118_143_fu_2524_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_143_fu_2524_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_144_fu_1978_p0() {
    mul_ln1118_144_fu_1978_p0 =  (sc_lv<8>) (zext_ln1118_24_fu_12400970_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_144_fu_1978_p2() {
    mul_ln1118_144_fu_1978_p2 = (!mul_ln1118_144_fu_1978_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_144_fu_1978_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_145_fu_3407_p0() {
    mul_ln1118_145_fu_3407_p0 =  (sc_lv<8>) (zext_ln1116_10_fu_12401029_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_145_fu_3407_p2() {
    mul_ln1118_145_fu_3407_p2 = (!mul_ln1118_145_fu_3407_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_145_fu_3407_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_146_fu_1981_p0() {
    mul_ln1118_146_fu_1981_p0 =  (sc_lv<8>) (zext_ln1118_30_fu_12401083_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_146_fu_1981_p2() {
    mul_ln1118_146_fu_1981_p2 = (!mul_ln1118_146_fu_1981_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_146_fu_1981_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_147_fu_1983_p0() {
    mul_ln1118_147_fu_1983_p0 =  (sc_lv<8>) (zext_ln1118_207_fu_12401404_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_147_fu_1983_p2() {
    mul_ln1118_147_fu_1983_p2 = (!mul_ln1118_147_fu_1983_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_147_fu_1983_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_148_fu_3025_p0() {
    mul_ln1118_148_fu_3025_p0 =  (sc_lv<8>) (zext_ln1116_15_fu_12401435_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_148_fu_3025_p2() {
    mul_ln1118_148_fu_3025_p2 = (!mul_ln1118_148_fu_3025_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_148_fu_3025_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_149_fu_2305_p0() {
    mul_ln1118_149_fu_2305_p0 =  (sc_lv<8>) (zext_ln1118_39_fu_12401492_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_149_fu_2305_p2() {
    mul_ln1118_149_fu_2305_p2 = (!mul_ln1118_149_fu_2305_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_149_fu_2305_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_14_fu_2966_p0() {
    mul_ln1118_14_fu_2966_p0 =  (sc_lv<8>) (zext_ln1118_7_fu_12400358_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_14_fu_2966_p2() {
    mul_ln1118_14_fu_2966_p2 = (!mul_ln1118_14_fu_2966_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_14_fu_2966_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_150_fu_3103_p0() {
    mul_ln1118_150_fu_3103_p0 =  (sc_lv<8>) (zext_ln1118_fu_12400348_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_150_fu_3103_p2() {
    mul_ln1118_150_fu_3103_p2 = (!mul_ln1118_150_fu_3103_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_150_fu_3103_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_151_fu_1624_p0() {
    mul_ln1118_151_fu_1624_p0 =  (sc_lv<8>) (zext_ln1118_121_fu_12407065_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_151_fu_1624_p2() {
    mul_ln1118_151_fu_1624_p2 = (!mul_ln1118_151_fu_1624_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_151_fu_1624_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_152_fu_2308_p0() {
    mul_ln1118_152_fu_2308_p0 =  (sc_lv<8>) (zext_ln1118_90_fu_12400701_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_152_fu_2308_p2() {
    mul_ln1118_152_fu_2308_p2 = (!mul_ln1118_152_fu_2308_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_152_fu_2308_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_153_fu_2992_p0() {
    mul_ln1118_153_fu_2992_p0 =  (sc_lv<8>) (zext_ln1118_76_fu_12404555_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_153_fu_2992_p2() {
    mul_ln1118_153_fu_2992_p2 = (!mul_ln1118_153_fu_2992_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_153_fu_2992_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_154_fu_3231_p0() {
    mul_ln1118_154_fu_3231_p0 =  (sc_lv<8>) (zext_ln1118_21_fu_12400867_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_154_fu_3231_p2() {
    mul_ln1118_154_fu_3231_p2 = (!mul_ln1118_154_fu_3231_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_154_fu_3231_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_155_fu_2349_p0() {
    mul_ln1118_155_fu_2349_p0 =  (sc_lv<8>) (zext_ln1118_27_fu_12401038_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_155_fu_2349_p2() {
    mul_ln1118_155_fu_2349_p2 = (!mul_ln1118_155_fu_2349_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_155_fu_2349_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_156_fu_3441_p0() {
    mul_ln1118_156_fu_3441_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12405019_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_156_fu_3441_p2() {
    mul_ln1118_156_fu_3441_p2 = (!mul_ln1118_156_fu_3441_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_156_fu_3441_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_158_fu_2502_p0() {
    mul_ln1118_158_fu_2502_p0 =  (sc_lv<8>) (zext_ln1118_125_fu_12407103_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_158_fu_2502_p2() {
    mul_ln1118_158_fu_2502_p2 = (!mul_ln1118_158_fu_2502_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_158_fu_2502_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_159_fu_2427_p0() {
    mul_ln1118_159_fu_2427_p0 =  (sc_lv<8>) (mul_ln1118_159_fu_2427_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_159_fu_2427_p00() {
    mul_ln1118_159_fu_2427_p00 = esl_zext<15,8>(p_read4.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_159_fu_2427_p2() {
    mul_ln1118_159_fu_2427_p2 = (!mul_ln1118_159_fu_2427_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_159_fu_2427_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_15_fu_1540_p0() {
    mul_ln1118_15_fu_1540_p0 =  (sc_lv<8>) (zext_ln1116_1_fu_12400409_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_15_fu_1540_p2() {
    mul_ln1118_15_fu_1540_p2 = (!mul_ln1118_15_fu_1540_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_15_fu_1540_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_160_fu_1808_p0() {
    mul_ln1118_160_fu_1808_p0 =  (sc_lv<8>) (zext_ln1118_84_fu_12400619_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_160_fu_1808_p2() {
    mul_ln1118_160_fu_1808_p2 = (!mul_ln1118_160_fu_1808_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_160_fu_1808_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_161_fu_2730_p0() {
    mul_ln1118_161_fu_2730_p0 =  (sc_lv<8>) (mul_ln1118_161_fu_2730_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_161_fu_2730_p00() {
    mul_ln1118_161_fu_2730_p00 = esl_zext<13,8>(p_read6.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_161_fu_2730_p2() {
    mul_ln1118_161_fu_2730_p2 = (!mul_ln1118_161_fu_2730_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_161_fu_2730_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_162_fu_2279_p0() {
    mul_ln1118_162_fu_2279_p0 =  (sc_lv<8>) (zext_ln1118_90_fu_12400701_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_162_fu_2279_p2() {
    mul_ln1118_162_fu_2279_p2 = (!mul_ln1118_162_fu_2279_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_162_fu_2279_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_163_fu_3229_p0() {
    mul_ln1118_163_fu_3229_p0 =  (sc_lv<8>) (zext_ln708_2_fu_12400849_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_163_fu_3229_p2() {
    mul_ln1118_163_fu_3229_p2 = (!mul_ln1118_163_fu_3229_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_163_fu_3229_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_164_fu_2778_p0() {
    mul_ln1118_164_fu_2778_p0 =  (sc_lv<8>) (zext_ln1116_8_fu_12400909_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_164_fu_2778_p2() {
    mul_ln1118_164_fu_2778_p2 = (!mul_ln1118_164_fu_2778_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_164_fu_2778_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_165_fu_2187_p0() {
    mul_ln1118_165_fu_2187_p0 =  (sc_lv<8>) (zext_ln1118_180_fu_12401077_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_165_fu_2187_p2() {
    mul_ln1118_165_fu_2187_p2 = (!mul_ln1118_165_fu_2187_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_165_fu_2187_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_166_fu_3221_p0() {
    mul_ln1118_166_fu_3221_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12401271_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_166_fu_3221_p2() {
    mul_ln1118_166_fu_3221_p2 = (!mul_ln1118_166_fu_3221_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_166_fu_3221_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_167_fu_2658_p0() {
    mul_ln1118_167_fu_2658_p0 =  (sc_lv<8>) (mul_ln1118_167_fu_2658_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_167_fu_2658_p00() {
    mul_ln1118_167_fu_2658_p00 = esl_zext<14,8>(p_read21.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_167_fu_2658_p2() {
    mul_ln1118_167_fu_2658_p2 = (!mul_ln1118_167_fu_2658_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_167_fu_2658_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_168_fu_2095_p0() {
    mul_ln1118_168_fu_2095_p0 =  (sc_lv<8>) (zext_ln1116_55_fu_12412288_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_168_fu_2095_p2() {
    mul_ln1118_168_fu_2095_p2 = (!mul_ln1118_168_fu_2095_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_168_fu_2095_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_169_fu_3129_p0() {
    mul_ln1118_169_fu_3129_p0 =  (sc_lv<8>) (zext_ln1118_40_fu_12401518_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_169_fu_3129_p2() {
    mul_ln1118_169_fu_3129_p2 = (!mul_ln1118_169_fu_3129_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_169_fu_3129_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_16_fu_2968_p0() {
    mul_ln1118_16_fu_2968_p0 =  (sc_lv<8>) (zext_ln1116_2_fu_12400473_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_16_fu_2968_p2() {
    mul_ln1118_16_fu_2968_p2 = (!mul_ln1118_16_fu_2968_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_16_fu_2968_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_170_fu_2482_p0() {
    mul_ln1118_170_fu_2482_p0 =  (sc_lv<8>) (zext_ln708_6_fu_12401575_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_170_fu_2482_p2() {
    mul_ln1118_170_fu_2482_p2 = (!mul_ln1118_170_fu_2482_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_170_fu_2482_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_171_fu_2003_p0() {
    mul_ln1118_171_fu_2003_p0 =  (sc_lv<8>) (zext_ln1118_226_fu_12401666_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_171_fu_2003_p2() {
    mul_ln1118_171_fu_2003_p2 = (!mul_ln1118_171_fu_2003_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_171_fu_2003_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_172_fu_1524_p0() {
    mul_ln1118_172_fu_1524_p0 =  (sc_lv<8>) (zext_ln1116_1_fu_12400409_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_172_fu_1524_p2() {
    mul_ln1118_172_fu_1524_p2 = (!mul_ln1118_172_fu_1524_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_172_fu_1524_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_173_fu_2474_p0() {
    mul_ln1118_173_fu_2474_p0 =  (sc_lv<8>) (zext_ln1118_125_fu_12407103_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_173_fu_2474_p2() {
    mul_ln1118_173_fu_2474_p2 = (!mul_ln1118_173_fu_2474_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_173_fu_2474_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_174_fu_1432_p0() {
    mul_ln1118_174_fu_1432_p0 =  (sc_lv<8>) (zext_ln1118_90_fu_12400701_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_174_fu_1432_p2() {
    mul_ln1118_174_fu_1432_p2 = (!mul_ln1118_174_fu_1432_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_174_fu_1432_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_175_fu_2382_p0() {
    mul_ln1118_175_fu_2382_p0 =  (sc_lv<8>) (zext_ln1118_704_fu_12407237_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_175_fu_2382_p2() {
    mul_ln1118_175_fu_2382_p2 = (!mul_ln1118_175_fu_2382_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_175_fu_2382_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_176_fu_1875_p0() {
    mul_ln1118_176_fu_1875_p0 =  (sc_lv<8>) (zext_ln1118_21_fu_12400867_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_176_fu_1875_p2() {
    mul_ln1118_176_fu_1875_p2 = (!mul_ln1118_176_fu_1875_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_176_fu_1875_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_177_fu_2262_p0() {
    mul_ln1118_177_fu_2262_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12401271_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_177_fu_2262_p2() {
    mul_ln1118_177_fu_2262_p2 = (!mul_ln1118_177_fu_2262_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_177_fu_2262_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_178_fu_2026_p0() {
    mul_ln1118_178_fu_2026_p0 =  (sc_lv<8>) (zext_ln1118_204_fu_12401371_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_178_fu_2026_p2() {
    mul_ln1118_178_fu_2026_p2 = (!mul_ln1118_178_fu_2026_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_178_fu_2026_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_179_fu_1405_p0() {
    mul_ln1118_179_fu_1405_p0 =  (sc_lv<8>) (zext_ln1116_55_fu_12412288_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_179_fu_1405_p2() {
    mul_ln1118_179_fu_1405_p2 = (!mul_ln1118_179_fu_1405_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_179_fu_1405_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_17_fu_1543_p0() {
    mul_ln1118_17_fu_1543_p0 =  (sc_lv<8>) (zext_ln1118_21_fu_12400867_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_17_fu_1543_p2() {
    mul_ln1118_17_fu_1543_p2 = (!mul_ln1118_17_fu_1543_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_17_fu_1543_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_180_fu_3272_p0() {
    mul_ln1118_180_fu_3272_p0 =  (sc_lv<8>) (zext_ln1116_15_fu_12401435_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_180_fu_3272_p2() {
    mul_ln1118_180_fu_3272_p2 = (!mul_ln1118_180_fu_3272_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_180_fu_3272_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_181_fu_2030_p0() {
    mul_ln1118_181_fu_2030_p0 =  (sc_lv<8>) (zext_ln1118_101_fu_12404907_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_181_fu_2030_p2() {
    mul_ln1118_181_fu_2030_p2 = (!mul_ln1118_181_fu_2030_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_181_fu_2030_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_182_fu_2214_p0() {
    mul_ln1118_182_fu_2214_p0 =  (sc_lv<8>) (zext_ln1116_22_fu_12404930_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_182_fu_2214_p2() {
    mul_ln1118_182_fu_2214_p2 = (!mul_ln1118_182_fu_2214_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_182_fu_2214_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_183_fu_2655_p0() {
    mul_ln1118_183_fu_2655_p0 =  (sc_lv<8>) (mul_ln1118_183_fu_2655_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_183_fu_2655_p00() {
    mul_ln1118_183_fu_2655_p00 = esl_zext<13,8>(p_read30.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_183_fu_2655_p2() {
    mul_ln1118_183_fu_2655_p2 = (!mul_ln1118_183_fu_2655_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_183_fu_2655_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_184_fu_2217_p0() {
    mul_ln1118_184_fu_2217_p0 =  (sc_lv<8>) (zext_ln1116_17_fu_12401822_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_184_fu_2217_p2() {
    mul_ln1118_184_fu_2217_p2 = (!mul_ln1118_184_fu_2217_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_184_fu_2217_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_185_fu_2585_p0() {
    mul_ln1118_185_fu_2585_p0 =  (sc_lv<8>) (zext_ln1116_43_fu_12409691_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_185_fu_2585_p2() {
    mul_ln1118_185_fu_2585_p2 = (!mul_ln1118_185_fu_2585_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_185_fu_2585_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_186_fu_2660_p0() {
    mul_ln1118_186_fu_2660_p0 =  (sc_lv<8>) (zext_ln1116_16_fu_12401698_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_186_fu_2660_p2() {
    mul_ln1118_186_fu_2660_p2 = (!mul_ln1118_186_fu_2660_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_186_fu_2660_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_187_fu_2040_p0() {
    mul_ln1118_187_fu_2040_p0 =  (sc_lv<8>) (zext_ln708_25_fu_12402087_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_187_fu_2040_p2() {
    mul_ln1118_187_fu_2040_p2 = (!mul_ln1118_187_fu_2040_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_187_fu_2040_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_188_fu_3285_p0() {
    mul_ln1118_188_fu_3285_p0 =  (sc_lv<8>) (zext_ln1118_128_fu_12400916_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_188_fu_3285_p2() {
    mul_ln1118_188_fu_3285_p2 = (!mul_ln1118_188_fu_3285_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_188_fu_3285_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_189_fu_2664_p0() {
    mul_ln1118_189_fu_2664_p0 =  (sc_lv<8>) (zext_ln1118_59_fu_12403026_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_189_fu_2664_p2() {
    mul_ln1118_189_fu_2664_p2 = (!mul_ln1118_189_fu_2664_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_189_fu_2664_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_18_fu_1700_p0() {
    mul_ln1118_18_fu_1700_p0 =  (sc_lv<8>) (mul_ln1118_18_fu_1700_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_18_fu_1700_p00() {
    mul_ln1118_18_fu_1700_p00 = esl_zext<16,8>(p_read13.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_18_fu_1700_p2() {
    mul_ln1118_18_fu_1700_p2 = (!mul_ln1118_18_fu_1700_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_18_fu_1700_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_190_fu_2153_p0() {
    mul_ln1118_190_fu_2153_p0 =  (sc_lv<8>) (zext_ln1116_45_fu_12409791_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_190_fu_2153_p2() {
    mul_ln1118_190_fu_2153_p2 = (!mul_ln1118_190_fu_2153_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_190_fu_2153_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_191_fu_3440_p0() {
    mul_ln1118_191_fu_3440_p0 =  (sc_lv<8>) (zext_ln1118_27_fu_12401038_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_191_fu_3440_p2() {
    mul_ln1118_191_fu_3440_p2 = (!mul_ln1118_191_fu_3440_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_191_fu_3440_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_192_fu_2758_p0() {
    mul_ln1118_192_fu_2758_p0 =  (sc_lv<8>) (zext_ln1118_148_fu_12407428_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_192_fu_2758_p2() {
    mul_ln1118_192_fu_2758_p2 = (!mul_ln1118_192_fu_2758_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_192_fu_2758_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_193_fu_3442_p0() {
    mul_ln1118_193_fu_3442_p0 =  (sc_lv<8>) (zext_ln1118_33_fu_12401183_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_193_fu_3442_p2() {
    mul_ln1118_193_fu_3442_p2 = (!mul_ln1118_193_fu_3442_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_193_fu_3442_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_195_fu_2078_p0() {
    mul_ln1118_195_fu_2078_p0 =  (sc_lv<8>) (zext_ln1118_45_fu_12401704_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_195_fu_2078_p2() {
    mul_ln1118_195_fu_2078_p2 = (!mul_ln1118_195_fu_2078_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_195_fu_2078_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_196_fu_2762_p0() {
    mul_ln1118_196_fu_2762_p0 =  (sc_lv<8>) (zext_ln1118_170_fu_12407705_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_196_fu_2762_p2() {
    mul_ln1118_196_fu_2762_p2 = (!mul_ln1118_196_fu_2762_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_196_fu_2762_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_197_fu_2764_p0() {
    mul_ln1118_197_fu_2764_p0 =  (sc_lv<8>) (zext_ln708_25_fu_12402087_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_197_fu_2764_p2() {
    mul_ln1118_197_fu_2764_p2 = (!mul_ln1118_197_fu_2764_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_197_fu_2764_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_198_fu_2765_p0() {
    mul_ln1118_198_fu_2765_p0 =  (sc_lv<8>) (zext_ln1118_76_fu_12404555_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_198_fu_2765_p2() {
    mul_ln1118_198_fu_2765_p2 = (!mul_ln1118_198_fu_2765_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_198_fu_2765_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_199_fu_2941_p0() {
    mul_ln1118_199_fu_2941_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12401271_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_199_fu_2941_p2() {
    mul_ln1118_199_fu_2941_p2 = (!mul_ln1118_199_fu_2941_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_199_fu_2941_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_19_fu_3067_p0() {
    mul_ln1118_19_fu_3067_p0 =  (sc_lv<8>) (zext_ln1118_30_fu_12401083_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_19_fu_3067_p2() {
    mul_ln1118_19_fu_3067_p2 = (!mul_ln1118_19_fu_3067_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_19_fu_3067_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_200_fu_2350_p0() {
    mul_ln1118_200_fu_2350_p0 =  (sc_lv<8>) (zext_ln1116_14_fu_12401359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_200_fu_2350_p2() {
    mul_ln1118_200_fu_2350_p2 = (!mul_ln1118_200_fu_2350_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_200_fu_2350_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_201_fu_3384_p0() {
    mul_ln1118_201_fu_3384_p0 =  (sc_lv<8>) (zext_ln1118_54_fu_12402532_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_201_fu_3384_p2() {
    mul_ln1118_201_fu_3384_p2 = (!mul_ln1118_201_fu_3384_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_201_fu_3384_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_202_fu_2653_p0() {
    mul_ln1118_202_fu_2653_p0 =  (sc_lv<8>) (zext_ln1118_101_fu_12404907_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_202_fu_2653_p2() {
    mul_ln1118_202_fu_2653_p2 = (!mul_ln1118_202_fu_2653_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_202_fu_2653_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_203_fu_2286_p0() {
    mul_ln1118_203_fu_2286_p0 =  (sc_lv<8>) (zext_ln708_12_fu_12401828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_203_fu_2286_p2() {
    mul_ln1118_203_fu_2286_p2 = (!mul_ln1118_203_fu_2286_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_203_fu_2286_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_204_fu_2757_p0() {
    mul_ln1118_204_fu_2757_p0 =  (sc_lv<8>) (mul_ln1118_204_fu_2757_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_204_fu_2757_p00() {
    mul_ln1118_204_fu_2757_p00 = esl_zext<12,8>(p_read4.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_204_fu_2757_p2() {
    mul_ln1118_204_fu_2757_p2 = (!mul_ln1118_204_fu_2757_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_204_fu_2757_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_205_fu_2637_p0() {
    mul_ln1118_205_fu_2637_p0 =  (sc_lv<8>) (zext_ln1118_90_fu_12400701_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_205_fu_2637_p2() {
    mul_ln1118_205_fu_2637_p2 = (!mul_ln1118_205_fu_2637_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_205_fu_2637_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_206_fu_2130_p0() {
    mul_ln1118_206_fu_2130_p0 =  (sc_lv<8>) (zext_ln1118_704_fu_12407237_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_206_fu_2130_p2() {
    mul_ln1118_206_fu_2130_p2 = (!mul_ln1118_206_fu_2130_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_206_fu_2130_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_207_fu_3108_p0() {
    mul_ln1118_207_fu_3108_p0 =  (sc_lv<8>) (zext_ln1118_76_fu_12404555_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_207_fu_3108_p2() {
    mul_ln1118_207_fu_3108_p2 = (!mul_ln1118_207_fu_3108_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_207_fu_3108_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_208_fu_2010_p0() {
    mul_ln1118_208_fu_2010_p0 =  (sc_lv<8>) (zext_ln1118_25_fu_12400993_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_208_fu_2010_p2() {
    mul_ln1118_208_fu_2010_p2 = (!mul_ln1118_208_fu_2010_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_208_fu_2010_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_209_fu_3044_p0() {
    mul_ln1118_209_fu_3044_p0 =  (sc_lv<8>) (zext_ln1118_180_fu_12401077_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_209_fu_3044_p2() {
    mul_ln1118_209_fu_3044_p2 = (!mul_ln1118_209_fu_3044_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_209_fu_3044_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_20_fu_1702_p0() {
    mul_ln1118_20_fu_1702_p0 =  (sc_lv<8>) (zext_ln1118_31_fu_12401120_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_20_fu_1702_p2() {
    mul_ln1118_20_fu_1702_p2 = (!mul_ln1118_20_fu_1702_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_20_fu_1702_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_210_fu_2509_p0() {
    mul_ln1118_210_fu_2509_p0 =  (sc_lv<8>) (zext_ln1118_184_fu_12401133_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_210_fu_2509_p2() {
    mul_ln1118_210_fu_2509_p2 = (!mul_ln1118_210_fu_2509_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_210_fu_2509_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_211_fu_1918_p0() {
    mul_ln1118_211_fu_1918_p0 =  (sc_lv<8>) (zext_ln1118_336_fu_12414360_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_211_fu_1918_p2() {
    mul_ln1118_211_fu_1918_p2 = (!mul_ln1118_211_fu_1918_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_211_fu_1918_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_212_fu_2277_p0() {
    mul_ln1118_212_fu_2277_p0 =  (sc_lv<8>) (zext_ln1118_208_fu_12401410_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_212_fu_2277_p2() {
    mul_ln1118_212_fu_2277_p2 = (!mul_ln1118_212_fu_2277_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_212_fu_2277_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_213_fu_2804_p0() {
    mul_ln1118_213_fu_2804_p0 =  (sc_lv<8>) (zext_ln1118_226_fu_12401666_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_213_fu_2804_p2() {
    mul_ln1118_213_fu_2804_p2 = (!mul_ln1118_213_fu_2804_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_213_fu_2804_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_214_fu_2297_p0() {
    mul_ln1118_214_fu_2297_p0 =  (sc_lv<8>) (zext_ln708_25_fu_12402087_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_214_fu_2297_p2() {
    mul_ln1118_214_fu_2297_p2 = (!mul_ln1118_214_fu_2297_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_214_fu_2297_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_215_fu_3303_p0() {
    mul_ln1118_215_fu_3303_p0 =  (sc_lv<8>) (mul_ln1118_215_fu_3303_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_215_fu_3303_p00() {
    mul_ln1118_215_fu_3303_p00 = esl_zext<13,8>(p_read11.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_215_fu_3303_p2() {
    mul_ln1118_215_fu_3303_p2 = (!mul_ln1118_215_fu_3303_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_215_fu_3303_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_216_fu_2712_p0() {
    mul_ln1118_216_fu_2712_p0 =  (sc_lv<8>) (zext_ln1116_10_fu_12401029_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_216_fu_2712_p2() {
    mul_ln1118_216_fu_2712_p2 = (!mul_ln1118_216_fu_2712_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_216_fu_2712_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_217_fu_2205_p0() {
    mul_ln1118_217_fu_2205_p0 =  (sc_lv<8>) (zext_ln1116_19_fu_12404703_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_217_fu_2205_p2() {
    mul_ln1118_217_fu_2205_p2 = (!mul_ln1118_217_fu_2205_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_217_fu_2205_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_218_fu_3183_p0() {
    mul_ln1118_218_fu_3183_p0 =  (sc_lv<8>) (zext_ln1116_66_fu_12414324_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_218_fu_3183_p2() {
    mul_ln1118_218_fu_3183_p2 = (!mul_ln1118_218_fu_3183_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_218_fu_3183_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_219_fu_2648_p0() {
    mul_ln1118_219_fu_2648_p0 =  (sc_lv<8>) (zext_ln1118_89_fu_12404777_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_219_fu_2648_p2() {
    mul_ln1118_219_fu_2648_p2 = (!mul_ln1118_219_fu_2648_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_219_fu_2648_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_21_fu_2387_p0() {
    mul_ln1118_21_fu_2387_p0 =  (sc_lv<8>) (zext_ln1116_11_fu_12401205_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_21_fu_2387_p2() {
    mul_ln1118_21_fu_2387_p2 = (!mul_ln1118_21_fu_2387_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_21_fu_2387_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_220_fu_2709_p0() {
    mul_ln1118_220_fu_2709_p0 =  (sc_lv<8>) (mul_ln1118_220_fu_2709_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_220_fu_2709_p00() {
    mul_ln1118_220_fu_2709_p00 = esl_zext<13,8>(p_read24.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_220_fu_2709_p2() {
    mul_ln1118_220_fu_2709_p2 = (!mul_ln1118_220_fu_2709_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_220_fu_2709_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_221_fu_2527_p0() {
    mul_ln1118_221_fu_2527_p0 =  (sc_lv<8>) (zext_ln1118_54_fu_12402532_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_221_fu_2527_p2() {
    mul_ln1118_221_fu_2527_p2 = (!mul_ln1118_221_fu_2527_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_221_fu_2527_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_222_fu_1906_p0() {
    mul_ln1118_222_fu_1906_p0 =  (sc_lv<8>) (zext_ln1118_101_fu_12404907_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_222_fu_1906_p2() {
    mul_ln1118_222_fu_1906_p2 = (!mul_ln1118_222_fu_1906_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_222_fu_1906_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_223_fu_1907_p0() {
    mul_ln1118_223_fu_1907_p0 =  (sc_lv<8>) (zext_ln1116_22_fu_12404930_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_223_fu_1907_p2() {
    mul_ln1118_223_fu_1907_p2 = (!mul_ln1118_223_fu_1907_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_223_fu_1907_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_224_fu_1908_p0() {
    mul_ln1118_224_fu_1908_p0 =  (sc_lv<8>) (zext_ln1118_170_fu_12407705_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_224_fu_1908_p2() {
    mul_ln1118_224_fu_1908_p2 = (!mul_ln1118_224_fu_1908_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_224_fu_1908_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_225_fu_2531_p0() {
    mul_ln1118_225_fu_2531_p0 =  (sc_lv<8>) (zext_ln1116_fu_12400339_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_225_fu_2531_p2() {
    mul_ln1118_225_fu_2531_p2 = (!mul_ln1118_225_fu_2531_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_225_fu_2531_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_226_fu_2532_p0() {
    mul_ln1118_226_fu_2532_p0 =  (sc_lv<8>) (zext_ln1118_121_fu_12407065_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_226_fu_2532_p2() {
    mul_ln1118_226_fu_2532_p2 = (!mul_ln1118_226_fu_2532_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_226_fu_2532_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_227_fu_2915_p0() {
    mul_ln1118_227_fu_2915_p0 =  (sc_lv<8>) (zext_ln1118_30_fu_12401083_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_227_fu_2915_p2() {
    mul_ln1118_227_fu_2915_p2 = (!mul_ln1118_227_fu_2915_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_227_fu_2915_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_228_fu_1913_p0() {
    mul_ln1118_228_fu_1913_p0 =  (sc_lv<8>) (zext_ln1118_188_fu_12401174_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_228_fu_1913_p2() {
    mul_ln1118_228_fu_1913_p2 = (!mul_ln1118_228_fu_1913_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_228_fu_1913_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_229_fu_1915_p0() {
    mul_ln1118_229_fu_1915_p0 =  (sc_lv<8>) (zext_ln1116_55_fu_12412288_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_229_fu_1915_p2() {
    mul_ln1118_229_fu_1915_p2 = (!mul_ln1118_229_fu_1915_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_229_fu_1915_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_22_fu_2388_p0() {
    mul_ln1118_22_fu_2388_p0 =  (sc_lv<8>) (zext_ln1116_14_fu_12401359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_22_fu_2388_p2() {
    mul_ln1118_22_fu_2388_p2 = (!mul_ln1118_22_fu_2388_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_22_fu_2388_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_230_fu_3344_p0() {
    mul_ln1118_230_fu_3344_p0 =  (sc_lv<8>) (zext_ln708_12_fu_12401828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_230_fu_3344_p2() {
    mul_ln1118_230_fu_3344_p2 = (!mul_ln1118_230_fu_3344_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_230_fu_3344_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_231_fu_1919_p0() {
    mul_ln1118_231_fu_1919_p0 =  (sc_lv<8>) (zext_ln1118_137_fu_12407243_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_231_fu_1919_p2() {
    mul_ln1118_231_fu_1919_p2 = (!mul_ln1118_231_fu_1919_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_231_fu_1919_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_232_fu_3347_p0() {
    mul_ln1118_232_fu_3347_p0 =  (sc_lv<8>) (zext_ln1118_128_fu_12400916_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_232_fu_3347_p2() {
    mul_ln1118_232_fu_3347_p2 = (!mul_ln1118_232_fu_3347_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_232_fu_3347_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_233_fu_1921_p0() {
    mul_ln1118_233_fu_1921_p0 =  (sc_lv<8>) (zext_ln1118_24_fu_12400970_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_233_fu_1921_p2() {
    mul_ln1118_233_fu_1921_p2 = (!mul_ln1118_233_fu_1921_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_233_fu_1921_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_234_fu_2544_p0() {
    mul_ln1118_234_fu_2544_p0 =  (sc_lv<8>) (zext_ln1118_160_fu_12401000_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_234_fu_2544_p2() {
    mul_ln1118_234_fu_2544_p2 = (!mul_ln1118_234_fu_2544_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_234_fu_2544_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_236_fu_3174_p0() {
    mul_ln1118_236_fu_3174_p0 =  (sc_lv<8>) (zext_ln1118_34_fu_12401212_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_236_fu_3174_p2() {
    mul_ln1118_236_fu_3174_p2 = (!mul_ln1118_236_fu_3174_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_236_fu_3174_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_237_fu_2530_p0() {
    mul_ln1118_237_fu_2530_p0 =  (sc_lv<8>) (zext_ln1116_14_fu_12401359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_237_fu_2530_p2() {
    mul_ln1118_237_fu_2530_p2 = (!mul_ln1118_237_fu_2530_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_237_fu_2530_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_238_fu_3176_p0() {
    mul_ln1118_238_fu_3176_p0 =  (sc_lv<8>) (mul_ln1118_238_fu_3176_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_238_fu_3176_p00() {
    mul_ln1118_238_fu_3176_p00 = esl_zext<14,8>(p_read24.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_238_fu_3176_p2() {
    mul_ln1118_238_fu_3176_p2 = (!mul_ln1118_238_fu_3176_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_238_fu_3176_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_239_fu_1811_p0() {
    mul_ln1118_239_fu_1811_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12405019_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_239_fu_1811_p2() {
    mul_ln1118_239_fu_1811_p2 = (!mul_ln1118_239_fu_1811_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_239_fu_1811_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_23_fu_2559_p0() {
    mul_ln1118_23_fu_2559_p0 =  (sc_lv<8>) (zext_ln708_10_fu_12401762_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_23_fu_2559_p2() {
    mul_ln1118_23_fu_2559_p2 = (!mul_ln1118_23_fu_2559_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_23_fu_2559_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_240_fu_3178_p0() {
    mul_ln1118_240_fu_3178_p0 =  (sc_lv<8>) (zext_ln1116_fu_12400339_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_240_fu_3178_p2() {
    mul_ln1118_240_fu_3178_p2 = (!mul_ln1118_240_fu_3178_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_240_fu_3178_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_241_fu_3180_p0() {
    mul_ln1118_241_fu_3180_p0 =  (sc_lv<8>) (zext_ln1116_5_fu_12400759_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_241_fu_3180_p2() {
    mul_ln1118_241_fu_3180_p2 = (!mul_ln1118_241_fu_3180_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_241_fu_3180_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_242_fu_1853_p0() {
    mul_ln1118_242_fu_1853_p0 =  (sc_lv<8>) (zext_ln1118_137_fu_12407243_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_242_fu_1853_p2() {
    mul_ln1118_242_fu_1853_p2 = (!mul_ln1118_242_fu_1853_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_242_fu_1853_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_244_fu_2257_p0() {
    mul_ln1118_244_fu_2257_p0 =  (sc_lv<8>) (zext_ln1116_14_fu_12401359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_244_fu_2257_p2() {
    mul_ln1118_244_fu_2257_p2 = (!mul_ln1118_244_fu_2257_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_244_fu_2257_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_245_fu_1750_p0() {
    mul_ln1118_245_fu_1750_p0 =  (sc_lv<8>) (zext_ln1116_55_fu_12412288_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_245_fu_1750_p2() {
    mul_ln1118_245_fu_1750_p2 = (!mul_ln1118_245_fu_1750_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_245_fu_1750_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_246_fu_2165_p0() {
    mul_ln1118_246_fu_2165_p0 =  (sc_lv<8>) (zext_ln708_6_fu_12401575_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_246_fu_2165_p2() {
    mul_ln1118_246_fu_2165_p2 = (!mul_ln1118_246_fu_2165_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_246_fu_2165_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_247_fu_3143_p0() {
    mul_ln1118_247_fu_3143_p0 =  (sc_lv<8>) (zext_ln1118_46_fu_12401712_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_247_fu_3143_p2() {
    mul_ln1118_247_fu_3143_p2 = (!mul_ln1118_247_fu_3143_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_247_fu_3143_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_248_fu_2101_p0() {
    mul_ln1118_248_fu_2101_p0 =  (sc_lv<8>) (zext_ln1118_47_fu_12400423_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_248_fu_2101_p2() {
    mul_ln1118_248_fu_2101_p2 = (!mul_ln1118_248_fu_2101_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_248_fu_2101_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_249_fu_1566_p0() {
    mul_ln1118_249_fu_1566_p0 =  (sc_lv<8>) (zext_ln1118_8_fu_12400482_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_249_fu_1566_p2() {
    mul_ln1118_249_fu_1566_p2 = (!mul_ln1118_249_fu_1566_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_249_fu_1566_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_24_fu_2024_p0() {
    mul_ln1118_24_fu_2024_p0 =  (sc_lv<8>) (zext_ln1116_fu_12400339_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_24_fu_2024_p2() {
    mul_ln1118_24_fu_2024_p2 = (!mul_ln1118_24_fu_2024_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_24_fu_2024_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_250_fu_2572_p0() {
    mul_ln1118_250_fu_2572_p0 =  (sc_lv<8>) (zext_ln1118_69_fu_12400526_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_250_fu_2572_p2() {
    mul_ln1118_250_fu_2572_p2 = (!mul_ln1118_250_fu_2572_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_250_fu_2572_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_251_fu_2009_p0() {
    mul_ln1118_251_fu_2009_p0 =  (sc_lv<8>) (zext_ln1118_90_fu_12400701_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_251_fu_2009_p2() {
    mul_ln1118_251_fu_2009_p2 = (!mul_ln1118_251_fu_2009_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_251_fu_2009_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_253_fu_2452_p0() {
    mul_ln1118_253_fu_2452_p0 =  (sc_lv<8>) (zext_ln1118_128_fu_12400916_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_253_fu_2452_p2() {
    mul_ln1118_253_fu_2452_p2 = (!mul_ln1118_253_fu_2452_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_253_fu_2452_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_254_fu_1917_p0() {
    mul_ln1118_254_fu_1917_p0 =  (sc_lv<8>) (zext_ln1118_24_fu_12400970_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_254_fu_1917_p2() {
    mul_ln1118_254_fu_1917_p2 = (!mul_ln1118_254_fu_1917_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_254_fu_1917_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_255_fu_2895_p0() {
    mul_ln1118_255_fu_2895_p0 =  (sc_lv<8>) (zext_ln1118_160_fu_12401000_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_255_fu_2895_p2() {
    mul_ln1118_255_fu_2895_p2 = (!mul_ln1118_255_fu_2895_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_255_fu_2895_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_256_fu_2080_p0() {
    mul_ln1118_256_fu_2080_p0 =  (sc_lv<8>) (zext_ln1118_172_fu_12401046_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_256_fu_2080_p2() {
    mul_ln1118_256_fu_2080_p2 = (!mul_ln1118_256_fu_2080_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_256_fu_2080_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_257_fu_3338_p0() {
    mul_ln1118_257_fu_3338_p0 =  (sc_lv<8>) (zext_ln1118_152_fu_12407458_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_257_fu_3338_p2() {
    mul_ln1118_257_fu_3338_p2 = (!mul_ln1118_257_fu_3338_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_257_fu_3338_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_258_fu_3274_p0() {
    mul_ln1118_258_fu_3274_p0 =  (sc_lv<8>) (mul_ln1118_258_fu_3274_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_258_fu_3274_p00() {
    mul_ln1118_258_fu_3274_p00 = esl_zext<16,8>(p_read26.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_258_fu_3274_p2() {
    mul_ln1118_258_fu_3274_p2 = (!mul_ln1118_258_fu_3274_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_258_fu_3274_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_259_fu_2739_p0() {
    mul_ln1118_259_fu_2739_p0 =  (sc_lv<8>) (zext_ln708_7_fu_12401657_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_259_fu_2739_p2() {
    mul_ln1118_259_fu_2739_p2 = (!mul_ln1118_259_fu_2739_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_259_fu_2739_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_25_fu_1489_p0() {
    mul_ln1118_25_fu_1489_p0 =  (sc_lv<8>) (zext_ln1116_1_fu_12400409_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_25_fu_1489_p2() {
    mul_ln1118_25_fu_1489_p2 = (!mul_ln1118_25_fu_1489_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_25_fu_1489_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_260_fu_2148_p0() {
    mul_ln1118_260_fu_2148_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12405019_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_260_fu_2148_p2() {
    mul_ln1118_260_fu_2148_p2 = (!mul_ln1118_260_fu_2148_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_260_fu_2148_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_261_fu_3154_p0() {
    mul_ln1118_261_fu_3154_p0 =  (sc_lv<8>) (zext_ln1116_fu_12400339_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_261_fu_3154_p2() {
    mul_ln1118_261_fu_3154_p2 = (!mul_ln1118_261_fu_3154_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_261_fu_3154_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_262_fu_2619_p0() {
    mul_ln1118_262_fu_2619_p0 =  (sc_lv<8>) (zext_ln1116_1_fu_12400409_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_262_fu_2619_p2() {
    mul_ln1118_262_fu_2619_p2 = (!mul_ln1118_262_fu_2619_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_262_fu_2619_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_263_fu_1549_p0() {
    mul_ln1118_263_fu_1549_p0 =  (sc_lv<8>) (zext_ln1118_87_fu_12400654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_263_fu_1549_p2() {
    mul_ln1118_263_fu_1549_p2 = (!mul_ln1118_263_fu_1549_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_263_fu_1549_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_264_fu_2555_p0() {
    mul_ln1118_264_fu_2555_p0 =  (sc_lv<8>) (zext_ln1118_137_fu_12407243_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_264_fu_2555_p2() {
    mul_ln1118_264_fu_2555_p2 = (!mul_ln1118_264_fu_2555_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_264_fu_2555_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_265_fu_2020_p0() {
    mul_ln1118_265_fu_2020_p0 =  (sc_lv<8>) (zext_ln1116_6_fu_12400857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_265_fu_2020_p2() {
    mul_ln1118_265_fu_2020_p2 = (!mul_ln1118_265_fu_2020_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_265_fu_2020_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_266_fu_1429_p0() {
    mul_ln1118_266_fu_1429_p0 =  (sc_lv<8>) (zext_ln1118_23_fu_12400927_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_266_fu_1429_p2() {
    mul_ln1118_266_fu_1429_p2 = (!mul_ln1118_266_fu_1429_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_266_fu_1429_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_268_fu_2589_p0() {
    mul_ln1118_268_fu_2589_p0 =  (sc_lv<8>) (zext_ln1116_13_fu_12401325_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_268_fu_2589_p2() {
    mul_ln1118_268_fu_2589_p2 = (!mul_ln1118_268_fu_2589_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_268_fu_2589_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_269_fu_1529_p0() {
    mul_ln1118_269_fu_1529_p0 =  (sc_lv<8>) (zext_ln708_13_fu_12401418_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_269_fu_1529_p2() {
    mul_ln1118_269_fu_1529_p2 = (!mul_ln1118_269_fu_1529_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_269_fu_1529_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_26_fu_2910_p0() {
    mul_ln1118_26_fu_2910_p0 =  (sc_lv<8>) (zext_ln1116_5_fu_12400759_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_26_fu_2910_p2() {
    mul_ln1118_26_fu_2910_p2 = (!mul_ln1118_26_fu_2910_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_26_fu_2910_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_271_fu_1787_p0() {
    mul_ln1118_271_fu_1787_p0 =  (sc_lv<8>) (zext_ln1118_10_fu_12400520_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_271_fu_1787_p2() {
    mul_ln1118_271_fu_1787_p2 = (!mul_ln1118_271_fu_1787_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_271_fu_1787_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_272_fu_3215_p0() {
    mul_ln1118_272_fu_3215_p0 =  (sc_lv<8>) (zext_ln1118_11_fu_12400546_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_272_fu_3215_p2() {
    mul_ln1118_272_fu_3215_p2 = (!mul_ln1118_272_fu_3215_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_272_fu_3215_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_273_fu_3216_p0() {
    mul_ln1118_273_fu_3216_p0 =  (sc_lv<8>) (mul_ln1118_273_fu_3216_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_273_fu_3216_p00() {
    mul_ln1118_273_fu_3216_p00 = esl_zext<16,8>(p_read6.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_273_fu_3216_p2() {
    mul_ln1118_273_fu_3216_p2 = (!mul_ln1118_273_fu_3216_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_273_fu_3216_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_276_fu_3217_p0() {
    mul_ln1118_276_fu_3217_p0 =  (sc_lv<8>) (zext_ln1116_10_fu_12401029_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_276_fu_3217_p2() {
    mul_ln1118_276_fu_3217_p2 = (!mul_ln1118_276_fu_3217_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_276_fu_3217_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_277_fu_1974_p0() {
    mul_ln1118_277_fu_1974_p0 =  (sc_lv<8>) (zext_ln1118_86_fu_12404757_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_277_fu_1974_p2() {
    mul_ln1118_277_fu_1974_p2 = (!mul_ln1118_277_fu_1974_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_277_fu_1974_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_278_fu_3219_p0() {
    mul_ln1118_278_fu_3219_p0 =  (sc_lv<8>) (zext_ln1118_34_fu_12401212_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_278_fu_3219_p2() {
    mul_ln1118_278_fu_3219_p2 = (!mul_ln1118_278_fu_3219_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_278_fu_3219_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_279_fu_1793_p0() {
    mul_ln1118_279_fu_1793_p0 =  (sc_lv<8>) (zext_ln1116_13_fu_12401325_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_279_fu_1793_p2() {
    mul_ln1118_279_fu_1793_p2 = (!mul_ln1118_279_fu_1793_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_279_fu_1793_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_27_fu_1868_p0() {
    mul_ln1118_27_fu_1868_p0 =  (sc_lv<8>) (zext_ln1116_10_fu_12401029_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_27_fu_1868_p2() {
    mul_ln1118_27_fu_1868_p2 = (!mul_ln1118_27_fu_1868_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_27_fu_1868_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_280_fu_2782_p0() {
    mul_ln1118_280_fu_2782_p0 =  (sc_lv<8>) (zext_ln1116_14_fu_12401359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_280_fu_2782_p2() {
    mul_ln1118_280_fu_2782_p2 = (!mul_ln1118_280_fu_2782_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_280_fu_2782_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_281_fu_3222_p0() {
    mul_ln1118_281_fu_3222_p0 =  (sc_lv<8>) (mul_ln1118_281_fu_3222_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_281_fu_3222_p00() {
    mul_ln1118_281_fu_3222_p00 = esl_zext<14,8>(p_read30.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_281_fu_3222_p2() {
    mul_ln1118_281_fu_3222_p2 = (!mul_ln1118_281_fu_3222_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_281_fu_3222_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_283_fu_1708_p0() {
    mul_ln1118_283_fu_1708_p0 =  (sc_lv<8>) (zext_ln1118_76_fu_12404555_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_283_fu_1708_p2() {
    mul_ln1118_283_fu_1708_p2 = (!mul_ln1118_283_fu_1708_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_283_fu_1708_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_284_fu_3226_p0() {
    mul_ln1118_284_fu_3226_p0 =  (sc_lv<8>) (zext_ln1118_128_fu_12400916_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_284_fu_3226_p2() {
    mul_ln1118_284_fu_3226_p2 = (!mul_ln1118_284_fu_3226_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_284_fu_3226_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_285_fu_2605_p0() {
    mul_ln1118_285_fu_2605_p0 =  (sc_lv<8>) (zext_ln1116_45_fu_12409791_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_285_fu_2605_p2() {
    mul_ln1118_285_fu_2605_p2 = (!mul_ln1118_285_fu_2605_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_285_fu_2605_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_286_fu_2606_p0() {
    mul_ln1118_286_fu_2606_p0 =  (sc_lv<8>) (zext_ln1116_66_fu_12414324_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_286_fu_2606_p2() {
    mul_ln1118_286_fu_2606_p2 = (!mul_ln1118_286_fu_2606_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_286_fu_2606_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_287_fu_2225_p0() {
    mul_ln1118_287_fu_2225_p0 =  (sc_lv<8>) (zext_ln1116_13_fu_12401325_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_287_fu_2225_p2() {
    mul_ln1118_287_fu_2225_p2 = (!mul_ln1118_287_fu_2225_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_287_fu_2225_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_288_fu_2947_p0() {
    mul_ln1118_288_fu_2947_p0 =  (sc_lv<8>) (zext_ln1116_14_fu_12401359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_288_fu_2947_p2() {
    mul_ln1118_288_fu_2947_p2 = (!mul_ln1118_288_fu_2947_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_288_fu_2947_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_289_fu_2265_p0() {
    mul_ln1118_289_fu_2265_p0 =  (sc_lv<8>) (zext_ln708_13_fu_12401418_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_289_fu_2265_p2() {
    mul_ln1118_289_fu_2265_p2 = (!mul_ln1118_289_fu_2265_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_289_fu_2265_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_28_fu_2790_p0() {
    mul_ln1118_28_fu_2790_p0 =  (sc_lv<8>) (zext_ln1118_34_fu_12401212_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_28_fu_2790_p2() {
    mul_ln1118_28_fu_2790_p2 = (!mul_ln1118_28_fu_2790_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_28_fu_2790_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_290_fu_2228_p0() {
    mul_ln1118_290_fu_2228_p0 =  (sc_lv<8>) (zext_ln1118_222_fu_12401590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_290_fu_2228_p2() {
    mul_ln1118_290_fu_2228_p2 = (!mul_ln1118_290_fu_2228_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_290_fu_2228_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_291_fu_2912_p0() {
    mul_ln1118_291_fu_2912_p0 =  (sc_lv<8>) (zext_ln1118_226_fu_12401666_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_291_fu_2912_p2() {
    mul_ln1118_291_fu_2912_p2 = (!mul_ln1118_291_fu_2912_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_291_fu_2912_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_292_fu_2230_p0() {
    mul_ln1118_292_fu_2230_p0 =  (sc_lv<8>) (zext_ln1118_45_fu_12401704_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_292_fu_2230_p2() {
    mul_ln1118_292_fu_2230_p2 = (!mul_ln1118_292_fu_2230_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_292_fu_2230_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_293_fu_1548_p0() {
    mul_ln1118_293_fu_1548_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12405019_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_293_fu_1548_p2() {
    mul_ln1118_293_fu_1548_p2 = (!mul_ln1118_293_fu_1548_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_293_fu_1548_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_294_fu_2232_p0() {
    mul_ln1118_294_fu_2232_p0 =  (sc_lv<8>) (zext_ln1118_62_fu_12400491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_294_fu_2232_p2() {
    mul_ln1118_294_fu_2232_p2 = (!mul_ln1118_294_fu_2232_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_294_fu_2232_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_295_fu_2164_p0() {
    mul_ln1118_295_fu_2164_p0 =  (sc_lv<8>) (zext_ln1118_65_fu_12400512_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_295_fu_2164_p2() {
    mul_ln1118_295_fu_2164_p2 = (!mul_ln1118_295_fu_2164_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_295_fu_2164_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_296_fu_3170_p0() {
    mul_ln1118_296_fu_3170_p0 =  (sc_lv<8>) (zext_ln708_1_fu_12400694_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_296_fu_3170_p2() {
    mul_ln1118_296_fu_3170_p2 = (!mul_ln1118_296_fu_3170_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_296_fu_3170_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_298_fu_2579_p0() {
    mul_ln1118_298_fu_2579_p0 =  (sc_lv<8>) (zext_ln1118_25_fu_12400993_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_298_fu_2579_p2() {
    mul_ln1118_298_fu_2579_p2 = (!mul_ln1118_298_fu_2579_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_298_fu_2579_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_299_fu_2072_p0() {
    mul_ln1118_299_fu_2072_p0 =  (sc_lv<8>) (zext_ln1116_10_fu_12401029_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_299_fu_2072_p2() {
    mul_ln1118_299_fu_2072_p2 = (!mul_ln1118_299_fu_2072_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_299_fu_2072_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_29_fu_2283_p0() {
    mul_ln1118_29_fu_2283_p0 =  (sc_lv<8>) (zext_ln1116_15_fu_12401435_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_29_fu_2283_p2() {
    mul_ln1118_29_fu_2283_p2 = (!mul_ln1118_29_fu_2283_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_29_fu_2283_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_300_fu_1565_p0() {
    mul_ln1118_300_fu_1565_p0 =  (sc_lv<8>) (zext_ln1118_32_fu_12401125_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_300_fu_1565_p2() {
    mul_ln1118_300_fu_1565_p2 = (!mul_ln1118_300_fu_1565_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_300_fu_1565_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_301_fu_2515_p0() {
    mul_ln1118_301_fu_2515_p0 =  (sc_lv<8>) (zext_ln1118_33_fu_12401183_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_301_fu_2515_p2() {
    mul_ln1118_301_fu_2515_p2 = (!mul_ln1118_301_fu_2515_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_301_fu_2515_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_302_fu_1952_p0() {
    mul_ln1118_302_fu_1952_p0 =  (sc_lv<8>) (zext_ln1118_336_fu_12414360_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_302_fu_1952_p2() {
    mul_ln1118_302_fu_1952_p2 = (!mul_ln1118_302_fu_1952_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_302_fu_1952_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_303_fu_2986_p0() {
    mul_ln1118_303_fu_2986_p0 =  (sc_lv<8>) (zext_ln1118_163_fu_12407580_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_303_fu_2986_p2() {
    mul_ln1118_303_fu_2986_p2 = (!mul_ln1118_303_fu_2986_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_303_fu_2986_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_304_fu_2311_p0() {
    mul_ln1118_304_fu_2311_p0 =  (sc_lv<8>) (zext_ln1118_125_fu_12407103_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_304_fu_2311_p2() {
    mul_ln1118_304_fu_2311_p2 = (!mul_ln1118_304_fu_2311_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_304_fu_2311_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_306_fu_1916_p0() {
    mul_ln1118_306_fu_1916_p0 =  (sc_lv<8>) (zext_ln1118_90_fu_12400701_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_306_fu_1916_p2() {
    mul_ln1118_306_fu_1916_p2 = (!mul_ln1118_306_fu_1916_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_306_fu_1916_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_307_fu_2866_p0() {
    mul_ln1118_307_fu_2866_p0 =  (sc_lv<8>) (zext_ln1118_21_fu_12400867_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_307_fu_2866_p2() {
    mul_ln1118_307_fu_2866_p2 = (!mul_ln1118_307_fu_2866_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_307_fu_2866_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_308_fu_2359_p0() {
    mul_ln1118_308_fu_2359_p0 =  (sc_lv<8>) (zext_ln1118_59_fu_12403026_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_308_fu_2359_p2() {
    mul_ln1118_308_fu_2359_p2 = (!mul_ln1118_308_fu_2359_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_308_fu_2359_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_309_fu_3337_p0() {
    mul_ln1118_309_fu_3337_p0 =  (sc_lv<8>) (zext_ln1118_30_fu_12401083_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_309_fu_3337_p2() {
    mul_ln1118_309_fu_3337_p2 = (!mul_ln1118_309_fu_3337_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_309_fu_3337_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_30_fu_1776_p0() {
    mul_ln1118_30_fu_1776_p0 =  (sc_lv<8>) (zext_ln1118_40_fu_12401518_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_30_fu_1776_p2() {
    mul_ln1118_30_fu_1776_p2 = (!mul_ln1118_30_fu_1776_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_30_fu_1776_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_310_fu_1704_p0() {
    mul_ln1118_310_fu_1704_p0 =  (sc_lv<8>) (zext_ln1116_55_fu_12412288_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_310_fu_1704_p2() {
    mul_ln1118_310_fu_1704_p2 = (!mul_ln1118_310_fu_1704_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_310_fu_1704_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_311_fu_2682_p0() {
    mul_ln1118_311_fu_2682_p0 =  (sc_lv<8>) (zext_ln1118_209_fu_12401443_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_311_fu_2682_p2() {
    mul_ln1118_311_fu_2682_p2 = (!mul_ln1118_311_fu_2682_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_311_fu_2682_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_312_fu_3125_p0() {
    mul_ln1118_312_fu_3125_p0 =  (sc_lv<8>) (zext_ln1118_45_fu_12401704_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_312_fu_3125_p2() {
    mul_ln1118_312_fu_3125_p2 = (!mul_ln1118_312_fu_3125_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_312_fu_3125_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_313_fu_2055_p0() {
    mul_ln1118_313_fu_2055_p0 =  (sc_lv<8>) (zext_ln1118_2215_fu_12419857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_313_fu_2055_p2() {
    mul_ln1118_313_fu_2055_p2 = (!mul_ln1118_313_fu_2055_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_313_fu_2055_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_314_fu_3033_p0() {
    mul_ln1118_314_fu_3033_p0 =  (sc_lv<8>) (zext_ln1118_494_fu_12419886_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_314_fu_3033_p2() {
    mul_ln1118_314_fu_3033_p2 = (!mul_ln1118_314_fu_3033_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_314_fu_3033_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_315_fu_1963_p0() {
    mul_ln1118_315_fu_1963_p0 =  (sc_lv<8>) (zext_ln1116_89_fu_12420125_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_315_fu_1963_p2() {
    mul_ln1118_315_fu_1963_p2 = (!mul_ln1118_315_fu_1963_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_315_fu_1963_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_316_fu_1456_p0() {
    mul_ln1118_316_fu_1456_p0 =  (sc_lv<8>) (zext_ln1118_508_fu_12420336_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_316_fu_1456_p2() {
    mul_ln1118_316_fu_1456_p2 = (!mul_ln1118_316_fu_1456_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_316_fu_1456_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_317_fu_2406_p0() {
    mul_ln1118_317_fu_2406_p0 =  (sc_lv<8>) (zext_ln1118_510_fu_12420372_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_317_fu_2406_p2() {
    mul_ln1118_317_fu_2406_p2 = (!mul_ln1118_317_fu_2406_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_317_fu_2406_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_318_fu_2597_p0() {
    mul_ln1118_318_fu_2597_p0 =  (sc_lv<8>) (zext_ln1118_517_fu_12420549_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_318_fu_2597_p2() {
    mul_ln1118_318_fu_2597_p2 = (!mul_ln1118_318_fu_2597_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_318_fu_2597_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_319_fu_1661_p0() {
    mul_ln1118_319_fu_1661_p0 =  (sc_lv<8>) (zext_ln1116_97_fu_12420691_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_319_fu_1661_p2() {
    mul_ln1118_319_fu_1661_p2 = (!mul_ln1118_319_fu_1661_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_319_fu_1661_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_31_fu_2163_p0() {
    mul_ln1118_31_fu_2163_p0 =  (sc_lv<8>) (zext_ln1118_45_fu_12401704_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_31_fu_2163_p2() {
    mul_ln1118_31_fu_2163_p2 = (!mul_ln1118_31_fu_2163_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_31_fu_2163_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_320_fu_3089_p0() {
    mul_ln1118_320_fu_3089_p0 =  (sc_lv<8>) (zext_ln1116_98_fu_12420725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_320_fu_3089_p2() {
    mul_ln1118_320_fu_3089_p2 = (!mul_ln1118_320_fu_3089_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_320_fu_3089_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_321_fu_1664_p0() {
    mul_ln1118_321_fu_1664_p0 =  (sc_lv<8>) (zext_ln1118_523_fu_12420858_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_321_fu_1664_p2() {
    mul_ln1118_321_fu_1664_p2 = (!mul_ln1118_321_fu_1664_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_321_fu_1664_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_322_fu_3092_p0() {
    mul_ln1118_322_fu_3092_p0 =  (sc_lv<8>) (zext_ln1118_2299_fu_12421032_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_322_fu_3092_p2() {
    mul_ln1118_322_fu_3092_p2 = (!mul_ln1118_322_fu_3092_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_322_fu_3092_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_323_fu_1666_p0() {
    mul_ln1118_323_fu_1666_p0 =  (sc_lv<8>) (zext_ln1118_2206_fu_12419724_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_323_fu_1666_p2() {
    mul_ln1118_323_fu_1666_p2 = (!mul_ln1118_323_fu_1666_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_323_fu_1666_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_324_fu_3094_p0() {
    mul_ln1118_324_fu_3094_p0 =  (sc_lv<8>) (zext_ln1116_85_fu_12419775_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_324_fu_3094_p2() {
    mul_ln1118_324_fu_3094_p2 = (!mul_ln1118_324_fu_3094_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_324_fu_3094_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_325_fu_1668_p0() {
    mul_ln1118_325_fu_1668_p0 =  (sc_lv<8>) (zext_ln1116_86_fu_12419839_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_325_fu_1668_p2() {
    mul_ln1118_325_fu_1668_p2 = (!mul_ln1118_325_fu_1668_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_325_fu_1668_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_326_fu_1670_p0() {
    mul_ln1118_326_fu_1670_p0 =  (sc_lv<8>) (zext_ln1118_505_fu_12420233_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_326_fu_1670_p2() {
    mul_ln1118_326_fu_1670_p2 = (!mul_ln1118_326_fu_1670_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_326_fu_1670_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_327_fu_1671_p0() {
    mul_ln1118_327_fu_1671_p0 =  (sc_lv<8>) (mul_ln1118_327_fu_1671_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_327_fu_1671_p00() {
    mul_ln1118_327_fu_1671_p00 = esl_zext<16,8>(p_read45.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_327_fu_1671_p2() {
    mul_ln1118_327_fu_1671_p2 = (!mul_ln1118_327_fu_1671_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_327_fu_1671_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_328_fu_1672_p0() {
    mul_ln1118_328_fu_1672_p0 =  (sc_lv<8>) (zext_ln1118_514_fu_12420449_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_328_fu_1672_p2() {
    mul_ln1118_328_fu_1672_p2 = (!mul_ln1118_328_fu_1672_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_328_fu_1672_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_329_fu_3100_p0() {
    mul_ln1118_329_fu_3100_p0 =  (sc_lv<8>) (zext_ln1118_515_fu_12420486_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_329_fu_3100_p2() {
    mul_ln1118_329_fu_3100_p2 = (!mul_ln1118_329_fu_3100_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_329_fu_3100_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_32_fu_1656_p0() {
    mul_ln1118_32_fu_1656_p0 =  (sc_lv<8>) (zext_ln1116_17_fu_12401822_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_32_fu_1656_p2() {
    mul_ln1118_32_fu_1656_p2 = (!mul_ln1118_32_fu_1656_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_32_fu_1656_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_330_fu_1675_p0() {
    mul_ln1118_330_fu_1675_p0 =  (sc_lv<8>) (zext_ln1116_95_fu_12420571_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_330_fu_1675_p2() {
    mul_ln1118_330_fu_1675_p2 = (!mul_ln1118_330_fu_1675_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_330_fu_1675_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_331_fu_1676_p0() {
    mul_ln1118_331_fu_1676_p0 =  (sc_lv<8>) (zext_ln1116_98_fu_12420725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_331_fu_1676_p2() {
    mul_ln1118_331_fu_1676_p2 = (!mul_ln1118_331_fu_1676_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_331_fu_1676_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_332_fu_3106_p0() {
    mul_ln1118_332_fu_3106_p0 =  (sc_lv<8>) (zext_ln708_193_fu_12421128_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_332_fu_3106_p2() {
    mul_ln1118_332_fu_3106_p2 = (!mul_ln1118_332_fu_3106_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_332_fu_3106_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_333_fu_2641_p0() {
    mul_ln1118_333_fu_2641_p0 =  (sc_lv<8>) (zext_ln1116_84_fu_12419705_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_333_fu_2641_p2() {
    mul_ln1118_333_fu_2641_p2 = (!mul_ln1118_333_fu_2641_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_333_fu_2641_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_334_fu_2642_p0() {
    mul_ln1118_334_fu_2642_p0 =  (sc_lv<8>) (zext_ln1116_85_fu_12419775_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_334_fu_2642_p2() {
    mul_ln1118_334_fu_2642_p2 = (!mul_ln1118_334_fu_2642_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_334_fu_2642_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_335_fu_2000_p0() {
    mul_ln1118_335_fu_2000_p0 =  (sc_lv<8>) (zext_ln1116_89_fu_12420125_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_335_fu_2000_p2() {
    mul_ln1118_335_fu_2000_p2 = (!mul_ln1118_335_fu_2000_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_335_fu_2000_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_336_fu_3330_p0() {
    mul_ln1118_336_fu_3330_p0 =  (sc_lv<8>) (zext_ln1116_94_fu_12420395_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_336_fu_3330_p2() {
    mul_ln1118_336_fu_3330_p2 = (!mul_ln1118_336_fu_3330_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_336_fu_3330_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_337_fu_3331_p0() {
    mul_ln1118_337_fu_3331_p0 =  (sc_lv<8>) (zext_ln1118_518_fu_12420578_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_337_fu_3331_p2() {
    mul_ln1118_337_fu_3331_p2 = (!mul_ln1118_337_fu_3331_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_337_fu_3331_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_338_fu_2043_p0() {
    mul_ln1118_338_fu_2043_p0 =  (sc_lv<8>) (zext_ln1116_99_fu_12420801_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_338_fu_2043_p2() {
    mul_ln1118_338_fu_2043_p2 = (!mul_ln1118_338_fu_2043_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_338_fu_2043_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_339_fu_1536_p0() {
    mul_ln1118_339_fu_1536_p0 =  (sc_lv<8>) (zext_ln1118_524_fu_12420884_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_339_fu_1536_p2() {
    mul_ln1118_339_fu_1536_p2 = (!mul_ln1118_339_fu_1536_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_339_fu_1536_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_33_fu_2634_p0() {
    mul_ln1118_33_fu_2634_p0 =  (sc_lv<8>) (zext_ln1118_8_fu_12400482_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_33_fu_2634_p2() {
    mul_ln1118_33_fu_2634_p2 = (!mul_ln1118_33_fu_2634_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_33_fu_2634_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_340_fu_1951_p0() {
    mul_ln1118_340_fu_1951_p0 =  (sc_lv<8>) (zext_ln1118_529_fu_12421070_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_340_fu_1951_p2() {
    mul_ln1118_340_fu_1951_p2 = (!mul_ln1118_340_fu_1951_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_340_fu_1951_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_341_fu_1444_p0() {
    mul_ln1118_341_fu_1444_p0 =  (sc_lv<8>) (zext_ln1116_101_fu_12421188_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_341_fu_1444_p2() {
    mul_ln1118_341_fu_1444_p2 = (!mul_ln1118_341_fu_1444_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_341_fu_1444_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_342_fu_2394_p0() {
    mul_ln1118_342_fu_2394_p0 =  (sc_lv<8>) (zext_ln1118_492_fu_12419848_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_342_fu_2394_p2() {
    mul_ln1118_342_fu_2394_p2 = (!mul_ln1118_342_fu_2394_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_342_fu_2394_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_343_fu_3372_p0() {
    mul_ln1118_343_fu_3372_p0 =  (sc_lv<8>) (mul_ln1118_343_fu_3372_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_343_fu_3372_p00() {
    mul_ln1118_343_fu_3372_p00 = esl_zext<13,8>(p_read40.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_343_fu_3372_p2() {
    mul_ln1118_343_fu_3372_p2 = (!mul_ln1118_343_fu_3372_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_343_fu_3372_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_344_fu_2837_p0() {
    mul_ln1118_344_fu_2837_p0 =  (sc_lv<8>) (zext_ln1118_505_fu_12420233_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_344_fu_2837_p2() {
    mul_ln1118_344_fu_2837_p2 = (!mul_ln1118_344_fu_2837_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_344_fu_2837_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_345_fu_2302_p0() {
    mul_ln1118_345_fu_2302_p0 =  (sc_lv<8>) (zext_ln1118_509_fu_12420359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_345_fu_2302_p2() {
    mul_ln1118_345_fu_2302_p2 = (!mul_ln1118_345_fu_2302_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_345_fu_2302_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_346_fu_1795_p0() {
    mul_ln1118_346_fu_1795_p0 =  (sc_lv<8>) (zext_ln1118_511_fu_12420404_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_346_fu_1795_p2() {
    mul_ln1118_346_fu_1795_p2 = (!mul_ln1118_346_fu_1795_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_346_fu_1795_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_347_fu_2745_p0() {
    mul_ln1118_347_fu_2745_p0 =  (sc_lv<8>) (zext_ln1118_514_fu_12420449_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_347_fu_2745_p2() {
    mul_ln1118_347_fu_2745_p2 = (!mul_ln1118_347_fu_2745_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_347_fu_2745_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_348_fu_3188_p0() {
    mul_ln1118_348_fu_3188_p0 =  (sc_lv<8>) (zext_ln1116_95_fu_12420571_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_348_fu_3188_p2() {
    mul_ln1118_348_fu_3188_p2 = (!mul_ln1118_348_fu_3188_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_348_fu_3188_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_349_fu_2062_p0() {
    mul_ln1118_349_fu_2062_p0 =  (sc_lv<8>) (zext_ln1118_523_fu_12420858_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_349_fu_2062_p2() {
    mul_ln1118_349_fu_2062_p2 = (!mul_ln1118_349_fu_2062_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_349_fu_2062_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_34_fu_2099_p0() {
    mul_ln1118_34_fu_2099_p0 =  (sc_lv<8>) (mul_ln1118_34_fu_2099_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_34_fu_2099_p00() {
    mul_ln1118_34_fu_2099_p00 = esl_zext<13,8>(p_read8.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_34_fu_2099_p2() {
    mul_ln1118_34_fu_2099_p2 = (!mul_ln1118_34_fu_2099_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_34_fu_2099_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_350_fu_1555_p0() {
    mul_ln1118_350_fu_1555_p0 =  (sc_lv<8>) (zext_ln1116_100_fu_12421064_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_350_fu_1555_p2() {
    mul_ln1118_350_fu_1555_p2 = (!mul_ln1118_350_fu_1555_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_350_fu_1555_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_351_fu_3371_p0() {
    mul_ln1118_351_fu_3371_p0 =  (sc_lv<8>) (zext_ln708_195_fu_12421194_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_351_fu_3371_p2() {
    mul_ln1118_351_fu_3371_p2 = (!mul_ln1118_351_fu_3371_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_351_fu_3371_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_352_fu_3032_p0() {
    mul_ln1118_352_fu_3032_p0 =  (sc_lv<8>) (zext_ln1118_2212_fu_12419789_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_352_fu_3032_p2() {
    mul_ln1118_352_fu_3032_p2 = (!mul_ln1118_352_fu_3032_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_352_fu_3032_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_353_fu_2469_p0() {
    mul_ln1118_353_fu_2469_p0 =  (sc_lv<8>) (zext_ln1116_86_fu_12419839_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_353_fu_2469_p2() {
    mul_ln1118_353_fu_2469_p2 = (!mul_ln1118_353_fu_2469_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_353_fu_2469_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_354_fu_1962_p0() {
    mul_ln1118_354_fu_1962_p0 =  (sc_lv<8>) (zext_ln708_183_fu_12419970_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_354_fu_1962_p2() {
    mul_ln1118_354_fu_1962_p2 = (!mul_ln1118_354_fu_1962_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_354_fu_1962_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_355_fu_2940_p0() {
    mul_ln1118_355_fu_2940_p0 =  (sc_lv<8>) (zext_ln1118_2231_fu_12420020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_355_fu_2940_p2() {
    mul_ln1118_355_fu_2940_p2 = (!mul_ln1118_355_fu_2940_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_355_fu_2940_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_356_fu_2293_p0() {
    mul_ln1118_356_fu_2293_p0 =  (sc_lv<8>) (zext_ln708_255_fu_12421453_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_356_fu_2293_p2() {
    mul_ln1118_356_fu_2293_p2 = (!mul_ln1118_356_fu_2293_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_356_fu_2293_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_357_fu_2848_p0() {
    mul_ln1118_357_fu_2848_p0 =  (sc_lv<8>) (zext_ln1116_92_fu_12420275_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_357_fu_2848_p2() {
    mul_ln1118_357_fu_2848_p2 = (!mul_ln1118_357_fu_2848_p0.read().is_01() || !ap_const_lv16_FFA8.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_357_fu_2848_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA8);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_358_fu_2285_p0() {
    mul_ln1118_358_fu_2285_p0 =  (sc_lv<8>) (zext_ln1118_508_fu_12420336_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_358_fu_2285_p2() {
    mul_ln1118_358_fu_2285_p2 = (!mul_ln1118_358_fu_2285_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_358_fu_2285_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_359_fu_1778_p0() {
    mul_ln1118_359_fu_1778_p0 =  (sc_lv<8>) (zext_ln1118_516_fu_12420491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_359_fu_1778_p2() {
    mul_ln1118_359_fu_1778_p2 = (!mul_ln1118_359_fu_1778_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_359_fu_1778_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_35_fu_3077_p0() {
    mul_ln1118_35_fu_3077_p0 =  (sc_lv<8>) (zext_ln1118_21_fu_12400867_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_35_fu_3077_p2() {
    mul_ln1118_35_fu_3077_p2 = (!mul_ln1118_35_fu_3077_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_35_fu_3077_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_360_fu_2728_p0() {
    mul_ln1118_360_fu_2728_p0 =  (sc_lv<8>) (zext_ln1118_517_fu_12420549_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_360_fu_2728_p2() {
    mul_ln1118_360_fu_2728_p2 = (!mul_ln1118_360_fu_2728_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_360_fu_2728_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_361_fu_3149_p0() {
    mul_ln1118_361_fu_3149_p0 =  (sc_lv<8>) (zext_ln1118_518_fu_12420578_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_361_fu_3149_p2() {
    mul_ln1118_361_fu_3149_p2 = (!mul_ln1118_361_fu_3149_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_361_fu_3149_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_362_fu_2345_p0() {
    mul_ln1118_362_fu_2345_p0 =  (sc_lv<8>) (zext_ln1118_2282_fu_12420750_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_362_fu_2345_p2() {
    mul_ln1118_362_fu_2345_p2 = (!mul_ln1118_362_fu_2345_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_362_fu_2345_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_363_fu_2090_p0() {
    mul_ln1118_363_fu_2090_p0 =  (sc_lv<8>) (zext_ln1118_2285_fu_12420809_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_363_fu_2090_p2() {
    mul_ln1118_363_fu_2090_p2 = (!mul_ln1118_363_fu_2090_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_363_fu_2090_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_364_fu_2969_p0() {
    mul_ln1118_364_fu_2969_p0 =  (sc_lv<8>) (zext_ln1116_105_fu_12424251_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_364_fu_2969_p2() {
    mul_ln1118_364_fu_2969_p2 = (!mul_ln1118_364_fu_2969_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_364_fu_2969_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_365_fu_3153_p0() {
    mul_ln1118_365_fu_3153_p0 =  (sc_lv<8>) (zext_ln1118_585_fu_12424273_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_365_fu_3153_p2() {
    mul_ln1118_365_fu_3153_p2 = (!mul_ln1118_365_fu_3153_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_365_fu_3153_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_366_fu_2972_p0() {
    mul_ln1118_366_fu_2972_p0 =  (sc_lv<8>) (zext_ln1116_107_fu_12424385_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_366_fu_2972_p2() {
    mul_ln1118_366_fu_2972_p2 = (!mul_ln1118_366_fu_2972_p0.read().is_01() || !ap_const_lv16_FF96.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_366_fu_2972_p0.read()) * sc_bigint<16>(ap_const_lv16_FF96);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_367_fu_2973_p0() {
    mul_ln1118_367_fu_2973_p0 =  (sc_lv<8>) (zext_ln1116_85_fu_12419775_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_367_fu_2973_p2() {
    mul_ln1118_367_fu_2973_p2 = (!mul_ln1118_367_fu_2973_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_367_fu_2973_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_368_fu_1730_p0() {
    mul_ln1118_368_fu_1730_p0 =  (sc_lv<8>) (zext_ln1118_492_fu_12419848_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_368_fu_1730_p2() {
    mul_ln1118_368_fu_1730_p2 = (!mul_ln1118_368_fu_1730_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_368_fu_1730_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_369_fu_2975_p0() {
    mul_ln1118_369_fu_2975_p0 =  (sc_lv<8>) (zext_ln1118_2219_fu_12419892_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_369_fu_2975_p2() {
    mul_ln1118_369_fu_2975_p2 = (!mul_ln1118_369_fu_2975_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_369_fu_2975_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_36_fu_2318_p0() {
    mul_ln1118_36_fu_2318_p0 =  (sc_lv<8>) (zext_ln1118_25_fu_12400993_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_36_fu_2318_p2() {
    mul_ln1118_36_fu_2318_p2 = (!mul_ln1118_36_fu_2318_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_36_fu_2318_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_370_fu_2976_p0() {
    mul_ln1118_370_fu_2976_p0 =  (sc_lv<8>) (zext_ln1118_496_fu_12419923_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_370_fu_2976_p2() {
    mul_ln1118_370_fu_2976_p2 = (!mul_ln1118_370_fu_2976_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_370_fu_2976_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_371_fu_2978_p0() {
    mul_ln1118_371_fu_2978_p0 =  (sc_lv<8>) (zext_ln1118_512_fu_12420417_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_371_fu_2978_p2() {
    mul_ln1118_371_fu_2978_p2 = (!mul_ln1118_371_fu_2978_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_371_fu_2978_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_372_fu_3162_p0() {
    mul_ln1118_372_fu_3162_p0 =  (sc_lv<8>) (zext_ln1118_2271_fu_12420627_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_372_fu_3162_p2() {
    mul_ln1118_372_fu_3162_p2 = (!mul_ln1118_372_fu_3162_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_372_fu_3162_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_373_fu_2724_p0() {
    mul_ln1118_373_fu_2724_p0 =  (sc_lv<8>) (zext_ln1118_578_fu_12424203_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_373_fu_2724_p2() {
    mul_ln1118_373_fu_2724_p2 = (!mul_ln1118_373_fu_2724_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_373_fu_2724_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_374_fu_1554_p0() {
    mul_ln1118_374_fu_1554_p0 =  (sc_lv<8>) (zext_ln1118_2280_fu_12420737_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_374_fu_1554_p2() {
    mul_ln1118_374_fu_1554_p2 = (!mul_ln1118_374_fu_1554_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_374_fu_1554_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_375_fu_1739_p0() {
    mul_ln1118_375_fu_1739_p0 =  (sc_lv<8>) (zext_ln1116_105_fu_12424251_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_375_fu_1739_p2() {
    mul_ln1118_375_fu_1739_p2 = (!mul_ln1118_375_fu_1739_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_375_fu_1739_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_376_fu_2984_p0() {
    mul_ln1118_376_fu_2984_p0 =  (sc_lv<8>) (zext_ln1116_106_fu_12424296_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_376_fu_2984_p2() {
    mul_ln1118_376_fu_2984_p2 = (!mul_ln1118_376_fu_2984_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_376_fu_2984_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_377_fu_3057_p0() {
    mul_ln1118_377_fu_3057_p0 =  (sc_lv<8>) (zext_ln1118_2299_fu_12421032_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_377_fu_3057_p2() {
    mul_ln1118_377_fu_3057_p2 = (!mul_ln1118_377_fu_3057_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_377_fu_3057_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_378_fu_3059_p0() {
    mul_ln1118_378_fu_3059_p0 =  (sc_lv<8>) (zext_ln1116_86_fu_12419839_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_378_fu_3059_p2() {
    mul_ln1118_378_fu_3059_p2 = (!mul_ln1118_378_fu_3059_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_378_fu_3059_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_379_fu_3060_p0() {
    mul_ln1118_379_fu_3060_p0 =  (sc_lv<8>) (zext_ln1118_495_fu_12419912_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_379_fu_3060_p2() {
    mul_ln1118_379_fu_3060_p2 = (!mul_ln1118_379_fu_3060_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_379_fu_3060_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_37_fu_2007_p0() {
    mul_ln1118_37_fu_2007_p0 =  (sc_lv<8>) (zext_ln1118_27_fu_12401038_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_37_fu_2007_p2() {
    mul_ln1118_37_fu_2007_p2 = (!mul_ln1118_37_fu_2007_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_37_fu_2007_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_380_fu_1695_p0() {
    mul_ln1118_380_fu_1695_p0 =  (sc_lv<8>) (zext_ln708_183_fu_12419970_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_380_fu_1695_p2() {
    mul_ln1118_380_fu_1695_p2 = (!mul_ln1118_380_fu_1695_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_380_fu_1695_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_381_fu_3062_p0() {
    mul_ln1118_381_fu_3062_p0 =  (sc_lv<8>) (zext_ln1118_2231_fu_12420020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_381_fu_3062_p2() {
    mul_ln1118_381_fu_3062_p2 = (!mul_ln1118_381_fu_3062_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_381_fu_3062_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_382_fu_1697_p0() {
    mul_ln1118_382_fu_1697_p0 =  (sc_lv<8>) (zext_ln708_255_fu_12421453_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_382_fu_1697_p2() {
    mul_ln1118_382_fu_1697_p2 = (!mul_ln1118_382_fu_1697_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_382_fu_1697_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_383_fu_2381_p0() {
    mul_ln1118_383_fu_2381_p0 =  (sc_lv<8>) (zext_ln1118_560_fu_12423921_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_383_fu_2381_p2() {
    mul_ln1118_383_fu_2381_p2 = (!mul_ln1118_383_fu_2381_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_383_fu_2381_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_384_fu_1699_p0() {
    mul_ln1118_384_fu_1699_p0 =  (sc_lv<8>) (mul_ln1118_384_fu_1699_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_384_fu_1699_p00() {
    mul_ln1118_384_fu_1699_p00 = esl_zext<16,8>(p_read43.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_384_fu_1699_p2() {
    mul_ln1118_384_fu_1699_p2 = (!mul_ln1118_384_fu_1699_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_384_fu_1699_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_385_fu_3343_p0() {
    mul_ln1118_385_fu_3343_p0 =  (sc_lv<8>) (mul_ln1118_385_fu_3343_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_385_fu_3343_p00() {
    mul_ln1118_385_fu_3343_p00 = esl_zext<16,8>(p_read49.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_385_fu_3343_p2() {
    mul_ln1118_385_fu_3343_p2 = (!mul_ln1118_385_fu_3343_p0.read().is_01() || !ap_const_lv16_FFB3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_385_fu_3343_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_386_fu_2808_p0() {
    mul_ln1118_386_fu_2808_p0 =  (sc_lv<8>) (zext_ln1118_519_fu_12420637_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_386_fu_2808_p2() {
    mul_ln1118_386_fu_2808_p2 = (!mul_ln1118_386_fu_2808_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_386_fu_2808_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_387_fu_2245_p0() {
    mul_ln1118_387_fu_2245_p0 =  (sc_lv<8>) (zext_ln1118_577_fu_12424198_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_387_fu_2245_p2() {
    mul_ln1118_387_fu_2245_p2 = (!mul_ln1118_387_fu_2245_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_387_fu_2245_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_388_fu_2125_p0() {
    mul_ln1118_388_fu_2125_p0 =  (sc_lv<8>) (mul_ln1118_388_fu_2125_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_388_fu_2125_p00() {
    mul_ln1118_388_fu_2125_p00 = esl_zext<13,8>(p_read63.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_388_fu_2125_p2() {
    mul_ln1118_388_fu_2125_p2 = (!mul_ln1118_388_fu_2125_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_388_fu_2125_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_389_fu_1646_p0() {
    mul_ln1118_389_fu_1646_p0 =  (sc_lv<8>) (zext_ln1118_561_fu_12423968_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_389_fu_1646_p2() {
    mul_ln1118_389_fu_1646_p2 = (!mul_ln1118_389_fu_1646_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_389_fu_1646_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_38_fu_2957_p0() {
    mul_ln1118_38_fu_2957_p0 =  (sc_lv<8>) (zext_ln1118_30_fu_12401083_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_38_fu_2957_p2() {
    mul_ln1118_38_fu_2957_p2 = (!mul_ln1118_38_fu_2957_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_38_fu_2957_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_390_fu_2596_p0() {
    mul_ln1118_390_fu_2596_p0 =  (sc_lv<8>) (zext_ln1118_507_fu_12420293_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_390_fu_2596_p2() {
    mul_ln1118_390_fu_2596_p2 = (!mul_ln1118_390_fu_2596_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_390_fu_2596_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_391_fu_2089_p0() {
    mul_ln1118_391_fu_2089_p0 =  (sc_lv<8>) (zext_ln1116_103_fu_12424069_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_391_fu_2089_p2() {
    mul_ln1118_391_fu_2089_p2 = (!mul_ln1118_391_fu_2089_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_391_fu_2089_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_392_fu_3095_p0() {
    mul_ln1118_392_fu_3095_p0 =  (sc_lv<8>) (zext_ln1118_516_fu_12420491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_392_fu_3095_p2() {
    mul_ln1118_392_fu_3095_p2 = (!mul_ln1118_392_fu_3095_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_392_fu_3095_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_393_fu_2476_p0() {
    mul_ln1118_393_fu_2476_p0 =  (sc_lv<8>) (zext_ln1118_570_fu_12424123_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_393_fu_2476_p2() {
    mul_ln1118_393_fu_2476_p2 = (!mul_ln1118_393_fu_2476_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_393_fu_2476_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_394_fu_1969_p0() {
    mul_ln1118_394_fu_1969_p0 =  (sc_lv<8>) (zext_ln1118_518_fu_12420578_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_394_fu_1969_p2() {
    mul_ln1118_394_fu_1969_p2 = (!mul_ln1118_394_fu_1969_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_394_fu_1969_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_395_fu_2919_p0() {
    mul_ln1118_395_fu_2919_p0 =  (sc_lv<8>) (zext_ln1118_2279_fu_12420704_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_395_fu_2919_p2() {
    mul_ln1118_395_fu_2919_p2 = (!mul_ln1118_395_fu_2919_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_395_fu_2919_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_396_fu_2440_p0() {
    mul_ln1118_396_fu_2440_p0 =  (sc_lv<8>) (zext_ln1116_105_fu_12424251_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_396_fu_2440_p2() {
    mul_ln1118_396_fu_2440_p2 = (!mul_ln1118_396_fu_2440_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_396_fu_2440_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_397_fu_1933_p0() {
    mul_ln1118_397_fu_1933_p0 =  (sc_lv<8>) (mul_ln1118_397_fu_1933_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_397_fu_1933_p00() {
    mul_ln1118_397_fu_1933_p00 = esl_zext<14,8>(p_read59.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_397_fu_1933_p2() {
    mul_ln1118_397_fu_1933_p2 = (!mul_ln1118_397_fu_1933_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_397_fu_1933_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_398_fu_2883_p0() {
    mul_ln1118_398_fu_2883_p0 =  (sc_lv<8>) (zext_ln1118_527_fu_12421041_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_398_fu_2883_p2() {
    mul_ln1118_398_fu_2883_p2 = (!mul_ln1118_398_fu_2883_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_398_fu_2883_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_399_fu_1841_p0() {
    mul_ln1118_399_fu_1841_p0 =  (sc_lv<8>) (zext_ln1118_2231_fu_12420020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_399_fu_1841_p2() {
    mul_ln1118_399_fu_1841_p2 = (!mul_ln1118_399_fu_1841_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_399_fu_1841_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_39_fu_1859_p0() {
    mul_ln1118_39_fu_1859_p0 =  (sc_lv<8>) (zext_ln1116_11_fu_12401205_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_39_fu_1859_p2() {
    mul_ln1118_39_fu_1859_p2 = (!mul_ln1118_39_fu_1859_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_39_fu_1859_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_401_fu_2791_p0() {
    mul_ln1118_401_fu_2791_p0 =  (sc_lv<8>) (zext_ln1118_621_fu_12426609_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_401_fu_2791_p2() {
    mul_ln1118_401_fu_2791_p2 = (!mul_ln1118_401_fu_2791_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_401_fu_2791_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_402_fu_2172_p0() {
    mul_ln1118_402_fu_2172_p0 =  (sc_lv<8>) (zext_ln1118_632_fu_12426794_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_402_fu_2172_p2() {
    mul_ln1118_402_fu_2172_p2 = (!mul_ln1118_402_fu_2172_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_402_fu_2172_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_403_fu_2699_p0() {
    mul_ln1118_403_fu_2699_p0 =  (sc_lv<8>) (zext_ln1118_636_fu_12426824_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_403_fu_2699_p2() {
    mul_ln1118_403_fu_2699_p2 = (!mul_ln1118_403_fu_2699_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_403_fu_2699_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_404_fu_1657_p0() {
    mul_ln1118_404_fu_1657_p0 =  (sc_lv<8>) (zext_ln1116_98_fu_12420725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_404_fu_1657_p2() {
    mul_ln1118_404_fu_1657_p2 = (!mul_ln1118_404_fu_1657_p0.read().is_01() || !ap_const_lv16_FF92.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_404_fu_1657_p0.read()) * sc_bigint<16>(ap_const_lv16_FF92);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_405_fu_2607_p0() {
    mul_ln1118_405_fu_2607_p0 =  (sc_lv<8>) (zext_ln1118_2283_fu_12420770_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_405_fu_2607_p2() {
    mul_ln1118_405_fu_2607_p2 = (!mul_ln1118_405_fu_2607_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_405_fu_2607_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_406_fu_3030_p0() {
    mul_ln1118_406_fu_3030_p0 =  (sc_lv<8>) (zext_ln1118_654_fu_12427071_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_406_fu_3030_p2() {
    mul_ln1118_406_fu_3030_p2 = (!mul_ln1118_406_fu_3030_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_406_fu_3030_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_407_fu_2226_p0() {
    mul_ln1118_407_fu_2226_p0 =  (sc_lv<8>) (zext_ln1118_2206_fu_12419724_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_407_fu_2226_p2() {
    mul_ln1118_407_fu_2226_p2 = (!mul_ln1118_407_fu_2226_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_407_fu_2226_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_408_fu_2227_p0() {
    mul_ln1118_408_fu_2227_p0 =  (sc_lv<8>) (zext_ln1118_2229_fu_12419985_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_408_fu_2227_p2() {
    mul_ln1118_408_fu_2227_p2 = (!mul_ln1118_408_fu_2227_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_408_fu_2227_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_409_fu_1606_p0() {
    mul_ln1118_409_fu_1606_p0 =  (sc_lv<8>) (zext_ln1118_560_fu_12423921_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_409_fu_1606_p2() {
    mul_ln1118_409_fu_1606_p2 = (!mul_ln1118_409_fu_1606_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_409_fu_1606_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_40_fu_2358_p0() {
    mul_ln1118_40_fu_2358_p0 =  (sc_lv<8>) (zext_ln1118_39_fu_12401492_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_40_fu_2358_p2() {
    mul_ln1118_40_fu_2358_p2 = (!mul_ln1118_40_fu_2358_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_40_fu_2358_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_412_fu_2851_p0() {
    mul_ln1118_412_fu_2851_p0 =  (sc_lv<8>) (zext_ln1116_95_fu_12420571_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_412_fu_2851_p2() {
    mul_ln1118_412_fu_2851_p2 = (!mul_ln1118_412_fu_2851_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_412_fu_2851_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_413_fu_2231_p0() {
    mul_ln1118_413_fu_2231_p0 =  (sc_lv<8>) (zext_ln708_237_fu_12420784_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_413_fu_2231_p2() {
    mul_ln1118_413_fu_2231_p2 = (!mul_ln1118_413_fu_2231_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_413_fu_2231_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_415_fu_3220_p0() {
    mul_ln1118_415_fu_3220_p0 =  (sc_lv<8>) (zext_ln1116_86_fu_12419839_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_415_fu_3220_p2() {
    mul_ln1118_415_fu_3220_p2 = (!mul_ln1118_415_fu_3220_p0.read().is_01() || !ap_const_lv16_FFA8.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_415_fu_3220_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA8);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_416_fu_2234_p0() {
    mul_ln1118_416_fu_2234_p0 =  (sc_lv<8>) (zext_ln1118_2231_fu_12420020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_416_fu_2234_p2() {
    mul_ln1118_416_fu_2234_p2 = (!mul_ln1118_416_fu_2234_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_416_fu_2234_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_417_fu_2235_p0() {
    mul_ln1118_417_fu_2235_p0 =  (sc_lv<8>) (zext_ln1118_621_fu_12426609_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_417_fu_2235_p2() {
    mul_ln1118_417_fu_2235_p2 = (!mul_ln1118_417_fu_2235_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_417_fu_2235_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_418_fu_2236_p0() {
    mul_ln1118_418_fu_2236_p0 =  (sc_lv<8>) (zext_ln1118_505_fu_12420233_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_418_fu_2236_p2() {
    mul_ln1118_418_fu_2236_p2 = (!mul_ln1118_418_fu_2236_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_418_fu_2236_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_419_fu_2860_p0() {
    mul_ln1118_419_fu_2860_p0 =  (sc_lv<8>) (zext_ln1118_2282_fu_12420750_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_419_fu_2860_p2() {
    mul_ln1118_419_fu_2860_p2 = (!mul_ln1118_419_fu_2860_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_419_fu_2860_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_41_fu_3336_p0() {
    mul_ln1118_41_fu_3336_p0 =  (sc_lv<8>) (zext_ln1116_16_fu_12401698_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_41_fu_3336_p2() {
    mul_ln1118_41_fu_3336_p2 = (!mul_ln1118_41_fu_3336_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_41_fu_3336_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_420_fu_2862_p0() {
    mul_ln1118_420_fu_2862_p0 =  (sc_lv<8>) (zext_ln1118_585_fu_12424273_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_420_fu_2862_p2() {
    mul_ln1118_420_fu_2862_p2 = (!mul_ln1118_420_fu_2862_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_420_fu_2862_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_421_fu_2424_p0() {
    mul_ln1118_421_fu_2424_p0 =  (sc_lv<8>) (zext_ln708_189_fu_12420941_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_421_fu_2424_p2() {
    mul_ln1118_421_fu_2424_p2 = (!mul_ln1118_421_fu_2424_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_421_fu_2424_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_422_fu_2108_p0() {
    mul_ln1118_422_fu_2108_p0 =  (sc_lv<8>) (zext_ln1118_530_fu_12421078_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_422_fu_2108_p2() {
    mul_ln1118_422_fu_2108_p2 = (!mul_ln1118_422_fu_2108_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_422_fu_2108_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_423_fu_2792_p0() {
    mul_ln1118_423_fu_2792_p0 =  (sc_lv<8>) (zext_ln1116_84_fu_12419705_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_423_fu_2792_p2() {
    mul_ln1118_423_fu_2792_p2 = (!mul_ln1118_423_fu_2792_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_423_fu_2792_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_424_fu_1427_p0() {
    mul_ln1118_424_fu_1427_p0 =  (sc_lv<8>) (zext_ln1118_2215_fu_12419857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_424_fu_1427_p2() {
    mul_ln1118_424_fu_1427_p2 = (!mul_ln1118_424_fu_1427_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_424_fu_1427_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_425_fu_1466_p0() {
    mul_ln1118_425_fu_1466_p0 =  (sc_lv<8>) (zext_ln1118_2229_fu_12419985_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_425_fu_1466_p2() {
    mul_ln1118_425_fu_1466_p2 = (!mul_ln1118_425_fu_1466_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_425_fu_1466_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_426_fu_2795_p0() {
    mul_ln1118_426_fu_2795_p0 =  (sc_lv<8>) (mul_ln1118_426_fu_2795_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_426_fu_2795_p00() {
    mul_ln1118_426_fu_2795_p00 = esl_zext<16,8>(p_read39.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_426_fu_2795_p2() {
    mul_ln1118_426_fu_2795_p2 = (!mul_ln1118_426_fu_2795_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_426_fu_2795_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_427_fu_2834_p0() {
    mul_ln1118_427_fu_2834_p0 =  (sc_lv<8>) (zext_ln1116_89_fu_12420125_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_427_fu_2834_p2() {
    mul_ln1118_427_fu_2834_p2 = (!mul_ln1118_427_fu_2834_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_427_fu_2834_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_428_fu_2873_p0() {
    mul_ln1118_428_fu_2873_p0 =  (sc_lv<8>) (zext_ln1116_90_fu_12420223_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_428_fu_2873_p2() {
    mul_ln1118_428_fu_2873_p2 = (!mul_ln1118_428_fu_2873_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_428_fu_2873_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_429_fu_2115_p0() {
    mul_ln1118_429_fu_2115_p0 =  (sc_lv<8>) (zext_ln1118_561_fu_12423968_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_429_fu_2115_p2() {
    mul_ln1118_429_fu_2115_p2 = (!mul_ln1118_429_fu_2115_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_429_fu_2115_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_42_fu_2294_p0() {
    mul_ln1118_42_fu_2294_p0 =  (sc_lv<8>) (zext_ln708_12_fu_12401828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_42_fu_2294_p2() {
    mul_ln1118_42_fu_2294_p2 = (!mul_ln1118_42_fu_2294_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_42_fu_2294_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_430_fu_2751_p0() {
    mul_ln1118_430_fu_2751_p0 =  (sc_lv<8>) (zext_ln1118_511_fu_12420404_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_430_fu_2751_p2() {
    mul_ln1118_430_fu_2751_p2 = (!mul_ln1118_430_fu_2751_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_430_fu_2751_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_431_fu_2188_p0() {
    mul_ln1118_431_fu_2188_p0 =  (sc_lv<8>) (zext_ln1116_105_fu_12424251_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_431_fu_2188_p2() {
    mul_ln1118_431_fu_2188_p2 = (!mul_ln1118_431_fu_2188_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_431_fu_2188_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_432_fu_3166_p0() {
    mul_ln1118_432_fu_3166_p0 =  (sc_lv<8>) (zext_ln708_193_fu_12421128_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_432_fu_3166_p2() {
    mul_ln1118_432_fu_3166_p2 = (!mul_ln1118_432_fu_3166_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_432_fu_3166_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_433_fu_2631_p0() {
    mul_ln1118_433_fu_2631_p0 =  (sc_lv<8>) (mul_ln1118_433_fu_2631_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_433_fu_2631_p00() {
    mul_ln1118_433_fu_2631_p00 = esl_zext<13,8>(p_read32.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_433_fu_2631_p2() {
    mul_ln1118_433_fu_2631_p2 = (!mul_ln1118_433_fu_2631_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_433_fu_2631_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_434_fu_2096_p0() {
    mul_ln1118_434_fu_2096_p0 =  (sc_lv<8>) (zext_ln1116_85_fu_12419775_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_434_fu_2096_p2() {
    mul_ln1118_434_fu_2096_p2 = (!mul_ln1118_434_fu_2096_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_434_fu_2096_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_435_fu_3102_p0() {
    mul_ln1118_435_fu_3102_p0 =  (sc_lv<8>) (zext_ln1116_86_fu_12419839_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_435_fu_3102_p2() {
    mul_ln1118_435_fu_3102_p2 = (!mul_ln1118_435_fu_3102_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_435_fu_3102_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_436_fu_2539_p0() {
    mul_ln1118_436_fu_2539_p0 =  (sc_lv<8>) (mul_ln1118_436_fu_2539_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_436_fu_2539_p00() {
    mul_ln1118_436_fu_2539_p00 = esl_zext<16,8>(p_read36.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_436_fu_2539_p2() {
    mul_ln1118_436_fu_2539_p2 = (!mul_ln1118_436_fu_2539_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_436_fu_2539_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_437_fu_2004_p0() {
    mul_ln1118_437_fu_2004_p0 =  (sc_lv<8>) (zext_ln1116_126_fu_12428951_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_437_fu_2004_p2() {
    mul_ln1118_437_fu_2004_p2 = (!mul_ln1118_437_fu_2004_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_437_fu_2004_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_438_fu_2926_p0() {
    mul_ln1118_438_fu_2926_p0 =  (sc_lv<8>) (zext_ln1118_2231_fu_12420020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_438_fu_2926_p2() {
    mul_ln1118_438_fu_2926_p2 = (!mul_ln1118_438_fu_2926_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_438_fu_2926_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_439_fu_2447_p0() {
    mul_ln1118_439_fu_2447_p0 =  (sc_lv<8>) (zext_ln1116_92_fu_12420275_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_439_fu_2447_p2() {
    mul_ln1118_439_fu_2447_p2 = (!mul_ln1118_439_fu_2447_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_439_fu_2447_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_43_fu_1703_p0() {
    mul_ln1118_43_fu_1703_p0 =  (sc_lv<8>) (zext_ln1118_47_fu_12400423_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_43_fu_1703_p2() {
    mul_ln1118_43_fu_1703_p2 = (!mul_ln1118_43_fu_1703_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_43_fu_1703_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_440_fu_3425_p0() {
    mul_ln1118_440_fu_3425_p0 =  (sc_lv<8>) (zext_ln1116_129_fu_12429157_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_440_fu_3425_p2() {
    mul_ln1118_440_fu_3425_p2 = (!mul_ln1118_440_fu_3425_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_440_fu_3425_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_441_fu_2355_p0() {
    mul_ln1118_441_fu_2355_p0 =  (sc_lv<8>) (zext_ln1118_516_fu_12420491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_441_fu_2355_p2() {
    mul_ln1118_441_fu_2355_p2 = (!mul_ln1118_441_fu_2355_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_441_fu_2355_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_442_fu_1820_p0() {
    mul_ln1118_442_fu_1820_p0 =  (sc_lv<8>) (zext_ln1118_519_fu_12420637_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_442_fu_1820_p2() {
    mul_ln1118_442_fu_1820_p2 = (!mul_ln1118_442_fu_1820_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_442_fu_1820_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_443_fu_2798_p0() {
    mul_ln1118_443_fu_2798_p0 =  (sc_lv<8>) (mul_ln1118_443_fu_2798_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_443_fu_2798_p00() {
    mul_ln1118_443_fu_2798_p00 = esl_zext<12,8>(p_read54.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_443_fu_2798_p2() {
    mul_ln1118_443_fu_2798_p2 = (!mul_ln1118_443_fu_2798_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_443_fu_2798_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_444_fu_2263_p0() {
    mul_ln1118_444_fu_2263_p0 =  (sc_lv<8>) (zext_ln1116_99_fu_12420801_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_444_fu_2263_p2() {
    mul_ln1118_444_fu_2263_p2 = (!mul_ln1118_444_fu_2263_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_444_fu_2263_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_445_fu_2199_p0() {
    mul_ln1118_445_fu_2199_p0 =  (sc_lv<8>) (zext_ln1116_131_fu_12429406_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_445_fu_2199_p2() {
    mul_ln1118_445_fu_2199_p2 = (!mul_ln1118_445_fu_2199_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_445_fu_2199_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_446_fu_2614_p0() {
    mul_ln1118_446_fu_2614_p0 =  (sc_lv<8>) (zext_ln1118_2206_fu_12419724_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_446_fu_2614_p2() {
    mul_ln1118_446_fu_2614_p2 = (!mul_ln1118_446_fu_2614_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_446_fu_2614_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_447_fu_3085_p0() {
    mul_ln1118_447_fu_3085_p0 =  (sc_lv<8>) (zext_ln1116_127_fu_12429057_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_447_fu_3085_p2() {
    mul_ln1118_447_fu_3085_p2 = (!mul_ln1118_447_fu_3085_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_447_fu_3085_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_449_fu_1987_p0() {
    mul_ln1118_449_fu_1987_p0 =  (sc_lv<8>) (zext_ln1118_519_fu_12420637_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_449_fu_1987_p2() {
    mul_ln1118_449_fu_1987_p2 = (!mul_ln1118_449_fu_1987_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_449_fu_1987_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_44_fu_1586_p0() {
    mul_ln1118_44_fu_1586_p0 =  (sc_lv<8>) (zext_ln1116_2_fu_12400473_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_44_fu_1586_p2() {
    mul_ln1118_44_fu_1586_p2 = (!mul_ln1118_44_fu_1586_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_44_fu_1586_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_450_fu_1424_p0() {
    mul_ln1118_450_fu_1424_p0 =  (sc_lv<8>) (zext_ln1118_2280_fu_12420737_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_450_fu_1424_p2() {
    mul_ln1118_450_fu_1424_p2 = (!mul_ln1118_450_fu_1424_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_450_fu_1424_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_451_fu_1895_p0() {
    mul_ln1118_451_fu_1895_p0 =  (sc_lv<8>) (zext_ln1116_126_fu_12428951_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_451_fu_1895_p2() {
    mul_ln1118_451_fu_1895_p2 = (!mul_ln1118_451_fu_1895_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_451_fu_1895_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_452_fu_1480_p0() {
    mul_ln1118_452_fu_1480_p0 =  (sc_lv<8>) (zext_ln708_184_fu_12420060_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_452_fu_1480_p2() {
    mul_ln1118_452_fu_1480_p2 = (!mul_ln1118_452_fu_1480_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_452_fu_1480_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_453_fu_1483_p0() {
    mul_ln1118_453_fu_1483_p0 =  (sc_lv<8>) (zext_ln1118_508_fu_12420336_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_453_fu_1483_p2() {
    mul_ln1118_453_fu_1483_p2 = (!mul_ln1118_453_fu_1483_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_453_fu_1483_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_454_fu_2290_p0() {
    mul_ln1118_454_fu_2290_p0 =  (sc_lv<8>) (zext_ln1116_94_fu_12420395_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_454_fu_2290_p2() {
    mul_ln1118_454_fu_2290_p2 = (!mul_ln1118_454_fu_2290_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_454_fu_2290_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_455_fu_1486_p0() {
    mul_ln1118_455_fu_1486_p0 =  (sc_lv<8>) (zext_ln1118_514_fu_12420449_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_455_fu_1486_p2() {
    mul_ln1118_455_fu_1486_p2 = (!mul_ln1118_455_fu_1486_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_455_fu_1486_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_456_fu_1488_p0() {
    mul_ln1118_456_fu_1488_p0 =  (sc_lv<8>) (zext_ln1118_2283_fu_12420770_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_456_fu_1488_p2() {
    mul_ln1118_456_fu_1488_p2 = (!mul_ln1118_456_fu_1488_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_456_fu_1488_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_457_fu_2111_p0() {
    mul_ln1118_457_fu_2111_p0 =  (sc_lv<8>) (zext_ln1116_99_fu_12420801_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_457_fu_2111_p2() {
    mul_ln1118_457_fu_2111_p2 = (!mul_ln1118_457_fu_2111_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_457_fu_2111_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_458_fu_1490_p0() {
    mul_ln1118_458_fu_1490_p0 =  (sc_lv<8>) (zext_ln1118_523_fu_12420858_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_458_fu_1490_p2() {
    mul_ln1118_458_fu_1490_p2 = (!mul_ln1118_458_fu_1490_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_458_fu_1490_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_459_fu_2296_p0() {
    mul_ln1118_459_fu_2296_p0 =  (sc_lv<8>) (zext_ln1118_2203_fu_12419714_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_459_fu_2296_p2() {
    mul_ln1118_459_fu_2296_p2 = (!mul_ln1118_459_fu_2296_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_459_fu_2296_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_45_fu_2831_p0() {
    mul_ln1118_45_fu_2831_p0 =  (sc_lv<8>) (zext_ln708_fu_12400604_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_45_fu_2831_p2() {
    mul_ln1118_45_fu_2831_p2 = (!mul_ln1118_45_fu_2831_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_45_fu_2831_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_460_fu_1492_p0() {
    mul_ln1118_460_fu_1492_p0 =  (sc_lv<8>) (zext_ln1118_605_fu_12426431_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_460_fu_1492_p2() {
    mul_ln1118_460_fu_1492_p2 = (!mul_ln1118_460_fu_1492_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_460_fu_1492_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_461_fu_1493_p0() {
    mul_ln1118_461_fu_1493_p0 =  (sc_lv<8>) (zext_ln1118_2233_fu_12420067_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_461_fu_1493_p2() {
    mul_ln1118_461_fu_1493_p2 = (!mul_ln1118_461_fu_1493_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_461_fu_1493_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_462_fu_1494_p0() {
    mul_ln1118_462_fu_1494_p0 =  (sc_lv<8>) (zext_ln1118_560_fu_12423921_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_462_fu_1494_p2() {
    mul_ln1118_462_fu_1494_p2 = (!mul_ln1118_462_fu_1494_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_462_fu_1494_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_463_fu_1495_p0() {
    mul_ln1118_463_fu_1495_p0 =  (sc_lv<8>) (zext_ln1118_505_fu_12420233_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_463_fu_1495_p2() {
    mul_ln1118_463_fu_1495_p2 = (!mul_ln1118_463_fu_1495_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_463_fu_1495_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_464_fu_1496_p0() {
    mul_ln1118_464_fu_1496_p0 =  (sc_lv<8>) (zext_ln1118_511_fu_12420404_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_464_fu_1496_p2() {
    mul_ln1118_464_fu_1496_p2 = (!mul_ln1118_464_fu_1496_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_464_fu_1496_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_465_fu_1845_p0() {
    mul_ln1118_465_fu_1845_p0 =  (sc_lv<8>) (zext_ln1116_107_fu_12424385_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_465_fu_1845_p2() {
    mul_ln1118_465_fu_1845_p2 = (!mul_ln1118_465_fu_1845_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_465_fu_1845_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_467_fu_3212_p0() {
    mul_ln1118_467_fu_3212_p0 =  (sc_lv<8>) (zext_ln1118_609_fu_12426469_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_467_fu_3212_p2() {
    mul_ln1118_467_fu_3212_p2 = (!mul_ln1118_467_fu_3212_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_467_fu_3212_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_468_fu_3213_p0() {
    mul_ln1118_468_fu_3213_p0 =  (sc_lv<8>) (mul_ln1118_468_fu_3213_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_468_fu_3213_p00() {
    mul_ln1118_468_fu_3213_p00 = esl_zext<15,8>(p_read36.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_468_fu_3213_p2() {
    mul_ln1118_468_fu_3213_p2 = (!mul_ln1118_468_fu_3213_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_468_fu_3213_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_469_fu_1848_p0() {
    mul_ln1118_469_fu_1848_p0 =  (sc_lv<8>) (zext_ln1118_2229_fu_12419985_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_469_fu_1848_p2() {
    mul_ln1118_469_fu_1848_p2 = (!mul_ln1118_469_fu_1848_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_469_fu_1848_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_46_fu_2210_p0() {
    mul_ln1118_46_fu_2210_p0 =  (sc_lv<8>) (zext_ln1118_87_fu_12400654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_46_fu_2210_p2() {
    mul_ln1118_46_fu_2210_p2 = (!mul_ln1118_46_fu_2210_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_46_fu_2210_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_470_fu_2518_p0() {
    mul_ln1118_470_fu_2518_p0 =  (sc_lv<8>) (mul_ln1118_470_fu_2518_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_470_fu_2518_p00() {
    mul_ln1118_470_fu_2518_p00 = esl_zext<13,8>(p_read38.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_470_fu_2518_p2() {
    mul_ln1118_470_fu_2518_p2 = (!mul_ln1118_470_fu_2518_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_470_fu_2518_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_471_fu_2067_p0() {
    mul_ln1118_471_fu_2067_p0 =  (sc_lv<8>) (zext_ln1118_2233_fu_12420067_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_471_fu_2067_p2() {
    mul_ln1118_471_fu_2067_p2 = (!mul_ln1118_471_fu_2067_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_471_fu_2067_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_472_fu_2989_p0() {
    mul_ln1118_472_fu_2989_p0 =  (sc_lv<8>) (zext_ln708_185_fu_12420215_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_472_fu_2989_p2() {
    mul_ln1118_472_fu_2989_p2 = (!mul_ln1118_472_fu_2989_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_472_fu_2989_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_473_fu_2510_p0() {
    mul_ln1118_473_fu_2510_p0 =  (sc_lv<8>) (zext_ln1116_92_fu_12420275_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_473_fu_2510_p2() {
    mul_ln1118_473_fu_2510_p2 = (!mul_ln1118_473_fu_2510_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_473_fu_2510_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_474_fu_1975_p0() {
    mul_ln1118_474_fu_1975_p0 =  (sc_lv<8>) (zext_ln1118_2262_fu_12420443_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_474_fu_1975_p2() {
    mul_ln1118_474_fu_1975_p2 = (!mul_ln1118_474_fu_1975_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_474_fu_1975_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_475_fu_2586_p0() {
    mul_ln1118_475_fu_2586_p0 =  (sc_lv<8>) (zext_ln1118_519_fu_12420637_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_475_fu_2586_p2() {
    mul_ln1118_475_fu_2586_p2 = (!mul_ln1118_475_fu_2586_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_475_fu_2586_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_476_fu_2446_p0() {
    mul_ln1118_476_fu_2446_p0 =  (sc_lv<8>) (mul_ln1118_476_fu_2446_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_476_fu_2446_p00() {
    mul_ln1118_476_fu_2446_p00 = esl_zext<14,8>(p_read53.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_476_fu_2446_p2() {
    mul_ln1118_476_fu_2446_p2 = (!mul_ln1118_476_fu_2446_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_476_fu_2446_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_477_fu_1855_p0() {
    mul_ln1118_477_fu_1855_p0 =  (sc_lv<8>) (zext_ln1116_139_fu_12431654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_477_fu_1855_p2() {
    mul_ln1118_477_fu_1855_p2 = (!mul_ln1118_477_fu_1855_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_477_fu_1855_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_478_fu_2889_p0() {
    mul_ln1118_478_fu_2889_p0 =  (sc_lv<8>) (zext_ln1118_524_fu_12420884_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_478_fu_2889_p2() {
    mul_ln1118_478_fu_2889_p2 = (!mul_ln1118_478_fu_2889_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_478_fu_2889_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_479_fu_2270_p0() {
    mul_ln1118_479_fu_2270_p0 =  (sc_lv<8>) (zext_ln708_189_fu_12420941_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_479_fu_2270_p2() {
    mul_ln1118_479_fu_2270_p2 = (!mul_ln1118_479_fu_2270_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_479_fu_2270_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_47_fu_2833_p0() {
    mul_ln1118_47_fu_2833_p0 =  (sc_lv<8>) (zext_ln708_25_fu_12402087_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_47_fu_2833_p2() {
    mul_ln1118_47_fu_2833_p2 = (!mul_ln1118_47_fu_2833_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_47_fu_2833_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_480_fu_3332_p0() {
    mul_ln1118_480_fu_3332_p0 =  (sc_lv<8>) (zext_ln1118_2299_fu_12421032_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_480_fu_3332_p2() {
    mul_ln1118_480_fu_3332_p2 = (!mul_ln1118_480_fu_3332_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_480_fu_3332_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_481_fu_2797_p0() {
    mul_ln1118_481_fu_2797_p0 =  (sc_lv<8>) (zext_ln1116_85_fu_12419775_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_481_fu_2797_p2() {
    mul_ln1118_481_fu_2797_p2 = (!mul_ln1118_481_fu_2797_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_481_fu_2797_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_482_fu_2278_p0() {
    mul_ln1118_482_fu_2278_p0 =  (sc_lv<8>) (zext_ln1118_609_fu_12426469_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_482_fu_2278_p2() {
    mul_ln1118_482_fu_2278_p2 = (!mul_ln1118_482_fu_2278_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_482_fu_2278_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_483_fu_2593_p0() {
    mul_ln1118_483_fu_2593_p0 =  (sc_lv<8>) (zext_ln1118_2233_fu_12420067_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_483_fu_2593_p2() {
    mul_ln1118_483_fu_2593_p2 = (!mul_ln1118_483_fu_2593_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_483_fu_2593_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_484_fu_2170_p0() {
    mul_ln1118_484_fu_2170_p0 =  (sc_lv<8>) (zext_ln1118_2514_fu_12426603_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_484_fu_2170_p2() {
    mul_ln1118_484_fu_2170_p2 = (!mul_ln1118_484_fu_2170_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_484_fu_2170_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_485_fu_1607_p0() {
    mul_ln1118_485_fu_1607_p0 =  (sc_lv<8>) (zext_ln1118_505_fu_12420233_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_485_fu_1607_p2() {
    mul_ln1118_485_fu_1607_p2 = (!mul_ln1118_485_fu_1607_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_485_fu_1607_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_486_fu_2022_p0() {
    mul_ln1118_486_fu_2022_p0 =  (sc_lv<8>) (zext_ln1118_519_fu_12420637_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_486_fu_2022_p2() {
    mul_ln1118_486_fu_2022_p2 = (!mul_ln1118_486_fu_2022_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_486_fu_2022_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_487_fu_1487_p0() {
    mul_ln1118_487_fu_1487_p0 =  (sc_lv<8>) (zext_ln1118_2280_fu_12420737_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_487_fu_1487_p2() {
    mul_ln1118_487_fu_1487_p2 = (!mul_ln1118_487_fu_1487_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_487_fu_1487_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_488_fu_2493_p0() {
    mul_ln1118_488_fu_2493_p0 =  (sc_lv<8>) (zext_ln1116_139_fu_12431654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_488_fu_2493_p2() {
    mul_ln1118_488_fu_2493_p2 = (!mul_ln1118_488_fu_2493_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_488_fu_2493_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_489_fu_3443_p0() {
    mul_ln1118_489_fu_3443_p0 =  (sc_lv<8>) (zext_ln1116_99_fu_12420801_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_489_fu_3443_p2() {
    mul_ln1118_489_fu_3443_p2 = (!mul_ln1118_489_fu_3443_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_489_fu_3443_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_48_fu_1591_p0() {
    mul_ln1118_48_fu_1591_p0 =  (sc_lv<8>) (zext_ln1116_8_fu_12400909_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_48_fu_1591_p2() {
    mul_ln1118_48_fu_1591_p2 = (!mul_ln1118_48_fu_1591_p0.read().is_01() || !ap_const_lv16_FFA8.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_48_fu_1591_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA8);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_490_fu_2401_p0() {
    mul_ln1118_490_fu_2401_p0 =  (sc_lv<8>) (zext_ln1118_585_fu_12424273_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_490_fu_2401_p2() {
    mul_ln1118_490_fu_2401_p2 = (!mul_ln1118_490_fu_2401_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_490_fu_2401_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_491_fu_3379_p0() {
    mul_ln1118_491_fu_3379_p0 =  (sc_lv<8>) (zext_ln1116_106_fu_12424296_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_491_fu_3379_p2() {
    mul_ln1118_491_fu_3379_p2 = (!mul_ln1118_491_fu_3379_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_491_fu_3379_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_492_fu_2309_p0() {
    mul_ln1118_492_fu_2309_p0 =  (sc_lv<8>) (mul_ln1118_492_fu_2309_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_492_fu_2309_p00() {
    mul_ln1118_492_fu_2309_p00 = esl_zext<13,8>(p_read62.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_492_fu_2309_p2() {
    mul_ln1118_492_fu_2309_p2 = (!mul_ln1118_492_fu_2309_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_492_fu_2309_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_493_fu_3315_p0() {
    mul_ln1118_493_fu_3315_p0 =  (sc_lv<8>) (zext_ln1116_101_fu_12421188_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_493_fu_3315_p2() {
    mul_ln1118_493_fu_3315_p2 = (!mul_ln1118_493_fu_3315_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_493_fu_3315_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_494_fu_2785_p0() {
    mul_ln1118_494_fu_2785_p0 =  (sc_lv<8>) (zext_ln1116_127_fu_12429057_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_494_fu_2785_p2() {
    mul_ln1118_494_fu_2785_p2 = (!mul_ln1118_494_fu_2785_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_494_fu_2785_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_495_fu_2787_p0() {
    mul_ln1118_495_fu_2787_p0 =  (sc_lv<8>) (zext_ln1116_100_fu_12421064_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_495_fu_2787_p2() {
    mul_ln1118_495_fu_2787_p2 = (!mul_ln1118_495_fu_2787_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_495_fu_2787_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_496_fu_1545_p0() {
    mul_ln1118_496_fu_1545_p0 =  (sc_lv<8>) (zext_ln708_255_fu_12421453_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_496_fu_1545_p2() {
    mul_ln1118_496_fu_1545_p2 = (!mul_ln1118_496_fu_1545_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_496_fu_1545_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_497_fu_2168_p0() {
    mul_ln1118_497_fu_2168_p0 =  (sc_lv<8>) (zext_ln1118_2251_fu_12420282_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_497_fu_2168_p2() {
    mul_ln1118_497_fu_2168_p2 = (!mul_ln1118_497_fu_2168_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_497_fu_2168_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_498_fu_1547_p0() {
    mul_ln1118_498_fu_1547_p0 =  (sc_lv<8>) (zext_ln1118_543_fu_12422392_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_498_fu_1547_p2() {
    mul_ln1118_498_fu_1547_p2 = (!mul_ln1118_498_fu_1547_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_498_fu_1547_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_499_fu_3414_p0() {
    mul_ln1118_499_fu_3414_p0 =  (sc_lv<8>) (zext_ln1116_129_fu_12429157_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_499_fu_3414_p2() {
    mul_ln1118_499_fu_3414_p2 = (!mul_ln1118_499_fu_3414_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_499_fu_3414_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_49_fu_1409_p0() {
    mul_ln1118_49_fu_1409_p0 =  (sc_lv<8>) (zext_ln1118_24_fu_12400970_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_49_fu_1409_p2() {
    mul_ln1118_49_fu_1409_p2 = (!mul_ln1118_49_fu_1409_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_49_fu_1409_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_500_fu_2793_p0() {
    mul_ln1118_500_fu_2793_p0 =  (sc_lv<8>) (zext_ln1118_511_fu_12420404_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_500_fu_2793_p2() {
    mul_ln1118_500_fu_2793_p2 = (!mul_ln1118_500_fu_2793_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_500_fu_2793_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_501_fu_3318_p0() {
    mul_ln1118_501_fu_3318_p0 =  (sc_lv<8>) (zext_ln1118_632_fu_12426794_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_501_fu_3318_p2() {
    mul_ln1118_501_fu_3318_p2 = (!mul_ln1118_501_fu_3318_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_501_fu_3318_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_502_fu_2173_p0() {
    mul_ln1118_502_fu_2173_p0 =  (sc_lv<8>) (zext_ln1118_517_fu_12420549_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_502_fu_2173_p2() {
    mul_ln1118_502_fu_2173_p2 = (!mul_ln1118_502_fu_2173_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_502_fu_2173_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_504_fu_3135_p0() {
    mul_ln1118_504_fu_3135_p0 =  (sc_lv<8>) (zext_ln1118_529_fu_12421070_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_504_fu_3135_p2() {
    mul_ln1118_504_fu_3135_p2 = (!mul_ln1118_504_fu_3135_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_504_fu_3135_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_505_fu_2176_p0() {
    mul_ln1118_505_fu_2176_p0 =  (sc_lv<8>) (zext_ln1118_654_fu_12427071_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_505_fu_2176_p2() {
    mul_ln1118_505_fu_2176_p2 = (!mul_ln1118_505_fu_2176_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_505_fu_2176_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_506_fu_2800_p0() {
    mul_ln1118_506_fu_2800_p0 =  (sc_lv<8>) (zext_ln708_255_fu_12421453_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_506_fu_2800_p2() {
    mul_ln1118_506_fu_2800_p2 = (!mul_ln1118_506_fu_2800_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_506_fu_2800_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_507_fu_2801_p0() {
    mul_ln1118_507_fu_2801_p0 =  (sc_lv<8>) (zext_ln1118_560_fu_12423921_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_507_fu_2801_p2() {
    mul_ln1118_507_fu_2801_p2 = (!mul_ln1118_507_fu_2801_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_507_fu_2801_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_508_fu_2802_p0() {
    mul_ln1118_508_fu_2802_p0 =  (sc_lv<8>) (zext_ln1118_519_fu_12420637_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_508_fu_2802_p2() {
    mul_ln1118_508_fu_2802_p2 = (!mul_ln1118_508_fu_2802_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_508_fu_2802_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_509_fu_1559_p0() {
    mul_ln1118_509_fu_1559_p0 =  (sc_lv<8>) (zext_ln1116_98_fu_12420725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_509_fu_1559_p2() {
    mul_ln1118_509_fu_1559_p2 = (!mul_ln1118_509_fu_1559_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_509_fu_1559_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_50_fu_2215_p0() {
    mul_ln1118_50_fu_2215_p0 =  (sc_lv<8>) (zext_ln1118_32_fu_12401125_p1.read());
}

}

