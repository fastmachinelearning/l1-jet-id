#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2771_fu_60833_p2() {
    add_ln703_2771_fu_60833_p2 = (!sext_ln703_1619_fu_60829_p1.read().is_01() || !sext_ln703_1617_fu_60811_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1619_fu_60829_p1.read()) + sc_bigint<13>(sext_ln703_1617_fu_60811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2772_fu_60843_p2() {
    add_ln703_2772_fu_60843_p2 = (!sext_ln703_1620_fu_60839_p1.read().is_01() || !add_ln703_2766_fu_60805_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1620_fu_60839_p1.read()) + sc_biguint<15>(add_ln703_2766_fu_60805_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2773_fu_60849_p2() {
    add_ln703_2773_fu_60849_p2 = (!add_ln703_2772_fu_60843_p2.read().is_01() || !zext_ln203_373_fu_40245_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2772_fu_60843_p2.read()) + sc_biguint<15>(zext_ln203_373_fu_40245_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2774_fu_60855_p2() {
    add_ln703_2774_fu_60855_p2 = (!sext_ln203_592_fu_40281_p1.read().is_01() || !sext_ln203_593_fu_40313_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_592_fu_40281_p1.read()) + sc_bigint<12>(sext_ln203_593_fu_40313_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2775_fu_60865_p2() {
    add_ln703_2775_fu_60865_p2 = (!sext_ln703_1621_fu_60861_p1.read().is_01() || !add_ln703_2773_fu_60849_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1621_fu_60861_p1.read()) + sc_biguint<15>(add_ln703_2773_fu_60849_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2776_fu_60875_p2() {
    add_ln703_2776_fu_60875_p2 = (!sext_ln203_594_fu_40336_p1.read().is_01() || !zext_ln203_374_fu_40249_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_594_fu_40336_p1.read()) + sc_biguint<12>(zext_ln203_374_fu_40249_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2777_fu_60885_p2() {
    add_ln703_2777_fu_60885_p2 = (!zext_ln1118_1009_fu_39671_p1.read().is_01() || !zext_ln1118_1022_fu_40064_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1009_fu_39671_p1.read()) + sc_biguint<9>(zext_ln1118_1022_fu_40064_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2778_fu_60895_p2() {
    add_ln703_2778_fu_60895_p2 = (!zext_ln703_565_fu_60891_p1.read().is_01() || !zext_ln708_919_fu_40368_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_565_fu_60891_p1.read()) + sc_biguint<11>(zext_ln708_919_fu_40368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2779_fu_60905_p2() {
    add_ln703_2779_fu_60905_p2 = (!zext_ln703_566_fu_60901_p1.read().is_01() || !sext_ln703_1623_fu_60881_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_566_fu_60901_p1.read()) + sc_bigint<13>(sext_ln703_1623_fu_60881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_277_fu_45458_p2() {
    add_ln703_277_fu_45458_p2 = (!sext_ln203_59_fu_28396_p1.read().is_01() || !sext_ln203_12_fu_27082_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_59_fu_28396_p1.read()) + sc_bigint<12>(sext_ln203_12_fu_27082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2781_fu_23922_p2() {
    add_ln703_2781_fu_23922_p2 = (!zext_ln1118_1044_fu_13732_p1.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1044_fu_13732_p1.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2782_fu_23932_p2() {
    add_ln703_2782_fu_23932_p2 = (!zext_ln703_567_fu_23928_p1.read().is_01() || !sext_ln203_586_fu_13094_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_567_fu_23928_p1.read()) + sc_bigint<12>(sext_ln203_586_fu_13094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2783_fu_23942_p2() {
    add_ln703_2783_fu_23942_p2 = (!sext_ln1118_408_fu_13768_p1.read().is_01() || !sext_ln708_209_fu_13792_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_408_fu_13768_p1.read()) + sc_bigint<12>(sext_ln708_209_fu_13792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2784_fu_23952_p2() {
    add_ln703_2784_fu_23952_p2 = (!sext_ln703_1625_fu_23948_p1.read().is_01() || !sext_ln703_372_fu_23938_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1625_fu_23948_p1.read()) + sc_bigint<13>(sext_ln703_372_fu_23938_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2785_fu_23962_p2() {
    add_ln703_2785_fu_23962_p2 = (!sext_ln1118_409_fu_13924_p1.read().is_01() || !zext_ln1118_1048_fu_13860_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_409_fu_13924_p1.read()) + sc_biguint<12>(zext_ln1118_1048_fu_13860_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2786_fu_23972_p2() {
    add_ln703_2786_fu_23972_p2 = (!sext_ln703_1626_fu_23968_p1.read().is_01() || !sext_ln703_373_fu_23958_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1626_fu_23968_p1.read()) + sc_bigint<14>(sext_ln703_373_fu_23958_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2787_fu_23978_p2() {
    add_ln703_2787_fu_23978_p2 = (!zext_ln708_677_fu_13820_p1.read().is_01() || !sext_ln203_595_fu_13880_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_677_fu_13820_p1.read()) + sc_bigint<11>(sext_ln203_595_fu_13880_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2788_fu_23988_p2() {
    add_ln703_2788_fu_23988_p2 = (!zext_ln708_636_fu_12784_p1.read().is_01() || !zext_ln708_640_fu_12824_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_636_fu_12784_p1.read()) + sc_biguint<9>(zext_ln708_640_fu_12824_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2789_fu_23998_p2() {
    add_ln703_2789_fu_23998_p2 = (!zext_ln703_568_fu_23994_p1.read().is_01() || !sext_ln703_1627_fu_23984_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_568_fu_23994_p1.read()) + sc_bigint<12>(sext_ln703_1627_fu_23984_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_278_fu_45468_p2() {
    add_ln703_278_fu_45468_p2 = (!sext_ln703_234_fu_45464_p1.read().is_01() || !sext_ln203_57_fu_28332_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_234_fu_45464_p1.read()) + sc_bigint<13>(sext_ln203_57_fu_28332_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2790_fu_60924_p2() {
    add_ln703_2790_fu_60924_p2 = (!sext_ln703_1628_fu_60921_p1.read().is_01() || !add_ln703_2786_reg_69891.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1628_fu_60921_p1.read()) + sc_biguint<14>(add_ln703_2786_reg_69891.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2791_fu_60929_p2() {
    add_ln703_2791_fu_60929_p2 = (!add_ln703_2790_fu_60924_p2.read().is_01() || !sext_ln1118_414_fu_40482_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2790_fu_60924_p2.read()) + sc_bigint<14>(sext_ln1118_414_fu_40482_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2792_fu_60939_p2() {
    add_ln703_2792_fu_60939_p2 = (!zext_ln1118_1052_fu_40387_p1.read().is_01() || !sext_ln1118_412_fu_40438_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1052_fu_40387_p1.read()) + sc_bigint<12>(sext_ln1118_412_fu_40438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2793_fu_60949_p2() {
    add_ln703_2793_fu_60949_p2 = (!sext_ln703_1630_fu_60945_p1.read().is_01() || !sext_ln703_1629_fu_60935_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1630_fu_60945_p1.read()) + sc_bigint<15>(sext_ln703_1629_fu_60935_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2794_fu_60955_p2() {
    add_ln703_2794_fu_60955_p2 = (!sext_ln1118_410_reg_68638.read().is_01() || !sext_ln708_201_fu_39943_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_410_reg_68638.read()) + sc_bigint<10>(sext_ln708_201_fu_39943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2795_fu_60964_p2() {
    add_ln703_2795_fu_60964_p2 = (!sext_ln1118_411_fu_40406_p1.read().is_01() || !sext_ln1118_413_fu_40458_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_411_fu_40406_p1.read()) + sc_bigint<9>(sext_ln1118_413_fu_40458_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2796_fu_60974_p2() {
    add_ln703_2796_fu_60974_p2 = (!sext_ln703_1632_fu_60970_p1.read().is_01() || !sext_ln1116_63_fu_39445_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1632_fu_60970_p1.read()) + sc_bigint<10>(sext_ln1116_63_fu_39445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2797_fu_60984_p2() {
    add_ln703_2797_fu_60984_p2 = (!sext_ln703_1633_fu_60980_p1.read().is_01() || !sext_ln703_1631_fu_60960_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1633_fu_60980_p1.read()) + sc_bigint<11>(sext_ln703_1631_fu_60960_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2798_fu_60994_p2() {
    add_ln703_2798_fu_60994_p2 = (!sext_ln703_1634_fu_60990_p1.read().is_01() || !add_ln703_2793_fu_60949_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1634_fu_60990_p1.read()) + sc_biguint<15>(add_ln703_2793_fu_60949_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2799_fu_61000_p2() {
    add_ln703_2799_fu_61000_p2 = (!sext_ln203_597_fu_40564_p1.read().is_01() || !sext_ln203_594_fu_40336_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_597_fu_40564_p1.read()) + sc_bigint<12>(sext_ln203_594_fu_40336_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_279_fu_45478_p2() {
    add_ln703_279_fu_45478_p2 = (!sext_ln703_235_fu_45474_p1.read().is_01() || !add_ln703_276_fu_45452_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_235_fu_45474_p1.read()) + sc_biguint<15>(add_ln703_276_fu_45452_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_27_fu_43937_p2() {
    add_ln703_27_fu_43937_p2 = (!sext_ln703_30_fu_43933_p1.read().is_01() || !add_ln703_20_fu_43872_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_30_fu_43933_p1.read()) + sc_biguint<15>(add_ln703_20_fu_43872_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2800_fu_61010_p2() {
    add_ln703_2800_fu_61010_p2 = (!sext_ln703_1635_fu_61006_p1.read().is_01() || !add_ln703_2798_fu_60994_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1635_fu_61006_p1.read()) + sc_biguint<15>(add_ln703_2798_fu_60994_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2801_fu_61016_p2() {
    add_ln703_2801_fu_61016_p2 = (!sext_ln203_596_fu_40505_p1.read().is_01() || !sext_ln1118_388_fu_39611_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_596_fu_40505_p1.read()) + sc_bigint<10>(sext_ln1118_388_fu_39611_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2802_fu_61026_p2() {
    add_ln703_2802_fu_61026_p2 = (!sext_ln703_1636_fu_61022_p1.read().is_01() || !zext_ln203_376_fu_40532_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1636_fu_61022_p1.read()) + sc_biguint<12>(zext_ln203_376_fu_40532_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2803_fu_61036_p2() {
    add_ln703_2803_fu_61036_p2 = (!sext_ln703_1637_fu_61032_p1.read().is_01() || !add_ln703_2800_fu_61010_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1637_fu_61032_p1.read()) + sc_biguint<15>(add_ln703_2800_fu_61010_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2804_fu_61042_p2() {
    add_ln703_2804_fu_61042_p2 = (!sext_ln203_598_fu_40584_p1.read().is_01() || !zext_ln1116_241_fu_39528_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_598_fu_40584_p1.read()) + sc_biguint<9>(zext_ln1116_241_fu_39528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2805_fu_61052_p2() {
    add_ln703_2805_fu_61052_p2 = (!sext_ln703_1638_fu_61048_p1.read().is_01() || !sext_ln203_599_fu_40616_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1638_fu_61048_p1.read()) + sc_bigint<10>(sext_ln203_599_fu_40616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2806_fu_61062_p2() {
    add_ln703_2806_fu_61062_p2 = (!zext_ln708_655_fu_39755_p1.read().is_01() || !zext_ln203_371_fu_40114_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_655_fu_39755_p1.read()) + sc_biguint<9>(zext_ln203_371_fu_40114_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2807_fu_61072_p2() {
    add_ln703_2807_fu_61072_p2 = (!zext_ln703_569_fu_61068_p1.read().is_01() || !zext_ln203_375_fu_40509_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_569_fu_61068_p1.read()) + sc_biguint<10>(zext_ln203_375_fu_40509_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2808_fu_61082_p2() {
    add_ln703_2808_fu_61082_p2 = (!zext_ln703_570_fu_61078_p1.read().is_01() || !sext_ln703_1639_fu_61058_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_570_fu_61078_p1.read()) + sc_bigint<12>(sext_ln703_1639_fu_61058_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_280_fu_45488_p2() {
    add_ln703_280_fu_45488_p2 = (!zext_ln708_689_fu_27274_p1.read().is_01() || !zext_ln708_723_fu_28372_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_689_fu_27274_p1.read()) + sc_biguint<11>(zext_ln708_723_fu_28372_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2810_fu_24004_p2() {
    add_ln703_2810_fu_24004_p2 = (!zext_ln708_680_fu_13992_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_680_fu_13992_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2811_fu_24014_p2() {
    add_ln703_2811_fu_24014_p2 = (!sext_ln703_376_fu_24010_p1.read().is_01() || !sext_ln203_586_fu_13094_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_376_fu_24010_p1.read()) + sc_bigint<12>(sext_ln203_586_fu_13094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2812_fu_24024_p2() {
    add_ln703_2812_fu_24024_p2 = (!sext_ln703_377_fu_24020_p1.read().is_01() || !sext_ln203_600_fu_14012_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_377_fu_24020_p1.read()) + sc_bigint<13>(sext_ln203_600_fu_14012_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2813_fu_24030_p2() {
    add_ln703_2813_fu_24030_p2 = (!sext_ln1118_390_fu_13126_p1.read().is_01() || !zext_ln1116_250_fu_14024_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_390_fu_13126_p1.read()) + sc_biguint<11>(zext_ln1116_250_fu_14024_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2814_fu_24040_p2() {
    add_ln703_2814_fu_24040_p2 = (!sext_ln703_1642_fu_24036_p1.read().is_01() || !add_ln703_2812_fu_24024_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1642_fu_24036_p1.read()) + sc_biguint<13>(add_ln703_2812_fu_24024_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2815_fu_24050_p2() {
    add_ln703_2815_fu_24050_p2 = (!sext_ln1116_66_fu_14068_p1.read().is_01() || !sext_ln708_212_fu_14150_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_66_fu_14068_p1.read()) + sc_bigint<12>(sext_ln708_212_fu_14150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2816_fu_24060_p2() {
    add_ln703_2816_fu_24060_p2 = (!sext_ln703_1643_fu_24056_p1.read().is_01() || !sext_ln703_378_fu_24046_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1643_fu_24056_p1.read()) + sc_bigint<14>(sext_ln703_378_fu_24046_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2817_fu_24066_p2() {
    add_ln703_2817_fu_24066_p2 = (!sext_ln708_211_fu_14076_p1.read().is_01() || !sext_ln1118_416_fu_14130_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_211_fu_14076_p1.read()) + sc_bigint<11>(sext_ln1118_416_fu_14130_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2818_fu_24076_p2() {
    add_ln703_2818_fu_24076_p2 = (!zext_ln1118_1063_fu_14166_p1.read().is_01() || !zext_ln1118_1061_fu_14094_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1063_fu_14166_p1.read()) + sc_biguint<10>(zext_ln1118_1061_fu_14094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2819_fu_24086_p2() {
    add_ln703_2819_fu_24086_p2 = (!zext_ln703_571_fu_24082_p1.read().is_01() || !sext_ln703_1644_fu_24072_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_571_fu_24082_p1.read()) + sc_bigint<12>(sext_ln703_1644_fu_24072_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_281_fu_45498_p2() {
    add_ln703_281_fu_45498_p2 = (!zext_ln703_68_fu_45494_p1.read().is_01() || !sext_ln203_60_fu_28420_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_68_fu_45494_p1.read()) + sc_bigint<13>(sext_ln203_60_fu_28420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2820_fu_61105_p2() {
    add_ln703_2820_fu_61105_p2 = (!sext_ln703_1645_fu_61102_p1.read().is_01() || !add_ln703_2816_reg_69901.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1645_fu_61102_p1.read()) + sc_biguint<14>(add_ln703_2816_reg_69901.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2821_fu_61110_p2() {
    add_ln703_2821_fu_61110_p2 = (!sext_ln1118_387_fu_39571_p1.read().is_01() || !sext_ln1118_417_fu_40620_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_387_fu_39571_p1.read()) + sc_bigint<12>(sext_ln1118_417_fu_40620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2822_fu_61120_p2() {
    add_ln703_2822_fu_61120_p2 = (!sext_ln703_1646_fu_61116_p1.read().is_01() || !add_ln703_2820_fu_61105_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1646_fu_61116_p1.read()) + sc_biguint<14>(add_ln703_2820_fu_61105_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2823_fu_61130_p2() {
    add_ln703_2823_fu_61130_p2 = (!zext_ln708_923_fu_40730_p1.read().is_01() || !zext_ln1118_1065_fu_40626_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_923_fu_40730_p1.read()) + sc_biguint<10>(zext_ln1118_1065_fu_40626_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2824_fu_61140_p2() {
    add_ln703_2824_fu_61140_p2 = (!zext_ln1116_254_fu_40678_p1.read().is_01() || !zext_ln708_687_fu_40690_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_254_fu_40678_p1.read()) + sc_biguint<10>(zext_ln708_687_fu_40690_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2825_fu_61150_p2() {
    add_ln703_2825_fu_61150_p2 = (!zext_ln703_573_fu_61146_p1.read().is_01() || !zext_ln703_572_fu_61136_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_573_fu_61146_p1.read()) + sc_biguint<11>(zext_ln703_572_fu_61136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2826_fu_61160_p2() {
    add_ln703_2826_fu_61160_p2 = (!zext_ln703_574_fu_61156_p1.read().is_01() || !sext_ln703_1647_fu_61126_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_574_fu_61156_p1.read()) + sc_bigint<15>(sext_ln703_1647_fu_61126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2827_fu_61166_p2() {
    add_ln703_2827_fu_61166_p2 = (!zext_ln203_377_reg_68681.read().is_01() || !sext_ln708_213_fu_40623_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_377_reg_68681.read()) + sc_bigint<11>(sext_ln708_213_fu_40623_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2828_fu_61171_p2() {
    add_ln703_2828_fu_61171_p2 = (!sext_ln1116_67_fu_40646_p1.read().is_01() || !sext_ln203_598_fu_40584_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_67_fu_40646_p1.read()) + sc_bigint<9>(sext_ln203_598_fu_40584_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2829_fu_61181_p2() {
    add_ln703_2829_fu_61181_p2 = (!sext_ln703_1648_fu_61177_p1.read().is_01() || !add_ln703_2827_fu_61166_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1648_fu_61177_p1.read()) + sc_biguint<11>(add_ln703_2827_fu_61166_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_282_fu_45504_p2() {
    add_ln703_282_fu_45504_p2 = (!sext_ln1116_5_fu_26485_p1.read().is_01() || !sext_ln203_58_fu_28352_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_5_fu_26485_p1.read()) + sc_bigint<10>(sext_ln203_58_fu_28352_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2830_fu_61191_p2() {
    add_ln703_2830_fu_61191_p2 = (!zext_ln708_684_fu_40664_p1.read().is_01() || !zext_ln708_650_fu_39405_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_684_fu_40664_p1.read()) + sc_biguint<9>(zext_ln708_650_fu_39405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2831_fu_61201_p2() {
    add_ln703_2831_fu_61201_p2 = (!zext_ln1116_255_fu_40694_p1.read().is_01() || !zext_ln1118_1066_fu_40748_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_255_fu_40694_p1.read()) + sc_biguint<9>(zext_ln1118_1066_fu_40748_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2832_fu_61211_p2() {
    add_ln703_2832_fu_61211_p2 = (!zext_ln703_576_fu_61207_p1.read().is_01() || !zext_ln703_575_fu_61197_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_576_fu_61207_p1.read()) + sc_biguint<10>(zext_ln703_575_fu_61197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2833_fu_61221_p2() {
    add_ln703_2833_fu_61221_p2 = (!zext_ln703_577_fu_61217_p1.read().is_01() || !sext_ln703_1649_fu_61187_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_577_fu_61217_p1.read()) + sc_bigint<12>(sext_ln703_1649_fu_61187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2834_fu_61231_p2() {
    add_ln703_2834_fu_61231_p2 = (!sext_ln703_1650_fu_61227_p1.read().is_01() || !add_ln703_2826_fu_61160_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1650_fu_61227_p1.read()) + sc_biguint<15>(add_ln703_2826_fu_61160_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2835_fu_61237_p2() {
    add_ln703_2835_fu_61237_p2 = (!add_ln703_2834_fu_61231_p2.read().is_01() || !zext_ln203_379_fu_40780_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2834_fu_61231_p2.read()) + sc_biguint<15>(zext_ln203_379_fu_40780_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2836_fu_61243_p2() {
    add_ln703_2836_fu_61243_p2 = (!sext_ln203_601_fu_40812_p1.read().is_01() || !sext_ln203_584_fu_39847_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_601_fu_40812_p1.read()) + sc_bigint<10>(sext_ln203_584_fu_39847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2837_fu_61253_p2() {
    add_ln703_2837_fu_61253_p2 = (!sext_ln703_1651_fu_61249_p1.read().is_01() || !zext_ln708_925_fu_40834_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1651_fu_61249_p1.read()) + sc_biguint<11>(zext_ln708_925_fu_40834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2839_fu_24092_p2() {
    add_ln703_2839_fu_24092_p2 = (!sext_ln203_602_fu_14238_p1.read().is_01() || !sext_ln203_603_fu_14246_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_602_fu_14238_p1.read()) + sc_bigint<12>(sext_ln203_603_fu_14246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_283_fu_45514_p2() {
    add_ln703_283_fu_45514_p2 = (!sext_ln703_239_fu_45510_p1.read().is_01() || !sext_ln203_56_fu_28300_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_239_fu_45510_p1.read()) + sc_bigint<11>(sext_ln203_56_fu_28300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2840_fu_61283_p2() {
    add_ln703_2840_fu_61283_p2 = (!sext_ln703_1654_fu_61280_p1.read().is_01() || !or_ln703_18_fu_61273_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1654_fu_61280_p1.read()) + sc_biguint<16>(or_ln703_18_fu_61273_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2841_fu_61289_p2() {
    add_ln703_2841_fu_61289_p2 = (!sext_ln203_610_fu_40873_p1.read().is_01() || !sext_ln203_611_fu_40896_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_610_fu_40873_p1.read()) + sc_bigint<12>(sext_ln203_611_fu_40896_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2842_fu_61299_p2() {
    add_ln703_2842_fu_61299_p2 = (!sext_ln203_613_fu_40976_p1.read().is_01() || !sext_ln203_615_fu_41042_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_613_fu_40976_p1.read()) + sc_bigint<12>(sext_ln203_615_fu_41042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2843_fu_61309_p2() {
    add_ln703_2843_fu_61309_p2 = (!sext_ln703_1656_fu_61305_p1.read().is_01() || !sext_ln703_1655_fu_61295_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1656_fu_61305_p1.read()) + sc_bigint<13>(sext_ln703_1655_fu_61295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2844_fu_61319_p2() {
    add_ln703_2844_fu_61319_p2 = (!sext_ln703_1657_fu_61315_p1.read().is_01() || !add_ln703_2840_fu_61283_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1657_fu_61315_p1.read()) + sc_biguint<16>(add_ln703_2840_fu_61283_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2845_fu_61325_p2() {
    add_ln703_2845_fu_61325_p2 = (!zext_ln708_927_fu_40924_p1.read().is_01() || !zext_ln708_920_fu_40528_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_927_fu_40924_p1.read()) + sc_biguint<11>(zext_ln708_920_fu_40528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2846_fu_61335_p2() {
    add_ln703_2846_fu_61335_p2 = (!zext_ln703_578_fu_61331_p1.read().is_01() || !zext_ln203_381_fu_40838_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_578_fu_61331_p1.read()) + sc_biguint<12>(zext_ln203_381_fu_40838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2847_fu_24098_p2() {
    add_ln703_2847_fu_24098_p2 = (!sext_ln203_604_fu_14270_p1.read().is_01() || !sext_ln203_606_fu_14314_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_604_fu_14270_p1.read()) + sc_bigint<11>(sext_ln203_606_fu_14314_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2848_fu_61348_p2() {
    add_ln703_2848_fu_61348_p2 = (!sext_ln203_612_fu_40956_p1.read().is_01() || !zext_ln1118_1030_reg_68572.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_612_fu_40956_p1.read()) + sc_biguint<11>(zext_ln1118_1030_reg_68572.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2849_fu_61357_p2() {
    add_ln703_2849_fu_61357_p2 = (!sext_ln703_1659_fu_61353_p1.read().is_01() || !sext_ln703_1658_fu_61345_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1659_fu_61353_p1.read()) + sc_bigint<12>(sext_ln703_1658_fu_61345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_284_fu_45524_p2() {
    add_ln703_284_fu_45524_p2 = (!sext_ln703_240_fu_45520_p1.read().is_01() || !add_ln703_281_fu_45498_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_240_fu_45520_p1.read()) + sc_biguint<13>(add_ln703_281_fu_45498_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2850_fu_61367_p2() {
    add_ln703_2850_fu_61367_p2 = (!sext_ln703_1660_fu_61363_p1.read().is_01() || !zext_ln703_579_fu_61341_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1660_fu_61363_p1.read()) + sc_biguint<14>(zext_ln703_579_fu_61341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2851_fu_61377_p2() {
    add_ln703_2851_fu_61377_p2 = (!sext_ln703_1661_fu_61373_p1.read().is_01() || !add_ln703_2844_fu_61319_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1661_fu_61373_p1.read()) + sc_biguint<16>(add_ln703_2844_fu_61319_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2852_fu_24104_p2() {
    add_ln703_2852_fu_24104_p2 = (!sext_ln203_605_fu_14294_p1.read().is_01() || !sext_ln1118_415_fu_14126_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_605_fu_14294_p1.read()) + sc_bigint<10>(sext_ln1118_415_fu_14126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2853_fu_61386_p2() {
    add_ln703_2853_fu_61386_p2 = (!sext_ln703_1662_fu_61383_p1.read().is_01() || !zext_ln203_383_fu_41000_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1662_fu_61383_p1.read()) + sc_biguint<11>(zext_ln203_383_fu_41000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2854_fu_61396_p2() {
    add_ln703_2854_fu_61396_p2 = (!sext_ln203_608_fu_40865_p1.read().is_01() || !sext_ln203_596_fu_40505_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_608_fu_40865_p1.read()) + sc_bigint<10>(sext_ln203_596_fu_40505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2855_fu_61406_p2() {
    add_ln703_2855_fu_61406_p2 = (!sext_ln1118_389_fu_39703_p1.read().is_01() || !sext_ln1116_65_fu_39739_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_389_fu_39703_p1.read()) + sc_bigint<10>(sext_ln1116_65_fu_39739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2856_fu_61416_p2() {
    add_ln703_2856_fu_61416_p2 = (!sext_ln703_1665_fu_61412_p1.read().is_01() || !sext_ln703_1664_fu_61402_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1665_fu_61412_p1.read()) + sc_bigint<11>(sext_ln703_1664_fu_61402_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2857_fu_61426_p2() {
    add_ln703_2857_fu_61426_p2 = (!sext_ln703_1666_fu_61422_p1.read().is_01() || !sext_ln703_1663_fu_61392_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1666_fu_61422_p1.read()) + sc_bigint<12>(sext_ln703_1663_fu_61392_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2858_fu_61436_p2() {
    add_ln703_2858_fu_61436_p2 = (!sext_ln203_614_fu_40996_p1.read().is_01() || !sext_ln203_583_fu_39843_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_614_fu_40996_p1.read()) + sc_bigint<9>(sext_ln203_583_fu_39843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2859_fu_61446_p2() {
    add_ln703_2859_fu_61446_p2 = (!sext_ln703_1668_fu_61442_p1.read().is_01() || !sext_ln203_609_fu_40869_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1668_fu_61442_p1.read()) + sc_bigint<10>(sext_ln203_609_fu_40869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2860_fu_61456_p2() {
    add_ln703_2860_fu_61456_p2 = (!zext_ln203_380_reg_68686.read().is_01() || !zext_ln1116_233_reg_68479.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_380_reg_68686.read()) + sc_biguint<9>(zext_ln1116_233_reg_68479.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2861_fu_61464_p2() {
    add_ln703_2861_fu_61464_p2 = (!zext_ln203_382_fu_40903_p1.read().is_01() || !zext_ln708_650_fu_39405_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_382_fu_40903_p1.read()) + sc_biguint<9>(zext_ln708_650_fu_39405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2862_fu_61474_p2() {
    add_ln703_2862_fu_61474_p2 = (!zext_ln703_581_fu_61470_p1.read().is_01() || !zext_ln703_580_fu_61460_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_581_fu_61470_p1.read()) + sc_biguint<10>(zext_ln703_580_fu_61460_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2863_fu_61484_p2() {
    add_ln703_2863_fu_61484_p2 = (!zext_ln703_582_fu_61480_p1.read().is_01() || !sext_ln703_1669_fu_61452_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_582_fu_61480_p1.read()) + sc_bigint<12>(sext_ln703_1669_fu_61452_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2864_fu_61494_p2() {
    add_ln703_2864_fu_61494_p2 = (!sext_ln703_1670_fu_61490_p1.read().is_01() || !sext_ln703_1667_fu_61432_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1670_fu_61490_p1.read()) + sc_bigint<13>(sext_ln703_1667_fu_61432_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2866_fu_24110_p2() {
    add_ln703_2866_fu_24110_p2 = (!zext_ln708_701_fu_14380_p1.read().is_01() || !zext_ln203_384_fu_14394_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_701_fu_14380_p1.read()) + sc_biguint<10>(zext_ln203_384_fu_14394_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2867_fu_24120_p2() {
    add_ln703_2867_fu_24120_p2 = (!zext_ln703_583_fu_24116_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_583_fu_24116_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2868_fu_24130_p2() {
    add_ln703_2868_fu_24130_p2 = (!sext_ln703_381_fu_24126_p1.read().is_01() || !sext_ln203_616_fu_14398_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_381_fu_24126_p1.read()) + sc_bigint<12>(sext_ln203_616_fu_14398_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2869_fu_24140_p2() {
    add_ln703_2869_fu_24140_p2 = (!sext_ln1118_423_fu_14452_p1.read().is_01() || !sext_ln1118_421_fu_14418_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_423_fu_14452_p1.read()) + sc_bigint<12>(sext_ln1118_421_fu_14418_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_286_fu_45547_p2() {
    add_ln703_286_fu_45547_p2 = (!zext_ln708_715_reg_67373.read().is_01() || !zext_ln708_671_fu_26658_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_715_reg_67373.read()) + sc_biguint<11>(zext_ln708_671_fu_26658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2870_fu_24150_p2() {
    add_ln703_2870_fu_24150_p2 = (!sext_ln703_1672_fu_24146_p1.read().is_01() || !sext_ln703_382_fu_24136_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1672_fu_24146_p1.read()) + sc_bigint<13>(sext_ln703_382_fu_24136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2871_fu_24156_p2() {
    add_ln703_2871_fu_24156_p2 = (!add_ln703_2870_fu_24150_p2.read().is_01() || !sext_ln1118_425_fu_14480_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2870_fu_24150_p2.read()) + sc_bigint<13>(sext_ln1118_425_fu_14480_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2872_fu_24166_p2() {
    add_ln703_2872_fu_24166_p2 = (!zext_ln708_904_fu_12958_p1.read().is_01() || !zext_ln1118_1063_fu_14166_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_904_fu_12958_p1.read()) + sc_biguint<10>(zext_ln1118_1063_fu_14166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2873_fu_24176_p2() {
    add_ln703_2873_fu_24176_p2 = (!zext_ln703_584_fu_24172_p1.read().is_01() || !zext_ln203_385_fu_14524_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_584_fu_24172_p1.read()) + sc_biguint<11>(zext_ln203_385_fu_14524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2874_fu_24186_p2() {
    add_ln703_2874_fu_24186_p2 = (!zext_ln703_585_fu_24182_p1.read().is_01() || !sext_ln703_1673_fu_24162_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_585_fu_24182_p1.read()) + sc_bigint<14>(sext_ln703_1673_fu_24162_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2875_fu_24192_p2() {
    add_ln703_2875_fu_24192_p2 = (!sext_ln708_214_fu_14500_p1.read().is_01() || !sext_ln1118_426_fu_14528_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_214_fu_14500_p1.read()) + sc_bigint<9>(sext_ln1118_426_fu_14528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2876_fu_24202_p2() {
    add_ln703_2876_fu_24202_p2 = (!zext_ln708_640_fu_12824_p1.read().is_01() || !zext_ln203_359_fu_12846_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_640_fu_12824_p1.read()) + sc_biguint<9>(zext_ln203_359_fu_12846_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2877_fu_24212_p2() {
    add_ln703_2877_fu_24212_p2 = (!zext_ln703_586_fu_24208_p1.read().is_01() || !zext_ln1118_1061_fu_14094_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_586_fu_24208_p1.read()) + sc_biguint<10>(zext_ln1118_1061_fu_14094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2878_fu_24222_p2() {
    add_ln703_2878_fu_24222_p2 = (!zext_ln703_587_fu_24218_p1.read().is_01() || !sext_ln703_1674_fu_24198_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_587_fu_24218_p1.read()) + sc_bigint<11>(sext_ln703_1674_fu_24198_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2879_fu_61513_p2() {
    add_ln703_2879_fu_61513_p2 = (!sext_ln703_1675_fu_61510_p1.read().is_01() || !add_ln703_2874_reg_69926.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1675_fu_61510_p1.read()) + sc_biguint<14>(add_ln703_2874_reg_69926.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_287_fu_45556_p2() {
    add_ln703_287_fu_45556_p2 = (!zext_ln703_69_fu_45552_p1.read().is_01() || !or_ln703_2_fu_45540_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_69_fu_45552_p1.read()) + sc_biguint<16>(or_ln703_2_fu_45540_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2880_fu_61518_p2() {
    add_ln703_2880_fu_61518_p2 = (!sext_ln708_215_reg_68714.read().is_01() || !sext_ln203_613_fu_40976_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_215_reg_68714.read()) + sc_bigint<12>(sext_ln203_613_fu_40976_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2881_fu_61527_p2() {
    add_ln703_2881_fu_61527_p2 = (!sext_ln703_1676_fu_61523_p1.read().is_01() || !add_ln703_2879_fu_61513_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1676_fu_61523_p1.read()) + sc_biguint<14>(add_ln703_2879_fu_61513_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2882_fu_61537_p2() {
    add_ln703_2882_fu_61537_p2 = (!sext_ln1118_427_fu_41146_p1.read().is_01() || !sext_ln708_218_fu_41178_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_427_fu_41146_p1.read()) + sc_bigint<11>(sext_ln708_218_fu_41178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2883_fu_61547_p2() {
    add_ln703_2883_fu_61547_p2 = (!sext_ln703_1678_fu_61543_p1.read().is_01() || !zext_ln1118_1075_fu_41066_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1678_fu_61543_p1.read()) + sc_biguint<12>(zext_ln1118_1075_fu_41066_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2884_fu_61557_p2() {
    add_ln703_2884_fu_61557_p2 = (!sext_ln703_1679_fu_61553_p1.read().is_01() || !sext_ln703_1677_fu_61533_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1679_fu_61553_p1.read()) + sc_bigint<15>(sext_ln703_1677_fu_61533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2885_fu_61563_p2() {
    add_ln703_2885_fu_61563_p2 = (!zext_ln708_930_fu_41122_p1.read().is_01() || !zext_ln708_687_fu_40690_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_930_fu_41122_p1.read()) + sc_biguint<10>(zext_ln708_687_fu_40690_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2886_fu_61573_p2() {
    add_ln703_2886_fu_61573_p2 = (!zext_ln703_588_fu_61569_p1.read().is_01() || !zext_ln1118_1036_reg_68589.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_588_fu_61569_p1.read()) + sc_biguint<11>(zext_ln1118_1036_reg_68589.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2887_fu_61582_p2() {
    add_ln703_2887_fu_61582_p2 = (!zext_ln1118_1055_fu_40486_p1.read().is_01() || !zext_ln203_387_fu_41102_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1055_fu_40486_p1.read()) + sc_biguint<10>(zext_ln203_387_fu_41102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2888_fu_61592_p2() {
    add_ln703_2888_fu_61592_p2 = (!zext_ln708_670_fu_40050_p1.read().is_01() || !sext_ln708_216_fu_41086_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_670_fu_40050_p1.read()) + sc_bigint<11>(sext_ln708_216_fu_41086_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2889_fu_61602_p2() {
    add_ln703_2889_fu_61602_p2 = (!sext_ln703_1680_fu_61598_p1.read().is_01() || !zext_ln703_590_fu_61588_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1680_fu_61598_p1.read()) + sc_biguint<12>(zext_ln703_590_fu_61588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_288_fu_45562_p2() {
    add_ln703_288_fu_45562_p2 = (!zext_ln708_672_fu_26721_p1.read().is_01() || !zext_ln708_676_fu_26756_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_672_fu_26721_p1.read()) + sc_biguint<11>(zext_ln708_676_fu_26756_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2890_fu_61612_p2() {
    add_ln703_2890_fu_61612_p2 = (!sext_ln703_1681_fu_61608_p1.read().is_01() || !zext_ln703_589_fu_61578_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1681_fu_61608_p1.read()) + sc_biguint<13>(zext_ln703_589_fu_61578_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2891_fu_61622_p2() {
    add_ln703_2891_fu_61622_p2 = (!sext_ln703_1682_fu_61618_p1.read().is_01() || !add_ln703_2884_fu_61557_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1682_fu_61618_p1.read()) + sc_biguint<15>(add_ln703_2884_fu_61557_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2892_fu_61628_p2() {
    add_ln703_2892_fu_61628_p2 = (!add_ln703_2891_fu_61622_p2.read().is_01() || !zext_ln203_389_fu_41224_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2891_fu_61622_p2.read()) + sc_biguint<15>(zext_ln203_389_fu_41224_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2893_fu_61634_p2() {
    add_ln703_2893_fu_61634_p2 = (!zext_ln203_388_fu_41196_p1.read().is_01() || !sext_ln203_583_fu_39843_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_388_fu_41196_p1.read()) + sc_bigint<9>(sext_ln203_583_fu_39843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2894_fu_61644_p2() {
    add_ln703_2894_fu_61644_p2 = (!sext_ln703_1683_fu_61640_p1.read().is_01() || !zext_ln708_925_fu_40834_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1683_fu_61640_p1.read()) + sc_biguint<11>(zext_ln708_925_fu_40834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2896_fu_24228_p2() {
    add_ln703_2896_fu_24228_p2 = (!sext_ln203_618_fu_14568_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_618_fu_14568_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2897_fu_24238_p2() {
    add_ln703_2897_fu_24238_p2 = (!sext_ln703_386_fu_24234_p1.read().is_01() || !sext_ln203_619_fu_14588_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_386_fu_24234_p1.read()) + sc_bigint<13>(sext_ln203_619_fu_14588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2898_fu_24244_p2() {
    add_ln703_2898_fu_24244_p2 = (!zext_ln1118_1078_fu_14620_p1.read().is_01() || !sext_ln708_220_fu_14616_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_1078_fu_14620_p1.read()) + sc_bigint<11>(sext_ln708_220_fu_14616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2899_fu_24254_p2() {
    add_ln703_2899_fu_24254_p2 = (!sext_ln703_1686_fu_24250_p1.read().is_01() || !add_ln703_2897_fu_24238_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1686_fu_24250_p1.read()) + sc_biguint<13>(add_ln703_2897_fu_24238_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_289_fu_45572_p2() {
    add_ln703_289_fu_45572_p2 = (!zext_ln708_724_fu_28449_p1.read().is_01() || !zext_ln708_728_fu_28476_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_724_fu_28449_p1.read()) + sc_biguint<11>(zext_ln708_728_fu_28476_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_28_fu_43943_p2() {
    add_ln703_28_fu_43943_p2 = (!zext_ln203_8_fu_26565_p1.read().is_01() || !sext_ln203_3_fu_26597_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_8_fu_26565_p1.read()) + sc_bigint<11>(sext_ln203_3_fu_26597_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2900_fu_61664_p2() {
    add_ln703_2900_fu_61664_p2 = (!add_ln703_2899_reg_69936.read().is_01() || !sext_ln708_222_fu_41247_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2899_reg_69936.read()) + sc_bigint<13>(sext_ln708_222_fu_41247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2901_fu_61669_p2() {
    add_ln703_2901_fu_61669_p2 = (!zext_ln1118_1079_reg_68730.read().is_01() || !sext_ln203_620_fu_41228_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1079_reg_68730.read()) + sc_bigint<12>(sext_ln203_620_fu_41228_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2902_fu_61678_p2() {
    add_ln703_2902_fu_61678_p2 = (!sext_ln703_1687_fu_61674_p1.read().is_01() || !add_ln703_2900_fu_61664_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1687_fu_61674_p1.read()) + sc_biguint<13>(add_ln703_2900_fu_61664_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2903_fu_24260_p2() {
    add_ln703_2903_fu_24260_p2 = (!zext_ln708_705_fu_14640_p1.read().is_01() || !sext_ln708_221_fu_14692_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_705_fu_14640_p1.read()) + sc_bigint<11>(sext_ln708_221_fu_14692_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2904_fu_24270_p2() {
    add_ln703_2904_fu_24270_p2 = (!sext_ln1118_430_fu_14700_p1.read().is_01() || !zext_ln203_390_fu_14696_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_430_fu_14700_p1.read()) + sc_biguint<11>(zext_ln203_390_fu_14696_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2905_fu_24280_p2() {
    add_ln703_2905_fu_24280_p2 = (!sext_ln703_1690_fu_24276_p1.read().is_01() || !sext_ln703_1689_fu_24266_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1690_fu_24276_p1.read()) + sc_bigint<12>(sext_ln703_1689_fu_24266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2906_fu_61691_p2() {
    add_ln703_2906_fu_61691_p2 = (!sext_ln703_1691_fu_61688_p1.read().is_01() || !sext_ln703_1688_fu_61684_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1691_fu_61688_p1.read()) + sc_bigint<14>(sext_ln703_1688_fu_61684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2907_fu_61697_p2() {
    add_ln703_2907_fu_61697_p2 = (!add_ln703_2906_fu_61691_p2.read().is_01() || !sext_ln203_623_fu_41311_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2906_fu_61691_p2.read()) + sc_bigint<14>(sext_ln203_623_fu_41311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2908_fu_61703_p2() {
    add_ln703_2908_fu_61703_p2 = (!zext_ln708_929_fu_41062_p1.read().is_01() || !zext_ln708_906_fu_39485_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_929_fu_41062_p1.read()) + sc_biguint<11>(zext_ln708_906_fu_39485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2909_fu_61713_p2() {
    add_ln703_2909_fu_61713_p2 = (!zext_ln703_591_fu_61709_p1.read().is_01() || !add_ln703_2907_fu_61697_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_591_fu_61709_p1.read()) + sc_biguint<14>(add_ln703_2907_fu_61697_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_290_fu_45582_p2() {
    add_ln703_290_fu_45582_p2 = (!zext_ln703_71_fu_45578_p1.read().is_01() || !zext_ln703_70_fu_45568_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_71_fu_45578_p1.read()) + sc_biguint<12>(zext_ln703_70_fu_45568_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2910_fu_61723_p2() {
    add_ln703_2910_fu_61723_p2 = (!zext_ln203_391_fu_41315_p1.read().is_01() || !sext_ln203_621_fu_41269_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_391_fu_41315_p1.read()) + sc_bigint<12>(sext_ln203_621_fu_41269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2911_fu_61729_p2() {
    add_ln703_2911_fu_61729_p2 = (!zext_ln708_709_fu_41319_p1.read().is_01() || !zext_ln1118_1081_reg_68746.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_709_fu_41319_p1.read()) + sc_biguint<10>(zext_ln1118_1081_reg_68746.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2912_fu_61738_p2() {
    add_ln703_2912_fu_61738_p2 = (!zext_ln703_592_fu_61734_p1.read().is_01() || !sext_ln1116_64_fu_39449_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_592_fu_61734_p1.read()) + sc_bigint<11>(sext_ln1116_64_fu_39449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2913_fu_61748_p2() {
    add_ln703_2913_fu_61748_p2 = (!sext_ln703_1693_fu_61744_p1.read().is_01() || !add_ln703_2910_fu_61723_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1693_fu_61744_p1.read()) + sc_biguint<12>(add_ln703_2910_fu_61723_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2914_fu_61758_p2() {
    add_ln703_2914_fu_61758_p2 = (!sext_ln703_1694_fu_61754_p1.read().is_01() || !sext_ln703_1692_fu_61719_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1694_fu_61754_p1.read()) + sc_bigint<15>(sext_ln703_1692_fu_61719_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2916_fu_61764_p2() {
    add_ln703_2916_fu_61764_p2 = (!zext_ln708_652_fu_39496_p1.read().is_01() || !zext_ln1118_1001_fu_39535_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_652_fu_39496_p1.read()) + sc_biguint<9>(zext_ln1118_1001_fu_39535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2917_fu_61774_p2() {
    add_ln703_2917_fu_61774_p2 = (!zext_ln703_594_fu_61770_p1.read().is_01() || !zext_ln703_581_fu_61470_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_594_fu_61770_p1.read()) + sc_biguint<10>(zext_ln703_581_fu_61470_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2918_fu_61784_p2() {
    add_ln703_2918_fu_61784_p2 = (!zext_ln708_934_fu_41283_p1.read().is_01() || !zext_ln708_924_fu_40744_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_934_fu_41283_p1.read()) + sc_biguint<8>(zext_ln708_924_fu_40744_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2919_fu_61794_p2() {
    add_ln703_2919_fu_61794_p2 = (!zext_ln708_916_fu_40110_p1.read().is_01() || !zext_ln708_935_fu_41333_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_916_fu_40110_p1.read()) + sc_biguint<8>(zext_ln708_935_fu_41333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_291_fu_45592_p2() {
    add_ln703_291_fu_45592_p2 = (!zext_ln703_72_fu_45588_p1.read().is_01() || !add_ln703_287_fu_45556_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_72_fu_45588_p1.read()) + sc_biguint<16>(add_ln703_287_fu_45556_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2920_fu_61804_p2() {
    add_ln703_2920_fu_61804_p2 = (!zext_ln703_597_fu_61800_p1.read().is_01() || !zext_ln1118_740_fu_39707_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_597_fu_61800_p1.read()) + sc_biguint<9>(zext_ln1118_740_fu_39707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2921_fu_61814_p2() {
    add_ln703_2921_fu_61814_p2 = (!zext_ln703_598_fu_61810_p1.read().is_01() || !zext_ln703_596_fu_61790_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_598_fu_61810_p1.read()) + sc_biguint<10>(zext_ln703_596_fu_61790_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2922_fu_61824_p2() {
    add_ln703_2922_fu_61824_p2 = (!zext_ln703_599_fu_61820_p1.read().is_01() || !zext_ln703_595_fu_61780_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_599_fu_61820_p1.read()) + sc_biguint<11>(zext_ln703_595_fu_61780_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2924_fu_24286_p2() {
    add_ln703_2924_fu_24286_p2 = (!sext_ln203_590_fu_13286_p1.read().is_01() || !ap_const_lv12_D80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_590_fu_13286_p1.read()) + sc_bigint<12>(ap_const_lv12_D80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2925_fu_24296_p2() {
    add_ln703_2925_fu_24296_p2 = (!sext_ln203_586_fu_13094_p1.read().is_01() || !sext_ln1118_393_fu_13338_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_586_fu_13094_p1.read()) + sc_bigint<12>(sext_ln1118_393_fu_13338_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2926_fu_24306_p2() {
    add_ln703_2926_fu_24306_p2 = (!sext_ln703_1695_fu_24302_p1.read().is_01() || !sext_ln703_390_fu_24292_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1695_fu_24302_p1.read()) + sc_bigint<13>(sext_ln703_390_fu_24292_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2927_fu_24312_p2() {
    add_ln703_2927_fu_24312_p2 = (!add_ln703_2926_fu_24306_p2.read().is_01() || !sext_ln203_587_fu_13168_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2926_fu_24306_p2.read()) + sc_bigint<13>(sext_ln203_587_fu_13168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2928_fu_24322_p2() {
    add_ln703_2928_fu_24322_p2 = (!sext_ln708_223_fu_14734_p1.read().is_01() || !zext_ln708_712_fu_14778_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_223_fu_14734_p1.read()) + sc_biguint<12>(zext_ln708_712_fu_14778_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2929_fu_24332_p2() {
    add_ln703_2929_fu_24332_p2 = (!sext_ln703_1697_fu_24328_p1.read().is_01() || !sext_ln703_1696_fu_24318_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1697_fu_24328_p1.read()) + sc_bigint<14>(sext_ln703_1696_fu_24318_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_292_fu_17094_p2() {
    add_ln703_292_fu_17094_p2 = (!sext_ln203_61_fu_3592_p1.read().is_01() || !sext_ln203_62_fu_3606_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_61_fu_3592_p1.read()) + sc_bigint<11>(sext_ln203_62_fu_3606_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2930_fu_24338_p2() {
    add_ln703_2930_fu_24338_p2 = (!zext_ln708_937_fu_14802_p1.read().is_01() || !zext_ln708_938_fu_14838_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_937_fu_14802_p1.read()) + sc_biguint<11>(zext_ln708_938_fu_14838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2931_fu_24348_p2() {
    add_ln703_2931_fu_24348_p2 = (!zext_ln708_936_fu_14754_p1.read().is_01() || !zext_ln1118_1081_fu_14714_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_936_fu_14754_p1.read()) + sc_biguint<10>(zext_ln1118_1081_fu_14714_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2932_fu_24358_p2() {
    add_ln703_2932_fu_24358_p2 = (!zext_ln703_602_fu_24354_p1.read().is_01() || !sext_ln1116_68_fu_14852_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_602_fu_24354_p1.read()) + sc_bigint<12>(sext_ln1116_68_fu_14852_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2933_fu_24368_p2() {
    add_ln703_2933_fu_24368_p2 = (!sext_ln703_1698_fu_24364_p1.read().is_01() || !zext_ln703_601_fu_24344_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1698_fu_24364_p1.read()) + sc_biguint<13>(zext_ln703_601_fu_24344_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2934_fu_24378_p2() {
    add_ln703_2934_fu_24378_p2 = (!sext_ln703_1699_fu_24374_p1.read().is_01() || !add_ln703_2929_fu_24332_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1699_fu_24374_p1.read()) + sc_biguint<14>(add_ln703_2929_fu_24332_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2935_fu_61847_p2() {
    add_ln703_2935_fu_61847_p2 = (!sext_ln203_591_fu_40172_p1.read().is_01() || !sext_ln203_597_fu_40564_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_591_fu_40172_p1.read()) + sc_bigint<12>(sext_ln203_597_fu_40564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2936_fu_61857_p2() {
    add_ln703_2936_fu_61857_p2 = (!sext_ln703_1700_fu_61853_p1.read().is_01() || !sext_ln703_392_fu_61844_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1700_fu_61853_p1.read()) + sc_bigint<15>(sext_ln703_392_fu_61844_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2937_fu_61863_p2() {
    add_ln703_2937_fu_61863_p2 = (!zext_ln708_939_fu_41358_p1.read().is_01() || !zext_ln708_920_fu_40528_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_939_fu_41358_p1.read()) + sc_biguint<11>(zext_ln708_920_fu_40528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2938_fu_61873_p2() {
    add_ln703_2938_fu_61873_p2 = (!sext_ln203_624_fu_41389_p1.read().is_01() || !zext_ln203_386_fu_41098_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_624_fu_41389_p1.read()) + sc_biguint<11>(zext_ln203_386_fu_41098_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2939_fu_61883_p2() {
    add_ln703_2939_fu_61883_p2 = (!sext_ln703_1701_fu_61879_p1.read().is_01() || !zext_ln703_603_fu_61869_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1701_fu_61879_p1.read()) + sc_biguint<13>(zext_ln703_603_fu_61869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_293_fu_45601_p2() {
    add_ln703_293_fu_45601_p2 = (!sext_ln703_242_fu_45598_p1.read().is_01() || !zext_ln203_60_fu_28500_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_242_fu_45598_p1.read()) + sc_biguint<12>(zext_ln203_60_fu_28500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2940_fu_61893_p2() {
    add_ln703_2940_fu_61893_p2 = (!sext_ln703_1702_fu_61889_p1.read().is_01() || !add_ln703_2936_fu_61857_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1702_fu_61889_p1.read()) + sc_biguint<15>(add_ln703_2936_fu_61857_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2941_fu_61899_p2() {
    add_ln703_2941_fu_61899_p2 = (!sext_ln203_598_fu_40584_p1.read().is_01() || !zext_ln203_370_fu_39985_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_598_fu_40584_p1.read()) + sc_biguint<9>(zext_ln203_370_fu_39985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2942_fu_61909_p2() {
    add_ln703_2942_fu_61909_p2 = (!sext_ln703_1703_fu_61905_p1.read().is_01() || !sext_ln708_203_fu_40034_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1703_fu_61905_p1.read()) + sc_bigint<10>(sext_ln708_203_fu_40034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2943_fu_61919_p2() {
    add_ln703_2943_fu_61919_p2 = (!zext_ln1116_258_fu_41362_p1.read().is_01() || !zext_ln1118_1020_fu_39988_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_258_fu_41362_p1.read()) + sc_biguint<9>(zext_ln1118_1020_fu_39988_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2944_fu_61929_p2() {
    add_ln703_2944_fu_61929_p2 = (!zext_ln708_652_fu_39496_p1.read().is_01() || !zext_ln708_655_fu_39755_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_652_fu_39496_p1.read()) + sc_biguint<9>(zext_ln708_655_fu_39755_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2945_fu_61939_p2() {
    add_ln703_2945_fu_61939_p2 = (!zext_ln703_605_fu_61935_p1.read().is_01() || !zext_ln703_604_fu_61925_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_605_fu_61935_p1.read()) + sc_biguint<10>(zext_ln703_604_fu_61925_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2946_fu_61949_p2() {
    add_ln703_2946_fu_61949_p2 = (!zext_ln703_606_fu_61945_p1.read().is_01() || !sext_ln703_1704_fu_61915_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_606_fu_61945_p1.read()) + sc_bigint<12>(sext_ln703_1704_fu_61915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2947_fu_61959_p2() {
    add_ln703_2947_fu_61959_p2 = (!sext_ln703_1705_fu_61955_p1.read().is_01() || !add_ln703_2940_fu_61893_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1705_fu_61955_p1.read()) + sc_biguint<15>(add_ln703_2940_fu_61893_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2948_fu_61965_p2() {
    add_ln703_2948_fu_61965_p2 = (!sext_ln203_625_fu_41409_p1.read().is_01() || !zext_ln203_392_fu_41413_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_625_fu_41409_p1.read()) + sc_biguint<10>(zext_ln203_392_fu_41413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_294_fu_45611_p2() {
    add_ln703_294_fu_45611_p2 = (!sext_ln203_65_fu_28424_p1.read().is_01() || !sext_ln203_66_fu_28430_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_65_fu_28424_p1.read()) + sc_bigint<11>(sext_ln203_66_fu_28430_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2950_fu_24396_p2() {
    add_ln703_2950_fu_24396_p2 = (!zext_ln703_3_fu_24392_p1.read().is_01() || !sext_ln203_626_fu_14884_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_3_fu_24392_p1.read()) + sc_bigint<12>(sext_ln203_626_fu_14884_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2951_fu_24402_p2() {
    add_ln703_2951_fu_24402_p2 = (!add_ln703_2950_fu_24396_p2.read().is_01() || !sext_ln203_627_fu_14888_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2950_fu_24396_p2.read()) + sc_bigint<12>(sext_ln203_627_fu_14888_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2952_fu_24412_p2() {
    add_ln703_2952_fu_24412_p2 = (!zext_ln1118_984_fu_12640_p1.read().is_01() || !zext_ln1116_223_fu_12616_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_984_fu_12640_p1.read()) + sc_biguint<10>(zext_ln1116_223_fu_12616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2953_fu_24422_p2() {
    add_ln703_2953_fu_24422_p2 = (!zext_ln703_607_fu_24418_p1.read().is_01() || !sext_ln703_1708_fu_24408_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_607_fu_24418_p1.read()) + sc_bigint<13>(sext_ln703_1708_fu_24408_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2954_fu_24428_p2() {
    add_ln703_2954_fu_24428_p2 = (!sext_ln203_628_fu_14892_p1.read().is_01() || !sext_ln1116_60_fu_12728_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_628_fu_14892_p1.read()) + sc_bigint<12>(sext_ln1116_60_fu_12728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2955_fu_24438_p2() {
    add_ln703_2955_fu_24438_p2 = (!sext_ln703_1709_fu_24434_p1.read().is_01() || !add_ln703_2953_fu_24422_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1709_fu_24434_p1.read()) + sc_biguint<13>(add_ln703_2953_fu_24422_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2956_fu_61988_p2() {
    add_ln703_2956_fu_61988_p2 = (!sext_ln1118_415_reg_68654.read().is_01() || !zext_ln708_635_reg_68456.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_415_reg_68654.read()) + sc_biguint<10>(zext_ln708_635_reg_68456.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2957_fu_61996_p2() {
    add_ln703_2957_fu_61996_p2 = (!sext_ln703_1711_fu_61992_p1.read().is_01() || !zext_ln1118_1030_reg_68572.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1711_fu_61992_p1.read()) + sc_biguint<11>(zext_ln1118_1030_reg_68572.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2958_fu_62005_p2() {
    add_ln703_2958_fu_62005_p2 = (!sext_ln703_1712_fu_62001_p1.read().is_01() || !sext_ln703_1710_fu_61985_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1712_fu_62001_p1.read()) + sc_bigint<14>(sext_ln703_1710_fu_61985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2959_fu_62011_p2() {
    add_ln703_2959_fu_62011_p2 = (!sext_ln1118_432_fu_41439_p1.read().is_01() || !sext_ln203_591_fu_40172_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_432_fu_41439_p1.read()) + sc_bigint<12>(sext_ln203_591_fu_40172_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_295_fu_45621_p2() {
    add_ln703_295_fu_45621_p2 = (!sext_ln1118_43_fu_27892_p1.read().is_01() || !zext_ln708_76_reg_67342.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_43_fu_27892_p1.read()) + sc_biguint<11>(zext_ln708_76_reg_67342.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2960_fu_62021_p2() {
    add_ln703_2960_fu_62021_p2 = (!sext_ln703_1713_fu_62017_p1.read().is_01() || !add_ln703_2958_fu_62005_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1713_fu_62017_p1.read()) + sc_biguint<14>(add_ln703_2958_fu_62005_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2961_fu_62031_p2() {
    add_ln703_2961_fu_62031_p2 = (!zext_ln708_927_fu_40924_p1.read().is_01() || !zext_ln708_942_fu_41486_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_927_fu_40924_p1.read()) + sc_biguint<11>(zext_ln708_942_fu_41486_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2962_fu_62041_p2() {
    add_ln703_2962_fu_62041_p2 = (!zext_ln703_608_fu_62037_p1.read().is_01() || !sext_ln1118_433_fu_41463_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_608_fu_62037_p1.read()) + sc_bigint<13>(sext_ln1118_433_fu_41463_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2963_fu_62051_p2() {
    add_ln703_2963_fu_62051_p2 = (!sext_ln703_1715_fu_62047_p1.read().is_01() || !sext_ln703_1714_fu_62027_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1715_fu_62047_p1.read()) + sc_bigint<15>(sext_ln703_1714_fu_62027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2964_fu_62057_p2() {
    add_ln703_2964_fu_62057_p2 = (!sext_ln203_630_fu_41467_p1.read().is_01() || !sext_ln1118_434_fu_41490_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_630_fu_41467_p1.read()) + sc_bigint<11>(sext_ln1118_434_fu_41490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2965_fu_62067_p2() {
    add_ln703_2965_fu_62067_p2 = (!sext_ln703_1716_fu_62063_p1.read().is_01() || !sext_ln203_629_fu_41417_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1716_fu_62063_p1.read()) + sc_bigint<12>(sext_ln203_629_fu_41417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2966_fu_62077_p2() {
    add_ln703_2966_fu_62077_p2 = (!zext_ln1116_233_reg_68479.read().is_01() || !zext_ln203_370_fu_39985_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_233_reg_68479.read()) + sc_biguint<9>(zext_ln203_370_fu_39985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2967_fu_62086_p2() {
    add_ln703_2967_fu_62086_p2 = (!zext_ln703_609_fu_62082_p1.read().is_01() || !zext_ln708_941_reg_68778.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_609_fu_62082_p1.read()) + sc_biguint<10>(zext_ln708_941_reg_68778.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2968_fu_62095_p2() {
    add_ln703_2968_fu_62095_p2 = (!zext_ln703_610_fu_62091_p1.read().is_01() || !sext_ln703_1717_fu_62073_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_610_fu_62091_p1.read()) + sc_bigint<13>(sext_ln703_1717_fu_62073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2969_fu_62105_p2() {
    add_ln703_2969_fu_62105_p2 = (!sext_ln703_1718_fu_62101_p1.read().is_01() || !add_ln703_2963_fu_62051_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1718_fu_62101_p1.read()) + sc_biguint<15>(add_ln703_2963_fu_62051_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_296_fu_45630_p2() {
    add_ln703_296_fu_45630_p2 = (!sext_ln703_250_fu_45626_p1.read().is_01() || !sext_ln703_249_fu_45617_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_250_fu_45626_p1.read()) + sc_bigint<12>(sext_ln703_249_fu_45617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2970_fu_62111_p2() {
    add_ln703_2970_fu_62111_p2 = (!add_ln703_2969_fu_62105_p2.read().is_01() || !sext_ln203_631_fu_41523_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2969_fu_62105_p2.read()) + sc_bigint<15>(sext_ln203_631_fu_41523_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2971_fu_62117_p2() {
    add_ln703_2971_fu_62117_p2 = (!sext_ln203_635_fu_41650_p1.read().is_01() || !sext_ln203_594_fu_40336_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_635_fu_41650_p1.read()) + sc_bigint<12>(sext_ln203_594_fu_40336_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2972_fu_62127_p2() {
    add_ln703_2972_fu_62127_p2 = (!sext_ln703_1719_fu_62123_p1.read().is_01() || !sext_ln203_633_fu_41586_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1719_fu_62123_p1.read()) + sc_bigint<13>(sext_ln203_633_fu_41586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2973_fu_62137_p2() {
    add_ln703_2973_fu_62137_p2 = (!sext_ln703_1720_fu_62133_p1.read().is_01() || !add_ln703_2970_fu_62111_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1720_fu_62133_p1.read()) + sc_biguint<15>(add_ln703_2970_fu_62111_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2974_fu_62147_p2() {
    add_ln703_2974_fu_62147_p2 = (!zext_ln708_920_fu_40528_p1.read().is_01() || !zext_ln708_943_fu_41626_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_920_fu_40528_p1.read()) + sc_biguint<11>(zext_ln708_943_fu_41626_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2975_fu_62157_p2() {
    add_ln703_2975_fu_62157_p2 = (!zext_ln703_611_fu_62153_p1.read().is_01() || !sext_ln203_636_fu_41674_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_611_fu_62153_p1.read()) + sc_bigint<13>(sext_ln203_636_fu_41674_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2976_fu_62163_p2() {
    add_ln703_2976_fu_62163_p2 = (!sext_ln1116_65_fu_39739_p1.read().is_01() || !sext_ln203_634_fu_41606_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_65_fu_39739_p1.read()) + sc_bigint<10>(sext_ln203_634_fu_41606_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2977_fu_62173_p2() {
    add_ln703_2977_fu_62173_p2 = (!sext_ln703_1722_fu_62169_p1.read().is_01() || !sext_ln203_632_fu_41554_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1722_fu_62169_p1.read()) + sc_bigint<11>(sext_ln203_632_fu_41554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2978_fu_62183_p2() {
    add_ln703_2978_fu_62183_p2 = (!sext_ln703_1723_fu_62179_p1.read().is_01() || !add_ln703_2975_fu_62157_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1723_fu_62179_p1.read()) + sc_biguint<13>(add_ln703_2975_fu_62157_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_297_fu_45640_p2() {
    add_ln703_297_fu_45640_p2 = (!sext_ln703_251_fu_45636_p1.read().is_01() || !sext_ln703_244_fu_45607_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_251_fu_45636_p1.read()) + sc_bigint<13>(sext_ln703_244_fu_45607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2980_fu_62206_p2() {
    add_ln703_2980_fu_62206_p2 = (!zext_ln708_937_reg_68756.read().is_01() || !zext_ln708_912_fu_39912_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_937_reg_68756.read()) + sc_biguint<11>(zext_ln708_912_fu_39912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2981_fu_62215_p2() {
    add_ln703_2981_fu_62215_p2 = (!zext_ln703_612_fu_62211_p1.read().is_01() || !or_ln703_20_fu_62199_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_612_fu_62211_p1.read()) + sc_biguint<16>(or_ln703_20_fu_62199_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2982_fu_62221_p2() {
    add_ln703_2982_fu_62221_p2 = (!zext_ln708_913_fu_39975_p1.read().is_01() || !zext_ln708_915_fu_40010_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_913_fu_39975_p1.read()) + sc_biguint<11>(zext_ln708_915_fu_40010_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2983_fu_62231_p2() {
    add_ln703_2983_fu_62231_p2 = (!zext_ln708_944_fu_41703_p1.read().is_01() || !zext_ln708_945_fu_41730_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_944_fu_41703_p1.read()) + sc_biguint<11>(zext_ln708_945_fu_41730_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2984_fu_62241_p2() {
    add_ln703_2984_fu_62241_p2 = (!zext_ln703_614_fu_62237_p1.read().is_01() || !zext_ln703_613_fu_62227_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_614_fu_62237_p1.read()) + sc_biguint<12>(zext_ln703_613_fu_62227_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2985_fu_62251_p2() {
    add_ln703_2985_fu_62251_p2 = (!zext_ln703_615_fu_62247_p1.read().is_01() || !add_ln703_2981_fu_62215_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_615_fu_62247_p1.read()) + sc_biguint<16>(add_ln703_2981_fu_62215_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2986_fu_24444_p2() {
    add_ln703_2986_fu_24444_p2 = (!sext_ln203_637_fu_14962_p1.read().is_01() || !sext_ln203_638_fu_14976_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_637_fu_14962_p1.read()) + sc_bigint<11>(sext_ln203_638_fu_14976_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2987_fu_62260_p2() {
    add_ln703_2987_fu_62260_p2 = (!sext_ln703_1725_fu_62257_p1.read().is_01() || !zext_ln203_395_fu_41754_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1725_fu_62257_p1.read()) + sc_biguint<12>(zext_ln203_395_fu_41754_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2988_fu_62270_p2() {
    add_ln703_2988_fu_62270_p2 = (!sext_ln203_640_fu_41678_p1.read().is_01() || !sext_ln203_641_fu_41684_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_640_fu_41678_p1.read()) + sc_bigint<11>(sext_ln203_641_fu_41684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2989_fu_62280_p2() {
    add_ln703_2989_fu_62280_p2 = (!sext_ln1118_427_fu_41146_p1.read().is_01() || !zext_ln708_705_reg_68725.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_427_fu_41146_p1.read()) + sc_biguint<11>(zext_ln708_705_reg_68725.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_298_fu_45650_p2() {
    add_ln703_298_fu_45650_p2 = (!sext_ln703_252_fu_45646_p1.read().is_01() || !add_ln703_291_fu_45592_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_252_fu_45646_p1.read()) + sc_biguint<16>(add_ln703_291_fu_45592_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2990_fu_62289_p2() {
    add_ln703_2990_fu_62289_p2 = (!sext_ln703_1728_fu_62285_p1.read().is_01() || !sext_ln703_1727_fu_62276_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1728_fu_62285_p1.read()) + sc_bigint<12>(sext_ln703_1727_fu_62276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2991_fu_62299_p2() {
    add_ln703_2991_fu_62299_p2 = (!sext_ln703_1729_fu_62295_p1.read().is_01() || !sext_ln703_1726_fu_62266_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1729_fu_62295_p1.read()) + sc_bigint<13>(sext_ln703_1726_fu_62266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2992_fu_62309_p2() {
    add_ln703_2992_fu_62309_p2 = (!sext_ln703_1730_fu_62305_p1.read().is_01() || !add_ln703_2985_fu_62251_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1730_fu_62305_p1.read()) + sc_biguint<16>(add_ln703_2985_fu_62251_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2993_fu_62315_p2() {
    add_ln703_2993_fu_62315_p2 = (!sext_ln1116_63_fu_39445_p1.read().is_01() || !sext_ln1116_65_fu_39739_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_63_fu_39445_p1.read()) + sc_bigint<10>(sext_ln1116_65_fu_39739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2994_fu_62325_p2() {
    add_ln703_2994_fu_62325_p2 = (!sext_ln703_1731_fu_62321_p1.read().is_01() || !sext_ln203_607_fu_40861_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1731_fu_62321_p1.read()) + sc_bigint<11>(sext_ln203_607_fu_40861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2995_fu_24450_p2() {
    add_ln703_2995_fu_24450_p2 = (!zext_ln203_390_fu_14696_p1.read().is_01() || !sext_ln708_220_fu_14616_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_390_fu_14696_p1.read()) + sc_bigint<11>(sext_ln708_220_fu_14616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2996_fu_24456_p2() {
    add_ln703_2996_fu_24456_p2 = (!sext_ln203_639_fu_14980_p1.read().is_01() || !zext_ln203_380_fu_14242_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_639_fu_14980_p1.read()) + sc_biguint<9>(zext_ln203_380_fu_14242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2997_fu_24466_p2() {
    add_ln703_2997_fu_24466_p2 = (!sext_ln703_1733_fu_24462_p1.read().is_01() || !add_ln703_2995_fu_24450_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1733_fu_24462_p1.read()) + sc_biguint<11>(add_ln703_2995_fu_24450_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2998_fu_62338_p2() {
    add_ln703_2998_fu_62338_p2 = (!sext_ln703_1734_fu_62335_p1.read().is_01() || !sext_ln703_1732_fu_62331_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1734_fu_62335_p1.read()) + sc_bigint<12>(sext_ln703_1732_fu_62331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2999_fu_62348_p2() {
    add_ln703_2999_fu_62348_p2 = (!zext_ln203_394_fu_41681_p1.read().is_01() || !zext_ln708_685_fu_40668_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_394_fu_41681_p1.read()) + sc_biguint<9>(zext_ln708_685_fu_40668_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_299_fu_45656_p2() {
    add_ln703_299_fu_45656_p2 = (!sext_ln1116_3_fu_26191_p1.read().is_01() || !sext_ln1116_5_fu_26485_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_3_fu_26191_p1.read()) + sc_bigint<10>(sext_ln1116_5_fu_26485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2_fu_16308_p2() {
    add_ln703_2_fu_16308_p2 = (!zext_ln703_4_fu_16304_p1.read().is_01() || !add_ln703_fu_16292_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_4_fu_16304_p1.read()) + sc_bigint<12>(add_ln703_fu_16292_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3000_fu_62358_p2() {
    add_ln703_3000_fu_62358_p2 = (!zext_ln708_650_fu_39405_p1.read().is_01() || !zext_ln1116_241_fu_39528_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_650_fu_39405_p1.read()) + sc_biguint<9>(zext_ln1116_241_fu_39528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3001_fu_62368_p2() {
    add_ln703_3001_fu_62368_p2 = (!zext_ln703_617_fu_62364_p1.read().is_01() || !zext_ln703_616_fu_62354_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_617_fu_62364_p1.read()) + sc_biguint<10>(zext_ln703_616_fu_62354_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3002_fu_62378_p2() {
    add_ln703_3002_fu_62378_p2 = (!zext_ln1118_1001_fu_39535_p1.read().is_01() || !zext_ln1118_1009_fu_39671_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1001_fu_39535_p1.read()) + sc_biguint<9>(zext_ln1118_1009_fu_39671_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3003_fu_62388_p2() {
    add_ln703_3003_fu_62388_p2 = (!zext_ln203_388_fu_41196_p1.read().is_01() || !zext_ln1116_246_fu_39799_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_388_fu_41196_p1.read()) + sc_biguint<9>(zext_ln1116_246_fu_39799_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3004_fu_62398_p2() {
    add_ln703_3004_fu_62398_p2 = (!zext_ln703_620_fu_62394_p1.read().is_01() || !zext_ln703_619_fu_62384_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_620_fu_62394_p1.read()) + sc_biguint<10>(zext_ln703_619_fu_62384_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3005_fu_62408_p2() {
    add_ln703_3005_fu_62408_p2 = (!zext_ln703_621_fu_62404_p1.read().is_01() || !zext_ln703_618_fu_62374_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_621_fu_62404_p1.read()) + sc_biguint<11>(zext_ln703_618_fu_62374_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3006_fu_62418_p2() {
    add_ln703_3006_fu_62418_p2 = (!zext_ln703_622_fu_62414_p1.read().is_01() || !sext_ln703_1735_fu_62344_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_622_fu_62414_p1.read()) + sc_bigint<13>(sext_ln703_1735_fu_62344_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3008_fu_24472_p2() {
    add_ln703_3008_fu_24472_p2 = (!zext_ln708_679_fu_13968_p1.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_679_fu_13968_p1.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3009_fu_24482_p2() {
    add_ln703_3009_fu_24482_p2 = (!zext_ln708_946_fu_15044_p1.read().is_01() || !sext_ln703_398_fu_24478_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_946_fu_15044_p1.read()) + sc_bigint<11>(sext_ln703_398_fu_24478_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_300_fu_45666_p2() {
    add_ln703_300_fu_45666_p2 = (!sext_ln703_253_fu_45662_p1.read().is_01() || !sext_ln203_27_fu_27607_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_253_fu_45662_p1.read()) + sc_bigint<11>(sext_ln203_27_fu_27607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3010_fu_24488_p2() {
    add_ln703_3010_fu_24488_p2 = (!add_ln703_3009_fu_24482_p2.read().is_01() || !sext_ln708_224_fu_15048_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3009_fu_24482_p2.read()) + sc_bigint<11>(sext_ln708_224_fu_15048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3011_fu_24498_p2() {
    add_ln703_3011_fu_24498_p2 = (!sext_ln703_1737_fu_24494_p1.read().is_01() || !zext_ln203_396_fu_15072_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1737_fu_24494_p1.read()) + sc_biguint<12>(zext_ln203_396_fu_15072_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3012_fu_24508_p2() {
    add_ln703_3012_fu_24508_p2 = (!sext_ln708_223_fu_14734_p1.read().is_01() || !zext_ln1116_249_fu_14020_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_223_fu_14734_p1.read()) + sc_biguint<12>(zext_ln1116_249_fu_14020_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3013_fu_24518_p2() {
    add_ln703_3013_fu_24518_p2 = (!sext_ln703_1739_fu_24514_p1.read().is_01() || !sext_ln703_1738_fu_24504_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1739_fu_24514_p1.read()) + sc_bigint<13>(sext_ln703_1738_fu_24504_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3014_fu_24528_p2() {
    add_ln703_3014_fu_24528_p2 = (!sext_ln703_401_fu_24524_p1.read().is_01() || !sext_ln203_642_fu_15092_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_401_fu_24524_p1.read()) + sc_bigint<14>(sext_ln203_642_fu_15092_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3015_fu_24534_p2() {
    add_ln703_3015_fu_24534_p2 = (!zext_ln708_903_fu_12812_p1.read().is_01() || !zext_ln708_947_fu_15112_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_903_fu_12812_p1.read()) + sc_biguint<11>(zext_ln708_947_fu_15112_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3016_fu_62437_p2() {
    add_ln703_3016_fu_62437_p2 = (!zext_ln703_623_fu_62434_p1.read().is_01() || !add_ln703_3014_reg_69966.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_623_fu_62434_p1.read()) + sc_biguint<14>(add_ln703_3014_reg_69966.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3017_fu_62442_p2() {
    add_ln703_3017_fu_62442_p2 = (!sext_ln1118_410_reg_68638.read().is_01() || !zext_ln708_635_reg_68456.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_410_reg_68638.read()) + sc_biguint<10>(zext_ln708_635_reg_68456.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3018_fu_62450_p2() {
    add_ln703_3018_fu_62450_p2 = (!zext_ln203_394_fu_41681_p1.read().is_01() || !zext_ln203_361_fu_39390_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_394_fu_41681_p1.read()) + sc_biguint<9>(zext_ln203_361_fu_39390_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3019_fu_62460_p2() {
    add_ln703_3019_fu_62460_p2 = (!zext_ln703_624_fu_62456_p1.read().is_01() || !sext_ln703_1740_fu_62446_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_624_fu_62456_p1.read()) + sc_bigint<11>(sext_ln703_1740_fu_62446_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_301_fu_17100_p2() {
    add_ln703_301_fu_17100_p2 = (!zext_ln203_43_fu_3326_p1.read().is_01() || !sext_ln708_19_fu_3246_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_43_fu_3326_p1.read()) + sc_bigint<11>(sext_ln708_19_fu_3246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3020_fu_62470_p2() {
    add_ln703_3020_fu_62470_p2 = (!sext_ln703_1741_fu_62466_p1.read().is_01() || !add_ln703_3016_fu_62437_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1741_fu_62466_p1.read()) + sc_biguint<14>(add_ln703_3016_fu_62437_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3021_fu_62480_p2() {
    add_ln703_3021_fu_62480_p2 = (!sext_ln708_226_fu_41802_p1.read().is_01() || !sext_ln203_622_fu_41307_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_226_fu_41802_p1.read()) + sc_bigint<12>(sext_ln203_622_fu_41307_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3022_fu_62490_p2() {
    add_ln703_3022_fu_62490_p2 = (!sext_ln703_1742_fu_62486_p1.read().is_01() || !sext_ln703_402_fu_62476_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1742_fu_62486_p1.read()) + sc_bigint<15>(sext_ln703_402_fu_62476_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3023_fu_62496_p2() {
    add_ln703_3023_fu_62496_p2 = (!zext_ln708_906_fu_39485_p1.read().is_01() || !zext_ln203_397_fu_41774_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_906_fu_39485_p1.read()) + sc_biguint<11>(zext_ln203_397_fu_41774_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3024_fu_62506_p2() {
    add_ln703_3024_fu_62506_p2 = (!sext_ln708_218_fu_41178_p1.read().is_01() || !zext_ln708_730_fu_41826_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_218_fu_41178_p1.read()) + sc_biguint<11>(zext_ln708_730_fu_41826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3025_fu_62516_p2() {
    add_ln703_3025_fu_62516_p2 = (!sext_ln703_1743_fu_62512_p1.read().is_01() || !zext_ln703_625_fu_62502_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1743_fu_62512_p1.read()) + sc_biguint<13>(zext_ln703_625_fu_62502_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3026_fu_62526_p2() {
    add_ln703_3026_fu_62526_p2 = (!sext_ln703_1744_fu_62522_p1.read().is_01() || !add_ln703_3022_fu_62490_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1744_fu_62522_p1.read()) + sc_biguint<15>(add_ln703_3022_fu_62490_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3027_fu_62532_p2() {
    add_ln703_3027_fu_62532_p2 = (!sext_ln708_227_fu_41836_p1.read().is_01() || !zext_ln708_670_fu_40050_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_227_fu_41836_p1.read()) + sc_biguint<11>(zext_ln708_670_fu_40050_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3028_fu_62538_p2() {
    add_ln703_3028_fu_62538_p2 = (!add_ln703_3027_fu_62532_p2.read().is_01() || !sext_ln1118_437_fu_41778_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3027_fu_62532_p2.read()) + sc_bigint<11>(sext_ln1118_437_fu_41778_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3029_fu_62548_p2() {
    add_ln703_3029_fu_62548_p2 = (!zext_ln708_926_fu_40900_p1.read().is_01() || !zext_ln708_934_fu_41283_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_926_fu_40900_p1.read()) + sc_biguint<8>(zext_ln708_934_fu_41283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_302_fu_17106_p2() {
    add_ln703_302_fu_17106_p2 = (!sext_ln203_64_fu_3610_p1.read().is_01() || !zext_ln203_30_fu_2872_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_64_fu_3610_p1.read()) + sc_biguint<9>(zext_ln203_30_fu_2872_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3030_fu_62558_p2() {
    add_ln703_3030_fu_62558_p2 = (!zext_ln708_655_fu_39755_p1.read().is_01() || !zext_ln203_398_fu_41833_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_655_fu_39755_p1.read()) + sc_biguint<9>(zext_ln203_398_fu_41833_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3031_fu_62568_p2() {
    add_ln703_3031_fu_62568_p2 = (!zext_ln703_627_fu_62564_p1.read().is_01() || !zext_ln703_626_fu_62554_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_627_fu_62564_p1.read()) + sc_biguint<10>(zext_ln703_626_fu_62554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3032_fu_62578_p2() {
    add_ln703_3032_fu_62578_p2 = (!zext_ln703_628_fu_62574_p1.read().is_01() || !sext_ln703_1745_fu_62544_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_628_fu_62574_p1.read()) + sc_bigint<12>(sext_ln703_1745_fu_62544_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3034_fu_24540_p2() {
    add_ln703_3034_fu_24540_p2 = (!zext_ln708_950_fu_15142_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_950_fu_15142_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3035_fu_24550_p2() {
    add_ln703_3035_fu_24550_p2 = (!sext_ln203_586_fu_13094_p1.read().is_01() || !zext_ln203_357_fu_12612_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_586_fu_13094_p1.read()) + sc_biguint<12>(zext_ln203_357_fu_12612_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3036_fu_24556_p2() {
    add_ln703_3036_fu_24556_p2 = (!add_ln703_3035_fu_24550_p2.read().is_01() || !sext_ln703_404_fu_24546_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3035_fu_24550_p2.read()) + sc_bigint<12>(sext_ln703_404_fu_24546_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3037_fu_24566_p2() {
    add_ln703_3037_fu_24566_p2 = (!sext_ln1118_428_fu_14592_p1.read().is_01() || !sext_ln708_219_fu_14612_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_428_fu_14592_p1.read()) + sc_bigint<12>(sext_ln708_219_fu_14612_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3038_fu_24576_p2() {
    add_ln703_3038_fu_24576_p2 = (!sext_ln703_1747_fu_24572_p1.read().is_01() || !sext_ln703_405_fu_24562_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1747_fu_24572_p1.read()) + sc_bigint<13>(sext_ln703_405_fu_24562_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3039_fu_24582_p2() {
    add_ln703_3039_fu_24582_p2 = (!add_ln703_3038_fu_24576_p2.read().is_01() || !sext_ln203_617_fu_14448_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3038_fu_24576_p2.read()) + sc_bigint<13>(sext_ln203_617_fu_14448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_303_fu_17116_p2() {
    add_ln703_303_fu_17116_p2 = (!sext_ln703_257_fu_17112_p1.read().is_01() || !add_ln703_301_fu_17100_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_257_fu_17112_p1.read()) + sc_biguint<11>(add_ln703_301_fu_17100_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3040_fu_24592_p2() {
    add_ln703_3040_fu_24592_p2 = (!zext_ln708_951_fu_15162_p1.read().is_01() || !zext_ln708_911_fu_13224_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_951_fu_15162_p1.read()) + sc_biguint<10>(zext_ln708_911_fu_13224_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3041_fu_24602_p2() {
    add_ln703_3041_fu_24602_p2 = (!zext_ln703_629_fu_24598_p1.read().is_01() || !sext_ln703_1748_fu_24588_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_629_fu_24598_p1.read()) + sc_bigint<14>(sext_ln703_1748_fu_24588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3042_fu_24608_p2() {
    add_ln703_3042_fu_24608_p2 = (!sext_ln203_605_fu_14294_p1.read().is_01() || !sext_ln708_229_fu_15186_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_605_fu_14294_p1.read()) + sc_bigint<10>(sext_ln708_229_fu_15186_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3043_fu_24618_p2() {
    add_ln703_3043_fu_24618_p2 = (!zext_ln708_640_fu_12824_p1.read().is_01() || !zext_ln203_399_fu_15204_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_640_fu_12824_p1.read()) + sc_biguint<9>(zext_ln203_399_fu_15204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3044_fu_24628_p2() {
    add_ln703_3044_fu_24628_p2 = (!zext_ln703_630_fu_24624_p1.read().is_01() || !zext_ln708_635_fu_12740_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_630_fu_24624_p1.read()) + sc_biguint<10>(zext_ln708_635_fu_12740_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3045_fu_24638_p2() {
    add_ln703_3045_fu_24638_p2 = (!zext_ln703_631_fu_24634_p1.read().is_01() || !sext_ln703_1749_fu_24614_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_631_fu_24634_p1.read()) + sc_bigint<12>(sext_ln703_1749_fu_24614_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3046_fu_62601_p2() {
    add_ln703_3046_fu_62601_p2 = (!sext_ln703_1750_fu_62598_p1.read().is_01() || !add_ln703_3041_reg_69976.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1750_fu_62598_p1.read()) + sc_biguint<14>(add_ln703_3041_reg_69976.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3047_fu_62606_p2() {
    add_ln703_3047_fu_62606_p2 = (!sext_ln708_230_fu_41840_p1.read().is_01() || !sext_ln203_610_fu_40873_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_230_fu_41840_p1.read()) + sc_bigint<12>(sext_ln203_610_fu_40873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3048_fu_62616_p2() {
    add_ln703_3048_fu_62616_p2 = (!sext_ln703_1751_fu_62612_p1.read().is_01() || !add_ln703_3046_fu_62601_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1751_fu_62612_p1.read()) + sc_biguint<14>(add_ln703_3046_fu_62601_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3049_fu_62626_p2() {
    add_ln703_3049_fu_62626_p2 = (!sext_ln203_622_fu_41307_p1.read().is_01() || !zext_ln203_400_fu_41847_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_622_fu_41307_p1.read()) + sc_biguint<12>(zext_ln203_400_fu_41847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_304_fu_45679_p2() {
    add_ln703_304_fu_45679_p2 = (!sext_ln703_261_fu_45676_p1.read().is_01() || !sext_ln703_256_fu_45672_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_261_fu_45676_p1.read()) + sc_bigint<12>(sext_ln703_256_fu_45672_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3050_fu_62636_p2() {
    add_ln703_3050_fu_62636_p2 = (!zext_ln708_913_fu_39975_p1.read().is_01() || !zext_ln708_955_fu_41883_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_913_fu_39975_p1.read()) + sc_biguint<11>(zext_ln708_955_fu_41883_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3051_fu_62646_p2() {
    add_ln703_3051_fu_62646_p2 = (!zext_ln703_632_fu_62642_p1.read().is_01() || !sext_ln703_1753_fu_62632_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_632_fu_62642_p1.read()) + sc_bigint<13>(sext_ln703_1753_fu_62632_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3052_fu_62656_p2() {
    add_ln703_3052_fu_62656_p2 = (!sext_ln703_1754_fu_62652_p1.read().is_01() || !sext_ln703_1752_fu_62622_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1754_fu_62652_p1.read()) + sc_bigint<15>(sext_ln703_1752_fu_62622_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3053_fu_62662_p2() {
    add_ln703_3053_fu_62662_p2 = (!zext_ln1118_1040_reg_68606.read().is_01() || !zext_ln203_369_fu_39982_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1040_reg_68606.read()) + sc_biguint<10>(zext_ln203_369_fu_39982_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3054_fu_62671_p2() {
    add_ln703_3054_fu_62671_p2 = (!zext_ln703_633_fu_62667_p1.read().is_01() || !sext_ln708_231_fu_41865_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_633_fu_62667_p1.read()) + sc_bigint<12>(sext_ln708_231_fu_41865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3055_fu_62677_p2() {
    add_ln703_3055_fu_62677_p2 = (!zext_ln708_954_fu_41879_p1.read().is_01() || !zext_ln708_934_fu_41283_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_954_fu_41879_p1.read()) + sc_biguint<8>(zext_ln708_934_fu_41283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3057_fu_62691_p2() {
    add_ln703_3057_fu_62691_p2 = (!zext_ln703_635_fu_62687_p1.read().is_01() || !zext_ln703_634_fu_62683_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_635_fu_62687_p1.read()) + sc_biguint<10>(zext_ln703_634_fu_62683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3058_fu_62701_p2() {
    add_ln703_3058_fu_62701_p2 = (!zext_ln703_636_fu_62697_p1.read().is_01() || !add_ln703_3054_fu_62671_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_636_fu_62697_p1.read()) + sc_biguint<12>(add_ln703_3054_fu_62671_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3059_fu_62711_p2() {
    add_ln703_3059_fu_62711_p2 = (!sext_ln703_1755_fu_62707_p1.read().is_01() || !add_ln703_3052_fu_62656_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1755_fu_62707_p1.read()) + sc_biguint<15>(add_ln703_3052_fu_62656_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_305_fu_45689_p2() {
    add_ln703_305_fu_45689_p2 = (!zext_ln203_57_fu_28427_p1.read().is_01() || !zext_ln708_34_fu_27414_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_57_fu_28427_p1.read()) + sc_biguint<9>(zext_ln708_34_fu_27414_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3060_fu_62717_p2() {
    add_ln703_3060_fu_62717_p2 = (!add_ln703_3059_fu_62711_p2.read().is_01() || !zext_ln203_393_fu_41630_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3059_fu_62711_p2.read()) + sc_biguint<15>(zext_ln203_393_fu_41630_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3061_fu_62723_p2() {
    add_ln703_3061_fu_62723_p2 = (!zext_ln708_948_fu_41822_p1.read().is_01() || !zext_ln708_656_fu_39806_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_948_fu_41822_p1.read()) + sc_biguint<10>(zext_ln708_656_fu_39806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3062_fu_62733_p2() {
    add_ln703_3062_fu_62733_p2 = (!zext_ln703_637_fu_62729_p1.read().is_01() || !sext_ln203_644_fu_41922_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_637_fu_62729_p1.read()) + sc_bigint<12>(sext_ln203_644_fu_41922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3064_fu_24644_p2() {
    add_ln703_3064_fu_24644_p2 = (!zext_ln203_401_fu_15260_p1.read().is_01() || !sext_ln203_645_fu_15256_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_401_fu_15260_p1.read()) + sc_bigint<12>(sext_ln203_645_fu_15256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3065_fu_24650_p2() {
    add_ln703_3065_fu_24650_p2 = (!add_ln703_3064_fu_24644_p2.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3064_fu_24644_p2.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3066_fu_24660_p2() {
    add_ln703_3066_fu_24660_p2 = (!sext_ln703_409_fu_24656_p1.read().is_01() || !sext_ln203_617_fu_14448_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_409_fu_24656_p1.read()) + sc_bigint<13>(sext_ln203_617_fu_14448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3068_fu_24670_p2() {
    add_ln703_3068_fu_24670_p2 = (!sext_ln703_1758_fu_24666_p1.read().is_01() || !zext_ln203_402_fu_15280_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1758_fu_24666_p1.read()) + sc_biguint<12>(zext_ln203_402_fu_15280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3069_fu_24680_p2() {
    add_ln703_3069_fu_24680_p2 = (!sext_ln703_1759_fu_24676_p1.read().is_01() || !add_ln703_3066_fu_24660_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1759_fu_24676_p1.read()) + sc_biguint<13>(add_ln703_3066_fu_24660_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_306_fu_45699_p2() {
    add_ln703_306_fu_45699_p2 = (!zext_ln708_9_fu_26151_p1.read().is_01() || !zext_ln1116_31_fu_26274_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_9_fu_26151_p1.read()) + sc_biguint<9>(zext_ln1116_31_fu_26274_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3070_fu_24690_p2() {
    add_ln703_3070_fu_24690_p2 = (!sext_ln1118_424_fu_14476_p1.read().is_01() || !zext_ln1118_1079_fu_14660_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_424_fu_14476_p1.read()) + sc_biguint<12>(zext_ln1118_1079_fu_14660_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3071_fu_24700_p2() {
    add_ln703_3071_fu_24700_p2 = (!sext_ln703_1760_fu_24696_p1.read().is_01() || !sext_ln703_410_fu_24686_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1760_fu_24696_p1.read()) + sc_bigint<14>(sext_ln703_410_fu_24686_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3072_fu_62753_p2() {
    add_ln703_3072_fu_62753_p2 = (!sext_ln203_640_fu_41678_p1.read().is_01() || !sext_ln203_595_reg_68628.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_640_fu_41678_p1.read()) + sc_bigint<11>(sext_ln203_595_reg_68628.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3073_fu_62762_p2() {
    add_ln703_3073_fu_62762_p2 = (!sext_ln703_1761_fu_62758_p1.read().is_01() || !zext_ln1118_1093_fu_41929_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1761_fu_62758_p1.read()) + sc_biguint<12>(zext_ln1118_1093_fu_41929_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3074_fu_62772_p2() {
    add_ln703_3074_fu_62772_p2 = (!sext_ln703_1762_fu_62768_p1.read().is_01() || !add_ln703_3071_reg_69986.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1762_fu_62768_p1.read()) + sc_biguint<14>(add_ln703_3071_reg_69986.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3075_fu_62777_p2() {
    add_ln703_3075_fu_62777_p2 = (!sext_ln203_647_fu_41932_p1.read().is_01() || !sext_ln1118_441_fu_41985_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_647_fu_41932_p1.read()) + sc_bigint<12>(sext_ln1118_441_fu_41985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3076_fu_62787_p2() {
    add_ln703_3076_fu_62787_p2 = (!sext_ln703_1763_fu_62783_p1.read().is_01() || !add_ln703_3074_fu_62772_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1763_fu_62783_p1.read()) + sc_biguint<14>(add_ln703_3074_fu_62772_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3077_fu_62797_p2() {
    add_ln703_3077_fu_62797_p2 = (!zext_ln1116_239_fu_39489_p1.read().is_01() || !sext_ln1116_62_fu_39441_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_239_fu_39489_p1.read()) + sc_bigint<12>(sext_ln1116_62_fu_39441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3078_fu_62803_p2() {
    add_ln703_3078_fu_62803_p2 = (!sext_ln1118_439_fu_41955_p1.read().is_01() || !sext_ln203_646_reg_68833.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_439_fu_41955_p1.read()) + sc_bigint<10>(sext_ln203_646_reg_68833.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3079_fu_62812_p2() {
    add_ln703_3079_fu_62812_p2 = (!sext_ln703_1765_fu_62808_p1.read().is_01() || !add_ln703_3077_fu_62797_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1765_fu_62808_p1.read()) + sc_biguint<12>(add_ln703_3077_fu_62797_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_307_fu_45709_p2() {
    add_ln703_307_fu_45709_p2 = (!zext_ln703_74_fu_45705_p1.read().is_01() || !zext_ln703_73_fu_45695_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_74_fu_45705_p1.read()) + sc_biguint<10>(zext_ln703_73_fu_45695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3080_fu_62822_p2() {
    add_ln703_3080_fu_62822_p2 = (!sext_ln703_1766_fu_62818_p1.read().is_01() || !sext_ln703_1764_fu_62793_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1766_fu_62818_p1.read()) + sc_bigint<15>(sext_ln703_1764_fu_62793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3081_fu_62828_p2() {
    add_ln703_3081_fu_62828_p2 = (!zext_ln1118_730_reg_68496.read().is_01() || !zext_ln203_361_fu_39390_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_730_reg_68496.read()) + sc_biguint<9>(zext_ln203_361_fu_39390_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3082_fu_62837_p2() {
    add_ln703_3082_fu_62837_p2 = (!zext_ln703_638_fu_62833_p1.read().is_01() || !sext_ln203_648_fu_42005_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_638_fu_62833_p1.read()) + sc_bigint<11>(sext_ln203_648_fu_42005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3083_fu_62847_p2() {
    add_ln703_3083_fu_62847_p2 = (!zext_ln708_914_fu_39979_p1.read().is_01() || !zext_ln708_957_fu_41936_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_914_fu_39979_p1.read()) + sc_biguint<8>(zext_ln708_957_fu_41936_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3085_fu_62857_p2() {
    add_ln703_3085_fu_62857_p2 = (!zext_ln703_635_fu_62687_p1.read().is_01() || !zext_ln703_639_fu_62853_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_635_fu_62687_p1.read()) + sc_biguint<10>(zext_ln703_639_fu_62853_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3086_fu_62867_p2() {
    add_ln703_3086_fu_62867_p2 = (!zext_ln703_641_fu_62863_p1.read().is_01() || !sext_ln703_1767_fu_62843_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_641_fu_62863_p1.read()) + sc_bigint<12>(sext_ln703_1767_fu_62843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3087_fu_62877_p2() {
    add_ln703_3087_fu_62877_p2 = (!sext_ln703_1768_fu_62873_p1.read().is_01() || !add_ln703_3080_fu_62822_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1768_fu_62873_p1.read()) + sc_biguint<15>(add_ln703_3080_fu_62822_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3089_fu_24706_p2() {
    add_ln703_3089_fu_24706_p2 = (!lshr_ln708_793_fu_15132_p4.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(lshr_ln708_793_fu_15132_p4.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_308_fu_45719_p2() {
    add_ln703_308_fu_45719_p2 = (!zext_ln1118_71_fu_26281_p1.read().is_01() || !zext_ln1118_83_fu_26417_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_71_fu_26281_p1.read()) + sc_biguint<9>(zext_ln1118_83_fu_26417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3090_fu_24716_p2() {
    add_ln703_3090_fu_24716_p2 = (!sext_ln703_1770_fu_24712_p1.read().is_01() || !zext_ln708_632_fu_12594_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1770_fu_24712_p1.read()) + sc_biguint<11>(zext_ln708_632_fu_12594_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3091_fu_24726_p2() {
    add_ln703_3091_fu_24726_p2 = (!sext_ln703_1771_fu_24722_p1.read().is_01() || !sext_ln203_649_fu_15350_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1771_fu_24722_p1.read()) + sc_bigint<12>(sext_ln203_649_fu_15350_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3092_fu_24736_p2() {
    add_ln703_3092_fu_24736_p2 = (!sext_ln703_414_fu_24732_p1.read().is_01() || !sext_ln203_617_fu_14448_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_414_fu_24732_p1.read()) + sc_bigint<13>(sext_ln203_617_fu_14448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3093_fu_24742_p2() {
    add_ln703_3093_fu_24742_p2 = (!sext_ln708_206_fu_13362_p1.read().is_01() || !zext_ln1116_248_fu_14016_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_206_fu_13362_p1.read()) + sc_biguint<10>(zext_ln1116_248_fu_14016_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3094_fu_24752_p2() {
    add_ln703_3094_fu_24752_p2 = (!sext_ln703_1772_fu_24748_p1.read().is_01() || !add_ln703_3092_fu_24736_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1772_fu_24748_p1.read()) + sc_biguint<13>(add_ln703_3092_fu_24736_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3095_fu_24758_p2() {
    add_ln703_3095_fu_24758_p2 = (!sext_ln708_233_fu_15374_p1.read().is_01() || !zext_ln203_366_fu_13200_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_233_fu_15374_p1.read()) + sc_biguint<12>(zext_ln203_366_fu_13200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3096_fu_62899_p2() {
    add_ln703_3096_fu_62899_p2 = (!sext_ln703_1773_fu_62896_p1.read().is_01() || !sext_ln703_415_fu_62893_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1773_fu_62896_p1.read()) + sc_bigint<14>(sext_ln703_415_fu_62893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3097_fu_24764_p2() {
    add_ln703_3097_fu_24764_p2 = (!sext_ln708_234_fu_15428_p1.read().is_01() || !zext_ln1118_1095_fu_15388_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_234_fu_15428_p1.read()) + sc_biguint<9>(zext_ln1118_1095_fu_15388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3098_fu_24774_p2() {
    add_ln703_3098_fu_24774_p2 = (!sext_ln703_1774_fu_24770_p1.read().is_01() || !sext_ln1118_444_fu_15408_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1774_fu_24770_p1.read()) + sc_bigint<10>(sext_ln1118_444_fu_15408_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3099_fu_62908_p2() {
    add_ln703_3099_fu_62908_p2 = (!sext_ln703_1775_fu_62905_p1.read().is_01() || !add_ln703_3096_fu_62899_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1775_fu_62905_p1.read()) + sc_biguint<14>(add_ln703_3096_fu_62899_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_309_fu_45729_p2() {
    add_ln703_309_fu_45729_p2 = (!zext_ln203_41_fu_27942_p1.read().is_01() || !zext_ln1116_33_fu_26545_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_41_fu_27942_p1.read()) + sc_biguint<9>(zext_ln1116_33_fu_26545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_30_fu_16362_p2() {
    add_ln703_30_fu_16362_p2 = (!zext_ln708_667_fu_1692_p1.read().is_01() || !ap_const_lv11_500.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_667_fu_1692_p1.read()) + sc_bigint<11>(ap_const_lv11_500));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3100_fu_62914_p2() {
    add_ln703_3100_fu_62914_p2 = (!zext_ln1118_1096_fu_42009_p1.read().is_01() || !sext_ln203_610_fu_40873_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1096_fu_42009_p1.read()) + sc_bigint<12>(sext_ln203_610_fu_40873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3101_fu_62924_p2() {
    add_ln703_3101_fu_62924_p2 = (!sext_ln703_1776_fu_62920_p1.read().is_01() || !add_ln703_3099_fu_62908_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1776_fu_62920_p1.read()) + sc_biguint<14>(add_ln703_3099_fu_62908_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3102_fu_62934_p2() {
    add_ln703_3102_fu_62934_p2 = (!zext_ln708_953_fu_41844_p1.read().is_01() || !zext_ln708_955_fu_41883_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_953_fu_41844_p1.read()) + sc_biguint<11>(zext_ln708_955_fu_41883_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3103_fu_62944_p2() {
    add_ln703_3103_fu_62944_p2 = (!zext_ln703_642_fu_62940_p1.read().is_01() || !sext_ln708_225_fu_41798_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_642_fu_62940_p1.read()) + sc_bigint<13>(sext_ln708_225_fu_41798_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3104_fu_62954_p2() {
    add_ln703_3104_fu_62954_p2 = (!sext_ln703_1778_fu_62950_p1.read().is_01() || !sext_ln703_1777_fu_62930_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1778_fu_62950_p1.read()) + sc_bigint<15>(sext_ln703_1777_fu_62930_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3105_fu_62960_p2() {
    add_ln703_3105_fu_62960_p2 = (!sext_ln708_235_fu_42012_p1.read().is_01() || !zext_ln203_403_fu_42015_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_235_fu_42012_p1.read()) + sc_biguint<11>(zext_ln203_403_fu_42015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3106_fu_62970_p2() {
    add_ln703_3106_fu_62970_p2 = (!sext_ln703_1779_fu_62966_p1.read().is_01() || !zext_ln1118_1097_fu_42038_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1779_fu_62966_p1.read()) + sc_biguint<12>(zext_ln1118_1097_fu_42038_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3108_fu_62980_p2() {
    add_ln703_3108_fu_62980_p2 = (!zext_ln708_684_fu_40664_p1.read().is_01() || !zext_ln1118_997_fu_39411_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_684_fu_40664_p1.read()) + sc_biguint<9>(zext_ln1118_997_fu_39411_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3109_fu_62990_p2() {
    add_ln703_3109_fu_62990_p2 = (!zext_ln703_644_fu_62986_p1.read().is_01() || !zext_ln703_573_fu_61146_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_644_fu_62986_p1.read()) + sc_biguint<11>(zext_ln703_573_fu_61146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_310_fu_45739_p2() {
    add_ln703_310_fu_45739_p2 = (!zext_ln703_77_fu_45735_p1.read().is_01() || !zext_ln703_76_fu_45725_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_77_fu_45735_p1.read()) + sc_biguint<10>(zext_ln703_76_fu_45725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3110_fu_63000_p2() {
    add_ln703_3110_fu_63000_p2 = (!zext_ln703_645_fu_62996_p1.read().is_01() || !sext_ln703_1780_fu_62976_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_645_fu_62996_p1.read()) + sc_bigint<13>(sext_ln703_1780_fu_62976_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3111_fu_63010_p2() {
    add_ln703_3111_fu_63010_p2 = (!sext_ln703_1781_fu_63006_p1.read().is_01() || !add_ln703_3104_fu_62954_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1781_fu_63006_p1.read()) + sc_biguint<15>(add_ln703_3104_fu_62954_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3112_fu_63016_p2() {
    add_ln703_3112_fu_63016_p2 = (!sext_ln203_650_fu_42058_p1.read().is_01() || !zext_ln203_404_fu_42078_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_650_fu_42058_p1.read()) + sc_biguint<12>(zext_ln203_404_fu_42078_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3113_fu_63026_p2() {
    add_ln703_3113_fu_63026_p2 = (!sext_ln703_1782_fu_63022_p1.read().is_01() || !add_ln703_3111_fu_63010_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1782_fu_63022_p1.read()) + sc_biguint<15>(add_ln703_3111_fu_63010_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3114_fu_63036_p2() {
    add_ln703_3114_fu_63036_p2 = (!zext_ln203_405_fu_42098_p1.read().is_01() || !sext_ln203_651_fu_42118_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_405_fu_42098_p1.read()) + sc_bigint<12>(sext_ln203_651_fu_42118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3115_fu_63042_p2() {
    add_ln703_3115_fu_63042_p2 = (!sext_ln203_652_fu_42137_p1.read().is_01() || !zext_ln203_407_fu_42145_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_652_fu_42137_p1.read()) + sc_biguint<11>(zext_ln203_407_fu_42145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3116_fu_63052_p2() {
    add_ln703_3116_fu_63052_p2 = (!sext_ln703_1784_fu_63048_p1.read().is_01() || !add_ln703_3114_fu_63036_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1784_fu_63048_p1.read()) + sc_biguint<12>(add_ln703_3114_fu_63036_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3118_fu_63075_p2() {
    add_ln703_3118_fu_63075_p2 = (!or_ln703_21_fu_63068_p3.read().is_01() || !mult_3553_V_fu_42149_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_21_fu_63068_p3.read()) + sc_bigint<16>(mult_3553_V_fu_42149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3119_fu_24780_p2() {
    add_ln703_3119_fu_24780_p2 = (!sext_ln708_223_fu_14734_p1.read().is_01() || !sext_ln203_654_fu_15492_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_223_fu_14734_p1.read()) + sc_bigint<12>(sext_ln203_654_fu_15492_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_311_fu_45749_p2() {
    add_ln703_311_fu_45749_p2 = (!zext_ln703_78_fu_45745_p1.read().is_01() || !zext_ln703_75_fu_45715_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_78_fu_45745_p1.read()) + sc_biguint<11>(zext_ln703_75_fu_45715_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3120_fu_63084_p2() {
    add_ln703_3120_fu_63084_p2 = (!sext_ln703_1786_fu_63081_p1.read().is_01() || !add_ln703_3118_fu_63075_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1786_fu_63081_p1.read()) + sc_biguint<16>(add_ln703_3118_fu_63075_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3121_fu_63090_p2() {
    add_ln703_3121_fu_63090_p2 = (!sext_ln203_647_fu_41932_p1.read().is_01() || !sext_ln203_659_fu_42194_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_647_fu_41932_p1.read()) + sc_bigint<12>(sext_ln203_659_fu_42194_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3122_fu_63100_p2() {
    add_ln703_3122_fu_63100_p2 = (!sext_ln203_660_fu_42236_p1.read().is_01() || !zext_ln203_408_reg_68864.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_660_fu_42236_p1.read()) + sc_biguint<12>(zext_ln203_408_reg_68864.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3123_fu_63109_p2() {
    add_ln703_3123_fu_63109_p2 = (!sext_ln703_1788_fu_63105_p1.read().is_01() || !sext_ln703_1787_fu_63096_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1788_fu_63105_p1.read()) + sc_bigint<13>(sext_ln703_1787_fu_63096_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3124_fu_63119_p2() {
    add_ln703_3124_fu_63119_p2 = (!sext_ln703_1789_fu_63115_p1.read().is_01() || !add_ln703_3120_fu_63084_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1789_fu_63115_p1.read()) + sc_biguint<16>(add_ln703_3120_fu_63084_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3125_fu_63125_p2() {
    add_ln703_3125_fu_63125_p2 = (!zext_ln708_959_fu_42152_p1.read().is_01() || !zext_ln708_913_fu_39975_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_959_fu_42152_p1.read()) + sc_biguint<11>(zext_ln708_913_fu_39975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3126_fu_24786_p2() {
    add_ln703_3126_fu_24786_p2 = (!sext_ln1118_390_fu_13126_p1.read().is_01() || !sext_ln203_653_fu_15488_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_390_fu_13126_p1.read()) + sc_bigint<11>(sext_ln203_653_fu_15488_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3127_fu_63138_p2() {
    add_ln703_3127_fu_63138_p2 = (!sext_ln703_1790_fu_63135_p1.read().is_01() || !zext_ln703_646_fu_63131_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1790_fu_63135_p1.read()) + sc_biguint<13>(zext_ln703_646_fu_63131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3128_fu_24792_p2() {
    add_ln703_3128_fu_24792_p2 = (!sext_ln203_655_fu_15516_p1.read().is_01() || !sext_ln203_656_fu_15536_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_655_fu_15516_p1.read()) + sc_bigint<11>(sext_ln203_656_fu_15536_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3129_fu_63151_p2() {
    add_ln703_3129_fu_63151_p2 = (!sext_ln203_630_fu_41467_p1.read().is_01() || !sext_ln203_658_fu_42174_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_630_fu_41467_p1.read()) + sc_bigint<11>(sext_ln203_658_fu_42174_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_312_fu_45759_p2() {
    add_ln703_312_fu_45759_p2 = (!zext_ln703_79_fu_45755_p1.read().is_01() || !sext_ln703_262_fu_45685_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_79_fu_45755_p1.read()) + sc_bigint<13>(sext_ln703_262_fu_45685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3130_fu_63161_p2() {
    add_ln703_3130_fu_63161_p2 = (!sext_ln703_1793_fu_63157_p1.read().is_01() || !sext_ln703_1792_fu_63148_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1793_fu_63157_p1.read()) + sc_bigint<12>(sext_ln703_1792_fu_63148_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3131_fu_63171_p2() {
    add_ln703_3131_fu_63171_p2 = (!sext_ln703_1794_fu_63167_p1.read().is_01() || !sext_ln703_1791_fu_63144_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1794_fu_63167_p1.read()) + sc_bigint<14>(sext_ln703_1791_fu_63144_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3132_fu_63181_p2() {
    add_ln703_3132_fu_63181_p2 = (!sext_ln703_1795_fu_63177_p1.read().is_01() || !add_ln703_3124_fu_63119_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1795_fu_63177_p1.read()) + sc_biguint<16>(add_ln703_3124_fu_63119_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3133_fu_63187_p2() {
    add_ln703_3133_fu_63187_p2 = (!zext_ln708_907_fu_39514_p1.read().is_01() || !zext_ln708_923_fu_40730_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_907_fu_39514_p1.read()) + sc_biguint<10>(zext_ln708_923_fu_40730_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3134_fu_63197_p2() {
    add_ln703_3134_fu_63197_p2 = (!zext_ln708_704_fu_41200_p1.read().is_01() || !sext_ln203_657_fu_42155_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_704_fu_41200_p1.read()) + sc_bigint<11>(sext_ln203_657_fu_42155_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3135_fu_63207_p2() {
    add_ln703_3135_fu_63207_p2 = (!sext_ln703_1796_fu_63203_p1.read().is_01() || !zext_ln703_647_fu_63193_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1796_fu_63203_p1.read()) + sc_biguint<12>(zext_ln703_647_fu_63193_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3136_fu_63217_p2() {
    add_ln703_3136_fu_63217_p2 = (!sext_ln1116_67_fu_40646_p1.read().is_01() || !sext_ln708_204_fu_40038_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_67_fu_40646_p1.read()) + sc_bigint<9>(sext_ln708_204_fu_40038_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3137_fu_63227_p2() {
    add_ln703_3137_fu_63227_p2 = (!sext_ln203_598_fu_40584_p1.read().is_01() || !sext_ln203_661_fu_42240_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_598_fu_40584_p1.read()) + sc_bigint<9>(sext_ln203_661_fu_42240_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3138_fu_63237_p2() {
    add_ln703_3138_fu_63237_p2 = (!sext_ln703_1799_fu_63233_p1.read().is_01() || !sext_ln703_1798_fu_63223_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1799_fu_63233_p1.read()) + sc_bigint<10>(sext_ln703_1798_fu_63223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3139_fu_63247_p2() {
    add_ln703_3139_fu_63247_p2 = (!sext_ln703_1800_fu_63243_p1.read().is_01() || !sext_ln703_1797_fu_63213_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1800_fu_63243_p1.read()) + sc_bigint<13>(sext_ln703_1797_fu_63213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3141_fu_63256_p2() {
    add_ln703_3141_fu_63256_p2 = (!zext_ln708_933_fu_41251_p1.read().is_01() || !zext_ln708_914_fu_39979_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_933_fu_41251_p1.read()) + sc_biguint<8>(zext_ln708_914_fu_39979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3142_fu_63266_p2() {
    add_ln703_3142_fu_63266_p2 = (!zext_ln703_649_fu_63262_p1.read().is_01() || !zext_ln703_648_fu_63253_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_649_fu_63262_p1.read()) + sc_biguint<10>(zext_ln703_648_fu_63253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3144_fu_63276_p2() {
    add_ln703_3144_fu_63276_p2 = (!zext_ln708_655_fu_39755_p1.read().is_01() || !zext_ln203_406_fu_42141_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_655_fu_39755_p1.read()) + sc_biguint<9>(zext_ln203_406_fu_42141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3145_fu_63286_p2() {
    add_ln703_3145_fu_63286_p2 = (!zext_ln703_652_fu_63282_p1.read().is_01() || !zext_ln703_604_fu_61925_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_652_fu_63282_p1.read()) + sc_biguint<10>(zext_ln703_604_fu_61925_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3146_fu_63296_p2() {
    add_ln703_3146_fu_63296_p2 = (!zext_ln703_653_fu_63292_p1.read().is_01() || !zext_ln703_650_fu_63272_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_653_fu_63292_p1.read()) + sc_biguint<11>(zext_ln703_650_fu_63272_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3147_fu_63306_p2() {
    add_ln703_3147_fu_63306_p2 = (!zext_ln703_654_fu_63302_p1.read().is_01() || !add_ln703_3139_fu_63247_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_654_fu_63302_p1.read()) + sc_biguint<13>(add_ln703_3139_fu_63247_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3149_fu_24798_p2() {
    add_ln703_3149_fu_24798_p2 = (!sext_ln203_662_fu_15576_p1.read().is_01() || !ap_const_lv12_F00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_662_fu_15576_p1.read()) + sc_bigint<12>(ap_const_lv12_F00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_314_fu_17122_p2() {
    add_ln703_314_fu_17122_p2 = (!zext_ln708_29_fu_2598_p1.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_29_fu_2598_p1.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3150_fu_24808_p2() {
    add_ln703_3150_fu_24808_p2 = (!sext_ln203_602_fu_14238_p1.read().is_01() || !sext_ln1118_446_fu_15580_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_602_fu_14238_p1.read()) + sc_bigint<12>(sext_ln1118_446_fu_15580_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3151_fu_24818_p2() {
    add_ln703_3151_fu_24818_p2 = (!sext_ln703_1802_fu_24814_p1.read().is_01() || !sext_ln703_418_fu_24804_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1802_fu_24814_p1.read()) + sc_bigint<13>(sext_ln703_418_fu_24804_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3152_fu_24828_p2() {
    add_ln703_3152_fu_24828_p2 = (!sext_ln703_419_fu_24824_p1.read().is_01() || !sext_ln203_663_fu_15616_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_419_fu_24824_p1.read()) + sc_bigint<14>(sext_ln203_663_fu_15616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3153_fu_24834_p2() {
    add_ln703_3153_fu_24834_p2 = (!sext_ln708_212_fu_14150_p1.read().is_01() || !zext_ln203_408_fu_15496_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_212_fu_14150_p1.read()) + sc_biguint<12>(zext_ln203_408_fu_15496_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3154_fu_24844_p2() {
    add_ln703_3154_fu_24844_p2 = (!sext_ln703_1803_fu_24840_p1.read().is_01() || !add_ln703_3152_fu_24828_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1803_fu_24840_p1.read()) + sc_biguint<14>(add_ln703_3152_fu_24828_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3155_fu_24850_p2() {
    add_ln703_3155_fu_24850_p2 = (!zext_ln1116_265_fu_15646_p1.read().is_01() || !sext_ln1116_70_fu_15612_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_265_fu_15646_p1.read()) + sc_bigint<12>(sext_ln1116_70_fu_15612_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3156_fu_24860_p2() {
    add_ln703_3156_fu_24860_p2 = (!zext_ln708_928_fu_14520_p1.read().is_01() || !zext_ln1116_263_fu_15638_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_928_fu_14520_p1.read()) + sc_biguint<10>(zext_ln1116_263_fu_15638_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3157_fu_24870_p2() {
    add_ln703_3157_fu_24870_p2 = (!zext_ln703_655_fu_24866_p1.read().is_01() || !sext_ln703_1804_fu_24856_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_655_fu_24866_p1.read()) + sc_bigint<13>(sext_ln703_1804_fu_24856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3158_fu_24880_p2() {
    add_ln703_3158_fu_24880_p2 = (!sext_ln703_1805_fu_24876_p1.read().is_01() || !add_ln703_3154_fu_24844_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1805_fu_24876_p1.read()) + sc_biguint<14>(add_ln703_3154_fu_24844_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3159_fu_63325_p2() {
    add_ln703_3159_fu_63325_p2 = (!sext_ln703_420_fu_63322_p1.read().is_01() || !sext_ln203_664_fu_42260_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_420_fu_63322_p1.read()) + sc_bigint<15>(sext_ln203_664_fu_42260_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_315_fu_17132_p2() {
    add_ln703_315_fu_17132_p2 = (!zext_ln708_729_fu_3674_p1.read().is_01() || !sext_ln703_44_fu_17128_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_729_fu_3674_p1.read()) + sc_bigint<11>(sext_ln703_44_fu_17128_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3160_fu_63331_p2() {
    add_ln703_3160_fu_63331_p2 = (!sext_ln1118_447_fu_42283_p1.read().is_01() || !sext_ln1116_75_fu_42357_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_447_fu_42283_p1.read()) + sc_bigint<12>(sext_ln1116_75_fu_42357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3161_fu_63341_p2() {
    add_ln703_3161_fu_63341_p2 = (!sext_ln703_1806_fu_63337_p1.read().is_01() || !sext_ln1116_72_fu_42264_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1806_fu_63337_p1.read()) + sc_bigint<13>(sext_ln1116_72_fu_42264_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3162_fu_63351_p2() {
    add_ln703_3162_fu_63351_p2 = (!sext_ln703_1807_fu_63347_p1.read().is_01() || !add_ln703_3159_fu_63325_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1807_fu_63347_p1.read()) + sc_biguint<15>(add_ln703_3159_fu_63325_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3163_fu_63357_p2() {
    add_ln703_3163_fu_63357_p2 = (!zext_ln708_961_fu_42330_p1.read().is_01() || !zext_ln1118_1070_fu_40841_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_961_fu_42330_p1.read()) + sc_biguint<10>(zext_ln1118_1070_fu_40841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3164_fu_63367_p2() {
    add_ln703_3164_fu_63367_p2 = (!zext_ln703_656_fu_63363_p1.read().is_01() || !sext_ln1116_76_fu_42361_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_656_fu_63363_p1.read()) + sc_bigint<12>(sext_ln1116_76_fu_42361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3165_fu_63377_p2() {
    add_ln703_3165_fu_63377_p2 = (!sext_ln1116_74_fu_42310_p1.read().is_01() || !zext_ln1118_996_fu_39408_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_74_fu_42310_p1.read()) + sc_biguint<10>(zext_ln1118_996_fu_39408_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3166_fu_63387_p2() {
    add_ln703_3166_fu_63387_p2 = (!sext_ln703_1809_fu_63383_p1.read().is_01() || !sext_ln1118_448_fu_42303_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1809_fu_63383_p1.read()) + sc_bigint<11>(sext_ln1118_448_fu_42303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3167_fu_63397_p2() {
    add_ln703_3167_fu_63397_p2 = (!sext_ln703_1810_fu_63393_p1.read().is_01() || !sext_ln703_1808_fu_63373_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1810_fu_63393_p1.read()) + sc_bigint<13>(sext_ln703_1808_fu_63373_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3168_fu_63407_p2() {
    add_ln703_3168_fu_63407_p2 = (!sext_ln703_1811_fu_63403_p1.read().is_01() || !add_ln703_3162_fu_63351_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1811_fu_63403_p1.read()) + sc_biguint<15>(add_ln703_3162_fu_63351_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3169_fu_63413_p2() {
    add_ln703_3169_fu_63413_p2 = (!add_ln703_3168_fu_63407_p2.read().is_01() || !sext_ln203_665_fu_42365_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3168_fu_63407_p2.read()) + sc_bigint<15>(sext_ln203_665_fu_42365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_316_fu_17138_p2() {
    add_ln703_316_fu_17138_p2 = (!add_ln703_315_fu_17132_p2.read().is_01() || !sext_ln708_23_fu_3678_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_315_fu_17132_p2.read()) + sc_bigint<11>(sext_ln708_23_fu_3678_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3170_fu_63423_p2() {
    add_ln703_3170_fu_63423_p2 = (!sext_ln203_597_fu_40564_p1.read().is_01() || !zext_ln203_410_fu_42373_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_597_fu_40564_p1.read()) + sc_biguint<12>(zext_ln203_410_fu_42373_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3171_fu_63433_p2() {
    add_ln703_3171_fu_63433_p2 = (!sext_ln703_1813_fu_63429_p1.read().is_01() || !sext_ln703_1812_fu_63419_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1813_fu_63429_p1.read()) + sc_bigint<16>(sext_ln703_1812_fu_63419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3172_fu_63439_p2() {
    add_ln703_3172_fu_63439_p2 = (!zext_ln708_932_fu_41220_p1.read().is_01() || !zext_ln203_409_fu_42369_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_932_fu_41220_p1.read()) + sc_biguint<11>(zext_ln203_409_fu_42369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3173_fu_63449_p2() {
    add_ln703_3173_fu_63449_p2 = (!sext_ln203_598_fu_40584_p1.read().is_01() || !sext_ln203_583_fu_39843_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_598_fu_40584_p1.read()) + sc_bigint<9>(sext_ln203_583_fu_39843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3174_fu_63459_p2() {
    add_ln703_3174_fu_63459_p2 = (!sext_ln703_1814_fu_63455_p1.read().is_01() || !sext_ln203_667_fu_42397_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1814_fu_63455_p1.read()) + sc_bigint<10>(sext_ln203_667_fu_42397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3175_fu_63469_p2() {
    add_ln703_3175_fu_63469_p2 = (!sext_ln703_1815_fu_63465_p1.read().is_01() || !zext_ln703_657_fu_63445_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1815_fu_63465_p1.read()) + sc_biguint<12>(zext_ln703_657_fu_63445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3177_fu_24886_p2() {
    add_ln703_3177_fu_24886_p2 = (!sext_ln203_662_fu_15576_p1.read().is_01() || !ap_const_lv12_200.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_662_fu_15576_p1.read()) + sc_biguint<12>(ap_const_lv12_200));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3178_fu_24896_p2() {
    add_ln703_3178_fu_24896_p2 = (!sext_ln203_602_fu_14238_p1.read().is_01() || !sext_ln203_616_fu_14398_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_602_fu_14238_p1.read()) + sc_bigint<12>(sext_ln203_616_fu_14398_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3179_fu_24906_p2() {
    add_ln703_3179_fu_24906_p2 = (!sext_ln703_1817_fu_24902_p1.read().is_01() || !sext_ln703_422_fu_24892_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1817_fu_24902_p1.read()) + sc_bigint<13>(sext_ln703_422_fu_24892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_317_fu_17148_p2() {
    add_ln703_317_fu_17148_p2 = (!sext_ln703_266_fu_17144_p1.read().is_01() || !zext_ln203_61_fu_3702_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_266_fu_17144_p1.read()) + sc_biguint<12>(zext_ln203_61_fu_3702_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3180_fu_24912_p2() {
    add_ln703_3180_fu_24912_p2 = (!add_ln703_3179_fu_24906_p2.read().is_01() || !sext_ln203_600_fu_14012_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3179_fu_24906_p2.read()) + sc_bigint<13>(sext_ln203_600_fu_14012_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3181_fu_24922_p2() {
    add_ln703_3181_fu_24922_p2 = (!sext_ln708_238_fu_15670_p1.read().is_01() || !sext_ln708_239_fu_15704_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_238_fu_15670_p1.read()) + sc_bigint<11>(sext_ln708_239_fu_15704_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3182_fu_24932_p2() {
    add_ln703_3182_fu_24932_p2 = (!sext_ln703_1819_fu_24928_p1.read().is_01() || !sext_ln703_1818_fu_24918_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1819_fu_24928_p1.read()) + sc_bigint<14>(sext_ln703_1818_fu_24918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3183_fu_24938_p2() {
    add_ln703_3183_fu_24938_p2 = (!zext_ln708_951_fu_15162_p1.read().is_01() || !zext_ln1118_1069_fu_14274_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_951_fu_15162_p1.read()) + sc_biguint<10>(zext_ln1118_1069_fu_14274_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3184_fu_24948_p2() {
    add_ln703_3184_fu_24948_p2 = (!zext_ln708_760_fu_15684_p1.read().is_01() || !zext_ln708_640_fu_12824_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_760_fu_15684_p1.read()) + sc_biguint<9>(zext_ln708_640_fu_12824_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3185_fu_24958_p2() {
    add_ln703_3185_fu_24958_p2 = (!zext_ln703_659_fu_24954_p1.read().is_01() || !zext_ln703_658_fu_24944_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_659_fu_24954_p1.read()) + sc_biguint<11>(zext_ln703_658_fu_24944_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3186_fu_24968_p2() {
    add_ln703_3186_fu_24968_p2 = (!zext_ln703_660_fu_24964_p1.read().is_01() || !add_ln703_3182_fu_24932_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_660_fu_24964_p1.read()) + sc_biguint<14>(add_ln703_3182_fu_24932_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3187_fu_24974_p2() {
    add_ln703_3187_fu_24974_p2 = (!add_ln703_3186_fu_24968_p2.read().is_01() || !sext_ln203_668_fu_15732_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3186_fu_24968_p2.read()) + sc_bigint<14>(sext_ln203_668_fu_15732_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3188_fu_63488_p2() {
    add_ln703_3188_fu_63488_p2 = (!sext_ln708_215_reg_68714.read().is_01() || !zext_ln1118_1103_fu_42421_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_215_reg_68714.read()) + sc_biguint<12>(zext_ln1118_1103_fu_42421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3189_fu_63497_p2() {
    add_ln703_3189_fu_63497_p2 = (!sext_ln703_1821_fu_63493_p1.read().is_01() || !sext_ln1118_450_fu_42445_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1821_fu_63493_p1.read()) + sc_bigint<13>(sext_ln1118_450_fu_42445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_318_fu_17158_p2() {
    add_ln703_318_fu_17158_p2 = (!sext_ln708_22_fu_3364_p1.read().is_01() || !zext_ln1116_35_fu_2650_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_22_fu_3364_p1.read()) + sc_biguint<12>(zext_ln1116_35_fu_2650_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3190_fu_63507_p2() {
    add_ln703_3190_fu_63507_p2 = (!sext_ln703_1822_fu_63503_p1.read().is_01() || !sext_ln703_1820_fu_63485_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1822_fu_63503_p1.read()) + sc_bigint<15>(sext_ln703_1820_fu_63485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3191_fu_63513_p2() {
    add_ln703_3191_fu_63513_p2 = (!sext_ln203_630_fu_41467_p1.read().is_01() || !sext_ln1118_456_fu_42507_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_630_fu_41467_p1.read()) + sc_bigint<11>(sext_ln1118_456_fu_42507_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3192_fu_63523_p2() {
    add_ln703_3192_fu_63523_p2 = (!sext_ln1116_63_fu_39445_p1.read().is_01() || !zext_ln1116_232_reg_68473.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_63_fu_39445_p1.read()) + sc_biguint<10>(zext_ln1116_232_reg_68473.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3193_fu_63532_p2() {
    add_ln703_3193_fu_63532_p2 = (!sext_ln703_1824_fu_63528_p1.read().is_01() || !sext_ln1118_454_fu_42484_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1824_fu_63528_p1.read()) + sc_bigint<11>(sext_ln1118_454_fu_42484_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3194_fu_63542_p2() {
    add_ln703_3194_fu_63542_p2 = (!sext_ln703_1825_fu_63538_p1.read().is_01() || !sext_ln703_1823_fu_63519_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1825_fu_63538_p1.read()) + sc_bigint<12>(sext_ln703_1823_fu_63519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3195_fu_63552_p2() {
    add_ln703_3195_fu_63552_p2 = (!sext_ln703_1826_fu_63548_p1.read().is_01() || !add_ln703_3190_fu_63507_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1826_fu_63548_p1.read()) + sc_biguint<15>(add_ln703_3190_fu_63507_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3196_fu_63558_p2() {
    add_ln703_3196_fu_63558_p2 = (!add_ln703_3195_fu_63552_p2.read().is_01() || !zext_ln203_412_fu_42511_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3195_fu_63552_p2.read()) + sc_biguint<15>(zext_ln203_412_fu_42511_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3197_fu_63568_p2() {
    add_ln703_3197_fu_63568_p2 = (!sext_ln203_670_fu_42534_p1.read().is_01() || !sext_ln203_671_fu_42578_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_670_fu_42534_p1.read()) + sc_bigint<12>(sext_ln203_671_fu_42578_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3198_fu_63578_p2() {
    add_ln703_3198_fu_63578_p2 = (!sext_ln703_1828_fu_63574_p1.read().is_01() || !sext_ln203_669_fu_42530_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1828_fu_63574_p1.read()) + sc_bigint<13>(sext_ln203_669_fu_42530_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3199_fu_63588_p2() {
    add_ln703_3199_fu_63588_p2 = (!sext_ln703_1829_fu_63584_p1.read().is_01() || !sext_ln703_1827_fu_63564_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1829_fu_63584_p1.read()) + sc_bigint<16>(sext_ln703_1827_fu_63564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_319_fu_17168_p2() {
    add_ln703_319_fu_17168_p2 = (!sext_ln703_269_fu_17164_p1.read().is_01() || !sext_ln703_267_fu_17154_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_269_fu_17164_p1.read()) + sc_bigint<13>(sext_ln703_267_fu_17154_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_31_fu_16372_p2() {
    add_ln703_31_fu_16372_p2 = (!sext_ln703_9_fu_16368_p1.read().is_01() || !sext_ln203_4_fu_1724_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_9_fu_16368_p1.read()) + sc_bigint<12>(sext_ln203_4_fu_1724_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3200_fu_63594_p2() {
    add_ln703_3200_fu_63594_p2 = (!sext_ln203_597_fu_40564_p1.read().is_01() || !zext_ln203_413_fu_42554_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_597_fu_40564_p1.read()) + sc_biguint<12>(zext_ln203_413_fu_42554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3201_fu_63604_p2() {
    add_ln703_3201_fu_63604_p2 = (!sext_ln203_672_fu_42602_p1.read().is_01() || !sext_ln708_227_fu_41836_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_672_fu_42602_p1.read()) + sc_bigint<11>(sext_ln708_227_fu_41836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3202_fu_63614_p2() {
    add_ln703_3202_fu_63614_p2 = (!sext_ln703_1831_fu_63610_p1.read().is_01() || !zext_ln203_414_fu_42598_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1831_fu_63610_p1.read()) + sc_biguint<12>(zext_ln203_414_fu_42598_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3203_fu_63624_p2() {
    add_ln703_3203_fu_63624_p2 = (!sext_ln703_1832_fu_63620_p1.read().is_01() || !sext_ln703_1830_fu_63600_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1832_fu_63620_p1.read()) + sc_bigint<13>(sext_ln703_1830_fu_63600_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3205_fu_24980_p2() {
    add_ln703_3205_fu_24980_p2 = (!zext_ln708_921_fu_13988_p1.read().is_01() || !zext_ln1116_223_fu_12616_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_921_fu_13988_p1.read()) + sc_biguint<10>(zext_ln1116_223_fu_12616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3206_fu_24990_p2() {
    add_ln703_3206_fu_24990_p2 = (!zext_ln703_661_fu_24986_p1.read().is_01() || !sext_ln203_586_fu_13094_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_661_fu_24986_p1.read()) + sc_bigint<12>(sext_ln203_586_fu_13094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3207_fu_25000_p2() {
    add_ln703_3207_fu_25000_p2 = (!sext_ln703_426_fu_24996_p1.read().is_01() || !sext_ln203_619_fu_14588_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_426_fu_24996_p1.read()) + sc_bigint<13>(sext_ln203_619_fu_14588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3208_fu_25006_p2() {
    add_ln703_3208_fu_25006_p2 = (!sext_ln1118_462_fu_15766_p1.read().is_01() || !zext_ln708_760_fu_15684_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_462_fu_15766_p1.read()) + sc_biguint<9>(zext_ln708_760_fu_15684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3209_fu_25016_p2() {
    add_ln703_3209_fu_25016_p2 = (!sext_ln703_1834_fu_25012_p1.read().is_01() || !add_ln703_3207_fu_25000_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1834_fu_25012_p1.read()) + sc_biguint<13>(add_ln703_3207_fu_25000_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_320_fu_17178_p2() {
    add_ln703_320_fu_17178_p2 = (!sext_ln703_47_fu_17174_p1.read().is_01() || !sext_ln203_69_fu_3722_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_47_fu_17174_p1.read()) + sc_bigint<14>(sext_ln203_69_fu_3722_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3210_fu_25026_p2() {
    add_ln703_3210_fu_25026_p2 = (!sext_ln708_240_fu_15786_p1.read().is_01() || !zext_ln708_773_fu_15790_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_240_fu_15786_p1.read()) + sc_biguint<12>(zext_ln708_773_fu_15790_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3211_fu_25036_p2() {
    add_ln703_3211_fu_25036_p2 = (!sext_ln703_1835_fu_25032_p1.read().is_01() || !sext_ln703_427_fu_25022_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1835_fu_25032_p1.read()) + sc_bigint<14>(sext_ln703_427_fu_25022_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3212_fu_25042_p2() {
    add_ln703_3212_fu_25042_p2 = (!sext_ln203_606_fu_14314_p1.read().is_01() || !zext_ln1118_1030_fu_13514_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_606_fu_14314_p1.read()) + sc_biguint<11>(zext_ln1118_1030_fu_13514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3213_fu_25052_p2() {
    add_ln703_3213_fu_25052_p2 = (!sext_ln1118_410_fu_13956_p1.read().is_01() || !zext_ln1118_992_fu_12898_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_410_fu_13956_p1.read()) + sc_biguint<10>(zext_ln1118_992_fu_12898_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3214_fu_25062_p2() {
    add_ln703_3214_fu_25062_p2 = (!sext_ln703_1837_fu_25058_p1.read().is_01() || !sext_ln703_1836_fu_25048_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1837_fu_25058_p1.read()) + sc_bigint<12>(sext_ln703_1836_fu_25048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3215_fu_63643_p2() {
    add_ln703_3215_fu_63643_p2 = (!sext_ln703_1838_fu_63640_p1.read().is_01() || !add_ln703_3211_reg_70031.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1838_fu_63640_p1.read()) + sc_biguint<14>(add_ln703_3211_reg_70031.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3216_fu_63648_p2() {
    add_ln703_3216_fu_63648_p2 = (!add_ln703_3215_fu_63643_p2.read().is_01() || !sext_ln1118_451_fu_42449_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3215_fu_63643_p2.read()) + sc_bigint<14>(sext_ln1118_451_fu_42449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3217_fu_63658_p2() {
    add_ln703_3217_fu_63658_p2 = (!sext_ln203_675_fu_42748_p1.read().is_01() || !zext_ln708_779_fu_42637_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_675_fu_42748_p1.read()) + sc_biguint<12>(zext_ln708_779_fu_42637_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3218_fu_63668_p2() {
    add_ln703_3218_fu_63668_p2 = (!sext_ln703_1840_fu_63664_p1.read().is_01() || !sext_ln708_241_fu_42714_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1840_fu_63664_p1.read()) + sc_bigint<13>(sext_ln708_241_fu_42714_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3219_fu_63678_p2() {
    add_ln703_3219_fu_63678_p2 = (!sext_ln703_1841_fu_63674_p1.read().is_01() || !sext_ln703_1839_fu_63654_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1841_fu_63674_p1.read()) + sc_bigint<15>(sext_ln703_1839_fu_63654_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_321_fu_17184_p2() {
    add_ln703_321_fu_17184_p2 = (!zext_ln708_653_fu_1442_p1.read().is_01() || !zext_ln708_731_fu_3742_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_653_fu_1442_p1.read()) + sc_biguint<11>(zext_ln708_731_fu_3742_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3220_fu_63684_p2() {
    add_ln703_3220_fu_63684_p2 = (!zext_ln708_963_fu_42684_p1.read().is_01() || !zext_ln203_386_fu_41098_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_963_fu_42684_p1.read()) + sc_biguint<11>(zext_ln203_386_fu_41098_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3221_fu_63694_p2() {
    add_ln703_3221_fu_63694_p2 = (!zext_ln703_662_fu_63690_p1.read().is_01() || !zext_ln708_780_fu_42664_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_662_fu_63690_p1.read()) + sc_biguint<12>(zext_ln708_780_fu_42664_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3222_fu_63704_p2() {
    add_ln703_3222_fu_63704_p2 = (!zext_ln1118_1020_fu_39988_p1.read().is_01() || !zext_ln1118_1107_fu_42728_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1020_fu_39988_p1.read()) + sc_biguint<9>(zext_ln1118_1107_fu_42728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3223_fu_63714_p2() {
    add_ln703_3223_fu_63714_p2 = (!zext_ln703_664_fu_63710_p1.read().is_01() || !sext_ln1118_465_fu_42752_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_664_fu_63710_p1.read()) + sc_bigint<10>(sext_ln1118_465_fu_42752_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3224_fu_63724_p2() {
    add_ln703_3224_fu_63724_p2 = (!sext_ln703_1842_fu_63720_p1.read().is_01() || !zext_ln703_663_fu_63700_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1842_fu_63720_p1.read()) + sc_biguint<13>(zext_ln703_663_fu_63700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3225_fu_63734_p2() {
    add_ln703_3225_fu_63734_p2 = (!sext_ln703_1843_fu_63730_p1.read().is_01() || !add_ln703_3219_fu_63678_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1843_fu_63730_p1.read()) + sc_biguint<15>(add_ln703_3219_fu_63678_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3226_fu_63740_p2() {
    add_ln703_3226_fu_63740_p2 = (!add_ln703_3225_fu_63734_p2.read().is_01() || !sext_ln203_677_fu_42760_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3225_fu_63734_p2.read()) + sc_bigint<15>(sext_ln203_677_fu_42760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3227_fu_63746_p2() {
    add_ln703_3227_fu_63746_p2 = (!zext_ln203_415_fu_42764_p1.read().is_01() || !sext_ln203_676_fu_42756_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_415_fu_42764_p1.read()) + sc_bigint<11>(sext_ln203_676_fu_42756_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3228_fu_63756_p2() {
    add_ln703_3228_fu_63756_p2 = (!sext_ln703_1844_fu_63752_p1.read().is_01() || !sext_ln203_644_fu_41922_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1844_fu_63752_p1.read()) + sc_bigint<12>(sext_ln203_644_fu_41922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_322_fu_45778_p2() {
    add_ln703_322_fu_45778_p2 = (!zext_ln703_80_fu_45775_p1.read().is_01() || !add_ln703_320_reg_69036.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_80_fu_45775_p1.read()) + sc_biguint<14>(add_ln703_320_reg_69036.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3230_fu_25068_p2() {
    add_ln703_3230_fu_25068_p2 = (!sext_ln203_679_fu_15810_p1.read().is_01() || !ap_const_lv12_80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_679_fu_15810_p1.read()) + sc_biguint<12>(ap_const_lv12_80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3231_fu_25074_p2() {
    add_ln703_3231_fu_25074_p2 = (!sext_ln1118_392_fu_13318_p1.read().is_01() || !sext_ln1118_468_fu_15846_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_392_fu_13318_p1.read()) + sc_bigint<10>(sext_ln1118_468_fu_15846_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3232_fu_25084_p2() {
    add_ln703_3232_fu_25084_p2 = (!sext_ln703_1847_fu_25080_p1.read().is_01() || !add_ln703_3230_fu_25068_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1847_fu_25080_p1.read()) + sc_biguint<12>(add_ln703_3230_fu_25068_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3233_fu_25094_p2() {
    add_ln703_3233_fu_25094_p2 = (!sext_ln203_654_fu_15492_p1.read().is_01() || !sext_ln1118_472_fu_15870_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_654_fu_15492_p1.read()) + sc_bigint<12>(sext_ln1118_472_fu_15870_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3234_fu_25104_p2() {
    add_ln703_3234_fu_25104_p2 = (!sext_ln703_1849_fu_25100_p1.read().is_01() || !sext_ln703_1848_fu_25090_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1849_fu_25100_p1.read()) + sc_bigint<13>(sext_ln703_1848_fu_25090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3235_fu_25114_p2() {
    add_ln703_3235_fu_25114_p2 = (!sext_ln708_242_fu_15890_p1.read().is_01() || !zext_ln708_678_fu_13840_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_242_fu_15890_p1.read()) + sc_biguint<11>(zext_ln708_678_fu_13840_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3236_fu_25124_p2() {
    add_ln703_3236_fu_25124_p2 = (!sext_ln1118_469_fu_15850_p1.read().is_01() || !zext_ln708_760_fu_15684_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_469_fu_15850_p1.read()) + sc_biguint<9>(zext_ln708_760_fu_15684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3237_fu_25134_p2() {
    add_ln703_3237_fu_25134_p2 = (!sext_ln703_1852_fu_25130_p1.read().is_01() || !sext_ln703_1851_fu_25120_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1852_fu_25130_p1.read()) + sc_bigint<12>(sext_ln703_1851_fu_25120_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3238_fu_25144_p2() {
    add_ln703_3238_fu_25144_p2 = (!sext_ln703_1853_fu_25140_p1.read().is_01() || !sext_ln703_1850_fu_25110_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1853_fu_25140_p1.read()) + sc_bigint<14>(sext_ln703_1850_fu_25110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3239_fu_63776_p2() {
    add_ln703_3239_fu_63776_p2 = (!sext_ln708_243_fu_42881_p1.read().is_01() || !zext_ln203_416_fu_42815_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_243_fu_42881_p1.read()) + sc_biguint<12>(zext_ln203_416_fu_42815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_323_fu_45783_p2() {
    add_ln703_323_fu_45783_p2 = (!sext_ln1118_26_reg_67261.read().is_01() || !zext_ln708_3_reg_67085.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_26_reg_67261.read()) + sc_biguint<10>(zext_ln708_3_reg_67085.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3240_fu_63786_p2() {
    add_ln703_3240_fu_63786_p2 = (!sext_ln703_1854_fu_63782_p1.read().is_01() || !add_ln703_3238_reg_70041.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1854_fu_63782_p1.read()) + sc_biguint<14>(add_ln703_3238_reg_70041.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3241_fu_63791_p2() {
    add_ln703_3241_fu_63791_p2 = (!sext_ln708_235_fu_42012_p1.read().is_01() || !zext_ln203_390_reg_68736.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_235_fu_42012_p1.read()) + sc_biguint<11>(zext_ln203_390_reg_68736.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3242_fu_63800_p2() {
    add_ln703_3242_fu_63800_p2 = (!sext_ln703_1855_fu_63796_p1.read().is_01() || !zext_ln1118_1111_fu_42885_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1855_fu_63796_p1.read()) + sc_biguint<12>(zext_ln1118_1111_fu_42885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3243_fu_63810_p2() {
    add_ln703_3243_fu_63810_p2 = (!sext_ln703_1856_fu_63806_p1.read().is_01() || !add_ln703_3240_fu_63786_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1856_fu_63806_p1.read()) + sc_biguint<14>(add_ln703_3240_fu_63786_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3244_fu_63820_p2() {
    add_ln703_3244_fu_63820_p2 = (!sext_ln203_681_fu_42811_p1.read().is_01() || !sext_ln1118_476_fu_42850_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_681_fu_42811_p1.read()) + sc_bigint<10>(sext_ln1118_476_fu_42850_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3245_fu_63830_p2() {
    add_ln703_3245_fu_63830_p2 = (!sext_ln703_1858_fu_63826_p1.read().is_01() || !sext_ln1118_473_fu_42787_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1858_fu_63826_p1.read()) + sc_bigint<11>(sext_ln1118_473_fu_42787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3246_fu_63840_p2() {
    add_ln703_3246_fu_63840_p2 = (!zext_ln203_361_fu_39390_p1.read().is_01() || !zext_ln708_685_fu_40668_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_361_fu_39390_p1.read()) + sc_biguint<9>(zext_ln708_685_fu_40668_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3247_fu_63850_p2() {
    add_ln703_3247_fu_63850_p2 = (!zext_ln703_665_fu_63846_p1.read().is_01() || !zext_ln1116_232_reg_68473.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_665_fu_63846_p1.read()) + sc_biguint<10>(zext_ln1116_232_reg_68473.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3248_fu_63859_p2() {
    add_ln703_3248_fu_63859_p2 = (!zext_ln703_666_fu_63855_p1.read().is_01() || !sext_ln703_1859_fu_63836_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_666_fu_63855_p1.read()) + sc_bigint<12>(sext_ln703_1859_fu_63836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3249_fu_63869_p2() {
    add_ln703_3249_fu_63869_p2 = (!sext_ln703_1860_fu_63865_p1.read().is_01() || !sext_ln703_1857_fu_63816_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1860_fu_63865_p1.read()) + sc_bigint<15>(sext_ln703_1857_fu_63816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_324_fu_45791_p2() {
    add_ln703_324_fu_45791_p2 = (!zext_ln203_57_fu_28427_p1.read().is_01() || !zext_ln203_4_fu_26136_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_57_fu_28427_p1.read()) + sc_biguint<9>(zext_ln203_4_fu_26136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3250_fu_63875_p2() {
    add_ln703_3250_fu_63875_p2 = (!add_ln703_3249_fu_63869_p2.read().is_01() || !sext_ln203_684_fu_42913_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3249_fu_63869_p2.read()) + sc_bigint<15>(sext_ln203_684_fu_42913_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3251_fu_63881_p2() {
    add_ln703_3251_fu_63881_p2 = (!sext_ln203_687_fu_42949_p1.read().is_01() || !zext_ln203_376_fu_40532_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_687_fu_42949_p1.read()) + sc_biguint<12>(zext_ln203_376_fu_40532_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3252_fu_63891_p2() {
    add_ln703_3252_fu_63891_p2 = (!sext_ln703_1861_fu_63887_p1.read().is_01() || !sext_ln203_686_fu_42921_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1861_fu_63887_p1.read()) + sc_bigint<13>(sext_ln203_686_fu_42921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3253_fu_63901_p2() {
    add_ln703_3253_fu_63901_p2 = (!sext_ln703_1862_fu_63897_p1.read().is_01() || !add_ln703_3250_fu_63875_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1862_fu_63897_p1.read()) + sc_biguint<15>(add_ln703_3250_fu_63875_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3254_fu_63907_p2() {
    add_ln703_3254_fu_63907_p2 = (!sext_ln203_683_fu_42909_p1.read().is_01() || !sext_ln1118_437_fu_41778_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_683_fu_42909_p1.read()) + sc_bigint<11>(sext_ln1118_437_fu_41778_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3255_fu_63917_p2() {
    add_ln703_3255_fu_63917_p2 = (!sext_ln703_1863_fu_63913_p1.read().is_01() || !zext_ln203_417_fu_42969_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1863_fu_63913_p1.read()) + sc_biguint<12>(zext_ln203_417_fu_42969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3256_fu_63927_p2() {
    add_ln703_3256_fu_63927_p2 = (!zext_ln1118_1040_reg_68606.read().is_01() || !zext_ln708_673_fu_40178_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1040_reg_68606.read()) + sc_biguint<10>(zext_ln708_673_fu_40178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3257_fu_63936_p2() {
    add_ln703_3257_fu_63936_p2 = (!zext_ln703_667_fu_63932_p1.read().is_01() || !sext_ln203_682_fu_42889_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_667_fu_63932_p1.read()) + sc_bigint<11>(sext_ln203_682_fu_42889_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3258_fu_63946_p2() {
    add_ln703_3258_fu_63946_p2 = (!sext_ln703_1865_fu_63942_p1.read().is_01() || !sext_ln703_1864_fu_63923_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1865_fu_63942_p1.read()) + sc_bigint<13>(sext_ln703_1864_fu_63923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_325_fu_45801_p2() {
    add_ln703_325_fu_45801_p2 = (!zext_ln703_81_fu_45797_p1.read().is_01() || !sext_ln703_270_fu_45787_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_81_fu_45797_p1.read()) + sc_bigint<11>(sext_ln703_270_fu_45787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3260_fu_25150_p2() {
    add_ln703_3260_fu_25150_p2 = (!sext_ln203_590_fu_13286_p1.read().is_01() || !ap_const_lv12_E80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_590_fu_13286_p1.read()) + sc_bigint<12>(ap_const_lv12_E80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3261_fu_25160_p2() {
    add_ln703_3261_fu_25160_p2 = (!sext_ln703_434_fu_25156_p1.read().is_01() || !sext_ln203_688_fu_15894_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_434_fu_25156_p1.read()) + sc_bigint<13>(sext_ln203_688_fu_15894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3262_fu_25166_p2() {
    add_ln703_3262_fu_25166_p2 = (!zext_ln708_902_fu_12608_p1.read().is_01() || !zext_ln708_918_fu_13376_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_902_fu_12608_p1.read()) + sc_biguint<8>(zext_ln708_918_fu_13376_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3263_fu_25176_p2() {
    add_ln703_3263_fu_25176_p2 = (!zext_ln703_668_fu_25172_p1.read().is_01() || !sext_ln1118_446_fu_15580_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_668_fu_25172_p1.read()) + sc_bigint<12>(sext_ln1118_446_fu_15580_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3264_fu_25186_p2() {
    add_ln703_3264_fu_25186_p2 = (!sext_ln703_1868_fu_25182_p1.read().is_01() || !add_ln703_3261_fu_25160_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1868_fu_25182_p1.read()) + sc_biguint<13>(add_ln703_3261_fu_25160_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3265_fu_25196_p2() {
    add_ln703_3265_fu_25196_p2 = (!sext_ln703_435_fu_25192_p1.read().is_01() || !sext_ln203_663_fu_15616_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_435_fu_25192_p1.read()) + sc_bigint<14>(sext_ln203_663_fu_15616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3266_fu_25202_p2() {
    add_ln703_3266_fu_25202_p2 = (!sext_ln708_215_fu_14548_p1.read().is_01() || !zext_ln1116_265_fu_15646_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_215_fu_14548_p1.read()) + sc_biguint<12>(zext_ln1116_265_fu_15646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3267_fu_25212_p2() {
    add_ln703_3267_fu_25212_p2 = (!sext_ln703_1869_fu_25208_p1.read().is_01() || !sext_ln1118_396_fu_13444_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1869_fu_25208_p1.read()) + sc_bigint<13>(sext_ln1118_396_fu_13444_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3268_fu_25222_p2() {
    add_ln703_3268_fu_25222_p2 = (!sext_ln703_1870_fu_25218_p1.read().is_01() || !add_ln703_3265_fu_25196_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1870_fu_25218_p1.read()) + sc_biguint<14>(add_ln703_3265_fu_25196_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3269_fu_25228_p2() {
    add_ln703_3269_fu_25228_p2 = (!zext_ln708_960_fu_15630_p1.read().is_01() || !zext_ln708_964_fu_15908_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_960_fu_15630_p1.read()) + sc_biguint<8>(zext_ln708_964_fu_15908_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_326_fu_45811_p2() {
    add_ln703_326_fu_45811_p2 = (!sext_ln703_273_fu_45807_p1.read().is_01() || !add_ln703_322_fu_45778_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_273_fu_45807_p1.read()) + sc_biguint<14>(add_ln703_322_fu_45778_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3270_fu_25238_p2() {
    add_ln703_3270_fu_25238_p2 = (!zext_ln703_669_fu_25234_p1.read().is_01() || !lshr_ln708_803_fu_15438_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_669_fu_25234_p1.read()) + sc_biguint<10>(lshr_ln708_803_fu_15438_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3271_fu_25248_p2() {
    add_ln703_3271_fu_25248_p2 = (!zext_ln203_418_fu_15926_p1.read().is_01() || !zext_ln1118_730_fu_12922_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_418_fu_15926_p1.read()) + sc_biguint<9>(zext_ln1118_730_fu_12922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3272_fu_25254_p2() {
    add_ln703_3272_fu_25254_p2 = (!add_ln703_3271_fu_25248_p2.read().is_01() || !zext_ln203_399_fu_15204_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_3271_fu_25248_p2.read()) + sc_biguint<9>(zext_ln203_399_fu_15204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3273_fu_25264_p2() {
    add_ln703_3273_fu_25264_p2 = (!zext_ln703_671_fu_25260_p1.read().is_01() || !zext_ln703_670_fu_25244_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_671_fu_25260_p1.read()) + sc_biguint<11>(zext_ln703_670_fu_25244_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3274_fu_25274_p2() {
    add_ln703_3274_fu_25274_p2 = (!zext_ln703_672_fu_25270_p1.read().is_01() || !add_ln703_3268_fu_25222_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_672_fu_25270_p1.read()) + sc_biguint<14>(add_ln703_3268_fu_25222_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3275_fu_63969_p2() {
    add_ln703_3275_fu_63969_p2 = (!sext_ln703_436_fu_63966_p1.read().is_01() || !sext_ln203_689_fu_42997_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_436_fu_63966_p1.read()) + sc_bigint<15>(sext_ln203_689_fu_42997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3276_fu_63975_p2() {
    add_ln703_3276_fu_63975_p2 = (!zext_ln1118_1117_fu_43041_p1.read().is_01() || !sext_ln1118_475_fu_42846_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_1117_fu_43041_p1.read()) + sc_bigint<11>(sext_ln1118_475_fu_42846_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3277_fu_63985_p2() {
    add_ln703_3277_fu_63985_p2 = (!sext_ln703_1871_fu_63981_p1.read().is_01() || !sext_ln1116_76_fu_42361_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1871_fu_63981_p1.read()) + sc_bigint<12>(sext_ln1116_76_fu_42361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3278_fu_63995_p2() {
    add_ln703_3278_fu_63995_p2 = (!sext_ln703_1872_fu_63991_p1.read().is_01() || !add_ln703_3275_fu_63969_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1872_fu_63991_p1.read()) + sc_biguint<15>(add_ln703_3275_fu_63969_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3279_fu_64001_p2() {
    add_ln703_3279_fu_64001_p2 = (!zext_ln708_668_fu_40046_p1.read().is_01() || !zext_ln203_362_fu_39397_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_668_fu_40046_p1.read()) + sc_biguint<10>(zext_ln203_362_fu_39397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_327_fu_45821_p2() {
    add_ln703_327_fu_45821_p2 = (!sext_ln708_25_fu_28548_p1.read().is_01() || !sext_ln203_44_fu_28053_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_25_fu_28548_p1.read()) + sc_bigint<12>(sext_ln203_44_fu_28053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3280_fu_64011_p2() {
    add_ln703_3280_fu_64011_p2 = (!sext_ln1116_77_fu_43021_p1.read().is_01() || !sext_ln203_614_fu_40996_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_77_fu_43021_p1.read()) + sc_bigint<9>(sext_ln203_614_fu_40996_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3281_fu_64021_p2() {
    add_ln703_3281_fu_64021_p2 = (!sext_ln703_1873_fu_64017_p1.read().is_01() || !sext_ln1118_478_fu_43001_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1873_fu_64017_p1.read()) + sc_bigint<10>(sext_ln1118_478_fu_43001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3282_fu_64031_p2() {
    add_ln703_3282_fu_64031_p2 = (!sext_ln703_1874_fu_64027_p1.read().is_01() || !zext_ln703_673_fu_64007_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1874_fu_64027_p1.read()) + sc_biguint<12>(zext_ln703_673_fu_64007_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3283_fu_64041_p2() {
    add_ln703_3283_fu_64041_p2 = (!sext_ln703_1875_fu_64037_p1.read().is_01() || !add_ln703_3278_fu_63995_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1875_fu_64037_p1.read()) + sc_biguint<15>(add_ln703_3278_fu_63995_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3284_fu_64047_p2() {
    add_ln703_3284_fu_64047_p2 = (!sext_ln203_660_fu_42236_p1.read().is_01() || !sext_ln203_687_fu_42949_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_660_fu_42236_p1.read()) + sc_bigint<12>(sext_ln203_687_fu_42949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3285_fu_64057_p2() {
    add_ln703_3285_fu_64057_p2 = (!sext_ln703_1876_fu_64053_p1.read().is_01() || !add_ln703_3283_fu_64041_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1876_fu_64053_p1.read()) + sc_biguint<15>(add_ln703_3283_fu_64041_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3286_fu_64063_p2() {
    add_ln703_3286_fu_64063_p2 = (!sext_ln203_692_fu_43073_p1.read().is_01() || !sext_ln203_693_fu_43077_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_692_fu_43073_p1.read()) + sc_bigint<9>(sext_ln203_693_fu_43077_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3287_fu_64073_p2() {
    add_ln703_3287_fu_64073_p2 = (!zext_ln1118_740_fu_39707_p1.read().is_01() || !zext_ln1118_1014_fu_39823_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_740_fu_39707_p1.read()) + sc_biguint<9>(zext_ln1118_1014_fu_39823_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3288_fu_64083_p2() {
    add_ln703_3288_fu_64083_p2 = (!zext_ln703_674_fu_64079_p1.read().is_01() || !sext_ln703_1877_fu_64069_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_674_fu_64079_p1.read()) + sc_bigint<11>(sext_ln703_1877_fu_64069_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_328_fu_45831_p2() {
    add_ln703_328_fu_45831_p2 = (!sext_ln703_275_fu_45827_p1.read().is_01() || !sext_ln703_48_fu_45817_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_275_fu_45827_p1.read()) + sc_bigint<15>(sext_ln703_48_fu_45817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3291_fu_25284_p2() {
    add_ln703_3291_fu_25284_p2 = (!sext_ln708_246_fu_15946_p1.read().is_01() || !sext_ln1118_467_fu_15842_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_246_fu_15946_p1.read()) + sc_bigint<11>(sext_ln1118_467_fu_15842_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3292_fu_25294_p2() {
    add_ln703_3292_fu_25294_p2 = (!sext_ln703_1880_fu_25290_p1.read().is_01() || !sext_ln703_438_fu_25280_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1880_fu_25290_p1.read()) + sc_bigint<13>(sext_ln703_438_fu_25280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3293_fu_25300_p2() {
    add_ln703_3293_fu_25300_p2 = (!add_ln703_3292_fu_25294_p2.read().is_01() || !sext_ln203_600_fu_14012_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3292_fu_25294_p2.read()) + sc_bigint<13>(sext_ln203_600_fu_14012_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3294_fu_25306_p2() {
    add_ln703_3294_fu_25306_p2 = (!zext_ln203_411_fu_15708_p1.read().is_01() || !sext_ln1118_430_fu_14700_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_411_fu_15708_p1.read()) + sc_bigint<11>(sext_ln1118_430_fu_14700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3295_fu_25316_p2() {
    add_ln703_3295_fu_25316_p2 = (!sext_ln703_1881_fu_25312_p1.read().is_01() || !zext_ln203_419_fu_15950_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1881_fu_25312_p1.read()) + sc_biguint<12>(zext_ln203_419_fu_15950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3296_fu_25326_p2() {
    add_ln703_3296_fu_25326_p2 = (!sext_ln703_1882_fu_25322_p1.read().is_01() || !add_ln703_3293_fu_25300_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1882_fu_25322_p1.read()) + sc_biguint<13>(add_ln703_3293_fu_25300_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3297_fu_25332_p2() {
    add_ln703_3297_fu_25332_p2 = (!sext_ln1118_426_fu_14528_p1.read().is_01() || !zext_ln1116_262_fu_15634_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_426_fu_14528_p1.read()) + sc_biguint<9>(zext_ln1116_262_fu_15634_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3298_fu_25342_p2() {
    add_ln703_3298_fu_25342_p2 = (!sext_ln703_1883_fu_25338_p1.read().is_01() || !sext_ln203_646_fu_15316_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1883_fu_25338_p1.read()) + sc_bigint<10>(sext_ln203_646_fu_15316_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_329_fu_45837_p2() {
    add_ln703_329_fu_45837_p2 = (!zext_ln708_661_fu_26231_p1.read().is_01() || !zext_ln203_62_fu_28520_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_661_fu_26231_p1.read()) + sc_biguint<11>(zext_ln203_62_fu_28520_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_32_fu_16382_p2() {
    add_ln703_32_fu_16382_p2 = (!sext_ln703_10_fu_16378_p1.read().is_01() || !sext_ln203_5_fu_1798_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_10_fu_16378_p1.read()) + sc_bigint<13>(sext_ln203_5_fu_1798_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3300_fu_25352_p2() {
    add_ln703_3300_fu_25352_p2 = (!zext_ln703_586_fu_24208_p1.read().is_01() || !zext_ln708_635_fu_12740_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_586_fu_24208_p1.read()) + sc_biguint<10>(zext_ln708_635_fu_12740_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3301_fu_25362_p2() {
    add_ln703_3301_fu_25362_p2 = (!zext_ln703_675_fu_25358_p1.read().is_01() || !sext_ln703_1884_fu_25348_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_675_fu_25358_p1.read()) + sc_bigint<12>(sext_ln703_1884_fu_25348_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3302_fu_25372_p2() {
    add_ln703_3302_fu_25372_p2 = (!sext_ln703_1885_fu_25368_p1.read().is_01() || !add_ln703_3296_fu_25326_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1885_fu_25368_p1.read()) + sc_biguint<13>(add_ln703_3296_fu_25326_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3303_fu_64106_p2() {
    add_ln703_3303_fu_64106_p2 = (!zext_ln708_913_fu_39975_p1.read().is_01() || !zext_ln708_939_fu_41358_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_913_fu_39975_p1.read()) + sc_biguint<11>(zext_ln708_939_fu_41358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3304_fu_64116_p2() {
    add_ln703_3304_fu_64116_p2 = (!zext_ln703_676_fu_64112_p1.read().is_01() || !sext_ln703_1886_fu_64103_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_676_fu_64112_p1.read()) + sc_bigint<14>(sext_ln703_1886_fu_64103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3305_fu_64122_p2() {
    add_ln703_3305_fu_64122_p2 = (!zext_ln708_942_fu_41486_p1.read().is_01() || !zext_ln708_958_fu_42034_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_942_fu_41486_p1.read()) + sc_biguint<11>(zext_ln708_958_fu_42034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3306_fu_64132_p2() {
    add_ln703_3306_fu_64132_p2 = (!sext_ln1118_427_fu_41146_p1.read().is_01() || !zext_ln203_403_fu_42015_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_427_fu_41146_p1.read()) + sc_biguint<11>(zext_ln203_403_fu_42015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3307_fu_64142_p2() {
    add_ln703_3307_fu_64142_p2 = (!sext_ln703_1887_fu_64138_p1.read().is_01() || !zext_ln703_677_fu_64128_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1887_fu_64138_p1.read()) + sc_biguint<13>(zext_ln703_677_fu_64128_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3308_fu_64152_p2() {
    add_ln703_3308_fu_64152_p2 = (!sext_ln703_1888_fu_64148_p1.read().is_01() || !add_ln703_3304_fu_64116_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1888_fu_64148_p1.read()) + sc_biguint<14>(add_ln703_3304_fu_64116_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3309_fu_64162_p2() {
    add_ln703_3309_fu_64162_p2 = (!sext_ln1116_63_fu_39445_p1.read().is_01() || !sext_ln1118_406_fu_40210_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_63_fu_39445_p1.read()) + sc_bigint<10>(sext_ln1118_406_fu_40210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_330_fu_45847_p2() {
    add_ln703_330_fu_45847_p2 = (!sext_ln708_17_fu_27924_p1.read().is_01() || !zext_ln708_100_fu_28572_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_17_fu_27924_p1.read()) + sc_biguint<11>(zext_ln708_100_fu_28572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3310_fu_64172_p2() {
    add_ln703_3310_fu_64172_p2 = (!sext_ln703_1890_fu_64168_p1.read().is_01() || !zext_ln708_662_fu_39893_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1890_fu_64168_p1.read()) + sc_biguint<11>(zext_ln708_662_fu_39893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3311_fu_64182_p2() {
    add_ln703_3311_fu_64182_p2 = (!sext_ln708_248_fu_43081_p1.read().is_01() || !zext_ln1118_1000_fu_39493_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_248_fu_43081_p1.read()) + sc_biguint<10>(zext_ln1118_1000_fu_39493_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3313_fu_64192_p2() {
    add_ln703_3313_fu_64192_p2 = (!zext_ln703_565_fu_60891_p1.read().is_01() || !sext_ln703_1892_fu_64188_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_565_fu_60891_p1.read()) + sc_bigint<11>(sext_ln703_1892_fu_64188_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3314_fu_64202_p2() {
    add_ln703_3314_fu_64202_p2 = (!sext_ln703_1893_fu_64198_p1.read().is_01() || !sext_ln703_1891_fu_64178_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1893_fu_64198_p1.read()) + sc_bigint<12>(sext_ln703_1891_fu_64178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3315_fu_64212_p2() {
    add_ln703_3315_fu_64212_p2 = (!sext_ln703_1894_fu_64208_p1.read().is_01() || !sext_ln703_1889_fu_64158_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1894_fu_64208_p1.read()) + sc_bigint<15>(sext_ln703_1889_fu_64158_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3316_fu_64218_p2() {
    add_ln703_3316_fu_64218_p2 = (!add_ln703_3315_fu_64212_p2.read().is_01() || !zext_ln203_421_fu_43105_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3315_fu_64212_p2.read()) + sc_biguint<15>(zext_ln203_421_fu_43105_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3317_fu_64224_p2() {
    add_ln703_3317_fu_64224_p2 = (!sext_ln203_692_fu_43073_p1.read().is_01() || !sext_ln203_583_fu_39843_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_692_fu_43073_p1.read()) + sc_bigint<9>(sext_ln203_583_fu_39843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3318_fu_64234_p2() {
    add_ln703_3318_fu_64234_p2 = (!sext_ln703_1895_fu_64230_p1.read().is_01() || !zext_ln203_415_fu_42764_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1895_fu_64230_p1.read()) + sc_biguint<11>(zext_ln203_415_fu_42764_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_331_fu_45857_p2() {
    add_ln703_331_fu_45857_p2 = (!sext_ln703_276_fu_45853_p1.read().is_01() || !zext_ln703_82_fu_45843_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_276_fu_45853_p1.read()) + sc_biguint<13>(zext_ln703_82_fu_45843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3320_fu_25378_p2() {
    add_ln703_3320_fu_25378_p2 = (!sext_ln203_603_fu_14246_p1.read().is_01() || !sext_ln1116_66_fu_14068_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_603_fu_14246_p1.read()) + sc_bigint<12>(sext_ln1116_66_fu_14068_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3321_fu_64264_p2() {
    add_ln703_3321_fu_64264_p2 = (!sext_ln703_1898_fu_64261_p1.read().is_01() || !or_ln703_22_fu_64254_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1898_fu_64261_p1.read()) + sc_biguint<16>(or_ln703_22_fu_64254_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3322_fu_64270_p2() {
    add_ln703_3322_fu_64270_p2 = (!sext_ln708_226_fu_41802_p1.read().is_01() || !zext_ln1116_265_reg_68880.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_226_fu_41802_p1.read()) + sc_biguint<12>(zext_ln1116_265_reg_68880.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3323_fu_64279_p2() {
    add_ln703_3323_fu_64279_p2 = (!zext_ln708_956_fu_41926_p1.read().is_01() || !zext_ln708_965_fu_43132_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_956_fu_41926_p1.read()) + sc_biguint<11>(zext_ln708_965_fu_43132_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3324_fu_64289_p2() {
    add_ln703_3324_fu_64289_p2 = (!zext_ln703_678_fu_64285_p1.read().is_01() || !sext_ln703_1899_fu_64275_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_678_fu_64285_p1.read()) + sc_bigint<13>(sext_ln703_1899_fu_64275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3325_fu_64299_p2() {
    add_ln703_3325_fu_64299_p2 = (!sext_ln703_1900_fu_64295_p1.read().is_01() || !add_ln703_3321_fu_64264_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1900_fu_64295_p1.read()) + sc_biguint<16>(add_ln703_3321_fu_64264_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3326_fu_64305_p2() {
    add_ln703_3326_fu_64305_p2 = (!zext_ln708_966_fu_43172_p1.read().is_01() || !zext_ln708_932_fu_41220_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_966_fu_43172_p1.read()) + sc_biguint<11>(zext_ln708_932_fu_41220_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3327_fu_64315_p2() {
    add_ln703_3327_fu_64315_p2 = (!zext_ln203_422_fu_43176_p1.read().is_01() || !sext_ln203_696_fu_43109_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_422_fu_43176_p1.read()) + sc_bigint<12>(sext_ln203_696_fu_43109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3328_fu_64325_p2() {
    add_ln703_3328_fu_64325_p2 = (!sext_ln703_1901_fu_64321_p1.read().is_01() || !zext_ln703_679_fu_64311_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1901_fu_64321_p1.read()) + sc_biguint<13>(zext_ln703_679_fu_64311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3329_fu_64335_p2() {
    add_ln703_3329_fu_64335_p2 = (!sext_ln203_697_fu_43152_p1.read().is_01() || !sext_ln708_218_fu_41178_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_697_fu_43152_p1.read()) + sc_bigint<11>(sext_ln708_218_fu_41178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_332_fu_45867_p2() {
    add_ln703_332_fu_45867_p2 = (!sext_ln703_277_fu_45863_p1.read().is_01() || !add_ln703_328_fu_45831_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_277_fu_45863_p1.read()) + sc_biguint<15>(add_ln703_328_fu_45831_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3330_fu_64345_p2() {
    add_ln703_3330_fu_64345_p2 = (!sext_ln203_678_fu_42768_p1.read().is_01() || !zext_ln1116_235_fu_39384_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_678_fu_42768_p1.read()) + sc_biguint<11>(zext_ln1116_235_fu_39384_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3331_fu_64355_p2() {
    add_ln703_3331_fu_64355_p2 = (!sext_ln703_1904_fu_64351_p1.read().is_01() || !sext_ln703_1903_fu_64341_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1904_fu_64351_p1.read()) + sc_bigint<12>(sext_ln703_1903_fu_64341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3332_fu_64365_p2() {
    add_ln703_3332_fu_64365_p2 = (!sext_ln703_1905_fu_64361_p1.read().is_01() || !sext_ln703_1902_fu_64331_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1905_fu_64361_p1.read()) + sc_bigint<14>(sext_ln703_1902_fu_64331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3333_fu_64375_p2() {
    add_ln703_3333_fu_64375_p2 = (!sext_ln703_1906_fu_64371_p1.read().is_01() || !add_ln703_3325_fu_64299_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1906_fu_64371_p1.read()) + sc_biguint<16>(add_ln703_3325_fu_64299_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3334_fu_64381_p2() {
    add_ln703_3334_fu_64381_p2 = (!zext_ln203_383_fu_41000_p1.read().is_01() || !sext_ln203_607_fu_40861_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_383_fu_41000_p1.read()) + sc_bigint<11>(sext_ln203_607_fu_40861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3335_fu_64391_p2() {
    add_ln703_3335_fu_64391_p2 = (!sext_ln1116_64_fu_39449_p1.read().is_01() || !zext_ln708_713_reg_68751.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_64_fu_39449_p1.read()) + sc_biguint<11>(zext_ln708_713_reg_68751.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3336_fu_64400_p2() {
    add_ln703_3336_fu_64400_p2 = (!sext_ln703_1908_fu_64396_p1.read().is_01() || !sext_ln703_1907_fu_64387_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1908_fu_64396_p1.read()) + sc_bigint<12>(sext_ln703_1907_fu_64387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3337_fu_25384_p2() {
    add_ln703_3337_fu_25384_p2 = (!zext_ln203_377_fu_14218_p1.read().is_01() || !sext_ln203_695_fu_15962_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_377_fu_14218_p1.read()) + sc_bigint<11>(sext_ln203_695_fu_15962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3338_fu_25390_p2() {
    add_ln703_3338_fu_25390_p2 = (!sext_ln1118_462_fu_15766_p1.read().is_01() || !zext_ln1118_1026_fu_13380_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_462_fu_15766_p1.read()) + sc_biguint<9>(zext_ln1118_1026_fu_13380_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3339_fu_25400_p2() {
    add_ln703_3339_fu_25400_p2 = (!sext_ln703_1910_fu_25396_p1.read().is_01() || !add_ln703_3337_fu_25384_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1910_fu_25396_p1.read()) + sc_biguint<11>(add_ln703_3337_fu_25384_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_333_fu_45873_p2() {
    add_ln703_333_fu_45873_p2 = (!sext_ln708_26_fu_28582_p1.read().is_01() || !zext_ln708_49_fu_26796_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_26_fu_28582_p1.read()) + sc_biguint<11>(zext_ln708_49_fu_26796_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3340_fu_64413_p2() {
    add_ln703_3340_fu_64413_p2 = (!sext_ln703_1911_fu_64410_p1.read().is_01() || !sext_ln703_1909_fu_64406_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1911_fu_64410_p1.read()) + sc_bigint<13>(sext_ln703_1909_fu_64406_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3341_fu_64419_p2() {
    add_ln703_3341_fu_64419_p2 = (!zext_ln1118_727_reg_68451.read().is_01() || !zext_ln203_394_fu_41681_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_727_reg_68451.read()) + sc_biguint<9>(zext_ln203_394_fu_41681_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3342_fu_64428_p2() {
    add_ln703_3342_fu_64428_p2 = (!zext_ln1116_233_reg_68479.read().is_01() || !zext_ln708_648_fu_39401_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_233_reg_68479.read()) + sc_biguint<9>(zext_ln708_648_fu_39401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3343_fu_64437_p2() {
    add_ln703_3343_fu_64437_p2 = (!zext_ln703_681_fu_64433_p1.read().is_01() || !zext_ln703_680_fu_64424_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_681_fu_64433_p1.read()) + sc_biguint<10>(zext_ln703_680_fu_64424_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3344_fu_64447_p2() {
    add_ln703_3344_fu_64447_p2 = (!zext_ln708_926_fu_40900_p1.read().is_01() || !zext_ln708_914_fu_39979_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_926_fu_40900_p1.read()) + sc_biguint<8>(zext_ln708_914_fu_39979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3345_fu_64457_p2() {
    add_ln703_3345_fu_64457_p2 = (!zext_ln1116_241_fu_39528_p1.read().is_01() || !zext_ln1118_1009_fu_39671_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_241_fu_39528_p1.read()) + sc_biguint<9>(zext_ln1118_1009_fu_39671_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3346_fu_64467_p2() {
    add_ln703_3346_fu_64467_p2 = (!zext_ln703_684_fu_64463_p1.read().is_01() || !zext_ln703_683_fu_64453_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_684_fu_64463_p1.read()) + sc_biguint<10>(zext_ln703_683_fu_64453_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3347_fu_64477_p2() {
    add_ln703_3347_fu_64477_p2 = (!zext_ln703_685_fu_64473_p1.read().is_01() || !zext_ln703_682_fu_64443_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_685_fu_64473_p1.read()) + sc_biguint<11>(zext_ln703_682_fu_64443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3348_fu_64487_p2() {
    add_ln703_3348_fu_64487_p2 = (!zext_ln703_686_fu_64483_p1.read().is_01() || !add_ln703_3340_fu_64413_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_686_fu_64483_p1.read()) + sc_biguint<13>(add_ln703_3340_fu_64413_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_334_fu_45879_p2() {
    add_ln703_334_fu_45879_p2 = (!add_ln703_333_fu_45873_p2.read().is_01() || !sext_ln1118_53_fu_28524_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_333_fu_45873_p2.read()) + sc_bigint<11>(sext_ln1118_53_fu_28524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3350_fu_25406_p2() {
    add_ln703_3350_fu_25406_p2 = (!sext_ln203_698_fu_15982_p1.read().is_01() || !ap_const_lv12_C80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_698_fu_15982_p1.read()) + sc_bigint<12>(ap_const_lv12_C80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3351_fu_25416_p2() {
    add_ln703_3351_fu_25416_p2 = (!sext_ln703_442_fu_25412_p1.read().is_01() || !sext_ln203_688_fu_15894_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_442_fu_25412_p1.read()) + sc_bigint<13>(sext_ln203_688_fu_15894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3352_fu_25422_p2() {
    add_ln703_3352_fu_25422_p2 = (!sext_ln203_653_fu_15488_p1.read().is_01() || !zext_ln708_632_fu_12594_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_653_fu_15488_p1.read()) + sc_biguint<11>(zext_ln708_632_fu_12594_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3353_fu_25432_p2() {
    add_ln703_3353_fu_25432_p2 = (!sext_ln703_1913_fu_25428_p1.read().is_01() || !add_ln703_3351_fu_25416_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1913_fu_25428_p1.read()) + sc_biguint<13>(add_ln703_3351_fu_25416_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3354_fu_25442_p2() {
    add_ln703_3354_fu_25442_p2 = (!sext_ln708_223_fu_14734_p1.read().is_01() || !sext_ln708_249_fu_16012_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_223_fu_14734_p1.read()) + sc_bigint<12>(sext_ln708_249_fu_16012_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3355_fu_25452_p2() {
    add_ln703_3355_fu_25452_p2 = (!sext_ln703_1914_fu_25448_p1.read().is_01() || !sext_ln703_443_fu_25438_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1914_fu_25448_p1.read()) + sc_bigint<14>(sext_ln703_443_fu_25438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3356_fu_25458_p2() {
    add_ln703_3356_fu_25458_p2 = (!zext_ln1118_1118_fu_16032_p1.read().is_01() || !sext_ln708_209_fu_13792_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1118_fu_16032_p1.read()) + sc_bigint<12>(sext_ln708_209_fu_13792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3357_fu_25468_p2() {
    add_ln703_3357_fu_25468_p2 = (!sext_ln703_1915_fu_25464_p1.read().is_01() || !zext_ln708_638_fu_12816_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1915_fu_25464_p1.read()) + sc_biguint<13>(zext_ln708_638_fu_12816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3358_fu_64506_p2() {
    add_ln703_3358_fu_64506_p2 = (!sext_ln703_1916_fu_64503_p1.read().is_01() || !add_ln703_3355_reg_70066.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1916_fu_64503_p1.read()) + sc_biguint<14>(add_ln703_3355_reg_70066.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3359_fu_64511_p2() {
    add_ln703_3359_fu_64511_p2 = (!sext_ln1118_409_reg_68633.read().is_01() || !zext_ln1118_1075_fu_41066_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_409_reg_68633.read()) + sc_biguint<12>(zext_ln1118_1075_fu_41066_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_335_fu_45889_p2() {
    add_ln703_335_fu_45889_p2 = (!zext_ln708_697_fu_27646_p1.read().is_01() || !zext_ln708_708_fu_28029_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_697_fu_27646_p1.read()) + sc_biguint<8>(zext_ln708_708_fu_28029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3360_fu_64520_p2() {
    add_ln703_3360_fu_64520_p2 = (!sext_ln703_1917_fu_64516_p1.read().is_01() || !add_ln703_3358_fu_64506_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1917_fu_64516_p1.read()) + sc_biguint<14>(add_ln703_3358_fu_64506_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3361_fu_64530_p2() {
    add_ln703_3361_fu_64530_p2 = (!sext_ln708_235_fu_42012_p1.read().is_01() || !sext_ln1118_473_fu_42787_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_235_fu_42012_p1.read()) + sc_bigint<11>(sext_ln1118_473_fu_42787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3362_fu_64540_p2() {
    add_ln703_3362_fu_64540_p2 = (!sext_ln703_1919_fu_64536_p1.read().is_01() || !zext_ln1116_239_fu_39489_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1919_fu_64536_p1.read()) + sc_biguint<12>(zext_ln1116_239_fu_39489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3363_fu_64550_p2() {
    add_ln703_3363_fu_64550_p2 = (!sext_ln703_1920_fu_64546_p1.read().is_01() || !sext_ln703_1918_fu_64526_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1920_fu_64546_p1.read()) + sc_bigint<15>(sext_ln703_1918_fu_64526_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3364_fu_64556_p2() {
    add_ln703_3364_fu_64556_p2 = (!sext_ln1118_476_fu_42850_p1.read().is_01() || !sext_ln203_700_fu_43200_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_476_fu_42850_p1.read()) + sc_bigint<10>(sext_ln203_700_fu_43200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3365_fu_64566_p2() {
    add_ln703_3365_fu_64566_p2 = (!sext_ln703_1921_fu_64562_p1.read().is_01() || !sext_ln203_680_fu_42807_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1921_fu_64562_p1.read()) + sc_bigint<11>(sext_ln203_680_fu_42807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3366_fu_25474_p2() {
    add_ln703_3366_fu_25474_p2 = (!zext_ln708_952_fu_15200_p1.read().is_01() || !zext_ln708_967_fu_16046_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_952_fu_15200_p1.read()) + sc_biguint<8>(zext_ln708_967_fu_16046_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3367_fu_64575_p2() {
    add_ln703_3367_fu_64575_p2 = (!zext_ln703_687_fu_64572_p1.read().is_01() || !sext_ln1118_488_fu_43224_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_687_fu_64572_p1.read()) + sc_bigint<10>(sext_ln1118_488_fu_43224_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3368_fu_64585_p2() {
    add_ln703_3368_fu_64585_p2 = (!sext_ln703_1922_fu_64581_p1.read().is_01() || !add_ln703_3365_fu_64566_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1922_fu_64581_p1.read()) + sc_biguint<11>(add_ln703_3365_fu_64566_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3369_fu_64595_p2() {
    add_ln703_3369_fu_64595_p2 = (!sext_ln703_1923_fu_64591_p1.read().is_01() || !add_ln703_3363_fu_64550_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1923_fu_64591_p1.read()) + sc_biguint<15>(add_ln703_3363_fu_64550_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_336_fu_45899_p2() {
    add_ln703_336_fu_45899_p2 = (!zext_ln708_39_fu_26501_p1.read().is_01() || !zext_ln203_63_fu_28579_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_39_fu_26501_p1.read()) + sc_biguint<9>(zext_ln203_63_fu_28579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3370_fu_64601_p2() {
    add_ln703_3370_fu_64601_p2 = (!add_ln703_3369_fu_64595_p2.read().is_01() || !sext_ln203_702_fu_43248_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3369_fu_64595_p2.read()) + sc_bigint<15>(sext_ln203_702_fu_43248_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3371_fu_64607_p2() {
    add_ln703_3371_fu_64607_p2 = (!zext_ln708_668_fu_40046_p1.read().is_01() || !zext_ln1118_1011_fu_39719_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_668_fu_40046_p1.read()) + sc_biguint<10>(zext_ln1118_1011_fu_39719_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3372_fu_64617_p2() {
    add_ln703_3372_fu_64617_p2 = (!zext_ln703_688_fu_64613_p1.read().is_01() || !sext_ln203_674_fu_42609_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_688_fu_64613_p1.read()) + sc_bigint<12>(sext_ln203_674_fu_42609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3373_fu_64627_p2() {
    add_ln703_3373_fu_64627_p2 = (!sext_ln703_1924_fu_64623_p1.read().is_01() || !add_ln703_3370_fu_64601_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1924_fu_64623_p1.read()) + sc_biguint<15>(add_ln703_3370_fu_64601_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3374_fu_64633_p2() {
    add_ln703_3374_fu_64633_p2 = (!zext_ln708_704_fu_41200_p1.read().is_01() || !sext_ln203_701_fu_43244_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_704_fu_41200_p1.read()) + sc_bigint<11>(sext_ln203_701_fu_43244_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3375_fu_64639_p2() {
    add_ln703_3375_fu_64639_p2 = (!zext_ln708_957_fu_41936_p1.read().is_01() || !zext_ln708_931_fu_41192_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_957_fu_41936_p1.read()) + sc_biguint<8>(zext_ln708_931_fu_41192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3376_fu_64649_p2() {
    add_ln703_3376_fu_64649_p2 = (!zext_ln703_689_fu_64645_p1.read().is_01() || !sext_ln203_703_fu_43252_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_689_fu_64645_p1.read()) + sc_bigint<10>(sext_ln203_703_fu_43252_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3377_fu_64659_p2() {
    add_ln703_3377_fu_64659_p2 = (!sext_ln703_1925_fu_64655_p1.read().is_01() || !add_ln703_3374_fu_64633_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1925_fu_64655_p1.read()) + sc_biguint<11>(add_ln703_3374_fu_64633_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3379_fu_25480_p2() {
    add_ln703_3379_fu_25480_p2 = (!sext_ln203_590_fu_13286_p1.read().is_01() || !ap_const_lv12_F00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_590_fu_13286_p1.read()) + sc_bigint<12>(ap_const_lv12_F00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_337_fu_45909_p2() {
    add_ln703_337_fu_45909_p2 = (!zext_ln703_84_fu_45905_p1.read().is_01() || !zext_ln703_83_fu_45895_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_84_fu_45905_p1.read()) + sc_biguint<10>(zext_ln703_83_fu_45895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3380_fu_25490_p2() {
    add_ln703_3380_fu_25490_p2 = (!sext_ln703_446_fu_25486_p1.read().is_01() || !sext_ln203_688_fu_15894_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_446_fu_25486_p1.read()) + sc_bigint<13>(sext_ln203_688_fu_15894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3381_fu_25496_p2() {
    add_ln703_3381_fu_25496_p2 = (!sext_ln1118_408_fu_13768_p1.read().is_01() || !zext_ln1116_249_fu_14020_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_408_fu_13768_p1.read()) + sc_biguint<12>(zext_ln1116_249_fu_14020_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3382_fu_25506_p2() {
    add_ln703_3382_fu_25506_p2 = (!sext_ln703_1928_fu_25502_p1.read().is_01() || !add_ln703_3380_fu_25490_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1928_fu_25502_p1.read()) + sc_biguint<13>(add_ln703_3380_fu_25490_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3383_fu_25516_p2() {
    add_ln703_3383_fu_25516_p2 = (!sext_ln703_447_fu_25512_p1.read().is_01() || !sext_ln203_704_fu_16074_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_447_fu_25512_p1.read()) + sc_bigint<14>(sext_ln203_704_fu_16074_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3384_fu_25522_p2() {
    add_ln703_3384_fu_25522_p2 = (!sext_ln203_639_fu_14980_p1.read().is_01() || !sext_ln1118_490_fu_16050_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_639_fu_14980_p1.read()) + sc_bigint<9>(sext_ln1118_490_fu_16050_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3385_fu_25532_p2() {
    add_ln703_3385_fu_25532_p2 = (!sext_ln703_1929_fu_25528_p1.read().is_01() || !add_ln703_3383_fu_25516_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1929_fu_25528_p1.read()) + sc_biguint<14>(add_ln703_3383_fu_25516_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3386_fu_25538_p2() {
    add_ln703_3386_fu_25538_p2 = (!sext_ln708_250_fu_16054_p1.read().is_01() || !zext_ln1118_985_fu_12692_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_250_fu_16054_p1.read()) + sc_biguint<10>(zext_ln1118_985_fu_12692_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3387_fu_25548_p2() {
    add_ln703_3387_fu_25548_p2 = (!zext_ln708_681_fu_14154_p1.read().is_01() || !zext_ln203_399_fu_15204_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_681_fu_14154_p1.read()) + sc_biguint<9>(zext_ln203_399_fu_15204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3388_fu_25558_p2() {
    add_ln703_3388_fu_25558_p2 = (!zext_ln703_690_fu_25554_p1.read().is_01() || !zext_ln708_639_fu_12820_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_690_fu_25554_p1.read()) + sc_biguint<10>(zext_ln708_639_fu_12820_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3389_fu_25568_p2() {
    add_ln703_3389_fu_25568_p2 = (!zext_ln703_691_fu_25564_p1.read().is_01() || !sext_ln703_1930_fu_25544_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_691_fu_25564_p1.read()) + sc_bigint<11>(sext_ln703_1930_fu_25544_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_338_fu_45919_p2() {
    add_ln703_338_fu_45919_p2 = (!zext_ln703_85_fu_45915_p1.read().is_01() || !sext_ln703_278_fu_45885_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_85_fu_45915_p1.read()) + sc_bigint<12>(sext_ln703_278_fu_45885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3390_fu_64682_p2() {
    add_ln703_3390_fu_64682_p2 = (!sext_ln703_1931_fu_64679_p1.read().is_01() || !add_ln703_3385_reg_70081.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1931_fu_64679_p1.read()) + sc_biguint<14>(add_ln703_3385_reg_70081.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3391_fu_64687_p2() {
    add_ln703_3391_fu_64687_p2 = (!zext_ln203_374_fu_40249_p1.read().is_01() || !sext_ln1118_491_fu_43266_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_374_fu_40249_p1.read()) + sc_bigint<12>(sext_ln1118_491_fu_43266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3392_fu_64697_p2() {
    add_ln703_3392_fu_64697_p2 = (!sext_ln703_1932_fu_64693_p1.read().is_01() || !add_ln703_3390_fu_64682_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1932_fu_64693_p1.read()) + sc_biguint<14>(add_ln703_3390_fu_64682_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3393_fu_64707_p2() {
    add_ln703_3393_fu_64707_p2 = (!sext_ln708_252_fu_43280_p1.read().is_01() || !sext_ln203_705_fu_43300_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_252_fu_43280_p1.read()) + sc_bigint<11>(sext_ln203_705_fu_43300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3394_fu_64717_p2() {
    add_ln703_3394_fu_64717_p2 = (!sext_ln703_1934_fu_64713_p1.read().is_01() || !sext_ln203_621_fu_41269_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1934_fu_64713_p1.read()) + sc_bigint<12>(sext_ln203_621_fu_41269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3395_fu_64727_p2() {
    add_ln703_3395_fu_64727_p2 = (!sext_ln703_1935_fu_64723_p1.read().is_01() || !sext_ln703_1933_fu_64703_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1935_fu_64723_p1.read()) + sc_bigint<15>(sext_ln703_1933_fu_64703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3396_fu_64733_p2() {
    add_ln703_3396_fu_64733_p2 = (!zext_ln1118_1065_fu_40626_p1.read().is_01() || !zext_ln1118_1105_fu_42460_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1065_fu_40626_p1.read()) + sc_biguint<10>(zext_ln1118_1105_fu_42460_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3397_fu_64743_p2() {
    add_ln703_3397_fu_64743_p2 = (!zext_ln703_692_fu_64739_p1.read().is_01() || !zext_ln1116_267_fu_42334_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_692_fu_64739_p1.read()) + sc_biguint<11>(zext_ln1116_267_fu_42334_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3398_fu_64753_p2() {
    add_ln703_3398_fu_64753_p2 = (!zext_ln708_666_fu_40042_p1.read().is_01() || !sext_ln708_216_fu_41086_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_666_fu_40042_p1.read()) + sc_bigint<11>(sext_ln708_216_fu_41086_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3399_fu_64763_p2() {
    add_ln703_3399_fu_64763_p2 = (!zext_ln708_652_fu_39496_p1.read().is_01() || !zext_ln1118_740_fu_39707_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_652_fu_39496_p1.read()) + sc_biguint<9>(zext_ln1118_740_fu_39707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_33_fu_16388_p2() {
    add_ln703_33_fu_16388_p2 = (!sext_ln1118_6_fu_1756_p1.read().is_01() || !zext_ln1116_12_fu_1306_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_6_fu_1756_p1.read()) + sc_biguint<11>(zext_ln1116_12_fu_1306_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3400_fu_64773_p2() {
    add_ln703_3400_fu_64773_p2 = (!zext_ln703_694_fu_64769_p1.read().is_01() || !sext_ln703_1936_fu_64759_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_694_fu_64769_p1.read()) + sc_bigint<12>(sext_ln703_1936_fu_64759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3401_fu_64783_p2() {
    add_ln703_3401_fu_64783_p2 = (!sext_ln703_1937_fu_64779_p1.read().is_01() || !zext_ln703_693_fu_64749_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1937_fu_64779_p1.read()) + sc_biguint<13>(zext_ln703_693_fu_64749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3402_fu_64793_p2() {
    add_ln703_3402_fu_64793_p2 = (!sext_ln703_1938_fu_64789_p1.read().is_01() || !add_ln703_3395_fu_64727_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1938_fu_64789_p1.read()) + sc_biguint<15>(add_ln703_3395_fu_64727_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3403_fu_64799_p2() {
    add_ln703_3403_fu_64799_p2 = (!add_ln703_3402_fu_64793_p2.read().is_01() || !sext_ln203_685_fu_42917_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3402_fu_64793_p2.read()) + sc_bigint<15>(sext_ln203_685_fu_42917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3404_fu_64805_p2() {
    add_ln703_3404_fu_64805_p2 = (!zext_ln203_423_fu_43320_p1.read().is_01() || !sext_ln203_648_fu_42005_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_423_fu_43320_p1.read()) + sc_bigint<11>(sext_ln203_648_fu_42005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3406_fu_25574_p2() {
    add_ln703_3406_fu_25574_p2 = (!lshr_ln708_753_fu_13978_p4.read().is_01() || !ap_const_lv9_180.is_01())? sc_lv<9>(): (sc_biguint<9>(lshr_ln708_753_fu_13978_p4.read()) + sc_bigint<9>(ap_const_lv9_180));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3407_fu_25584_p2() {
    add_ln703_3407_fu_25584_p2 = (!sext_ln203_637_fu_14962_p1.read().is_01() || !sext_ln703_1941_fu_25580_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_637_fu_14962_p1.read()) + sc_bigint<11>(sext_ln703_1941_fu_25580_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3408_fu_25590_p2() {
    add_ln703_3408_fu_25590_p2 = (!zext_ln708_968_fu_16088_p1.read().is_01() || !zext_ln708_918_fu_13376_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_968_fu_16088_p1.read()) + sc_biguint<8>(zext_ln708_918_fu_13376_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3409_fu_25600_p2() {
    add_ln703_3409_fu_25600_p2 = (!zext_ln703_695_fu_25596_p1.read().is_01() || !add_ln703_3407_fu_25584_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_695_fu_25596_p1.read()) + sc_biguint<11>(add_ln703_3407_fu_25584_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_340_fu_17190_p2() {
    add_ln703_340_fu_17190_p2 = (!zext_ln708_734_fu_3772_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_734_fu_3772_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3410_fu_25610_p2() {
    add_ln703_3410_fu_25610_p2 = (!sext_ln1118_395_fu_13412_p1.read().is_01() || !sext_ln1118_461_fu_15762_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_395_fu_13412_p1.read()) + sc_bigint<10>(sext_ln1118_461_fu_15762_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3411_fu_25620_p2() {
    add_ln703_3411_fu_25620_p2 = (!sext_ln703_1943_fu_25616_p1.read().is_01() || !sext_ln703_1942_fu_25606_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1943_fu_25616_p1.read()) + sc_bigint<12>(sext_ln703_1942_fu_25606_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3412_fu_25626_p2() {
    add_ln703_3412_fu_25626_p2 = (!sext_ln203_606_fu_14314_p1.read().is_01() || !sext_ln203_595_fu_13880_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_606_fu_14314_p1.read()) + sc_bigint<11>(sext_ln203_595_fu_13880_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3413_fu_25636_p2() {
    add_ln703_3413_fu_25636_p2 = (!sext_ln703_1944_fu_25632_p1.read().is_01() || !add_ln703_3411_fu_25620_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1944_fu_25632_p1.read()) + sc_biguint<12>(add_ln703_3411_fu_25620_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3414_fu_25646_p2() {
    add_ln703_3414_fu_25646_p2 = (!sext_ln1118_480_fu_15954_p1.read().is_01() || !zext_ln203_399_fu_15204_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_480_fu_15954_p1.read()) + sc_biguint<9>(zext_ln203_399_fu_15204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3415_fu_25656_p2() {
    add_ln703_3415_fu_25656_p2 = (!sext_ln703_1946_fu_25652_p1.read().is_01() || !sext_ln1118_444_fu_15408_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1946_fu_25652_p1.read()) + sc_bigint<10>(sext_ln1118_444_fu_15408_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3416_fu_25666_p2() {
    add_ln703_3416_fu_25666_p2 = (!sext_ln703_1947_fu_25662_p1.read().is_01() || !sext_ln703_1945_fu_25642_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1947_fu_25662_p1.read()) + sc_bigint<13>(sext_ln703_1945_fu_25642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3417_fu_64825_p2() {
    add_ln703_3417_fu_64825_p2 = (!add_ln703_3416_reg_70091.read().is_01() || !sext_ln1118_495_fu_43327_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3416_reg_70091.read()) + sc_bigint<13>(sext_ln1118_495_fu_43327_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3418_fu_64830_p2() {
    add_ln703_3418_fu_64830_p2 = (!sext_ln1118_453_fu_42480_p1.read().is_01() || !sext_ln1118_476_fu_42850_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_453_fu_42480_p1.read()) + sc_bigint<10>(sext_ln1118_476_fu_42850_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3419_fu_64840_p2() {
    add_ln703_3419_fu_64840_p2 = (!sext_ln703_1948_fu_64836_p1.read().is_01() || !sext_ln708_254_fu_43330_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1948_fu_64836_p1.read()) + sc_bigint<11>(sext_ln708_254_fu_43330_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_341_fu_17200_p2() {
    add_ln703_341_fu_17200_p2 = (!sext_ln203_4_fu_1724_p1.read().is_01() || !zext_ln203_fu_1242_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_4_fu_1724_p1.read()) + sc_biguint<12>(zext_ln203_fu_1242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3420_fu_64850_p2() {
    add_ln703_3420_fu_64850_p2 = (!sext_ln703_1949_fu_64846_p1.read().is_01() || !add_ln703_3417_fu_64825_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1949_fu_64846_p1.read()) + sc_biguint<13>(add_ln703_3417_fu_64825_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3421_fu_64860_p2() {
    add_ln703_3421_fu_64860_p2 = (!sext_ln1118_487_fu_43220_p1.read().is_01() || !sext_ln203_706_fu_43337_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_487_fu_43220_p1.read()) + sc_bigint<9>(sext_ln203_706_fu_43337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3422_fu_64870_p2() {
    add_ln703_3422_fu_64870_p2 = (!sext_ln703_1951_fu_64866_p1.read().is_01() || !sext_ln203_700_fu_43200_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1951_fu_64866_p1.read()) + sc_bigint<10>(sext_ln203_700_fu_43200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3423_fu_64880_p2() {
    add_ln703_3423_fu_64880_p2 = (!zext_ln203_424_fu_43333_p1.read().is_01() || !zext_ln1118_1001_fu_39535_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_424_fu_43333_p1.read()) + sc_biguint<9>(zext_ln1118_1001_fu_39535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3424_fu_64890_p2() {
    add_ln703_3424_fu_64890_p2 = (!zext_ln703_696_fu_64886_p1.read().is_01() || !sext_ln708_244_fu_43045_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_696_fu_64886_p1.read()) + sc_bigint<10>(sext_ln708_244_fu_43045_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3425_fu_64900_p2() {
    add_ln703_3425_fu_64900_p2 = (!sext_ln703_1953_fu_64896_p1.read().is_01() || !sext_ln703_1952_fu_64876_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1953_fu_64896_p1.read()) + sc_bigint<11>(sext_ln703_1952_fu_64876_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3426_fu_64910_p2() {
    add_ln703_3426_fu_64910_p2 = (!sext_ln703_1954_fu_64906_p1.read().is_01() || !sext_ln703_1950_fu_64856_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1954_fu_64906_p1.read()) + sc_bigint<14>(sext_ln703_1950_fu_64856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3427_fu_64916_p2() {
    add_ln703_3427_fu_64916_p2 = (!sext_ln203_683_fu_42909_p1.read().is_01() || !sext_ln203_707_fu_43341_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_683_fu_42909_p1.read()) + sc_bigint<11>(sext_ln203_707_fu_43341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3428_fu_64926_p2() {
    add_ln703_3428_fu_64926_p2 = (!sext_ln703_1955_fu_64922_p1.read().is_01() || !add_ln703_3426_fu_64910_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1955_fu_64922_p1.read()) + sc_biguint<14>(add_ln703_3426_fu_64910_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3429_fu_64932_p2() {
    add_ln703_3429_fu_64932_p2 = (!zext_ln708_916_fu_40110_p1.read().is_01() || !zext_ln708_949_fu_41830_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_916_fu_40110_p1.read()) + sc_biguint<8>(zext_ln708_949_fu_41830_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_342_fu_17206_p2() {
    add_ln703_342_fu_17206_p2 = (!add_ln703_341_fu_17200_p2.read().is_01() || !sext_ln703_50_fu_17196_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_341_fu_17200_p2.read()) + sc_bigint<12>(sext_ln703_50_fu_17196_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3430_fu_64942_p2() {
    add_ln703_3430_fu_64942_p2 = (!zext_ln703_697_fu_64938_p1.read().is_01() || !sext_ln203_691_fu_43069_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_697_fu_64938_p1.read()) + sc_bigint<10>(sext_ln203_691_fu_43069_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3432_fu_25672_p2() {
    add_ln703_3432_fu_25672_p2 = (!lshr_ln708_735_fu_13052_p4.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(lshr_ln708_735_fu_13052_p4.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3433_fu_25682_p2() {
    add_ln703_3433_fu_25682_p2 = (!sext_ln703_1958_fu_25678_p1.read().is_01() || !zext_ln708_632_fu_12594_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1958_fu_25678_p1.read()) + sc_biguint<11>(zext_ln708_632_fu_12594_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3434_fu_25692_p2() {
    add_ln703_3434_fu_25692_p2 = (!sext_ln703_1959_fu_25688_p1.read().is_01() || !sext_ln203_649_fu_15350_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1959_fu_25688_p1.read()) + sc_bigint<12>(sext_ln203_649_fu_15350_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3435_fu_25702_p2() {
    add_ln703_3435_fu_25702_p2 = (!sext_ln1118_446_fu_15580_p1.read().is_01() || !sext_ln203_708_fu_16118_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_446_fu_15580_p1.read()) + sc_bigint<12>(sext_ln203_708_fu_16118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3436_fu_25712_p2() {
    add_ln703_3436_fu_25712_p2 = (!sext_ln703_1960_fu_25708_p1.read().is_01() || !sext_ln703_456_fu_25698_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1960_fu_25708_p1.read()) + sc_bigint<13>(sext_ln703_456_fu_25698_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3437_fu_64965_p2() {
    add_ln703_3437_fu_64965_p2 = (!sext_ln708_212_reg_68659.read().is_01() || !zext_ln1118_1096_fu_42009_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_212_reg_68659.read()) + sc_biguint<12>(zext_ln1118_1096_fu_42009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3438_fu_64974_p2() {
    add_ln703_3438_fu_64974_p2 = (!sext_ln703_1961_fu_64970_p1.read().is_01() || !sext_ln703_457_fu_64962_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1961_fu_64970_p1.read()) + sc_bigint<14>(sext_ln703_457_fu_64962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3439_fu_25718_p2() {
    add_ln703_3439_fu_25718_p2 = (!zext_ln1118_1030_fu_13514_p1.read().is_01() || !sext_ln708_256_fu_16122_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_1030_fu_13514_p1.read()) + sc_bigint<11>(sext_ln708_256_fu_16122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_343_fu_17216_p2() {
    add_ln703_343_fu_17216_p2 = (!sext_ln1118_44_fu_3222_p1.read().is_01() || !sext_ln708_18_fu_3242_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_44_fu_3222_p1.read()) + sc_bigint<12>(sext_ln708_18_fu_3242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3440_fu_25724_p2() {
    add_ln703_3440_fu_25724_p2 = (!sext_ln1118_497_fu_16126_p1.read().is_01() || !zext_ln1118_1095_fu_15388_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_497_fu_16126_p1.read()) + sc_biguint<9>(zext_ln1118_1095_fu_15388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3441_fu_25734_p2() {
    add_ln703_3441_fu_25734_p2 = (!sext_ln703_1962_fu_25730_p1.read().is_01() || !add_ln703_3439_fu_25718_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1962_fu_25730_p1.read()) + sc_biguint<11>(add_ln703_3439_fu_25718_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3442_fu_64983_p2() {
    add_ln703_3442_fu_64983_p2 = (!sext_ln703_1963_fu_64980_p1.read().is_01() || !add_ln703_3438_fu_64974_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1963_fu_64980_p1.read()) + sc_biguint<14>(add_ln703_3438_fu_64974_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3443_fu_64989_p2() {
    add_ln703_3443_fu_64989_p2 = (!add_ln703_3442_fu_64983_p2.read().is_01() || !sext_ln1118_451_fu_42449_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3442_fu_64983_p2.read()) + sc_bigint<14>(sext_ln1118_451_fu_42449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3444_fu_64999_p2() {
    add_ln703_3444_fu_64999_p2 = (!sext_ln708_235_fu_42012_p1.read().is_01() || !sext_ln203_632_fu_41554_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_235_fu_42012_p1.read()) + sc_bigint<11>(sext_ln203_632_fu_41554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3445_fu_65009_p2() {
    add_ln703_3445_fu_65009_p2 = (!sext_ln703_1965_fu_65005_p1.read().is_01() || !sext_ln708_257_fu_43371_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1965_fu_65005_p1.read()) + sc_bigint<12>(sext_ln708_257_fu_43371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3446_fu_65019_p2() {
    add_ln703_3446_fu_65019_p2 = (!sext_ln703_1966_fu_65015_p1.read().is_01() || !sext_ln703_1964_fu_64995_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1966_fu_65015_p1.read()) + sc_bigint<15>(sext_ln703_1964_fu_64995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3447_fu_65025_p2() {
    add_ln703_3447_fu_65025_p2 = (!sext_ln203_681_fu_42811_p1.read().is_01() || !sext_ln203_596_fu_40505_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_681_fu_42811_p1.read()) + sc_bigint<10>(sext_ln203_596_fu_40505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3448_fu_65035_p2() {
    add_ln703_3448_fu_65035_p2 = (!sext_ln203_699_fu_43196_p1.read().is_01() || !zext_ln1116_258_fu_41362_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_699_fu_43196_p1.read()) + sc_biguint<9>(zext_ln1116_258_fu_41362_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3449_fu_65045_p2() {
    add_ln703_3449_fu_65045_p2 = (!sext_ln703_1968_fu_65041_p1.read().is_01() || !zext_ln708_813_fu_43112_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1968_fu_65041_p1.read()) + sc_biguint<11>(zext_ln708_813_fu_43112_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_344_fu_17226_p2() {
    add_ln703_344_fu_17226_p2 = (!sext_ln703_281_fu_17222_p1.read().is_01() || !sext_ln703_51_fu_17212_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_281_fu_17222_p1.read()) + sc_bigint<13>(sext_ln703_51_fu_17212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3450_fu_65055_p2() {
    add_ln703_3450_fu_65055_p2 = (!sext_ln703_1969_fu_65051_p1.read().is_01() || !sext_ln703_1967_fu_65031_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1969_fu_65051_p1.read()) + sc_bigint<12>(sext_ln703_1967_fu_65031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3451_fu_65065_p2() {
    add_ln703_3451_fu_65065_p2 = (!sext_ln703_1970_fu_65061_p1.read().is_01() || !add_ln703_3446_fu_65019_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1970_fu_65061_p1.read()) + sc_biguint<15>(add_ln703_3446_fu_65019_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3452_fu_65071_p2() {
    add_ln703_3452_fu_65071_p2 = (!add_ln703_3451_fu_65065_p2.read().is_01() || !sext_ln203_665_fu_42365_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3451_fu_65065_p2.read()) + sc_bigint<15>(sext_ln203_665_fu_42365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3453_fu_65077_p2() {
    add_ln703_3453_fu_65077_p2 = (!sext_ln203_597_fu_40564_p1.read().is_01() || !sext_ln203_635_fu_41650_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_597_fu_40564_p1.read()) + sc_bigint<12>(sext_ln203_635_fu_41650_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3454_fu_65087_p2() {
    add_ln703_3454_fu_65087_p2 = (!sext_ln703_1971_fu_65083_p1.read().is_01() || !add_ln703_3452_fu_65071_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1971_fu_65083_p1.read()) + sc_biguint<15>(add_ln703_3452_fu_65071_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3455_fu_65093_p2() {
    add_ln703_3455_fu_65093_p2 = (!zext_ln203_374_fu_40249_p1.read().is_01() || !sext_ln203_674_fu_42609_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_374_fu_40249_p1.read()) + sc_bigint<12>(sext_ln203_674_fu_42609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3456_fu_65099_p2() {
    add_ln703_3456_fu_65099_p2 = (!zext_ln203_388_fu_41196_p1.read().is_01() || !zext_ln708_657_fu_39809_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_388_fu_41196_p1.read()) + sc_biguint<9>(zext_ln708_657_fu_39809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3457_fu_65109_p2() {
    add_ln703_3457_fu_65109_p2 = (!zext_ln703_698_fu_65105_p1.read().is_01() || !add_ln703_3455_fu_65093_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_698_fu_65105_p1.read()) + sc_biguint<12>(add_ln703_3455_fu_65093_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3459_fu_25740_p2() {
    add_ln703_3459_fu_25740_p2 = (!sext_ln703_438_fu_25280_p1.read().is_01() || !sext_ln203_688_fu_15894_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_438_fu_25280_p1.read()) + sc_bigint<13>(sext_ln203_688_fu_15894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_345_fu_17232_p2() {
    add_ln703_345_fu_17232_p2 = (!add_ln703_344_fu_17226_p2.read().is_01() || !sext_ln203_39_fu_3078_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_344_fu_17226_p2.read()) + sc_bigint<13>(sext_ln203_39_fu_3078_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3460_fu_25746_p2() {
    add_ln703_3460_fu_25746_p2 = (!sext_ln203_709_fu_16146_p1.read().is_01() || !zext_ln1118_1031_fu_13518_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_709_fu_16146_p1.read()) + sc_biguint<12>(zext_ln1118_1031_fu_13518_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3461_fu_25756_p2() {
    add_ln703_3461_fu_25756_p2 = (!sext_ln703_1974_fu_25752_p1.read().is_01() || !add_ln703_3459_fu_25740_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1974_fu_25752_p1.read()) + sc_biguint<13>(add_ln703_3459_fu_25740_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3462_fu_25762_p2() {
    add_ln703_3462_fu_25762_p2 = (!zext_ln1118_1069_fu_14274_p1.read().is_01() || !zext_ln1118_1062_fu_14106_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1069_fu_14274_p1.read()) + sc_biguint<10>(zext_ln1118_1062_fu_14106_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3463_fu_25772_p2() {
    add_ln703_3463_fu_25772_p2 = (!zext_ln708_968_fu_16088_p1.read().is_01() || !zext_ln708_922_fu_14090_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_968_fu_16088_p1.read()) + sc_biguint<8>(zext_ln708_922_fu_14090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3464_fu_25782_p2() {
    add_ln703_3464_fu_25782_p2 = (!zext_ln703_700_fu_25778_p1.read().is_01() || !zext_ln708_631_fu_12590_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_700_fu_25778_p1.read()) + sc_biguint<9>(zext_ln708_631_fu_12590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3465_fu_25792_p2() {
    add_ln703_3465_fu_25792_p2 = (!zext_ln703_701_fu_25788_p1.read().is_01() || !zext_ln703_699_fu_25768_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_701_fu_25788_p1.read()) + sc_biguint<11>(zext_ln703_699_fu_25768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3466_fu_25802_p2() {
    add_ln703_3466_fu_25802_p2 = (!zext_ln703_702_fu_25798_p1.read().is_01() || !add_ln703_3461_fu_25756_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_702_fu_25798_p1.read()) + sc_biguint<13>(add_ln703_3461_fu_25756_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3467_fu_25812_p2() {
    add_ln703_3467_fu_25812_p2 = (!zext_ln203_426_fu_16174_p1.read().is_01() || !sext_ln708_258_fu_16150_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_426_fu_16174_p1.read()) + sc_bigint<12>(sext_ln708_258_fu_16150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3468_fu_25822_p2() {
    add_ln703_3468_fu_25822_p2 = (!sext_ln703_1975_fu_25818_p1.read().is_01() || !sext_ln703_461_fu_25808_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1975_fu_25818_p1.read()) + sc_bigint<14>(sext_ln703_461_fu_25808_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3469_fu_65129_p2() {
    add_ln703_3469_fu_65129_p2 = (!sext_ln203_681_fu_42811_p1.read().is_01() || !sext_ln1118_496_fu_43348_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_681_fu_42811_p1.read()) + sc_bigint<10>(sext_ln1118_496_fu_43348_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_346_fu_17242_p2() {
    add_ln703_346_fu_17242_p2 = (!zext_ln708_735_fu_3792_p1.read().is_01() || !zext_ln708_669_fu_1854_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_735_fu_3792_p1.read()) + sc_biguint<10>(zext_ln708_669_fu_1854_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3470_fu_25828_p2() {
    add_ln703_3470_fu_25828_p2 = (!zext_ln1118_993_fu_12902_p1.read().is_01() || !zext_ln1118_1120_fu_16178_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_993_fu_12902_p1.read()) + sc_biguint<9>(zext_ln1118_1120_fu_16178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3471_fu_65142_p2() {
    add_ln703_3471_fu_65142_p2 = (!zext_ln703_703_fu_65139_p1.read().is_01() || !sext_ln703_1976_fu_65135_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_703_fu_65139_p1.read()) + sc_bigint<11>(sext_ln703_1976_fu_65135_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3472_fu_65152_p2() {
    add_ln703_3472_fu_65152_p2 = (!sext_ln703_1977_fu_65148_p1.read().is_01() || !add_ln703_3468_reg_70106.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1977_fu_65148_p1.read()) + sc_biguint<14>(add_ln703_3468_reg_70106.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3473_fu_65157_p2() {
    add_ln703_3473_fu_65157_p2 = (!zext_ln1118_1075_fu_41066_p1.read().is_01() || !sext_ln708_259_fu_43395_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1075_fu_41066_p1.read()) + sc_bigint<12>(sext_ln708_259_fu_43395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3474_fu_65167_p2() {
    add_ln703_3474_fu_65167_p2 = (!sext_ln703_1978_fu_65163_p1.read().is_01() || !add_ln703_3472_fu_65152_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1978_fu_65163_p1.read()) + sc_biguint<14>(add_ln703_3472_fu_65152_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3475_fu_65177_p2() {
    add_ln703_3475_fu_65177_p2 = (!sext_ln1118_434_fu_41490_p1.read().is_01() || !sext_ln203_624_fu_41389_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_434_fu_41490_p1.read()) + sc_bigint<11>(sext_ln203_624_fu_41389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3476_fu_65187_p2() {
    add_ln703_3476_fu_65187_p2 = (!sext_ln703_1980_fu_65183_p1.read().is_01() || !zext_ln203_376_fu_40532_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1980_fu_65183_p1.read()) + sc_biguint<12>(zext_ln203_376_fu_40532_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3477_fu_65197_p2() {
    add_ln703_3477_fu_65197_p2 = (!sext_ln703_1981_fu_65193_p1.read().is_01() || !sext_ln703_1979_fu_65173_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1981_fu_65193_p1.read()) + sc_bigint<15>(sext_ln703_1979_fu_65173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3478_fu_65203_p2() {
    add_ln703_3478_fu_65203_p2 = (!zext_ln708_730_fu_41826_p1.read().is_01() || !sext_ln1116_64_fu_39449_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_730_fu_41826_p1.read()) + sc_bigint<11>(sext_ln1116_64_fu_39449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3479_fu_65213_p2() {
    add_ln703_3479_fu_65213_p2 = (!sext_ln703_1982_fu_65209_p1.read().is_01() || !zext_ln708_830_fu_43415_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1982_fu_65209_p1.read()) + sc_biguint<12>(zext_ln708_830_fu_43415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_347_fu_17252_p2() {
    add_ln703_347_fu_17252_p2 = (!zext_ln703_86_fu_17248_p1.read().is_01() || !sext_ln703_282_fu_17238_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_86_fu_17248_p1.read()) + sc_bigint<14>(sext_ln703_282_fu_17238_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3480_fu_65219_p2() {
    add_ln703_3480_fu_65219_p2 = (!sext_ln203_699_fu_43196_p1.read().is_01() || !zext_ln1116_241_fu_39528_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_699_fu_43196_p1.read()) + sc_biguint<9>(zext_ln1116_241_fu_39528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3481_fu_65229_p2() {
    add_ln703_3481_fu_65229_p2 = (!sext_ln703_1983_fu_65225_p1.read().is_01() || !zext_ln708_813_fu_43112_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1983_fu_65225_p1.read()) + sc_biguint<11>(zext_ln708_813_fu_43112_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3482_fu_65239_p2() {
    add_ln703_3482_fu_65239_p2 = (!sext_ln703_1984_fu_65235_p1.read().is_01() || !add_ln703_3479_fu_65213_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1984_fu_65235_p1.read()) + sc_biguint<12>(add_ln703_3479_fu_65213_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3483_fu_65249_p2() {
    add_ln703_3483_fu_65249_p2 = (!sext_ln703_1985_fu_65245_p1.read().is_01() || !add_ln703_3477_fu_65197_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1985_fu_65245_p1.read()) + sc_biguint<15>(add_ln703_3477_fu_65197_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3485_fu_25846_p2() {
    add_ln703_3485_fu_25846_p2 = (!zext_ln703_704_fu_25842_p1.read().is_01() || !sext_ln203_679_fu_15810_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_704_fu_25842_p1.read()) + sc_bigint<12>(sext_ln203_679_fu_15810_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3486_fu_25856_p2() {
    add_ln703_3486_fu_25856_p2 = (!sext_ln703_464_fu_25852_p1.read().is_01() || !zext_ln203_427_fu_16202_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_464_fu_25852_p1.read()) + sc_biguint<13>(zext_ln203_427_fu_16202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3487_fu_25862_p2() {
    add_ln703_3487_fu_25862_p2 = (!sext_ln1118_499_fu_16198_p1.read().is_01() || !zext_ln1118_1058_fu_14032_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_499_fu_16198_p1.read()) + sc_biguint<11>(zext_ln1118_1058_fu_14032_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3488_fu_25872_p2() {
    add_ln703_3488_fu_25872_p2 = (!sext_ln703_1987_fu_25868_p1.read().is_01() || !add_ln703_3486_fu_25856_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1987_fu_25868_p1.read()) + sc_biguint<13>(add_ln703_3486_fu_25856_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3489_fu_25882_p2() {
    add_ln703_3489_fu_25882_p2 = (!sext_ln203_655_fu_15516_p1.read().is_01() || !sext_ln708_221_fu_14692_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_655_fu_15516_p1.read()) + sc_bigint<11>(sext_ln708_221_fu_14692_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_348_fu_17258_p2() {
    add_ln703_348_fu_17258_p2 = (!sext_ln203_24_fu_2924_p1.read().is_01() || !sext_ln708_28_fu_3816_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_24_fu_2924_p1.read()) + sc_bigint<10>(sext_ln708_28_fu_3816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3490_fu_25892_p2() {
    add_ln703_3490_fu_25892_p2 = (!sext_ln703_1988_fu_25888_p1.read().is_01() || !sext_ln703_465_fu_25878_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1988_fu_25888_p1.read()) + sc_bigint<14>(sext_ln703_465_fu_25878_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3491_fu_25898_p2() {
    add_ln703_3491_fu_25898_p2 = (!sext_ln1118_462_fu_15766_p1.read().is_01() || !zext_ln1118_1095_fu_15388_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_462_fu_15766_p1.read()) + sc_biguint<9>(zext_ln1118_1095_fu_15388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3492_fu_65268_p2() {
    add_ln703_3492_fu_65268_p2 = (!sext_ln703_1989_fu_65265_p1.read().is_01() || !sext_ln1116_78_fu_43419_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1989_fu_65265_p1.read()) + sc_bigint<10>(sext_ln1116_78_fu_43419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3493_fu_65278_p2() {
    add_ln703_3493_fu_65278_p2 = (!sext_ln703_1990_fu_65274_p1.read().is_01() || !add_ln703_3490_reg_70116.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1990_fu_65274_p1.read()) + sc_biguint<14>(add_ln703_3490_reg_70116.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3494_fu_65283_p2() {
    add_ln703_3494_fu_65283_p2 = (!add_ln703_3493_fu_65278_p2.read().is_01() || !sext_ln203_710_fu_43430_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3493_fu_65278_p2.read()) + sc_bigint<14>(sext_ln203_710_fu_43430_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3495_fu_65293_p2() {
    add_ln703_3495_fu_65293_p2 = (!zext_ln708_942_fu_41486_p1.read().is_01() || !zext_ln708_920_fu_40528_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_942_fu_41486_p1.read()) + sc_biguint<11>(zext_ln708_920_fu_40528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3496_fu_65303_p2() {
    add_ln703_3496_fu_65303_p2 = (!zext_ln703_705_fu_65299_p1.read().is_01() || !sext_ln1116_79_fu_43437_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_705_fu_65299_p1.read()) + sc_bigint<13>(sext_ln1116_79_fu_43437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3497_fu_65313_p2() {
    add_ln703_3497_fu_65313_p2 = (!sext_ln703_1992_fu_65309_p1.read().is_01() || !sext_ln703_1991_fu_65289_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1992_fu_65309_p1.read()) + sc_bigint<15>(sext_ln703_1991_fu_65289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3498_fu_65319_p2() {
    add_ln703_3498_fu_65319_p2 = (!sext_ln1118_494_fu_43324_p1.read().is_01() || !sext_ln708_254_fu_43330_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_494_fu_43324_p1.read()) + sc_bigint<11>(sext_ln708_254_fu_43330_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3499_fu_65329_p2() {
    add_ln703_3499_fu_65329_p2 = (!sext_ln703_1993_fu_65325_p1.read().is_01() || !sext_ln1118_491_fu_43266_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1993_fu_65325_p1.read()) + sc_bigint<12>(sext_ln1118_491_fu_43266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_349_fu_17268_p2() {
    add_ln703_349_fu_17268_p2 = (!zext_ln708_21_fu_1454_p1.read().is_01() || !zext_ln203_64_fu_3834_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_21_fu_1454_p1.read()) + sc_biguint<9>(zext_ln203_64_fu_3834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_34_fu_16398_p2() {
    add_ln703_34_fu_16398_p2 = (!sext_ln703_34_fu_16394_p1.read().is_01() || !add_ln703_32_fu_16382_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_34_fu_16394_p1.read()) + sc_biguint<13>(add_ln703_32_fu_16382_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3500_fu_65339_p2() {
    add_ln703_3500_fu_65339_p2 = (!sext_ln1118_413_fu_40458_p1.read().is_01() || !zext_ln203_428_fu_43434_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_413_fu_40458_p1.read()) + sc_biguint<9>(zext_ln203_428_fu_43434_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3501_fu_65349_p2() {
    add_ln703_3501_fu_65349_p2 = (!sext_ln703_1995_fu_65345_p1.read().is_01() || !zext_ln1116_269_fu_43423_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1995_fu_65345_p1.read()) + sc_biguint<11>(zext_ln1116_269_fu_43423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3502_fu_65359_p2() {
    add_ln703_3502_fu_65359_p2 = (!sext_ln703_1996_fu_65355_p1.read().is_01() || !sext_ln703_1994_fu_65335_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1996_fu_65355_p1.read()) + sc_bigint<13>(sext_ln703_1994_fu_65335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3503_fu_65369_p2() {
    add_ln703_3503_fu_65369_p2 = (!sext_ln703_1997_fu_65365_p1.read().is_01() || !add_ln703_3497_fu_65313_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1997_fu_65365_p1.read()) + sc_biguint<15>(add_ln703_3497_fu_65313_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3504_fu_65375_p2() {
    add_ln703_3504_fu_65375_p2 = (!sext_ln708_259_fu_43395_p1.read().is_01() || !sext_ln203_711_fu_43457_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_259_fu_43395_p1.read()) + sc_bigint<12>(sext_ln203_711_fu_43457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3505_fu_65385_p2() {
    add_ln703_3505_fu_65385_p2 = (!sext_ln703_1998_fu_65381_p1.read().is_01() || !add_ln703_3503_fu_65369_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1998_fu_65381_p1.read()) + sc_biguint<15>(add_ln703_3503_fu_65369_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3506_fu_65391_p2() {
    add_ln703_3506_fu_65391_p2 = (!zext_ln203_420_fu_43101_p1.read().is_01() || !sext_ln203_690_fu_43065_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_420_fu_43101_p1.read()) + sc_bigint<12>(sext_ln203_690_fu_43065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3507_fu_65401_p2() {
    add_ln703_3507_fu_65401_p2 = (!sext_ln703_1999_fu_65397_p1.read().is_01() || !sext_ln203_712_fu_43491_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1999_fu_65397_p1.read()) + sc_bigint<13>(sext_ln203_712_fu_43491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3509_fu_25904_p2() {
    add_ln703_3509_fu_25904_p2 = (!sext_ln1118_408_fu_13768_p1.read().is_01() || !sext_ln708_233_fu_15374_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_408_fu_13768_p1.read()) + sc_bigint<12>(sext_ln708_233_fu_15374_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_350_fu_17278_p2() {
    add_ln703_350_fu_17278_p2 = (!zext_ln703_87_fu_17274_p1.read().is_01() || !zext_ln708_3_fu_1370_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_87_fu_17274_p1.read()) + sc_biguint<10>(zext_ln708_3_fu_1370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3510_fu_65431_p2() {
    add_ln703_3510_fu_65431_p2 = (!sext_ln703_2002_fu_65428_p1.read().is_01() || !or_ln703_23_fu_65421_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2002_fu_65428_p1.read()) + sc_biguint<16>(or_ln703_23_fu_65421_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3511_fu_65437_p2() {
    add_ln703_3511_fu_65437_p2 = (!sext_ln203_714_fu_43495_p1.read().is_01() || !sext_ln203_647_fu_41932_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_714_fu_43495_p1.read()) + sc_bigint<12>(sext_ln203_647_fu_41932_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3512_fu_65447_p2() {
    add_ln703_3512_fu_65447_p2 = (!sext_ln203_622_fu_41307_p1.read().is_01() || !zext_ln1118_1079_reg_68730.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_622_fu_41307_p1.read()) + sc_biguint<12>(zext_ln1118_1079_reg_68730.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3513_fu_65456_p2() {
    add_ln703_3513_fu_65456_p2 = (!sext_ln703_2004_fu_65452_p1.read().is_01() || !sext_ln703_2003_fu_65443_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2004_fu_65452_p1.read()) + sc_bigint<13>(sext_ln703_2003_fu_65443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3514_fu_65466_p2() {
    add_ln703_3514_fu_65466_p2 = (!sext_ln703_2005_fu_65462_p1.read().is_01() || !add_ln703_3510_fu_65431_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2005_fu_65462_p1.read()) + sc_biguint<16>(add_ln703_3510_fu_65431_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3515_fu_65472_p2() {
    add_ln703_3515_fu_65472_p2 = (!zext_ln708_962_fu_42633_p1.read().is_01() || !zext_ln708_942_fu_41486_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_962_fu_42633_p1.read()) + sc_biguint<11>(zext_ln708_942_fu_41486_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3516_fu_65482_p2() {
    add_ln703_3516_fu_65482_p2 = (!zext_ln203_429_fu_43525_p1.read().is_01() || !sext_ln203_708_reg_68901.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_429_fu_43525_p1.read()) + sc_bigint<12>(sext_ln203_708_reg_68901.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3517_fu_65491_p2() {
    add_ln703_3517_fu_65491_p2 = (!sext_ln703_2006_fu_65487_p1.read().is_01() || !zext_ln703_706_fu_65478_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2006_fu_65487_p1.read()) + sc_biguint<13>(zext_ln703_706_fu_65478_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3518_fu_65501_p2() {
    add_ln703_3518_fu_65501_p2 = (!sext_ln203_715_fu_43498_p1.read().is_01() || !sext_ln203_717_fu_43505_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_715_fu_43498_p1.read()) + sc_bigint<11>(sext_ln203_717_fu_43505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3519_fu_65511_p2() {
    add_ln703_3519_fu_65511_p2 = (!zext_ln1118_1036_reg_68589.read().is_01() || !sext_ln203_716_fu_43501_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_1036_reg_68589.read()) + sc_bigint<11>(sext_ln203_716_fu_43501_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_351_fu_17288_p2() {
    add_ln703_351_fu_17288_p2 = (!zext_ln703_88_fu_17284_p1.read().is_01() || !sext_ln703_288_fu_17264_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_88_fu_17284_p1.read()) + sc_bigint<12>(sext_ln703_288_fu_17264_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3520_fu_65520_p2() {
    add_ln703_3520_fu_65520_p2 = (!sext_ln703_2009_fu_65516_p1.read().is_01() || !sext_ln703_2008_fu_65507_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2009_fu_65516_p1.read()) + sc_bigint<12>(sext_ln703_2008_fu_65507_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3521_fu_65530_p2() {
    add_ln703_3521_fu_65530_p2 = (!sext_ln703_2010_fu_65526_p1.read().is_01() || !sext_ln703_2007_fu_65497_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2010_fu_65526_p1.read()) + sc_bigint<14>(sext_ln703_2007_fu_65497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3522_fu_65540_p2() {
    add_ln703_3522_fu_65540_p2 = (!sext_ln703_2011_fu_65536_p1.read().is_01() || !add_ln703_3514_fu_65466_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2011_fu_65536_p1.read()) + sc_biguint<16>(add_ln703_3514_fu_65466_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3523_fu_65546_p2() {
    add_ln703_3523_fu_65546_p2 = (!zext_ln1118_1063_reg_68664.read().is_01() || !zext_ln1118_1065_fu_40626_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1063_reg_68664.read()) + sc_biguint<10>(zext_ln1118_1065_fu_40626_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3524_fu_65555_p2() {
    add_ln703_3524_fu_65555_p2 = (!zext_ln703_707_fu_65551_p1.read().is_01() || !zext_ln203_367_reg_68543.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_707_fu_65551_p1.read()) + sc_biguint<11>(zext_ln203_367_reg_68543.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3525_fu_65564_p2() {
    add_ln703_3525_fu_65564_p2 = (!zext_ln1118_1055_fu_40486_p1.read().is_01() || !zext_ln1118_1067_fu_40792_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1055_fu_40486_p1.read()) + sc_biguint<10>(zext_ln1118_1067_fu_40792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3526_fu_25910_p2() {
    add_ln703_3526_fu_25910_p2 = (!sext_ln203_694_fu_15958_p1.read().is_01() || !sext_ln203_713_fu_16210_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_694_fu_15958_p1.read()) + sc_bigint<9>(sext_ln203_713_fu_16210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3527_fu_65577_p2() {
    add_ln703_3527_fu_65577_p2 = (!sext_ln703_2012_fu_65574_p1.read().is_01() || !zext_ln703_709_fu_65570_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2012_fu_65574_p1.read()) + sc_biguint<12>(zext_ln703_709_fu_65570_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3528_fu_65587_p2() {
    add_ln703_3528_fu_65587_p2 = (!sext_ln703_2013_fu_65583_p1.read().is_01() || !zext_ln703_708_fu_65560_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2013_fu_65583_p1.read()) + sc_biguint<13>(zext_ln703_708_fu_65560_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_352_fu_45942_p2() {
    add_ln703_352_fu_45942_p2 = (!sext_ln703_289_fu_45939_p1.read().is_01() || !add_ln703_347_reg_69046.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_289_fu_45939_p1.read()) + sc_biguint<14>(add_ln703_347_reg_69046.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3530_fu_65601_p2() {
    add_ln703_3530_fu_65601_p2 = (!zext_ln203_380_reg_68686.read().is_01() || !zext_ln203_359_reg_68462.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_380_reg_68686.read()) + sc_biguint<9>(zext_ln203_359_reg_68462.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3531_fu_65609_p2() {
    add_ln703_3531_fu_65609_p2 = (!zext_ln703_710_fu_65605_p1.read().is_01() || !sext_ln703_2015_fu_65597_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_710_fu_65605_p1.read()) + sc_bigint<11>(sext_ln703_2015_fu_65597_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3532_fu_65619_p2() {
    add_ln703_3532_fu_65619_p2 = (!zext_ln708_650_fu_39405_p1.read().is_01() || !zext_ln1116_255_fu_40694_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_650_fu_39405_p1.read()) + sc_biguint<9>(zext_ln1116_255_fu_40694_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3534_fu_65629_p2() {
    add_ln703_3534_fu_65629_p2 = (!zext_ln703_596_fu_61790_p1.read().is_01() || !zext_ln703_711_fu_65625_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_596_fu_61790_p1.read()) + sc_biguint<10>(zext_ln703_711_fu_65625_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3535_fu_65639_p2() {
    add_ln703_3535_fu_65639_p2 = (!zext_ln703_712_fu_65635_p1.read().is_01() || !sext_ln703_2016_fu_65615_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_712_fu_65635_p1.read()) + sc_bigint<12>(sext_ln703_2016_fu_65615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3536_fu_65649_p2() {
    add_ln703_3536_fu_65649_p2 = (!sext_ln703_2017_fu_65645_p1.read().is_01() || !sext_ln703_2014_fu_65593_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2017_fu_65645_p1.read()) + sc_bigint<14>(sext_ln703_2014_fu_65593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3538_fu_25916_p2() {
    add_ln703_3538_fu_25916_p2 = (!sext_ln203_718_fu_16234_p1.read().is_01() || !sext_ln203_694_fu_15958_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_718_fu_16234_p1.read()) + sc_bigint<9>(sext_ln203_694_fu_15958_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3539_fu_25926_p2() {
    add_ln703_3539_fu_25926_p2 = (!sext_ln703_2019_fu_25922_p1.read().is_01() || !sext_ln708_260_fu_16238_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2019_fu_25922_p1.read()) + sc_bigint<10>(sext_ln708_260_fu_16238_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_353_fu_45947_p2() {
    add_ln703_353_fu_45947_p2 = (!sext_ln708_29_fu_28586_p1.read().is_01() || !sext_ln203_30_fu_27619_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_29_fu_28586_p1.read()) + sc_bigint<12>(sext_ln203_30_fu_27619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3540_fu_25936_p2() {
    add_ln703_3540_fu_25936_p2 = (!zext_ln1118_1027_fu_13392_p1.read().is_01() || !zext_ln1116_248_fu_14016_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1027_fu_13392_p1.read()) + sc_biguint<10>(zext_ln1116_248_fu_14016_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3541_fu_25946_p2() {
    add_ln703_3541_fu_25946_p2 = (!zext_ln703_713_fu_25942_p1.read().is_01() || !sext_ln703_2020_fu_25932_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_713_fu_25942_p1.read()) + sc_bigint<12>(sext_ln703_2020_fu_25932_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3542_fu_25952_p2() {
    add_ln703_3542_fu_25952_p2 = (!add_ln703_3541_fu_25946_p2.read().is_01() || !sext_ln708_262_fu_16250_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3541_fu_25946_p2.read()) + sc_bigint<12>(sext_ln708_262_fu_16250_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3543_fu_25962_p2() {
    add_ln703_3543_fu_25962_p2 = (!zext_ln708_928_fu_14520_p1.read().is_01() || !zext_ln708_941_fu_14912_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_928_fu_14520_p1.read()) + sc_biguint<10>(zext_ln708_941_fu_14912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3544_fu_25972_p2() {
    add_ln703_3544_fu_25972_p2 = (!zext_ln703_714_fu_25968_p1.read().is_01() || !sext_ln703_2021_fu_25958_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_714_fu_25968_p1.read()) + sc_bigint<13>(sext_ln703_2021_fu_25958_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3545_fu_25978_p2() {
    add_ln703_3545_fu_25978_p2 = (!zext_ln1118_1069_fu_14274_p1.read().is_01() || !zext_ln203_430_fu_16242_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1069_fu_14274_p1.read()) + sc_biguint<10>(zext_ln203_430_fu_16242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3546_fu_25988_p2() {
    add_ln703_3546_fu_25988_p2 = (!zext_ln708_713_fu_14782_p1.read().is_01() || !sext_ln1118_504_fu_16246_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_713_fu_14782_p1.read()) + sc_bigint<11>(sext_ln1118_504_fu_16246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3547_fu_25998_p2() {
    add_ln703_3547_fu_25998_p2 = (!sext_ln703_2023_fu_25994_p1.read().is_01() || !zext_ln703_715_fu_25984_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2023_fu_25994_p1.read()) + sc_biguint<12>(zext_ln703_715_fu_25984_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3548_fu_65671_p2() {
    add_ln703_3548_fu_65671_p2 = (!sext_ln703_2024_fu_65668_p1.read().is_01() || !sext_ln703_2022_fu_65665_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2024_fu_65668_p1.read()) + sc_bigint<14>(sext_ln703_2022_fu_65665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3549_fu_65677_p2() {
    add_ln703_3549_fu_65677_p2 = (!zext_ln1118_1123_fu_43544_p1.read().is_01() || !sext_ln1118_505_fu_43564_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1123_fu_43544_p1.read()) + sc_bigint<12>(sext_ln1118_505_fu_43564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_354_fu_45957_p2() {
    add_ln703_354_fu_45957_p2 = (!sext_ln703_290_fu_45953_p1.read().is_01() || !add_ln703_352_fu_45942_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_290_fu_45953_p1.read()) + sc_biguint<14>(add_ln703_352_fu_45942_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3550_fu_65687_p2() {
    add_ln703_3550_fu_65687_p2 = (!sext_ln703_2025_fu_65683_p1.read().is_01() || !add_ln703_3548_fu_65671_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2025_fu_65683_p1.read()) + sc_biguint<14>(add_ln703_3548_fu_65671_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3551_fu_65697_p2() {
    add_ln703_3551_fu_65697_p2 = (!sext_ln708_263_fu_43614_p1.read().is_01() || !sext_ln203_719_fu_43649_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_263_fu_43614_p1.read()) + sc_bigint<12>(sext_ln203_719_fu_43649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3552_fu_65707_p2() {
    add_ln703_3552_fu_65707_p2 = (!sext_ln703_2027_fu_65703_p1.read().is_01() || !sext_ln1118_506_fu_43595_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2027_fu_65703_p1.read()) + sc_bigint<13>(sext_ln1118_506_fu_43595_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3553_fu_65717_p2() {
    add_ln703_3553_fu_65717_p2 = (!sext_ln703_2028_fu_65713_p1.read().is_01() || !sext_ln703_2026_fu_65693_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2028_fu_65713_p1.read()) + sc_bigint<15>(sext_ln703_2026_fu_65693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3554_fu_65723_p2() {
    add_ln703_3554_fu_65723_p2 = (!zext_ln708_908_fu_39655_p1.read().is_01() || !zext_ln1118_1117_fu_43041_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_908_fu_39655_p1.read()) + sc_biguint<11>(zext_ln1118_1117_fu_43041_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3555_fu_65733_p2() {
    add_ln703_3555_fu_65733_p2 = (!zext_ln703_716_fu_65729_p1.read().is_01() || !sext_ln203_720_fu_43653_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_716_fu_65729_p1.read()) + sc_bigint<13>(sext_ln203_720_fu_43653_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3556_fu_65739_p2() {
    add_ln703_3556_fu_65739_p2 = (!zext_ln1118_1020_fu_39988_p1.read().is_01() || !zext_ln1118_1125_fu_43618_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1020_fu_39988_p1.read()) + sc_biguint<9>(zext_ln1118_1125_fu_43618_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3557_fu_65749_p2() {
    add_ln703_3557_fu_65749_p2 = (!zext_ln703_717_fu_65745_p1.read().is_01() || !zext_ln1118_1105_fu_42460_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_717_fu_65745_p1.read()) + sc_biguint<10>(zext_ln1118_1105_fu_42460_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3558_fu_65759_p2() {
    add_ln703_3558_fu_65759_p2 = (!zext_ln703_718_fu_65755_p1.read().is_01() || !add_ln703_3555_fu_65733_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_718_fu_65755_p1.read()) + sc_biguint<13>(add_ln703_3555_fu_65733_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3559_fu_65769_p2() {
    add_ln703_3559_fu_65769_p2 = (!sext_ln703_2029_fu_65765_p1.read().is_01() || !add_ln703_3553_fu_65717_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2029_fu_65765_p1.read()) + sc_biguint<15>(add_ln703_3553_fu_65717_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_355_fu_45967_p2() {
    add_ln703_355_fu_45967_p2 = (!sext_ln203_44_fu_28053_p1.read().is_01() || !zext_ln203_65_fu_28593_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_44_fu_28053_p1.read()) + sc_biguint<12>(zext_ln203_65_fu_28593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3560_fu_65775_p2() {
    add_ln703_3560_fu_65775_p2 = (!sext_ln203_597_fu_40564_p1.read().is_01() || !sext_ln203_721_fu_43673_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_597_fu_40564_p1.read()) + sc_bigint<12>(sext_ln203_721_fu_43673_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3561_fu_65785_p2() {
    add_ln703_3561_fu_65785_p2 = (!sext_ln703_2030_fu_65781_p1.read().is_01() || !add_ln703_3559_fu_65769_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2030_fu_65781_p1.read()) + sc_biguint<15>(add_ln703_3559_fu_65769_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3562_fu_65791_p2() {
    add_ln703_3562_fu_65791_p2 = (!sext_ln708_205_fu_40096_p1.read().is_01() || !zext_ln203_425_fu_43345_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_205_fu_40096_p1.read()) + sc_biguint<10>(zext_ln203_425_fu_43345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3563_fu_65801_p2() {
    add_ln703_3563_fu_65801_p2 = (!sext_ln703_2031_fu_65797_p1.read().is_01() || !zext_ln203_420_fu_43101_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2031_fu_65797_p1.read()) + sc_biguint<12>(zext_ln203_420_fu_43101_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3565_fu_26004_p2() {
    add_ln703_3565_fu_26004_p2 = (!zext_ln708_950_fu_15142_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_950_fu_15142_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3566_fu_26014_p2() {
    add_ln703_3566_fu_26014_p2 = (!sext_ln703_472_fu_26010_p1.read().is_01() || !zext_ln203_431_fu_16280_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_472_fu_26010_p1.read()) + sc_biguint<12>(zext_ln203_431_fu_16280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3567_fu_26020_p2() {
    add_ln703_3567_fu_26020_p2 = (!add_ln703_3566_fu_26014_p2.read().is_01() || !zext_ln1118_1046_fu_13748_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3566_fu_26014_p2.read()) + sc_biguint<12>(zext_ln1118_1046_fu_13748_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3568_fu_26030_p2() {
    add_ln703_3568_fu_26030_p2 = (!sext_ln708_264_fu_16284_p1.read().is_01() || !sext_ln203_713_fu_16210_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_264_fu_16284_p1.read()) + sc_bigint<9>(sext_ln203_713_fu_16210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3569_fu_26040_p2() {
    add_ln703_3569_fu_26040_p2 = (!sext_ln703_2035_fu_26036_p1.read().is_01() || !sext_ln703_2034_fu_26026_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2035_fu_26036_p1.read()) + sc_bigint<13>(sext_ln703_2034_fu_26026_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_356_fu_45977_p2() {
    add_ln703_356_fu_45977_p2 = (!zext_ln708_672_fu_26721_p1.read().is_01() || !zext_ln708_739_fu_28629_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_672_fu_26721_p1.read()) + sc_biguint<11>(zext_ln708_739_fu_28629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3570_fu_26050_p2() {
    add_ln703_3570_fu_26050_p2 = (!sext_ln1118_423_fu_14452_p1.read().is_01() || !zext_ln1116_265_fu_15646_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_423_fu_14452_p1.read()) + sc_biguint<12>(zext_ln1116_265_fu_15646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3571_fu_26060_p2() {
    add_ln703_3571_fu_26060_p2 = (!sext_ln703_2036_fu_26056_p1.read().is_01() || !sext_ln703_474_fu_26046_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2036_fu_26056_p1.read()) + sc_bigint<14>(sext_ln703_474_fu_26046_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3572_fu_26066_p2() {
    add_ln703_3572_fu_26066_p2 = (!sext_ln203_656_fu_15536_p1.read().is_01() || !zext_ln1118_1127_fu_16288_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_656_fu_15536_p1.read()) + sc_biguint<11>(zext_ln1118_1127_fu_16288_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3573_fu_26076_p2() {
    add_ln703_3573_fu_26076_p2 = (!sext_ln1118_415_fu_14126_p1.read().is_01() || !zext_ln1118_1114_fu_15912_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_415_fu_14126_p1.read()) + sc_biguint<10>(zext_ln1118_1114_fu_15912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3574_fu_26086_p2() {
    add_ln703_3574_fu_26086_p2 = (!sext_ln703_2038_fu_26082_p1.read().is_01() || !sext_ln703_2037_fu_26072_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2038_fu_26082_p1.read()) + sc_bigint<12>(sext_ln703_2037_fu_26072_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3575_fu_65824_p2() {
    add_ln703_3575_fu_65824_p2 = (!sext_ln703_2039_fu_65821_p1.read().is_01() || !add_ln703_3571_reg_70146.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2039_fu_65821_p1.read()) + sc_biguint<14>(add_ln703_3571_reg_70146.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3576_fu_65829_p2() {
    add_ln703_3576_fu_65829_p2 = (!sext_ln203_722_fu_43677_p1.read().is_01() || !sext_ln708_266_fu_43726_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_722_fu_43677_p1.read()) + sc_bigint<12>(sext_ln708_266_fu_43726_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3577_fu_65839_p2() {
    add_ln703_3577_fu_65839_p2 = (!sext_ln703_2040_fu_65835_p1.read().is_01() || !add_ln703_3575_fu_65824_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2040_fu_65835_p1.read()) + sc_biguint<14>(add_ln703_3575_fu_65824_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3578_fu_65849_p2() {
    add_ln703_3578_fu_65849_p2 = (!zext_ln203_416_fu_42815_p1.read().is_01() || !sext_ln1118_510_fu_43696_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_416_fu_42815_p1.read()) + sc_bigint<12>(sext_ln1118_510_fu_43696_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3579_fu_65859_p2() {
    add_ln703_3579_fu_65859_p2 = (!sext_ln708_267_fu_43740_p1.read().is_01() || !sext_ln1118_427_fu_41146_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_267_fu_43740_p1.read()) + sc_bigint<11>(sext_ln1118_427_fu_41146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_357_fu_45987_p2() {
    add_ln703_357_fu_45987_p2 = (!zext_ln703_89_fu_45983_p1.read().is_01() || !sext_ln703_294_fu_45973_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_89_fu_45983_p1.read()) + sc_bigint<13>(sext_ln703_294_fu_45973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3580_fu_65869_p2() {
    add_ln703_3580_fu_65869_p2 = (!sext_ln703_2043_fu_65865_p1.read().is_01() || !sext_ln703_2042_fu_65855_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2043_fu_65865_p1.read()) + sc_bigint<13>(sext_ln703_2042_fu_65855_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3581_fu_65879_p2() {
    add_ln703_3581_fu_65879_p2 = (!sext_ln703_2044_fu_65875_p1.read().is_01() || !sext_ln703_2041_fu_65845_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2044_fu_65875_p1.read()) + sc_bigint<15>(sext_ln703_2041_fu_65845_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3582_fu_65885_p2() {
    add_ln703_3582_fu_65885_p2 = (!zext_ln708_907_fu_39514_p1.read().is_01() || !zext_ln708_930_fu_41122_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_907_fu_39514_p1.read()) + sc_biguint<10>(zext_ln708_930_fu_41122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3583_fu_65895_p2() {
    add_ln703_3583_fu_65895_p2 = (!zext_ln703_719_fu_65891_p1.read().is_01() || !zext_ln1116_267_fu_42334_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_719_fu_65891_p1.read()) + sc_biguint<11>(zext_ln1116_267_fu_42334_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3584_fu_65905_p2() {
    add_ln703_3584_fu_65905_p2 = (!zext_ln708_969_fu_43760_p1.read().is_01() || !zext_ln708_642_reg_68502.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_969_fu_43760_p1.read()) + sc_biguint<10>(zext_ln708_642_reg_68502.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3585_fu_65914_p2() {
    add_ln703_3585_fu_65914_p2 = (!zext_ln203_361_fu_39390_p1.read().is_01() || !zext_ln203_428_fu_43434_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_361_fu_39390_p1.read()) + sc_biguint<9>(zext_ln203_428_fu_43434_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3586_fu_65924_p2() {
    add_ln703_3586_fu_65924_p2 = (!zext_ln703_722_fu_65920_p1.read().is_01() || !zext_ln703_721_fu_65910_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_722_fu_65920_p1.read()) + sc_biguint<11>(zext_ln703_721_fu_65910_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3587_fu_65934_p2() {
    add_ln703_3587_fu_65934_p2 = (!zext_ln703_723_fu_65930_p1.read().is_01() || !zext_ln703_720_fu_65901_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_723_fu_65930_p1.read()) + sc_biguint<12>(zext_ln703_720_fu_65901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3588_fu_65944_p2() {
    add_ln703_3588_fu_65944_p2 = (!zext_ln703_724_fu_65940_p1.read().is_01() || !add_ln703_3581_fu_65879_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_724_fu_65940_p1.read()) + sc_biguint<15>(add_ln703_3581_fu_65879_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3589_fu_65950_p2() {
    add_ln703_3589_fu_65950_p2 = (!add_ln703_3588_fu_65944_p2.read().is_01() || !sext_ln203_666_fu_42393_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3588_fu_65944_p2.read()) + sc_bigint<15>(sext_ln203_666_fu_42393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_358_fu_45997_p2() {
    add_ln703_358_fu_45997_p2 = (!sext_ln703_295_fu_45993_p1.read().is_01() || !sext_ln703_293_fu_45963_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_295_fu_45993_p1.read()) + sc_bigint<15>(sext_ln703_293_fu_45963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3590_fu_65956_p2() {
    add_ln703_3590_fu_65956_p2 = (!sext_ln203_691_fu_43069_p1.read().is_01() || !zext_ln203_392_fu_41413_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_691_fu_43069_p1.read()) + sc_biguint<10>(zext_ln203_392_fu_41413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_359_fu_46003_p2() {
    add_ln703_359_fu_46003_p2 = (!zext_ln1118_115_reg_67229.read().is_01() || !zext_ln203_12_fu_26728_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_115_reg_67229.read()) + sc_biguint<10>(zext_ln203_12_fu_26728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_35_fu_43966_p2() {
    add_ln703_35_fu_43966_p2 = (!sext_ln703_11_fu_43963_p1.read().is_01() || !sext_ln203_7_fu_26628_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_11_fu_43963_p1.read()) + sc_bigint<14>(sext_ln203_7_fu_26628_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_360_fu_46012_p2() {
    add_ln703_360_fu_46012_p2 = (!zext_ln703_90_fu_46008_p1.read().is_01() || !sext_ln708_30_fu_28611_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_90_fu_46008_p1.read()) + sc_bigint<12>(sext_ln708_30_fu_28611_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_361_fu_46018_p2() {
    add_ln703_361_fu_46018_p2 = (!zext_ln708_738_fu_28625_p1.read().is_01() || !zext_ln708_708_fu_28029_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_738_fu_28625_p1.read()) + sc_biguint<8>(zext_ln708_708_fu_28029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_363_fu_46032_p2() {
    add_ln703_363_fu_46032_p2 = (!zext_ln703_92_fu_46028_p1.read().is_01() || !zext_ln703_91_fu_46024_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_92_fu_46028_p1.read()) + sc_biguint<10>(zext_ln703_91_fu_46024_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_364_fu_46042_p2() {
    add_ln703_364_fu_46042_p2 = (!zext_ln703_93_fu_46038_p1.read().is_01() || !add_ln703_360_fu_46012_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_93_fu_46038_p1.read()) + sc_biguint<12>(add_ln703_360_fu_46012_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_365_fu_46052_p2() {
    add_ln703_365_fu_46052_p2 = (!sext_ln703_298_fu_46048_p1.read().is_01() || !add_ln703_358_fu_45997_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_298_fu_46048_p1.read()) + sc_biguint<15>(add_ln703_358_fu_45997_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_366_fu_46058_p2() {
    add_ln703_366_fu_46058_p2 = (!add_ln703_365_fu_46052_p2.read().is_01() || !zext_ln203_54_fu_28376_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_365_fu_46052_p2.read()) + sc_biguint<15>(zext_ln203_54_fu_28376_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_367_fu_46064_p2() {
    add_ln703_367_fu_46064_p2 = (!zext_ln708_732_fu_28568_p1.read().is_01() || !zext_ln708_40_fu_26552_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_732_fu_28568_p1.read()) + sc_biguint<10>(zext_ln708_40_fu_26552_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_368_fu_46074_p2() {
    add_ln703_368_fu_46074_p2 = (!zext_ln703_94_fu_46070_p1.read().is_01() || !sext_ln203_72_fu_28668_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_94_fu_46070_p1.read()) + sc_bigint<12>(sext_ln203_72_fu_28668_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_36_fu_16404_p2() {
    add_ln703_36_fu_16404_p2 = (!zext_ln203_10_fu_1834_p1.read().is_01() || !sext_ln203_6_fu_1818_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_10_fu_1834_p1.read()) + sc_bigint<11>(sext_ln203_6_fu_1818_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_370_fu_17294_p2() {
    add_ln703_370_fu_17294_p2 = (!zext_ln203_69_fu_3890_p1.read().is_01() || !sext_ln203_73_fu_3886_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_69_fu_3890_p1.read()) + sc_bigint<12>(sext_ln203_73_fu_3886_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_371_fu_17300_p2() {
    add_ln703_371_fu_17300_p2 = (!add_ln703_370_fu_17294_p2.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_370_fu_17294_p2.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_372_fu_17310_p2() {
    add_ln703_372_fu_17310_p2 = (!sext_ln703_55_fu_17306_p1.read().is_01() || !sext_ln203_39_fu_3078_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_55_fu_17306_p1.read()) + sc_bigint<13>(sext_ln203_39_fu_3078_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_374_fu_17320_p2() {
    add_ln703_374_fu_17320_p2 = (!sext_ln703_305_fu_17316_p1.read().is_01() || !zext_ln203_70_fu_3910_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_305_fu_17316_p1.read()) + sc_biguint<12>(zext_ln203_70_fu_3910_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_375_fu_17330_p2() {
    add_ln703_375_fu_17330_p2 = (!sext_ln703_306_fu_17326_p1.read().is_01() || !add_ln703_372_fu_17310_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_306_fu_17326_p1.read()) + sc_biguint<13>(add_ln703_372_fu_17310_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_376_fu_17340_p2() {
    add_ln703_376_fu_17340_p2 = (!sext_ln1118_40_fu_3106_p1.read().is_01() || !zext_ln1118_221_fu_3290_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_40_fu_3106_p1.read()) + sc_biguint<12>(zext_ln1118_221_fu_3290_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_377_fu_17350_p2() {
    add_ln703_377_fu_17350_p2 = (!sext_ln703_307_fu_17346_p1.read().is_01() || !sext_ln703_56_fu_17336_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_307_fu_17346_p1.read()) + sc_bigint<14>(sext_ln703_56_fu_17336_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_378_fu_46094_p2() {
    add_ln703_378_fu_46094_p2 = (!sext_ln203_65_fu_28424_p1.read().is_01() || !sext_ln203_13_reg_67251.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_65_fu_28424_p1.read()) + sc_bigint<11>(sext_ln203_13_reg_67251.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_379_fu_46103_p2() {
    add_ln703_379_fu_46103_p2 = (!sext_ln703_310_fu_46099_p1.read().is_01() || !zext_ln1118_240_fu_28675_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_310_fu_46099_p1.read()) + sc_biguint<12>(zext_ln1118_240_fu_28675_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_37_fu_16414_p2() {
    add_ln703_37_fu_16414_p2 = (!sext_ln703_37_fu_16410_p1.read().is_01() || !zext_ln203_11_fu_1858_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_37_fu_16410_p1.read()) + sc_biguint<12>(zext_ln203_11_fu_1858_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_380_fu_46113_p2() {
    add_ln703_380_fu_46113_p2 = (!sext_ln703_311_fu_46109_p1.read().is_01() || !add_ln703_377_reg_69056.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_311_fu_46109_p1.read()) + sc_biguint<14>(add_ln703_377_reg_69056.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_381_fu_46118_p2() {
    add_ln703_381_fu_46118_p2 = (!sext_ln203_75_fu_28678_p1.read().is_01() || !sext_ln1118_57_fu_28731_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_75_fu_28678_p1.read()) + sc_bigint<12>(sext_ln1118_57_fu_28731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_382_fu_46128_p2() {
    add_ln703_382_fu_46128_p2 = (!sext_ln703_312_fu_46124_p1.read().is_01() || !add_ln703_380_fu_46113_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_312_fu_46124_p1.read()) + sc_biguint<14>(add_ln703_380_fu_46113_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_383_fu_46138_p2() {
    add_ln703_383_fu_46138_p2 = (!zext_ln1116_30_fu_26235_p1.read().is_01() || !sext_ln1116_2_fu_26187_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_30_fu_26235_p1.read()) + sc_bigint<12>(sext_ln1116_2_fu_26187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_384_fu_46144_p2() {
    add_ln703_384_fu_46144_p2 = (!sext_ln1118_55_fu_28701_p1.read().is_01() || !sext_ln203_74_reg_67450.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_55_fu_28701_p1.read()) + sc_bigint<10>(sext_ln203_74_reg_67450.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_385_fu_46153_p2() {
    add_ln703_385_fu_46153_p2 = (!sext_ln703_314_fu_46149_p1.read().is_01() || !add_ln703_383_fu_46138_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_314_fu_46149_p1.read()) + sc_biguint<12>(add_ln703_383_fu_46138_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_386_fu_46163_p2() {
    add_ln703_386_fu_46163_p2 = (!sext_ln703_315_fu_46159_p1.read().is_01() || !sext_ln703_313_fu_46134_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_315_fu_46159_p1.read()) + sc_bigint<15>(sext_ln703_313_fu_46134_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_387_fu_46169_p2() {
    add_ln703_387_fu_46169_p2 = (!zext_ln1118_13_reg_67119.read().is_01() || !zext_ln203_4_fu_26136_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_13_reg_67119.read()) + sc_biguint<9>(zext_ln203_4_fu_26136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_388_fu_46178_p2() {
    add_ln703_388_fu_46178_p2 = (!zext_ln703_95_fu_46174_p1.read().is_01() || !sext_ln203_76_fu_28751_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_95_fu_46174_p1.read()) + sc_bigint<11>(sext_ln203_76_fu_28751_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_389_fu_46188_p2() {
    add_ln703_389_fu_46188_p2 = (!zext_ln708_674_fu_26725_p1.read().is_01() || !zext_ln708_741_fu_28682_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_674_fu_26725_p1.read()) + sc_biguint<8>(zext_ln708_741_fu_28682_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_38_fu_43975_p2() {
    add_ln703_38_fu_43975_p2 = (!sext_ln703_39_fu_43972_p1.read().is_01() || !add_ln703_35_fu_43966_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_39_fu_43972_p1.read()) + sc_biguint<14>(add_ln703_35_fu_43966_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_391_fu_46198_p2() {
    add_ln703_391_fu_46198_p2 = (!zext_ln703_92_fu_46028_p1.read().is_01() || !zext_ln703_96_fu_46194_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_92_fu_46028_p1.read()) + sc_biguint<10>(zext_ln703_96_fu_46194_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_392_fu_46208_p2() {
    add_ln703_392_fu_46208_p2 = (!zext_ln703_98_fu_46204_p1.read().is_01() || !sext_ln703_319_fu_46184_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_98_fu_46204_p1.read()) + sc_bigint<12>(sext_ln703_319_fu_46184_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_393_fu_46218_p2() {
    add_ln703_393_fu_46218_p2 = (!sext_ln703_321_fu_46214_p1.read().is_01() || !add_ln703_386_fu_46163_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_321_fu_46214_p1.read()) + sc_biguint<15>(add_ln703_386_fu_46163_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_395_fu_17356_p2() {
    add_ln703_395_fu_17356_p2 = (!lshr_ln708_429_fu_3762_p4.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(lshr_ln708_429_fu_3762_p4.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_396_fu_17366_p2() {
    add_ln703_396_fu_17366_p2 = (!sext_ln703_323_fu_17362_p1.read().is_01() || !zext_ln708_1_fu_1224_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_323_fu_17362_p1.read()) + sc_biguint<11>(zext_ln708_1_fu_1224_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_397_fu_17376_p2() {
    add_ln703_397_fu_17376_p2 = (!sext_ln703_326_fu_17372_p1.read().is_01() || !sext_ln203_77_fu_3980_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_326_fu_17372_p1.read()) + sc_bigint<12>(sext_ln203_77_fu_3980_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_398_fu_17386_p2() {
    add_ln703_398_fu_17386_p2 = (!sext_ln703_60_fu_17382_p1.read().is_01() || !sext_ln203_39_fu_3078_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_60_fu_17382_p1.read()) + sc_bigint<13>(sext_ln203_39_fu_3078_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_399_fu_17392_p2() {
    add_ln703_399_fu_17392_p2 = (!sext_ln708_5_fu_1992_p1.read().is_01() || !zext_ln1116_34_fu_2646_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_5_fu_1992_p1.read()) + sc_biguint<10>(zext_ln1116_34_fu_2646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_39_fu_16420_p2() {
    add_ln703_39_fu_16420_p2 = (!zext_ln1118_41_fu_1326_p1.read().is_01() || !zext_ln708_16_fu_1414_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_41_fu_1326_p1.read()) + sc_biguint<9>(zext_ln708_16_fu_1414_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3_fu_16314_p2() {
    add_ln703_3_fu_16314_p2 = (!add_ln703_2_fu_16308_p2.read().is_01() || !sext_ln1116_fu_1358_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2_fu_16308_p2.read()) + sc_bigint<12>(sext_ln1116_fu_1358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_400_fu_17402_p2() {
    add_ln703_400_fu_17402_p2 = (!sext_ln703_327_fu_17398_p1.read().is_01() || !add_ln703_398_fu_17386_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_327_fu_17398_p1.read()) + sc_biguint<13>(add_ln703_398_fu_17386_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_401_fu_17408_p2() {
    add_ln703_401_fu_17408_p2 = (!sext_ln708_32_fu_4004_p1.read().is_01() || !zext_ln203_9_fu_1830_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_32_fu_4004_p1.read()) + sc_biguint<12>(zext_ln203_9_fu_1830_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_402_fu_46240_p2() {
    add_ln703_402_fu_46240_p2 = (!sext_ln703_330_fu_46237_p1.read().is_01() || !sext_ln703_61_fu_46234_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_330_fu_46237_p1.read()) + sc_bigint<14>(sext_ln703_61_fu_46234_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_403_fu_17414_p2() {
    add_ln703_403_fu_17414_p2 = (!sext_ln708_33_fu_4058_p1.read().is_01() || !zext_ln1118_254_fu_4018_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_33_fu_4058_p1.read()) + sc_biguint<9>(zext_ln1118_254_fu_4018_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_404_fu_17424_p2() {
    add_ln703_404_fu_17424_p2 = (!sext_ln703_331_fu_17420_p1.read().is_01() || !sext_ln1118_60_fu_4038_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_331_fu_17420_p1.read()) + sc_bigint<10>(sext_ln1118_60_fu_4038_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_405_fu_46249_p2() {
    add_ln703_405_fu_46249_p2 = (!sext_ln703_332_fu_46246_p1.read().is_01() || !add_ln703_402_fu_46240_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_332_fu_46246_p1.read()) + sc_biguint<14>(add_ln703_402_fu_46240_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_406_fu_46255_p2() {
    add_ln703_406_fu_46255_p2 = (!zext_ln1118_257_fu_28755_p1.read().is_01() || !sext_ln203_30_fu_27619_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_257_fu_28755_p1.read()) + sc_bigint<12>(sext_ln203_30_fu_27619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_407_fu_46265_p2() {
    add_ln703_407_fu_46265_p2 = (!sext_ln703_333_fu_46261_p1.read().is_01() || !add_ln703_405_fu_46249_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_333_fu_46261_p1.read()) + sc_biguint<14>(add_ln703_405_fu_46249_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_408_fu_46275_p2() {
    add_ln703_408_fu_46275_p2 = (!zext_ln708_737_fu_28590_p1.read().is_01() || !zext_ln708_739_fu_28629_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_737_fu_28590_p1.read()) + sc_biguint<11>(zext_ln708_739_fu_28629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_409_fu_46285_p2() {
    add_ln703_409_fu_46285_p2 = (!zext_ln703_99_fu_46281_p1.read().is_01() || !sext_ln708_24_fu_28544_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_99_fu_46281_p1.read()) + sc_bigint<13>(sext_ln708_24_fu_28544_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_40_fu_16430_p2() {
    add_ln703_40_fu_16430_p2 = (!zext_ln203_2_fu_1476_p1.read().is_01() || !zext_ln1116_24_fu_1524_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_2_fu_1476_p1.read()) + sc_biguint<9>(zext_ln1116_24_fu_1524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_410_fu_46295_p2() {
    add_ln703_410_fu_46295_p2 = (!sext_ln703_335_fu_46291_p1.read().is_01() || !sext_ln703_334_fu_46271_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_335_fu_46291_p1.read()) + sc_bigint<15>(sext_ln703_334_fu_46271_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_411_fu_46301_p2() {
    add_ln703_411_fu_46301_p2 = (!sext_ln708_34_fu_28758_p1.read().is_01() || !zext_ln203_72_fu_28761_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_34_fu_28758_p1.read()) + sc_biguint<11>(zext_ln203_72_fu_28761_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_412_fu_46311_p2() {
    add_ln703_412_fu_46311_p2 = (!sext_ln703_336_fu_46307_p1.read().is_01() || !zext_ln1118_261_fu_28784_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_336_fu_46307_p1.read()) + sc_biguint<12>(zext_ln1118_261_fu_28784_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_414_fu_46321_p2() {
    add_ln703_414_fu_46321_p2 = (!zext_ln708_60_fu_27410_p1.read().is_01() || !zext_ln1118_66_fu_26157_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_60_fu_27410_p1.read()) + sc_biguint<9>(zext_ln1118_66_fu_26157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_415_fu_46331_p2() {
    add_ln703_415_fu_46331_p2 = (!zext_ln703_101_fu_46327_p1.read().is_01() || !zext_ln703_30_fu_44492_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_101_fu_46327_p1.read()) + sc_biguint<11>(zext_ln703_30_fu_44492_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_416_fu_46341_p2() {
    add_ln703_416_fu_46341_p2 = (!zext_ln703_102_fu_46337_p1.read().is_01() || !sext_ln703_337_fu_46317_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_102_fu_46337_p1.read()) + sc_bigint<13>(sext_ln703_337_fu_46317_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_417_fu_46351_p2() {
    add_ln703_417_fu_46351_p2 = (!sext_ln703_340_fu_46347_p1.read().is_01() || !add_ln703_410_fu_46295_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_340_fu_46347_p1.read()) + sc_biguint<15>(add_ln703_410_fu_46295_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_418_fu_46357_p2() {
    add_ln703_418_fu_46357_p2 = (!sext_ln203_78_fu_28804_p1.read().is_01() || !zext_ln203_73_fu_28824_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_78_fu_28804_p1.read()) + sc_biguint<12>(zext_ln203_73_fu_28824_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_419_fu_46367_p2() {
    add_ln703_419_fu_46367_p2 = (!sext_ln703_341_fu_46363_p1.read().is_01() || !add_ln703_417_fu_46351_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_341_fu_46363_p1.read()) + sc_biguint<15>(add_ln703_417_fu_46351_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_41_fu_16440_p2() {
    add_ln703_41_fu_16440_p2 = (!zext_ln703_13_fu_16436_p1.read().is_01() || !zext_ln1116_23_fu_1468_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_13_fu_16436_p1.read()) + sc_biguint<10>(zext_ln1116_23_fu_1468_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_420_fu_46377_p2() {
    add_ln703_420_fu_46377_p2 = (!zext_ln203_74_fu_28844_p1.read().is_01() || !sext_ln203_79_fu_28864_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_74_fu_28844_p1.read()) + sc_bigint<12>(sext_ln203_79_fu_28864_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_421_fu_46383_p2() {
    add_ln703_421_fu_46383_p2 = (!sext_ln203_80_fu_28883_p1.read().is_01() || !zext_ln203_76_fu_28891_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_80_fu_28883_p1.read()) + sc_biguint<11>(zext_ln203_76_fu_28891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_422_fu_46393_p2() {
    add_ln703_422_fu_46393_p2 = (!sext_ln703_344_fu_46389_p1.read().is_01() || !add_ln703_420_fu_46377_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_344_fu_46389_p1.read()) + sc_biguint<12>(add_ln703_420_fu_46377_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_424_fu_46416_p2() {
    add_ln703_424_fu_46416_p2 = (!or_ln703_3_fu_46409_p3.read().is_01() || !mult_481_V_fu_28895_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_3_fu_46409_p3.read()) + sc_bigint<16>(mult_481_V_fu_28895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_425_fu_17430_p2() {
    add_ln703_425_fu_17430_p2 = (!sext_ln708_22_fu_3364_p1.read().is_01() || !sext_ln203_84_fu_4122_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_22_fu_3364_p1.read()) + sc_bigint<12>(sext_ln203_84_fu_4122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_426_fu_46425_p2() {
    add_ln703_426_fu_46425_p2 = (!sext_ln703_348_fu_46422_p1.read().is_01() || !add_ln703_424_fu_46416_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_348_fu_46422_p1.read()) + sc_biguint<16>(add_ln703_424_fu_46416_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_427_fu_46431_p2() {
    add_ln703_427_fu_46431_p2 = (!sext_ln203_75_fu_28678_p1.read().is_01() || !sext_ln203_93_fu_28940_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_75_fu_28678_p1.read()) + sc_bigint<12>(sext_ln203_93_fu_28940_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_428_fu_46441_p2() {
    add_ln703_428_fu_46441_p2 = (!sext_ln203_94_fu_28982_p1.read().is_01() || !zext_ln203_79_reg_67481.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_94_fu_28982_p1.read()) + sc_biguint<12>(zext_ln203_79_reg_67481.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_429_fu_46450_p2() {
    add_ln703_429_fu_46450_p2 = (!sext_ln703_350_fu_46446_p1.read().is_01() || !sext_ln703_349_fu_46437_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_350_fu_46446_p1.read()) + sc_bigint<13>(sext_ln703_349_fu_46437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_42_fu_16450_p2() {
    add_ln703_42_fu_16450_p2 = (!zext_ln703_14_fu_16446_p1.read().is_01() || !zext_ln703_12_fu_16426_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_14_fu_16446_p1.read()) + sc_biguint<11>(zext_ln703_12_fu_16426_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_430_fu_46460_p2() {
    add_ln703_430_fu_46460_p2 = (!sext_ln703_351_fu_46456_p1.read().is_01() || !add_ln703_426_fu_46425_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_351_fu_46456_p1.read()) + sc_biguint<16>(add_ln703_426_fu_46425_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_431_fu_46466_p2() {
    add_ln703_431_fu_46466_p2 = (!zext_ln708_743_fu_28898_p1.read().is_01() || !zext_ln708_672_fu_26721_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_743_fu_28898_p1.read()) + sc_biguint<11>(zext_ln708_672_fu_26721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_432_fu_17436_p2() {
    add_ln703_432_fu_17436_p2 = (!sext_ln1118_6_fu_1756_p1.read().is_01() || !sext_ln203_82_fu_4118_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_6_fu_1756_p1.read()) + sc_bigint<11>(sext_ln203_82_fu_4118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_433_fu_46479_p2() {
    add_ln703_433_fu_46479_p2 = (!sext_ln703_352_fu_46476_p1.read().is_01() || !zext_ln703_103_fu_46472_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_352_fu_46476_p1.read()) + sc_biguint<13>(zext_ln703_103_fu_46472_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_434_fu_17442_p2() {
    add_ln703_434_fu_17442_p2 = (!sext_ln203_85_fu_4146_p1.read().is_01() || !sext_ln203_86_fu_4166_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_85_fu_4146_p1.read()) + sc_bigint<11>(sext_ln203_86_fu_4166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_435_fu_46492_p2() {
    add_ln703_435_fu_46492_p2 = (!sext_ln203_54_fu_28213_p1.read().is_01() || !sext_ln203_91_fu_28920_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_54_fu_28213_p1.read()) + sc_bigint<11>(sext_ln203_91_fu_28920_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_436_fu_46502_p2() {
    add_ln703_436_fu_46502_p2 = (!sext_ln703_357_fu_46498_p1.read().is_01() || !sext_ln703_355_fu_46489_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_357_fu_46498_p1.read()) + sc_bigint<12>(sext_ln703_355_fu_46489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_437_fu_46512_p2() {
    add_ln703_437_fu_46512_p2 = (!sext_ln703_358_fu_46508_p1.read().is_01() || !sext_ln703_353_fu_46485_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_358_fu_46508_p1.read()) + sc_bigint<14>(sext_ln703_353_fu_46485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_438_fu_46522_p2() {
    add_ln703_438_fu_46522_p2 = (!sext_ln703_359_fu_46518_p1.read().is_01() || !add_ln703_430_fu_46460_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_359_fu_46518_p1.read()) + sc_biguint<16>(add_ln703_430_fu_46460_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_439_fu_46528_p2() {
    add_ln703_439_fu_46528_p2 = (!zext_ln708_663_fu_26260_p1.read().is_01() || !zext_ln708_694_fu_27476_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_663_fu_26260_p1.read()) + sc_biguint<10>(zext_ln708_694_fu_27476_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_43_fu_43984_p2() {
    add_ln703_43_fu_43984_p2 = (!zext_ln703_15_fu_43981_p1.read().is_01() || !add_ln703_38_fu_43975_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_15_fu_43981_p1.read()) + sc_biguint<14>(add_ln703_38_fu_43975_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_440_fu_46538_p2() {
    add_ln703_440_fu_46538_p2 = (!zext_ln708_75_fu_27946_p1.read().is_01() || !sext_ln203_87_fu_28901_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_75_fu_27946_p1.read()) + sc_bigint<11>(sext_ln203_87_fu_28901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_441_fu_46548_p2() {
    add_ln703_441_fu_46548_p2 = (!sext_ln703_360_fu_46544_p1.read().is_01() || !zext_ln703_104_fu_46534_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_360_fu_46544_p1.read()) + sc_biguint<12>(zext_ln703_104_fu_46534_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_442_fu_46558_p2() {
    add_ln703_442_fu_46558_p2 = (!sext_ln1116_7_fu_27392_p1.read().is_01() || !sext_ln708_3_fu_26784_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_7_fu_27392_p1.read()) + sc_bigint<9>(sext_ln708_3_fu_26784_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_443_fu_46568_p2() {
    add_ln703_443_fu_46568_p2 = (!sext_ln203_17_fu_27330_p1.read().is_01() || !sext_ln203_95_fu_28986_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_17_fu_27330_p1.read()) + sc_bigint<9>(sext_ln203_95_fu_28986_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_444_fu_46578_p2() {
    add_ln703_444_fu_46578_p2 = (!sext_ln703_368_fu_46574_p1.read().is_01() || !sext_ln703_367_fu_46564_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_368_fu_46574_p1.read()) + sc_bigint<10>(sext_ln703_367_fu_46564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_445_fu_46588_p2() {
    add_ln703_445_fu_46588_p2 = (!sext_ln703_369_fu_46584_p1.read().is_01() || !sext_ln703_362_fu_46554_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_369_fu_46584_p1.read()) + sc_bigint<13>(sext_ln703_362_fu_46554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_447_fu_46597_p2() {
    add_ln703_447_fu_46597_p2 = (!zext_ln708_707_fu_27997_p1.read().is_01() || !zext_ln708_674_fu_26725_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_707_fu_27997_p1.read()) + sc_biguint<8>(zext_ln708_674_fu_26725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_448_fu_46607_p2() {
    add_ln703_448_fu_46607_p2 = (!zext_ln703_106_fu_46603_p1.read().is_01() || !zext_ln703_105_fu_46594_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_106_fu_46603_p1.read()) + sc_biguint<10>(zext_ln703_105_fu_46594_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_44_fu_43994_p2() {
    add_ln703_44_fu_43994_p2 = (!zext_ln708_671_fu_26658_p1.read().is_01() || !zext_ln708_672_fu_26721_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_671_fu_26658_p1.read()) + sc_biguint<11>(zext_ln708_672_fu_26721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_450_fu_46617_p2() {
    add_ln703_450_fu_46617_p2 = (!zext_ln708_39_fu_26501_p1.read().is_01() || !zext_ln203_75_fu_28887_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_39_fu_26501_p1.read()) + sc_biguint<9>(zext_ln203_75_fu_28887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_451_fu_46627_p2() {
    add_ln703_451_fu_46627_p2 = (!zext_ln703_109_fu_46623_p1.read().is_01() || !zext_ln703_61_fu_45266_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_109_fu_46623_p1.read()) + sc_biguint<10>(zext_ln703_61_fu_45266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_452_fu_46637_p2() {
    add_ln703_452_fu_46637_p2 = (!zext_ln703_110_fu_46633_p1.read().is_01() || !zext_ln703_107_fu_46613_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_110_fu_46633_p1.read()) + sc_biguint<11>(zext_ln703_107_fu_46613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_453_fu_46647_p2() {
    add_ln703_453_fu_46647_p2 = (!zext_ln703_111_fu_46643_p1.read().is_01() || !add_ln703_445_fu_46588_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_111_fu_46643_p1.read()) + sc_biguint<13>(add_ln703_445_fu_46588_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_455_fu_17448_p2() {
    add_ln703_455_fu_17448_p2 = (!sext_ln203_96_fu_4206_p1.read().is_01() || !ap_const_lv12_F00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_96_fu_4206_p1.read()) + sc_bigint<12>(ap_const_lv12_F00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_456_fu_17458_p2() {
    add_ln703_456_fu_17458_p2 = (!sext_ln203_21_fu_2868_p1.read().is_01() || !sext_ln1118_62_fu_4210_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_21_fu_2868_p1.read()) + sc_bigint<12>(sext_ln1118_62_fu_4210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_457_fu_17468_p2() {
    add_ln703_457_fu_17468_p2 = (!sext_ln703_371_fu_17464_p1.read().is_01() || !sext_ln703_64_fu_17454_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_371_fu_17464_p1.read()) + sc_bigint<13>(sext_ln703_64_fu_17454_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_458_fu_17478_p2() {
    add_ln703_458_fu_17478_p2 = (!sext_ln703_65_fu_17474_p1.read().is_01() || !sext_ln203_97_fu_4246_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_65_fu_17474_p1.read()) + sc_bigint<14>(sext_ln203_97_fu_4246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_459_fu_17484_p2() {
    add_ln703_459_fu_17484_p2 = (!sext_ln708_11_fu_2780_p1.read().is_01() || !zext_ln203_79_fu_4126_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_11_fu_2780_p1.read()) + sc_biguint<12>(zext_ln203_79_fu_4126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_45_fu_44004_p2() {
    add_ln703_45_fu_44004_p2 = (!zext_ln703_16_fu_44000_p1.read().is_01() || !sext_ln703_12_fu_43990_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_16_fu_44000_p1.read()) + sc_bigint<15>(sext_ln703_12_fu_43990_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_460_fu_17494_p2() {
    add_ln703_460_fu_17494_p2 = (!sext_ln703_374_fu_17490_p1.read().is_01() || !add_ln703_458_fu_17478_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_374_fu_17490_p1.read()) + sc_biguint<14>(add_ln703_458_fu_17478_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_461_fu_17500_p2() {
    add_ln703_461_fu_17500_p2 = (!zext_ln1116_57_fu_4276_p1.read().is_01() || !sext_ln1116_10_fu_4242_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_57_fu_4276_p1.read()) + sc_bigint<12>(sext_ln1116_10_fu_4242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_462_fu_17510_p2() {
    add_ln703_462_fu_17510_p2 = (!zext_ln708_699_fu_3150_p1.read().is_01() || !zext_ln1116_52_fu_4268_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_699_fu_3150_p1.read()) + sc_biguint<10>(zext_ln1116_52_fu_4268_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_463_fu_17520_p2() {
    add_ln703_463_fu_17520_p2 = (!zext_ln703_112_fu_17516_p1.read().is_01() || !sext_ln703_375_fu_17506_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_112_fu_17516_p1.read()) + sc_bigint<13>(sext_ln703_375_fu_17506_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_464_fu_17530_p2() {
    add_ln703_464_fu_17530_p2 = (!sext_ln703_379_fu_17526_p1.read().is_01() || !add_ln703_460_fu_17494_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_379_fu_17526_p1.read()) + sc_biguint<14>(add_ln703_460_fu_17494_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_465_fu_46666_p2() {
    add_ln703_465_fu_46666_p2 = (!sext_ln703_66_fu_46663_p1.read().is_01() || !sext_ln203_98_fu_29006_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_66_fu_46663_p1.read()) + sc_bigint<15>(sext_ln203_98_fu_29006_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_466_fu_46672_p2() {
    add_ln703_466_fu_46672_p2 = (!sext_ln1118_63_fu_29029_p1.read().is_01() || !sext_ln1116_15_fu_29103_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_63_fu_29029_p1.read()) + sc_bigint<12>(sext_ln1116_15_fu_29103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_467_fu_46682_p2() {
    add_ln703_467_fu_46682_p2 = (!sext_ln703_380_fu_46678_p1.read().is_01() || !sext_ln1116_12_fu_29010_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_380_fu_46678_p1.read()) + sc_bigint<13>(sext_ln1116_12_fu_29010_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_468_fu_46692_p2() {
    add_ln703_468_fu_46692_p2 = (!sext_ln703_383_fu_46688_p1.read().is_01() || !add_ln703_465_fu_46666_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_383_fu_46688_p1.read()) + sc_biguint<15>(add_ln703_465_fu_46666_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_469_fu_46698_p2() {
    add_ln703_469_fu_46698_p2 = (!zext_ln708_745_fu_29076_p1.read().is_01() || !zext_ln1118_210_fu_27587_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_745_fu_29076_p1.read()) + sc_biguint<10>(zext_ln1118_210_fu_27587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_46_fu_44010_p2() {
    add_ln703_46_fu_44010_p2 = (!zext_ln1118_96_fu_26760_p1.read().is_01() || !sext_ln708_1_fu_26693_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_96_fu_26760_p1.read()) + sc_bigint<12>(sext_ln708_1_fu_26693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_470_fu_46708_p2() {
    add_ln703_470_fu_46708_p2 = (!zext_ln703_113_fu_46704_p1.read().is_01() || !sext_ln1116_16_fu_29107_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_113_fu_46704_p1.read()) + sc_bigint<12>(sext_ln1116_16_fu_29107_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_471_fu_46718_p2() {
    add_ln703_471_fu_46718_p2 = (!sext_ln1116_14_fu_29056_p1.read().is_01() || !zext_ln1118_65_fu_26154_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_14_fu_29056_p1.read()) + sc_biguint<10>(zext_ln1118_65_fu_26154_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_472_fu_46728_p2() {
    add_ln703_472_fu_46728_p2 = (!sext_ln703_385_fu_46724_p1.read().is_01() || !sext_ln1118_64_fu_29049_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_385_fu_46724_p1.read()) + sc_bigint<11>(sext_ln1118_64_fu_29049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_473_fu_46738_p2() {
    add_ln703_473_fu_46738_p2 = (!sext_ln703_387_fu_46734_p1.read().is_01() || !sext_ln703_384_fu_46714_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_387_fu_46734_p1.read()) + sc_bigint<13>(sext_ln703_384_fu_46714_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_474_fu_46748_p2() {
    add_ln703_474_fu_46748_p2 = (!sext_ln703_388_fu_46744_p1.read().is_01() || !add_ln703_468_fu_46692_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_388_fu_46744_p1.read()) + sc_biguint<15>(add_ln703_468_fu_46692_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_475_fu_46754_p2() {
    add_ln703_475_fu_46754_p2 = (!add_ln703_474_fu_46748_p2.read().is_01() || !sext_ln203_99_fu_29111_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_474_fu_46748_p2.read()) + sc_bigint<15>(sext_ln203_99_fu_29111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_476_fu_46764_p2() {
    add_ln703_476_fu_46764_p2 = (!sext_ln203_16_fu_27310_p1.read().is_01() || !zext_ln203_85_fu_29119_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_16_fu_27310_p1.read()) + sc_biguint<12>(zext_ln203_85_fu_29119_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_477_fu_46774_p2() {
    add_ln703_477_fu_46774_p2 = (!sext_ln703_393_fu_46770_p1.read().is_01() || !sext_ln703_391_fu_46760_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_393_fu_46770_p1.read()) + sc_bigint<16>(sext_ln703_391_fu_46760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_478_fu_46780_p2() {
    add_ln703_478_fu_46780_p2 = (!zext_ln708_706_fu_27966_p1.read().is_01() || !zext_ln203_84_fu_29115_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_706_fu_27966_p1.read()) + sc_biguint<11>(zext_ln203_84_fu_29115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_479_fu_46790_p2() {
    add_ln703_479_fu_46790_p2 = (!sext_ln203_17_fu_27330_p1.read().is_01() || !sext_ln203_1_fu_26589_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_17_fu_27330_p1.read()) + sc_bigint<9>(sext_ln203_1_fu_26589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_47_fu_44016_p2() {
    add_ln703_47_fu_44016_p2 = (!sext_ln1116_3_fu_26191_p1.read().is_01() || !sext_ln708_4_fu_26842_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_3_fu_26191_p1.read()) + sc_bigint<10>(sext_ln708_4_fu_26842_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_480_fu_46800_p2() {
    add_ln703_480_fu_46800_p2 = (!sext_ln703_394_fu_46796_p1.read().is_01() || !sext_ln203_103_fu_29143_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_394_fu_46796_p1.read()) + sc_bigint<10>(sext_ln203_103_fu_29143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_481_fu_46810_p2() {
    add_ln703_481_fu_46810_p2 = (!sext_ln703_395_fu_46806_p1.read().is_01() || !zext_ln703_114_fu_46786_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_395_fu_46806_p1.read()) + sc_biguint<12>(zext_ln703_114_fu_46786_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_483_fu_17536_p2() {
    add_ln703_483_fu_17536_p2 = (!sext_ln203_96_fu_4206_p1.read().is_01() || !ap_const_lv12_200.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_96_fu_4206_p1.read()) + sc_biguint<12>(ap_const_lv12_200));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_484_fu_17546_p2() {
    add_ln703_484_fu_17546_p2 = (!sext_ln203_21_fu_2868_p1.read().is_01() || !sext_ln203_38_fu_3028_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_21_fu_2868_p1.read()) + sc_bigint<12>(sext_ln203_38_fu_3028_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_485_fu_17556_p2() {
    add_ln703_485_fu_17556_p2 = (!sext_ln703_397_fu_17552_p1.read().is_01() || !sext_ln703_68_fu_17542_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_397_fu_17552_p1.read()) + sc_bigint<13>(sext_ln703_68_fu_17542_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_486_fu_17562_p2() {
    add_ln703_486_fu_17562_p2 = (!add_ln703_485_fu_17556_p2.read().is_01() || !sext_ln203_19_fu_2642_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_485_fu_17556_p2.read()) + sc_bigint<13>(sext_ln203_19_fu_2642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_487_fu_17572_p2() {
    add_ln703_487_fu_17572_p2 = (!sext_ln708_37_fu_4300_p1.read().is_01() || !sext_ln708_38_fu_4334_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_37_fu_4300_p1.read()) + sc_bigint<11>(sext_ln708_38_fu_4334_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_488_fu_17582_p2() {
    add_ln703_488_fu_17582_p2 = (!sext_ln703_400_fu_17578_p1.read().is_01() || !sext_ln703_399_fu_17568_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_400_fu_17578_p1.read()) + sc_bigint<14>(sext_ln703_399_fu_17568_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_489_fu_17588_p2() {
    add_ln703_489_fu_17588_p2 = (!zext_ln708_735_fu_3792_p1.read().is_01() || !zext_ln1118_209_fu_2904_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_735_fu_3792_p1.read()) + sc_biguint<10>(zext_ln1118_209_fu_2904_p1.read()));
}

}

