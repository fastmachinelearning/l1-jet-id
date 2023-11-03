#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_50_fu_2215_p2() {
    mul_ln1118_50_fu_2215_p2 = (!mul_ln1118_50_fu_2215_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_50_fu_2215_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_510_fu_2979_p0() {
    mul_ln1118_510_fu_2979_p0 =  (sc_lv<8>) (zext_ln1118_538_fu_12421898_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_510_fu_2979_p2() {
    mul_ln1118_510_fu_2979_p2 = (!mul_ln1118_510_fu_2979_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_510_fu_2979_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_511_fu_2980_p0() {
    mul_ln1118_511_fu_2980_p0 =  (sc_lv<8>) (zext_ln1118_585_fu_12424273_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_511_fu_2980_p2() {
    mul_ln1118_511_fu_2980_p2 = (!mul_ln1118_511_fu_2980_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_511_fu_2980_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_512_fu_1615_p0() {
    mul_ln1118_512_fu_1615_p0 =  (sc_lv<8>) (zext_ln708_195_fu_12421194_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_512_fu_1615_p2() {
    mul_ln1118_512_fu_1615_p2 = (!mul_ln1118_512_fu_1615_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_512_fu_1615_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_513_fu_2983_p0() {
    mul_ln1118_513_fu_2983_p0 =  (sc_lv<8>) (mul_ln1118_513_fu_2983_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_513_fu_2983_p00() {
    mul_ln1118_513_fu_2983_p00 = esl_zext<12,8>(p_read36.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_513_fu_2983_p2() {
    mul_ln1118_513_fu_2983_p2 = (!mul_ln1118_513_fu_2983_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_513_fu_2983_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_514_fu_2303_p0() {
    mul_ln1118_514_fu_2303_p0 =  (sc_lv<8>) (zext_ln1118_2233_fu_12420067_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_514_fu_2303_p2() {
    mul_ln1118_514_fu_2303_p2 = (!mul_ln1118_514_fu_2303_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_514_fu_2303_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_515_fu_3431_p0() {
    mul_ln1118_515_fu_3431_p0 =  (sc_lv<8>) (zext_ln1118_2514_fu_12426603_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_515_fu_3431_p2() {
    mul_ln1118_515_fu_3431_p2 = (!mul_ln1118_515_fu_3431_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_515_fu_3431_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_516_fu_2868_p0() {
    mul_ln1118_516_fu_2868_p0 =  (sc_lv<8>) (zext_ln1118_560_fu_12423921_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_516_fu_2868_p2() {
    mul_ln1118_516_fu_2868_p2 = (!mul_ln1118_516_fu_2868_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_516_fu_2868_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_517_fu_1826_p0() {
    mul_ln1118_517_fu_1826_p0 =  (sc_lv<8>) (zext_ln1118_509_fu_12420359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_517_fu_1826_p2() {
    mul_ln1118_517_fu_1826_p2 = (!mul_ln1118_517_fu_1826_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_517_fu_1826_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_518_fu_2776_p0() {
    mul_ln1118_518_fu_2776_p0 =  (sc_lv<8>) (zext_ln1118_2262_fu_12420443_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_518_fu_2776_p2() {
    mul_ln1118_518_fu_2776_p2 = (!mul_ln1118_518_fu_2776_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_518_fu_2776_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_519_fu_2269_p0() {
    mul_ln1118_519_fu_2269_p0 =  (sc_lv<8>) (zext_ln1118_2265_fu_12420499_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_519_fu_2269_p2() {
    mul_ln1118_519_fu_2269_p2 = (!mul_ln1118_519_fu_2269_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_519_fu_2269_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_51_fu_1411_p0() {
    mul_ln1118_51_fu_1411_p0 =  (sc_lv<8>) (zext_ln1118_33_fu_12401183_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_51_fu_1411_p2() {
    mul_ln1118_51_fu_1411_p2 = (!mul_ln1118_51_fu_1411_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_51_fu_1411_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_520_fu_3247_p0() {
    mul_ln1118_520_fu_3247_p0 =  (sc_lv<8>) (zext_ln1118_820_fu_12433726_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_520_fu_3247_p2() {
    mul_ln1118_520_fu_3247_p2 = (!mul_ln1118_520_fu_3247_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_520_fu_3247_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_521_fu_2149_p0() {
    mul_ln1118_521_fu_2149_p0 =  (sc_lv<8>) (zext_ln1118_2284_fu_12420776_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_521_fu_2149_p2() {
    mul_ln1118_521_fu_2149_p2 = (!mul_ln1118_521_fu_2149_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_521_fu_2149_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_522_fu_2480_p0() {
    mul_ln1118_522_fu_2480_p0 =  (sc_lv<8>) (zext_ln1118_2299_fu_12421032_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_522_fu_2480_p2() {
    mul_ln1118_522_fu_2480_p2 = (!mul_ln1118_522_fu_2480_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_522_fu_2480_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_523_fu_3147_p0() {
    mul_ln1118_523_fu_3147_p0 =  (sc_lv<8>) (zext_ln708_255_fu_12421453_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_523_fu_3147_p2() {
    mul_ln1118_523_fu_3147_p2 = (!mul_ln1118_523_fu_3147_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_523_fu_3147_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_524_fu_3035_p0() {
    mul_ln1118_524_fu_3035_p0 =  (sc_lv<8>) (mul_ln1118_524_fu_3035_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_524_fu_3035_p00() {
    mul_ln1118_524_fu_3035_p00 = esl_zext<13,8>(p_read43.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_524_fu_3035_p2() {
    mul_ln1118_524_fu_3035_p2 = (!mul_ln1118_524_fu_3035_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_524_fu_3035_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_525_fu_2500_p0() {
    mul_ln1118_525_fu_2500_p0 =  (sc_lv<8>) (zext_ln1116_94_fu_12420395_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_525_fu_2500_p2() {
    mul_ln1118_525_fu_2500_p2 = (!mul_ln1118_525_fu_2500_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_525_fu_2500_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_526_fu_1937_p0() {
    mul_ln1118_526_fu_1937_p0 =  (sc_lv<8>) (zext_ln1116_103_fu_12424069_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_526_fu_1937_p2() {
    mul_ln1118_526_fu_1937_p2 = (!mul_ln1118_526_fu_1937_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_526_fu_1937_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_527_fu_1458_p0() {
    mul_ln1118_527_fu_1458_p0 =  (sc_lv<8>) (zext_ln1116_150_fu_12433690_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_527_fu_1458_p2() {
    mul_ln1118_527_fu_1458_p2 = (!mul_ln1118_527_fu_1458_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_527_fu_1458_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_528_fu_2408_p0() {
    mul_ln1118_528_fu_2408_p0 =  (sc_lv<8>) (zext_ln1118_573_fu_12424143_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_528_fu_2408_p2() {
    mul_ln1118_528_fu_2408_p2 = (!mul_ln1118_528_fu_2408_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_528_fu_2408_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_529_fu_2823_p0() {
    mul_ln1118_529_fu_2823_p0 =  (sc_lv<8>) (mul_ln1118_529_fu_2823_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_529_fu_2823_p00() {
    mul_ln1118_529_fu_2823_p00 = esl_zext<13,8>(p_read56.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_529_fu_2823_p2() {
    mul_ln1118_529_fu_2823_p2 = (!mul_ln1118_529_fu_2823_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_529_fu_2823_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_52_fu_3022_p0() {
    mul_ln1118_52_fu_3022_p0 =  (sc_lv<8>) (zext_ln1118_34_fu_12401212_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_52_fu_3022_p2() {
    mul_ln1118_52_fu_3022_p2 = (!mul_ln1118_52_fu_3022_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_52_fu_3022_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_530_fu_2344_p0() {
    mul_ln1118_530_fu_2344_p0 =  (sc_lv<8>) (zext_ln1118_538_fu_12421898_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_530_fu_2344_p2() {
    mul_ln1118_530_fu_2344_p2 = (!mul_ln1118_530_fu_2344_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_530_fu_2344_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_531_fu_1781_p0() {
    mul_ln1118_531_fu_1781_p0 =  (sc_lv<8>) (zext_ln1118_585_fu_12424273_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_531_fu_1781_p2() {
    mul_ln1118_531_fu_1781_p2 = (!mul_ln1118_531_fu_1781_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_531_fu_1781_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_532_fu_2759_p0() {
    mul_ln1118_532_fu_2759_p0 =  (sc_lv<8>) (zext_ln1116_106_fu_12424296_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_532_fu_2759_p2() {
    mul_ln1118_532_fu_2759_p2 = (!mul_ln1118_532_fu_2759_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_532_fu_2759_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_533_fu_2224_p0() {
    mul_ln1118_533_fu_2224_p0 =  (sc_lv<8>) (zext_ln1118_654_fu_12427071_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_533_fu_2224_p2() {
    mul_ln1118_533_fu_2224_p2 = (!mul_ln1118_533_fu_2224_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_533_fu_2224_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_534_fu_1717_p0() {
    mul_ln1118_534_fu_1717_p0 =  (sc_lv<8>) (zext_ln1116_84_fu_12419705_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_534_fu_1717_p2() {
    mul_ln1118_534_fu_1717_p2 = (!mul_ln1118_534_fu_1717_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_534_fu_1717_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_535_fu_2667_p0() {
    mul_ln1118_535_fu_2667_p0 =  (sc_lv<8>) (zext_ln1118_605_fu_12426431_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_535_fu_2667_p2() {
    mul_ln1118_535_fu_2667_p2 = (!mul_ln1118_535_fu_2667_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_535_fu_2667_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_536_fu_1597_p0() {
    mul_ln1118_536_fu_1597_p0 =  (sc_lv<8>) (zext_ln1118_514_fu_12420449_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_536_fu_1597_p2() {
    mul_ln1118_536_fu_1597_p2 = (!mul_ln1118_536_fu_1597_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_536_fu_1597_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_537_fu_2845_p0() {
    mul_ln1118_537_fu_2845_p0 =  (sc_lv<8>) (zext_ln1118_2268_fu_12420540_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_537_fu_2845_p2() {
    mul_ln1118_537_fu_2845_p2 = (!mul_ln1118_537_fu_2845_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_537_fu_2845_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_538_fu_2042_p0() {
    mul_ln1118_538_fu_2042_p0 =  (sc_lv<8>) (zext_ln1116_139_fu_12431654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_538_fu_2042_p2() {
    mul_ln1118_538_fu_2042_p2 = (!mul_ln1118_538_fu_2042_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_538_fu_2042_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_539_fu_2849_p0() {
    mul_ln1118_539_fu_2849_p0 =  (sc_lv<8>) (zext_ln708_195_fu_12421194_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_539_fu_2849_p2() {
    mul_ln1118_539_fu_2849_p2 = (!mul_ln1118_539_fu_2849_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_539_fu_2849_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_53_fu_2218_p0() {
    mul_ln1118_53_fu_2218_p0 =  (sc_lv<8>) (zext_ln1118_206_fu_12401384_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_53_fu_2218_p2() {
    mul_ln1118_53_fu_2218_p2 = (!mul_ln1118_53_fu_2218_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_53_fu_2218_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_540_fu_2046_p0() {
    mul_ln1118_540_fu_2046_p0 =  (sc_lv<8>) (zext_ln1118_621_fu_12426609_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_540_fu_2046_p2() {
    mul_ln1118_540_fu_2046_p2 = (!mul_ln1118_540_fu_2046_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_540_fu_2046_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_541_fu_2047_p0() {
    mul_ln1118_541_fu_2047_p0 =  (sc_lv<8>) (zext_ln1118_2251_fu_12420282_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_541_fu_2047_p2() {
    mul_ln1118_541_fu_2047_p2 = (!mul_ln1118_541_fu_2047_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_541_fu_2047_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_542_fu_2853_p0() {
    mul_ln1118_542_fu_2853_p0 =  (sc_lv<8>) (zext_ln1118_508_fu_12420336_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_542_fu_2853_p2() {
    mul_ln1118_542_fu_2853_p2 = (!mul_ln1118_542_fu_2853_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_542_fu_2853_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_543_fu_3037_p0() {
    mul_ln1118_543_fu_3037_p0 =  (sc_lv<8>) (zext_ln1118_2257_fu_12420366_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_543_fu_3037_p2() {
    mul_ln1118_543_fu_3037_p2 = (!mul_ln1118_543_fu_3037_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_543_fu_3037_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_545_fu_1428_p0() {
    mul_ln1118_545_fu_1428_p0 =  (sc_lv<8>) (zext_ln1118_518_fu_12420578_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_545_fu_1428_p2() {
    mul_ln1118_545_fu_1428_p2 = (!mul_ln1118_545_fu_1428_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_545_fu_1428_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_546_fu_2856_p0() {
    mul_ln1118_546_fu_2856_p0 =  (sc_lv<8>) (zext_ln1116_98_fu_12420725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_546_fu_2856_p2() {
    mul_ln1118_546_fu_2856_p2 = (!mul_ln1118_546_fu_2856_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_546_fu_2856_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_547_fu_2052_p0() {
    mul_ln1118_547_fu_2052_p0 =  (sc_lv<8>) (mul_ln1118_547_fu_2052_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_547_fu_2052_p00() {
    mul_ln1118_547_fu_2052_p00 = esl_zext<14,8>(p_read56.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_547_fu_2052_p2() {
    mul_ln1118_547_fu_2052_p2 = (!mul_ln1118_547_fu_2052_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_547_fu_2052_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_548_fu_2053_p0() {
    mul_ln1118_548_fu_2053_p0 =  (sc_lv<8>) (zext_ln1116_107_fu_12424385_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_548_fu_2053_p2() {
    mul_ln1118_548_fu_2053_p2 = (!mul_ln1118_548_fu_2053_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_548_fu_2053_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_549_fu_2054_p0() {
    mul_ln1118_549_fu_2054_p0 =  (sc_lv<8>) (zext_ln1116_84_fu_12419705_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_549_fu_2054_p2() {
    mul_ln1118_549_fu_2054_p2 = (!mul_ln1118_549_fu_2054_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_549_fu_2054_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_54_fu_2219_p0() {
    mul_ln1118_54_fu_2219_p0 =  (sc_lv<8>) (zext_ln1118_209_fu_12401443_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_54_fu_2219_p2() {
    mul_ln1118_54_fu_2219_p2 = (!mul_ln1118_54_fu_2219_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_54_fu_2219_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_550_fu_1434_p0() {
    mul_ln1118_550_fu_1434_p0 =  (sc_lv<8>) (zext_ln1116_89_fu_12420125_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_550_fu_1434_p2() {
    mul_ln1118_550_fu_1434_p2 = (!mul_ln1118_550_fu_1434_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_550_fu_1434_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_551_fu_2057_p0() {
    mul_ln1118_551_fu_2057_p0 =  (sc_lv<8>) (zext_ln1118_621_fu_12426609_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_551_fu_2057_p2() {
    mul_ln1118_551_fu_2057_p2 = (!mul_ln1118_551_fu_2057_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_551_fu_2057_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_553_fu_1437_p0() {
    mul_ln1118_553_fu_1437_p0 =  (sc_lv<8>) (zext_ln1116_98_fu_12420725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_553_fu_1437_p2() {
    mul_ln1118_553_fu_1437_p2 = (!mul_ln1118_553_fu_1437_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_553_fu_1437_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_554_fu_2029_p0() {
    mul_ln1118_554_fu_2029_p0 =  (sc_lv<8>) (zext_ln1116_139_fu_12431654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_554_fu_2029_p2() {
    mul_ln1118_554_fu_2029_p2 = (!mul_ln1118_554_fu_2029_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_554_fu_2029_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_555_fu_3397_p0() {
    mul_ln1118_555_fu_3397_p0 =  (sc_lv<8>) (zext_ln708_189_fu_12420941_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_555_fu_3397_p2() {
    mul_ln1118_555_fu_3397_p2 = (!mul_ln1118_555_fu_3397_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_555_fu_3397_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_556_fu_2753_p0() {
    mul_ln1118_556_fu_2753_p0 =  (sc_lv<8>) (zext_ln1118_530_fu_12421078_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_556_fu_2753_p2() {
    mul_ln1118_556_fu_2753_p2 = (!mul_ln1118_556_fu_2753_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_556_fu_2753_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_557_fu_2717_p0() {
    mul_ln1118_557_fu_2717_p0 =  (sc_lv<8>) (zext_ln1118_2212_fu_12419789_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_557_fu_2717_p2() {
    mul_ln1118_557_fu_2717_p2 = (!mul_ln1118_557_fu_2717_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_557_fu_2717_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_558_fu_3439_p0() {
    mul_ln1118_558_fu_3439_p0 =  (sc_lv<8>) (zext_ln1118_492_fu_12419848_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_558_fu_3439_p2() {
    mul_ln1118_558_fu_3439_p2 = (!mul_ln1118_558_fu_3439_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_558_fu_3439_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_559_fu_2036_p0() {
    mul_ln1118_559_fu_2036_p0 =  (sc_lv<8>) (zext_ln1118_2219_fu_12419892_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_559_fu_2036_p2() {
    mul_ln1118_559_fu_2036_p2 = (!mul_ln1118_559_fu_2036_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_559_fu_2036_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_55_fu_1415_p0() {
    mul_ln1118_55_fu_1415_p0 =  (sc_lv<8>) (zext_ln1116_21_fu_12404885_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_55_fu_1415_p2() {
    mul_ln1118_55_fu_1415_p2 = (!mul_ln1118_55_fu_1415_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_55_fu_1415_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_560_fu_3310_p0() {
    mul_ln1118_560_fu_3310_p0 =  (sc_lv<8>) (zext_ln1118_2233_fu_12420067_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_560_fu_3310_p2() {
    mul_ln1118_560_fu_3310_p2 = (!mul_ln1118_560_fu_3310_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_560_fu_3310_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_562_fu_2212_p0() {
    mul_ln1118_562_fu_2212_p0 =  (sc_lv<8>) (zext_ln1118_2251_fu_12420282_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_562_fu_2212_p2() {
    mul_ln1118_562_fu_2212_p2 = (!mul_ln1118_562_fu_2212_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_562_fu_2212_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_563_fu_1705_p0() {
    mul_ln1118_563_fu_1705_p0 =  (sc_lv<8>) (zext_ln1118_508_fu_12420336_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_563_fu_1705_p2() {
    mul_ln1118_563_fu_1705_p2 = (!mul_ln1118_563_fu_1705_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_563_fu_1705_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_564_fu_2627_p0() {
    mul_ln1118_564_fu_2627_p0 =  (sc_lv<8>) (zext_ln1118_2257_fu_12420366_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_564_fu_2627_p2() {
    mul_ln1118_564_fu_2627_p2 = (!mul_ln1118_564_fu_2627_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_564_fu_2627_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_565_fu_2120_p0() {
    mul_ln1118_565_fu_2120_p0 =  (sc_lv<8>) (zext_ln1118_2260_fu_12420412_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_565_fu_2120_p2() {
    mul_ln1118_565_fu_2120_p2 = (!mul_ln1118_565_fu_2120_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_565_fu_2120_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_566_fu_3098_p0() {
    mul_ln1118_566_fu_3098_p0 =  (sc_lv<8>) (zext_ln1118_636_fu_12426824_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_566_fu_3098_p2() {
    mul_ln1118_566_fu_3098_p2 = (!mul_ln1118_566_fu_3098_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_566_fu_3098_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_567_fu_3034_p0() {
    mul_ln1118_567_fu_3034_p0 =  (sc_lv<8>) (mul_ln1118_567_fu_3034_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_567_fu_3034_p00() {
    mul_ln1118_567_fu_3034_p00 = esl_zext<16,8>(p_read58.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_567_fu_3034_p2() {
    mul_ln1118_567_fu_3034_p2 = (!mul_ln1118_567_fu_3034_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_567_fu_3034_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_568_fu_2471_p0() {
    mul_ln1118_568_fu_2471_p0 =  (sc_lv<8>) (zext_ln708_190_fu_12421023_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_568_fu_2471_p2() {
    mul_ln1118_568_fu_2471_p2 = (!mul_ln1118_568_fu_2471_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_568_fu_2471_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_569_fu_1964_p0() {
    mul_ln1118_569_fu_1964_p0 =  (sc_lv<8>) (zext_ln1116_107_fu_12424385_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_569_fu_1964_p2() {
    mul_ln1118_569_fu_1964_p2 = (!mul_ln1118_569_fu_1964_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_569_fu_1964_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_56_fu_2843_p0() {
    mul_ln1118_56_fu_2843_p0 =  (sc_lv<8>) (zext_ln1118_101_fu_12404907_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_56_fu_2843_p2() {
    mul_ln1118_56_fu_2843_p2 = (!mul_ln1118_56_fu_2843_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_56_fu_2843_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_570_fu_2942_p0() {
    mul_ln1118_570_fu_2942_p0 =  (sc_lv<8>) (zext_ln1116_84_fu_12419705_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_570_fu_2942_p2() {
    mul_ln1118_570_fu_2942_p2 = (!mul_ln1118_570_fu_2942_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_570_fu_2942_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_571_fu_2379_p0() {
    mul_ln1118_571_fu_2379_p0 =  (sc_lv<8>) (zext_ln1116_85_fu_12419775_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_571_fu_2379_p2() {
    mul_ln1118_571_fu_2379_p2 = (!mul_ln1118_571_fu_2379_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_571_fu_2379_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_572_fu_2822_p0() {
    mul_ln1118_572_fu_2822_p0 =  (sc_lv<8>) (zext_ln1118_2231_fu_12420020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_572_fu_2822_p2() {
    mul_ln1118_572_fu_2822_p2 = (!mul_ln1118_572_fu_2822_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_572_fu_2822_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_573_fu_2259_p0() {
    mul_ln1118_573_fu_2259_p0 =  (sc_lv<8>) (zext_ln1118_621_fu_12426609_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_573_fu_2259_p2() {
    mul_ln1118_573_fu_2259_p2 = (!mul_ln1118_573_fu_2259_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_573_fu_2259_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_574_fu_3265_p0() {
    mul_ln1118_574_fu_3265_p0 =  (sc_lv<8>) (zext_ln1116_90_fu_12420223_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_574_fu_3265_p2() {
    mul_ln1118_574_fu_3265_p2 = (!mul_ln1118_574_fu_3265_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_574_fu_3265_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_575_fu_2702_p0() {
    mul_ln1118_575_fu_2702_p0 =  (sc_lv<8>) (zext_ln1118_507_fu_12420293_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_575_fu_2702_p2() {
    mul_ln1118_575_fu_2702_p2 = (!mul_ln1118_575_fu_2702_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_575_fu_2702_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_577_fu_3173_p0() {
    mul_ln1118_577_fu_3173_p0 =  (sc_lv<8>) (zext_ln1116_97_fu_12420691_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_577_fu_3173_p2() {
    mul_ln1118_577_fu_3173_p2 = (!mul_ln1118_577_fu_3173_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_577_fu_3173_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_578_fu_2638_p0() {
    mul_ln1118_578_fu_2638_p0 =  (sc_lv<8>) (zext_ln708_237_fu_12420784_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_578_fu_2638_p2() {
    mul_ln1118_578_fu_2638_p2 = (!mul_ln1118_578_fu_2638_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_578_fu_2638_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_57_fu_2223_p0() {
    mul_ln1118_57_fu_2223_p0 =  (sc_lv<8>) (zext_ln1116_23_fu_12405019_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_57_fu_2223_p2() {
    mul_ln1118_57_fu_2223_p2 = (!mul_ln1118_57_fu_2223_p0.read().is_01() || !ap_const_lv16_FF96.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_57_fu_2223_p0.read()) * sc_bigint<16>(ap_const_lv16_FF96);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_580_fu_3081_p0() {
    mul_ln1118_580_fu_3081_p0 =  (sc_lv<8>) (zext_ln1118_494_fu_12419886_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_580_fu_3081_p2() {
    mul_ln1118_580_fu_3081_p2 = (!mul_ln1118_580_fu_3081_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_580_fu_3081_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_581_fu_2546_p0() {
    mul_ln1118_581_fu_2546_p0 =  (sc_lv<8>) (zext_ln1118_495_fu_12419912_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_581_fu_2546_p2() {
    mul_ln1118_581_fu_2546_p2 = (!mul_ln1118_581_fu_2546_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_581_fu_2546_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_582_fu_2039_p0() {
    mul_ln1118_582_fu_2039_p0 =  (sc_lv<8>) (mul_ln1118_582_fu_2039_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_582_fu_2039_p00() {
    mul_ln1118_582_fu_2039_p00 = esl_zext<16,8>(p_read38.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_582_fu_2039_p2() {
    mul_ln1118_582_fu_2039_p2 = (!mul_ln1118_582_fu_2039_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_582_fu_2039_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_585_fu_1476_p0() {
    mul_ln1118_585_fu_1476_p0 =  (sc_lv<8>) (zext_ln1116_94_fu_12420395_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_585_fu_1476_p2() {
    mul_ln1118_585_fu_1476_p2 = (!mul_ln1118_585_fu_1476_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_585_fu_1476_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_586_fu_2454_p0() {
    mul_ln1118_586_fu_2454_p0 =  (sc_lv<8>) (zext_ln1118_570_fu_12424123_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_586_fu_2454_p2() {
    mul_ln1118_586_fu_2454_p2 = (!mul_ln1118_586_fu_2454_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_586_fu_2454_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_587_fu_2623_p0() {
    mul_ln1118_587_fu_2623_p0 =  (sc_lv<8>) (zext_ln1118_518_fu_12420578_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_587_fu_2623_p2() {
    mul_ln1118_587_fu_2623_p2 = (!mul_ln1118_587_fu_2623_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_587_fu_2623_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_588_fu_2908_p0() {
    mul_ln1118_588_fu_2908_p0 =  (sc_lv<8>) (zext_ln1116_97_fu_12420691_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_588_fu_2908_p2() {
    mul_ln1118_588_fu_2908_p2 = (!mul_ln1118_588_fu_2908_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_588_fu_2908_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_589_fu_3348_p0() {
    mul_ln1118_589_fu_3348_p0 =  (sc_lv<8>) (zext_ln1116_98_fu_12420725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_589_fu_3348_p2() {
    mul_ln1118_589_fu_3348_p2 = (!mul_ln1118_589_fu_3348_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_589_fu_3348_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_58_fu_1598_p0() {
    mul_ln1118_58_fu_1598_p0 =  (sc_lv<8>) (zext_ln1116_1_fu_12400409_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_58_fu_1598_p2() {
    mul_ln1118_58_fu_1598_p2 = (!mul_ln1118_58_fu_1598_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_58_fu_1598_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_590_fu_3349_p0() {
    mul_ln1118_590_fu_3349_p0 =  (sc_lv<8>) (mul_ln1118_590_fu_3349_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_590_fu_3349_p00() {
    mul_ln1118_590_fu_3349_p00 = esl_zext<14,8>(p_read62.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_590_fu_3349_p2() {
    mul_ln1118_590_fu_3349_p2 = (!mul_ln1118_590_fu_3349_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_590_fu_3349_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_592_fu_3096_p0() {
    mul_ln1118_592_fu_3096_p0 =  (sc_lv<8>) (zext_ln1118_560_fu_12423921_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_592_fu_3096_p2() {
    mul_ln1118_592_fu_3096_p2 = (!mul_ln1118_592_fu_3096_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_592_fu_3096_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_593_fu_2731_p0() {
    mul_ln1118_593_fu_2731_p0 =  (sc_lv<8>) (zext_ln1118_2251_fu_12420282_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_593_fu_2731_p2() {
    mul_ln1118_593_fu_2731_p2 = (!mul_ln1118_593_fu_2731_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_593_fu_2731_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_594_fu_3354_p0() {
    mul_ln1118_594_fu_3354_p0 =  (sc_lv<8>) (zext_ln1116_129_fu_12429157_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_594_fu_3354_p2() {
    mul_ln1118_594_fu_3354_p2 = (!mul_ln1118_594_fu_3354_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_594_fu_3354_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_595_fu_3355_p0() {
    mul_ln1118_595_fu_3355_p0 =  (sc_lv<8>) (zext_ln1116_150_fu_12433690_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_595_fu_3355_p2() {
    mul_ln1118_595_fu_3355_p2 = (!mul_ln1118_595_fu_3355_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_595_fu_3355_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_596_fu_3356_p0() {
    mul_ln1118_596_fu_3356_p0 =  (sc_lv<8>) (zext_ln1116_97_fu_12420691_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_596_fu_3356_p2() {
    mul_ln1118_596_fu_3356_p2 = (!mul_ln1118_596_fu_3356_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_596_fu_3356_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_597_fu_3357_p0() {
    mul_ln1118_597_fu_3357_p0 =  (sc_lv<8>) (zext_ln1116_98_fu_12420725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_597_fu_3357_p2() {
    mul_ln1118_597_fu_3357_p2 = (!mul_ln1118_597_fu_3357_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_597_fu_3357_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_598_fu_2114_p0() {
    mul_ln1118_598_fu_2114_p0 =  (sc_lv<8>) (zext_ln708_237_fu_12420784_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_598_fu_2114_p2() {
    mul_ln1118_598_fu_2114_p2 = (!mul_ln1118_598_fu_2114_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_598_fu_2114_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_599_fu_3359_p0() {
    mul_ln1118_599_fu_3359_p0 =  (sc_lv<8>) (zext_ln1118_2295_fu_12420956_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_599_fu_3359_p2() {
    mul_ln1118_599_fu_3359_p2 = (!mul_ln1118_599_fu_3359_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_599_fu_3359_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_59_fu_1786_p0() {
    mul_ln1118_59_fu_1786_p0 =  (sc_lv<8>) (zext_ln1118_8_fu_12400482_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_59_fu_1786_p2() {
    mul_ln1118_59_fu_1786_p2 = (!mul_ln1118_59_fu_1786_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_59_fu_1786_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_5_fu_1527_p0() {
    mul_ln1118_5_fu_1527_p0 =  (sc_lv<8>) (zext_ln1118_10_fu_12400520_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_5_fu_1527_p2() {
    mul_ln1118_5_fu_1527_p2 = (!mul_ln1118_5_fu_1527_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_5_fu_1527_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_600_fu_3287_p0() {
    mul_ln1118_600_fu_3287_p0 =  (sc_lv<8>) (zext_ln1118_2299_fu_12421032_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_600_fu_3287_p2() {
    mul_ln1118_600_fu_3287_p2 = (!mul_ln1118_600_fu_3287_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_600_fu_3287_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_601_fu_1934_p0() {
    mul_ln1118_601_fu_1934_p0 =  (sc_lv<8>) (zext_ln1118_529_fu_12421070_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_601_fu_1934_p2() {
    mul_ln1118_601_fu_1934_p2 = (!mul_ln1118_601_fu_1934_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_601_fu_1934_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_602_fu_1935_p0() {
    mul_ln1118_602_fu_1935_p0 =  (sc_lv<8>) (zext_ln1116_107_fu_12424385_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_602_fu_1935_p2() {
    mul_ln1118_602_fu_1935_p2 = (!mul_ln1118_602_fu_1935_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_602_fu_1935_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_603_fu_2741_p0() {
    mul_ln1118_603_fu_2741_p0 =  (sc_lv<8>) (zext_ln1118_2215_fu_12419857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_603_fu_2741_p2() {
    mul_ln1118_603_fu_2741_p2 = (!mul_ln1118_603_fu_2741_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_603_fu_2741_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_604_fu_3364_p0() {
    mul_ln1118_604_fu_3364_p0 =  (sc_lv<8>) (zext_ln1118_2217_fu_12419878_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_604_fu_3364_p2() {
    mul_ln1118_604_fu_3364_p2 = (!mul_ln1118_604_fu_3364_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_604_fu_3364_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_605_fu_3128_p0() {
    mul_ln1118_605_fu_3128_p0 =  (sc_lv<8>) (zext_ln708_184_fu_12420060_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_605_fu_3128_p2() {
    mul_ln1118_605_fu_3128_p2 = (!mul_ln1118_605_fu_3128_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_605_fu_3128_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_607_fu_1763_p0() {
    mul_ln1118_607_fu_1763_p0 =  (sc_lv<8>) (zext_ln1118_509_fu_12420359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_607_fu_1763_p2() {
    mul_ln1118_607_fu_1763_p2 = (!mul_ln1118_607_fu_1763_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_607_fu_1763_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_608_fu_3130_p0() {
    mul_ln1118_608_fu_3130_p0 =  (sc_lv<8>) (zext_ln1116_94_fu_12420395_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_608_fu_3130_p2() {
    mul_ln1118_608_fu_3130_p2 = (!mul_ln1118_608_fu_3130_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_608_fu_3130_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_609_fu_3131_p0() {
    mul_ln1118_609_fu_3131_p0 =  (sc_lv<8>) (zext_ln1118_516_fu_12420491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_609_fu_3131_p2() {
    mul_ln1118_609_fu_3131_p2 = (!mul_ln1118_609_fu_3131_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_609_fu_3131_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_60_fu_1421_p0() {
    mul_ln1118_60_fu_1421_p0 =  (sc_lv<8>) (zext_ln1118_69_fu_12400526_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_60_fu_1421_p2() {
    mul_ln1118_60_fu_1421_p2 = (!mul_ln1118_60_fu_1421_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_60_fu_1421_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_610_fu_1766_p0() {
    mul_ln1118_610_fu_1766_p0 =  (sc_lv<8>) (zext_ln1118_517_fu_12420549_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_610_fu_1766_p2() {
    mul_ln1118_610_fu_1766_p2 = (!mul_ln1118_610_fu_1766_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_610_fu_1766_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_611_fu_3133_p0() {
    mul_ln1118_611_fu_3133_p0 =  (sc_lv<8>) (zext_ln1118_820_fu_12433726_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_611_fu_3133_p2() {
    mul_ln1118_611_fu_3133_p2 = (!mul_ln1118_611_fu_3133_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_611_fu_3133_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_612_fu_2451_p0() {
    mul_ln1118_612_fu_2451_p0 =  (sc_lv<8>) (zext_ln1118_647_fu_12426946_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_612_fu_2451_p2() {
    mul_ln1118_612_fu_2451_p2 = (!mul_ln1118_612_fu_2451_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_612_fu_2451_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_613_fu_1769_p0() {
    mul_ln1118_613_fu_1769_p0 =  (sc_lv<8>) (zext_ln1118_609_fu_12426469_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_613_fu_1769_p2() {
    mul_ln1118_613_fu_1769_p2 = (!mul_ln1118_613_fu_1769_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_613_fu_1769_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_615_fu_3021_p0() {
    mul_ln1118_615_fu_3021_p0 =  (sc_lv<8>) (zext_ln1118_2233_fu_12420067_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_615_fu_3021_p2() {
    mul_ln1118_615_fu_3021_p2 = (!mul_ln1118_615_fu_3021_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_615_fu_3021_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_616_fu_2542_p0() {
    mul_ln1118_616_fu_2542_p0 =  (sc_lv<8>) (zext_ln1118_505_fu_12420233_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_616_fu_2542_p2() {
    mul_ln1118_616_fu_2542_p2 = (!mul_ln1118_616_fu_2542_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_616_fu_2542_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_617_fu_2091_p0() {
    mul_ln1118_617_fu_2091_p0 =  (sc_lv<8>) (zext_ln1118_543_fu_12422392_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_617_fu_2091_p2() {
    mul_ln1118_617_fu_2091_p2 = (!mul_ln1118_617_fu_2091_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_617_fu_2091_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_618_fu_1556_p0() {
    mul_ln1118_618_fu_1556_p0 =  (sc_lv<8>) (zext_ln1118_514_fu_12420449_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_618_fu_1556_p2() {
    mul_ln1118_618_fu_1556_p2 = (!mul_ln1118_618_fu_1556_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_618_fu_1556_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_619_fu_1464_p0() {
    mul_ln1118_619_fu_1464_p0 =  (sc_lv<8>) (zext_ln1116_139_fu_12431654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_619_fu_1464_p2() {
    mul_ln1118_619_fu_1464_p2 = (!mul_ln1118_619_fu_1464_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_619_fu_1464_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_61_fu_2116_p0() {
    mul_ln1118_61_fu_2116_p0 =  (sc_lv<8>) (zext_ln1118_12_fu_12400557_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_61_fu_2116_p2() {
    mul_ln1118_61_fu_2116_p2 = (!mul_ln1118_61_fu_2116_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_61_fu_2116_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_620_fu_2414_p0() {
    mul_ln1118_620_fu_2414_p0 =  (sc_lv<8>) (zext_ln1118_2285_fu_12420809_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_620_fu_2414_p2() {
    mul_ln1118_620_fu_2414_p2 = (!mul_ln1118_620_fu_2414_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_620_fu_2414_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_621_fu_2913_p0() {
    mul_ln1118_621_fu_2913_p0 =  (sc_lv<8>) (zext_ln1118_529_fu_12421070_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_621_fu_2913_p2() {
    mul_ln1118_621_fu_2913_p2 = (!mul_ln1118_621_fu_2913_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_621_fu_2913_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_622_fu_3328_p0() {
    mul_ln1118_622_fu_3328_p0 =  (sc_lv<8>) (zext_ln1118_2875_fu_12439223_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_622_fu_3328_p2() {
    mul_ln1118_622_fu_3328_p2 = (!mul_ln1118_622_fu_3328_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_622_fu_3328_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_623_fu_2541_p0() {
    mul_ln1118_623_fu_2541_p0 =  (sc_lv<8>) (zext_ln1118_978_fu_12439252_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_623_fu_2541_p2() {
    mul_ln1118_623_fu_2541_p2 = (!mul_ln1118_623_fu_2541_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_623_fu_2541_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_624_fu_3264_p0() {
    mul_ln1118_624_fu_3264_p0 =  (sc_lv<8>) (zext_ln1116_173_fu_12439491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_624_fu_3264_p2() {
    mul_ln1118_624_fu_3264_p2 = (!mul_ln1118_624_fu_3264_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_624_fu_3264_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_625_fu_2701_p0() {
    mul_ln1118_625_fu_2701_p0 =  (sc_lv<8>) (zext_ln1118_992_fu_12439702_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_625_fu_2701_p2() {
    mul_ln1118_625_fu_2701_p2 = (!mul_ln1118_625_fu_2701_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_625_fu_2701_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_626_fu_2166_p0() {
    mul_ln1118_626_fu_2166_p0 =  (sc_lv<8>) (zext_ln1118_994_fu_12439738_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_626_fu_2166_p2() {
    mul_ln1118_626_fu_2166_p2 = (!mul_ln1118_626_fu_2166_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_626_fu_2166_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_627_fu_2581_p0() {
    mul_ln1118_627_fu_2581_p0 =  (sc_lv<8>) (zext_ln1118_1001_fu_12439915_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_627_fu_2581_p2() {
    mul_ln1118_627_fu_2581_p2 = (!mul_ln1118_627_fu_2581_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_627_fu_2581_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_628_fu_2074_p0() {
    mul_ln1118_628_fu_2074_p0 =  (sc_lv<8>) (zext_ln1116_181_fu_12440057_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_628_fu_2074_p2() {
    mul_ln1118_628_fu_2074_p2 = (!mul_ln1118_628_fu_2074_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_628_fu_2074_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_629_fu_3080_p0() {
    mul_ln1118_629_fu_3080_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12440091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_629_fu_3080_p2() {
    mul_ln1118_629_fu_3080_p2 = (!mul_ln1118_629_fu_3080_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_629_fu_3080_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_62_fu_2118_p0() {
    mul_ln1118_62_fu_2118_p0 =  (sc_lv<8>) (zext_ln1118_28_fu_12401051_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_62_fu_2118_p2() {
    mul_ln1118_62_fu_2118_p2 = (!mul_ln1118_62_fu_2118_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_62_fu_2118_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_630_fu_1982_p0() {
    mul_ln1118_630_fu_1982_p0 =  (sc_lv<8>) (zext_ln1118_1007_fu_12440224_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_630_fu_1982_p2() {
    mul_ln1118_630_fu_1982_p2 = (!mul_ln1118_630_fu_1982_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_630_fu_1982_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_631_fu_2960_p0() {
    mul_ln1118_631_fu_2960_p0 =  (sc_lv<8>) (zext_ln1118_2924_fu_12440398_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_631_fu_2960_p2() {
    mul_ln1118_631_fu_2960_p2 = (!mul_ln1118_631_fu_2960_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_631_fu_2960_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_632_fu_2425_p0() {
    mul_ln1118_632_fu_2425_p0 =  (sc_lv<8>) (zext_ln1118_2868_fu_12439090_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_632_fu_2425_p2() {
    mul_ln1118_632_fu_2425_p2 = (!mul_ln1118_632_fu_2425_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_632_fu_2425_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_633_fu_2810_p0() {
    mul_ln1118_633_fu_2810_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12439141_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_633_fu_2810_p2() {
    mul_ln1118_633_fu_2810_p2 = (!mul_ln1118_633_fu_2810_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_633_fu_2810_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_634_fu_2840_p0() {
    mul_ln1118_634_fu_2840_p0 =  (sc_lv<8>) (zext_ln1116_170_fu_12439205_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_634_fu_2840_p2() {
    mul_ln1118_634_fu_2840_p2 = (!mul_ln1118_634_fu_2840_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_634_fu_2840_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_635_fu_1797_p0() {
    mul_ln1118_635_fu_1797_p0 =  (sc_lv<8>) (zext_ln1118_989_fu_12439599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_635_fu_1797_p2() {
    mul_ln1118_635_fu_1797_p2 = (!mul_ln1118_635_fu_1797_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_635_fu_1797_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_636_fu_1798_p0() {
    mul_ln1118_636_fu_1798_p0 =  (sc_lv<8>) (mul_ln1118_636_fu_1798_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_636_fu_1798_p00() {
    mul_ln1118_636_fu_1798_p00 = esl_zext<16,8>(p_read77.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_636_fu_1798_p2() {
    mul_ln1118_636_fu_1798_p2 = (!mul_ln1118_636_fu_1798_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_636_fu_1798_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_637_fu_1799_p0() {
    mul_ln1118_637_fu_1799_p0 =  (sc_lv<8>) (zext_ln1118_998_fu_12439815_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_637_fu_1799_p2() {
    mul_ln1118_637_fu_1799_p2 = (!mul_ln1118_637_fu_1799_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_637_fu_1799_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_638_fu_1800_p0() {
    mul_ln1118_638_fu_1800_p0 =  (sc_lv<8>) (zext_ln1118_999_fu_12439852_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_638_fu_1800_p2() {
    mul_ln1118_638_fu_1800_p2 = (!mul_ln1118_638_fu_1800_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_638_fu_1800_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_639_fu_1802_p0() {
    mul_ln1118_639_fu_1802_p0 =  (sc_lv<8>) (zext_ln1116_179_fu_12439937_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_639_fu_1802_p2() {
    mul_ln1118_639_fu_1802_p2 = (!mul_ln1118_639_fu_1802_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_639_fu_1802_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_63_fu_2119_p0() {
    mul_ln1118_63_fu_2119_p0 =  (sc_lv<8>) (zext_ln1118_191_fu_12401261_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_63_fu_2119_p2() {
    mul_ln1118_63_fu_2119_p2 = (!mul_ln1118_63_fu_2119_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_63_fu_2119_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_640_fu_1803_p0() {
    mul_ln1118_640_fu_1803_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12440091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_640_fu_1803_p2() {
    mul_ln1118_640_fu_1803_p2 = (!mul_ln1118_640_fu_1803_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_640_fu_1803_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_641_fu_1806_p0() {
    mul_ln1118_641_fu_1806_p0 =  (sc_lv<8>) (zext_ln708_376_fu_12440494_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_641_fu_1806_p2() {
    mul_ln1118_641_fu_1806_p2 = (!mul_ln1118_641_fu_1806_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_641_fu_1806_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_642_fu_3234_p0() {
    mul_ln1118_642_fu_3234_p0 =  (sc_lv<8>) (zext_ln1116_168_fu_12439071_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_642_fu_3234_p2() {
    mul_ln1118_642_fu_3234_p2 = (!mul_ln1118_642_fu_3234_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_642_fu_3234_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_643_fu_2430_p0() {
    mul_ln1118_643_fu_2430_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12439141_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_643_fu_2430_p2() {
    mul_ln1118_643_fu_2430_p2 = (!mul_ln1118_643_fu_2430_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_643_fu_2430_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_644_fu_3238_p0() {
    mul_ln1118_644_fu_3238_p0 =  (sc_lv<8>) (zext_ln1116_173_fu_12439491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_644_fu_3238_p2() {
    mul_ln1118_644_fu_3238_p2 = (!mul_ln1118_644_fu_3238_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_644_fu_3238_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_645_fu_1813_p0() {
    mul_ln1118_645_fu_1813_p0 =  (sc_lv<8>) (zext_ln1116_178_fu_12439761_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_645_fu_1813_p2() {
    mul_ln1118_645_fu_1813_p2 = (!mul_ln1118_645_fu_1813_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_645_fu_1813_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_646_fu_3241_p0() {
    mul_ln1118_646_fu_3241_p0 =  (sc_lv<8>) (zext_ln1118_1002_fu_12439944_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_646_fu_3241_p2() {
    mul_ln1118_646_fu_3241_p2 = (!mul_ln1118_646_fu_3241_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_646_fu_3241_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_647_fu_1815_p0() {
    mul_ln1118_647_fu_1815_p0 =  (sc_lv<8>) (zext_ln1116_183_fu_12440167_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_647_fu_1815_p2() {
    mul_ln1118_647_fu_1815_p2 = (!mul_ln1118_647_fu_1815_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_647_fu_1815_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_648_fu_3051_p0() {
    mul_ln1118_648_fu_3051_p0 =  (sc_lv<8>) (zext_ln1118_1008_fu_12440250_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_648_fu_3051_p2() {
    mul_ln1118_648_fu_3051_p2 = (!mul_ln1118_648_fu_3051_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_648_fu_3051_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_649_fu_1497_p0() {
    mul_ln1118_649_fu_1497_p0 =  (sc_lv<8>) (zext_ln1118_1013_fu_12440436_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_649_fu_1497_p2() {
    mul_ln1118_649_fu_1497_p2 = (!mul_ln1118_649_fu_1497_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_649_fu_1497_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_64_fu_2803_p0() {
    mul_ln1118_64_fu_2803_p0 =  (sc_lv<8>) (zext_ln1118_94_fu_12404837_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_64_fu_2803_p2() {
    mul_ln1118_64_fu_2803_p2 = (!mul_ln1118_64_fu_2803_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_64_fu_2803_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_650_fu_1498_p0() {
    mul_ln1118_650_fu_1498_p0 =  (sc_lv<8>) (zext_ln1116_185_fu_12440554_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_650_fu_1498_p2() {
    mul_ln1118_650_fu_1498_p2 = (!mul_ln1118_650_fu_1498_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_650_fu_1498_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_651_fu_1499_p0() {
    mul_ln1118_651_fu_1499_p0 =  (sc_lv<8>) (zext_ln1118_976_fu_12439214_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_651_fu_1499_p2() {
    mul_ln1118_651_fu_1499_p2 = (!mul_ln1118_651_fu_1499_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_651_fu_1499_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_652_fu_1500_p0() {
    mul_ln1118_652_fu_1500_p0 =  (sc_lv<8>) (mul_ln1118_652_fu_1500_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_652_fu_1500_p00() {
    mul_ln1118_652_fu_1500_p00 = esl_zext<13,8>(p_read72.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_652_fu_1500_p2() {
    mul_ln1118_652_fu_1500_p2 = (!mul_ln1118_652_fu_1500_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_652_fu_1500_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_653_fu_1501_p0() {
    mul_ln1118_653_fu_1501_p0 =  (sc_lv<8>) (zext_ln1118_989_fu_12439599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_653_fu_1501_p2() {
    mul_ln1118_653_fu_1501_p2 = (!mul_ln1118_653_fu_1501_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_653_fu_1501_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_654_fu_2185_p0() {
    mul_ln1118_654_fu_2185_p0 =  (sc_lv<8>) (zext_ln1118_993_fu_12439725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_654_fu_2185_p2() {
    mul_ln1118_654_fu_2185_p2 = (!mul_ln1118_654_fu_2185_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_654_fu_2185_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_655_fu_1503_p0() {
    mul_ln1118_655_fu_1503_p0 =  (sc_lv<8>) (zext_ln1118_995_fu_12439770_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_655_fu_1503_p2() {
    mul_ln1118_655_fu_1503_p2 = (!mul_ln1118_655_fu_1503_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_655_fu_1503_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_656_fu_2533_p0() {
    mul_ln1118_656_fu_2533_p0 =  (sc_lv<8>) (zext_ln1118_998_fu_12439815_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_656_fu_2533_p2() {
    mul_ln1118_656_fu_2533_p2 = (!mul_ln1118_656_fu_2533_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_656_fu_2533_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_657_fu_1463_p0() {
    mul_ln1118_657_fu_1463_p0 =  (sc_lv<8>) (zext_ln1116_179_fu_12439937_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_657_fu_1463_p2() {
    mul_ln1118_657_fu_1463_p2 = (!mul_ln1118_657_fu_1463_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_657_fu_1463_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_658_fu_1878_p0() {
    mul_ln1118_658_fu_1878_p0 =  (sc_lv<8>) (zext_ln1118_1007_fu_12440224_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_658_fu_1878_p2() {
    mul_ln1118_658_fu_1878_p2 = (!mul_ln1118_658_fu_1878_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_658_fu_1878_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_659_fu_2828_p0() {
    mul_ln1118_659_fu_2828_p0 =  (sc_lv<8>) (zext_ln1116_184_fu_12440430_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_659_fu_2828_p2() {
    mul_ln1118_659_fu_2828_p2 = (!mul_ln1118_659_fu_2828_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_659_fu_2828_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_65_fu_1514_p0() {
    mul_ln1118_65_fu_1514_p0 =  (sc_lv<8>) (zext_ln1118_204_fu_12401371_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_65_fu_1514_p2() {
    mul_ln1118_65_fu_1514_p2 = (!mul_ln1118_65_fu_1514_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_65_fu_1514_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_660_fu_1814_p0() {
    mul_ln1118_660_fu_1814_p0 =  (sc_lv<8>) (zext_ln708_378_fu_12440560_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_660_fu_1814_p2() {
    mul_ln1118_660_fu_1814_p2 = (!mul_ln1118_660_fu_1814_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_660_fu_1814_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_661_fu_2736_p0() {
    mul_ln1118_661_fu_2736_p0 =  (sc_lv<8>) (zext_ln1118_2872_fu_12439155_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_661_fu_2736_p2() {
    mul_ln1118_661_fu_2736_p2 = (!mul_ln1118_661_fu_2736_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_661_fu_2736_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_662_fu_2229_p0() {
    mul_ln1118_662_fu_2229_p0 =  (sc_lv<8>) (zext_ln1116_170_fu_12439205_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_662_fu_2229_p2() {
    mul_ln1118_662_fu_2229_p2 = (!mul_ln1118_662_fu_2229_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_662_fu_2229_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_663_fu_3207_p0() {
    mul_ln1118_663_fu_3207_p0 =  (sc_lv<8>) (zext_ln708_366_fu_12439336_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_663_fu_3207_p2() {
    mul_ln1118_663_fu_3207_p2 = (!mul_ln1118_663_fu_3207_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_663_fu_3207_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_664_fu_2672_p0() {
    mul_ln1118_664_fu_2672_p0 =  (sc_lv<8>) (zext_ln1118_2882_fu_12439386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_664_fu_2672_p2() {
    mul_ln1118_664_fu_2672_p2 = (!mul_ln1118_664_fu_2672_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_664_fu_2672_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_665_fu_2137_p0() {
    mul_ln1118_665_fu_2137_p0 =  (sc_lv<8>) (zext_ln708_488_fu_12440819_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_665_fu_2137_p2() {
    mul_ln1118_665_fu_2137_p2 = (!mul_ln1118_665_fu_2137_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_665_fu_2137_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_666_fu_2580_p0() {
    mul_ln1118_666_fu_2580_p0 =  (sc_lv<8>) (zext_ln1116_176_fu_12439641_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_666_fu_2580_p2() {
    mul_ln1118_666_fu_2580_p2 = (!mul_ln1118_666_fu_2580_p0.read().is_01() || !ap_const_lv16_FFA8.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_666_fu_2580_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA8);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_667_fu_2017_p0() {
    mul_ln1118_667_fu_2017_p0 =  (sc_lv<8>) (zext_ln1118_992_fu_12439702_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_667_fu_2017_p2() {
    mul_ln1118_667_fu_2017_p2 = (!mul_ln1118_667_fu_2017_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_667_fu_2017_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_668_fu_3023_p0() {
    mul_ln1118_668_fu_3023_p0 =  (sc_lv<8>) (zext_ln1118_1000_fu_12439857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_668_fu_3023_p2() {
    mul_ln1118_668_fu_3023_p2 = (!mul_ln1118_668_fu_3023_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_668_fu_3023_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_669_fu_2460_p0() {
    mul_ln1118_669_fu_2460_p0 =  (sc_lv<8>) (zext_ln1118_1001_fu_12439915_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_669_fu_2460_p2() {
    mul_ln1118_669_fu_2460_p2 = (!mul_ln1118_669_fu_2460_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_669_fu_2460_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_66_fu_2806_p0() {
    mul_ln1118_66_fu_2806_p0 =  (sc_lv<8>) (zext_ln1116_21_fu_12404885_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_66_fu_2806_p2() {
    mul_ln1118_66_fu_2806_p2 = (!mul_ln1118_66_fu_2806_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_66_fu_2806_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_670_fu_1953_p0() {
    mul_ln1118_670_fu_1953_p0 =  (sc_lv<8>) (zext_ln1118_1002_fu_12439944_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_670_fu_1953_p2() {
    mul_ln1118_670_fu_1953_p2 = (!mul_ln1118_670_fu_1953_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_670_fu_1953_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_671_fu_1418_p0() {
    mul_ln1118_671_fu_1418_p0 =  (sc_lv<8>) (zext_ln1118_2909_fu_12440116_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_671_fu_1418_p2() {
    mul_ln1118_671_fu_1418_p2 = (!mul_ln1118_671_fu_1418_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_671_fu_1418_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_672_fu_2396_p0() {
    mul_ln1118_672_fu_2396_p0 =  (sc_lv<8>) (zext_ln1118_2912_fu_12440175_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_672_fu_2396_p2() {
    mul_ln1118_672_fu_2396_p2 = (!mul_ln1118_672_fu_2396_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_672_fu_2396_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_673_fu_3402_p0() {
    mul_ln1118_673_fu_3402_p0 =  (sc_lv<8>) (zext_ln1116_189_fu_12443617_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_673_fu_3402_p2() {
    mul_ln1118_673_fu_3402_p2 = (!mul_ln1118_673_fu_3402_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_673_fu_3402_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_674_fu_2839_p0() {
    mul_ln1118_674_fu_2839_p0 =  (sc_lv<8>) (zext_ln1118_1069_fu_12443639_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_674_fu_2839_p2() {
    mul_ln1118_674_fu_2839_p2 = (!mul_ln1118_674_fu_2839_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_674_fu_2839_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_675_fu_3282_p0() {
    mul_ln1118_675_fu_3282_p0 =  (sc_lv<8>) (zext_ln1116_191_fu_12443751_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_675_fu_3282_p2() {
    mul_ln1118_675_fu_3282_p2 = (!mul_ln1118_675_fu_3282_p0.read().is_01() || !ap_const_lv16_FF96.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_675_fu_3282_p0.read()) * sc_bigint<16>(ap_const_lv16_FF96);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_676_fu_2691_p0() {
    mul_ln1118_676_fu_2691_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12439141_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_676_fu_2691_p2() {
    mul_ln1118_676_fu_2691_p2 = (!mul_ln1118_676_fu_2691_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_676_fu_2691_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_677_fu_2240_p0() {
    mul_ln1118_677_fu_2240_p0 =  (sc_lv<8>) (zext_ln1118_976_fu_12439214_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_677_fu_2240_p2() {
    mul_ln1118_677_fu_2240_p2 = (!mul_ln1118_677_fu_2240_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_677_fu_2240_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_678_fu_1677_p0() {
    mul_ln1118_678_fu_1677_p0 =  (sc_lv<8>) (zext_ln1118_2877_fu_12439258_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_678_fu_1677_p2() {
    mul_ln1118_678_fu_1677_p2 = (!mul_ln1118_678_fu_1677_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_678_fu_1677_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_679_fu_2481_p0() {
    mul_ln1118_679_fu_2481_p0 =  (sc_lv<8>) (zext_ln1118_980_fu_12439289_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_679_fu_2481_p2() {
    mul_ln1118_679_fu_2481_p2 = (!mul_ln1118_679_fu_2481_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_679_fu_2481_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_67_fu_2410_p0() {
    mul_ln1118_67_fu_2410_p0 =  (sc_lv<8>) (zext_ln1116_22_fu_12404930_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_67_fu_2410_p2() {
    mul_ln1118_67_fu_2410_p2 = (!mul_ln1118_67_fu_2410_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_67_fu_2410_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_680_fu_3105_p0() {
    mul_ln1118_680_fu_3105_p0 =  (sc_lv<8>) (zext_ln1118_996_fu_12439783_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_680_fu_3105_p2() {
    mul_ln1118_680_fu_3105_p2 = (!mul_ln1118_680_fu_3105_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_680_fu_3105_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_681_fu_2484_p0() {
    mul_ln1118_681_fu_2484_p0 =  (sc_lv<8>) (zext_ln1118_2903_fu_12439993_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_681_fu_2484_p2() {
    mul_ln1118_681_fu_2484_p2 = (!mul_ln1118_681_fu_2484_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_681_fu_2484_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_682_fu_3107_p0() {
    mul_ln1118_682_fu_3107_p0 =  (sc_lv<8>) (zext_ln1118_1062_fu_12443569_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_682_fu_3107_p2() {
    mul_ln1118_682_fu_3107_p2 = (!mul_ln1118_682_fu_3107_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_682_fu_3107_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_683_fu_2486_p0() {
    mul_ln1118_683_fu_2486_p0 =  (sc_lv<8>) (zext_ln1118_2908_fu_12440103_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_683_fu_2486_p2() {
    mul_ln1118_683_fu_2486_p2 = (!mul_ln1118_683_fu_2486_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_683_fu_2486_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_684_fu_3110_p0() {
    mul_ln1118_684_fu_3110_p0 =  (sc_lv<8>) (zext_ln1116_189_fu_12443617_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_684_fu_3110_p2() {
    mul_ln1118_684_fu_3110_p2 = (!mul_ln1118_684_fu_3110_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_684_fu_3110_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_685_fu_3111_p0() {
    mul_ln1118_685_fu_3111_p0 =  (sc_lv<8>) (zext_ln1116_190_fu_12443662_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_685_fu_3111_p2() {
    mul_ln1118_685_fu_3111_p2 = (!mul_ln1118_685_fu_3111_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_685_fu_3111_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_686_fu_2051_p0() {
    mul_ln1118_686_fu_2051_p0 =  (sc_lv<8>) (zext_ln1118_2924_fu_12440398_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_686_fu_2051_p2() {
    mul_ln1118_686_fu_2051_p2 = (!mul_ln1118_686_fu_2051_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_686_fu_2051_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_687_fu_3114_p0() {
    mul_ln1118_687_fu_3114_p0 =  (sc_lv<8>) (zext_ln1116_170_fu_12439205_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_687_fu_3114_p2() {
    mul_ln1118_687_fu_3114_p2 = (!mul_ln1118_687_fu_3114_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_687_fu_3114_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_688_fu_1871_p0() {
    mul_ln1118_688_fu_1871_p0 =  (sc_lv<8>) (zext_ln1118_979_fu_12439278_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_688_fu_1871_p2() {
    mul_ln1118_688_fu_1871_p2 = (!mul_ln1118_688_fu_1871_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_688_fu_1871_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_689_fu_3116_p0() {
    mul_ln1118_689_fu_3116_p0 =  (sc_lv<8>) (zext_ln708_366_fu_12439336_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_689_fu_3116_p2() {
    mul_ln1118_689_fu_3116_p2 = (!mul_ln1118_689_fu_3116_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_689_fu_3116_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_68_fu_1931_p0() {
    mul_ln1118_68_fu_1931_p0 =  (sc_lv<8>) (zext_ln1118_226_fu_12401666_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_68_fu_1931_p2() {
    mul_ln1118_68_fu_1931_p2 = (!mul_ln1118_68_fu_1931_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_68_fu_1931_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_690_fu_3117_p0() {
    mul_ln1118_690_fu_3117_p0 =  (sc_lv<8>) (zext_ln1118_2882_fu_12439386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_690_fu_3117_p2() {
    mul_ln1118_690_fu_3117_p2 = (!mul_ln1118_690_fu_3117_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_690_fu_3117_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_691_fu_1691_p0() {
    mul_ln1118_691_fu_1691_p0 =  (sc_lv<8>) (zext_ln708_488_fu_12440819_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_691_fu_1691_p2() {
    mul_ln1118_691_fu_1691_p2 = (!mul_ln1118_691_fu_1691_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_691_fu_1691_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_692_fu_2497_p0() {
    mul_ln1118_692_fu_2497_p0 =  (sc_lv<8>) (zext_ln1118_1044_fu_12443287_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_692_fu_2497_p2() {
    mul_ln1118_692_fu_2497_p2 = (!mul_ln1118_692_fu_2497_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_692_fu_2497_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_693_fu_3120_p0() {
    mul_ln1118_693_fu_3120_p0 =  (sc_lv<8>) (mul_ln1118_693_fu_3120_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_693_fu_3120_p00() {
    mul_ln1118_693_fu_3120_p00 = esl_zext<16,8>(p_read75.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_693_fu_3120_p2() {
    mul_ln1118_693_fu_3120_p2 = (!mul_ln1118_693_fu_3120_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_693_fu_3120_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_694_fu_2624_p0() {
    mul_ln1118_694_fu_2624_p0 =  (sc_lv<8>) (mul_ln1118_694_fu_2624_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_694_fu_2624_p00() {
    mul_ln1118_694_fu_2624_p00 = esl_zext<16,8>(p_read81.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_694_fu_2624_p2() {
    mul_ln1118_694_fu_2624_p2 = (!mul_ln1118_694_fu_2624_p0.read().is_01() || !ap_const_lv16_FFB3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_694_fu_2624_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_695_fu_3280_p0() {
    mul_ln1118_695_fu_3280_p0 =  (sc_lv<8>) (zext_ln1118_1003_fu_12440003_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_695_fu_3280_p2() {
    mul_ln1118_695_fu_3280_p2 = (!mul_ln1118_695_fu_3280_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_695_fu_3280_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_696_fu_2598_p0() {
    mul_ln1118_696_fu_2598_p0 =  (sc_lv<8>) (zext_ln1118_1061_fu_12443564_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_696_fu_2598_p2() {
    mul_ln1118_696_fu_2598_p2 = (!mul_ln1118_696_fu_2598_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_696_fu_2598_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_697_fu_2601_p0() {
    mul_ln1118_697_fu_2601_p0 =  (sc_lv<8>) (mul_ln1118_697_fu_2601_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_697_fu_2601_p00() {
    mul_ln1118_697_fu_2601_p00 = esl_zext<13,8>(p_read95.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_697_fu_2601_p2() {
    mul_ln1118_697_fu_2601_p2 = (!mul_ln1118_697_fu_2601_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_697_fu_2601_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_698_fu_2640_p0() {
    mul_ln1118_698_fu_2640_p0 =  (sc_lv<8>) (zext_ln1118_1045_fu_12443334_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_698_fu_2640_p2() {
    mul_ln1118_698_fu_2640_p2 = (!mul_ln1118_698_fu_2640_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_698_fu_2640_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_699_fu_2384_p0() {
    mul_ln1118_699_fu_2384_p0 =  (sc_lv<8>) (zext_ln1118_991_fu_12439659_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_699_fu_2384_p2() {
    mul_ln1118_699_fu_2384_p2 = (!mul_ln1118_699_fu_2384_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_699_fu_2384_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_69_fu_2346_p0() {
    mul_ln1118_69_fu_2346_p0 =  (sc_lv<8>) (zext_ln1116_2_fu_12400473_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_69_fu_2346_p2() {
    mul_ln1118_69_fu_2346_p2 = (!mul_ln1118_69_fu_2346_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_69_fu_2346_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_6_fu_1712_p0() {
    mul_ln1118_6_fu_1712_p0 =  (sc_lv<8>) (zext_ln1116_5_fu_12400759_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_6_fu_1712_p2() {
    mul_ln1118_6_fu_1712_p2 = (!mul_ln1118_6_fu_1712_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_6_fu_1712_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_700_fu_1877_p0() {
    mul_ln1118_700_fu_1877_p0 =  (sc_lv<8>) (zext_ln1116_187_fu_12443435_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_700_fu_1877_p2() {
    mul_ln1118_700_fu_1877_p2 = (!mul_ln1118_700_fu_1877_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_700_fu_1877_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_701_fu_2799_p0() {
    mul_ln1118_701_fu_2799_p0 =  (sc_lv<8>) (zext_ln1118_1000_fu_12439857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_701_fu_2799_p2() {
    mul_ln1118_701_fu_2799_p2 = (!mul_ln1118_701_fu_2799_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_701_fu_2799_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_702_fu_2320_p0() {
    mul_ln1118_702_fu_2320_p0 =  (sc_lv<8>) (zext_ln1118_1054_fu_12443489_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_702_fu_2320_p2() {
    mul_ln1118_702_fu_2320_p2 = (!mul_ln1118_702_fu_2320_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_702_fu_2320_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_703_fu_1785_p0() {
    mul_ln1118_703_fu_1785_p0 =  (sc_lv<8>) (zext_ln1118_1002_fu_12439944_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_703_fu_1785_p2() {
    mul_ln1118_703_fu_1785_p2 = (!mul_ln1118_703_fu_1785_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_703_fu_1785_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_704_fu_2763_p0() {
    mul_ln1118_704_fu_2763_p0 =  (sc_lv<8>) (zext_ln1118_2907_fu_12440070_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_704_fu_2763_p2() {
    mul_ln1118_704_fu_2763_p2 = (!mul_ln1118_704_fu_2763_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_704_fu_2763_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_705_fu_2200_p0() {
    mul_ln1118_705_fu_2200_p0 =  (sc_lv<8>) (zext_ln1116_189_fu_12443617_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_705_fu_2200_p2() {
    mul_ln1118_705_fu_2200_p2 = (!mul_ln1118_705_fu_2200_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_705_fu_2200_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_706_fu_3206_p0() {
    mul_ln1118_706_fu_3206_p0 =  (sc_lv<8>) (mul_ln1118_706_fu_3206_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_706_fu_3206_p00() {
    mul_ln1118_706_fu_3206_p00 = esl_zext<14,8>(p_read91.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_706_fu_3206_p2() {
    mul_ln1118_706_fu_3206_p2 = (!mul_ln1118_706_fu_3206_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_706_fu_3206_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_707_fu_2615_p0() {
    mul_ln1118_707_fu_2615_p0 =  (sc_lv<8>) (zext_ln1118_1011_fu_12440407_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_707_fu_2615_p2() {
    mul_ln1118_707_fu_2615_p2 = (!mul_ln1118_707_fu_2615_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_707_fu_2615_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_708_fu_1601_p0() {
    mul_ln1118_708_fu_1601_p0 =  (sc_lv<8>) (zext_ln1118_2882_fu_12439386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_708_fu_1601_p2() {
    mul_ln1118_708_fu_1601_p2 = (!mul_ln1118_708_fu_1601_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_708_fu_1601_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_70_fu_3296_p0() {
    mul_ln1118_70_fu_3296_p0 =  (sc_lv<8>) (zext_ln1118_11_fu_12400546_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_70_fu_3296_p2() {
    mul_ln1118_70_fu_3296_p2 = (!mul_ln1118_70_fu_3296_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_70_fu_3296_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_710_fu_2495_p0() {
    mul_ln1118_710_fu_2495_p0 =  (sc_lv<8>) (zext_ln1118_1105_fu_12445975_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_710_fu_2495_p2() {
    mul_ln1118_710_fu_2495_p2 = (!mul_ln1118_710_fu_2495_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_710_fu_2495_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_711_fu_2016_p0() {
    mul_ln1118_711_fu_2016_p0 =  (sc_lv<8>) (zext_ln1118_1116_fu_12446160_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_711_fu_2016_p2() {
    mul_ln1118_711_fu_2016_p2 = (!mul_ln1118_711_fu_2016_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_711_fu_2016_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_712_fu_2459_p0() {
    mul_ln1118_712_fu_2459_p0 =  (sc_lv<8>) (zext_ln1118_1120_fu_12446190_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_712_fu_2459_p2() {
    mul_ln1118_712_fu_2459_p2 = (!mul_ln1118_712_fu_2459_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_712_fu_2459_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_713_fu_2902_p0() {
    mul_ln1118_713_fu_2902_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12440091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_713_fu_2902_p2() {
    mul_ln1118_713_fu_2902_p2 = (!mul_ln1118_713_fu_2902_p0.read().is_01() || !ap_const_lv16_FF92.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_713_fu_2902_p0.read()) * sc_bigint<16>(ap_const_lv16_FF92);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_714_fu_2395_p0() {
    mul_ln1118_714_fu_2395_p0 =  (sc_lv<8>) (zext_ln1118_2910_fu_12440136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_714_fu_2395_p2() {
    mul_ln1118_714_fu_2395_p2 = (!mul_ln1118_714_fu_2395_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_714_fu_2395_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_715_fu_1768_p0() {
    mul_ln1118_715_fu_1768_p0 =  (sc_lv<8>) (zext_ln1118_1138_fu_12446437_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_715_fu_1768_p2() {
    mul_ln1118_715_fu_1768_p2 = (!mul_ln1118_715_fu_1768_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_715_fu_1768_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_716_fu_2718_p0() {
    mul_ln1118_716_fu_2718_p0 =  (sc_lv<8>) (zext_ln1118_2868_fu_12439090_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_716_fu_2718_p2() {
    mul_ln1118_716_fu_2718_p2 = (!mul_ln1118_716_fu_2718_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_716_fu_2718_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_717_fu_2183_p0() {
    mul_ln1118_717_fu_2183_p0 =  (sc_lv<8>) (zext_ln1118_2881_fu_12439351_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_717_fu_2183_p2() {
    mul_ln1118_717_fu_2183_p2 = (!mul_ln1118_717_fu_2183_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_717_fu_2183_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_718_fu_3189_p0() {
    mul_ln1118_718_fu_3189_p0 =  (sc_lv<8>) (zext_ln1118_1044_fu_12443287_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_718_fu_3189_p2() {
    mul_ln1118_718_fu_3189_p2 = (!mul_ln1118_718_fu_3189_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_718_fu_3189_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_71_fu_2789_p0() {
    mul_ln1118_71_fu_2789_p0 =  (sc_lv<8>) (zext_ln708_fu_12400604_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_71_fu_2789_p2() {
    mul_ln1118_71_fu_2789_p2 = (!mul_ln1118_71_fu_2789_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_71_fu_2789_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_721_fu_2626_p0() {
    mul_ln1118_721_fu_2626_p0 =  (sc_lv<8>) (zext_ln1116_179_fu_12439937_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_721_fu_2626_p2() {
    mul_ln1118_721_fu_2626_p2 = (!mul_ln1118_721_fu_2626_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_721_fu_2626_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_722_fu_3097_p0() {
    mul_ln1118_722_fu_3097_p0 =  (sc_lv<8>) (zext_ln708_476_fu_12440150_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_722_fu_3097_p2() {
    mul_ln1118_722_fu_3097_p2 = (!mul_ln1118_722_fu_3097_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_722_fu_3097_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_724_fu_3164_p0() {
    mul_ln1118_724_fu_3164_p0 =  (sc_lv<8>) (zext_ln1116_170_fu_12439205_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_724_fu_3164_p2() {
    mul_ln1118_724_fu_3164_p2 = (!mul_ln1118_724_fu_3164_p0.read().is_01() || !ap_const_lv16_FFA8.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_724_fu_3164_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA8);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_725_fu_2361_p0() {
    mul_ln1118_725_fu_2361_p0 =  (sc_lv<8>) (zext_ln1118_2882_fu_12439386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_725_fu_2361_p2() {
    mul_ln1118_725_fu_2361_p2 = (!mul_ln1118_725_fu_2361_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_725_fu_2361_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_726_fu_2362_p0() {
    mul_ln1118_726_fu_2362_p0 =  (sc_lv<8>) (zext_ln1118_1105_fu_12445975_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_726_fu_2362_p2() {
    mul_ln1118_726_fu_2362_p2 = (!mul_ln1118_726_fu_2362_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_726_fu_2362_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_727_fu_2363_p0() {
    mul_ln1118_727_fu_2363_p0 =  (sc_lv<8>) (zext_ln1118_989_fu_12439599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_727_fu_2363_p2() {
    mul_ln1118_727_fu_2363_p2 = (!mul_ln1118_727_fu_2363_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_727_fu_2363_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_728_fu_1743_p0() {
    mul_ln1118_728_fu_1743_p0 =  (sc_lv<8>) (zext_ln1118_2909_fu_12440116_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_728_fu_1743_p2() {
    mul_ln1118_728_fu_1743_p2 = (!mul_ln1118_728_fu_1743_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_728_fu_1743_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_729_fu_2367_p0() {
    mul_ln1118_729_fu_2367_p0 =  (sc_lv<8>) (zext_ln1118_1069_fu_12443639_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_729_fu_2367_p2() {
    mul_ln1118_729_fu_2367_p2 = (!mul_ln1118_729_fu_2367_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_729_fu_2367_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_72_fu_2254_p0() {
    mul_ln1118_72_fu_2254_p0 =  (sc_lv<8>) (zext_ln1118_87_fu_12400654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_72_fu_2254_p2() {
    mul_ln1118_72_fu_2254_p2 = (!mul_ln1118_72_fu_2254_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_72_fu_2254_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_730_fu_1746_p0() {
    mul_ln1118_730_fu_1746_p0 =  (sc_lv<8>) (zext_ln708_372_fu_12440307_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_730_fu_1746_p2() {
    mul_ln1118_730_fu_1746_p2 = (!mul_ln1118_730_fu_1746_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_730_fu_1746_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_731_fu_1747_p0() {
    mul_ln1118_731_fu_1747_p0 =  (sc_lv<8>) (zext_ln1118_1014_fu_12440444_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_731_fu_1747_p2() {
    mul_ln1118_731_fu_1747_p2 = (!mul_ln1118_731_fu_1747_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_731_fu_1747_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_732_fu_2370_p0() {
    mul_ln1118_732_fu_2370_p0 =  (sc_lv<8>) (zext_ln1116_168_fu_12439071_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_732_fu_2370_p2() {
    mul_ln1118_732_fu_2370_p2 = (!mul_ln1118_732_fu_2370_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_732_fu_2370_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_733_fu_1749_p0() {
    mul_ln1118_733_fu_1749_p0 =  (sc_lv<8>) (zext_ln1118_2875_fu_12439223_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_733_fu_1749_p2() {
    mul_ln1118_733_fu_1749_p2 = (!mul_ln1118_733_fu_1749_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_733_fu_1749_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_734_fu_3177_p0() {
    mul_ln1118_734_fu_3177_p0 =  (sc_lv<8>) (zext_ln1118_2881_fu_12439351_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_734_fu_3177_p2() {
    mul_ln1118_734_fu_3177_p2 = (!mul_ln1118_734_fu_3177_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_734_fu_3177_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_735_fu_1751_p0() {
    mul_ln1118_735_fu_1751_p0 =  (sc_lv<8>) (mul_ln1118_735_fu_1751_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_735_fu_1751_p00() {
    mul_ln1118_735_fu_1751_p00 = esl_zext<16,8>(p_read71.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_735_fu_1751_p2() {
    mul_ln1118_735_fu_1751_p2 = (!mul_ln1118_735_fu_1751_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_735_fu_1751_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_736_fu_2374_p0() {
    mul_ln1118_736_fu_2374_p0 =  (sc_lv<8>) (zext_ln1116_173_fu_12439491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_736_fu_2374_p2() {
    mul_ln1118_736_fu_2374_p2 = (!mul_ln1118_736_fu_2374_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_736_fu_2374_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_737_fu_2375_p0() {
    mul_ln1118_737_fu_2375_p0 =  (sc_lv<8>) (zext_ln1116_174_fu_12439589_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_737_fu_2375_p2() {
    mul_ln1118_737_fu_2375_p2 = (!mul_ln1118_737_fu_2375_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_737_fu_2375_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_738_fu_3181_p0() {
    mul_ln1118_738_fu_3181_p0 =  (sc_lv<8>) (zext_ln1118_1045_fu_12443334_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_738_fu_3181_p2() {
    mul_ln1118_738_fu_3181_p2 = (!mul_ln1118_738_fu_3181_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_738_fu_3181_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_739_fu_2377_p0() {
    mul_ln1118_739_fu_2377_p0 =  (sc_lv<8>) (zext_ln1118_995_fu_12439770_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_739_fu_2377_p2() {
    mul_ln1118_739_fu_2377_p2 = (!mul_ln1118_739_fu_2377_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_739_fu_2377_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_73_fu_3232_p0() {
    mul_ln1118_73_fu_3232_p0 =  (sc_lv<8>) (zext_ln708_25_fu_12402087_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_73_fu_3232_p2() {
    mul_ln1118_73_fu_3232_p2 = (!mul_ln1118_73_fu_3232_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_73_fu_3232_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_740_fu_3049_p0() {
    mul_ln1118_740_fu_3049_p0 =  (sc_lv<8>) (zext_ln1116_189_fu_12443617_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_740_fu_3049_p2() {
    mul_ln1118_740_fu_3049_p2 = (!mul_ln1118_740_fu_3049_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_740_fu_3049_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_741_fu_3050_p0() {
    mul_ln1118_741_fu_3050_p0 =  (sc_lv<8>) (zext_ln708_376_fu_12440494_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_741_fu_3050_p2() {
    mul_ln1118_741_fu_3050_p2 = (!mul_ln1118_741_fu_3050_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_741_fu_3050_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_742_fu_1685_p0() {
    mul_ln1118_742_fu_1685_p0 =  (sc_lv<8>) (mul_ln1118_742_fu_1685_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_742_fu_1685_p00() {
    mul_ln1118_742_fu_1685_p00 = esl_zext<13,8>(p_read64.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_742_fu_1685_p2() {
    mul_ln1118_742_fu_1685_p2 = (!mul_ln1118_742_fu_1685_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_742_fu_1685_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_743_fu_2369_p0() {
    mul_ln1118_743_fu_2369_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12439141_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_743_fu_2369_p2() {
    mul_ln1118_743_fu_2369_p2 = (!mul_ln1118_743_fu_2369_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_743_fu_2369_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_744_fu_3053_p0() {
    mul_ln1118_744_fu_3053_p0 =  (sc_lv<8>) (zext_ln1116_170_fu_12439205_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_744_fu_3053_p2() {
    mul_ln1118_744_fu_3053_p2 = (!mul_ln1118_744_fu_3053_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_744_fu_3053_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_745_fu_3054_p0() {
    mul_ln1118_745_fu_3054_p0 =  (sc_lv<8>) (mul_ln1118_745_fu_3054_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_745_fu_3054_p00() {
    mul_ln1118_745_fu_3054_p00 = esl_zext<16,8>(p_read68.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_745_fu_3054_p2() {
    mul_ln1118_745_fu_3054_p2 = (!mul_ln1118_745_fu_3054_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_745_fu_3054_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_746_fu_2372_p0() {
    mul_ln1118_746_fu_2372_p0 =  (sc_lv<8>) (zext_ln1116_210_fu_12448317_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_746_fu_2372_p2() {
    mul_ln1118_746_fu_2372_p2 = (!mul_ln1118_746_fu_2372_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_746_fu_2372_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_747_fu_2373_p0() {
    mul_ln1118_747_fu_2373_p0 =  (sc_lv<8>) (zext_ln1118_2882_fu_12439386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_747_fu_2373_p2() {
    mul_ln1118_747_fu_2373_p2 = (!mul_ln1118_747_fu_2373_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_747_fu_2373_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_748_fu_2179_p0() {
    mul_ln1118_748_fu_2179_p0 =  (sc_lv<8>) (zext_ln1116_176_fu_12439641_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_748_fu_2179_p2() {
    mul_ln1118_748_fu_2179_p2 = (!mul_ln1118_748_fu_2179_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_748_fu_2179_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_749_fu_3185_p0() {
    mul_ln1118_749_fu_3185_p0 =  (sc_lv<8>) (zext_ln1116_213_fu_12448523_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_749_fu_3185_p2() {
    mul_ln1118_749_fu_3185_p2 = (!mul_ln1118_749_fu_3185_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_749_fu_3185_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_74_fu_2697_p0() {
    mul_ln1118_74_fu_2697_p0 =  (sc_lv<8>) (zext_ln1118_76_fu_12404555_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_74_fu_2697_p2() {
    mul_ln1118_74_fu_2697_p2 = (!mul_ln1118_74_fu_2697_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_74_fu_2697_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_750_fu_2143_p0() {
    mul_ln1118_750_fu_2143_p0 =  (sc_lv<8>) (zext_ln1118_1000_fu_12439857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_750_fu_2143_p2() {
    mul_ln1118_750_fu_2143_p2 = (!mul_ln1118_750_fu_2143_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_750_fu_2143_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_751_fu_1580_p0() {
    mul_ln1118_751_fu_1580_p0 =  (sc_lv<8>) (zext_ln1118_1003_fu_12440003_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_751_fu_1580_p2() {
    mul_ln1118_751_fu_1580_p2 = (!mul_ln1118_751_fu_1580_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_751_fu_1580_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_752_fu_2558_p0() {
    mul_ln1118_752_fu_2558_p0 =  (sc_lv<8>) (mul_ln1118_752_fu_2558_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_752_fu_2558_p00() {
    mul_ln1118_752_fu_2558_p00 = esl_zext<12,8>(p_read86.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_752_fu_2558_p2() {
    mul_ln1118_752_fu_2558_p2 = (!mul_ln1118_752_fu_2558_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_752_fu_2558_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_753_fu_2023_p0() {
    mul_ln1118_753_fu_2023_p0 =  (sc_lv<8>) (zext_ln1116_183_fu_12440167_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_753_fu_2023_p2() {
    mul_ln1118_753_fu_2023_p2 = (!mul_ln1118_753_fu_2023_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_753_fu_2023_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_754_fu_3416_p0() {
    mul_ln1118_754_fu_3416_p0 =  (sc_lv<8>) (zext_ln1116_215_fu_12448772_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_754_fu_3416_p2() {
    mul_ln1118_754_fu_3416_p2 = (!mul_ln1118_754_fu_3416_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_754_fu_3416_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_755_fu_2402_p0() {
    mul_ln1118_755_fu_2402_p0 =  (sc_lv<8>) (zext_ln1118_2868_fu_12439090_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_755_fu_2402_p2() {
    mul_ln1118_755_fu_2402_p2 = (!mul_ln1118_755_fu_2402_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_755_fu_2402_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_756_fu_2761_p0() {
    mul_ln1118_756_fu_2761_p0 =  (sc_lv<8>) (zext_ln1116_211_fu_12448423_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_756_fu_2761_p2() {
    mul_ln1118_756_fu_2761_p2 = (!mul_ln1118_756_fu_2761_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_756_fu_2761_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_758_fu_3260_p0() {
    mul_ln1118_758_fu_3260_p0 =  (sc_lv<8>) (zext_ln1118_1003_fu_12440003_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_758_fu_3260_p2() {
    mul_ln1118_758_fu_3260_p2 = (!mul_ln1118_758_fu_3260_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_758_fu_3260_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_759_fu_2725_p0() {
    mul_ln1118_759_fu_2725_p0 =  (sc_lv<8>) (zext_ln1118_2908_fu_12440103_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_759_fu_2725_p2() {
    mul_ln1118_759_fu_2725_p2 = (!mul_ln1118_759_fu_2725_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_759_fu_2725_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_75_fu_2162_p0() {
    mul_ln1118_75_fu_2162_p0 =  (sc_lv<8>) (mul_ln1118_75_fu_2162_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_75_fu_2162_p00() {
    mul_ln1118_75_fu_2162_p00 = esl_zext<16,8>(p_read11.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_75_fu_2162_p2() {
    mul_ln1118_75_fu_2162_p2 = (!mul_ln1118_75_fu_2162_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_75_fu_2162_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_760_fu_1655_p0() {
    mul_ln1118_760_fu_1655_p0 =  (sc_lv<8>) (zext_ln1116_210_fu_12448317_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_760_fu_1655_p2() {
    mul_ln1118_760_fu_1655_p2 = (!mul_ln1118_760_fu_1655_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_760_fu_1655_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_761_fu_2014_p0() {
    mul_ln1118_761_fu_2014_p0 =  (sc_lv<8>) (zext_ln708_367_fu_12439426_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_761_fu_2014_p2() {
    mul_ln1118_761_fu_2014_p2 = (!mul_ln1118_761_fu_2014_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_761_fu_2014_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_762_fu_2034_p0() {
    mul_ln1118_762_fu_2034_p0 =  (sc_lv<8>) (zext_ln1118_992_fu_12439702_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_762_fu_2034_p2() {
    mul_ln1118_762_fu_2034_p2 = (!mul_ln1118_762_fu_2034_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_762_fu_2034_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_763_fu_2449_p0() {
    mul_ln1118_763_fu_2449_p0 =  (sc_lv<8>) (zext_ln1116_178_fu_12439761_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_763_fu_2449_p2() {
    mul_ln1118_763_fu_2449_p2 = (!mul_ln1118_763_fu_2449_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_763_fu_2449_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_764_fu_3427_p0() {
    mul_ln1118_764_fu_3427_p0 =  (sc_lv<8>) (zext_ln1118_998_fu_12439815_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_764_fu_3427_p2() {
    mul_ln1118_764_fu_3427_p2 = (!mul_ln1118_764_fu_3427_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_764_fu_3427_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_765_fu_3408_p0() {
    mul_ln1118_765_fu_3408_p0 =  (sc_lv<8>) (zext_ln1118_2910_fu_12440136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_765_fu_3408_p2() {
    mul_ln1118_765_fu_3408_p2 = (!mul_ln1118_765_fu_3408_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_765_fu_3408_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_766_fu_1616_p0() {
    mul_ln1118_766_fu_1616_p0 =  (sc_lv<8>) (zext_ln1116_183_fu_12440167_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_766_fu_1616_p2() {
    mul_ln1118_766_fu_1616_p2 = (!mul_ln1118_766_fu_1616_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_766_fu_1616_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_767_fu_2422_p0() {
    mul_ln1118_767_fu_2422_p0 =  (sc_lv<8>) (zext_ln1118_1007_fu_12440224_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_767_fu_2422_p2() {
    mul_ln1118_767_fu_2422_p2 = (!mul_ln1118_767_fu_2422_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_767_fu_2422_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_768_fu_3045_p0() {
    mul_ln1118_768_fu_3045_p0 =  (sc_lv<8>) (zext_ln1118_2866_fu_12439080_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_768_fu_3045_p2() {
    mul_ln1118_768_fu_3045_p2 = (!mul_ln1118_768_fu_3045_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_768_fu_3045_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_769_fu_2241_p0() {
    mul_ln1118_769_fu_2241_p0 =  (sc_lv<8>) (zext_ln1118_1089_fu_12445797_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_769_fu_2241_p2() {
    mul_ln1118_769_fu_2241_p2 = (!mul_ln1118_769_fu_2241_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_769_fu_2241_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_76_fu_1986_p0() {
    mul_ln1118_76_fu_1986_p0 =  (sc_lv<8>) (mul_ln1118_76_fu_1986_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_76_fu_1986_p00() {
    mul_ln1118_76_fu_1986_p00 = esl_zext<16,8>(p_read17.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_76_fu_1986_p2() {
    mul_ln1118_76_fu_1986_p2 = (!mul_ln1118_76_fu_1986_p0.read().is_01() || !ap_const_lv16_FFB3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_76_fu_1986_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_770_fu_1620_p0() {
    mul_ln1118_770_fu_1620_p0 =  (sc_lv<8>) (zext_ln1118_2883_fu_12439433_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_770_fu_1620_p2() {
    mul_ln1118_770_fu_1620_p2 = (!mul_ln1118_770_fu_1620_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_770_fu_1620_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_771_fu_3048_p0() {
    mul_ln1118_771_fu_3048_p0 =  (sc_lv<8>) (zext_ln1118_1044_fu_12443287_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_771_fu_3048_p2() {
    mul_ln1118_771_fu_3048_p2 = (!mul_ln1118_771_fu_3048_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_771_fu_3048_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_772_fu_2244_p0() {
    mul_ln1118_772_fu_2244_p0 =  (sc_lv<8>) (zext_ln1118_989_fu_12439599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_772_fu_2244_p2() {
    mul_ln1118_772_fu_2244_p2 = (!mul_ln1118_772_fu_2244_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_772_fu_2244_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_773_fu_1623_p0() {
    mul_ln1118_773_fu_1623_p0 =  (sc_lv<8>) (zext_ln1118_995_fu_12439770_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_773_fu_1623_p2() {
    mul_ln1118_773_fu_1623_p2 = (!mul_ln1118_773_fu_1623_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_773_fu_1623_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_774_fu_2251_p0() {
    mul_ln1118_774_fu_2251_p0 =  (sc_lv<8>) (zext_ln1116_191_fu_12443751_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_774_fu_2251_p2() {
    mul_ln1118_774_fu_2251_p2 = (!mul_ln1118_774_fu_2251_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_774_fu_2251_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_776_fu_1630_p0() {
    mul_ln1118_776_fu_1630_p0 =  (sc_lv<8>) (zext_ln1118_1093_fu_12445835_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_776_fu_1630_p2() {
    mul_ln1118_776_fu_1630_p2 = (!mul_ln1118_776_fu_1630_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_776_fu_1630_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_777_fu_3058_p0() {
    mul_ln1118_777_fu_3058_p0 =  (sc_lv<8>) (mul_ln1118_777_fu_3058_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_777_fu_3058_p00() {
    mul_ln1118_777_fu_3058_p00 = esl_zext<15,8>(p_read68.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_777_fu_3058_p2() {
    mul_ln1118_777_fu_3058_p2 = (!mul_ln1118_777_fu_3058_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_777_fu_3058_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_778_fu_3242_p0() {
    mul_ln1118_778_fu_3242_p0 =  (sc_lv<8>) (zext_ln1118_2881_fu_12439351_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_778_fu_3242_p2() {
    mul_ln1118_778_fu_3242_p2 = (!mul_ln1118_778_fu_3242_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_778_fu_3242_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_779_fu_1633_p0() {
    mul_ln1118_779_fu_1633_p0 =  (sc_lv<8>) (mul_ln1118_779_fu_1633_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_779_fu_1633_p00() {
    mul_ln1118_779_fu_1633_p00 = esl_zext<13,8>(p_read70.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_779_fu_1633_p2() {
    mul_ln1118_779_fu_1633_p2 = (!mul_ln1118_779_fu_1633_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_779_fu_1633_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_77_fu_1563_p0() {
    mul_ln1118_77_fu_1563_p0 =  (sc_lv<8>) (zext_ln1118_35_fu_12401271_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_77_fu_1563_p2() {
    mul_ln1118_77_fu_1563_p2 = (!mul_ln1118_77_fu_1563_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_77_fu_1563_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_780_fu_1634_p0() {
    mul_ln1118_780_fu_1634_p0 =  (sc_lv<8>) (zext_ln1118_2883_fu_12439433_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_780_fu_1634_p2() {
    mul_ln1118_780_fu_1634_p2 = (!mul_ln1118_780_fu_1634_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_780_fu_1634_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_781_fu_2783_p0() {
    mul_ln1118_781_fu_2783_p0 =  (sc_lv<8>) (zext_ln708_368_fu_12439581_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_781_fu_2783_p2() {
    mul_ln1118_781_fu_2783_p2 = (!mul_ln1118_781_fu_2783_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_781_fu_2783_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_782_fu_2898_p0() {
    mul_ln1118_782_fu_2898_p0 =  (sc_lv<8>) (zext_ln1116_176_fu_12439641_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_782_fu_2898_p2() {
    mul_ln1118_782_fu_2898_p2 = (!mul_ln1118_782_fu_2898_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_782_fu_2898_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_783_fu_1419_p0() {
    mul_ln1118_783_fu_1419_p0 =  (sc_lv<8>) (zext_ln1118_2896_fu_12439809_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_783_fu_1419_p2() {
    mul_ln1118_783_fu_1419_p2 = (!mul_ln1118_783_fu_1419_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_783_fu_1419_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_784_fu_2824_p0() {
    mul_ln1118_784_fu_2824_p0 =  (sc_lv<8>) (zext_ln1118_1003_fu_12440003_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_784_fu_2824_p2() {
    mul_ln1118_784_fu_2824_p2 = (!mul_ln1118_784_fu_2824_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_784_fu_2824_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_785_fu_2104_p0() {
    mul_ln1118_785_fu_2104_p0 =  (sc_lv<8>) (mul_ln1118_785_fu_2104_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_785_fu_2104_p00() {
    mul_ln1118_785_fu_2104_p00 = esl_zext<14,8>(p_read85.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_785_fu_2104_p2() {
    mul_ln1118_785_fu_2104_p2 = (!mul_ln1118_785_fu_2104_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_785_fu_2104_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_786_fu_2105_p0() {
    mul_ln1118_786_fu_2105_p0 =  (sc_lv<8>) (zext_ln1116_223_fu_12451020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_786_fu_2105_p2() {
    mul_ln1118_786_fu_2105_p2 = (!mul_ln1118_786_fu_2105_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_786_fu_2105_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_787_fu_2827_p0() {
    mul_ln1118_787_fu_2827_p0 =  (sc_lv<8>) (zext_ln1118_1008_fu_12440250_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_787_fu_2827_p2() {
    mul_ln1118_787_fu_2827_p2 = (!mul_ln1118_787_fu_2827_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_787_fu_2827_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_788_fu_2107_p0() {
    mul_ln1118_788_fu_2107_p0 =  (sc_lv<8>) (zext_ln708_372_fu_12440307_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_788_fu_2107_p2() {
    mul_ln1118_788_fu_2107_p2 = (!mul_ln1118_788_fu_2107_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_788_fu_2107_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_789_fu_1467_p0() {
    mul_ln1118_789_fu_1467_p0 =  (sc_lv<8>) (zext_ln1118_2924_fu_12440398_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_789_fu_1467_p2() {
    mul_ln1118_789_fu_1467_p2 = (!mul_ln1118_789_fu_1467_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_789_fu_1467_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_78_fu_2513_p0() {
    mul_ln1118_78_fu_2513_p0 =  (sc_lv<8>) (zext_ln1118_93_fu_12404832_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_78_fu_2513_p2() {
    mul_ln1118_78_fu_2513_p2 = (!mul_ln1118_78_fu_2513_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_78_fu_2513_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_790_fu_2529_p0() {
    mul_ln1118_790_fu_2529_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12439141_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_790_fu_2529_p2() {
    mul_ln1118_790_fu_2529_p2 = (!mul_ln1118_790_fu_2529_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_790_fu_2529_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_791_fu_3339_p0() {
    mul_ln1118_791_fu_3339_p0 =  (sc_lv<8>) (zext_ln1118_1093_fu_12445835_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_791_fu_3339_p2() {
    mul_ln1118_791_fu_3339_p2 = (!mul_ln1118_791_fu_3339_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_791_fu_3339_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_792_fu_2409_p0() {
    mul_ln1118_792_fu_2409_p0 =  (sc_lv<8>) (zext_ln1118_2883_fu_12439433_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_792_fu_2409_p2() {
    mul_ln1118_792_fu_2409_p2 = (!mul_ln1118_792_fu_2409_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_792_fu_2409_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_793_fu_3415_p0() {
    mul_ln1118_793_fu_3415_p0 =  (sc_lv<8>) (zext_ln1118_3086_fu_12445969_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_793_fu_3415_p2() {
    mul_ln1118_793_fu_3415_p2 = (!mul_ln1118_793_fu_3415_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_793_fu_3415_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_794_fu_2880_p0() {
    mul_ln1118_794_fu_2880_p0 =  (sc_lv<8>) (zext_ln1118_989_fu_12439599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_794_fu_2880_p2() {
    mul_ln1118_794_fu_2880_p2 = (!mul_ln1118_794_fu_2880_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_794_fu_2880_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_795_fu_3351_p0() {
    mul_ln1118_795_fu_3351_p0 =  (sc_lv<8>) (zext_ln1118_1003_fu_12440003_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_795_fu_3351_p2() {
    mul_ln1118_795_fu_3351_p2 = (!mul_ln1118_795_fu_3351_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_795_fu_3351_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_796_fu_2788_p0() {
    mul_ln1118_796_fu_2788_p0 =  (sc_lv<8>) (zext_ln1118_2908_fu_12440103_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_796_fu_2788_p2() {
    mul_ln1118_796_fu_2788_p2 = (!mul_ln1118_796_fu_2788_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_796_fu_2788_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_797_fu_2169_p0() {
    mul_ln1118_797_fu_2169_p0 =  (sc_lv<8>) (zext_ln1116_223_fu_12451020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_797_fu_2169_p2() {
    mul_ln1118_797_fu_2169_p2 = (!mul_ln1118_797_fu_2169_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_797_fu_2169_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_798_fu_2418_p0() {
    mul_ln1118_798_fu_2418_p0 =  (sc_lv<8>) (zext_ln1116_183_fu_12440167_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_798_fu_2418_p2() {
    mul_ln1118_798_fu_2418_p2 = (!mul_ln1118_798_fu_2418_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_798_fu_2418_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_799_fu_2161_p0() {
    mul_ln1118_799_fu_2161_p0 =  (sc_lv<8>) (zext_ln1118_1069_fu_12443639_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_799_fu_2161_p2() {
    mul_ln1118_799_fu_2161_p2 = (!mul_ln1118_799_fu_2161_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_799_fu_2161_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_79_fu_2393_p0() {
    mul_ln1118_79_fu_2393_p0 =  (sc_lv<8>) (mul_ln1118_79_fu_2393_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_79_fu_2393_p00() {
    mul_ln1118_79_fu_2393_p00 = esl_zext<13,8>(p_read31.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_79_fu_2393_p2() {
    mul_ln1118_79_fu_2393_p2 = (!mul_ln1118_79_fu_2393_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_79_fu_2393_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_7_fu_1530_p0() {
    mul_ln1118_7_fu_1530_p0 =  (sc_lv<8>) (zext_ln1118_24_fu_12400970_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_7_fu_1530_p2() {
    mul_ln1118_7_fu_1530_p2 = (!mul_ln1118_7_fu_1530_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_7_fu_1530_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_800_fu_3167_p0() {
    mul_ln1118_800_fu_3167_p0 =  (sc_lv<8>) (zext_ln1116_190_fu_12443662_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_800_fu_3167_p2() {
    mul_ln1118_800_fu_3167_p2 = (!mul_ln1118_800_fu_3167_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_800_fu_3167_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_801_fu_2041_p0() {
    mul_ln1118_801_fu_2041_p0 =  (sc_lv<8>) (mul_ln1118_801_fu_2041_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_801_fu_2041_p00() {
    mul_ln1118_801_fu_2041_p00 = esl_zext<13,8>(p_read94.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_801_fu_2041_p2() {
    mul_ln1118_801_fu_2041_p2 = (!mul_ln1118_801_fu_2041_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_801_fu_2041_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_802_fu_1506_p0() {
    mul_ln1118_802_fu_1506_p0 =  (sc_lv<8>) (zext_ln1116_185_fu_12440554_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_802_fu_1506_p2() {
    mul_ln1118_802_fu_1506_p2 = (!mul_ln1118_802_fu_1506_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_802_fu_1506_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_803_fu_1977_p0() {
    mul_ln1118_803_fu_1977_p0 =  (sc_lv<8>) (zext_ln1116_211_fu_12448423_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_803_fu_1977_p2() {
    mul_ln1118_803_fu_1977_p2 = (!mul_ln1118_803_fu_1977_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_803_fu_1977_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_804_fu_2420_p0() {
    mul_ln1118_804_fu_2420_p0 =  (sc_lv<8>) (zext_ln1116_184_fu_12440430_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_804_fu_2420_p2() {
    mul_ln1118_804_fu_2420_p2 = (!mul_ln1118_804_fu_2420_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_804_fu_2420_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_805_fu_2835_p0() {
    mul_ln1118_805_fu_2835_p0 =  (sc_lv<8>) (zext_ln708_488_fu_12440819_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_805_fu_2835_p2() {
    mul_ln1118_805_fu_2835_p2 = (!mul_ln1118_805_fu_2835_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_805_fu_2835_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_806_fu_2272_p0() {
    mul_ln1118_806_fu_2272_p0 =  (sc_lv<8>) (zext_ln1118_2891_fu_12439648_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_806_fu_2272_p2() {
    mul_ln1118_806_fu_2272_p2 = (!mul_ln1118_806_fu_2272_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_806_fu_2272_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_807_fu_1821_p0() {
    mul_ln1118_807_fu_1821_p0 =  (sc_lv<8>) (zext_ln1118_1027_fu_12441758_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_807_fu_1821_p2() {
    mul_ln1118_807_fu_1821_p2 = (!mul_ln1118_807_fu_1821_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_807_fu_1821_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_808_fu_2771_p0() {
    mul_ln1118_808_fu_2771_p0 =  (sc_lv<8>) (zext_ln1116_213_fu_12448523_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_808_fu_2771_p2() {
    mul_ln1118_808_fu_2771_p2 = (!mul_ln1118_808_fu_2771_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_808_fu_2771_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_809_fu_2264_p0() {
    mul_ln1118_809_fu_2264_p0 =  (sc_lv<8>) (zext_ln1118_995_fu_12439770_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_809_fu_2264_p2() {
    mul_ln1118_809_fu_2264_p2 = (!mul_ln1118_809_fu_2264_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_809_fu_2264_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_80_fu_1886_p0() {
    mul_ln1118_80_fu_1886_p0 =  (sc_lv<8>) (zext_ln1118_77_fu_12404602_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_80_fu_1886_p2() {
    mul_ln1118_80_fu_1886_p2 = (!mul_ln1118_80_fu_1886_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_80_fu_1886_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_810_fu_2921_p0() {
    mul_ln1118_810_fu_2921_p0 =  (sc_lv<8>) (zext_ln1118_1116_fu_12446160_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_810_fu_2921_p2() {
    mul_ln1118_810_fu_2921_p2 = (!mul_ln1118_810_fu_2921_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_810_fu_2921_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_811_fu_2922_p0() {
    mul_ln1118_811_fu_2922_p0 =  (sc_lv<8>) (zext_ln1118_1001_fu_12439915_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_811_fu_2922_p2() {
    mul_ln1118_811_fu_2922_p2 = (!mul_ln1118_811_fu_2922_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_811_fu_2922_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_813_fu_2924_p0() {
    mul_ln1118_813_fu_2924_p0 =  (sc_lv<8>) (zext_ln1118_1013_fu_12440436_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_813_fu_2924_p2() {
    mul_ln1118_813_fu_2924_p2 = (!mul_ln1118_813_fu_2924_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_813_fu_2924_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_814_fu_2925_p0() {
    mul_ln1118_814_fu_2925_p0 =  (sc_lv<8>) (zext_ln1118_1138_fu_12446437_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_814_fu_2925_p2() {
    mul_ln1118_814_fu_2925_p2 = (!mul_ln1118_814_fu_2925_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_814_fu_2925_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_815_fu_1683_p0() {
    mul_ln1118_815_fu_1683_p0 =  (sc_lv<8>) (zext_ln708_488_fu_12440819_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_815_fu_1683_p2() {
    mul_ln1118_815_fu_1683_p2 = (!mul_ln1118_815_fu_1683_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_815_fu_1683_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_816_fu_1684_p0() {
    mul_ln1118_816_fu_1684_p0 =  (sc_lv<8>) (zext_ln1118_1044_fu_12443287_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_816_fu_1684_p2() {
    mul_ln1118_816_fu_1684_p2 = (!mul_ln1118_816_fu_1684_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_816_fu_1684_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_817_fu_2929_p0() {
    mul_ln1118_817_fu_2929_p0 =  (sc_lv<8>) (zext_ln1118_1003_fu_12440003_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_817_fu_2929_p2() {
    mul_ln1118_817_fu_2929_p2 = (!mul_ln1118_817_fu_2929_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_817_fu_2929_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_818_fu_3113_p0() {
    mul_ln1118_818_fu_3113_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12440091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_818_fu_3113_p2() {
    mul_ln1118_818_fu_3113_p2 = (!mul_ln1118_818_fu_3113_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_818_fu_3113_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_819_fu_1504_p0() {
    mul_ln1118_819_fu_1504_p0 =  (sc_lv<8>) (zext_ln1118_1022_fu_12441264_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_819_fu_1504_p2() {
    mul_ln1118_819_fu_1504_p2 = (!mul_ln1118_819_fu_1504_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_819_fu_1504_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_81_fu_2864_p0() {
    mul_ln1118_81_fu_2864_p0 =  (sc_lv<8>) (zext_ln1118_23_fu_12400927_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_81_fu_2864_p2() {
    mul_ln1118_81_fu_2864_p2 = (!mul_ln1118_81_fu_2864_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_81_fu_2864_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_820_fu_2932_p0() {
    mul_ln1118_820_fu_2932_p0 =  (sc_lv<8>) (zext_ln1118_1069_fu_12443639_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_820_fu_2932_p2() {
    mul_ln1118_820_fu_2932_p2 = (!mul_ln1118_820_fu_2932_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_820_fu_2932_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_821_fu_1689_p0() {
    mul_ln1118_821_fu_1689_p0 =  (sc_lv<8>) (zext_ln708_378_fu_12440560_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_821_fu_1689_p2() {
    mul_ln1118_821_fu_1689_p2 = (!mul_ln1118_821_fu_1689_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_821_fu_1689_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_822_fu_1508_p0() {
    mul_ln1118_822_fu_1508_p0 =  (sc_lv<8>) (mul_ln1118_822_fu_1508_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_822_fu_1508_p00() {
    mul_ln1118_822_fu_1508_p00 = esl_zext<12,8>(p_read68.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_822_fu_1508_p2() {
    mul_ln1118_822_fu_1508_p2 = (!mul_ln1118_822_fu_1508_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_822_fu_1508_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_823_fu_2316_p0() {
    mul_ln1118_823_fu_2316_p0 =  (sc_lv<8>) (zext_ln1118_2883_fu_12439433_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_823_fu_2316_p2() {
    mul_ln1118_823_fu_2316_p2 = (!mul_ln1118_823_fu_2316_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_823_fu_2316_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_824_fu_1512_p0() {
    mul_ln1118_824_fu_1512_p0 =  (sc_lv<8>) (zext_ln1118_3086_fu_12445969_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_824_fu_1512_p2() {
    mul_ln1118_824_fu_1512_p2 = (!mul_ln1118_824_fu_1512_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_824_fu_1512_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_825_fu_1833_p0() {
    mul_ln1118_825_fu_1833_p0 =  (sc_lv<8>) (zext_ln1118_1044_fu_12443287_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_825_fu_1833_p2() {
    mul_ln1118_825_fu_1833_p2 = (!mul_ln1118_825_fu_1833_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_825_fu_1833_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_826_fu_3201_p0() {
    mul_ln1118_826_fu_3201_p0 =  (sc_lv<8>) (zext_ln1118_993_fu_12439725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_826_fu_3201_p2() {
    mul_ln1118_826_fu_3201_p2 = (!mul_ln1118_826_fu_3201_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_826_fu_3201_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_827_fu_1836_p0() {
    mul_ln1118_827_fu_1836_p0 =  (sc_lv<8>) (zext_ln1118_2896_fu_12439809_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_827_fu_1836_p2() {
    mul_ln1118_827_fu_1836_p2 = (!mul_ln1118_827_fu_1836_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_827_fu_1836_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_828_fu_3203_p0() {
    mul_ln1118_828_fu_3203_p0 =  (sc_lv<8>) (zext_ln1118_2898_fu_12439865_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_828_fu_3203_p2() {
    mul_ln1118_828_fu_3203_p2 = (!mul_ln1118_828_fu_3203_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_828_fu_3203_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_829_fu_1838_p0() {
    mul_ln1118_829_fu_1838_p0 =  (sc_lv<8>) (zext_ln1118_1304_fu_12453092_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_829_fu_1838_p2() {
    mul_ln1118_829_fu_1838_p2 = (!mul_ln1118_829_fu_1838_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_829_fu_1838_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_82_fu_2329_p0() {
    mul_ln1118_82_fu_2329_p0 =  (sc_lv<8>) (zext_ln1116_19_fu_12404703_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_82_fu_2329_p2() {
    mul_ln1118_82_fu_2329_p2 = (!mul_ln1118_82_fu_2329_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_82_fu_2329_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_830_fu_1840_p0() {
    mul_ln1118_830_fu_1840_p0 =  (sc_lv<8>) (zext_ln1118_2911_fu_12440142_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_830_fu_1840_p2() {
    mul_ln1118_830_fu_1840_p2 = (!mul_ln1118_830_fu_1840_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_830_fu_1840_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_831_fu_2380_p0() {
    mul_ln1118_831_fu_2380_p0 =  (sc_lv<8>) (zext_ln1118_2924_fu_12440398_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_831_fu_2380_p2() {
    mul_ln1118_831_fu_2380_p2 = (!mul_ln1118_831_fu_2380_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_831_fu_2380_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_832_fu_1817_p0() {
    mul_ln1118_832_fu_1817_p0 =  (sc_lv<8>) (zext_ln708_488_fu_12440819_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_832_fu_1817_p2() {
    mul_ln1118_832_fu_1817_p2 = (!mul_ln1118_832_fu_1817_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_832_fu_1817_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_833_fu_2767_p0() {
    mul_ln1118_833_fu_2767_p0 =  (sc_lv<8>) (mul_ln1118_833_fu_2767_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_833_fu_2767_p00() {
    mul_ln1118_833_fu_2767_p00 = esl_zext<13,8>(p_read75.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_833_fu_2767_p2() {
    mul_ln1118_833_fu_2767_p2 = (!mul_ln1118_833_fu_2767_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_833_fu_2767_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_834_fu_2260_p0() {
    mul_ln1118_834_fu_2260_p0 =  (sc_lv<8>) (zext_ln1116_178_fu_12439761_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_834_fu_2260_p2() {
    mul_ln1118_834_fu_2260_p2 = (!mul_ln1118_834_fu_2260_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_834_fu_2260_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_835_fu_3266_p0() {
    mul_ln1118_835_fu_3266_p0 =  (sc_lv<8>) (zext_ln1116_187_fu_12443435_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_835_fu_3266_p2() {
    mul_ln1118_835_fu_3266_p2 = (!mul_ln1118_835_fu_3266_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_835_fu_3266_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_836_fu_2675_p0() {
    mul_ln1118_836_fu_2675_p0 =  (sc_lv<8>) (zext_ln1116_234_fu_12453056_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_836_fu_2675_p2() {
    mul_ln1118_836_fu_2675_p2 = (!mul_ln1118_836_fu_2675_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_836_fu_2675_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_837_fu_2140_p0() {
    mul_ln1118_837_fu_2140_p0 =  (sc_lv<8>) (zext_ln1118_1057_fu_12443509_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_837_fu_2140_p2() {
    mul_ln1118_837_fu_2140_p2 = (!mul_ln1118_837_fu_2140_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_837_fu_2140_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_838_fu_2611_p0() {
    mul_ln1118_838_fu_2611_p0 =  (sc_lv<8>) (mul_ln1118_838_fu_2611_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_838_fu_2611_p00() {
    mul_ln1118_838_fu_2611_p00 = esl_zext<13,8>(p_read88.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_838_fu_2611_p2() {
    mul_ln1118_838_fu_2611_p2 = (!mul_ln1118_838_fu_2611_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_838_fu_2611_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_839_fu_2048_p0() {
    mul_ln1118_839_fu_2048_p0 =  (sc_lv<8>) (zext_ln1118_1022_fu_12441264_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_839_fu_2048_p2() {
    mul_ln1118_839_fu_2048_p2 = (!mul_ln1118_839_fu_2048_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_839_fu_2048_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_83_fu_1822_p0() {
    mul_ln1118_83_fu_1822_p0 =  (sc_lv<8>) (zext_ln1118_32_fu_12401125_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_83_fu_1822_p2() {
    mul_ln1118_83_fu_1822_p2 = (!mul_ln1118_83_fu_1822_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_83_fu_1822_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_840_fu_1569_p0() {
    mul_ln1118_840_fu_1569_p0 =  (sc_lv<8>) (zext_ln1118_1069_fu_12443639_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_840_fu_1569_p2() {
    mul_ln1118_840_fu_1569_p2 = (!mul_ln1118_840_fu_1569_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_840_fu_1569_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_841_fu_2519_p0() {
    mul_ln1118_841_fu_2519_p0 =  (sc_lv<8>) (zext_ln1116_190_fu_12443662_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_841_fu_2519_p2() {
    mul_ln1118_841_fu_2519_p2 = (!mul_ln1118_841_fu_2519_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_841_fu_2519_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_842_fu_1984_p0() {
    mul_ln1118_842_fu_1984_p0 =  (sc_lv<8>) (zext_ln1118_1138_fu_12446437_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_842_fu_1984_p2() {
    mul_ln1118_842_fu_1984_p2 = (!mul_ln1118_842_fu_1984_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_842_fu_1984_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_843_fu_1449_p0() {
    mul_ln1118_843_fu_1449_p0 =  (sc_lv<8>) (zext_ln1116_168_fu_12439071_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_843_fu_1449_p2() {
    mul_ln1118_843_fu_1449_p2 = (!mul_ln1118_843_fu_1449_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_843_fu_1449_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_844_fu_2455_p0() {
    mul_ln1118_844_fu_2455_p0 =  (sc_lv<8>) (zext_ln1118_1089_fu_12445797_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_844_fu_2455_p2() {
    mul_ln1118_844_fu_2455_p2 = (!mul_ln1118_844_fu_2455_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_844_fu_2455_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_845_fu_2842_p0() {
    mul_ln1118_845_fu_2842_p0 =  (sc_lv<8>) (zext_ln1118_998_fu_12439815_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_845_fu_2842_p2() {
    mul_ln1118_845_fu_2842_p2 = (!mul_ln1118_845_fu_2842_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_845_fu_2842_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_846_fu_2335_p0() {
    mul_ln1118_846_fu_2335_p0 =  (sc_lv<8>) (zext_ln1118_2901_fu_12439906_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_846_fu_2335_p2() {
    mul_ln1118_846_fu_2335_p2 = (!mul_ln1118_846_fu_2335_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_846_fu_2335_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_847_fu_2666_p0() {
    mul_ln1118_847_fu_2666_p0 =  (sc_lv<8>) (zext_ln1116_223_fu_12451020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_847_fu_2666_p2() {
    mul_ln1118_847_fu_2666_p2 = (!mul_ln1118_847_fu_2666_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_847_fu_2666_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_848_fu_1736_p0() {
    mul_ln1118_848_fu_1736_p0 =  (sc_lv<8>) (zext_ln708_378_fu_12440560_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_848_fu_1736_p2() {
    mul_ln1118_848_fu_1736_p2 = (!mul_ln1118_848_fu_1736_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_848_fu_1736_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_849_fu_2151_p0() {
    mul_ln1118_849_fu_2151_p0 =  (sc_lv<8>) (zext_ln1118_1105_fu_12445975_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_849_fu_2151_p2() {
    mul_ln1118_849_fu_2151_p2 = (!mul_ln1118_849_fu_2151_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_849_fu_2151_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_84_fu_2744_p0() {
    mul_ln1118_84_fu_2744_p0 =  (sc_lv<8>) (zext_ln1118_86_fu_12404757_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_84_fu_2744_p2() {
    mul_ln1118_84_fu_2744_p2 = (!mul_ln1118_84_fu_2744_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_84_fu_2744_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_850_fu_3157_p0() {
    mul_ln1118_850_fu_3157_p0 =  (sc_lv<8>) (zext_ln1118_2891_fu_12439648_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_850_fu_3157_p2() {
    mul_ln1118_850_fu_3157_p2 = (!mul_ln1118_850_fu_3157_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_850_fu_3157_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_851_fu_2566_p0() {
    mul_ln1118_851_fu_2566_p0 =  (sc_lv<8>) (zext_ln1118_992_fu_12439702_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_851_fu_2566_p2() {
    mul_ln1118_851_fu_2566_p2 = (!mul_ln1118_851_fu_2566_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_851_fu_2566_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_852_fu_2087_p0() {
    mul_ln1118_852_fu_2087_p0 =  (sc_lv<8>) (zext_ln1118_2893_fu_12439732_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_852_fu_2087_p2() {
    mul_ln1118_852_fu_2087_p2 = (!mul_ln1118_852_fu_2087_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_852_fu_2087_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_854_fu_2879_p0() {
    mul_ln1118_854_fu_2879_p0 =  (sc_lv<8>) (zext_ln1118_1002_fu_12439944_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_854_fu_2879_p2() {
    mul_ln1118_854_fu_2879_p2 = (!mul_ln1118_854_fu_2879_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_854_fu_2879_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_855_fu_2178_p0() {
    mul_ln1118_855_fu_2178_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12440091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_855_fu_2178_p2() {
    mul_ln1118_855_fu_2178_p2 = (!mul_ln1118_855_fu_2178_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_855_fu_2178_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_856_fu_1557_p0() {
    mul_ln1118_856_fu_1557_p0 =  (sc_lv<8>) (mul_ln1118_856_fu_1557_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_856_fu_1557_p00() {
    mul_ln1118_856_fu_1557_p00 = esl_zext<14,8>(p_read88.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_856_fu_1557_p2() {
    mul_ln1118_856_fu_1557_p2 = (!mul_ln1118_856_fu_1557_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_856_fu_1557_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_857_fu_2985_p0() {
    mul_ln1118_857_fu_2985_p0 =  (sc_lv<8>) (zext_ln1116_191_fu_12443751_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_857_fu_2985_p2() {
    mul_ln1118_857_fu_2985_p2 = (!mul_ln1118_857_fu_2985_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_857_fu_2985_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_858_fu_2181_p0() {
    mul_ln1118_858_fu_2181_p0 =  (sc_lv<8>) (zext_ln1116_168_fu_12439071_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_858_fu_2181_p2() {
    mul_ln1118_858_fu_2181_p2 = (!mul_ln1118_858_fu_2181_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_858_fu_2181_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_859_fu_1561_p0() {
    mul_ln1118_859_fu_1561_p0 =  (sc_lv<8>) (zext_ln1116_173_fu_12439491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_859_fu_1561_p2() {
    mul_ln1118_859_fu_1561_p2 = (!mul_ln1118_859_fu_1561_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_859_fu_1561_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_85_fu_2237_p0() {
    mul_ln1118_85_fu_2237_p0 =  (sc_lv<8>) (zext_ln1118_34_fu_12401212_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_85_fu_2237_p2() {
    mul_ln1118_85_fu_2237_p2 = (!mul_ln1118_85_fu_2237_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_85_fu_2237_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_860_fu_1562_p0() {
    mul_ln1118_860_fu_1562_p0 =  (sc_lv<8>) (zext_ln1118_1105_fu_12445975_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_860_fu_1562_p2() {
    mul_ln1118_860_fu_1562_p2 = (!mul_ln1118_860_fu_1562_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_860_fu_1562_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_862_fu_1564_p0() {
    mul_ln1118_862_fu_1564_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12440091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_862_fu_1564_p2() {
    mul_ln1118_862_fu_1564_p2 = (!mul_ln1118_862_fu_1564_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_862_fu_1564_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_863_fu_2809_p0() {
    mul_ln1118_863_fu_2809_p0 =  (sc_lv<8>) (zext_ln1116_223_fu_12451020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_863_fu_2809_p2() {
    mul_ln1118_863_fu_2809_p2 = (!mul_ln1118_863_fu_2809_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_863_fu_2809_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_864_fu_1567_p0() {
    mul_ln1118_864_fu_1567_p0 =  (sc_lv<8>) (zext_ln708_372_fu_12440307_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_864_fu_1567_p2() {
    mul_ln1118_864_fu_1567_p2 = (!mul_ln1118_864_fu_1567_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_864_fu_1567_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_865_fu_2995_p0() {
    mul_ln1118_865_fu_2995_p0 =  (sc_lv<8>) (zext_ln1118_1014_fu_12440444_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_865_fu_2995_p2() {
    mul_ln1118_865_fu_2995_p2 = (!mul_ln1118_865_fu_2995_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_865_fu_2995_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_866_fu_2814_p0() {
    mul_ln1118_866_fu_2814_p0 =  (sc_lv<8>) (zext_ln1118_2872_fu_12439155_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_866_fu_2814_p2() {
    mul_ln1118_866_fu_2814_p2 = (!mul_ln1118_866_fu_2814_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_866_fu_2814_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_867_fu_2815_p0() {
    mul_ln1118_867_fu_2815_p0 =  (sc_lv<8>) (zext_ln1118_976_fu_12439214_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_867_fu_2815_p2() {
    mul_ln1118_867_fu_2815_p2 = (!mul_ln1118_867_fu_2815_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_867_fu_2815_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_868_fu_2194_p0() {
    mul_ln1118_868_fu_2194_p0 =  (sc_lv<8>) (zext_ln1118_2877_fu_12439258_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_868_fu_2194_p2() {
    mul_ln1118_868_fu_2194_p2 = (!mul_ln1118_868_fu_2194_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_868_fu_2194_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_869_fu_2817_p0() {
    mul_ln1118_869_fu_2817_p0 =  (sc_lv<8>) (zext_ln1118_2883_fu_12439433_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_869_fu_2817_p2() {
    mul_ln1118_869_fu_2817_p2 = (!mul_ln1118_869_fu_2817_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_869_fu_2817_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_86_fu_3243_p0() {
    mul_ln1118_86_fu_3243_p0 =  (sc_lv<8>) (zext_ln1118_203_fu_12401338_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_86_fu_3243_p2() {
    mul_ln1118_86_fu_3243_p2 = (!mul_ln1118_86_fu_3243_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_86_fu_3243_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_871_fu_2250_p0() {
    mul_ln1118_871_fu_2250_p0 =  (sc_lv<8>) (zext_ln1118_2891_fu_12439648_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_871_fu_2250_p2() {
    mul_ln1118_871_fu_2250_p2 = (!mul_ln1118_871_fu_2250_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_871_fu_2250_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_872_fu_1568_p0() {
    mul_ln1118_872_fu_1568_p0 =  (sc_lv<8>) (zext_ln1118_992_fu_12439702_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_872_fu_1568_p2() {
    mul_ln1118_872_fu_1568_p2 = (!mul_ln1118_872_fu_1568_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_872_fu_1568_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_873_fu_2252_p0() {
    mul_ln1118_873_fu_2252_p0 =  (sc_lv<8>) (zext_ln1118_2893_fu_12439732_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_873_fu_2252_p2() {
    mul_ln1118_873_fu_2252_p2 = (!mul_ln1118_873_fu_2252_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_873_fu_2252_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_874_fu_2936_p0() {
    mul_ln1118_874_fu_2936_p0 =  (sc_lv<8>) (zext_ln1118_2894_fu_12439778_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_874_fu_2936_p2() {
    mul_ln1118_874_fu_2936_p2 = (!mul_ln1118_874_fu_2936_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_874_fu_2936_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_875_fu_1609_p0() {
    mul_ln1118_875_fu_1609_p0 =  (sc_lv<8>) (zext_ln1118_1120_fu_12446190_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_875_fu_1609_p2() {
    mul_ln1118_875_fu_1609_p2 = (!mul_ln1118_875_fu_1609_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_875_fu_1609_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_876_fu_2794_p0() {
    mul_ln1118_876_fu_2794_p0 =  (sc_lv<8>) (mul_ln1118_876_fu_2794_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_876_fu_2794_p00() {
    mul_ln1118_876_fu_2794_p00 = esl_zext<16,8>(p_read90.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_876_fu_2794_p2() {
    mul_ln1118_876_fu_2794_p2 = (!mul_ln1118_876_fu_2794_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_876_fu_2794_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_877_fu_2203_p0() {
    mul_ln1118_877_fu_2203_p0 =  (sc_lv<8>) (zext_ln708_373_fu_12440389_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_877_fu_2203_p2() {
    mul_ln1118_877_fu_2203_p2 = (!mul_ln1118_877_fu_2203_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_877_fu_2203_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_878_fu_3237_p0() {
    mul_ln1118_878_fu_3237_p0 =  (sc_lv<8>) (zext_ln1116_191_fu_12443751_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_878_fu_3237_p2() {
    mul_ln1118_878_fu_3237_p2 = (!mul_ln1118_878_fu_3237_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_878_fu_3237_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_879_fu_2674_p0() {
    mul_ln1118_879_fu_2674_p0 =  (sc_lv<8>) (zext_ln1116_168_fu_12439071_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_879_fu_2674_p2() {
    mul_ln1118_879_fu_2674_p2 = (!mul_ln1118_879_fu_2674_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_879_fu_2674_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_87_fu_2680_p0() {
    mul_ln1118_87_fu_2680_p0 =  (sc_lv<8>) (zext_ln1116_21_fu_12404885_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_87_fu_2680_p2() {
    mul_ln1118_87_fu_2680_p2 = (!mul_ln1118_87_fu_2680_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_87_fu_2680_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_880_fu_2139_p0() {
    mul_ln1118_880_fu_2139_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12439141_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_880_fu_2139_p2() {
    mul_ln1118_880_fu_2139_p2 = (!mul_ln1118_880_fu_2139_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_880_fu_2139_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_881_fu_2526_p0() {
    mul_ln1118_881_fu_2526_p0 =  (sc_lv<8>) (zext_ln1118_2882_fu_12439386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_881_fu_2526_p2() {
    mul_ln1118_881_fu_2526_p2 = (!mul_ln1118_881_fu_2526_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_881_fu_2526_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_882_fu_2019_p0() {
    mul_ln1118_882_fu_2019_p0 =  (sc_lv<8>) (zext_ln1118_1105_fu_12445975_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_882_fu_2019_p2() {
    mul_ln1118_882_fu_2019_p2 = (!mul_ln1118_882_fu_2019_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_882_fu_2019_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_883_fu_2997_p0() {
    mul_ln1118_883_fu_2997_p0 =  (sc_lv<8>) (zext_ln1116_174_fu_12439589_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_883_fu_2997_p2() {
    mul_ln1118_883_fu_2997_p2 = (!mul_ln1118_883_fu_2997_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_883_fu_2997_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_884_fu_2490_p0() {
    mul_ln1118_884_fu_2490_p0 =  (sc_lv<8>) (zext_ln1118_991_fu_12439659_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_884_fu_2490_p2() {
    mul_ln1118_884_fu_2490_p2 = (!mul_ln1118_884_fu_2490_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_884_fu_2490_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_886_fu_2933_p0() {
    mul_ln1118_886_fu_2933_p0 =  (sc_lv<8>) (zext_ln1116_181_fu_12440057_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_886_fu_2933_p2() {
    mul_ln1118_886_fu_2933_p2 = (!mul_ln1118_886_fu_2933_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_886_fu_2933_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_887_fu_2398_p0() {
    mul_ln1118_887_fu_2398_p0 =  (sc_lv<8>) (zext_ln708_476_fu_12440150_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_887_fu_2398_p2() {
    mul_ln1118_887_fu_2398_p2 = (!mul_ln1118_887_fu_2398_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_887_fu_2398_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_889_fu_2841_p0() {
    mul_ln1118_889_fu_2841_p0 =  (sc_lv<8>) (zext_ln1118_978_fu_12439252_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_889_fu_2841_p2() {
    mul_ln1118_889_fu_2841_p2 = (!mul_ln1118_889_fu_2841_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_889_fu_2841_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_88_fu_2145_p0() {
    mul_ln1118_88_fu_2145_p0 =  (sc_lv<8>) (mul_ln1118_88_fu_2145_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_88_fu_2145_p00() {
    mul_ln1118_88_fu_2145_p00 = esl_zext<14,8>(p_read27.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_88_fu_2145_p2() {
    mul_ln1118_88_fu_2145_p2 = (!mul_ln1118_88_fu_2145_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_88_fu_2145_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_890_fu_2306_p0() {
    mul_ln1118_890_fu_2306_p0 =  (sc_lv<8>) (zext_ln1118_979_fu_12439278_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_890_fu_2306_p2() {
    mul_ln1118_890_fu_2306_p2 = (!mul_ln1118_890_fu_2306_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_890_fu_2306_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_891_fu_1771_p0() {
    mul_ln1118_891_fu_1771_p0 =  (sc_lv<8>) (mul_ln1118_891_fu_1771_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_891_fu_1771_p00() {
    mul_ln1118_891_fu_1771_p00 = esl_zext<16,8>(p_read70.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_891_fu_1771_p2() {
    mul_ln1118_891_fu_1771_p2 = (!mul_ln1118_891_fu_1771_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_891_fu_1771_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_894_fu_2749_p0() {
    mul_ln1118_894_fu_2749_p0 =  (sc_lv<8>) (zext_ln1116_178_fu_12439761_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_894_fu_2749_p2() {
    mul_ln1118_894_fu_2749_p2 = (!mul_ln1118_894_fu_2749_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_894_fu_2749_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_895_fu_2186_p0() {
    mul_ln1118_895_fu_2186_p0 =  (sc_lv<8>) (zext_ln1118_1054_fu_12443489_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_895_fu_2186_p2() {
    mul_ln1118_895_fu_2186_p2 = (!mul_ln1118_895_fu_2186_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_895_fu_2186_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_896_fu_1679_p0() {
    mul_ln1118_896_fu_1679_p0 =  (sc_lv<8>) (zext_ln1118_1002_fu_12439944_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_896_fu_1679_p2() {
    mul_ln1118_896_fu_1679_p2 = (!mul_ln1118_896_fu_1679_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_896_fu_1679_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_897_fu_2685_p0() {
    mul_ln1118_897_fu_2685_p0 =  (sc_lv<8>) (zext_ln1116_181_fu_12440057_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_897_fu_2685_p2() {
    mul_ln1118_897_fu_2685_p2 = (!mul_ln1118_897_fu_2685_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_897_fu_2685_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_898_fu_2122_p0() {
    mul_ln1118_898_fu_2122_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12440091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_898_fu_2122_p2() {
    mul_ln1118_898_fu_2122_p2 = (!mul_ln1118_898_fu_2122_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_898_fu_2122_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_899_fu_1587_p0() {
    mul_ln1118_899_fu_1587_p0 =  (sc_lv<8>) (mul_ln1118_899_fu_1587_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_899_fu_1587_p00() {
    mul_ln1118_899_fu_1587_p00 = esl_zext<14,8>(p_read94.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_899_fu_1587_p2() {
    mul_ln1118_899_fu_1587_p2 = (!mul_ln1118_899_fu_1587_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_899_fu_1587_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_89_fu_3151_p0() {
    mul_ln1118_89_fu_3151_p0 =  (sc_lv<8>) (zext_ln1118_43_fu_12401675_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_89_fu_3151_p2() {
    mul_ln1118_89_fu_3151_p2 = (!mul_ln1118_89_fu_3151_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_89_fu_3151_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_8_fu_2958_p0() {
    mul_ln1118_8_fu_2958_p0 =  (sc_lv<8>) (zext_ln1118_26_fu_12401006_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_8_fu_2958_p2() {
    mul_ln1118_8_fu_2958_p2 = (!mul_ln1118_8_fu_2958_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_8_fu_2958_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_901_fu_3036_p0() {
    mul_ln1118_901_fu_3036_p0 =  (sc_lv<8>) (zext_ln1118_1044_fu_12443287_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_901_fu_3036_p2() {
    mul_ln1118_901_fu_3036_p2 = (!mul_ln1118_901_fu_3036_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_901_fu_3036_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_902_fu_2417_p0() {
    mul_ln1118_902_fu_2417_p0 =  (sc_lv<8>) (zext_ln1118_2891_fu_12439648_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_902_fu_2417_p2() {
    mul_ln1118_902_fu_2417_p2 = (!mul_ln1118_902_fu_2417_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_902_fu_2417_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_903_fu_1966_p0() {
    mul_ln1118_903_fu_1966_p0 =  (sc_lv<8>) (zext_ln1116_213_fu_12448523_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_903_fu_1966_p2() {
    mul_ln1118_903_fu_1966_p2 = (!mul_ln1118_903_fu_1966_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_903_fu_1966_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_904_fu_1431_p0() {
    mul_ln1118_904_fu_1431_p0 =  (sc_lv<8>) (zext_ln1116_234_fu_12453056_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_904_fu_1431_p2() {
    mul_ln1118_904_fu_1431_p2 = (!mul_ln1118_904_fu_1431_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_904_fu_1431_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_905_fu_2056_p0() {
    mul_ln1118_905_fu_2056_p0 =  (sc_lv<8>) (zext_ln1116_181_fu_12440057_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_905_fu_2056_p2() {
    mul_ln1118_905_fu_2056_p2 = (!mul_ln1118_905_fu_2056_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_905_fu_2056_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_906_fu_1435_p0() {
    mul_ln1118_906_fu_1435_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12440091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_906_fu_1435_p2() {
    mul_ln1118_906_fu_1435_p2 = (!mul_ln1118_906_fu_1435_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_906_fu_1435_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_907_fu_1436_p0() {
    mul_ln1118_907_fu_1436_p0 =  (sc_lv<8>) (zext_ln708_476_fu_12440150_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_907_fu_1436_p2() {
    mul_ln1118_907_fu_1436_p2 = (!mul_ln1118_907_fu_1436_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_907_fu_1436_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_908_fu_2242_p0() {
    mul_ln1118_908_fu_2242_p0 =  (sc_lv<8>) (zext_ln1118_2920_fu_12440322_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_908_fu_2242_p2() {
    mul_ln1118_908_fu_2242_p2 = (!mul_ln1118_908_fu_2242_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_908_fu_2242_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_909_fu_1438_p0() {
    mul_ln1118_909_fu_1438_p0 =  (sc_lv<8>) (zext_ln1118_2924_fu_12440398_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_909_fu_1438_p2() {
    mul_ln1118_909_fu_1438_p2 = (!mul_ln1118_909_fu_1438_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_909_fu_1438_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_90_fu_1465_p0() {
    mul_ln1118_90_fu_1465_p0 =  (sc_lv<8>) (zext_ln1118_87_fu_12400654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_90_fu_1465_p2() {
    mul_ln1118_90_fu_1465_p2 = (!mul_ln1118_90_fu_1465_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_90_fu_1465_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_910_fu_1439_p0() {
    mul_ln1118_910_fu_1439_p0 =  (sc_lv<8>) (zext_ln1118_1013_fu_12440436_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_910_fu_1439_p2() {
    mul_ln1118_910_fu_1439_p2 = (!mul_ln1118_910_fu_1439_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_910_fu_1439_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_911_fu_1440_p0() {
    mul_ln1118_911_fu_1440_p0 =  (sc_lv<8>) (zext_ln1116_191_fu_12443751_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_911_fu_1440_p2() {
    mul_ln1118_911_fu_1440_p2 = (!mul_ln1118_911_fu_1440_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_911_fu_1440_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_912_fu_1441_p0() {
    mul_ln1118_912_fu_1441_p0 =  (sc_lv<8>) (zext_ln1118_2875_fu_12439223_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_912_fu_1441_p2() {
    mul_ln1118_912_fu_1441_p2 = (!mul_ln1118_912_fu_1441_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_912_fu_1441_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_913_fu_2869_p0() {
    mul_ln1118_913_fu_2869_p0 =  (sc_lv<8>) (zext_ln1118_2876_fu_12439244_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_913_fu_2869_p2() {
    mul_ln1118_913_fu_2869_p2 = (!mul_ln1118_913_fu_2869_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_913_fu_2869_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_914_fu_1443_p0() {
    mul_ln1118_914_fu_1443_p0 =  (sc_lv<8>) (zext_ln708_367_fu_12439426_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_914_fu_1443_p2() {
    mul_ln1118_914_fu_1443_p2 = (!mul_ln1118_914_fu_1443_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_914_fu_1443_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_916_fu_2871_p0() {
    mul_ln1118_916_fu_2871_p0 =  (sc_lv<8>) (zext_ln1118_993_fu_12439725_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_916_fu_2871_p2() {
    mul_ln1118_916_fu_2871_p2 = (!mul_ln1118_916_fu_2871_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_916_fu_2871_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_917_fu_1445_p0() {
    mul_ln1118_917_fu_1445_p0 =  (sc_lv<8>) (zext_ln1116_178_fu_12439761_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_917_fu_1445_p2() {
    mul_ln1118_917_fu_1445_p2 = (!mul_ln1118_917_fu_1445_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_917_fu_1445_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_918_fu_1446_p0() {
    mul_ln1118_918_fu_1446_p0 =  (sc_lv<8>) (zext_ln1118_1000_fu_12439857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_918_fu_1446_p2() {
    mul_ln1118_918_fu_1446_p2 = (!mul_ln1118_918_fu_1446_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_918_fu_1446_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_919_fu_1447_p0() {
    mul_ln1118_919_fu_1447_p0 =  (sc_lv<8>) (zext_ln1118_1001_fu_12439915_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_919_fu_1447_p2() {
    mul_ln1118_919_fu_1447_p2 = (!mul_ln1118_919_fu_1447_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_919_fu_1447_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_920_fu_2253_p0() {
    mul_ln1118_920_fu_2253_p0 =  (sc_lv<8>) (zext_ln1118_1304_fu_12453092_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_920_fu_2253_p2() {
    mul_ln1118_920_fu_2253_p2 = (!mul_ln1118_920_fu_2253_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_920_fu_2253_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_921_fu_2733_p0() {
    mul_ln1118_921_fu_2733_p0 =  (sc_lv<8>) (zext_ln1118_1131_fu_12446312_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_921_fu_2733_p2() {
    mul_ln1118_921_fu_2733_p2 = (!mul_ln1118_921_fu_2733_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_921_fu_2733_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_922_fu_1450_p0() {
    mul_ln1118_922_fu_1450_p0 =  (sc_lv<8>) (zext_ln1118_1093_fu_12445835_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_922_fu_1450_p2() {
    mul_ln1118_922_fu_1450_p2 = (!mul_ln1118_922_fu_1450_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_922_fu_1450_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_924_fu_2073_p0() {
    mul_ln1118_924_fu_2073_p0 =  (sc_lv<8>) (zext_ln1118_2883_fu_12439433_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_924_fu_2073_p2() {
    mul_ln1118_924_fu_2073_p2 = (!mul_ln1118_924_fu_2073_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_924_fu_2073_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_925_fu_3386_p0() {
    mul_ln1118_925_fu_3386_p0 =  (sc_lv<8>) (zext_ln1118_989_fu_12439599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_925_fu_3386_p2() {
    mul_ln1118_925_fu_3386_p2 = (!mul_ln1118_925_fu_3386_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_925_fu_3386_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_926_fu_3387_p0() {
    mul_ln1118_926_fu_3387_p0 =  (sc_lv<8>) (zext_ln1118_1027_fu_12441758_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_926_fu_3387_p2() {
    mul_ln1118_926_fu_3387_p2 = (!mul_ln1118_926_fu_3387_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_926_fu_3387_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_927_fu_3388_p0() {
    mul_ln1118_927_fu_3388_p0 =  (sc_lv<8>) (zext_ln1118_998_fu_12439815_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_927_fu_3388_p2() {
    mul_ln1118_927_fu_3388_p2 = (!mul_ln1118_927_fu_3388_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_927_fu_3388_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_928_fu_3429_p0() {
    mul_ln1118_928_fu_3429_p0 =  (sc_lv<8>) (zext_ln1116_223_fu_12451020_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_928_fu_3429_p2() {
    mul_ln1118_928_fu_3429_p2 = (!mul_ln1118_928_fu_3429_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_928_fu_3429_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_929_fu_1988_p0() {
    mul_ln1118_929_fu_1988_p0 =  (sc_lv<8>) (zext_ln1118_2912_fu_12440175_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_929_fu_1988_p2() {
    mul_ln1118_929_fu_1988_p2 = (!mul_ln1118_929_fu_1988_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_929_fu_1988_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_92_fu_2710_p0() {
    mul_ln1118_92_fu_2710_p0 =  (sc_lv<8>) (zext_ln1118_137_fu_12407243_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_92_fu_2710_p2() {
    mul_ln1118_92_fu_2710_p2 = (!mul_ln1118_92_fu_2710_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_92_fu_2710_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_930_fu_2673_p0() {
    mul_ln1118_930_fu_2673_p0 =  (sc_lv<8>) (zext_ln1118_1013_fu_12440436_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_930_fu_2673_p2() {
    mul_ln1118_930_fu_2673_p2 = (!mul_ln1118_930_fu_2673_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_930_fu_2673_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_931_fu_1603_p0() {
    mul_ln1118_931_fu_1603_p0 =  (sc_lv<8>) (zext_ln1118_3431_fu_12458589_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_931_fu_1603_p2() {
    mul_ln1118_931_fu_1603_p2 = (!mul_ln1118_931_fu_1603_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_931_fu_1603_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_932_fu_2553_p0() {
    mul_ln1118_932_fu_2553_p0 =  (sc_lv<8>) (zext_ln1118_1462_fu_12458618_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_932_fu_2553_p2() {
    mul_ln1118_932_fu_2553_p2 = (!mul_ln1118_932_fu_2553_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_932_fu_2553_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_933_fu_3024_p0() {
    mul_ln1118_933_fu_3024_p0 =  (sc_lv<8>) (zext_ln1116_257_fu_12458857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_933_fu_3024_p2() {
    mul_ln1118_933_fu_3024_p2 = (!mul_ln1118_933_fu_3024_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_933_fu_3024_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_934_fu_2489_p0() {
    mul_ln1118_934_fu_2489_p0 =  (sc_lv<8>) (zext_ln1118_1476_fu_12459068_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_934_fu_2489_p2() {
    mul_ln1118_934_fu_2489_p2 = (!mul_ln1118_934_fu_2489_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_934_fu_2489_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_935_fu_1954_p0() {
    mul_ln1118_935_fu_1954_p0 =  (sc_lv<8>) (zext_ln1118_1478_fu_12459104_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_935_fu_1954_p2() {
    mul_ln1118_935_fu_1954_p2 = (!mul_ln1118_935_fu_1954_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_935_fu_1954_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_936_fu_2341_p0() {
    mul_ln1118_936_fu_2341_p0 =  (sc_lv<8>) (zext_ln1118_1485_fu_12459281_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_936_fu_2341_p2() {
    mul_ln1118_936_fu_2341_p2 = (!mul_ln1118_936_fu_2341_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_936_fu_2341_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_937_fu_3375_p0() {
    mul_ln1118_937_fu_3375_p0 =  (sc_lv<8>) (zext_ln1116_265_fu_12459423_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_937_fu_3375_p2() {
    mul_ln1118_937_fu_3375_p2 = (!mul_ln1118_937_fu_3375_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_937_fu_3375_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_938_fu_2812_p0() {
    mul_ln1118_938_fu_2812_p0 =  (sc_lv<8>) (zext_ln1116_266_fu_12459457_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_938_fu_2812_p2() {
    mul_ln1118_938_fu_2812_p2 = (!mul_ln1118_938_fu_2812_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_938_fu_2812_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_939_fu_1770_p0() {
    mul_ln1118_939_fu_1770_p0 =  (sc_lv<8>) (zext_ln1118_1491_fu_12459590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_939_fu_1770_p2() {
    mul_ln1118_939_fu_1770_p2 = (!mul_ln1118_939_fu_1770_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_939_fu_1770_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_93_fu_2711_p0() {
    mul_ln1118_93_fu_2711_p0 =  (sc_lv<8>) (zext_ln1118_148_fu_12407428_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_93_fu_2711_p2() {
    mul_ln1118_93_fu_2711_p2 = (!mul_ln1118_93_fu_2711_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_93_fu_2711_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_940_fu_2720_p0() {
    mul_ln1118_940_fu_2720_p0 =  (sc_lv<8>) (zext_ln1118_3480_fu_12459764_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_940_fu_2720_p2() {
    mul_ln1118_940_fu_2720_p2 = (!mul_ln1118_940_fu_2720_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_940_fu_2720_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_941_fu_2213_p0() {
    mul_ln1118_941_fu_2213_p0 =  (sc_lv<8>) (zext_ln1118_3424_fu_12458456_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_941_fu_2213_p2() {
    mul_ln1118_941_fu_2213_p2 = (!mul_ln1118_941_fu_2213_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_941_fu_2213_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_942_fu_3163_p0() {
    mul_ln1118_942_fu_3163_p0 =  (sc_lv<8>) (zext_ln1116_253_fu_12458507_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_942_fu_3163_p2() {
    mul_ln1118_942_fu_3163_p2 = (!mul_ln1118_942_fu_3163_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_942_fu_3163_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_943_fu_2656_p0() {
    mul_ln1118_943_fu_2656_p0 =  (sc_lv<8>) (zext_ln1116_254_fu_12458571_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_943_fu_2656_p2() {
    mul_ln1118_943_fu_2656_p2 = (!mul_ln1118_943_fu_2656_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_943_fu_2656_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_944_fu_3071_p0() {
    mul_ln1118_944_fu_3071_p0 =  (sc_lv<8>) (zext_ln1118_1473_fu_12458965_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_944_fu_3071_p2() {
    mul_ln1118_944_fu_3071_p2 = (!mul_ln1118_944_fu_3071_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_944_fu_3071_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_945_fu_2564_p0() {
    mul_ln1118_945_fu_2564_p0 =  (sc_lv<8>) (mul_ln1118_945_fu_2564_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_945_fu_2564_p00() {
    mul_ln1118_945_fu_2564_p00 = esl_zext<16,8>(p_read109.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_945_fu_2564_p2() {
    mul_ln1118_945_fu_2564_p2 = (!mul_ln1118_945_fu_2564_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_945_fu_2564_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_946_fu_2001_p0() {
    mul_ln1118_946_fu_2001_p0 =  (sc_lv<8>) (zext_ln1118_1482_fu_12459181_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_946_fu_2001_p2() {
    mul_ln1118_946_fu_2001_p2 = (!mul_ln1118_946_fu_2001_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_946_fu_2001_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_947_fu_3007_p0() {
    mul_ln1118_947_fu_3007_p0 =  (sc_lv<8>) (zext_ln1118_1483_fu_12459218_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_947_fu_3007_p2() {
    mul_ln1118_947_fu_3007_p2 = (!mul_ln1118_947_fu_3007_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_947_fu_3007_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_948_fu_3422_p0() {
    mul_ln1118_948_fu_3422_p0 =  (sc_lv<8>) (zext_ln1116_263_fu_12459303_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_948_fu_3422_p2() {
    mul_ln1118_948_fu_3422_p2 = (!mul_ln1118_948_fu_3422_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_948_fu_3422_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_949_fu_1402_p0() {
    mul_ln1118_949_fu_1402_p0 =  (sc_lv<8>) (zext_ln1116_266_fu_12459457_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_949_fu_1402_p2() {
    mul_ln1118_949_fu_1402_p2 = (!mul_ln1118_949_fu_1402_p0.read().is_01() || !ap_const_lv16_FFB6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_949_fu_1402_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_94_fu_1469_p0() {
    mul_ln1118_94_fu_1469_p0 =  (sc_lv<8>) (zext_ln1118_152_fu_12407458_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_94_fu_1469_p2() {
    mul_ln1118_94_fu_1469_p2 = (!mul_ln1118_94_fu_1469_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_94_fu_1469_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_950_fu_3360_p0() {
    mul_ln1118_950_fu_3360_p0 =  (sc_lv<8>) (zext_ln708_559_fu_12459860_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_950_fu_3360_p2() {
    mul_ln1118_950_fu_3360_p2 = (!mul_ln1118_950_fu_3360_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_950_fu_3360_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_951_fu_3361_p0() {
    mul_ln1118_951_fu_3361_p0 =  (sc_lv<8>) (zext_ln1116_252_fu_12458437_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_951_fu_3361_p2() {
    mul_ln1118_951_fu_3361_p2 = (!mul_ln1118_951_fu_3361_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_951_fu_3361_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_952_fu_3362_p0() {
    mul_ln1118_952_fu_3362_p0 =  (sc_lv<8>) (zext_ln1116_253_fu_12458507_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_952_fu_3362_p2() {
    mul_ln1118_952_fu_3362_p2 = (!mul_ln1118_952_fu_3362_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_952_fu_3362_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_953_fu_1938_p0() {
    mul_ln1118_953_fu_1938_p0 =  (sc_lv<8>) (zext_ln1116_257_fu_12458857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_953_fu_1938_p2() {
    mul_ln1118_953_fu_1938_p2 = (!mul_ln1118_953_fu_1938_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_953_fu_1938_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_954_fu_1867_p0() {
    mul_ln1118_954_fu_1867_p0 =  (sc_lv<8>) (zext_ln1116_262_fu_12459127_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_954_fu_1867_p2() {
    mul_ln1118_954_fu_1867_p2 = (!mul_ln1118_954_fu_1867_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_954_fu_1867_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_955_fu_1941_p0() {
    mul_ln1118_955_fu_1941_p0 =  (sc_lv<8>) (zext_ln1118_1486_fu_12459310_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_955_fu_1941_p2() {
    mul_ln1118_955_fu_1941_p2 = (!mul_ln1118_955_fu_1941_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_955_fu_1941_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_956_fu_1942_p0() {
    mul_ln1118_956_fu_1942_p0 =  (sc_lv<8>) (zext_ln1116_267_fu_12459533_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_956_fu_1942_p2() {
    mul_ln1118_956_fu_1942_p2 = (!mul_ln1118_956_fu_1942_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_956_fu_1942_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_957_fu_1943_p0() {
    mul_ln1118_957_fu_1943_p0 =  (sc_lv<8>) (zext_ln1118_1492_fu_12459616_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_957_fu_1943_p2() {
    mul_ln1118_957_fu_1943_p2 = (!mul_ln1118_957_fu_1943_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_957_fu_1943_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_958_fu_2750_p0() {
    mul_ln1118_958_fu_2750_p0 =  (sc_lv<8>) (zext_ln1118_1497_fu_12459802_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_958_fu_2750_p2() {
    mul_ln1118_958_fu_2750_p2 = (!mul_ln1118_958_fu_2750_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_958_fu_2750_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_959_fu_1507_p0() {
    mul_ln1118_959_fu_1507_p0 =  (sc_lv<8>) (zext_ln1116_269_fu_12459920_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_959_fu_1507_p2() {
    mul_ln1118_959_fu_1507_p2 = (!mul_ln1118_959_fu_1507_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_959_fu_1507_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_95_fu_2093_p0() {
    mul_ln1118_95_fu_2093_p0 =  (sc_lv<8>) (zext_ln1116_14_fu_12401359_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_95_fu_2093_p2() {
    mul_ln1118_95_fu_2093_p2 = (!mul_ln1118_95_fu_2093_p0.read().is_01() || !ap_const_lv16_FF92.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_95_fu_2093_p0.read()) * sc_bigint<16>(ap_const_lv16_FF92);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_960_fu_1947_p0() {
    mul_ln1118_960_fu_1947_p0 =  (sc_lv<8>) (zext_ln1118_1460_fu_12458580_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_960_fu_1947_p2() {
    mul_ln1118_960_fu_1947_p2 = (!mul_ln1118_960_fu_1947_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_960_fu_1947_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_961_fu_1948_p0() {
    mul_ln1118_961_fu_1948_p0 =  (sc_lv<8>) (mul_ln1118_961_fu_1948_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_961_fu_1948_p00() {
    mul_ln1118_961_fu_1948_p00 = esl_zext<13,8>(p_read104.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_961_fu_1948_p2() {
    mul_ln1118_961_fu_1948_p2 = (!mul_ln1118_961_fu_1948_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_961_fu_1948_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_962_fu_1949_p0() {
    mul_ln1118_962_fu_1949_p0 =  (sc_lv<8>) (zext_ln1118_1473_fu_12458965_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_962_fu_1949_p2() {
    mul_ln1118_962_fu_1949_p2 = (!mul_ln1118_962_fu_1949_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_962_fu_1949_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_963_fu_2755_p0() {
    mul_ln1118_963_fu_2755_p0 =  (sc_lv<8>) (zext_ln1118_1477_fu_12459091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_963_fu_2755_p2() {
    mul_ln1118_963_fu_2755_p2 = (!mul_ln1118_963_fu_2755_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_963_fu_2755_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_964_fu_2756_p0() {
    mul_ln1118_964_fu_2756_p0 =  (sc_lv<8>) (zext_ln1118_1479_fu_12459136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_964_fu_2756_p2() {
    mul_ln1118_964_fu_2756_p2 = (!mul_ln1118_964_fu_2756_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_964_fu_2756_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_965_fu_2135_p0() {
    mul_ln1118_965_fu_2135_p0 =  (sc_lv<8>) (zext_ln1118_1482_fu_12459181_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_965_fu_2135_p2() {
    mul_ln1118_965_fu_2135_p2 = (!mul_ln1118_965_fu_2135_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_965_fu_2135_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_966_fu_3121_p0() {
    mul_ln1118_966_fu_3121_p0 =  (sc_lv<8>) (zext_ln1116_263_fu_12459303_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_966_fu_3121_p2() {
    mul_ln1118_966_fu_3121_p2 = (!mul_ln1118_966_fu_3121_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_966_fu_3121_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_967_fu_1719_p0() {
    mul_ln1118_967_fu_1719_p0 =  (sc_lv<8>) (zext_ln1118_1491_fu_12459590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_967_fu_1719_p2() {
    mul_ln1118_967_fu_1719_p2 = (!mul_ln1118_967_fu_1719_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_967_fu_1719_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_968_fu_3307_p0() {
    mul_ln1118_968_fu_3307_p0 =  (sc_lv<8>) (zext_ln1116_268_fu_12459796_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_968_fu_3307_p2() {
    mul_ln1118_968_fu_3307_p2 = (!mul_ln1118_968_fu_3307_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_968_fu_3307_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_969_fu_1722_p0() {
    mul_ln1118_969_fu_1722_p0 =  (sc_lv<8>) (zext_ln708_561_fu_12459926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_969_fu_1722_p2() {
    mul_ln1118_969_fu_1722_p2 = (!mul_ln1118_969_fu_1722_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_969_fu_1722_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_96_fu_1472_p0() {
    mul_ln1118_96_fu_1472_p0 =  (sc_lv<8>) (zext_ln1118_207_fu_12401404_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_96_fu_1472_p2() {
    mul_ln1118_96_fu_1472_p2 = (!mul_ln1118_96_fu_1472_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_96_fu_1472_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_970_fu_1723_p0() {
    mul_ln1118_970_fu_1723_p0 =  (sc_lv<8>) (zext_ln1118_3428_fu_12458521_p1.read());
}

}

