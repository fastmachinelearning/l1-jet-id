#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1225_fu_3037_p2() {
    mul_ln1118_1225_fu_3037_p2 = (!mul_ln1118_1225_fu_3037_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1225_fu_3037_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1226_fu_1877_p0() {
    mul_ln1118_1226_fu_1877_p0 =  (sc_lv<8>) (zext_ln1116_160_fu_12983509_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1226_fu_1877_p2() {
    mul_ln1118_1226_fu_1877_p2 = (!mul_ln1118_1226_fu_1877_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1226_fu_1877_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1227_fu_2356_p0() {
    mul_ln1118_1227_fu_2356_p0 =  (sc_lv<8>) (mul_ln1118_1227_fu_2356_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1227_fu_2356_p00() {
    mul_ln1118_1227_fu_2356_p00 = esl_zext<13,8>(p_read104.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1227_fu_2356_p2() {
    mul_ln1118_1227_fu_2356_p2 = (!mul_ln1118_1227_fu_2356_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1227_fu_2356_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1228_fu_3040_p0() {
    mul_ln1118_1228_fu_3040_p0 =  (sc_lv<8>) (zext_ln1116_176_fu_12989982_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1228_fu_3040_p2() {
    mul_ln1118_1228_fu_3040_p2 = (!mul_ln1118_1228_fu_3040_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1228_fu_3040_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1229_fu_1675_p0() {
    mul_ln1118_1229_fu_1675_p0 =  (sc_lv<8>) (zext_ln1118_1702_fu_12983632_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1229_fu_1675_p2() {
    mul_ln1118_1229_fu_1675_p2 = (!mul_ln1118_1229_fu_1675_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1229_fu_1675_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_122_fu_2701_p0() {
    mul_ln1118_122_fu_2701_p0 =  (sc_lv<8>) (zext_ln1116_16_fu_12926080_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_122_fu_2701_p2() {
    mul_ln1118_122_fu_2701_p2 = (!mul_ln1118_122_fu_2701_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_122_fu_2701_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1230_fu_2359_p0() {
    mul_ln1118_1230_fu_2359_p0 =  (sc_lv<8>) (zext_ln1116_162_fu_12983688_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1230_fu_2359_p2() {
    mul_ln1118_1230_fu_2359_p2 = (!mul_ln1118_1230_fu_2359_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1230_fu_2359_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1231_fu_1883_p0() {
    mul_ln1118_1231_fu_1883_p0 =  (sc_lv<8>) (zext_ln1116_178_fu_12990091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1231_fu_1883_p2() {
    mul_ln1118_1231_fu_1883_p2 = (!mul_ln1118_1231_fu_1883_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1231_fu_1883_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1232_fu_1884_p0() {
    mul_ln1118_1232_fu_1884_p0 =  (sc_lv<8>) (mul_ln1118_1232_fu_1884_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1232_fu_1884_p00() {
    mul_ln1118_1232_fu_1884_p00 = esl_zext<13,8>(p_read113.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1232_fu_1884_p2() {
    mul_ln1118_1232_fu_1884_p2 = (!mul_ln1118_1232_fu_1884_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1232_fu_1884_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1233_fu_1681_p0() {
    mul_ln1118_1233_fu_1681_p0 =  (sc_lv<8>) (zext_ln1118_1735_fu_12984215_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1233_fu_1681_p2() {
    mul_ln1118_1233_fu_1681_p2 = (!mul_ln1118_1233_fu_1681_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1233_fu_1681_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1234_fu_3048_p0() {
    mul_ln1118_1234_fu_3048_p0 =  (sc_lv<8>) (zext_ln1118_1816_fu_12986117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1234_fu_3048_p2() {
    mul_ln1118_1234_fu_3048_p2 = (!mul_ln1118_1234_fu_3048_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1234_fu_3048_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1235_fu_1820_p0() {
    mul_ln1118_1235_fu_1820_p0 =  (sc_lv<8>) (zext_ln1118_1869_fu_12987748_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1235_fu_1820_p2() {
    mul_ln1118_1235_fu_1820_p2 = (!mul_ln1118_1235_fu_1820_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1235_fu_1820_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1236_fu_1684_p0() {
    mul_ln1118_1236_fu_1684_p0 =  (sc_lv<8>) (zext_ln708_767_fu_12987811_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1236_fu_1684_p2() {
    mul_ln1118_1236_fu_1684_p2 = (!mul_ln1118_1236_fu_1684_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1236_fu_1684_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1237_fu_2573_p0() {
    mul_ln1118_1237_fu_2573_p0 =  (sc_lv<8>) (zext_ln1116_171_fu_12984524_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1237_fu_2573_p2() {
    mul_ln1118_1237_fu_2573_p2 = (!mul_ln1118_1237_fu_2573_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1237_fu_2573_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1238_fu_1891_p0() {
    mul_ln1118_1238_fu_1891_p0 =  (sc_lv<8>) (zext_ln1116_154_fu_12983331_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1238_fu_1891_p2() {
    mul_ln1118_1238_fu_1891_p2 = (!mul_ln1118_1238_fu_1891_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1238_fu_1891_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1239_fu_1418_p0() {
    mul_ln1118_1239_fu_1418_p0 =  (sc_lv<8>) (zext_ln1118_1943_fu_12990042_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1239_fu_1418_p2() {
    mul_ln1118_1239_fu_1418_p2 = (!mul_ln1118_1239_fu_1418_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1239_fu_1418_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_123_fu_2702_p0() {
    mul_ln1118_123_fu_2702_p0 =  (sc_lv<8>) (zext_ln1118_67_fu_12926300_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_123_fu_2702_p2() {
    mul_ln1118_123_fu_2702_p2 = (!mul_ln1118_123_fu_2702_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_123_fu_2702_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1240_fu_3058_p0() {
    mul_ln1118_1240_fu_3058_p0 =  (sc_lv<8>) (zext_ln1118_1712_fu_12983851_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1240_fu_3058_p2() {
    mul_ln1118_1240_fu_3058_p2 = (!mul_ln1118_1240_fu_3058_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1240_fu_3058_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1241_fu_2376_p0() {
    mul_ln1118_1241_fu_2376_p0 =  (sc_lv<8>) (zext_ln1118_1775_fu_12985134_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1241_fu_2376_p2() {
    mul_ln1118_1241_fu_2376_p2 = (!mul_ln1118_1241_fu_2376_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1241_fu_2376_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1242_fu_1694_p0() {
    mul_ln1118_1242_fu_1694_p0 =  (sc_lv<8>) (zext_ln708_766_fu_12987672_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1242_fu_1694_p2() {
    mul_ln1118_1242_fu_1694_p2 = (!mul_ln1118_1242_fu_1694_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1242_fu_1694_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1243_fu_3061_p0() {
    mul_ln1118_1243_fu_3061_p0 =  (sc_lv<8>) (zext_ln1118_1739_fu_12984284_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1243_fu_3061_p2() {
    mul_ln1118_1243_fu_3061_p2 = (!mul_ln1118_1243_fu_3061_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1243_fu_3061_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1244_fu_3062_p0() {
    mul_ln1118_1244_fu_3062_p0 =  (sc_lv<8>) (zext_ln1118_1742_fu_12984345_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1244_fu_3062_p2() {
    mul_ln1118_1244_fu_3062_p2 = (!mul_ln1118_1244_fu_3062_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_1244_fu_3062_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1245_fu_1697_p0() {
    mul_ln1118_1245_fu_1697_p0 =  (sc_lv<8>) (zext_ln1116_154_fu_12983331_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1245_fu_1697_p2() {
    mul_ln1118_1245_fu_1697_p2 = (!mul_ln1118_1245_fu_1697_p0.read().is_01() || !ap_const_lv16_FFA8.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1245_fu_1697_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA8);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1246_fu_1821_p0() {
    mul_ln1118_1246_fu_1821_p0 =  (sc_lv<8>) (zext_ln1118_1690_fu_12983391_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1246_fu_1821_p2() {
    mul_ln1118_1246_fu_1821_p2 = (!mul_ln1118_1246_fu_1821_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1246_fu_1821_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1247_fu_2627_p0() {
    mul_ln1118_1247_fu_2627_p0 =  (sc_lv<8>) (zext_ln1116_176_fu_12989982_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1247_fu_2627_p2() {
    mul_ln1118_1247_fu_2627_p2 = (!mul_ln1118_1247_fu_2627_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1247_fu_2627_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1248_fu_1823_p0() {
    mul_ln1118_1248_fu_1823_p0 =  (sc_lv<8>) (zext_ln1118_1848_fu_12987269_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1248_fu_1823_p2() {
    mul_ln1118_1248_fu_1823_p2 = (!mul_ln1118_1248_fu_1823_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1248_fu_1823_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1249_fu_2629_p0() {
    mul_ln1118_1249_fu_2629_p0 =  (sc_lv<8>) (zext_ln1116_173_fu_12987324_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1249_fu_2629_p2() {
    mul_ln1118_1249_fu_2629_p2 = (!mul_ln1118_1249_fu_2629_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1249_fu_2629_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_124_fu_2020_p0() {
    mul_ln1118_124_fu_2020_p0 =  (sc_lv<8>) (zext_ln1116_17_fu_12926331_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_124_fu_2020_p2() {
    mul_ln1118_124_fu_2020_p2 = (!mul_ln1118_124_fu_2020_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_124_fu_2020_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1250_fu_2630_p0() {
    mul_ln1118_1250_fu_2630_p0 =  (sc_lv<8>) (zext_ln1116_168_fu_12983981_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1250_fu_2630_p2() {
    mul_ln1118_1250_fu_2630_p2 = (!mul_ln1118_1250_fu_2630_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1250_fu_2630_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1251_fu_1826_p0() {
    mul_ln1118_1251_fu_1826_p0 =  (sc_lv<8>) (zext_ln1116_194_fu_12995126_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1251_fu_1826_p2() {
    mul_ln1118_1251_fu_1826_p2 = (!mul_ln1118_1251_fu_1826_p0.read().is_01() || !ap_const_lv16_FF96.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1251_fu_1826_p0.read()) * sc_bigint<16>(ap_const_lv16_FF96);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1252_fu_3437_p0() {
    mul_ln1118_1252_fu_3437_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12984178_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1252_fu_3437_p2() {
    mul_ln1118_1252_fu_3437_p2 = (!mul_ln1118_1252_fu_3437_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1252_fu_3437_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1253_fu_2999_p0() {
    mul_ln1118_1253_fu_2999_p0 =  (sc_lv<8>) (mul_ln1118_1253_fu_2999_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1253_fu_2999_p00() {
    mul_ln1118_1253_fu_2999_p00 = esl_zext<16,8>(p_read125.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1253_fu_2999_p2() {
    mul_ln1118_1253_fu_2999_p2 = (!mul_ln1118_1253_fu_2999_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1253_fu_2999_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1254_fu_3074_p0() {
    mul_ln1118_1254_fu_3074_p0 =  (sc_lv<8>) (zext_ln1118_1754_fu_12984597_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1254_fu_3074_p2() {
    mul_ln1118_1254_fu_3074_p2 = (!mul_ln1118_1254_fu_3074_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1254_fu_3074_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1255_fu_1831_p0() {
    mul_ln1118_1255_fu_1831_p0 =  (sc_lv<8>) (zext_ln1118_1691_fu_12983401_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1255_fu_1831_p2() {
    mul_ln1118_1255_fu_1831_p2 = (!mul_ln1118_1255_fu_1831_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1255_fu_1831_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1256_fu_3076_p0() {
    mul_ln1118_1256_fu_3076_p0 =  (sc_lv<8>) (zext_ln1116_186_fu_12992599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1256_fu_3076_p2() {
    mul_ln1118_1256_fu_3076_p2 = (!mul_ln1118_1256_fu_3076_p0.read().is_01() || !ap_const_lv16_FF8B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1256_fu_3076_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1257_fu_3077_p0() {
    mul_ln1118_1257_fu_3077_p0 =  (sc_lv<8>) (zext_ln1118_1703_fu_12983640_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1257_fu_3077_p2() {
    mul_ln1118_1257_fu_3077_p2 = (!mul_ln1118_1257_fu_3077_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1257_fu_3077_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1258_fu_1834_p0() {
    mul_ln1118_1258_fu_1834_p0 =  (sc_lv<8>) (zext_ln1116_180_fu_12990161_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1258_fu_1834_p2() {
    mul_ln1118_1258_fu_1834_p2 = (!mul_ln1118_1258_fu_1834_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1258_fu_1834_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1259_fu_2940_p0() {
    mul_ln1118_1259_fu_2940_p0 =  (sc_lv<8>) (zext_ln1118_1862_fu_12987547_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1259_fu_2940_p2() {
    mul_ln1118_1259_fu_2940_p2 = (!mul_ln1118_1259_fu_2940_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1259_fu_2940_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_125_fu_1543_p0() {
    mul_ln1118_125_fu_1543_p0 =  (sc_lv<8>) (zext_ln1118_72_fu_12926405_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_125_fu_1543_p2() {
    mul_ln1118_125_fu_1543_p2 = (!mul_ln1118_125_fu_1543_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_125_fu_1543_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1260_fu_3080_p0() {
    mul_ln1118_1260_fu_3080_p0 =  (sc_lv<8>) (zext_ln1116_194_fu_12995126_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1260_fu_3080_p2() {
    mul_ln1118_1260_fu_3080_p2 = (!mul_ln1118_1260_fu_3080_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1260_fu_3080_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1261_fu_2354_p0() {
    mul_ln1118_1261_fu_2354_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12984178_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1261_fu_2354_p2() {
    mul_ln1118_1261_fu_2354_p2 = (!mul_ln1118_1261_fu_2354_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1261_fu_2354_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1262_fu_1839_p0() {
    mul_ln1118_1262_fu_1839_p0 =  (sc_lv<8>) (zext_ln1116_170_fu_12984429_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1262_fu_1839_p2() {
    mul_ln1118_1262_fu_1839_p2 = (!mul_ln1118_1262_fu_1839_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1262_fu_1839_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1263_fu_1842_p0() {
    mul_ln1118_1263_fu_1842_p0 =  (sc_lv<8>) (zext_ln1118_1754_fu_12984597_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1263_fu_1842_p2() {
    mul_ln1118_1263_fu_1842_p2 = (!mul_ln1118_1263_fu_1842_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1263_fu_1842_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1264_fu_1843_p0() {
    mul_ln1118_1264_fu_1843_p0 =  (sc_lv<8>) (zext_ln1116_157_fu_12983424_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1264_fu_1843_p2() {
    mul_ln1118_1264_fu_1843_p2 = (!mul_ln1118_1264_fu_1843_p0.read().is_01() || !ap_const_lv16_FF97.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1264_fu_1843_p0.read()) * sc_bigint<16>(ap_const_lv16_FF97);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1265_fu_1771_p0() {
    mul_ln1118_1265_fu_1771_p0 =  (sc_lv<8>) (zext_ln1118_1841_fu_12987092_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1265_fu_1771_p2() {
    mul_ln1118_1265_fu_1771_p2 = (!mul_ln1118_1265_fu_1771_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1265_fu_1771_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1266_fu_1845_p0() {
    mul_ln1118_1266_fu_1845_p0 =  (sc_lv<8>) (zext_ln1118_1696_fu_12983517_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1266_fu_1845_p2() {
    mul_ln1118_1266_fu_1845_p2 = (!mul_ln1118_1266_fu_1845_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1266_fu_1845_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1267_fu_1846_p0() {
    mul_ln1118_1267_fu_1846_p0 =  (sc_lv<8>) (zext_ln1116_186_fu_12992599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1267_fu_1846_p2() {
    mul_ln1118_1267_fu_1846_p2 = (!mul_ln1118_1267_fu_1846_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1267_fu_1846_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1268_fu_2867_p0() {
    mul_ln1118_1268_fu_2867_p0 =  (sc_lv<8>) (zext_ln1116_162_fu_12983688_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1268_fu_2867_p2() {
    mul_ln1118_1268_fu_2867_p2 = (!mul_ln1118_1268_fu_2867_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1268_fu_2867_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1269_fu_2734_p0() {
    mul_ln1118_1269_fu_2734_p0 =  (sc_lv<8>) (zext_ln1116_173_fu_12987324_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1269_fu_2734_p2() {
    mul_ln1118_1269_fu_2734_p2 = (!mul_ln1118_1269_fu_2734_p0.read().is_01() || !ap_const_lv16_FFAA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1269_fu_2734_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_126_fu_2910_p0() {
    mul_ln1118_126_fu_2910_p0 =  (sc_lv<8>) (zext_ln1116_18_fu_12926426_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_126_fu_2910_p2() {
    mul_ln1118_126_fu_2910_p2 = (!mul_ln1118_126_fu_2910_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_126_fu_2910_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1270_fu_1587_p0() {
    mul_ln1118_1270_fu_1587_p0 =  (sc_lv<8>) (zext_ln1118_1719_fu_12983938_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1270_fu_1587_p2() {
    mul_ln1118_1270_fu_1587_p2 = (!mul_ln1118_1270_fu_1587_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1270_fu_1587_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1271_fu_2862_p0() {
    mul_ln1118_1271_fu_2862_p0 =  (sc_lv<8>) (zext_ln1116_188_fu_12993002_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1271_fu_2862_p2() {
    mul_ln1118_1271_fu_2862_p2 = (!mul_ln1118_1271_fu_2862_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1271_fu_2862_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1272_fu_2391_p0() {
    mul_ln1118_1272_fu_2391_p0 =  (sc_lv<8>) (zext_ln1118_1746_fu_12984436_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1272_fu_2391_p2() {
    mul_ln1118_1272_fu_2391_p2 = (!mul_ln1118_1272_fu_2391_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1272_fu_2391_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1273_fu_3159_p0() {
    mul_ln1118_1273_fu_3159_p0 =  (sc_lv<8>) (zext_ln708_767_fu_12987811_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1273_fu_3159_p2() {
    mul_ln1118_1273_fu_3159_p2 = (!mul_ln1118_1273_fu_3159_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1273_fu_3159_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1274_fu_3195_p0() {
    mul_ln1118_1274_fu_3195_p0 =  (sc_lv<8>) (zext_ln1118_1690_fu_12983391_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1274_fu_3195_p2() {
    mul_ln1118_1274_fu_3195_p2 = (!mul_ln1118_1274_fu_3195_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1274_fu_3195_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1275_fu_1915_p0() {
    mul_ln1118_1275_fu_1915_p0 =  (sc_lv<8>) (zext_ln1116_160_fu_12983509_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1275_fu_1915_p2() {
    mul_ln1118_1275_fu_1915_p2 = (!mul_ln1118_1275_fu_1915_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1275_fu_1915_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1276_fu_1613_p0() {
    mul_ln1118_1276_fu_1613_p0 =  (sc_lv<8>) (zext_ln1118_1701_fu_12983606_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1276_fu_1613_p2() {
    mul_ln1118_1276_fu_1613_p2 = (!mul_ln1118_1276_fu_1613_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1276_fu_1613_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1277_fu_2381_p0() {
    mul_ln1118_1277_fu_2381_p0 =  (sc_lv<8>) (zext_ln708_788_fu_12990009_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1277_fu_2381_p2() {
    mul_ln1118_1277_fu_2381_p2 = (!mul_ln1118_1277_fu_2381_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1277_fu_2381_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1278_fu_1910_p0() {
    mul_ln1118_1278_fu_1910_p0 =  (sc_lv<8>) (zext_ln1118_1848_fu_12987269_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1278_fu_1910_p2() {
    mul_ln1118_1278_fu_1910_p2 = (!mul_ln1118_1278_fu_1910_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1278_fu_1910_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1279_fu_1439_p0() {
    mul_ln1118_1279_fu_1439_p0 =  (sc_lv<8>) (zext_ln1118_1945_fu_12990097_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1279_fu_1439_p2() {
    mul_ln1118_1279_fu_1439_p2 = (!mul_ln1118_1279_fu_1439_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1279_fu_1439_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_127_fu_3389_p0() {
    mul_ln1118_127_fu_3389_p0 =  (sc_lv<8>) (zext_ln1118_6_fu_12925150_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_127_fu_3389_p2() {
    mul_ln1118_127_fu_3389_p2 = (!mul_ln1118_127_fu_3389_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_127_fu_3389_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1280_fu_2412_p0() {
    mul_ln1118_1280_fu_2412_p0 =  (sc_lv<8>) (zext_ln1118_1728_fu_12984086_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1280_fu_2412_p2() {
    mul_ln1118_1280_fu_2412_p2 = (!mul_ln1118_1280_fu_2412_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1280_fu_2412_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1281_fu_3042_p0() {
    mul_ln1118_1281_fu_3042_p0 =  (sc_lv<8>) (zext_ln1116_153_fu_12983234_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1281_fu_3042_p2() {
    mul_ln1118_1281_fu_3042_p2 = (!mul_ln1118_1281_fu_3042_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1281_fu_3042_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1282_fu_2571_p0() {
    mul_ln1118_1282_fu_2571_p0 =  (sc_lv<8>) (zext_ln1118_1690_fu_12983391_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1282_fu_2571_p2() {
    mul_ln1118_1282_fu_2571_p2 = (!mul_ln1118_1282_fu_2571_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1282_fu_2571_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1283_fu_2269_p0() {
    mul_ln1118_1283_fu_2269_p0 =  (sc_lv<8>) (zext_ln1116_157_fu_12983424_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1283_fu_2269_p2() {
    mul_ln1118_1283_fu_2269_p2 = (!mul_ln1118_1283_fu_2269_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1283_fu_2269_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1284_fu_3206_p0() {
    mul_ln1118_1284_fu_3206_p0 =  (sc_lv<8>) (zext_ln1118_1841_fu_12987092_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1284_fu_3206_p2() {
    mul_ln1118_1284_fu_3206_p2 = (!mul_ln1118_1284_fu_3206_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1284_fu_3206_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1285_fu_2904_p0() {
    mul_ln1118_1285_fu_2904_p0 =  (sc_lv<8>) (zext_ln1116_176_fu_12989982_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1285_fu_2904_p2() {
    mul_ln1118_1285_fu_2904_p2 = (!mul_ln1118_1285_fu_2904_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1285_fu_2904_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1286_fu_2602_p0() {
    mul_ln1118_1286_fu_2602_p0 =  (sc_lv<8>) (zext_ln1118_1702_fu_12983632_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1286_fu_2602_p2() {
    mul_ln1118_1286_fu_2602_p2 = (!mul_ln1118_1286_fu_2602_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1286_fu_2602_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1287_fu_2638_p0() {
    mul_ln1118_1287_fu_2638_p0 =  (sc_lv<8>) (zext_ln1116_164_fu_12983745_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1287_fu_2638_p2() {
    mul_ln1118_1287_fu_2638_p2 = (!mul_ln1118_1287_fu_2638_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1287_fu_2638_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1288_fu_1660_p0() {
    mul_ln1118_1288_fu_1660_p0 =  (sc_lv<8>) (zext_ln1118_1710_fu_12983810_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1288_fu_1660_p2() {
    mul_ln1118_1288_fu_1660_p2 = (!mul_ln1118_1288_fu_1660_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1288_fu_1660_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1289_fu_2597_p0() {
    mul_ln1118_1289_fu_2597_p0 =  (sc_lv<8>) (zext_ln1116_166_fu_12983904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1289_fu_2597_p2() {
    mul_ln1118_1289_fu_2597_p2 = (!mul_ln1118_1289_fu_2597_p0.read().is_01() || !ap_const_lv16_FF9A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1289_fu_2597_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_128_fu_2025_p0() {
    mul_ln1118_128_fu_2025_p0 =  (sc_lv<8>) (zext_ln1116_4_fu_12925326_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_128_fu_2025_p2() {
    mul_ln1118_128_fu_2025_p2 = (!mul_ln1118_128_fu_2025_p0.read().is_01() || !ap_const_lv16_FF8B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_128_fu_2025_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1290_fu_1788_p0() {
    mul_ln1118_1290_fu_1788_p0 =  (sc_lv<8>) (zext_ln1118_1722_fu_12983987_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1290_fu_1788_p2() {
    mul_ln1118_1290_fu_1788_p2 = (!mul_ln1118_1290_fu_1788_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1290_fu_1788_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1291_fu_2121_p0() {
    mul_ln1118_1291_fu_2121_p0 =  (sc_lv<8>) (zext_ln1118_2049_fu_12994043_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1291_fu_2121_p2() {
    mul_ln1118_1291_fu_2121_p2 = (!mul_ln1118_1291_fu_2121_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1291_fu_2121_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1292_fu_1819_p0() {
    mul_ln1118_1292_fu_1819_p0 =  (sc_lv<8>) (zext_ln1118_1752_fu_12984536_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1292_fu_1819_p2() {
    mul_ln1118_1292_fu_1819_p2 = (!mul_ln1118_1292_fu_1819_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1292_fu_1819_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1293_fu_2454_p0() {
    mul_ln1118_1293_fu_2454_p0 =  (sc_lv<8>) (zext_ln708_716_fu_12983592_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1293_fu_2454_p2() {
    mul_ln1118_1293_fu_2454_p2 = (!mul_ln1118_1293_fu_2454_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1293_fu_2454_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1294_fu_3391_p0() {
    mul_ln1118_1294_fu_3391_p0 =  (sc_lv<8>) (zext_ln1118_1945_fu_12990097_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1294_fu_3391_p2() {
    mul_ln1118_1294_fu_3391_p2 = (!mul_ln1118_1294_fu_3391_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1294_fu_3391_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1295_fu_3089_p0() {
    mul_ln1118_1295_fu_3089_p0 =  (sc_lv<8>) (zext_ln1118_1717_fu_12983912_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1295_fu_3089_p2() {
    mul_ln1118_1295_fu_3089_p2 = (!mul_ln1118_1295_fu_3089_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1295_fu_3089_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1296_fu_2618_p0() {
    mul_ln1118_1296_fu_2618_p0 =  (sc_lv<8>) (zext_ln1118_1770_fu_12985015_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1296_fu_2618_p2() {
    mul_ln1118_1296_fu_2618_p2 = (!mul_ln1118_1296_fu_2618_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1296_fu_2618_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1297_fu_3386_p0() {
    mul_ln1118_1297_fu_3386_p0 =  (sc_lv<8>) (zext_ln1118_1724_fu_12984026_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1297_fu_3386_p2() {
    mul_ln1118_1297_fu_3386_p2 = (!mul_ln1118_1297_fu_3386_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1297_fu_3386_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1298_fu_2915_p0() {
    mul_ln1118_1298_fu_2915_p0 =  (sc_lv<8>) (zext_ln1118_1729_fu_12984096_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1298_fu_2915_p2() {
    mul_ln1118_1298_fu_2915_p2 = (!mul_ln1118_1298_fu_2915_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1298_fu_2915_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1299_fu_2444_p0() {
    mul_ln1118_1299_fu_2444_p0 =  (sc_lv<8>) (zext_ln1118_1775_fu_12985134_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1299_fu_2444_p2() {
    mul_ln1118_1299_fu_2444_p2 = (!mul_ln1118_1299_fu_2444_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1299_fu_2444_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_129_fu_3393_p0() {
    mul_ln1118_129_fu_3393_p0 =  (sc_lv<8>) (zext_ln1118_22_fu_12925464_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_129_fu_3393_p2() {
    mul_ln1118_129_fu_3393_p2 = (!mul_ln1118_129_fu_3393_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_129_fu_3393_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1300_fu_2142_p0() {
    mul_ln1118_1300_fu_2142_p0 =  (sc_lv<8>) (zext_ln1118_1734_fu_12984196_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1300_fu_2142_p2() {
    mul_ln1118_1300_fu_2142_p2 = (!mul_ln1118_1300_fu_2142_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1300_fu_2142_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1301_fu_1671_p0() {
    mul_ln1118_1301_fu_1671_p0 =  (sc_lv<8>) (zext_ln1118_1739_fu_12984284_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1301_fu_1671_p2() {
    mul_ln1118_1301_fu_1671_p2 = (!mul_ln1118_1301_fu_1671_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1301_fu_1671_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1302_fu_2777_p0() {
    mul_ln1118_1302_fu_2777_p0 =  (sc_lv<8>) (zext_ln1118_1743_fu_12984350_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1302_fu_2777_p2() {
    mul_ln1118_1302_fu_2777_p2 = (!mul_ln1118_1302_fu_2777_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1302_fu_2777_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1303_fu_2306_p0() {
    mul_ln1118_1303_fu_2306_p0 =  (sc_lv<8>) (zext_ln1118_1745_fu_12984407_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1303_fu_2306_p2() {
    mul_ln1118_1303_fu_2306_p2 = (!mul_ln1118_1303_fu_2306_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1303_fu_2306_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1304_fu_2941_p0() {
    mul_ln1118_1304_fu_2941_p0 =  (sc_lv<8>) (mult_3198_V_fu_12986926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1304_fu_2941_p2() {
    mul_ln1118_1304_fu_2941_p2 = (!mul_ln1118_1304_fu_2941_p0.read().is_01() || !ap_const_lv16_FF8E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1304_fu_2941_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1305_fu_2808_p0() {
    mul_ln1118_1305_fu_2808_p0 =  (sc_lv<8>) (zext_ln1116_189_fu_12994790_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1305_fu_2808_p2() {
    mul_ln1118_1305_fu_2808_p2 = (!mul_ln1118_1305_fu_2808_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1305_fu_2808_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1306_fu_2225_p0() {
    mul_ln1118_1306_fu_2225_p0 =  (sc_lv<8>) (zext_ln1116_153_fu_12983234_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1306_fu_2225_p2() {
    mul_ln1118_1306_fu_2225_p2 = (!mul_ln1118_1306_fu_2225_p0.read().is_01() || !ap_const_lv16_FFAA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1306_fu_2225_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1307_fu_2936_p0() {
    mul_ln1118_1307_fu_2936_p0 =  (sc_lv<8>) (zext_ln1118_1684_fu_12983272_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1307_fu_2936_p2() {
    mul_ln1118_1307_fu_2936_p2 = (!mul_ln1118_1307_fu_2936_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1307_fu_2936_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1308_fu_2163_p0() {
    mul_ln1118_1308_fu_2163_p0 =  (sc_lv<8>) (zext_ln1116_156_fu_12983383_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1308_fu_2163_p2() {
    mul_ln1118_1308_fu_2163_p2 = (!mul_ln1118_1308_fu_2163_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1308_fu_2163_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1309_fu_2281_p0() {
    mul_ln1118_1309_fu_2281_p0 =  (sc_lv<8>) (zext_ln708_724_fu_12984270_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1309_fu_2281_p2() {
    mul_ln1118_1309_fu_2281_p2 = (!mul_ln1118_1309_fu_2281_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1309_fu_2281_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_130_fu_2028_p0() {
    mul_ln1118_130_fu_2028_p0 =  (sc_lv<8>) (zext_ln1118_24_fu_12925508_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_130_fu_2028_p2() {
    mul_ln1118_130_fu_2028_p2 = (!mul_ln1118_130_fu_2028_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_130_fu_2028_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1310_fu_2634_p0() {
    mul_ln1118_1310_fu_2634_p0 =  (sc_lv<8>) (zext_ln1116_153_fu_12983234_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1310_fu_2634_p2() {
    mul_ln1118_1310_fu_2634_p2 = (!mul_ln1118_1310_fu_2634_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1310_fu_2634_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1311_fu_1953_p0() {
    mul_ln1118_1311_fu_1953_p0 =  (sc_lv<8>) (zext_ln1116_156_fu_12983383_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1311_fu_1953_p2() {
    mul_ln1118_1311_fu_1953_p2 = (!mul_ln1118_1311_fu_1953_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1311_fu_1953_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1312_fu_1954_p0() {
    mul_ln1118_1312_fu_1954_p0 =  (sc_lv<8>) (zext_ln1118_1701_fu_12983606_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1312_fu_1954_p2() {
    mul_ln1118_1312_fu_1954_p2 = (!mul_ln1118_1312_fu_1954_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1312_fu_1954_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1313_fu_1955_p0() {
    mul_ln1118_1313_fu_1955_p0 =  (sc_lv<8>) (zext_ln1116_161_fu_12983627_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1313_fu_1955_p2() {
    mul_ln1118_1313_fu_1955_p2 = (!mul_ln1118_1313_fu_1955_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1313_fu_1955_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1314_fu_2161_p0() {
    mul_ln1118_1314_fu_2161_p0 =  (sc_lv<8>) (zext_ln1116_162_fu_12983688_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1314_fu_2161_p2() {
    mul_ln1118_1314_fu_2161_p2 = (!mul_ln1118_1314_fu_2161_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1314_fu_2161_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1315_fu_1479_p0() {
    mul_ln1118_1315_fu_1479_p0 =  (sc_lv<8>) (zext_ln1116_164_fu_12983745_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1315_fu_1479_p2() {
    mul_ln1118_1315_fu_1479_p2 = (!mul_ln1118_1315_fu_1479_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1315_fu_1479_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1316_fu_1480_p0() {
    mul_ln1118_1316_fu_1480_p0 =  (sc_lv<8>) (zext_ln1118_1718_fu_12983918_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1316_fu_1480_p2() {
    mul_ln1118_1316_fu_1480_p2 = (!mul_ln1118_1316_fu_1480_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1316_fu_1480_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1317_fu_3052_p0() {
    mul_ln1118_1317_fu_3052_p0 =  (sc_lv<8>) (zext_ln1116_181_fu_12990182_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1317_fu_3052_p2() {
    mul_ln1118_1317_fu_3052_p2 = (!mul_ln1118_1317_fu_3052_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1317_fu_3052_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1318_fu_2165_p0() {
    mul_ln1118_1318_fu_2165_p0 =  (sc_lv<8>) (zext_ln1116_194_fu_12995126_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1318_fu_2165_p2() {
    mul_ln1118_1318_fu_2165_p2 = (!mul_ln1118_1318_fu_2165_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1318_fu_2165_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1319_fu_3328_p0() {
    mul_ln1118_1319_fu_3328_p0 =  (sc_lv<8>) (zext_ln1116_184_fu_12990328_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1319_fu_3328_p2() {
    mul_ln1118_1319_fu_3328_p2 = (!mul_ln1118_1319_fu_3328_p0.read().is_01() || !ap_const_lv16_FF9A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1319_fu_3328_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_131_fu_2712_p0() {
    mul_ln1118_131_fu_2712_p0 =  (sc_lv<8>) (zext_ln1116_9_fu_12925590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_131_fu_2712_p2() {
    mul_ln1118_131_fu_2712_p2 = (!mul_ln1118_131_fu_2712_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_131_fu_2712_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1320_fu_3329_p0() {
    mul_ln1118_1320_fu_3329_p0 =  (sc_lv<8>) (zext_ln1116_195_fu_12995232_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1320_fu_3329_p2() {
    mul_ln1118_1320_fu_3329_p2 = (!mul_ln1118_1320_fu_3329_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1320_fu_3329_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1321_fu_1965_p0() {
    mul_ln1118_1321_fu_1965_p0 =  (sc_lv<8>) (zext_ln1116_170_fu_12984429_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1321_fu_1965_p2() {
    mul_ln1118_1321_fu_1965_p2 = (!mul_ln1118_1321_fu_1965_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1321_fu_1965_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1322_fu_2649_p0() {
    mul_ln1118_1322_fu_2649_p0 =  (sc_lv<8>) (zext_ln708_767_fu_12987811_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1322_fu_2649_p2() {
    mul_ln1118_1322_fu_2649_p2 = (!mul_ln1118_1322_fu_2649_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1322_fu_2649_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1323_fu_3266_p0() {
    mul_ln1118_1323_fu_3266_p0 =  (sc_lv<8>) (zext_ln1118_1683_fu_12983248_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1323_fu_3266_p2() {
    mul_ln1118_1323_fu_3266_p2 = (!mul_ln1118_1323_fu_3266_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1323_fu_3266_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1324_fu_2857_p0() {
    mul_ln1118_1324_fu_2857_p0 =  (sc_lv<8>) (mul_ln1118_1324_fu_2857_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1324_fu_2857_p00() {
    mul_ln1118_1324_fu_2857_p00 = esl_zext<13,8>(p_read99.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1324_fu_2857_p2() {
    mul_ln1118_1324_fu_2857_p2 = (!mul_ln1118_1324_fu_2857_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1324_fu_2857_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1325_fu_1970_p0() {
    mul_ln1118_1325_fu_1970_p0 =  (sc_lv<8>) (zext_ln1118_1841_fu_12987092_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1325_fu_1970_p2() {
    mul_ln1118_1325_fu_1970_p2 = (!mul_ln1118_1325_fu_1970_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1325_fu_1970_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1326_fu_3337_p0() {
    mul_ln1118_1326_fu_3337_p0 =  (sc_lv<8>) (zext_ln1118_1937_fu_12989920_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1326_fu_3337_p2() {
    mul_ln1118_1326_fu_3337_p2 = (!mul_ln1118_1326_fu_3337_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1326_fu_3337_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1327_fu_3338_p0() {
    mul_ln1118_1327_fu_3338_p0 =  (sc_lv<8>) (zext_ln1118_1724_fu_12984026_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1327_fu_3338_p2() {
    mul_ln1118_1327_fu_3338_p2 = (!mul_ln1118_1327_fu_3338_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1327_fu_3338_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1328_fu_2656_p0() {
    mul_ln1118_1328_fu_2656_p0 =  (sc_lv<8>) (zext_ln1118_1733_fu_12984189_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1328_fu_2656_p2() {
    mul_ln1118_1328_fu_2656_p2 = (!mul_ln1118_1328_fu_2656_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1328_fu_2656_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1329_fu_3340_p0() {
    mul_ln1118_1329_fu_3340_p0 =  (sc_lv<8>) (zext_ln1118_1743_fu_12984350_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1329_fu_3340_p2() {
    mul_ln1118_1329_fu_3340_p2 = (!mul_ln1118_1329_fu_3340_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1329_fu_3340_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_132_fu_3396_p0() {
    mul_ln1118_132_fu_3396_p0 =  (sc_lv<8>) (zext_ln1118_33_fu_12925712_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_132_fu_3396_p2() {
    mul_ln1118_132_fu_3396_p2 = (!mul_ln1118_132_fu_3396_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_132_fu_3396_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1330_fu_1497_p0() {
    mul_ln1118_1330_fu_1497_p0 =  (sc_lv<8>) (zext_ln1118_1871_fu_12987760_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1330_fu_1497_p2() {
    mul_ln1118_1330_fu_1497_p2 = (!mul_ln1118_1330_fu_1497_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1330_fu_1497_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_133_fu_2031_p0() {
    mul_ln1118_133_fu_2031_p0 =  (sc_lv<8>) (zext_ln1118_91_fu_12926891_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_133_fu_2031_p2() {
    mul_ln1118_133_fu_2031_p2 = (!mul_ln1118_133_fu_2031_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_133_fu_2031_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_134_fu_3399_p0() {
    mul_ln1118_134_fu_3399_p0 =  (sc_lv<8>) (zext_ln1118_98_fu_12927036_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_134_fu_3399_p2() {
    mul_ln1118_134_fu_3399_p2 = (!mul_ln1118_134_fu_3399_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_134_fu_3399_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_135_fu_2717_p0() {
    mul_ln1118_135_fu_2717_p0 =  (sc_lv<8>) (zext_ln1118_62_fu_12926186_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_135_fu_2717_p2() {
    mul_ln1118_135_fu_2717_p2 = (!mul_ln1118_135_fu_2717_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_135_fu_2717_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_136_fu_1836_p0() {
    mul_ln1118_136_fu_1836_p0 =  (sc_lv<8>) (zext_ln1118_67_fu_12926300_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_136_fu_1836_p2() {
    mul_ln1118_136_fu_1836_p2 = (!mul_ln1118_136_fu_1836_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_136_fu_1836_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_137_fu_3447_p0() {
    mul_ln1118_137_fu_3447_p0 =  (sc_lv<8>) (zext_ln1118_69_fu_12926338_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_137_fu_3447_p2() {
    mul_ln1118_137_fu_3447_p2 = (!mul_ln1118_137_fu_3447_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_137_fu_3447_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_138_fu_2279_p0() {
    mul_ln1118_138_fu_2279_p0 =  (sc_lv<8>) (zext_ln1118_15_fu_12925336_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_138_fu_2279_p2() {
    mul_ln1118_138_fu_2279_p2 = (!mul_ln1118_138_fu_2279_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_138_fu_2279_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_139_fu_3086_p0() {
    mul_ln1118_139_fu_3086_p0 =  (sc_lv<8>) (zext_ln1118_33_fu_12925712_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_139_fu_3086_p2() {
    mul_ln1118_139_fu_3086_p2 = (!mul_ln1118_139_fu_3086_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_139_fu_3086_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_140_fu_1477_p0() {
    mul_ln1118_140_fu_1477_p0 =  (sc_lv<8>) (zext_ln1118_44_fu_12925863_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_140_fu_1477_p2() {
    mul_ln1118_140_fu_1477_p2 = (!mul_ln1118_140_fu_1477_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_140_fu_1477_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_141_fu_1844_p0() {
    mul_ln1118_141_fu_1844_p0 =  (sc_lv<8>) (zext_ln1118_98_fu_12927036_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_141_fu_1844_p2() {
    mul_ln1118_141_fu_1844_p2 = (!mul_ln1118_141_fu_1844_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_141_fu_1844_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_142_fu_2284_p0() {
    mul_ln1118_142_fu_2284_p0 =  (sc_lv<8>) (zext_ln1118_58_fu_12926117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_142_fu_2284_p2() {
    mul_ln1118_142_fu_2284_p2 = (!mul_ln1118_142_fu_2284_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_142_fu_2284_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_143_fu_3090_p0() {
    mul_ln1118_143_fu_3090_p0 =  (sc_lv<8>) (zext_ln1118_139_fu_12928019_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_143_fu_3090_p2() {
    mul_ln1118_143_fu_3090_p2 = (!mul_ln1118_143_fu_3090_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_143_fu_3090_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_144_fu_3091_p0() {
    mul_ln1118_144_fu_3091_p0 =  (sc_lv<8>) (zext_ln1118_69_fu_12926338_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_144_fu_3091_p2() {
    mul_ln1118_144_fu_3091_p2 = (!mul_ln1118_144_fu_3091_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_144_fu_3091_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_145_fu_3020_p0() {
    mul_ln1118_145_fu_3020_p0 =  (sc_lv<8>) (zext_ln1116_fu_12925136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_145_fu_3020_p2() {
    mul_ln1118_145_fu_3020_p2 = (!mul_ln1118_145_fu_3020_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_145_fu_3020_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_146_fu_3094_p0() {
    mul_ln1118_146_fu_3094_p0 =  (sc_lv<8>) (zext_ln1116_1_fu_12925233_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_146_fu_3094_p2() {
    mul_ln1118_146_fu_3094_p2 = (!mul_ln1118_146_fu_3094_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_146_fu_3094_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_147_fu_1485_p0() {
    mul_ln1118_147_fu_1485_p0 =  (sc_lv<8>) (zext_ln1118_15_fu_12925336_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_147_fu_1485_p2() {
    mul_ln1118_147_fu_1485_p2 = (!mul_ln1118_147_fu_1485_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_147_fu_1485_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_148_fu_2657_p0() {
    mul_ln1118_148_fu_2657_p0 =  (sc_lv<8>) (zext_ln1116_6_fu_12925367_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_148_fu_2657_p2() {
    mul_ln1118_148_fu_2657_p2 = (!mul_ln1118_148_fu_2657_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_148_fu_2657_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_149_fu_2219_p0() {
    mul_ln1118_149_fu_2219_p0 =  (sc_lv<8>) (zext_ln1118_21_fu_12925459_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_149_fu_2219_p2() {
    mul_ln1118_149_fu_2219_p2 = (!mul_ln1118_149_fu_2219_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_149_fu_2219_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_150_fu_3098_p0() {
    mul_ln1118_150_fu_3098_p0 =  (sc_lv<8>) (zext_ln708_6_fu_12925608_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_150_fu_3098_p2() {
    mul_ln1118_150_fu_3098_p2 = (!mul_ln1118_150_fu_3098_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_150_fu_3098_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_151_fu_1489_p0() {
    mul_ln1118_151_fu_1489_p0 =  (sc_lv<8>) (zext_ln1116_13_fu_12925806_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_151_fu_1489_p2() {
    mul_ln1118_151_fu_1489_p2 = (!mul_ln1118_151_fu_1489_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_151_fu_1489_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_152_fu_1622_p0() {
    mul_ln1118_152_fu_1622_p0 =  (sc_lv<8>) (zext_ln1116_15_fu_12925883_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_152_fu_1622_p2() {
    mul_ln1118_152_fu_1622_p2 = (!mul_ln1118_152_fu_1622_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_152_fu_1622_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_153_fu_1548_p0() {
    mul_ln1118_153_fu_1548_p0 =  (sc_lv<8>) (zext_ln1116_16_fu_12926080_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_153_fu_1548_p2() {
    mul_ln1118_153_fu_1548_p2 = (!mul_ln1118_153_fu_1548_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_153_fu_1548_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_154_fu_1859_p0() {
    mul_ln1118_154_fu_1859_p0 =  (sc_lv<8>) (zext_ln1118_68_fu_12926309_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_154_fu_1859_p2() {
    mul_ln1118_154_fu_1859_p2 = (!mul_ln1118_154_fu_1859_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_154_fu_1859_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_155_fu_1496_p0() {
    mul_ln1118_155_fu_1496_p0 =  (sc_lv<8>) (zext_ln1118_fu_12925089_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_155_fu_1496_p2() {
    mul_ln1118_155_fu_1496_p2 = (!mul_ln1118_155_fu_1496_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_155_fu_1496_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_156_fu_1520_p0() {
    mul_ln1118_156_fu_1520_p0 =  (sc_lv<8>) (zext_ln1118_7_fu_12925174_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_156_fu_1520_p2() {
    mul_ln1118_156_fu_1520_p2 = (!mul_ln1118_156_fu_1520_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_156_fu_1520_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_157_fu_2795_p0() {
    mul_ln1118_157_fu_2795_p0 =  (sc_lv<8>) (zext_ln1118_77_fu_12926499_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_157_fu_2795_p2() {
    mul_ln1118_157_fu_2795_p2 = (!mul_ln1118_157_fu_2795_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_157_fu_2795_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_158_fu_2662_p0() {
    mul_ln1118_158_fu_2662_p0 =  (sc_lv<8>) (zext_ln1118_16_fu_12925346_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_158_fu_2662_p2() {
    mul_ln1118_158_fu_2662_p2 = (!mul_ln1118_158_fu_2662_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_158_fu_2662_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_159_fu_3430_p0() {
    mul_ln1118_159_fu_3430_p0 =  (sc_lv<8>) (zext_ln1118_19_fu_12925419_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_159_fu_3430_p2() {
    mul_ln1118_159_fu_3430_p2 = (!mul_ln1118_159_fu_3430_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_159_fu_3430_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_160_fu_2058_p0() {
    mul_ln1118_160_fu_2058_p0 =  (sc_lv<8>) (zext_ln708_6_fu_12925608_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_160_fu_2058_p2() {
    mul_ln1118_160_fu_2058_p2 = (!mul_ln1118_160_fu_2058_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_160_fu_2058_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_161_fu_2488_p0() {
    mul_ln1118_161_fu_2488_p0 =  (sc_lv<8>) (zext_ln708_19_fu_12926719_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_161_fu_2488_p2() {
    mul_ln1118_161_fu_2488_p2 = (!mul_ln1118_161_fu_2488_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_161_fu_2488_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_162_fu_1848_p0() {
    mul_ln1118_162_fu_1848_p0 =  (sc_lv<8>) (zext_ln1118_40_fu_12925814_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_162_fu_1848_p2() {
    mul_ln1118_162_fu_1848_p2 = (!mul_ln1118_162_fu_1848_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_162_fu_1848_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_163_fu_1546_p0() {
    mul_ln1118_163_fu_1546_p0 =  (sc_lv<8>) (zext_ln1118_184_fu_12929430_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_163_fu_1546_p2() {
    mul_ln1118_163_fu_1546_p2 = (!mul_ln1118_163_fu_1546_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_163_fu_1546_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_164_fu_2821_p0() {
    mul_ln1118_164_fu_2821_p0 =  (sc_lv<8>) (zext_ln1118_51_fu_12925988_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_164_fu_2821_p2() {
    mul_ln1118_164_fu_2821_p2 = (!mul_ln1118_164_fu_2821_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_164_fu_2821_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_165_fu_2181_p0() {
    mul_ln1118_165_fu_2181_p0 =  (sc_lv<8>) (zext_ln1118_58_fu_12926117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_165_fu_2181_p2() {
    mul_ln1118_165_fu_2181_p2 = (!mul_ln1118_165_fu_2181_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_165_fu_2181_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_166_fu_1541_p0() {
    mul_ln1118_166_fu_1541_p0 =  (sc_lv<8>) (zext_ln708_13_fu_12926172_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_166_fu_1541_p2() {
    mul_ln1118_166_fu_1541_p2 = (!mul_ln1118_166_fu_1541_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_166_fu_1541_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_167_fu_2816_p0() {
    mul_ln1118_167_fu_2816_p0 =  (sc_lv<8>) (zext_ln1118_191_fu_12929612_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_167_fu_2816_p2() {
    mul_ln1118_167_fu_2816_p2 = (!mul_ln1118_167_fu_2816_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_167_fu_2816_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_168_fu_2514_p0() {
    mul_ln1118_168_fu_2514_p0 =  (sc_lv<8>) (zext_ln1118_68_fu_12926309_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_168_fu_2514_p2() {
    mul_ln1118_168_fu_2514_p2 = (!mul_ln1118_168_fu_2514_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_168_fu_2514_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_169_fu_3282_p0() {
    mul_ln1118_169_fu_3282_p0 =  (sc_lv<8>) (zext_ln1116_18_fu_12926426_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_169_fu_3282_p2() {
    mul_ln1118_169_fu_3282_p2 = (!mul_ln1118_169_fu_3282_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_169_fu_3282_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_170_fu_2980_p0() {
    mul_ln1118_170_fu_2980_p0 =  (sc_lv<8>) (zext_ln1116_fu_12925136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_170_fu_2980_p2() {
    mul_ln1118_170_fu_2980_p2 = (!mul_ln1118_170_fu_2980_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_170_fu_2980_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_171_fu_2678_p0() {
    mul_ln1118_171_fu_2678_p0 =  (sc_lv<8>) (zext_ln1118_198_fu_12929828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_171_fu_2678_p2() {
    mul_ln1118_171_fu_2678_p2 = (!mul_ln1118_171_fu_2678_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_171_fu_2678_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_172_fu_2202_p0() {
    mul_ln1118_172_fu_2202_p0 =  (sc_lv<8>) (zext_ln1118_32_fu_12925704_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_172_fu_2202_p2() {
    mul_ln1118_172_fu_2202_p2 = (!mul_ln1118_172_fu_2202_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_172_fu_2202_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_173_fu_2366_p0() {
    mul_ln1118_173_fu_2366_p0 =  (sc_lv<8>) (zext_ln708_55_fu_12929574_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_173_fu_2366_p2() {
    mul_ln1118_173_fu_2366_p2 = (!mul_ln1118_173_fu_2366_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_173_fu_2366_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_174_fu_2832_p0() {
    mul_ln1118_174_fu_2832_p0 =  (sc_lv<8>) (mult_126_V_fu_12928828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_174_fu_2832_p2() {
    mul_ln1118_174_fu_2832_p2 = (!mul_ln1118_174_fu_2832_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_174_fu_2832_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_175_fu_2868_p0() {
    mul_ln1118_175_fu_2868_p0 =  (sc_lv<8>) (zext_ln1118_76_fu_12926445_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_175_fu_2868_p2() {
    mul_ln1118_175_fu_2868_p2 = (!mul_ln1118_175_fu_2868_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_175_fu_2868_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_176_fu_2059_p0() {
    mul_ln1118_176_fu_2059_p0 =  (sc_lv<8>) (zext_ln1118_6_fu_12925150_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_176_fu_2059_p2() {
    mul_ln1118_176_fu_2059_p2 = (!mul_ln1118_176_fu_2059_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_176_fu_2059_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_177_fu_2525_p0() {
    mul_ln1118_177_fu_2525_p0 =  (sc_lv<8>) (zext_ln1116_4_fu_12925326_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_177_fu_2525_p2() {
    mul_ln1118_177_fu_2525_p2 = (!mul_ln1118_177_fu_2525_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_177_fu_2525_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_178_fu_2223_p0() {
    mul_ln1118_178_fu_2223_p0 =  (sc_lv<8>) (zext_ln1116_9_fu_12925590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_178_fu_2223_p2() {
    mul_ln1118_178_fu_2223_p2 = (!mul_ln1118_178_fu_2223_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_178_fu_2223_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_179_fu_1583_p0() {
    mul_ln1118_179_fu_1583_p0 =  (sc_lv<8>) (zext_ln1118_32_fu_12925704_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_179_fu_1583_p2() {
    mul_ln1118_179_fu_1583_p2 = (!mul_ln1118_179_fu_1583_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_179_fu_1583_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_180_fu_1436_p0() {
    mul_ln1118_180_fu_1436_p0 =  (sc_lv<8>) (zext_ln1118_179_fu_12929317_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_180_fu_1436_p2() {
    mul_ln1118_180_fu_1436_p2 = (!mul_ln1118_180_fu_1436_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_180_fu_1436_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_181_fu_1916_p0() {
    mul_ln1118_181_fu_1916_p0 =  (sc_lv<8>) (zext_ln1118_56_fu_12926091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_181_fu_1916_p2() {
    mul_ln1118_181_fu_1916_p2 = (!mul_ln1118_181_fu_1916_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_181_fu_1916_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_182_fu_2382_p0() {
    mul_ln1118_182_fu_2382_p0 =  (sc_lv<8>) (zext_ln1118_198_fu_12929828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_182_fu_2382_p2() {
    mul_ln1118_182_fu_2382_p2 = (!mul_ln1118_182_fu_2382_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_182_fu_2382_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_183_fu_2080_p0() {
    mul_ln1118_183_fu_2080_p0 =  (sc_lv<8>) (zext_ln1116_7_fu_12925411_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_183_fu_2080_p2() {
    mul_ln1118_183_fu_2080_p2 = (!mul_ln1118_183_fu_2080_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_183_fu_2080_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_184_fu_1440_p0() {
    mul_ln1118_184_fu_1440_p0 =  (sc_lv<8>) (zext_ln1118_25_fu_12925534_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_184_fu_1440_p2() {
    mul_ln1118_184_fu_1440_p2 = (!mul_ln1118_184_fu_1440_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_184_fu_1440_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_185_fu_2884_p0() {
    mul_ln1118_185_fu_2884_p0 =  (sc_lv<8>) (zext_ln1118_171_fu_12929171_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_185_fu_2884_p2() {
    mul_ln1118_185_fu_2884_p2 = (!mul_ln1118_185_fu_2884_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_185_fu_2884_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_186_fu_1512_p0() {
    mul_ln1118_186_fu_1512_p0 =  (sc_lv<8>) (zext_ln1116_20_fu_12929226_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_186_fu_1512_p2() {
    mul_ln1118_186_fu_1512_p2 = (!mul_ln1118_186_fu_1512_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_186_fu_1512_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_187_fu_1604_p0() {
    mul_ln1118_187_fu_1604_p0 =  (sc_lv<8>) (zext_ln1118_179_fu_12929317_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_187_fu_1604_p2() {
    mul_ln1118_187_fu_1604_p2 = (!mul_ln1118_187_fu_1604_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_187_fu_1604_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_188_fu_1937_p0() {
    mul_ln1118_188_fu_1937_p0 =  (sc_lv<8>) (zext_ln1118_66_fu_12926252_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_188_fu_1937_p2() {
    mul_ln1118_188_fu_1937_p2 = (!mul_ln1118_188_fu_1937_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_188_fu_1937_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_189_fu_1804_p0() {
    mul_ln1118_189_fu_1804_p0 =  (sc_lv<8>) (mult_126_V_fu_12928828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_189_fu_1804_p2() {
    mul_ln1118_189_fu_1804_p2 = (!mul_ln1118_189_fu_1804_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_189_fu_1804_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_190_fu_1943_p0() {
    mul_ln1118_190_fu_1943_p0 =  (sc_lv<8>) (zext_ln1118_255_fu_12931695_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_190_fu_1943_p2() {
    mul_ln1118_190_fu_1943_p2 = (!mul_ln1118_190_fu_1943_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_190_fu_1943_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_191_fu_2270_p0() {
    mul_ln1118_191_fu_2270_p0 =  (sc_lv<8>) (zext_ln1118_77_fu_12926499_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_191_fu_2270_p2() {
    mul_ln1118_191_fu_2270_p2 = (!mul_ln1118_191_fu_2270_p0.read().is_01() || !ap_const_lv15_7FC7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_191_fu_2270_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_192_fu_3038_p0() {
    mul_ln1118_192_fu_3038_p0 =  (sc_lv<8>) (zext_ln708_4_fu_12925474_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_192_fu_3038_p2() {
    mul_ln1118_192_fu_3038_p2 = (!mul_ln1118_192_fu_3038_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_192_fu_3038_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_193_fu_1666_p0() {
    mul_ln1118_193_fu_1666_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12931884_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_193_fu_1666_p2() {
    mul_ln1118_193_fu_1666_p2 = (!mul_ln1118_193_fu_1666_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_193_fu_1666_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_194_fu_2265_p0() {
    mul_ln1118_194_fu_2265_p0 =  (sc_lv<8>) (zext_ln1118_266_fu_12931944_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_194_fu_2265_p2() {
    mul_ln1118_194_fu_2265_p2 = (!mul_ln1118_194_fu_2265_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_194_fu_2265_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_195_fu_1794_p0() {
    mul_ln1118_195_fu_1794_p0 =  (sc_lv<8>) (mul_ln1118_195_fu_1794_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_195_fu_1794_p00() {
    mul_ln1118_195_fu_1794_p00 = esl_zext<16,8>(p_read14.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_195_fu_1794_p2() {
    mul_ln1118_195_fu_1794_p2 = (!mul_ln1118_195_fu_1794_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_195_fu_1794_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_196_fu_2900_p0() {
    mul_ln1118_196_fu_2900_p0 =  (sc_lv<8>) (zext_ln1116_27_fu_12932063_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_196_fu_2900_p2() {
    mul_ln1118_196_fu_2900_p2 = (!mul_ln1118_196_fu_2900_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_196_fu_2900_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_197_fu_2429_p0() {
    mul_ln1118_197_fu_2429_p0 =  (sc_lv<8>) (zext_ln1118_51_fu_12925988_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_197_fu_2429_p2() {
    mul_ln1118_197_fu_2429_p2 = (!mul_ln1118_197_fu_2429_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_197_fu_2429_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_198_fu_2506_p0() {
    mul_ln1118_198_fu_2506_p0 =  (sc_lv<8>) (zext_ln1116_16_fu_12926080_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_198_fu_2506_p2() {
    mul_ln1118_198_fu_2506_p2 = (!mul_ln1118_198_fu_2506_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_198_fu_2506_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_199_fu_2593_p0() {
    mul_ln1118_199_fu_2593_p0 =  (sc_lv<8>) (zext_ln1116_32_fu_12932294_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_199_fu_2593_p2() {
    mul_ln1118_199_fu_2593_p2 = (!mul_ln1118_199_fu_2593_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_199_fu_2593_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_200_fu_2969_p0() {
    mul_ln1118_200_fu_2969_p0 =  (sc_lv<8>) (zext_ln1118_67_fu_12926300_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_200_fu_2969_p2() {
    mul_ln1118_200_fu_2969_p2 = (!mul_ln1118_200_fu_2969_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_200_fu_2969_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_201_fu_2287_p0() {
    mul_ln1118_201_fu_2287_p0 =  (sc_lv<8>) (zext_ln1118_76_fu_12926445_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_201_fu_2287_p2() {
    mul_ln1118_201_fu_2287_p2 = (!mul_ln1118_201_fu_2287_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_201_fu_2287_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_202_fu_1605_p0() {
    mul_ln1118_202_fu_1605_p0 =  (sc_lv<8>) (zext_ln708_17_fu_12926513_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_202_fu_1605_p2() {
    mul_ln1118_202_fu_1605_p2 = (!mul_ln1118_202_fu_1605_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_202_fu_1605_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_203_fu_2973_p0() {
    mul_ln1118_203_fu_2973_p0 =  (sc_lv<8>) (zext_ln1116_7_fu_12925411_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_203_fu_2973_p2() {
    mul_ln1118_203_fu_2973_p2 = (!mul_ln1118_203_fu_2973_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_203_fu_2973_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_204_fu_2291_p0() {
    mul_ln1118_204_fu_2291_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12931884_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_204_fu_2291_p2() {
    mul_ln1118_204_fu_2291_p2 = (!mul_ln1118_204_fu_2291_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_204_fu_2291_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_205_fu_2292_p0() {
    mul_ln1118_205_fu_2292_p0 =  (sc_lv<8>) (zext_ln1116_9_fu_12925590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_205_fu_2292_p2() {
    mul_ln1118_205_fu_2292_p2 = (!mul_ln1118_205_fu_2292_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_205_fu_2292_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_206_fu_2293_p0() {
    mul_ln1118_206_fu_2293_p0 =  (sc_lv<8>) (zext_ln1118_266_fu_12931944_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_206_fu_2293_p2() {
    mul_ln1118_206_fu_2293_p2 = (!mul_ln1118_206_fu_2293_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_206_fu_2293_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_207_fu_3237_p0() {
    mul_ln1118_207_fu_3237_p0 =  (sc_lv<8>) (zext_ln1116_29_fu_12932156_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_207_fu_3237_p2() {
    mul_ln1118_207_fu_3237_p2 = (!mul_ln1118_207_fu_3237_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_207_fu_3237_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_208_fu_2297_p0() {
    mul_ln1118_208_fu_2297_p0 =  (sc_lv<8>) (zext_ln1118_52_fu_12925998_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_208_fu_2297_p2() {
    mul_ln1118_208_fu_2297_p2 = (!mul_ln1118_208_fu_2297_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_208_fu_2297_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_209_fu_2981_p0() {
    mul_ln1118_209_fu_2981_p0 =  (sc_lv<8>) (zext_ln1116_30_fu_12932196_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_209_fu_2981_p2() {
    mul_ln1118_209_fu_2981_p2 = (!mul_ln1118_209_fu_2981_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_209_fu_2981_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_210_fu_2299_p0() {
    mul_ln1118_210_fu_2299_p0 =  (sc_lv<8>) (zext_ln1118_68_fu_12926309_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_210_fu_2299_p2() {
    mul_ln1118_210_fu_2299_p2 = (!mul_ln1118_210_fu_2299_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_210_fu_2299_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_211_fu_1618_p0() {
    mul_ln1118_211_fu_1618_p0 =  (sc_lv<8>) (zext_ln1116_3_fu_12925285_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_211_fu_1618_p2() {
    mul_ln1118_211_fu_1618_p2 = (!mul_ln1118_211_fu_1618_p0.read().is_01() || !ap_const_lv16_FF8E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_211_fu_1618_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_212_fu_2985_p0() {
    mul_ln1118_212_fu_2985_p0 =  (sc_lv<8>) (zext_ln1118_164_fu_12928994_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_212_fu_2985_p2() {
    mul_ln1118_212_fu_2985_p2 = (!mul_ln1118_212_fu_2985_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_212_fu_2985_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_213_fu_2986_p0() {
    mul_ln1118_213_fu_2986_p0 =  (sc_lv<8>) (zext_ln708_4_fu_12925474_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_213_fu_2986_p2() {
    mul_ln1118_213_fu_2986_p2 = (!mul_ln1118_213_fu_2986_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_213_fu_2986_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_214_fu_2305_p0() {
    mul_ln1118_214_fu_2305_p0 =  (sc_lv<8>) (zext_ln708_6_fu_12925608_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_214_fu_2305_p2() {
    mul_ln1118_214_fu_2305_p2 = (!mul_ln1118_214_fu_2305_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_214_fu_2305_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_215_fu_1828_p0() {
    mul_ln1118_215_fu_1828_p0 =  (sc_lv<8>) (mul_ln1118_215_fu_1828_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_215_fu_1828_p00() {
    mul_ln1118_215_fu_1828_p00 = esl_zext<13,8>(p_read14.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_215_fu_1828_p2() {
    mul_ln1118_215_fu_1828_p2 = (!mul_ln1118_215_fu_1828_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_215_fu_1828_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_216_fu_1624_p0() {
    mul_ln1118_216_fu_1624_p0 =  (sc_lv<8>) (zext_ln1116_25_fu_12931993_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_216_fu_1624_p2() {
    mul_ln1118_216_fu_1624_p2 = (!mul_ln1118_216_fu_1624_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_216_fu_1624_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_217_fu_2991_p0() {
    mul_ln1118_217_fu_2991_p0 =  (sc_lv<8>) (zext_ln1116_27_fu_12932063_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_217_fu_2991_p2() {
    mul_ln1118_217_fu_2991_p2 = (!mul_ln1118_217_fu_2991_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_217_fu_2991_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_218_fu_2309_p0() {
    mul_ln1118_218_fu_2309_p0 =  (sc_lv<8>) (zext_ln1118_93_fu_12926917_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_218_fu_2309_p2() {
    mul_ln1118_218_fu_2309_p2 = (!mul_ln1118_218_fu_2309_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_218_fu_2309_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_219_fu_1627_p0() {
    mul_ln1118_219_fu_1627_p0 =  (sc_lv<8>) (zext_ln1116_30_fu_12932196_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_219_fu_1627_p2() {
    mul_ln1118_219_fu_1627_p2 = (!mul_ln1118_219_fu_1627_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_219_fu_1627_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_220_fu_1628_p0() {
    mul_ln1118_220_fu_1628_p0 =  (sc_lv<8>) (zext_ln1116_31_fu_12932230_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_220_fu_1628_p2() {
    mul_ln1118_220_fu_1628_p2 = (!mul_ln1118_220_fu_1628_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_220_fu_1628_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_221_fu_2837_p0() {
    mul_ln1118_221_fu_2837_p0 =  (sc_lv<8>) (mult_126_V_fu_12928828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_221_fu_2837_p2() {
    mul_ln1118_221_fu_2837_p2 = (!mul_ln1118_221_fu_2837_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_221_fu_2837_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_222_fu_3204_p0() {
    mul_ln1118_222_fu_3204_p0 =  (sc_lv<8>) (zext_ln1118_255_fu_12931695_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_222_fu_3204_p2() {
    mul_ln1118_222_fu_3204_p2 = (!mul_ln1118_222_fu_3204_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_222_fu_3204_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_223_fu_2840_p0() {
    mul_ln1118_223_fu_2840_p0 =  (sc_lv<8>) (zext_ln1116_9_fu_12925590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_223_fu_2840_p2() {
    mul_ln1118_223_fu_2840_p2 = (!mul_ln1118_223_fu_2840_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_223_fu_2840_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_224_fu_2841_p0() {
    mul_ln1118_224_fu_2841_p0 =  (sc_lv<8>) (zext_ln1118_268_fu_12931999_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_224_fu_2841_p2() {
    mul_ln1118_224_fu_2841_p2 = (!mul_ln1118_224_fu_2841_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_224_fu_2841_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_225_fu_2842_p0() {
    mul_ln1118_225_fu_2842_p0 =  (sc_lv<8>) (zext_ln1116_28_fu_12932084_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_225_fu_2842_p2() {
    mul_ln1118_225_fu_2842_p2 = (!mul_ln1118_225_fu_2842_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_225_fu_2842_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_226_fu_2843_p0() {
    mul_ln1118_226_fu_2843_p0 =  (sc_lv<8>) (zext_ln1118_94_fu_12926987_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_226_fu_2843_p2() {
    mul_ln1118_226_fu_2843_p2 = (!mul_ln1118_226_fu_2843_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_226_fu_2843_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_227_fu_2039_p0() {
    mul_ln1118_227_fu_2039_p0 =  (sc_lv<8>) (zext_ln1118_139_fu_12928019_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_227_fu_2039_p2() {
    mul_ln1118_227_fu_2039_p2 = (!mul_ln1118_227_fu_2039_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_227_fu_2039_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_228_fu_1601_p0() {
    mul_ln1118_228_fu_1601_p0 =  (sc_lv<8>) (zext_ln1118_66_fu_12926252_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_228_fu_1601_p2() {
    mul_ln1118_228_fu_1601_p2 = (!mul_ln1118_228_fu_1601_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_228_fu_1601_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_229_fu_1602_p0() {
    mul_ln1118_229_fu_1602_p0 =  (sc_lv<8>) (zext_ln1118_192_fu_12929650_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_229_fu_1602_p2() {
    mul_ln1118_229_fu_1602_p2 = (!mul_ln1118_229_fu_1602_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_229_fu_1602_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_230_fu_2848_p0() {
    mul_ln1118_230_fu_2848_p0 =  (sc_lv<8>) (mult_126_V_fu_12928828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_230_fu_2848_p2() {
    mul_ln1118_230_fu_2848_p2 = (!mul_ln1118_230_fu_2848_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_230_fu_2848_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_231_fu_2411_p0() {
    mul_ln1118_231_fu_2411_p0 =  (sc_lv<8>) (zext_ln1118_198_fu_12929828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_231_fu_2411_p2() {
    mul_ln1118_231_fu_2411_p2 = (!mul_ln1118_231_fu_2411_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_231_fu_2411_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_232_fu_2851_p0() {
    mul_ln1118_232_fu_2851_p0 =  (sc_lv<8>) (zext_ln1118_77_fu_12926499_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_232_fu_2851_p2() {
    mul_ln1118_232_fu_2851_p2 = (!mul_ln1118_232_fu_2851_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_232_fu_2851_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_233_fu_2853_p0() {
    mul_ln1118_233_fu_2853_p0 =  (sc_lv<8>) (zext_ln1116_4_fu_12925326_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_233_fu_2853_p2() {
    mul_ln1118_233_fu_2853_p2 = (!mul_ln1118_233_fu_2853_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_233_fu_2853_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_234_fu_3221_p0() {
    mul_ln1118_234_fu_3221_p0 =  (sc_lv<8>) (zext_ln1118_33_fu_12925712_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_234_fu_3221_p2() {
    mul_ln1118_234_fu_3221_p2 = (!mul_ln1118_234_fu_3221_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_234_fu_3221_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_235_fu_2856_p0() {
    mul_ln1118_235_fu_2856_p0 =  (sc_lv<8>) (zext_ln1118_268_fu_12931999_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_235_fu_2856_p2() {
    mul_ln1118_235_fu_2856_p2 = (!mul_ln1118_235_fu_2856_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_235_fu_2856_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_236_fu_2418_p0() {
    mul_ln1118_236_fu_2418_p0 =  (sc_lv<8>) (zext_ln1118_91_fu_12926891_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_236_fu_2418_p2() {
    mul_ln1118_236_fu_2418_p2 = (!mul_ln1118_236_fu_2418_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_236_fu_2418_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_237_fu_2859_p0() {
    mul_ln1118_237_fu_2859_p0 =  (sc_lv<8>) (zext_ln1118_47_fu_12925928_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_237_fu_2859_p2() {
    mul_ln1118_237_fu_2859_p2 = (!mul_ln1118_237_fu_2859_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_237_fu_2859_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_238_fu_1616_p0() {
    mul_ln1118_238_fu_1616_p0 =  (sc_lv<8>) (zext_ln1118_56_fu_12926091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_238_fu_1616_p2() {
    mul_ln1118_238_fu_1616_p2 = (!mul_ln1118_238_fu_1616_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_238_fu_1616_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_239_fu_1617_p0() {
    mul_ln1118_239_fu_1617_p0 =  (sc_lv<8>) (zext_ln1116_35_fu_12934904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_239_fu_1617_p2() {
    mul_ln1118_239_fu_1617_p2 = (!mul_ln1118_239_fu_1617_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_239_fu_1617_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_240_fu_2565_p0() {
    mul_ln1118_240_fu_2565_p0 =  (sc_lv<8>) (zext_ln1116_18_fu_12926426_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_240_fu_2565_p2() {
    mul_ln1118_240_fu_2565_p2 = (!mul_ln1118_240_fu_2565_p0.read().is_01() || !ap_const_lv16_FF8E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_240_fu_2565_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_241_fu_3031_p0() {
    mul_ln1118_241_fu_3031_p0 =  (sc_lv<8>) (zext_ln1118_258_fu_12931768_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_241_fu_3031_p2() {
    mul_ln1118_241_fu_3031_p2 = (!mul_ln1118_241_fu_3031_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_241_fu_3031_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_242_fu_1490_p0() {
    mul_ln1118_242_fu_1490_p0 =  (sc_lv<8>) (zext_ln1118_19_fu_12925419_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_242_fu_1490_p2() {
    mul_ln1118_242_fu_1490_p2 = (!mul_ln1118_242_fu_1490_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_242_fu_1490_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_243_fu_1751_p0() {
    mul_ln1118_243_fu_1751_p0 =  (sc_lv<8>) (zext_ln1116_33_fu_12934501_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_243_fu_1751_p2() {
    mul_ln1118_243_fu_1751_p2 = (!mul_ln1118_243_fu_1751_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_243_fu_1751_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_244_fu_2893_p0() {
    mul_ln1118_244_fu_2893_p0 =  (sc_lv<8>) (zext_ln1116_28_fu_12932084_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_244_fu_2893_p2() {
    mul_ln1118_244_fu_2893_p2 = (!mul_ln1118_244_fu_2893_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_244_fu_2893_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_245_fu_2422_p0() {
    mul_ln1118_245_fu_2422_p0 =  (sc_lv<8>) (zext_ln1116_31_fu_12932230_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_245_fu_2422_p2() {
    mul_ln1118_245_fu_2422_p2 = (!mul_ln1118_245_fu_2422_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_245_fu_2422_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_246_fu_1444_p0() {
    mul_ln1118_246_fu_1444_p0 =  (sc_lv<8>) (zext_ln1118_192_fu_12929650_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_246_fu_1444_p2() {
    mul_ln1118_246_fu_1444_p2 = (!mul_ln1118_246_fu_1444_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_246_fu_1444_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_247_fu_2586_p0() {
    mul_ln1118_247_fu_2586_p0 =  (sc_lv<8>) (zext_ln1118_14_fu_12925303_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_247_fu_2586_p2() {
    mul_ln1118_247_fu_2586_p2 = (!mul_ln1118_247_fu_2586_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_247_fu_2586_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_248_fu_3185_p0() {
    mul_ln1118_248_fu_3185_p0 =  (sc_lv<8>) (zext_ln1118_17_fu_12925372_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_248_fu_3185_p2() {
    mul_ln1118_248_fu_3185_p2 = (!mul_ln1118_248_fu_3185_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_248_fu_3185_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_249_fu_1475_p0() {
    mul_ln1118_249_fu_1475_p0 =  (sc_lv<8>) (zext_ln1118_260_fu_12931822_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_249_fu_1475_p2() {
    mul_ln1118_249_fu_1475_p2 = (!mul_ln1118_249_fu_1475_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_249_fu_1475_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_250_fu_1511_p0() {
    mul_ln1118_250_fu_1511_p0 =  (sc_lv<8>) (zext_ln1116_33_fu_12934501_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_250_fu_1511_p2() {
    mul_ln1118_250_fu_1511_p2 = (!mul_ln1118_250_fu_1511_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_250_fu_1511_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_251_fu_2878_p0() {
    mul_ln1118_251_fu_2878_p0 =  (sc_lv<8>) (zext_ln1116_9_fu_12925590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_251_fu_2878_p2() {
    mul_ln1118_251_fu_2878_p2 = (!mul_ln1118_251_fu_2878_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_251_fu_2878_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_252_fu_2105_p0() {
    mul_ln1118_252_fu_2105_p0 =  (sc_lv<8>) (zext_ln1116_20_fu_12929226_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_252_fu_2105_p2() {
    mul_ln1118_252_fu_2105_p2 = (!mul_ln1118_252_fu_2105_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_252_fu_2105_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_253_fu_2100_p0() {
    mul_ln1118_253_fu_2100_p0 =  (sc_lv<8>) (zext_ln1116_28_fu_12932084_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_253_fu_2100_p2() {
    mul_ln1118_253_fu_2100_p2 = (!mul_ln1118_253_fu_2100_p0.read().is_01() || !ap_const_lv16_FFAA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_253_fu_2100_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_254_fu_1798_p0() {
    mul_ln1118_254_fu_1798_p0 =  (sc_lv<8>) (zext_ln1116_29_fu_12932156_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_254_fu_1798_p2() {
    mul_ln1118_254_fu_1798_p2 = (!mul_ln1118_254_fu_1798_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_254_fu_1798_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_255_fu_3370_p0() {
    mul_ln1118_255_fu_3370_p0 =  (sc_lv<8>) (mul_ln1118_255_fu_3370_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_255_fu_3370_p00() {
    mul_ln1118_255_fu_3370_p00 = esl_zext<13,8>(p_read27.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_255_fu_3370_p2() {
    mul_ln1118_255_fu_3370_p2 = (!mul_ln1118_255_fu_3370_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_255_fu_3370_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_256_fu_1491_p0() {
    mul_ln1118_256_fu_1491_p0 =  (sc_lv<8>) (mult_126_V_fu_12928828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_256_fu_1491_p2() {
    mul_ln1118_256_fu_1491_p2 = (!mul_ln1118_256_fu_1491_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_256_fu_1491_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_257_fu_2935_p0() {
    mul_ln1118_257_fu_2935_p0 =  (sc_lv<8>) (zext_ln1118_14_fu_12925303_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_257_fu_2935_p2() {
    mul_ln1118_257_fu_2935_p2 = (!mul_ln1118_257_fu_2935_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_257_fu_2935_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_258_fu_1957_p0() {
    mul_ln1118_258_fu_1957_p0 =  (sc_lv<8>) (zext_ln1118_22_fu_12925464_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_258_fu_1957_p2() {
    mul_ln1118_258_fu_1957_p2 = (!mul_ln1118_258_fu_1957_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_258_fu_1957_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_259_fu_3063_p0() {
    mul_ln1118_259_fu_3063_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12925753_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_259_fu_3063_p2() {
    mul_ln1118_259_fu_3063_p2 = (!mul_ln1118_259_fu_3063_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_259_fu_3063_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_260_fu_3099_p0() {
    mul_ln1118_260_fu_3099_p0 =  (sc_lv<8>) (zext_ln708_23_fu_12926926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_260_fu_3099_p2() {
    mul_ln1118_260_fu_3099_p2 = (!mul_ln1118_260_fu_3099_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_260_fu_3099_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_261_fu_2459_p0() {
    mul_ln1118_261_fu_2459_p0 =  (sc_lv<8>) (zext_ln1116_16_fu_12926080_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_261_fu_2459_p2() {
    mul_ln1118_261_fu_2459_p2 = (!mul_ln1118_261_fu_2459_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_261_fu_2459_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_262_fu_3227_p0() {
    mul_ln1118_262_fu_3227_p0 =  (sc_lv<8>) (zext_ln1118_192_fu_12929650_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_262_fu_3227_p2() {
    mul_ln1118_262_fu_3227_p2 = (!mul_ln1118_262_fu_3227_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_262_fu_3227_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_263_fu_1686_p0() {
    mul_ln1118_263_fu_1686_p0 =  (sc_lv<8>) (zext_ln708_15_fu_12926393_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_263_fu_1686_p2() {
    mul_ln1118_263_fu_1686_p2 = (!mul_ln1118_263_fu_1686_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_263_fu_1686_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_264_fu_2956_p0() {
    mul_ln1118_264_fu_2956_p0 =  (sc_lv<8>) (zext_ln708_fu_12925494_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_264_fu_2956_p2() {
    mul_ln1118_264_fu_2956_p2 = (!mul_ln1118_264_fu_2956_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_264_fu_2956_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_265_fu_3422_p0() {
    mul_ln1118_265_fu_3422_p0 =  (sc_lv<8>) (zext_ln1118_33_fu_12925712_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_265_fu_3422_p2() {
    mul_ln1118_265_fu_3422_p2 = (!mul_ln1118_265_fu_3422_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_265_fu_3422_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_266_fu_2782_p0() {
    mul_ln1118_266_fu_2782_p0 =  (sc_lv<8>) (zext_ln1116_13_fu_12925806_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_266_fu_2782_p2() {
    mul_ln1118_266_fu_2782_p2 = (!mul_ln1118_266_fu_2782_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_266_fu_2782_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_267_fu_2818_p0() {
    mul_ln1118_267_fu_2818_p0 =  (sc_lv<8>) (zext_ln708_23_fu_12926926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_267_fu_2818_p2() {
    mul_ln1118_267_fu_2818_p2 = (!mul_ln1118_267_fu_2818_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_267_fu_2818_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_268_fu_1840_p0() {
    mul_ln1118_268_fu_1840_p0 =  (sc_lv<8>) (zext_ln1116_31_fu_12932230_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_268_fu_1840_p2() {
    mul_ln1118_268_fu_1840_p2 = (!mul_ln1118_268_fu_1840_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_268_fu_1840_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_269_fu_3115_p0() {
    mul_ln1118_269_fu_3115_p0 =  (sc_lv<8>) (zext_ln1116_32_fu_12932294_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_269_fu_3115_p2() {
    mul_ln1118_269_fu_3115_p2 = (!mul_ln1118_269_fu_3115_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_269_fu_3115_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_270_fu_2475_p0() {
    mul_ln1118_270_fu_2475_p0 =  (sc_lv<8>) (zext_ln1116_35_fu_12934904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_270_fu_2475_p2() {
    mul_ln1118_270_fu_2475_p2 = (!mul_ln1118_270_fu_2475_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_270_fu_2475_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_271_fu_3412_p0() {
    mul_ln1118_271_fu_3412_p0 =  (sc_lv<8>) (zext_ln1118_194_fu_12929662_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_271_fu_3412_p2() {
    mul_ln1118_271_fu_3412_p2 = (!mul_ln1118_271_fu_3412_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_271_fu_3412_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_272_fu_1871_p0() {
    mul_ln1118_272_fu_1871_p0 =  (sc_lv<8>) (zext_ln1118_72_fu_12926405_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_272_fu_1871_p2() {
    mul_ln1118_272_fu_1871_p2 = (!mul_ln1118_272_fu_1871_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_272_fu_1871_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_273_fu_2639_p0() {
    mul_ln1118_273_fu_2639_p0 =  (sc_lv<8>) (zext_ln1118_14_fu_12925303_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_273_fu_2639_p2() {
    mul_ln1118_273_fu_2639_p2 = (!mul_ln1118_273_fu_2639_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_273_fu_2639_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_274_fu_2168_p0() {
    mul_ln1118_274_fu_2168_p0 =  (sc_lv<8>) (zext_ln1118_258_fu_12931768_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_274_fu_2168_p2() {
    mul_ln1118_274_fu_2168_p2 = (!mul_ln1118_274_fu_2168_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_274_fu_2168_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_275_fu_3274_p0() {
    mul_ln1118_275_fu_3274_p0 =  (sc_lv<8>) (zext_ln1118_26_fu_12925542_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_275_fu_3274_p2() {
    mul_ln1118_275_fu_3274_p2 = (!mul_ln1118_275_fu_3274_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_275_fu_3274_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_276_fu_2972_p0() {
    mul_ln1118_276_fu_2972_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12925753_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_276_fu_2972_p2() {
    mul_ln1118_276_fu_2972_p2 = (!mul_ln1118_276_fu_2972_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_276_fu_2972_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_277_fu_2332_p0() {
    mul_ln1118_277_fu_2332_p0 =  (sc_lv<8>) (zext_ln1118_91_fu_12926891_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_277_fu_2332_p2() {
    mul_ln1118_277_fu_2332_p2 = (!mul_ln1118_277_fu_2332_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_277_fu_2332_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_278_fu_3438_p0() {
    mul_ln1118_278_fu_3438_p0 =  (sc_lv<8>) (zext_ln1118_93_fu_12926917_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_278_fu_3438_p2() {
    mul_ln1118_278_fu_3438_p2 = (!mul_ln1118_278_fu_3438_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_278_fu_3438_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_279_fu_3136_p0() {
    mul_ln1118_279_fu_3136_p0 =  (sc_lv<8>) (zext_ln1118_45_fu_12925889_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_279_fu_3136_p2() {
    mul_ln1118_279_fu_3136_p2 = (!mul_ln1118_279_fu_3136_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_279_fu_3136_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_280_fu_1426_p0() {
    mul_ln1118_280_fu_1426_p0 =  (sc_lv<8>) (zext_ln1118_210_fu_12930217_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_280_fu_1426_p2() {
    mul_ln1118_280_fu_1426_p2 = (!mul_ln1118_280_fu_1426_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_280_fu_1426_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_281_fu_1856_p0() {
    mul_ln1118_281_fu_1856_p0 =  (sc_lv<8>) (zext_ln708_55_fu_12929574_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_281_fu_1856_p2() {
    mul_ln1118_281_fu_1856_p2 = (!mul_ln1118_281_fu_1856_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_281_fu_1856_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_282_fu_1554_p0() {
    mul_ln1118_282_fu_1554_p0 =  (sc_lv<8>) (zext_ln1116_42_fu_12937134_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_282_fu_1554_p2() {
    mul_ln1118_282_fu_1554_p2 = (!mul_ln1118_282_fu_1554_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_282_fu_1554_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_283_fu_3247_p0() {
    mul_ln1118_283_fu_3247_p0 =  (sc_lv<8>) (zext_ln1116_35_fu_12934904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_283_fu_3247_p2() {
    mul_ln1118_283_fu_3247_p2 = (!mul_ln1118_283_fu_3247_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_283_fu_3247_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_284_fu_3248_p0() {
    mul_ln1118_284_fu_3248_p0 =  (sc_lv<8>) (zext_ln1118_106_fu_12927226_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_284_fu_3248_p2() {
    mul_ln1118_284_fu_3248_p2 = (!mul_ln1118_284_fu_3248_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_284_fu_3248_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_285_fu_2566_p0() {
    mul_ln1118_285_fu_2566_p0 =  (sc_lv<8>) (zext_ln1118_6_fu_12925150_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_285_fu_2566_p2() {
    mul_ln1118_285_fu_2566_p2 = (!mul_ln1118_285_fu_2566_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_285_fu_2566_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_286_fu_1611_p0() {
    mul_ln1118_286_fu_1611_p0 =  (sc_lv<8>) (zext_ln1118_260_fu_12931822_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_286_fu_1611_p2() {
    mul_ln1118_286_fu_1611_p2 = (!mul_ln1118_286_fu_1611_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_286_fu_1611_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_287_fu_3251_p0() {
    mul_ln1118_287_fu_3251_p0 =  (sc_lv<8>) (zext_ln1116_13_fu_12925806_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_287_fu_3251_p2() {
    mul_ln1118_287_fu_3251_p2 = (!mul_ln1118_287_fu_3251_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_287_fu_3251_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_288_fu_3252_p0() {
    mul_ln1118_288_fu_3252_p0 =  (sc_lv<8>) (zext_ln708_23_fu_12926926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_288_fu_3252_p2() {
    mul_ln1118_288_fu_3252_p2 = (!mul_ln1118_288_fu_3252_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_288_fu_3252_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_289_fu_3253_p0() {
    mul_ln1118_289_fu_3253_p0 =  (sc_lv<8>) (zext_ln1116_41_fu_12937028_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_289_fu_3253_p2() {
    mul_ln1118_289_fu_3253_p2 = (!mul_ln1118_289_fu_3253_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_289_fu_3253_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_290_fu_1888_p0() {
    mul_ln1118_290_fu_1888_p0 =  (sc_lv<8>) (zext_ln1116_16_fu_12926080_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_290_fu_1888_p2() {
    mul_ln1118_290_fu_1888_p2 = (!mul_ln1118_290_fu_1888_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_290_fu_1888_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_291_fu_2094_p0() {
    mul_ln1118_291_fu_2094_p0 =  (sc_lv<8>) (zext_ln1116_32_fu_12932294_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_291_fu_2094_p2() {
    mul_ln1118_291_fu_2094_p2 = (!mul_ln1118_291_fu_2094_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_291_fu_2094_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_292_fu_3236_p0() {
    mul_ln1118_292_fu_3236_p0 =  (sc_lv<8>) (zext_ln1118_194_fu_12929662_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_292_fu_3236_p2() {
    mul_ln1118_292_fu_3236_p2 = (!mul_ln1118_292_fu_3236_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_292_fu_3236_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_293_fu_2574_p0() {
    mul_ln1118_293_fu_2574_p0 =  (sc_lv<8>) (zext_ln708_15_fu_12926393_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_293_fu_2574_p2() {
    mul_ln1118_293_fu_2574_p2 = (!mul_ln1118_293_fu_2574_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_293_fu_2574_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_294_fu_1892_p0() {
    mul_ln1118_294_fu_1892_p0 =  (sc_lv<8>) (zext_ln1118_75_fu_12926438_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_294_fu_1892_p2() {
    mul_ln1118_294_fu_1892_p2 = (!mul_ln1118_294_fu_1892_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_294_fu_1892_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_295_fu_1893_p0() {
    mul_ln1118_295_fu_1893_p0 =  (sc_lv<8>) (zext_ln1116_36_fu_12936692_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_295_fu_1893_p2() {
    mul_ln1118_295_fu_1893_p2 = (!mul_ln1118_295_fu_1893_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_295_fu_1893_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_296_fu_2578_p0() {
    mul_ln1118_296_fu_2578_p0 =  (sc_lv<8>) (zext_ln1118_25_fu_12925534_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_296_fu_2578_p2() {
    mul_ln1118_296_fu_2578_p2 = (!mul_ln1118_296_fu_2578_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_296_fu_2578_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_297_fu_3262_p0() {
    mul_ln1118_297_fu_3262_p0 =  (sc_lv<8>) (zext_ln1118_266_fu_12931944_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_297_fu_3262_p2() {
    mul_ln1118_297_fu_3262_p2 = (!mul_ln1118_297_fu_3262_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_297_fu_3262_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_298_fu_1897_p0() {
    mul_ln1118_298_fu_1897_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12925753_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_298_fu_1897_p2() {
    mul_ln1118_298_fu_1897_p2 = (!mul_ln1118_298_fu_1897_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_298_fu_1897_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_299_fu_2583_p0() {
    mul_ln1118_299_fu_2583_p0 =  (sc_lv<8>) (zext_ln1118_47_fu_12925928_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_299_fu_2583_p2() {
    mul_ln1118_299_fu_2583_p2 = (!mul_ln1118_299_fu_2583_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_299_fu_2583_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_300_fu_1901_p0() {
    mul_ln1118_300_fu_1901_p0 =  (sc_lv<8>) (zext_ln1118_58_fu_12926117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_300_fu_1901_p2() {
    mul_ln1118_300_fu_1901_p2 = (!mul_ln1118_300_fu_1901_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_300_fu_1901_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_301_fu_1425_p0() {
    mul_ln1118_301_fu_1425_p0 =  (sc_lv<8>) (zext_ln708_17_fu_12926513_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_301_fu_1425_p2() {
    mul_ln1118_301_fu_1425_p2 = (!mul_ln1118_301_fu_1425_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_301_fu_1425_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_302_fu_1904_p0() {
    mul_ln1118_302_fu_1904_p0 =  (sc_lv<8>) (zext_ln1118_16_fu_12925346_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_302_fu_1904_p2() {
    mul_ln1118_302_fu_1904_p2 = (!mul_ln1118_302_fu_1904_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_302_fu_1904_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_303_fu_3443_p0() {
    mul_ln1118_303_fu_3443_p0 =  (sc_lv<8>) (zext_ln1118_164_fu_12928994_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_303_fu_3443_p2() {
    mul_ln1118_303_fu_3443_p2 = (!mul_ln1118_303_fu_3443_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_303_fu_3443_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_304_fu_3272_p0() {
    mul_ln1118_304_fu_3272_p0 =  (sc_lv<8>) (zext_ln1116_33_fu_12934501_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_304_fu_3272_p2() {
    mul_ln1118_304_fu_3272_p2 = (!mul_ln1118_304_fu_3272_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_304_fu_3272_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_305_fu_2594_p0() {
    mul_ln1118_305_fu_2594_p0 =  (sc_lv<8>) (zext_ln1118_58_fu_12926117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_305_fu_2594_p2() {
    mul_ln1118_305_fu_2594_p2 = (!mul_ln1118_305_fu_2594_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_305_fu_2594_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_306_fu_2156_p0() {
    mul_ln1118_306_fu_2156_p0 =  (sc_lv<8>) (zext_ln1118_191_fu_12929612_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_306_fu_2156_p2() {
    mul_ln1118_306_fu_2156_p2 = (!mul_ln1118_306_fu_2156_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_306_fu_2156_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_307_fu_2157_p0() {
    mul_ln1118_307_fu_2157_p0 =  (sc_lv<8>) (zext_ln1116_35_fu_12934904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_307_fu_2157_p2() {
    mul_ln1118_307_fu_2157_p2 = (!mul_ln1118_307_fu_2157_p0.read().is_01() || !ap_const_lv16_FF92.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_307_fu_2157_p0.read()) * sc_bigint<16>(ap_const_lv16_FF92);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_308_fu_3402_p0() {
    mul_ln1118_308_fu_3402_p0 =  (sc_lv<8>) (zext_ln1118_72_fu_12926405_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_308_fu_3402_p2() {
    mul_ln1118_308_fu_3402_p2 = (!mul_ln1118_308_fu_3402_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_308_fu_3402_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_309_fu_3403_p0() {
    mul_ln1118_309_fu_3403_p0 =  (sc_lv<8>) (zext_ln1118_75_fu_12926438_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_309_fu_3403_p2() {
    mul_ln1118_309_fu_3403_p2 = (!mul_ln1118_309_fu_3403_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_309_fu_3403_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_310_fu_2160_p0() {
    mul_ln1118_310_fu_2160_p0 =  (sc_lv<8>) (zext_ln1118_fu_12925089_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_310_fu_2160_p2() {
    mul_ln1118_310_fu_2160_p2 = (!mul_ln1118_310_fu_2160_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_310_fu_2160_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_311_fu_3405_p0() {
    mul_ln1118_311_fu_3405_p0 =  (sc_lv<8>) (zext_ln1118_255_fu_12931695_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_311_fu_3405_p2() {
    mul_ln1118_311_fu_3405_p2 = (!mul_ln1118_311_fu_3405_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_311_fu_3405_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_312_fu_3407_p0() {
    mul_ln1118_312_fu_3407_p0 =  (sc_lv<8>) (zext_ln1118_14_fu_12925303_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_312_fu_3407_p2() {
    mul_ln1118_312_fu_3407_p2 = (!mul_ln1118_312_fu_3407_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_312_fu_3407_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_313_fu_2603_p0() {
    mul_ln1118_313_fu_2603_p0 =  (sc_lv<8>) (zext_ln1116_4_fu_12925326_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_313_fu_2603_p2() {
    mul_ln1118_313_fu_2603_p2 = (!mul_ln1118_313_fu_2603_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_313_fu_2603_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_314_fu_3409_p0() {
    mul_ln1118_314_fu_3409_p0 =  (sc_lv<8>) (zext_ln1116_7_fu_12925411_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_314_fu_3409_p2() {
    mul_ln1118_314_fu_3409_p2 = (!mul_ln1118_314_fu_3409_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_314_fu_3409_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_315_fu_3410_p0() {
    mul_ln1118_315_fu_3410_p0 =  (sc_lv<8>) (mul_ln1118_315_fu_3410_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_315_fu_3410_p00() {
    mul_ln1118_315_fu_3410_p00 = esl_zext<13,8>(p_read8.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_315_fu_3410_p2() {
    mul_ln1118_315_fu_3410_p2 = (!mul_ln1118_315_fu_3410_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_315_fu_3410_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_316_fu_3411_p0() {
    mul_ln1118_316_fu_3411_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12931884_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_316_fu_3411_p2() {
    mul_ln1118_316_fu_3411_p2 = (!mul_ln1118_316_fu_3411_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_316_fu_3411_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_317_fu_2534_p0() {
    mul_ln1118_317_fu_2534_p0 =  (sc_lv<8>) (zext_ln1118_25_fu_12925534_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_317_fu_2534_p2() {
    mul_ln1118_317_fu_2534_p2 = (!mul_ln1118_317_fu_2534_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_317_fu_2534_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_318_fu_3413_p0() {
    mul_ln1118_318_fu_3413_p0 =  (sc_lv<8>) (zext_ln1116_9_fu_12925590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_318_fu_3413_p2() {
    mul_ln1118_318_fu_3413_p2 = (!mul_ln1118_318_fu_3413_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_318_fu_3413_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_319_fu_3415_p0() {
    mul_ln1118_319_fu_3415_p0 =  (sc_lv<8>) (zext_ln1116_25_fu_12931993_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_319_fu_3415_p2() {
    mul_ln1118_319_fu_3415_p2 = (!mul_ln1118_319_fu_3415_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_319_fu_3415_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_320_fu_2172_p0() {
    mul_ln1118_320_fu_2172_p0 =  (sc_lv<8>) (mul_ln1118_320_fu_2172_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_320_fu_2172_p00() {
    mul_ln1118_320_fu_2172_p00 = esl_zext<13,8>(p_read17.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_320_fu_2172_p2() {
    mul_ln1118_320_fu_2172_p2 = (!mul_ln1118_320_fu_2172_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_320_fu_2172_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_321_fu_1735_p0() {
    mul_ln1118_321_fu_1735_p0 =  (sc_lv<8>) (zext_ln1118_58_fu_12926117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_321_fu_1735_p2() {
    mul_ln1118_321_fu_1735_p2 = (!mul_ln1118_321_fu_1735_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_321_fu_1735_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_322_fu_3419_p0() {
    mul_ln1118_322_fu_3419_p0 =  (sc_lv<8>) (zext_ln1118_139_fu_12928019_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_322_fu_3419_p2() {
    mul_ln1118_322_fu_3419_p2 = (!mul_ln1118_322_fu_3419_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_322_fu_3419_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_323_fu_3420_p0() {
    mul_ln1118_323_fu_3420_p0 =  (sc_lv<8>) (zext_ln1118_192_fu_12929650_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_323_fu_3420_p2() {
    mul_ln1118_323_fu_3420_p2 = (!mul_ln1118_323_fu_3420_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_323_fu_3420_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_324_fu_1769_p0() {
    mul_ln1118_324_fu_1769_p0 =  (sc_lv<8>) (zext_ln708_56_fu_12929713_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_324_fu_1769_p2() {
    mul_ln1118_324_fu_1769_p2 = (!mul_ln1118_324_fu_1769_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_324_fu_1769_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_325_fu_2178_p0() {
    mul_ln1118_325_fu_2178_p0 =  (sc_lv<8>) (zext_ln1116_18_fu_12926426_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_325_fu_2178_p2() {
    mul_ln1118_325_fu_2178_p2 = (!mul_ln1118_325_fu_2178_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_325_fu_2178_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_326_fu_1740_p0() {
    mul_ln1118_326_fu_1740_p0 =  (sc_lv<8>) (zext_ln1116_1_fu_12925233_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_326_fu_1740_p2() {
    mul_ln1118_326_fu_1740_p2 = (!mul_ln1118_326_fu_1740_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_326_fu_1740_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_327_fu_1557_p0() {
    mul_ln1118_327_fu_1557_p0 =  (sc_lv<8>) (zext_ln1118_266_fu_12931944_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_327_fu_1557_p2() {
    mul_ln1118_327_fu_1557_p2 = (!mul_ln1118_327_fu_1557_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_327_fu_1557_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_328_fu_3395_p0() {
    mul_ln1118_328_fu_3395_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12925753_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_328_fu_3395_p2() {
    mul_ln1118_328_fu_3395_p2 = (!mul_ln1118_328_fu_3395_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_328_fu_3395_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_329_fu_3093_p0() {
    mul_ln1118_329_fu_3093_p0 =  (sc_lv<8>) (zext_ln1118_98_fu_12927036_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_329_fu_3093_p2() {
    mul_ln1118_329_fu_3093_p2 = (!mul_ln1118_329_fu_3093_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_329_fu_3093_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_330_fu_2960_p0() {
    mul_ln1118_330_fu_2960_p0 =  (sc_lv<8>) (zext_ln708_55_fu_12929574_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_330_fu_2960_p2() {
    mul_ln1118_330_fu_2960_p2 = (!mul_ln1118_330_fu_2960_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_330_fu_2960_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_331_fu_2658_p0() {
    mul_ln1118_331_fu_2658_p0 =  (sc_lv<8>) (zext_ln1118_62_fu_12926186_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_331_fu_2658_p2() {
    mul_ln1118_331_fu_2658_p2 = (!mul_ln1118_331_fu_2658_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_331_fu_2658_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_332_fu_3257_p0() {
    mul_ln1118_332_fu_3257_p0 =  (sc_lv<8>) (zext_ln1118_65_fu_12926247_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_332_fu_3257_p2() {
    mul_ln1118_332_fu_3257_p2 = (!mul_ln1118_332_fu_3257_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_332_fu_3257_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_333_fu_2617_p0() {
    mul_ln1118_333_fu_2617_p0 =  (sc_lv<8>) (zext_ln1116_1_fu_12925233_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_333_fu_2617_p2() {
    mul_ln1118_333_fu_2617_p2 = (!mul_ln1118_333_fu_2617_p0.read().is_01() || !ap_const_lv16_FFA8.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_333_fu_2617_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA8);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_334_fu_2315_p0() {
    mul_ln1118_334_fu_2315_p0 =  (sc_lv<8>) (zext_ln1118_13_fu_12925293_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_334_fu_2315_p2() {
    mul_ln1118_334_fu_2315_p2 = (!mul_ln1118_334_fu_2315_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_334_fu_2315_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_335_fu_2351_p0() {
    mul_ln1118_335_fu_2351_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12931884_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_335_fu_2351_p2() {
    mul_ln1118_335_fu_2351_p2 = (!mul_ln1118_335_fu_2351_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_335_fu_2351_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_336_fu_3288_p0() {
    mul_ln1118_336_fu_3288_p0 =  (sc_lv<8>) (zext_ln1118_171_fu_12929171_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_336_fu_3288_p2() {
    mul_ln1118_336_fu_3288_p2 = (!mul_ln1118_336_fu_3288_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_336_fu_3288_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_337_fu_2648_p0() {
    mul_ln1118_337_fu_2648_p0 =  (sc_lv<8>) (zext_ln1116_20_fu_12929226_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_337_fu_2648_p2() {
    mul_ln1118_337_fu_2648_p2 = (!mul_ln1118_337_fu_2648_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_337_fu_2648_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_338_fu_2008_p0() {
    mul_ln1118_338_fu_2008_p0 =  (sc_lv<8>) (zext_ln1116_15_fu_12925883_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_338_fu_2008_p2() {
    mul_ln1118_338_fu_2008_p2 = (!mul_ln1118_338_fu_2008_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_338_fu_2008_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_339_fu_1537_p0() {
    mul_ln1118_339_fu_1537_p0 =  (sc_lv<8>) (zext_ln1116_41_fu_12937028_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_339_fu_1537_p2() {
    mul_ln1118_339_fu_1537_p2 = (!mul_ln1118_339_fu_1537_p0.read().is_01() || !ap_const_lv16_FF96.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_339_fu_1537_p0.read()) * sc_bigint<16>(ap_const_lv16_FF96);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_340_fu_2643_p0() {
    mul_ln1118_340_fu_2643_p0 =  (sc_lv<8>) (zext_ln1116_16_fu_12926080_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_340_fu_2643_p2() {
    mul_ln1118_340_fu_2643_p2 = (!mul_ln1118_340_fu_2643_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_340_fu_2643_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_341_fu_2510_p0() {
    mul_ln1118_341_fu_2510_p0 =  (sc_lv<8>) (mul_ln1118_341_fu_2510_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_341_fu_2510_p00() {
    mul_ln1118_341_fu_2510_p00 = esl_zext<16,8>(p_read29.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_341_fu_2510_p2() {
    mul_ln1118_341_fu_2510_p2 = (!mul_ln1118_341_fu_2510_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_341_fu_2510_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_342_fu_2976_p0() {
    mul_ln1118_342_fu_2976_p0 =  (sc_lv<8>) (zext_ln1118_77_fu_12926499_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_342_fu_2976_p2() {
    mul_ln1118_342_fu_2976_p2 = (!mul_ln1118_342_fu_2976_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_342_fu_2976_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_343_fu_2167_p0() {
    mul_ln1118_343_fu_2167_p0 =  (sc_lv<8>) (zext_ln1118_14_fu_12925303_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_343_fu_2167_p2() {
    mul_ln1118_343_fu_2167_p2 = (!mul_ln1118_343_fu_2167_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_343_fu_2167_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_344_fu_1865_p0() {
    mul_ln1118_344_fu_1865_p0 =  (sc_lv<8>) (zext_ln1116_33_fu_12934501_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_344_fu_1865_p2() {
    mul_ln1118_344_fu_1865_p2 = (!mul_ln1118_344_fu_1865_p0.read().is_01() || !ap_const_lv16_FF8B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_344_fu_1865_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_345_fu_2802_p0() {
    mul_ln1118_345_fu_2802_p0 =  (sc_lv<8>) (zext_ln1118_26_fu_12925542_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_345_fu_2802_p2() {
    mul_ln1118_345_fu_2802_p2 = (!mul_ln1118_345_fu_2802_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_345_fu_2802_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_346_fu_2500_p0() {
    mul_ln1118_346_fu_2500_p0 =  (sc_lv<8>) (zext_ln1116_27_fu_12932063_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_346_fu_2500_p2() {
    mul_ln1118_346_fu_2500_p2 = (!mul_ln1118_346_fu_2500_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_346_fu_2500_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_347_fu_2198_p0() {
    mul_ln1118_347_fu_2198_p0 =  (sc_lv<8>) (zext_ln1118_185_fu_12929449_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_347_fu_2198_p2() {
    mul_ln1118_347_fu_2198_p2 = (!mul_ln1118_347_fu_2198_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_347_fu_2198_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_348_fu_3135_p0() {
    mul_ln1118_348_fu_3135_p0 =  (sc_lv<8>) (zext_ln1116_41_fu_12937028_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_348_fu_3135_p2() {
    mul_ln1118_348_fu_3135_p2 = (!mul_ln1118_348_fu_3135_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_348_fu_3135_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_349_fu_2833_p0() {
    mul_ln1118_349_fu_2833_p0 =  (sc_lv<8>) (zext_ln1116_16_fu_12926080_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_349_fu_2833_p2() {
    mul_ln1118_349_fu_2833_p2 = (!mul_ln1118_349_fu_2833_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_349_fu_2833_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_350_fu_1553_p0() {
    mul_ln1118_350_fu_1553_p0 =  (sc_lv<8>) (zext_ln1116_17_fu_12926331_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_350_fu_1553_p2() {
    mul_ln1118_350_fu_1553_p2 = (!mul_ln1118_350_fu_1553_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_350_fu_1553_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_351_fu_2224_p0() {
    mul_ln1118_351_fu_2224_p0 =  (sc_lv<8>) (zext_ln1118_77_fu_12926499_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_351_fu_2224_p2() {
    mul_ln1118_351_fu_2224_p2 = (!mul_ln1118_351_fu_2224_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_351_fu_2224_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_352_fu_2992_p0() {
    mul_ln1118_352_fu_2992_p0 =  (sc_lv<8>) (zext_ln1116_4_fu_12925326_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_352_fu_2992_p2() {
    mul_ln1118_352_fu_2992_p2 = (!mul_ln1118_352_fu_2992_p0.read().is_01() || !ap_const_lv16_FF97.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_352_fu_2992_p0.read()) * sc_bigint<16>(ap_const_lv16_FF97);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_353_fu_2521_p0() {
    mul_ln1118_353_fu_2521_p0 =  (sc_lv<8>) (zext_ln1118_164_fu_12928994_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_353_fu_2521_p2() {
    mul_ln1118_353_fu_2521_p2 = (!mul_ln1118_353_fu_2521_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_353_fu_2521_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_354_fu_2388_p0() {
    mul_ln1118_354_fu_2388_p0 =  (sc_lv<8>) (zext_ln1118_19_fu_12925419_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_354_fu_2388_p2() {
    mul_ln1118_354_fu_2388_p2 = (!mul_ln1118_354_fu_2388_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_354_fu_2388_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_355_fu_1579_p0() {
    mul_ln1118_355_fu_1579_p0 =  (sc_lv<8>) (zext_ln1116_33_fu_12934501_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_355_fu_1579_p2() {
    mul_ln1118_355_fu_1579_p2 = (!mul_ln1118_355_fu_1579_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_355_fu_1579_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_356_fu_2516_p0() {
    mul_ln1118_356_fu_2516_p0 =  (sc_lv<8>) (zext_ln1116_9_fu_12925590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_356_fu_2516_p2() {
    mul_ln1118_356_fu_2516_p2 = (!mul_ln1118_356_fu_2516_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_356_fu_2516_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_357_fu_2214_p0() {
    mul_ln1118_357_fu_2214_p0 =  (sc_lv<8>) (zext_ln1116_20_fu_12929226_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_357_fu_2214_p2() {
    mul_ln1118_357_fu_2214_p2 = (!mul_ln1118_357_fu_2214_p0.read().is_01() || !ap_const_lv16_FFAA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_357_fu_2214_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_358_fu_3320_p0() {
    mul_ln1118_358_fu_3320_p0 =  (sc_lv<8>) (zext_ln1118_42_fu_12925840_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_358_fu_3320_p2() {
    mul_ln1118_358_fu_3320_p2 = (!mul_ln1118_358_fu_3320_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_358_fu_3320_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_359_fu_3018_p0() {
    mul_ln1118_359_fu_3018_p0 =  (sc_lv<8>) (zext_ln1116_35_fu_12934904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_359_fu_3018_p2() {
    mul_ln1118_359_fu_3018_p2 = (!mul_ln1118_359_fu_3018_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_359_fu_3018_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_360_fu_2547_p0() {
    mul_ln1118_360_fu_2547_p0 =  (sc_lv<8>) (zext_ln1118_69_fu_12926338_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_360_fu_2547_p2() {
    mul_ln1118_360_fu_2547_p2 = (!mul_ln1118_360_fu_2547_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_360_fu_2547_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_361_fu_1907_p0() {
    mul_ln1118_361_fu_1907_p0 =  (sc_lv<8>) (zext_ln708_56_fu_12929713_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_361_fu_1907_p2() {
    mul_ln1118_361_fu_1907_p2 = (!mul_ln1118_361_fu_1907_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_361_fu_1907_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_362_fu_3013_p0() {
    mul_ln1118_362_fu_3013_p0 =  (sc_lv<8>) (zext_ln1118_13_fu_12925293_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_362_fu_3013_p2() {
    mul_ln1118_362_fu_3013_p2 = (!mul_ln1118_362_fu_3013_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_362_fu_3013_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_363_fu_2409_p0() {
    mul_ln1118_363_fu_2409_p0 =  (sc_lv<8>) (zext_ln1116_7_fu_12925411_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_363_fu_2409_p2() {
    mul_ln1118_363_fu_2409_p2 = (!mul_ln1118_363_fu_2409_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_363_fu_2409_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_364_fu_1431_p0() {
    mul_ln1118_364_fu_1431_p0 =  (sc_lv<8>) (zext_ln1118_24_fu_12925508_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_364_fu_1431_p2() {
    mul_ln1118_364_fu_1431_p2 = (!mul_ln1118_364_fu_1431_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_364_fu_1431_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_365_fu_2706_p0() {
    mul_ln1118_365_fu_2706_p0 =  (sc_lv<8>) (zext_ln708_77_fu_12931911_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_365_fu_2706_p2() {
    mul_ln1118_365_fu_2706_p2 = (!mul_ln1118_365_fu_2706_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_365_fu_2706_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_366_fu_2066_p0() {
    mul_ln1118_366_fu_2066_p0 =  (sc_lv<8>) (zext_ln1118_171_fu_12929171_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_366_fu_2066_p2() {
    mul_ln1118_366_fu_2066_p2 = (!mul_ln1118_366_fu_2066_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_366_fu_2066_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_367_fu_1595_p0() {
    mul_ln1118_367_fu_1595_p0 =  (sc_lv<8>) (zext_ln1118_268_fu_12931999_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_367_fu_1595_p2() {
    mul_ln1118_367_fu_1595_p2 = (!mul_ln1118_367_fu_1595_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_367_fu_1595_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_368_fu_2568_p0() {
    mul_ln1118_368_fu_2568_p0 =  (sc_lv<8>) (zext_ln1118_51_fu_12925988_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_368_fu_2568_p2() {
    mul_ln1118_368_fu_2568_p2 = (!mul_ln1118_368_fu_2568_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_368_fu_2568_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_369_fu_1790_p0() {
    mul_ln1118_369_fu_1790_p0 =  (sc_lv<8>) (zext_ln1116_fu_12925136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_369_fu_1790_p2() {
    mul_ln1118_369_fu_1790_p2 = (!mul_ln1118_369_fu_1790_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_369_fu_1790_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_370_fu_1488_p0() {
    mul_ln1118_370_fu_1488_p0 =  (sc_lv<8>) (zext_ln1118_13_fu_12925293_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_370_fu_1488_p2() {
    mul_ln1118_370_fu_1488_p2 = (!mul_ln1118_370_fu_1488_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_370_fu_1488_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_371_fu_1683_p0() {
    mul_ln1118_371_fu_1683_p0 =  (sc_lv<8>) (zext_ln1116_4_fu_12925326_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_371_fu_1683_p2() {
    mul_ln1118_371_fu_1683_p2 = (!mul_ln1118_371_fu_1683_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_371_fu_1683_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_372_fu_3050_p0() {
    mul_ln1118_372_fu_3050_p0 =  (sc_lv<8>) (zext_ln1118_164_fu_12928994_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_372_fu_3050_p2() {
    mul_ln1118_372_fu_3050_p2 = (!mul_ln1118_372_fu_3050_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_372_fu_3050_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_373_fu_1685_p0() {
    mul_ln1118_373_fu_1685_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12931884_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_373_fu_1685_p2() {
    mul_ln1118_373_fu_1685_p2 = (!mul_ln1118_373_fu_1685_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_373_fu_1685_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_374_fu_2779_p0() {
    mul_ln1118_374_fu_2779_p0 =  (sc_lv<8>) (zext_ln1118_25_fu_12925534_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_374_fu_2779_p2() {
    mul_ln1118_374_fu_2779_p2 = (!mul_ln1118_374_fu_2779_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_374_fu_2779_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_375_fu_1687_p0() {
    mul_ln1118_375_fu_1687_p0 =  (sc_lv<8>) (zext_ln1116_11_fu_12925647_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_375_fu_1687_p2() {
    mul_ln1118_375_fu_1687_p2 = (!mul_ln1118_375_fu_1687_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_375_fu_1687_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_376_fu_3054_p0() {
    mul_ln1118_376_fu_3054_p0 =  (sc_lv<8>) (zext_ln1118_33_fu_12925712_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_376_fu_3054_p2() {
    mul_ln1118_376_fu_3054_p2 = (!mul_ln1118_376_fu_3054_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_376_fu_3054_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_377_fu_2372_p0() {
    mul_ln1118_377_fu_2372_p0 =  (sc_lv<8>) (zext_ln1116_13_fu_12925806_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_377_fu_2372_p2() {
    mul_ln1118_377_fu_2372_p2 = (!mul_ln1118_377_fu_2372_p0.read().is_01() || !ap_const_lv16_FF9A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_377_fu_2372_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_378_fu_3056_p0() {
    mul_ln1118_378_fu_3056_p0 =  (sc_lv<8>) (zext_ln1118_45_fu_12925889_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_378_fu_3056_p2() {
    mul_ln1118_378_fu_3056_p2 = (!mul_ln1118_378_fu_3056_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_378_fu_3056_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_379_fu_3059_p0() {
    mul_ln1118_379_fu_3059_p0 =  (sc_lv<8>) (zext_ln1118_372_fu_12935945_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_379_fu_3059_p2() {
    mul_ln1118_379_fu_3059_p2 = (!mul_ln1118_379_fu_3059_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_379_fu_3059_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_380_fu_2377_p0() {
    mul_ln1118_380_fu_2377_p0 =  (sc_lv<8>) (zext_ln1118_75_fu_12926438_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_380_fu_2377_p2() {
    mul_ln1118_380_fu_2377_p2 = (!mul_ln1118_380_fu_2377_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_380_fu_2377_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_381_fu_1696_p0() {
    mul_ln1118_381_fu_1696_p0 =  (sc_lv<8>) (zext_ln708_fu_12925494_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_381_fu_1696_p2() {
    mul_ln1118_381_fu_1696_p2 = (!mul_ln1118_381_fu_1696_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_381_fu_1696_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_382_fu_2107_p0() {
    mul_ln1118_382_fu_2107_p0 =  (sc_lv<8>) (zext_ln1118_268_fu_12931999_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_382_fu_2107_p2() {
    mul_ln1118_382_fu_2107_p2 = (!mul_ln1118_382_fu_2107_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_382_fu_2107_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_383_fu_3064_p0() {
    mul_ln1118_383_fu_3064_p0 =  (sc_lv<8>) (zext_ln1118_40_fu_12925814_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_383_fu_3064_p2() {
    mul_ln1118_383_fu_3064_p2 = (!mul_ln1118_383_fu_3064_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_383_fu_3064_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_384_fu_3270_p0() {
    mul_ln1118_384_fu_3270_p0 =  (sc_lv<8>) (zext_ln1118_93_fu_12926917_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_384_fu_3270_p2() {
    mul_ln1118_384_fu_3270_p2 = (!mul_ln1118_384_fu_3270_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_384_fu_3270_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_385_fu_1905_p0() {
    mul_ln1118_385_fu_1905_p0 =  (sc_lv<8>) (zext_ln1118_47_fu_12925928_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_385_fu_1905_p2() {
    mul_ln1118_385_fu_1905_p2 = (!mul_ln1118_385_fu_1905_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_385_fu_1905_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_386_fu_3067_p0() {
    mul_ln1118_386_fu_3067_p0 =  (sc_lv<8>) (zext_ln1118_52_fu_12925998_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_386_fu_3067_p2() {
    mul_ln1118_386_fu_3067_p2 = (!mul_ln1118_386_fu_3067_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_386_fu_3067_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_387_fu_2385_p0() {
    mul_ln1118_387_fu_2385_p0 =  (sc_lv<8>) (zext_ln1118_98_fu_12927036_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_387_fu_2385_p2() {
    mul_ln1118_387_fu_2385_p2 = (!mul_ln1118_387_fu_2385_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_387_fu_2385_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_388_fu_3069_p0() {
    mul_ln1118_388_fu_3069_p0 =  (sc_lv<8>) (zext_ln1118_57_fu_12926098_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_388_fu_3069_p2() {
    mul_ln1118_388_fu_3069_p2 = (!mul_ln1118_388_fu_3069_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_388_fu_3069_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_389_fu_3070_p0() {
    mul_ln1118_389_fu_3070_p0 =  (sc_lv<8>) (zext_ln1118_62_fu_12926186_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_389_fu_3070_p2() {
    mul_ln1118_389_fu_3070_p2 = (!mul_ln1118_389_fu_3070_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_389_fu_3070_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_390_fu_3071_p0() {
    mul_ln1118_390_fu_3071_p0 =  (sc_lv<8>) (zext_ln1118_66_fu_12926252_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_390_fu_3071_p2() {
    mul_ln1118_390_fu_3071_p2 = (!mul_ln1118_390_fu_3071_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_390_fu_3071_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_391_fu_3072_p0() {
    mul_ln1118_391_fu_3072_p0 =  (sc_lv<8>) (zext_ln1118_68_fu_12926309_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_391_fu_3072_p2() {
    mul_ln1118_391_fu_3072_p2 = (!mul_ln1118_391_fu_3072_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_391_fu_3072_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_392_fu_2596_p0() {
    mul_ln1118_392_fu_2596_p0 =  (sc_lv<8>) (mult_126_V_fu_12928828_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_392_fu_2596_p2() {
    mul_ln1118_392_fu_2596_p2 = (!mul_ln1118_392_fu_2596_p0.read().is_01() || !ap_const_lv16_FF8E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_392_fu_2596_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_393_fu_2392_p0() {
    mul_ln1118_393_fu_2392_p0 =  (sc_lv<8>) (zext_ln1116_36_fu_12936692_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_393_fu_2392_p2() {
    mul_ln1118_393_fu_2392_p2 = (!mul_ln1118_393_fu_2392_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_393_fu_2392_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_394_fu_1710_p0() {
    mul_ln1118_394_fu_1710_p0 =  (sc_lv<8>) (zext_ln1116_fu_12925136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_394_fu_1710_p2() {
    mul_ln1118_394_fu_1710_p2 = (!mul_ln1118_394_fu_1710_p0.read().is_01() || !ap_const_lv16_FFAA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_394_fu_1710_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_395_fu_1912_p0() {
    mul_ln1118_395_fu_1912_p0 =  (sc_lv<8>) (zext_ln1118_7_fu_12925174_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_395_fu_1912_p2() {
    mul_ln1118_395_fu_1912_p2 = (!mul_ln1118_395_fu_1912_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_395_fu_1912_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_396_fu_3158_p0() {
    mul_ln1118_396_fu_3158_p0 =  (sc_lv<8>) (zext_ln1116_3_fu_12925285_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_396_fu_3158_p2() {
    mul_ln1118_396_fu_3158_p2 = (!mul_ln1118_396_fu_3158_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_396_fu_3158_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_397_fu_2725_p0() {
    mul_ln1118_397_fu_2725_p0 =  (sc_lv<8>) (zext_ln708_13_fu_12926172_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_397_fu_2725_p2() {
    mul_ln1118_397_fu_2725_p2 = (!mul_ln1118_397_fu_2725_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_397_fu_2725_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_398_fu_1922_p0() {
    mul_ln1118_398_fu_1922_p0 =  (sc_lv<8>) (zext_ln1116_fu_12925136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_398_fu_1922_p2() {
    mul_ln1118_398_fu_1922_p2 = (!mul_ln1118_398_fu_1922_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_398_fu_1922_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_399_fu_3095_p0() {
    mul_ln1118_399_fu_3095_p0 =  (sc_lv<8>) (zext_ln1116_3_fu_12925285_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_399_fu_3095_p2() {
    mul_ln1118_399_fu_3095_p2 = (!mul_ln1118_399_fu_3095_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_399_fu_3095_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_400_fu_2730_p0() {
    mul_ln1118_400_fu_2730_p0 =  (sc_lv<8>) (zext_ln1118_24_fu_12925508_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_400_fu_2730_p2() {
    mul_ln1118_400_fu_2730_p2 = (!mul_ln1118_400_fu_2730_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_400_fu_2730_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_401_fu_1926_p0() {
    mul_ln1118_401_fu_1926_p0 =  (sc_lv<8>) (zext_ln1116_8_fu_12925529_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_401_fu_1926_p2() {
    mul_ln1118_401_fu_1926_p2 = (!mul_ln1118_401_fu_1926_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_401_fu_1926_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_402_fu_1927_p0() {
    mul_ln1118_402_fu_1927_p0 =  (sc_lv<8>) (zext_ln1116_9_fu_12925590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_402_fu_1927_p2() {
    mul_ln1118_402_fu_1927_p2 = (!mul_ln1118_402_fu_1927_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_402_fu_1927_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_403_fu_3172_p0() {
    mul_ln1118_403_fu_3172_p0 =  (sc_lv<8>) (zext_ln1116_11_fu_12925647_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_403_fu_3172_p2() {
    mul_ln1118_403_fu_3172_p2 = (!mul_ln1118_403_fu_3172_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_403_fu_3172_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_404_fu_1929_p0() {
    mul_ln1118_404_fu_1929_p0 =  (sc_lv<8>) (zext_ln1118_41_fu_12925820_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_404_fu_1929_p2() {
    mul_ln1118_404_fu_1929_p2 = (!mul_ln1118_404_fu_1929_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_404_fu_1929_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_405_fu_3174_p0() {
    mul_ln1118_405_fu_3174_p0 =  (sc_lv<8>) (zext_ln1116_28_fu_12932084_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_405_fu_3174_p2() {
    mul_ln1118_405_fu_3174_p2 = (!mul_ln1118_405_fu_3174_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_405_fu_3174_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_406_fu_1931_p0() {
    mul_ln1118_406_fu_1931_p0 =  (sc_lv<8>) (zext_ln1116_41_fu_12937028_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_406_fu_1931_p2() {
    mul_ln1118_406_fu_1931_p2 = (!mul_ln1118_406_fu_1931_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_406_fu_1931_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_407_fu_1933_p0() {
    mul_ln1118_407_fu_1933_p0 =  (sc_lv<8>) (zext_ln1116_31_fu_12932230_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_407_fu_1933_p2() {
    mul_ln1118_407_fu_1933_p2 = (!mul_ln1118_407_fu_1933_p0.read().is_01() || !ap_const_lv16_FF9A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_407_fu_1933_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_408_fu_1934_p0() {
    mul_ln1118_408_fu_1934_p0 =  (sc_lv<8>) (zext_ln1116_42_fu_12937134_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_408_fu_1934_p2() {
    mul_ln1118_408_fu_1934_p2 = (!mul_ln1118_408_fu_1934_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_408_fu_1934_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_409_fu_1936_p0() {
    mul_ln1118_409_fu_1936_p0 =  (sc_lv<8>) (zext_ln1116_17_fu_12926331_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_409_fu_1936_p2() {
    mul_ln1118_409_fu_1936_p2 = (!mul_ln1118_409_fu_1936_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_409_fu_1936_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_410_fu_3001_p0() {
    mul_ln1118_410_fu_3001_p0 =  (sc_lv<8>) (zext_ln708_56_fu_12929713_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_410_fu_3001_p2() {
    mul_ln1118_410_fu_3001_p2 = (!mul_ln1118_410_fu_3001_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_410_fu_3001_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_411_fu_1721_p0() {
    mul_ln1118_411_fu_1721_p0 =  (sc_lv<8>) (zext_ln1118_6_fu_12925150_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_411_fu_1721_p2() {
    mul_ln1118_411_fu_1721_p2 = (!mul_ln1118_411_fu_1721_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_411_fu_1721_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_412_fu_2827_p0() {
    mul_ln1118_412_fu_2827_p0 =  (sc_lv<8>) (mul_ln1118_412_fu_2827_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_412_fu_2827_p00() {
    mul_ln1118_412_fu_2827_p00 = esl_zext<13,8>(p_read3.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_412_fu_2827_p2() {
    mul_ln1118_412_fu_2827_p2 = (!mul_ln1118_412_fu_2827_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_412_fu_2827_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_413_fu_2863_p0() {
    mul_ln1118_413_fu_2863_p0 =  (sc_lv<8>) (zext_ln1118_164_fu_12928994_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_413_fu_2863_p2() {
    mul_ln1118_413_fu_2863_p2 = (!mul_ln1118_413_fu_2863_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_413_fu_2863_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_414_fu_1885_p0() {
    mul_ln1118_414_fu_1885_p0 =  (sc_lv<8>) (zext_ln1118_260_fu_12931822_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_414_fu_1885_p2() {
    mul_ln1118_414_fu_1885_p2 = (!mul_ln1118_414_fu_1885_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_414_fu_1885_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_415_fu_2090_p0() {
    mul_ln1118_415_fu_2090_p0 =  (sc_lv<8>) (zext_ln1118_47_fu_12925928_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_415_fu_2090_p2() {
    mul_ln1118_415_fu_2090_p2 = (!mul_ln1118_415_fu_2090_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_415_fu_2090_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_416_fu_2520_p0() {
    mul_ln1118_416_fu_2520_p0 =  (sc_lv<8>) (zext_ln1118_56_fu_12926091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_416_fu_2520_p2() {
    mul_ln1118_416_fu_2520_p2 = (!mul_ln1118_416_fu_2520_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_416_fu_2520_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_417_fu_2218_p0() {
    mul_ln1118_417_fu_2218_p0 =  (sc_lv<8>) (zext_ln1118_66_fu_12926252_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_417_fu_2218_p2() {
    mul_ln1118_417_fu_2218_p2 = (!mul_ln1118_417_fu_2218_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_417_fu_2218_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_418_fu_1578_p0() {
    mul_ln1118_418_fu_1578_p0 =  (sc_lv<8>) (zext_ln1118_194_fu_12929662_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_418_fu_1578_p2() {
    mul_ln1118_418_fu_1578_p2 = (!mul_ln1118_418_fu_1578_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_418_fu_1578_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_419_fu_1614_p0() {
    mul_ln1118_419_fu_1614_p0 =  (sc_lv<8>) (zext_ln1116_51_fu_12944502_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_419_fu_1614_p2() {
    mul_ln1118_419_fu_1614_p2 = (!mul_ln1118_419_fu_1614_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_419_fu_1614_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_420_fu_2889_p0() {
    mul_ln1118_420_fu_2889_p0 =  (sc_lv<8>) (zext_ln1116_54_fu_12944651_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_420_fu_2889_p2() {
    mul_ln1118_420_fu_2889_p2 = (!mul_ln1118_420_fu_2889_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_420_fu_2889_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_421_fu_1911_p0() {
    mul_ln1118_421_fu_1911_p0 =  (sc_lv<8>) (zext_ln1118_575_fu_12944712_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_421_fu_1911_p2() {
    mul_ln1118_421_fu_1911_p2 = (!mul_ln1118_421_fu_1911_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_421_fu_1911_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_422_fu_2715_p0() {
    mul_ln1118_422_fu_2715_p0 =  (sc_lv<8>) (zext_ln708_242_fu_12944860_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_422_fu_2715_p2() {
    mul_ln1118_422_fu_2715_p2 = (!mul_ln1118_422_fu_2715_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_422_fu_2715_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_423_fu_2582_p0() {
    mul_ln1118_423_fu_2582_p0 =  (sc_lv<8>) (zext_ln1116_62_fu_12945013_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_423_fu_2582_p2() {
    mul_ln1118_423_fu_2582_p2 = (!mul_ln1118_423_fu_2582_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_423_fu_2582_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_424_fu_3181_p0() {
    mul_ln1118_424_fu_3181_p0 =  (sc_lv<8>) (zext_ln1118_600_fu_12945186_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_424_fu_3181_p2() {
    mul_ln1118_424_fu_3181_p2 = (!mul_ln1118_424_fu_3181_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_424_fu_3181_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_425_fu_2408_p0() {
    mul_ln1118_425_fu_2408_p0 =  (sc_lv<8>) (zext_ln1118_603_fu_12945229_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_425_fu_2408_p2() {
    mul_ln1118_425_fu_2408_p2 = (!mul_ln1118_425_fu_2408_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_425_fu_2408_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_426_fu_1768_p0() {
    mul_ln1118_426_fu_1768_p0 =  (sc_lv<8>) (zext_ln1116_67_fu_12945446_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_426_fu_1768_p2() {
    mul_ln1118_426_fu_1768_p2 = (!mul_ln1118_426_fu_1768_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_426_fu_1768_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_427_fu_2705_p0() {
    mul_ln1118_427_fu_2705_p0 =  (sc_lv<8>) (zext_ln1118_626_fu_12945666_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_427_fu_2705_p2() {
    mul_ln1118_427_fu_2705_p2 = (!mul_ln1118_427_fu_2705_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_427_fu_2705_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_428_fu_3079_p0() {
    mul_ln1118_428_fu_3079_p0 =  (sc_lv<8>) (zext_ln1116_68_fu_12945697_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_428_fu_3079_p2() {
    mul_ln1118_428_fu_3079_p2 = (!mul_ln1118_428_fu_3079_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_428_fu_3079_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_429_fu_1932_p0() {
    mul_ln1118_429_fu_1932_p0 =  (sc_lv<8>) (zext_ln1118_631_fu_12945771_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_429_fu_1932_p2() {
    mul_ln1118_429_fu_1932_p2 = (!mul_ln1118_429_fu_1932_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_429_fu_1932_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_430_fu_1461_p0() {
    mul_ln1118_430_fu_1461_p0 =  (sc_lv<8>) (zext_ln1116_69_fu_12945792_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_430_fu_1461_p2() {
    mul_ln1118_430_fu_1461_p2 = (!mul_ln1118_430_fu_1461_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_430_fu_1461_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_431_fu_2905_p0() {
    mul_ln1118_431_fu_2905_p0 =  (sc_lv<8>) (zext_ln1118_565_fu_12944516_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_431_fu_2905_p2() {
    mul_ln1118_431_fu_2905_p2 = (!mul_ln1118_431_fu_2905_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_431_fu_2905_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_432_fu_3202_p0() {
    mul_ln1118_432_fu_3202_p0 =  (sc_lv<8>) (zext_ln1116_55_fu_12944692_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_432_fu_3202_p2() {
    mul_ln1118_432_fu_3202_p2 = (!mul_ln1118_432_fu_3202_p0.read().is_01() || !ap_const_lv16_FF8B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_432_fu_3202_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_433_fu_2091_p0() {
    mul_ln1118_433_fu_2091_p0 =  (sc_lv<8>) (zext_ln1118_581_fu_12944830_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_433_fu_2091_p2() {
    mul_ln1118_433_fu_2091_p2 = (!mul_ln1118_433_fu_2091_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_433_fu_2091_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_434_fu_1789_p0() {
    mul_ln1118_434_fu_1789_p0 =  (sc_lv<8>) (zext_ln1118_583_fu_12944874_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_434_fu_1789_p2() {
    mul_ln1118_434_fu_1789_p2 = (!mul_ln1118_434_fu_1789_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_434_fu_1789_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_435_fu_2895_p0() {
    mul_ln1118_435_fu_2895_p0 =  (sc_lv<8>) (zext_ln1116_60_fu_12944956_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_435_fu_2895_p2() {
    mul_ln1118_435_fu_2895_p2 = (!mul_ln1118_435_fu_2895_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_435_fu_2895_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_436_fu_2762_p0() {
    mul_ln1118_436_fu_2762_p0 =  (sc_lv<8>) (zext_ln1118_592_fu_12945078_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_436_fu_2762_p2() {
    mul_ln1118_436_fu_2762_p2 = (!mul_ln1118_436_fu_2762_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_436_fu_2762_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_437_fu_2122_p0() {
    mul_ln1118_437_fu_2122_p0 =  (sc_lv<8>) (zext_ln1118_650_fu_12946257_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_437_fu_2122_p2() {
    mul_ln1118_437_fu_2122_p2 = (!mul_ln1118_437_fu_2122_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_437_fu_2122_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_438_fu_2757_p0() {
    mul_ln1118_438_fu_2757_p0 =  (sc_lv<8>) (zext_ln1118_657_fu_12946402_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_438_fu_2757_p2() {
    mul_ln1118_438_fu_2757_p2 = (!mul_ln1118_438_fu_2757_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_438_fu_2757_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_439_fu_2624_p0() {
    mul_ln1118_439_fu_2624_p0 =  (sc_lv<8>) (zext_ln1118_621_fu_12945552_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_439_fu_2624_p2() {
    mul_ln1118_439_fu_2624_p2 = (!mul_ln1118_439_fu_2624_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_439_fu_2624_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_440_fu_1984_p0() {
    mul_ln1118_440_fu_1984_p0 =  (sc_lv<8>) (zext_ln1118_626_fu_12945666_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_440_fu_1984_p2() {
    mul_ln1118_440_fu_1984_p2 = (!mul_ln1118_440_fu_1984_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_440_fu_1984_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_441_fu_2752_p0() {
    mul_ln1118_441_fu_2752_p0 =  (sc_lv<8>) (zext_ln1118_628_fu_12945704_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_441_fu_2752_p2() {
    mul_ln1118_441_fu_2752_p2 = (!mul_ln1118_441_fu_2752_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_441_fu_2752_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_442_fu_2916_p0() {
    mul_ln1118_442_fu_2916_p0 =  (sc_lv<8>) (zext_ln1118_574_fu_12944702_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_442_fu_2916_p2() {
    mul_ln1118_442_fu_2916_p2 = (!mul_ln1118_442_fu_2916_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_442_fu_2916_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_443_fu_1805_p0() {
    mul_ln1118_443_fu_1805_p0 =  (sc_lv<8>) (zext_ln1118_592_fu_12945078_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_443_fu_1805_p2() {
    mul_ln1118_443_fu_1805_p2 = (!mul_ln1118_443_fu_1805_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_443_fu_1805_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_444_fu_3249_p0() {
    mul_ln1118_444_fu_3249_p0 =  (sc_lv<8>) (zext_ln1118_603_fu_12945229_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_444_fu_3249_p2() {
    mul_ln1118_444_fu_3249_p2 = (!mul_ln1118_444_fu_3249_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_444_fu_3249_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_445_fu_2609_p0() {
    mul_ln1118_445_fu_2609_p0 =  (sc_lv<8>) (zext_ln1118_657_fu_12946402_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_445_fu_2609_p2() {
    mul_ln1118_445_fu_2609_p2 = (!mul_ln1118_445_fu_2609_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_445_fu_2609_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_446_fu_2138_p0() {
    mul_ln1118_446_fu_2138_p0 =  (sc_lv<8>) (zext_ln1118_617_fu_12945483_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_446_fu_2138_p2() {
    mul_ln1118_446_fu_2138_p2 = (!mul_ln1118_446_fu_2138_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_446_fu_2138_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_447_fu_1667_p0() {
    mul_ln1118_447_fu_1667_p0 =  (sc_lv<8>) (zext_ln1118_698_fu_12947385_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_447_fu_1667_p2() {
    mul_ln1118_447_fu_1667_p2 = (!mul_ln1118_447_fu_1667_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_447_fu_1667_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_448_fu_3111_p0() {
    mul_ln1118_448_fu_3111_p0 =  (sc_lv<8>) (zext_ln1118_628_fu_12945704_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_448_fu_3111_p2() {
    mul_ln1118_448_fu_3111_p2 = (!mul_ln1118_448_fu_3111_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_448_fu_3111_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_449_fu_2338_p0() {
    mul_ln1118_449_fu_2338_p0 =  (sc_lv<8>) (zext_ln1116_51_fu_12944502_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_449_fu_2338_p2() {
    mul_ln1118_449_fu_2338_p2 = (!mul_ln1118_449_fu_2338_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_449_fu_2338_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_450_fu_1529_p0() {
    mul_ln1118_450_fu_1529_p0 =  (sc_lv<8>) (zext_ln1116_52_fu_12944599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_450_fu_1529_p2() {
    mul_ln1118_450_fu_1529_p2 = (!mul_ln1118_450_fu_1529_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_450_fu_1529_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_451_fu_2466_p0() {
    mul_ln1118_451_fu_2466_p0 =  (sc_lv<8>) (zext_ln1118_574_fu_12944702_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_451_fu_2466_p2() {
    mul_ln1118_451_fu_2466_p2 = (!mul_ln1118_451_fu_2466_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_451_fu_2466_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_452_fu_2164_p0() {
    mul_ln1118_452_fu_2164_p0 =  (sc_lv<8>) (zext_ln1116_57_fu_12944733_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_452_fu_2164_p2() {
    mul_ln1118_452_fu_2164_p2 = (!mul_ln1118_452_fu_2164_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_452_fu_2164_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_453_fu_3439_p0() {
    mul_ln1118_453_fu_3439_p0 =  (sc_lv<8>) (zext_ln1118_580_fu_12944825_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_453_fu_3439_p2() {
    mul_ln1118_453_fu_3439_p2 = (!mul_ln1118_453_fu_3439_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_453_fu_3439_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_454_fu_2799_p0() {
    mul_ln1118_454_fu_2799_p0 =  (sc_lv<8>) (zext_ln708_243_fu_12944974_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_454_fu_2799_p2() {
    mul_ln1118_454_fu_2799_p2 = (!mul_ln1118_454_fu_2799_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_454_fu_2799_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_455_fu_2159_p0() {
    mul_ln1118_455_fu_2159_p0 =  (sc_lv<8>) (zext_ln1116_64_fu_12945172_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_455_fu_2159_p2() {
    mul_ln1118_455_fu_2159_p2 = (!mul_ln1118_455_fu_2159_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_455_fu_2159_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_456_fu_3434_p0() {
    mul_ln1118_456_fu_3434_p0 =  (sc_lv<8>) (zext_ln1116_66_fu_12945249_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_456_fu_3434_p2() {
    mul_ln1118_456_fu_3434_p2 = (!mul_ln1118_456_fu_3434_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_456_fu_3434_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_457_fu_3327_p0() {
    mul_ln1118_457_fu_3327_p0 =  (sc_lv<8>) (zext_ln1116_67_fu_12945446_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_457_fu_3327_p2() {
    mul_ln1118_457_fu_3327_p2 = (!mul_ln1118_457_fu_3327_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_457_fu_3327_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_458_fu_1963_p0() {
    mul_ln1118_458_fu_1963_p0 =  (sc_lv<8>) (zext_ln1118_627_fu_12945675_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_458_fu_1963_p2() {
    mul_ln1118_458_fu_1963_p2 = (!mul_ln1118_458_fu_1963_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_458_fu_1963_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_459_fu_3332_p0() {
    mul_ln1118_459_fu_3332_p0 =  (sc_lv<8>) (zext_ln1118_563_fu_12944455_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_459_fu_3332_p2() {
    mul_ln1118_459_fu_3332_p2 = (!mul_ln1118_459_fu_3332_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_459_fu_3332_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_460_fu_2650_p0() {
    mul_ln1118_460_fu_2650_p0 =  (sc_lv<8>) (zext_ln1118_566_fu_12944540_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_460_fu_2650_p2() {
    mul_ln1118_460_fu_2650_p2 = (!mul_ln1118_460_fu_2650_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_460_fu_2650_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_461_fu_1968_p0() {
    mul_ln1118_461_fu_1968_p0 =  (sc_lv<8>) (zext_ln1118_636_fu_12945865_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_461_fu_1968_p2() {
    mul_ln1118_461_fu_1968_p2 = (!mul_ln1118_461_fu_1968_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_461_fu_1968_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_462_fu_3335_p0() {
    mul_ln1118_462_fu_3335_p0 =  (sc_lv<8>) (zext_ln1118_575_fu_12944712_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_462_fu_3335_p2() {
    mul_ln1118_462_fu_3335_p2 = (!mul_ln1118_462_fu_3335_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_462_fu_3335_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_463_fu_2653_p0() {
    mul_ln1118_463_fu_2653_p0 =  (sc_lv<8>) (zext_ln1118_578_fu_12944785_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_463_fu_2653_p2() {
    mul_ln1118_463_fu_2653_p2 = (!mul_ln1118_463_fu_2653_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_463_fu_2653_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_464_fu_1668_p0() {
    mul_ln1118_464_fu_1668_p0 =  (sc_lv<8>) (zext_ln708_243_fu_12944974_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_464_fu_1668_p2() {
    mul_ln1118_464_fu_1668_p2 = (!mul_ln1118_464_fu_1668_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_464_fu_1668_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_465_fu_1972_p0() {
    mul_ln1118_465_fu_1972_p0 =  (sc_lv<8>) (zext_ln708_256_fu_12946085_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_465_fu_1972_p2() {
    mul_ln1118_465_fu_1972_p2 = (!mul_ln1118_465_fu_1972_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_465_fu_1972_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_466_fu_3339_p0() {
    mul_ln1118_466_fu_3339_p0 =  (sc_lv<8>) (zext_ln1118_599_fu_12945180_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_466_fu_3339_p2() {
    mul_ln1118_466_fu_3339_p2 = (!mul_ln1118_466_fu_3339_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_466_fu_3339_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_467_fu_1974_p0() {
    mul_ln1118_467_fu_1974_p0 =  (sc_lv<8>) (zext_ln1118_743_fu_12948796_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_467_fu_1974_p2() {
    mul_ln1118_467_fu_1974_p2 = (!mul_ln1118_467_fu_1974_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_467_fu_1974_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_468_fu_3341_p0() {
    mul_ln1118_468_fu_3341_p0 =  (sc_lv<8>) (zext_ln1118_610_fu_12945354_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_468_fu_3341_p2() {
    mul_ln1118_468_fu_3341_p2 = (!mul_ln1118_468_fu_3341_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_468_fu_3341_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_469_fu_3342_p0() {
    mul_ln1118_469_fu_3342_p0 =  (sc_lv<8>) (zext_ln1118_617_fu_12945483_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_469_fu_3342_p2() {
    mul_ln1118_469_fu_3342_p2 = (!mul_ln1118_469_fu_3342_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_469_fu_3342_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_470_fu_1977_p0() {
    mul_ln1118_470_fu_1977_p0 =  (sc_lv<8>) (zext_ln708_250_fu_12945538_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_470_fu_1977_p2() {
    mul_ln1118_470_fu_1977_p2 = (!mul_ln1118_470_fu_1977_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_470_fu_1977_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_471_fu_3238_p0() {
    mul_ln1118_471_fu_3238_p0 =  (sc_lv<8>) (zext_ln1118_750_fu_12948978_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_471_fu_3238_p2() {
    mul_ln1118_471_fu_3238_p2 = (!mul_ln1118_471_fu_3238_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_471_fu_3238_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_472_fu_3345_p0() {
    mul_ln1118_472_fu_3345_p0 =  (sc_lv<8>) (zext_ln1118_627_fu_12945675_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_472_fu_3345_p2() {
    mul_ln1118_472_fu_3345_p2 = (!mul_ln1118_472_fu_3345_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_472_fu_3345_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_473_fu_3346_p0() {
    mul_ln1118_473_fu_3346_p0 =  (sc_lv<8>) (zext_ln1116_69_fu_12945792_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_473_fu_3346_p2() {
    mul_ln1118_473_fu_3346_p2 = (!mul_ln1118_473_fu_3346_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_473_fu_3346_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_474_fu_2664_p0() {
    mul_ln1118_474_fu_2664_p0 =  (sc_lv<8>) (zext_ln1116_51_fu_12944502_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_474_fu_2664_p2() {
    mul_ln1118_474_fu_2664_p2 = (!mul_ln1118_474_fu_2664_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_474_fu_2664_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_475_fu_3348_p0() {
    mul_ln1118_475_fu_3348_p0 =  (sc_lv<8>) (zext_ln1118_757_fu_12949194_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_475_fu_3348_p2() {
    mul_ln1118_475_fu_3348_p2 = (!mul_ln1118_475_fu_3348_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_475_fu_3348_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_476_fu_3352_p0() {
    mul_ln1118_476_fu_3352_p0 =  (sc_lv<8>) (zext_ln1118_591_fu_12945070_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_476_fu_3352_p2() {
    mul_ln1118_476_fu_3352_p2 = (!mul_ln1118_476_fu_3352_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_476_fu_3352_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_477_fu_2473_p0() {
    mul_ln1118_477_fu_2473_p0 =  (sc_lv<8>) (zext_ln708_292_fu_12948940_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_477_fu_2473_p2() {
    mul_ln1118_477_fu_2473_p2 = (!mul_ln1118_477_fu_2473_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_477_fu_2473_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_478_fu_3280_p0() {
    mul_ln1118_478_fu_3280_p0 =  (sc_lv<8>) (mult_1150_V_fu_12948194_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_478_fu_3280_p2() {
    mul_ln1118_478_fu_3280_p2 = (!mul_ln1118_478_fu_3280_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_478_fu_3280_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_479_fu_2476_p0() {
    mul_ln1118_479_fu_2476_p0 =  (sc_lv<8>) (zext_ln1118_635_fu_12945811_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_479_fu_2476_p2() {
    mul_ln1118_479_fu_2476_p2 = (!mul_ln1118_479_fu_2476_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_479_fu_2476_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_480_fu_2477_p0() {
    mul_ln1118_480_fu_2477_p0 =  (sc_lv<8>) (zext_ln1118_565_fu_12944516_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_480_fu_2477_p2() {
    mul_ln1118_480_fu_2477_p2 = (!mul_ln1118_480_fu_2477_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_480_fu_2477_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_481_fu_2479_p0() {
    mul_ln1118_481_fu_2479_p0 =  (sc_lv<8>) (zext_ln1116_55_fu_12944692_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_481_fu_2479_p2() {
    mul_ln1118_481_fu_2479_p2 = (!mul_ln1118_481_fu_2479_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_481_fu_2479_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_482_fu_2480_p0() {
    mul_ln1118_482_fu_2480_p0 =  (sc_lv<8>) (zext_ln1116_60_fu_12944956_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_482_fu_2480_p2() {
    mul_ln1118_482_fu_2480_p2 = (!mul_ln1118_482_fu_2480_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_482_fu_2480_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_483_fu_3286_p0() {
    mul_ln1118_483_fu_3286_p0 =  (sc_lv<8>) (zext_ln1118_591_fu_12945070_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_483_fu_3286_p2() {
    mul_ln1118_483_fu_3286_p2 = (!mul_ln1118_483_fu_3286_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_483_fu_3286_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_484_fu_1531_p0() {
    mul_ln1118_484_fu_1531_p0 =  (sc_lv<8>) (zext_ln1118_738_fu_12948683_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_484_fu_1531_p2() {
    mul_ln1118_484_fu_1531_p2 = (!mul_ln1118_484_fu_1531_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_484_fu_1531_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_485_fu_1679_p0() {
    mul_ln1118_485_fu_1679_p0 =  (sc_lv<8>) (zext_ln1118_615_fu_12945457_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_485_fu_1679_p2() {
    mul_ln1118_485_fu_1679_p2 = (!mul_ln1118_485_fu_1679_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_485_fu_1679_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_486_fu_1608_p0() {
    mul_ln1118_486_fu_1608_p0 =  (sc_lv<8>) (zext_ln1118_757_fu_12949194_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_486_fu_1608_p2() {
    mul_ln1118_486_fu_1608_p2 = (!mul_ln1118_486_fu_1608_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_486_fu_1608_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_487_fu_2048_p0() {
    mul_ln1118_487_fu_2048_p0 =  (sc_lv<8>) (zext_ln1116_58_fu_12944777_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_487_fu_2048_p2() {
    mul_ln1118_487_fu_2048_p2 = (!mul_ln1118_487_fu_2048_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_487_fu_2048_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_488_fu_2049_p0() {
    mul_ln1118_488_fu_2049_p0 =  (sc_lv<8>) (zext_ln1118_584_fu_12944900_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_488_fu_2049_p2() {
    mul_ln1118_488_fu_2049_p2 = (!mul_ln1118_488_fu_2049_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_488_fu_2049_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_489_fu_3294_p0() {
    mul_ln1118_489_fu_3294_p0 =  (sc_lv<8>) (zext_ln1118_730_fu_12948537_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_489_fu_3294_p2() {
    mul_ln1118_489_fu_3294_p2 = (!mul_ln1118_489_fu_3294_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_489_fu_3294_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_490_fu_1978_p0() {
    mul_ln1118_490_fu_1978_p0 =  (sc_lv<8>) (zext_ln1116_71_fu_12948592_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_490_fu_1978_p2() {
    mul_ln1118_490_fu_1978_p2 = (!mul_ln1118_490_fu_1978_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_490_fu_1978_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_491_fu_2491_p0() {
    mul_ln1118_491_fu_2491_p0 =  (sc_lv<8>) (zext_ln1118_738_fu_12948683_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_491_fu_2491_p2() {
    mul_ln1118_491_fu_2491_p2 = (!mul_ln1118_491_fu_2491_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_491_fu_2491_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_492_fu_2055_p0() {
    mul_ln1118_492_fu_2055_p0 =  (sc_lv<8>) (zext_ln1118_625_fu_12945618_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_492_fu_2055_p2() {
    mul_ln1118_492_fu_2055_p2 = (!mul_ln1118_492_fu_2055_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_492_fu_2055_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_493_fu_2056_p0() {
    mul_ln1118_493_fu_2056_p0 =  (sc_lv<8>) (mult_1150_V_fu_12948194_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_493_fu_2056_p2() {
    mul_ln1118_493_fu_2056_p2 = (!mul_ln1118_493_fu_2056_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_493_fu_2056_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_494_fu_2496_p0() {
    mul_ln1118_494_fu_2496_p0 =  (sc_lv<8>) (zext_ln1118_814_fu_12951061_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_494_fu_2496_p2() {
    mul_ln1118_494_fu_2496_p2 = (!mul_ln1118_494_fu_2496_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_494_fu_2496_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_495_fu_3302_p0() {
    mul_ln1118_495_fu_3302_p0 =  (sc_lv<8>) (zext_ln1118_636_fu_12945865_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_495_fu_3302_p2() {
    mul_ln1118_495_fu_3302_p2 = (!mul_ln1118_495_fu_3302_p0.read().is_01() || !ap_const_lv15_7FC7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_495_fu_3302_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_496_fu_2501_p0() {
    mul_ln1118_496_fu_2501_p0 =  (sc_lv<8>) (zext_ln708_240_fu_12944840_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_496_fu_2501_p2() {
    mul_ln1118_496_fu_2501_p2 = (!mul_ln1118_496_fu_2501_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_496_fu_2501_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_497_fu_3068_p0() {
    mul_ln1118_497_fu_3068_p0 =  (sc_lv<8>) (zext_ln1116_74_fu_12951250_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_497_fu_3068_p2() {
    mul_ln1118_497_fu_3068_p2 = (!mul_ln1118_497_fu_3068_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_497_fu_3068_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_498_fu_2428_p0() {
    mul_ln1118_498_fu_2428_p0 =  (sc_lv<8>) (zext_ln1118_825_fu_12951310_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_498_fu_2428_p2() {
    mul_ln1118_498_fu_2428_p2 = (!mul_ln1118_498_fu_2428_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_498_fu_2428_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_499_fu_3365_p0() {
    mul_ln1118_499_fu_3365_p0 =  (sc_lv<8>) (mul_ln1118_499_fu_3365_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_499_fu_3365_p00() {
    mul_ln1118_499_fu_3365_p00 = esl_zext<16,8>(p_read46.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_499_fu_3365_p2() {
    mul_ln1118_499_fu_3365_p2 = (!mul_ln1118_499_fu_3365_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_499_fu_3365_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_500_fu_1655_p0() {
    mul_ln1118_500_fu_1655_p0 =  (sc_lv<8>) (zext_ln1116_78_fu_12951429_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_500_fu_1655_p2() {
    mul_ln1118_500_fu_1655_p2 = (!mul_ln1118_500_fu_1655_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_500_fu_1655_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_501_fu_2930_p0() {
    mul_ln1118_501_fu_2930_p0 =  (sc_lv<8>) (zext_ln1118_610_fu_12945354_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_501_fu_2930_p2() {
    mul_ln1118_501_fu_2930_p2 = (!mul_ln1118_501_fu_2930_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_501_fu_2930_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_502_fu_1481_p0() {
    mul_ln1118_502_fu_1481_p0 =  (sc_lv<8>) (zext_ln1116_67_fu_12945446_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_502_fu_1481_p2() {
    mul_ln1118_502_fu_1481_p2 = (!mul_ln1118_502_fu_1481_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_502_fu_1481_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_503_fu_2587_p0() {
    mul_ln1118_503_fu_2587_p0 =  (sc_lv<8>) (zext_ln1116_83_fu_12951660_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_503_fu_2587_p2() {
    mul_ln1118_503_fu_2587_p2 = (!mul_ln1118_503_fu_2587_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_503_fu_2587_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_504_fu_2285_p0() {
    mul_ln1118_504_fu_2285_p0 =  (sc_lv<8>) (zext_ln1118_626_fu_12945666_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_504_fu_2285_p2() {
    mul_ln1118_504_fu_2285_p2 = (!mul_ln1118_504_fu_2285_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_504_fu_2285_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_505_fu_3222_p0() {
    mul_ln1118_505_fu_3222_p0 =  (sc_lv<8>) (zext_ln1118_635_fu_12945811_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_505_fu_3222_p2() {
    mul_ln1118_505_fu_3222_p2 = (!mul_ln1118_505_fu_3222_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_505_fu_3222_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_506_fu_2920_p0() {
    mul_ln1118_506_fu_2920_p0 =  (sc_lv<8>) (zext_ln708_254_fu_12945879_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_506_fu_2920_p2() {
    mul_ln1118_506_fu_2920_p2 = (!mul_ln1118_506_fu_2920_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_506_fu_2920_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_507_fu_2316_p0() {
    mul_ln1118_507_fu_2316_p0 =  (sc_lv<8>) (zext_ln1116_58_fu_12944777_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_507_fu_2316_p2() {
    mul_ln1118_507_fu_2316_p2 = (!mul_ln1118_507_fu_2316_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_507_fu_2316_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_508_fu_3084_p0() {
    mul_ln1118_508_fu_3084_p0 =  (sc_lv<8>) (zext_ln1116_74_fu_12951250_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_508_fu_3084_p2() {
    mul_ln1118_508_fu_3084_p2 = (!mul_ln1118_508_fu_3084_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_508_fu_3084_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_509_fu_2613_p0() {
    mul_ln1118_509_fu_2613_p0 =  (sc_lv<8>) (zext_ln1116_60_fu_12944956_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_509_fu_2613_p2() {
    mul_ln1118_509_fu_2613_p2 = (!mul_ln1118_509_fu_2613_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_509_fu_2613_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_510_fu_2311_p0() {
    mul_ln1118_510_fu_2311_p0 =  (sc_lv<8>) (zext_ln1118_825_fu_12951310_p1.read());
}

}

