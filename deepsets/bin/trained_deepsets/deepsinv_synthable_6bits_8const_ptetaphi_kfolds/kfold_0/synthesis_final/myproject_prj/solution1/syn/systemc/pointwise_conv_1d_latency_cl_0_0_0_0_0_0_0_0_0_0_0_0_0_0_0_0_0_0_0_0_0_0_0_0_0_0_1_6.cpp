#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3804_fu_5120901_p2() {
    add_ln703_3804_fu_5120901_p2 = (!sext_ln703_2138_fu_5120898_p1.read().is_01() || !sext_ln703_949_fu_5120894_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2138_fu_5120898_p1.read()) + sc_bigint<15>(sext_ln703_949_fu_5120894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3805_fu_5109803_p2() {
    add_ln703_3805_fu_5109803_p2 = (!trunc_ln1118_14_fu_5080806_p4.read().is_01() || !zext_ln1116_180_fu_5080860_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_14_fu_5080806_p4.read()) + sc_biguint<10>(zext_ln1116_180_fu_5080860_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3806_fu_5109813_p2() {
    add_ln703_3806_fu_5109813_p2 = (!zext_ln703_526_fu_5109809_p1.read().is_01() || !zext_ln708_840_fu_5078355_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_526_fu_5109809_p1.read()) + sc_biguint<11>(zext_ln708_840_fu_5078355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3807_fu_5120910_p2() {
    add_ln703_3807_fu_5120910_p2 = (!zext_ln703_527_fu_5120907_p1.read().is_01() || !add_ln703_3804_fu_5120901_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_527_fu_5120907_p1.read()) + sc_biguint<15>(add_ln703_3804_fu_5120901_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3808_fu_5109819_p2() {
    add_ln703_3808_fu_5109819_p2 = (!sext_ln1118_874_fu_5080783_p1.read().is_01() || !sext_ln708_230_fu_5080797_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_874_fu_5080783_p1.read()) + sc_bigint<11>(sext_ln708_230_fu_5080797_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3809_fu_5109829_p2() {
    add_ln703_3809_fu_5109829_p2 = (!sext_ln703_2139_fu_5109825_p1.read().is_01() || !zext_ln1116_181_fu_5080922_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2139_fu_5109825_p1.read()) + sc_biguint<12>(zext_ln1116_181_fu_5080922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_380_fu_5113698_p2() {
    add_ln703_380_fu_5113698_p2 = (!add_ln703_379_fu_5113692_p2.read().is_01() || !zext_ln1118_96_fu_5113180_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_379_fu_5113692_p2.read()) + sc_biguint<14>(zext_ln1118_96_fu_5113180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3810_fu_5109839_p2() {
    add_ln703_3810_fu_5109839_p2 = (!sext_ln1118_878_fu_5080976_p1.read().is_01() || !sext_ln708_231_fu_5080894_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_878_fu_5080976_p1.read()) + sc_bigint<11>(sext_ln708_231_fu_5080894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3811_fu_5109849_p2() {
    add_ln703_3811_fu_5109849_p2 = (!sext_ln703_2141_fu_5109845_p1.read().is_01() || !sext_ln1118_875_fu_5080836_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2141_fu_5109845_p1.read()) + sc_bigint<12>(sext_ln1118_875_fu_5080836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3812_fu_5109859_p2() {
    add_ln703_3812_fu_5109859_p2 = (!sext_ln703_2142_fu_5109855_p1.read().is_01() || !sext_ln703_2140_fu_5109835_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2142_fu_5109855_p1.read()) + sc_bigint<13>(sext_ln703_2140_fu_5109835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3813_fu_5120919_p2() {
    add_ln703_3813_fu_5120919_p2 = (!sext_ln703_2143_fu_5120916_p1.read().is_01() || !add_ln703_3807_fu_5120910_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2143_fu_5120916_p1.read()) + sc_biguint<15>(add_ln703_3807_fu_5120910_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3814_fu_5120925_p2() {
    add_ln703_3814_fu_5120925_p2 = (!add_ln703_3813_fu_5120919_p2.read().is_01() || !sext_ln203_692_fu_5113570_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3813_fu_5120919_p2.read()) + sc_bigint<15>(sext_ln203_692_fu_5113570_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3815_fu_5109865_p2() {
    add_ln703_3815_fu_5109865_p2 = (!sext_ln203_697_fu_5081126_p1.read().is_01() || !zext_ln203_424_fu_5080515_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_697_fu_5081126_p1.read()) + sc_biguint<12>(zext_ln203_424_fu_5080515_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3816_fu_5109875_p2() {
    add_ln703_3816_fu_5109875_p2 = (!sext_ln703_2144_fu_5109871_p1.read().is_01() || !sext_ln203_696_fu_5081106_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2144_fu_5109871_p1.read()) + sc_bigint<13>(sext_ln203_696_fu_5081106_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3817_fu_5120934_p2() {
    add_ln703_3817_fu_5120934_p2 = (!sext_ln703_2145_fu_5120931_p1.read().is_01() || !add_ln703_3814_fu_5120925_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2145_fu_5120931_p1.read()) + sc_biguint<15>(add_ln703_3814_fu_5120925_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3818_fu_5109881_p2() {
    add_ln703_3818_fu_5109881_p2 = (!zext_ln203_426_fu_5081163_p1.read().is_01() || !zext_ln203_427_fu_5081167_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_426_fu_5081163_p1.read()) + sc_biguint<10>(zext_ln203_427_fu_5081167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3819_fu_5109891_p2() {
    add_ln703_3819_fu_5109891_p2 = (!sext_ln203_693_fu_5081050_p1.read().is_01() || !sext_ln203_694_fu_5081064_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_693_fu_5081050_p1.read()) + sc_bigint<10>(sext_ln203_694_fu_5081064_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_381_fu_5086923_p2() {
    add_ln703_381_fu_5086923_p2 = (!sext_ln708_4_fu_5022670_p1.read().is_01() || !sext_ln1118_130_fu_5022744_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_4_fu_5022670_p1.read()) + sc_bigint<11>(sext_ln1118_130_fu_5022744_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3820_fu_5109901_p2() {
    add_ln703_3820_fu_5109901_p2 = (!sext_ln703_2147_fu_5109897_p1.read().is_01() || !sext_ln203_691_fu_5081018_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2147_fu_5109897_p1.read()) + sc_bigint<11>(sext_ln203_691_fu_5081018_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3821_fu_5109911_p2() {
    add_ln703_3821_fu_5109911_p2 = (!sext_ln703_2148_fu_5109907_p1.read().is_01() || !zext_ln703_528_fu_5109887_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2148_fu_5109907_p1.read()) + sc_biguint<12>(zext_ln703_528_fu_5109887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3823_fu_5109917_p2() {
    add_ln703_3823_fu_5109917_p2 = (!sext_ln1118_881_fu_5081171_p1.read().is_01() || !ap_const_lv10_20.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_881_fu_5081171_p1.read()) + sc_biguint<10>(ap_const_lv10_20));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3824_fu_5109927_p2() {
    add_ln703_3824_fu_5109927_p2 = (!zext_ln1118_1579_fu_5081207_p1.read().is_01() || !zext_ln708_890_fu_5081227_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1579_fu_5081207_p1.read()) + sc_biguint<9>(zext_ln708_890_fu_5081227_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3825_fu_5109937_p2() {
    add_ln703_3825_fu_5109937_p2 = (!zext_ln703_529_fu_5109933_p1.read().is_01() || !sext_ln703_2150_fu_5109923_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_529_fu_5109933_p1.read()) + sc_bigint<11>(sext_ln703_2150_fu_5109923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3826_fu_5109947_p2() {
    add_ln703_3826_fu_5109947_p2 = (!zext_ln1118_1580_fu_5081231_p1.read().is_01() || !sext_ln1118_883_fu_5081179_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1580_fu_5081231_p1.read()) + sc_bigint<9>(sext_ln1118_883_fu_5081179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3827_fu_5109957_p2() {
    add_ln703_3827_fu_5109957_p2 = (!sext_ln703_2152_fu_5109953_p1.read().is_01() || !sext_ln1118_885_fu_5081203_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2152_fu_5109953_p1.read()) + sc_bigint<11>(sext_ln1118_885_fu_5081203_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3828_fu_5109967_p2() {
    add_ln703_3828_fu_5109967_p2 = (!sext_ln703_2153_fu_5109963_p1.read().is_01() || !sext_ln703_2151_fu_5109943_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2153_fu_5109963_p1.read()) + sc_bigint<12>(sext_ln703_2151_fu_5109943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3829_fu_5109977_p2() {
    add_ln703_3829_fu_5109977_p2 = (!sext_ln703_2154_fu_5109973_p1.read().is_01() || !sext_ln708_233_fu_5081265_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2154_fu_5109973_p1.read()) + sc_bigint<13>(sext_ln708_233_fu_5081265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_382_fu_5086933_p2() {
    add_ln703_382_fu_5086933_p2 = (!sext_ln703_141_fu_5086929_p1.read().is_01() || !zext_ln1118_102_fu_5022880_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_141_fu_5086929_p1.read()) + sc_biguint<12>(zext_ln1118_102_fu_5022880_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3830_fu_5109983_p2() {
    add_ln703_3830_fu_5109983_p2 = (!zext_ln708_891_fu_5081279_p1.read().is_01() || !sext_ln1118_886_fu_5081245_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_891_fu_5081279_p1.read()) + sc_bigint<12>(sext_ln1118_886_fu_5081245_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3831_fu_5109993_p2() {
    add_ln703_3831_fu_5109993_p2 = (!sext_ln703_2155_fu_5109989_p1.read().is_01() || !add_ln703_3829_fu_5109977_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2155_fu_5109989_p1.read()) + sc_biguint<13>(add_ln703_3829_fu_5109977_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3832_fu_5109999_p2() {
    add_ln703_3832_fu_5109999_p2 = (!sext_ln708_195_fu_5072541_p1.read().is_01() || !zext_ln708_892_fu_5081283_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_195_fu_5072541_p1.read()) + sc_biguint<10>(zext_ln708_892_fu_5081283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3833_fu_5110009_p2() {
    add_ln703_3833_fu_5110009_p2 = (!zext_ln708_774_fu_5073407_p1.read().is_01() || !zext_ln708_894_fu_5081311_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_774_fu_5073407_p1.read()) + sc_biguint<8>(zext_ln708_894_fu_5081311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3834_fu_5110015_p2() {
    add_ln703_3834_fu_5110015_p2 = (!add_ln703_3833_fu_5110009_p2.read().is_01() || !zext_ln708_893_fu_5081297_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln703_3833_fu_5110009_p2.read()) + sc_biguint<8>(zext_ln708_893_fu_5081297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3835_fu_5110025_p2() {
    add_ln703_3835_fu_5110025_p2 = (!zext_ln703_530_fu_5110021_p1.read().is_01() || !sext_ln703_2157_fu_5110005_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_530_fu_5110021_p1.read()) + sc_bigint<11>(sext_ln703_2157_fu_5110005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3836_fu_5120959_p2() {
    add_ln703_3836_fu_5120959_p2 = (!sext_ln703_2158_fu_5120956_p1.read().is_01() || !sext_ln703_2156_fu_5120953_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2158_fu_5120956_p1.read()) + sc_bigint<14>(sext_ln703_2156_fu_5120953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3837_fu_5110031_p2() {
    add_ln703_3837_fu_5110031_p2 = (!sext_ln1118_888_fu_5081357_p1.read().is_01() || !zext_ln1118_1582_fu_5081371_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_888_fu_5081357_p1.read()) + sc_biguint<12>(zext_ln1118_1582_fu_5081371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3838_fu_5120968_p2() {
    add_ln703_3838_fu_5120968_p2 = (!sext_ln703_2159_fu_5120965_p1.read().is_01() || !add_ln703_3836_fu_5120959_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2159_fu_5120965_p1.read()) + sc_biguint<14>(add_ln703_3836_fu_5120959_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3839_fu_5110037_p2() {
    add_ln703_3839_fu_5110037_p2 = (!zext_ln708_895_fu_5081437_p1.read().is_01() || !zext_ln708_896_fu_5081451_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_895_fu_5081437_p1.read()) + sc_biguint<11>(zext_ln708_896_fu_5081451_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_383_fu_5113707_p2() {
    add_ln703_383_fu_5113707_p2 = (!sext_ln703_142_fu_5113704_p1.read().is_01() || !add_ln703_380_fu_5113698_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_142_fu_5113704_p1.read()) + sc_biguint<14>(add_ln703_380_fu_5113698_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3840_fu_5110043_p2() {
    add_ln703_3840_fu_5110043_p2 = (!add_ln703_3839_fu_5110037_p2.read().is_01() || !zext_ln708_770_fu_5072963_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3839_fu_5110037_p2.read()) + sc_biguint<11>(zext_ln708_770_fu_5072963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3841_fu_5120977_p2() {
    add_ln703_3841_fu_5120977_p2 = (!zext_ln703_531_fu_5120974_p1.read().is_01() || !add_ln703_3838_fu_5120968_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_531_fu_5120974_p1.read()) + sc_biguint<14>(add_ln703_3838_fu_5120968_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3842_fu_5110049_p2() {
    add_ln703_3842_fu_5110049_p2 = (!sext_ln703_2012_fu_5108249_p1.read().is_01() || !zext_ln1118_1586_fu_5081471_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2012_fu_5108249_p1.read()) + sc_biguint<12>(zext_ln1118_1586_fu_5081471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3843_fu_5110059_p2() {
    add_ln703_3843_fu_5110059_p2 = (!sext_ln1118_891_fu_5081413_p1.read().is_01() || !sext_ln1118_889_fu_5081375_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_891_fu_5081413_p1.read()) + sc_bigint<10>(sext_ln1118_889_fu_5081375_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3844_fu_5110069_p2() {
    add_ln703_3844_fu_5110069_p2 = (!sext_ln703_2162_fu_5110065_p1.read().is_01() || !sext_ln1118_887_fu_5081325_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2162_fu_5110065_p1.read()) + sc_bigint<11>(sext_ln1118_887_fu_5081325_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3845_fu_5110079_p2() {
    add_ln703_3845_fu_5110079_p2 = (!sext_ln703_2163_fu_5110075_p1.read().is_01() || !sext_ln703_2161_fu_5110055_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2163_fu_5110075_p1.read()) + sc_bigint<13>(sext_ln703_2161_fu_5110055_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3846_fu_5120990_p2() {
    add_ln703_3846_fu_5120990_p2 = (!sext_ln703_2164_fu_5120987_p1.read().is_01() || !sext_ln703_2160_fu_5120983_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2164_fu_5120987_p1.read()) + sc_bigint<15>(sext_ln703_2160_fu_5120983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3847_fu_5110085_p2() {
    add_ln703_3847_fu_5110085_p2 = (!zext_ln203_428_fu_5081491_p1.read().is_01() || !sext_ln203_698_fu_5081537_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_428_fu_5081491_p1.read()) + sc_bigint<12>(sext_ln203_698_fu_5081537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3848_fu_5120999_p2() {
    add_ln703_3848_fu_5120999_p2 = (!sext_ln703_2165_fu_5120996_p1.read().is_01() || !add_ln703_3846_fu_5120990_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2165_fu_5120996_p1.read()) + sc_biguint<15>(add_ln703_3846_fu_5120990_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3849_fu_5110091_p2() {
    add_ln703_3849_fu_5110091_p2 = (!sext_ln203_700_fu_5081565_p1.read().is_01() || !zext_ln203_429_fu_5081495_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_700_fu_5081565_p1.read()) + sc_biguint<12>(zext_ln203_429_fu_5081495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_384_fu_5086939_p2() {
    add_ln703_384_fu_5086939_p2 = (!sext_ln1118_137_fu_5022926_p1.read().is_01() || !sext_ln1118_129_fu_5022626_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_137_fu_5022926_p1.read()) + sc_bigint<10>(sext_ln1118_129_fu_5022626_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3850_fu_5110101_p2() {
    add_ln703_3850_fu_5110101_p2 = (!zext_ln708_897_fu_5081509_p1.read().is_01() || !zext_ln708_898_fu_5081523_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_897_fu_5081509_p1.read()) + sc_biguint<11>(zext_ln708_898_fu_5081523_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3851_fu_5110111_p2() {
    add_ln703_3851_fu_5110111_p2 = (!zext_ln703_532_fu_5110107_p1.read().is_01() || !sext_ln703_2166_fu_5110097_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_532_fu_5110107_p1.read()) + sc_bigint<13>(sext_ln703_2166_fu_5110097_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3853_fu_5110117_p2() {
    add_ln703_3853_fu_5110117_p2 = (!zext_ln708_783_fu_5074662_p1.read().is_01() || !ap_const_lv10_2C0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_783_fu_5074662_p1.read()) + sc_bigint<10>(ap_const_lv10_2C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3854_fu_5110127_p2() {
    add_ln703_3854_fu_5110127_p2 = (!sext_ln703_2169_fu_5110123_p1.read().is_01() || !sext_ln1118_892_fu_5081585_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2169_fu_5110123_p1.read()) + sc_bigint<11>(sext_ln1118_892_fu_5081585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3855_fu_5110137_p2() {
    add_ln703_3855_fu_5110137_p2 = (!sext_ln703_2170_fu_5110133_p1.read().is_01() || !sext_ln1118_894_fu_5081649_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2170_fu_5110133_p1.read()) + sc_bigint<12>(sext_ln1118_894_fu_5081649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3856_fu_5110147_p2() {
    add_ln703_3856_fu_5110147_p2 = (!zext_ln708_900_fu_5081617_p1.read().is_01() || !sext_ln1118_893_fu_5081589_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_900_fu_5081617_p1.read()) + sc_bigint<11>(sext_ln1118_893_fu_5081589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3857_fu_5110157_p2() {
    add_ln703_3857_fu_5110157_p2 = (!sext_ln703_2172_fu_5110153_p1.read().is_01() || !zext_ln1118_1588_fu_5081613_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2172_fu_5110153_p1.read()) + sc_biguint<12>(zext_ln1118_1588_fu_5081613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3858_fu_5110167_p2() {
    add_ln703_3858_fu_5110167_p2 = (!sext_ln703_2173_fu_5110163_p1.read().is_01() || !sext_ln703_2171_fu_5110143_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2173_fu_5110163_p1.read()) + sc_bigint<13>(sext_ln703_2171_fu_5110143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3859_fu_5110173_p2() {
    add_ln703_3859_fu_5110173_p2 = (!zext_ln708_901_fu_5081747_p1.read().is_01() || !sext_ln1118_898_fu_5081727_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_901_fu_5081747_p1.read()) + sc_bigint<11>(sext_ln1118_898_fu_5081727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_385_fu_5086949_p2() {
    add_ln703_385_fu_5086949_p2 = (!sext_ln703_143_fu_5086945_p1.read().is_01() || !sext_ln1118_133_fu_5022812_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_143_fu_5086945_p1.read()) + sc_bigint<11>(sext_ln1118_133_fu_5022812_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3860_fu_5121021_p2() {
    add_ln703_3860_fu_5121021_p2 = (!sext_ln703_2174_fu_5121018_p1.read().is_01() || !add_ln703_3858_reg_5126812.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2174_fu_5121018_p1.read()) + sc_biguint<13>(add_ln703_3858_reg_5126812.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3861_fu_5110179_p2() {
    add_ln703_3861_fu_5110179_p2 = (!sext_ln1118_896_fu_5081683_p1.read().is_01() || !sext_ln1118_897_fu_5081703_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_896_fu_5081683_p1.read()) + sc_bigint<10>(sext_ln1118_897_fu_5081703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3862_fu_5110189_p2() {
    add_ln703_3862_fu_5110189_p2 = (!sext_ln703_2175_fu_5110185_p1.read().is_01() || !sext_ln1118_900_fu_5081781_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2175_fu_5110185_p1.read()) + sc_bigint<11>(sext_ln1118_900_fu_5081781_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3863_fu_5121029_p2() {
    add_ln703_3863_fu_5121029_p2 = (!sext_ln703_2176_fu_5121026_p1.read().is_01() || !add_ln703_3860_fu_5121021_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2176_fu_5121026_p1.read()) + sc_biguint<13>(add_ln703_3860_fu_5121021_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3864_fu_5110195_p2() {
    add_ln703_3864_fu_5110195_p2 = (!sext_ln1118_901_fu_5081805_p1.read().is_01() || !sext_ln1118_902_fu_5081871_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_901_fu_5081805_p1.read()) + sc_bigint<12>(sext_ln1118_902_fu_5081871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3865_fu_5121042_p2() {
    add_ln703_3865_fu_5121042_p2 = (!sext_ln703_2178_fu_5121039_p1.read().is_01() || !sext_ln703_2177_fu_5121035_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2178_fu_5121039_p1.read()) + sc_bigint<14>(sext_ln703_2177_fu_5121035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3866_fu_5110201_p2() {
    add_ln703_3866_fu_5110201_p2 = (!sext_ln708_235_fu_5081957_p1.read().is_01() || !zext_ln1118_1595_fu_5081857_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_235_fu_5081957_p1.read()) + sc_biguint<12>(zext_ln1118_1595_fu_5081857_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3867_fu_5110211_p2() {
    add_ln703_3867_fu_5110211_p2 = (!sext_ln703_2180_fu_5110207_p1.read().is_01() || !sext_ln1118_905_fu_5081943_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2180_fu_5110207_p1.read()) + sc_bigint<13>(sext_ln1118_905_fu_5081943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3868_fu_5121055_p2() {
    add_ln703_3868_fu_5121055_p2 = (!sext_ln703_2181_fu_5121052_p1.read().is_01() || !sext_ln703_2179_fu_5121048_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2181_fu_5121052_p1.read()) + sc_bigint<15>(sext_ln703_2179_fu_5121048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3869_fu_5110217_p2() {
    add_ln703_3869_fu_5110217_p2 = (!zext_ln708_902_fu_5081977_p1.read().is_01() || !sext_ln1118_903_fu_5081891_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_902_fu_5081977_p1.read()) + sc_bigint<10>(sext_ln1118_903_fu_5081891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_386_fu_5086955_p2() {
    add_ln703_386_fu_5086955_p2 = (!sext_ln1118_135_fu_5022848_p1.read().is_01() || !zext_ln1118_94_fu_5022684_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_135_fu_5022848_p1.read()) + sc_biguint<9>(zext_ln1118_94_fu_5022684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3870_fu_5110223_p2() {
    add_ln703_3870_fu_5110223_p2 = (!add_ln703_3869_fu_5110217_p2.read().is_01() || !zext_ln708_866_fu_5079469_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3869_fu_5110217_p2.read()) + sc_biguint<10>(zext_ln708_866_fu_5079469_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3871_fu_5110233_p2() {
    add_ln703_3871_fu_5110233_p2 = (!sext_ln708_234_fu_5081829_p1.read().is_01() || !sext_ln1118_904_fu_5081911_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_234_fu_5081829_p1.read()) + sc_bigint<8>(sext_ln1118_904_fu_5081911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3872_fu_5110239_p2() {
    add_ln703_3872_fu_5110239_p2 = (!add_ln703_3871_fu_5110233_p2.read().is_01() || !zext_ln708_903_fu_5081991_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln703_3871_fu_5110233_p2.read()) + sc_biguint<8>(zext_ln708_903_fu_5081991_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3873_fu_5110249_p2() {
    add_ln703_3873_fu_5110249_p2 = (!sext_ln703_2183_fu_5110245_p1.read().is_01() || !sext_ln703_2182_fu_5110229_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2183_fu_5110245_p1.read()) + sc_bigint<11>(sext_ln703_2182_fu_5110229_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3874_fu_5121064_p2() {
    add_ln703_3874_fu_5121064_p2 = (!sext_ln703_2184_fu_5121061_p1.read().is_01() || !add_ln703_3868_fu_5121055_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2184_fu_5121061_p1.read()) + sc_biguint<15>(add_ln703_3868_fu_5121055_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3875_fu_5121070_p2() {
    add_ln703_3875_fu_5121070_p2 = (!add_ln703_3874_fu_5121064_p2.read().is_01() || !zext_ln203_430_fu_5113573_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3874_fu_5121064_p2.read()) + sc_biguint<15>(zext_ln203_430_fu_5113573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3876_fu_5110255_p2() {
    add_ln703_3876_fu_5110255_p2 = (!zext_ln708_904_fu_5082005_p1.read().is_01() || !zext_ln708_905_fu_5082019_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_904_fu_5082005_p1.read()) + sc_biguint<11>(zext_ln708_905_fu_5082019_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3877_fu_5110265_p2() {
    add_ln703_3877_fu_5110265_p2 = (!zext_ln703_533_fu_5110261_p1.read().is_01() || !sext_ln203_699_fu_5081561_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_533_fu_5110261_p1.read()) + sc_bigint<13>(sext_ln203_699_fu_5081561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3878_fu_5121079_p2() {
    add_ln703_3878_fu_5121079_p2 = (!sext_ln703_2185_fu_5121076_p1.read().is_01() || !add_ln703_3875_fu_5121070_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2185_fu_5121076_p1.read()) + sc_biguint<15>(add_ln703_3875_fu_5121070_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3879_fu_5110271_p2() {
    add_ln703_3879_fu_5110271_p2 = (!zext_ln203_431_fu_5082023_p1.read().is_01() || !zext_ln203_432_fu_5082037_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_431_fu_5082023_p1.read()) + sc_biguint<10>(zext_ln203_432_fu_5082037_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_387_fu_5086965_p2() {
    add_ln703_387_fu_5086965_p2 = (!sext_ln703_144_fu_5086961_p1.read().is_01() || !sext_ln1118_132_fu_5022780_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_144_fu_5086961_p1.read()) + sc_bigint<10>(sext_ln1118_132_fu_5022780_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3880_fu_5110281_p2() {
    add_ln703_3880_fu_5110281_p2 = (!zext_ln203_433_fu_5082071_p1.read().is_01() || !zext_ln708_801_fu_5075832_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_433_fu_5082071_p1.read()) + sc_biguint<9>(zext_ln708_801_fu_5075832_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3881_fu_5110291_p2() {
    add_ln703_3881_fu_5110291_p2 = (!zext_ln703_535_fu_5110287_p1.read().is_01() || !zext_ln708_906_fu_5082051_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_535_fu_5110287_p1.read()) + sc_biguint<11>(zext_ln708_906_fu_5082051_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3882_fu_5110297_p2() {
    add_ln703_3882_fu_5110297_p2 = (!add_ln703_3881_fu_5110291_p2.read().is_01() || !zext_ln703_534_fu_5110277_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3881_fu_5110291_p2.read()) + sc_biguint<11>(zext_ln703_534_fu_5110277_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3884_fu_5110311_p2() {
    add_ln703_3884_fu_5110311_p2 = (!zext_ln203_434_fu_5082085_p1.read().is_01() || !zext_ln203_435_fu_5082123_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_434_fu_5082085_p1.read()) + sc_biguint<10>(zext_ln203_435_fu_5082123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3885_fu_5110321_p2() {
    add_ln703_3885_fu_5110321_p2 = (!zext_ln703_537_fu_5110317_p1.read().is_01() || !or_ln703_23_fu_5110303_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_537_fu_5110317_p1.read()) + sc_biguint<16>(or_ln703_23_fu_5110303_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3886_fu_5110327_p2() {
    add_ln703_3886_fu_5110327_p2 = (!tmp_871_fu_5082151_p4.read().is_01() || !zext_ln203_436_fu_5082209_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_871_fu_5082151_p4.read()) + sc_biguint<10>(zext_ln203_436_fu_5082209_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3887_fu_5110337_p2() {
    add_ln703_3887_fu_5110337_p2 = (!trunc_ln203_67_fu_5082223_p4.read().is_01() || !zext_ln203_437_fu_5082233_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_67_fu_5082223_p4.read()) + sc_biguint<10>(zext_ln203_437_fu_5082233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3888_fu_5110347_p2() {
    add_ln703_3888_fu_5110347_p2 = (!zext_ln703_539_fu_5110343_p1.read().is_01() || !zext_ln703_538_fu_5110333_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_539_fu_5110343_p1.read()) + sc_biguint<11>(zext_ln703_538_fu_5110333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3889_fu_5110357_p2() {
    add_ln703_3889_fu_5110357_p2 = (!zext_ln703_540_fu_5110353_p1.read().is_01() || !add_ln703_3885_fu_5110321_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_540_fu_5110353_p1.read()) + sc_biguint<16>(add_ln703_3885_fu_5110321_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_388_fu_5086975_p2() {
    add_ln703_388_fu_5086975_p2 = (!sext_ln703_145_fu_5086971_p1.read().is_01() || !add_ln703_385_fu_5086949_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_145_fu_5086971_p1.read()) + sc_biguint<11>(add_ln703_385_fu_5086949_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3890_fu_5110363_p2() {
    add_ln703_3890_fu_5110363_p2 = (!trunc_ln203_68_fu_5082257_p4.read().is_01() || !zext_ln203_439_fu_5082267_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_68_fu_5082257_p4.read()) + sc_biguint<9>(zext_ln203_439_fu_5082267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3891_fu_5110373_p2() {
    add_ln703_3891_fu_5110373_p2 = (!zext_ln703_541_fu_5110369_p1.read().is_01() || !zext_ln203_438_fu_5082253_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_541_fu_5110369_p1.read()) + sc_biguint<10>(zext_ln203_438_fu_5082253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3892_fu_5110383_p2() {
    add_ln703_3892_fu_5110383_p2 = (!zext_ln203_440_fu_5082271_p1.read().is_01() || !trunc_ln1118_13_fu_5078437_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_440_fu_5082271_p1.read()) + sc_biguint<10>(trunc_ln1118_13_fu_5078437_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3893_fu_5110393_p2() {
    add_ln703_3893_fu_5110393_p2 = (!zext_ln708_913_fu_5082309_p1.read().is_01() || !zext_ln708_914_fu_5082349_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_913_fu_5082309_p1.read()) + sc_biguint<11>(zext_ln708_914_fu_5082349_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3894_fu_5110399_p2() {
    add_ln703_3894_fu_5110399_p2 = (!add_ln703_3893_fu_5110393_p2.read().is_01() || !zext_ln703_543_fu_5110389_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3893_fu_5110393_p2.read()) + sc_biguint<11>(zext_ln703_543_fu_5110389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3895_fu_5110409_p2() {
    add_ln703_3895_fu_5110409_p2 = (!zext_ln703_544_fu_5110405_p1.read().is_01() || !zext_ln703_542_fu_5110379_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_544_fu_5110405_p1.read()) + sc_biguint<12>(zext_ln703_542_fu_5110379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3896_fu_5121101_p2() {
    add_ln703_3896_fu_5121101_p2 = (!zext_ln703_545_fu_5121098_p1.read().is_01() || !add_ln703_3889_reg_5126852.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_545_fu_5121098_p1.read()) + sc_biguint<16>(add_ln703_3889_reg_5126852.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3897_fu_5110415_p2() {
    add_ln703_3897_fu_5110415_p2 = (!zext_ln203_441_fu_5082393_p1.read().is_01() || !zext_ln203_386_fu_5073091_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_441_fu_5082393_p1.read()) + sc_biguint<10>(zext_ln203_386_fu_5073091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3898_fu_5110425_p2() {
    add_ln703_3898_fu_5110425_p2 = (!zext_ln703_546_fu_5110421_p1.read().is_01() || !zext_ln708_915_fu_5082369_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_546_fu_5110421_p1.read()) + sc_biguint<11>(zext_ln708_915_fu_5082369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3899_fu_5110435_p2() {
    add_ln703_3899_fu_5110435_p2 = (!zext_ln203_442_fu_5082411_p1.read().is_01() || !sext_ln203_701_fu_5082185_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_442_fu_5082411_p1.read()) + sc_bigint<12>(sext_ln203_701_fu_5082185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_389_fu_5113716_p2() {
    add_ln703_389_fu_5113716_p2 = (!sext_ln703_146_fu_5113713_p1.read().is_01() || !add_ln703_383_fu_5113707_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_146_fu_5113713_p1.read()) + sc_biguint<14>(add_ln703_383_fu_5113707_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3900_fu_5110445_p2() {
    add_ln703_3900_fu_5110445_p2 = (!sext_ln203_702_fu_5082285_p1.read().is_01() || !sext_ln203_704_fu_5082407_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_702_fu_5082285_p1.read()) + sc_bigint<11>(sext_ln203_704_fu_5082407_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3901_fu_5110455_p2() {
    add_ln703_3901_fu_5110455_p2 = (!sext_ln703_2188_fu_5110451_p1.read().is_01() || !sext_ln703_2187_fu_5110441_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2188_fu_5110451_p1.read()) + sc_bigint<13>(sext_ln703_2187_fu_5110441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3902_fu_5110461_p2() {
    add_ln703_3902_fu_5110461_p2 = (!add_ln703_3901_fu_5110455_p2.read().is_01() || !zext_ln703_547_fu_5110431_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3901_fu_5110455_p2.read()) + sc_biguint<13>(zext_ln703_547_fu_5110431_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3903_fu_5110471_p2() {
    add_ln703_3903_fu_5110471_p2 = (!sext_ln708_227_fu_5080345_p1.read().is_01() || !sext_ln203_703_fu_5082329_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_227_fu_5080345_p1.read()) + sc_bigint<10>(sext_ln203_703_fu_5082329_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3904_fu_5110481_p2() {
    add_ln703_3904_fu_5110481_p2 = (!zext_ln1118_1524_fu_5078623_p1.read().is_01() || !zext_ln1118_1389_fu_5073920_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1524_fu_5078623_p1.read()) + sc_biguint<10>(zext_ln1118_1389_fu_5073920_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3905_fu_5110491_p2() {
    add_ln703_3905_fu_5110491_p2 = (!zext_ln703_548_fu_5110487_p1.read().is_01() || !sext_ln703_2190_fu_5110477_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_548_fu_5110487_p1.read()) + sc_bigint<12>(sext_ln703_2190_fu_5110477_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3906_fu_5110497_p2() {
    add_ln703_3906_fu_5110497_p2 = (!zext_ln708_907_fu_5082099_p1.read().is_01() || !zext_ln708_908_fu_5082137_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_907_fu_5082099_p1.read()) + sc_biguint<8>(zext_ln708_908_fu_5082137_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3907_fu_5110507_p2() {
    add_ln703_3907_fu_5110507_p2 = (!zext_ln203_377_fu_5071304_p1.read().is_01() || !sext_ln203_705_fu_5082415_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_377_fu_5071304_p1.read()) + sc_bigint<10>(sext_ln203_705_fu_5082415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3908_fu_5110513_p2() {
    add_ln703_3908_fu_5110513_p2 = (!add_ln703_3907_fu_5110507_p2.read().is_01() || !zext_ln703_549_fu_5110503_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3907_fu_5110507_p2.read()) + sc_biguint<10>(zext_ln703_549_fu_5110503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3909_fu_5110523_p2() {
    add_ln703_3909_fu_5110523_p2 = (!sext_ln703_2191_fu_5110519_p1.read().is_01() || !add_ln703_3905_fu_5110491_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2191_fu_5110519_p1.read()) + sc_biguint<12>(add_ln703_3905_fu_5110491_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_390_fu_5113722_p2() {
    add_ln703_390_fu_5113722_p2 = (!add_ln703_389_fu_5113716_p2.read().is_01() || !zext_ln203_7_fu_5113183_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_389_fu_5113716_p2.read()) + sc_biguint<14>(zext_ln203_7_fu_5113183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3910_fu_5110533_p2() {
    add_ln703_3910_fu_5110533_p2 = (!sext_ln703_2192_fu_5110529_p1.read().is_01() || !sext_ln703_2189_fu_5110467_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2192_fu_5110529_p1.read()) + sc_bigint<14>(sext_ln703_2189_fu_5110467_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3912_fu_5110539_p2() {
    add_ln703_3912_fu_5110539_p2 = (!trunc_ln203_69_fu_5082425_p4.read().is_01() || !ap_const_lv9_80.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_69_fu_5082425_p4.read()) + sc_biguint<9>(ap_const_lv9_80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3913_fu_5110549_p2() {
    add_ln703_3913_fu_5110549_p2 = (!zext_ln203_443_fu_5082451_p1.read().is_01() || !zext_ln703_40_fu_5110545_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_443_fu_5082451_p1.read()) + sc_biguint<10>(zext_ln703_40_fu_5110545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3914_fu_5110559_p2() {
    add_ln703_3914_fu_5110559_p2 = (!zext_ln703_41_fu_5110555_p1.read().is_01() || !sext_ln203_706_fu_5082455_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_41_fu_5110555_p1.read()) + sc_bigint<12>(sext_ln203_706_fu_5082455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3915_fu_5110569_p2() {
    add_ln703_3915_fu_5110569_p2 = (!sext_ln1118_906_fu_5082475_p1.read().is_01() || !sext_ln708_236_fu_5082489_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_906_fu_5082475_p1.read()) + sc_bigint<12>(sext_ln708_236_fu_5082489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3916_fu_5110579_p2() {
    add_ln703_3916_fu_5110579_p2 = (!sext_ln703_2194_fu_5110575_p1.read().is_01() || !sext_ln703_960_fu_5110565_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2194_fu_5110575_p1.read()) + sc_bigint<13>(sext_ln703_960_fu_5110565_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3917_fu_5110585_p2() {
    add_ln703_3917_fu_5110585_p2 = (!zext_ln1116_183_fu_5082513_p1.read().is_01() || !sext_ln1118_907_fu_5082537_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_183_fu_5082513_p1.read()) + sc_bigint<12>(sext_ln1118_907_fu_5082537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3918_fu_5121121_p2() {
    add_ln703_3918_fu_5121121_p2 = (!sext_ln703_2195_fu_5121118_p1.read().is_01() || !sext_ln703_961_fu_5121115_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2195_fu_5121118_p1.read()) + sc_bigint<14>(sext_ln703_961_fu_5121115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3919_fu_5110591_p2() {
    add_ln703_3919_fu_5110591_p2 = (!zext_ln1118_1602_fu_5082541_p1.read().is_01() || !sext_ln1116_93_fu_5076651_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1602_fu_5082541_p1.read()) + sc_bigint<10>(sext_ln1116_93_fu_5076651_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_391_fu_5086981_p2() {
    add_ln703_391_fu_5086981_p2 = (!sext_ln203_82_fu_5022950_p1.read().is_01() || !sext_ln203_83_fu_5022982_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_82_fu_5022950_p1.read()) + sc_bigint<11>(sext_ln203_83_fu_5022982_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3920_fu_5110601_p2() {
    add_ln703_3920_fu_5110601_p2 = (!sext_ln703_2196_fu_5110597_p1.read().is_01() || !sext_ln1116_101_fu_5082545_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2196_fu_5110597_p1.read()) + sc_bigint<12>(sext_ln1116_101_fu_5082545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3921_fu_5121130_p2() {
    add_ln703_3921_fu_5121130_p2 = (!sext_ln703_2197_fu_5121127_p1.read().is_01() || !add_ln703_3918_fu_5121121_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2197_fu_5121127_p1.read()) + sc_biguint<14>(add_ln703_3918_fu_5121121_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3922_fu_5121136_p2() {
    add_ln703_3922_fu_5121136_p2 = (!add_ln703_3921_fu_5121130_p2.read().is_01() || !sext_ln1118_908_fu_5113576_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3921_fu_5121130_p2.read()) + sc_bigint<14>(sext_ln1118_908_fu_5113576_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3923_fu_5110607_p2() {
    add_ln703_3923_fu_5110607_p2 = (!zext_ln1118_1603_fu_5082643_p1.read().is_01() || !zext_ln1116_179_fu_5080856_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1603_fu_5082643_p1.read()) + sc_biguint<9>(zext_ln1116_179_fu_5080856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3924_fu_5110617_p2() {
    add_ln703_3924_fu_5110617_p2 = (!zext_ln703_550_fu_5110613_p1.read().is_01() || !sext_ln1116_102_fu_5082575_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_550_fu_5110613_p1.read()) + sc_bigint<12>(sext_ln1116_102_fu_5082575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3925_fu_5121149_p2() {
    add_ln703_3925_fu_5121149_p2 = (!sext_ln703_2199_fu_5121146_p1.read().is_01() || !sext_ln703_2198_fu_5121142_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2199_fu_5121146_p1.read()) + sc_bigint<15>(sext_ln703_2198_fu_5121142_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3926_fu_5110623_p2() {
    add_ln703_3926_fu_5110623_p2 = (!sext_ln1118_910_fu_5082605_p1.read().is_01() || !sext_ln1118_912_fu_5082635_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_910_fu_5082605_p1.read()) + sc_bigint<11>(sext_ln1118_912_fu_5082635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3927_fu_5110633_p2() {
    add_ln703_3927_fu_5110633_p2 = (!sext_ln1118_915_fu_5082693_p1.read().is_01() || !sext_ln708_237_fu_5082639_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_915_fu_5082693_p1.read()) + sc_bigint<10>(sext_ln708_237_fu_5082639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3928_fu_5110643_p2() {
    add_ln703_3928_fu_5110643_p2 = (!sext_ln703_2201_fu_5110639_p1.read().is_01() || !sext_ln1118_913_fu_5082663_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2201_fu_5110639_p1.read()) + sc_bigint<11>(sext_ln1118_913_fu_5082663_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3929_fu_5110653_p2() {
    add_ln703_3929_fu_5110653_p2 = (!sext_ln703_2202_fu_5110649_p1.read().is_01() || !sext_ln703_2200_fu_5110629_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2202_fu_5110649_p1.read()) + sc_bigint<12>(sext_ln703_2200_fu_5110629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_392_fu_5113735_p2() {
    add_ln703_392_fu_5113735_p2 = (!sext_ln703_148_fu_5113732_p1.read().is_01() || !sext_ln703_147_fu_5113728_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_148_fu_5113732_p1.read()) + sc_bigint<15>(sext_ln703_147_fu_5113728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3930_fu_5121158_p2() {
    add_ln703_3930_fu_5121158_p2 = (!sext_ln703_2203_fu_5121155_p1.read().is_01() || !add_ln703_3925_fu_5121149_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2203_fu_5121155_p1.read()) + sc_biguint<15>(add_ln703_3925_fu_5121149_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3931_fu_5121164_p2() {
    add_ln703_3931_fu_5121164_p2 = (!sext_ln703_1925_fu_5119986_p1.read().is_01() || !add_ln703_3930_fu_5121158_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1925_fu_5119986_p1.read()) + sc_biguint<15>(add_ln703_3930_fu_5121158_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3932_fu_5110659_p2() {
    add_ln703_3932_fu_5110659_p2 = (!sext_ln203_707_fu_5082737_p1.read().is_01() || !sext_ln203_709_fu_5082771_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_707_fu_5082737_p1.read()) + sc_bigint<12>(sext_ln203_709_fu_5082771_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3933_fu_5110669_p2() {
    add_ln703_3933_fu_5110669_p2 = (!sext_ln203_628_fu_5073785_p1.read().is_01() || !sext_ln203_695_fu_5081102_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_628_fu_5073785_p1.read()) + sc_bigint<12>(sext_ln203_695_fu_5081102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3934_fu_5110679_p2() {
    add_ln703_3934_fu_5110679_p2 = (!sext_ln703_2206_fu_5110675_p1.read().is_01() || !sext_ln703_2205_fu_5110665_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2206_fu_5110675_p1.read()) + sc_bigint<13>(sext_ln703_2205_fu_5110665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3935_fu_5121177_p2() {
    add_ln703_3935_fu_5121177_p2 = (!sext_ln703_2207_fu_5121174_p1.read().is_01() || !sext_ln703_2204_fu_5121170_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2207_fu_5121174_p1.read()) + sc_bigint<16>(sext_ln703_2204_fu_5121170_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3936_fu_5110685_p2() {
    add_ln703_3936_fu_5110685_p2 = (!zext_ln203_444_fu_5082717_p1.read().is_01() || !sext_ln203_708_fu_5082757_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_444_fu_5082717_p1.read()) + sc_bigint<12>(sext_ln203_708_fu_5082757_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3937_fu_5110695_p2() {
    add_ln703_3937_fu_5110695_p2 = (!sext_ln703_2208_fu_5110691_p1.read().is_01() || !sext_ln203_710_fu_5082775_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2208_fu_5110691_p1.read()) + sc_bigint<13>(sext_ln203_710_fu_5082775_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3938_fu_5110701_p2() {
    add_ln703_3938_fu_5110701_p2 = (!sext_ln203_711_fu_5082809_p1.read().is_01() || !sext_ln1118_760_fu_5072021_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_711_fu_5082809_p1.read()) + sc_bigint<11>(sext_ln1118_760_fu_5072021_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3939_fu_5110711_p2() {
    add_ln703_3939_fu_5110711_p2 = (!sext_ln203_690_fu_5081014_p1.read().is_01() || !zext_ln203_445_fu_5082789_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_690_fu_5081014_p1.read()) + sc_biguint<10>(zext_ln203_445_fu_5082789_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_393_fu_5086987_p2() {
    add_ln703_393_fu_5086987_p2 = (!sext_ln203_84_fu_5023014_p1.read().is_01() || !sext_ln203_87_fu_5023084_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_84_fu_5023014_p1.read()) + sc_bigint<11>(sext_ln203_87_fu_5023084_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3940_fu_5110721_p2() {
    add_ln703_3940_fu_5110721_p2 = (!sext_ln703_2210_fu_5110717_p1.read().is_01() || !sext_ln703_2209_fu_5110707_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2210_fu_5110717_p1.read()) + sc_bigint<12>(sext_ln703_2209_fu_5110707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3941_fu_5110731_p2() {
    add_ln703_3941_fu_5110731_p2 = (!sext_ln703_2211_fu_5110727_p1.read().is_01() || !add_ln703_3937_fu_5110695_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2211_fu_5110727_p1.read()) + sc_biguint<13>(add_ln703_3937_fu_5110695_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3943_fu_5110737_p2() {
    add_ln703_3943_fu_5110737_p2 = (!zext_ln1118_1604_fu_5082827_p1.read().is_01() || !sext_ln708_238_fu_5082813_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1604_fu_5082827_p1.read()) + sc_bigint<9>(sext_ln708_238_fu_5082813_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3944_fu_5110747_p2() {
    add_ln703_3944_fu_5110747_p2 = (!sext_ln703_2213_fu_5110743_p1.read().is_01() || !ap_const_lv11_420.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2213_fu_5110743_p1.read()) + sc_bigint<11>(ap_const_lv11_420));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3945_fu_5110757_p2() {
    add_ln703_3945_fu_5110757_p2 = (!sext_ln703_2214_fu_5110753_p1.read().is_01() || !sext_ln1118_918_fu_5082881_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2214_fu_5110753_p1.read()) + sc_bigint<12>(sext_ln1118_918_fu_5082881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3946_fu_5110767_p2() {
    add_ln703_3946_fu_5110767_p2 = (!zext_ln1118_1605_fu_5082851_p1.read().is_01() || !sext_ln1118_916_fu_5082831_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1605_fu_5082851_p1.read()) + sc_bigint<10>(sext_ln1118_916_fu_5082831_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3947_fu_5110777_p2() {
    add_ln703_3947_fu_5110777_p2 = (!sext_ln703_2216_fu_5110773_p1.read().is_01() || !sext_ln703_2215_fu_5110763_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2216_fu_5110773_p1.read()) + sc_bigint<13>(sext_ln703_2215_fu_5110763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3948_fu_5110783_p2() {
    add_ln703_3948_fu_5110783_p2 = (!zext_ln708_910_fu_5082161_p1.read().is_01() || !zext_ln708_792_fu_5075498_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_910_fu_5082161_p1.read()) + sc_biguint<11>(zext_ln708_792_fu_5075498_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3949_fu_5110793_p2() {
    add_ln703_3949_fu_5110793_p2 = (!zext_ln703_551_fu_5110789_p1.read().is_01() || !add_ln703_3947_fu_5110777_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_551_fu_5110789_p1.read()) + sc_biguint<13>(add_ln703_3947_fu_5110777_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_394_fu_5086997_p2() {
    add_ln703_394_fu_5086997_p2 = (!zext_ln203_6_fu_5023028_p1.read().is_01() || !sext_ln203_86_fu_5023052_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_6_fu_5023028_p1.read()) + sc_bigint<9>(sext_ln203_86_fu_5023052_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3950_fu_5110799_p2() {
    add_ln703_3950_fu_5110799_p2 = (!sext_ln708_211_fu_5076565_p1.read().is_01() || !sext_ln203_712_fu_5082901_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_211_fu_5076565_p1.read()) + sc_bigint<11>(sext_ln203_712_fu_5082901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3951_fu_5110809_p2() {
    add_ln703_3951_fu_5110809_p2 = (!sext_ln1116_93_fu_5076651_p1.read().is_01() || !sext_ln708_239_fu_5082921_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_93_fu_5076651_p1.read()) + sc_bigint<10>(sext_ln708_239_fu_5082921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3952_fu_5110819_p2() {
    add_ln703_3952_fu_5110819_p2 = (!sext_ln703_2218_fu_5110815_p1.read().is_01() || !sext_ln703_2217_fu_5110805_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2218_fu_5110815_p1.read()) + sc_bigint<12>(sext_ln703_2217_fu_5110805_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3953_fu_5110829_p2() {
    add_ln703_3953_fu_5110829_p2 = (!sext_ln703_2219_fu_5110825_p1.read().is_01() || !add_ln703_3949_fu_5110793_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2219_fu_5110825_p1.read()) + sc_biguint<13>(add_ln703_3949_fu_5110793_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3954_fu_5110835_p2() {
    add_ln703_3954_fu_5110835_p2 = (!sext_ln708_240_fu_5082949_p1.read().is_01() || !sext_ln1118_853_fu_5079000_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_240_fu_5082949_p1.read()) + sc_bigint<12>(sext_ln1118_853_fu_5079000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3955_fu_5121198_p2() {
    add_ln703_3955_fu_5121198_p2 = (!sext_ln703_2221_fu_5121195_p1.read().is_01() || !sext_ln703_2220_fu_5121192_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2221_fu_5121195_p1.read()) + sc_bigint<14>(sext_ln703_2220_fu_5121192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3956_fu_5110841_p2() {
    add_ln703_3956_fu_5110841_p2 = (!sext_ln1118_920_fu_5083031_p1.read().is_01() || !sext_ln708_241_fu_5083081_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_920_fu_5083031_p1.read()) + sc_bigint<12>(sext_ln708_241_fu_5083081_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3957_fu_5110851_p2() {
    add_ln703_3957_fu_5110851_p2 = (!zext_ln708_919_fu_5082973_p1.read().is_01() || !zext_ln708_920_fu_5082997_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_919_fu_5082973_p1.read()) + sc_biguint<11>(zext_ln708_920_fu_5082997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3958_fu_5110861_p2() {
    add_ln703_3958_fu_5110861_p2 = (!zext_ln703_552_fu_5110857_p1.read().is_01() || !sext_ln703_2223_fu_5110847_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_552_fu_5110857_p1.read()) + sc_bigint<13>(sext_ln703_2223_fu_5110847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3959_fu_5121211_p2() {
    add_ln703_3959_fu_5121211_p2 = (!sext_ln703_2224_fu_5121208_p1.read().is_01() || !sext_ln703_2222_fu_5121204_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2224_fu_5121208_p1.read()) + sc_bigint<15>(sext_ln703_2222_fu_5121204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_395_fu_5087007_p2() {
    add_ln703_395_fu_5087007_p2 = (!sext_ln703_150_fu_5087003_p1.read().is_01() || !sext_ln203_88_fu_5023140_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_150_fu_5087003_p1.read()) + sc_bigint<11>(sext_ln203_88_fu_5023140_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3960_fu_5110867_p2() {
    add_ln703_3960_fu_5110867_p2 = (!zext_ln1118_1608_fu_5083017_p1.read().is_01() || !zext_ln1118_1609_fu_5083035_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1608_fu_5083017_p1.read()) + sc_biguint<10>(zext_ln1118_1609_fu_5083035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3961_fu_5110877_p2() {
    add_ln703_3961_fu_5110877_p2 = (!zext_ln703_553_fu_5110873_p1.read().is_01() || !zext_ln708_830_fu_5077961_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_553_fu_5110873_p1.read()) + sc_biguint<11>(zext_ln708_830_fu_5077961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3962_fu_5110887_p2() {
    add_ln703_3962_fu_5110887_p2 = (!zext_ln1118_1610_fu_5083049_p1.read().is_01() || !trunc_ln1118_15_fu_5083107_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1610_fu_5083049_p1.read()) + sc_biguint<10>(trunc_ln1118_15_fu_5083107_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3963_fu_5110897_p2() {
    add_ln703_3963_fu_5110897_p2 = (!zext_ln708_824_fu_5077413_p1.read().is_01() || !sext_ln1118_919_fu_5082925_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_824_fu_5077413_p1.read()) + sc_bigint<9>(sext_ln1118_919_fu_5082925_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3964_fu_5110907_p2() {
    add_ln703_3964_fu_5110907_p2 = (!sext_ln703_2225_fu_5110903_p1.read().is_01() || !zext_ln703_555_fu_5110893_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2225_fu_5110903_p1.read()) + sc_biguint<12>(zext_ln703_555_fu_5110893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3965_fu_5110917_p2() {
    add_ln703_3965_fu_5110917_p2 = (!sext_ln703_2226_fu_5110913_p1.read().is_01() || !zext_ln703_554_fu_5110883_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2226_fu_5110913_p1.read()) + sc_biguint<13>(zext_ln703_554_fu_5110883_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3966_fu_5121220_p2() {
    add_ln703_3966_fu_5121220_p2 = (!sext_ln703_2227_fu_5121217_p1.read().is_01() || !add_ln703_3959_fu_5121211_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2227_fu_5121217_p1.read()) + sc_biguint<15>(add_ln703_3959_fu_5121211_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3967_fu_5121226_p2() {
    add_ln703_3967_fu_5121226_p2 = (!add_ln703_3966_fu_5121220_p2.read().is_01() || !zext_ln203_446_fu_5113579_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3966_fu_5121220_p2.read()) + sc_biguint<15>(zext_ln203_446_fu_5113579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3968_fu_5110923_p2() {
    add_ln703_3968_fu_5110923_p2 = (!zext_ln708_924_fu_5083157_p1.read().is_01() || !zext_ln708_884_fu_5080563_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_924_fu_5083157_p1.read()) + sc_biguint<11>(zext_ln708_884_fu_5080563_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3969_fu_5121235_p2() {
    add_ln703_3969_fu_5121235_p2 = (!zext_ln703_556_fu_5121232_p1.read().is_01() || !add_ln703_3967_fu_5121226_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_556_fu_5121232_p1.read()) + sc_biguint<15>(add_ln703_3967_fu_5121226_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_396_fu_5087017_p2() {
    add_ln703_396_fu_5087017_p2 = (!sext_ln703_151_fu_5087013_p1.read().is_01() || !sext_ln703_149_fu_5086993_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_151_fu_5087013_p1.read()) + sc_bigint<12>(sext_ln703_149_fu_5086993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3970_fu_5110929_p2() {
    add_ln703_3970_fu_5110929_p2 = (!zext_ln203_447_fu_5083181_p1.read().is_01() || !sext_ln203_714_fu_5083177_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_447_fu_5083181_p1.read()) + sc_bigint<12>(sext_ln203_714_fu_5083177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3971_fu_5110935_p2() {
    add_ln703_3971_fu_5110935_p2 = (!zext_ln203_381_fu_5072237_p1.read().is_01() || !sext_ln203_660_fu_5077087_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_381_fu_5072237_p1.read()) + sc_bigint<9>(sext_ln203_660_fu_5077087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3972_fu_5110945_p2() {
    add_ln703_3972_fu_5110945_p2 = (!sext_ln703_2228_fu_5110941_p1.read().is_01() || !sext_ln203_713_fu_5083117_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2228_fu_5110941_p1.read()) + sc_bigint<10>(sext_ln203_713_fu_5083117_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3973_fu_5110955_p2() {
    add_ln703_3973_fu_5110955_p2 = (!sext_ln703_2229_fu_5110951_p1.read().is_01() || !add_ln703_3970_fu_5110929_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2229_fu_5110951_p1.read()) + sc_biguint<12>(add_ln703_3970_fu_5110929_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3975_fu_5110969_p2() {
    add_ln703_3975_fu_5110969_p2 = (!sext_ln1118_832_fu_5077333_p1.read().is_01() || !sext_ln1118_853_fu_5079000_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_832_fu_5077333_p1.read()) + sc_bigint<12>(sext_ln1118_853_fu_5079000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3976_fu_5110979_p2() {
    add_ln703_3976_fu_5110979_p2 = (!sext_ln703_2232_fu_5110975_p1.read().is_01() || !or_ln703_24_fu_5110961_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2232_fu_5110975_p1.read()) + sc_biguint<16>(or_ln703_24_fu_5110961_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3977_fu_5110985_p2() {
    add_ln703_3977_fu_5110985_p2 = (!sext_ln203_722_fu_5083427_p1.read().is_01() || !sext_ln203_723_fu_5083491_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_722_fu_5083427_p1.read()) + sc_bigint<12>(sext_ln203_723_fu_5083491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3978_fu_5110995_p2() {
    add_ln703_3978_fu_5110995_p2 = (!sext_ln203_647_fu_5076336_p1.read().is_01() || !zext_ln203_449_fu_5083227_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_647_fu_5076336_p1.read()) + sc_biguint<12>(zext_ln203_449_fu_5083227_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3979_fu_5111005_p2() {
    add_ln703_3979_fu_5111005_p2 = (!sext_ln703_2234_fu_5111001_p1.read().is_01() || !sext_ln703_2233_fu_5110991_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2234_fu_5111001_p1.read()) + sc_bigint<13>(sext_ln703_2233_fu_5110991_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3980_fu_5111015_p2() {
    add_ln703_3980_fu_5111015_p2 = (!sext_ln703_2235_fu_5111011_p1.read().is_01() || !add_ln703_3976_fu_5110979_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2235_fu_5111011_p1.read()) + sc_biguint<16>(add_ln703_3976_fu_5110979_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3981_fu_5111021_p2() {
    add_ln703_3981_fu_5111021_p2 = (!zext_ln708_899_fu_5081609_p1.read().is_01() || !zext_ln708_926_fu_5083285_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_899_fu_5081609_p1.read()) + sc_biguint<11>(zext_ln708_926_fu_5083285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3982_fu_5111027_p2() {
    add_ln703_3982_fu_5111027_p2 = (!zext_ln203_451_fu_5083289_p1.read().is_01() || !trunc_ln203_70_fu_5083383_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_451_fu_5083289_p1.read()) + sc_biguint<10>(trunc_ln203_70_fu_5083383_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3983_fu_5111037_p2() {
    add_ln703_3983_fu_5111037_p2 = (!zext_ln703_557_fu_5111033_p1.read().is_01() || !add_ln703_3981_fu_5111021_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_557_fu_5111033_p1.read()) + sc_biguint<11>(add_ln703_3981_fu_5111021_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3984_fu_5111047_p2() {
    add_ln703_3984_fu_5111047_p2 = (!zext_ln203_452_fu_5083447_p1.read().is_01() || !zext_ln203_453_fu_5083467_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_452_fu_5083447_p1.read()) + sc_biguint<10>(zext_ln203_453_fu_5083467_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3985_fu_5111057_p2() {
    add_ln703_3985_fu_5111057_p2 = (!zext_ln203_454_fu_5083511_p1.read().is_01() || !zext_ln203_455_fu_5083535_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_454_fu_5083511_p1.read()) + sc_biguint<10>(zext_ln203_455_fu_5083535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3986_fu_5111067_p2() {
    add_ln703_3986_fu_5111067_p2 = (!zext_ln703_560_fu_5111063_p1.read().is_01() || !zext_ln703_559_fu_5111053_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_560_fu_5111063_p1.read()) + sc_biguint<11>(zext_ln703_559_fu_5111053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3987_fu_5111077_p2() {
    add_ln703_3987_fu_5111077_p2 = (!zext_ln703_561_fu_5111073_p1.read().is_01() || !zext_ln703_558_fu_5111043_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_561_fu_5111073_p1.read()) + sc_biguint<12>(zext_ln703_558_fu_5111043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3988_fu_5121257_p2() {
    add_ln703_3988_fu_5121257_p2 = (!zext_ln703_562_fu_5121254_p1.read().is_01() || !add_ln703_3980_reg_5126932.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_562_fu_5121254_p1.read()) + sc_biguint<16>(add_ln703_3980_reg_5126932.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3989_fu_5111083_p2() {
    add_ln703_3989_fu_5111083_p2 = (!zext_ln203_457_fu_5083583_p1.read().is_01() || !zext_ln203_459_fu_5083617_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_457_fu_5083583_p1.read()) + sc_biguint<10>(zext_ln203_459_fu_5083617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_398_fu_5087023_p2() {
    add_ln703_398_fu_5087023_p2 = (!zext_ln203_8_fu_5023152_p1.read().is_01() || !ap_const_lv10_100.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_8_fu_5023152_p1.read()) + sc_biguint<10>(ap_const_lv10_100));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3990_fu_5111093_p2() {
    add_ln703_3990_fu_5111093_p2 = (!zext_ln203_460_fu_5083653_p1.read().is_01() || !sext_ln203_715_fu_5083251_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_460_fu_5083653_p1.read()) + sc_bigint<12>(sext_ln203_715_fu_5083251_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3991_fu_5111099_p2() {
    add_ln703_3991_fu_5111099_p2 = (!add_ln703_3990_fu_5111093_p2.read().is_01() || !zext_ln703_563_fu_5111089_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3990_fu_5111093_p2.read()) + sc_biguint<12>(zext_ln703_563_fu_5111089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3992_fu_5111109_p2() {
    add_ln703_3992_fu_5111109_p2 = (!sext_ln1118_829_fu_5077221_p1.read().is_01() || !sext_ln203_716_fu_5083303_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_829_fu_5077221_p1.read()) + sc_bigint<11>(sext_ln203_716_fu_5083303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3993_fu_5111119_p2() {
    add_ln703_3993_fu_5111119_p2 = (!sext_ln203_717_fu_5083323_p1.read().is_01() || !sext_ln1118_791_fu_5074220_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_717_fu_5083323_p1.read()) + sc_bigint<11>(sext_ln1118_791_fu_5074220_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3994_fu_5111129_p2() {
    add_ln703_3994_fu_5111129_p2 = (!sext_ln703_2238_fu_5111125_p1.read().is_01() || !sext_ln703_2237_fu_5111115_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2238_fu_5111125_p1.read()) + sc_bigint<12>(sext_ln703_2237_fu_5111115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3995_fu_5111139_p2() {
    add_ln703_3995_fu_5111139_p2 = (!sext_ln703_2239_fu_5111135_p1.read().is_01() || !sext_ln703_2236_fu_5111105_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2239_fu_5111135_p1.read()) + sc_bigint<13>(sext_ln703_2236_fu_5111105_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3996_fu_5111145_p2() {
    add_ln703_3996_fu_5111145_p2 = (!sext_ln203_720_fu_5083403_p1.read().is_01() || !zext_ln203_456_fu_5083559_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_720_fu_5083403_p1.read()) + sc_biguint<11>(zext_ln203_456_fu_5083559_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3997_fu_5111151_p2() {
    add_ln703_3997_fu_5111151_p2 = (!sext_ln203_721_fu_5083423_p1.read().is_01() || !zext_ln203_448_fu_5083195_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_721_fu_5083423_p1.read()) + sc_biguint<10>(zext_ln203_448_fu_5083195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3998_fu_5111161_p2() {
    add_ln703_3998_fu_5111161_p2 = (!sext_ln703_2241_fu_5111157_p1.read().is_01() || !add_ln703_3996_fu_5111145_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2241_fu_5111157_p1.read()) + sc_biguint<11>(add_ln703_3996_fu_5111145_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3999_fu_5111171_p2() {
    add_ln703_3999_fu_5111171_p2 = (!sext_ln203_718_fu_5083337_p1.read().is_01() || !zext_ln203_450_fu_5083265_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_718_fu_5083337_p1.read()) + sc_biguint<9>(zext_ln203_450_fu_5083265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_399_fu_5087029_p2() {
    add_ln703_399_fu_5087029_p2 = (!zext_ln708_31_fu_5023220_p1.read().is_01() || !add_ln703_398_fu_5087023_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_31_fu_5023220_p1.read()) + sc_biguint<10>(add_ln703_398_fu_5087023_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4000_fu_5111181_p2() {
    add_ln703_4000_fu_5111181_p2 = (!zext_ln203_458_fu_5083597_p1.read().is_01() || !sext_ln203_719_fu_5083357_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_458_fu_5083597_p1.read()) + sc_bigint<9>(sext_ln203_719_fu_5083357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4001_fu_5111191_p2() {
    add_ln703_4001_fu_5111191_p2 = (!sext_ln703_2244_fu_5111187_p1.read().is_01() || !sext_ln703_2243_fu_5111177_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2244_fu_5111187_p1.read()) + sc_bigint<10>(sext_ln703_2243_fu_5111177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4002_fu_5111201_p2() {
    add_ln703_4002_fu_5111201_p2 = (!sext_ln703_2245_fu_5111197_p1.read().is_01() || !sext_ln703_2242_fu_5111167_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2245_fu_5111197_p1.read()) + sc_bigint<12>(sext_ln703_2242_fu_5111167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4003_fu_5121268_p2() {
    add_ln703_4003_fu_5121268_p2 = (!sext_ln703_2246_fu_5121265_p1.read().is_01() || !sext_ln703_2240_fu_5121262_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2246_fu_5121265_p1.read()) + sc_bigint<14>(sext_ln703_2240_fu_5121262_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4005_fu_5111207_p2() {
    add_ln703_4005_fu_5111207_p2 = (!sext_ln1118_921_fu_5083667_p1.read().is_01() || !ap_const_lv11_7E0.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_921_fu_5083667_p1.read()) + sc_bigint<11>(ap_const_lv11_7E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4006_fu_5111217_p2() {
    add_ln703_4006_fu_5111217_p2 = (!sext_ln703_2248_fu_5111213_p1.read().is_01() || !sext_ln1118_922_fu_5083707_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2248_fu_5111213_p1.read()) + sc_bigint<12>(sext_ln1118_922_fu_5083707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4007_fu_5111227_p2() {
    add_ln703_4007_fu_5111227_p2 = (!zext_ln1118_1614_fu_5083727_p1.read().is_01() || !sext_ln1118_882_fu_5081175_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1614_fu_5083727_p1.read()) + sc_bigint<10>(sext_ln1118_882_fu_5081175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4008_fu_5111237_p2() {
    add_ln703_4008_fu_5111237_p2 = (!sext_ln703_2250_fu_5111233_p1.read().is_01() || !zext_ln708_934_fu_5083687_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2250_fu_5111233_p1.read()) + sc_biguint<11>(zext_ln708_934_fu_5083687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4009_fu_5111247_p2() {
    add_ln703_4009_fu_5111247_p2 = (!sext_ln703_2251_fu_5111243_p1.read().is_01() || !sext_ln703_2249_fu_5111223_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2251_fu_5111243_p1.read()) + sc_bigint<13>(sext_ln703_2249_fu_5111223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_400_fu_5087039_p2() {
    add_ln703_400_fu_5087039_p2 = (!zext_ln708_32_fu_5023234_p1.read().is_01() || !sext_ln708_5_fu_5023184_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_32_fu_5023234_p1.read()) + sc_bigint<8>(sext_ln708_5_fu_5023184_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4010_fu_5111253_p2() {
    add_ln703_4010_fu_5111253_p2 = (!add_ln703_4009_fu_5111247_p2.read().is_01() || !sext_ln708_242_fu_5083747_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_4009_fu_5111247_p2.read()) + sc_bigint<13>(sext_ln708_242_fu_5083747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4011_fu_5111259_p2() {
    add_ln703_4011_fu_5111259_p2 = (!sext_ln1116_101_fu_5082545_p1.read().is_01() || !zext_ln1118_1615_fu_5083779_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_101_fu_5082545_p1.read()) + sc_biguint<12>(zext_ln1118_1615_fu_5083779_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4012_fu_5111269_p2() {
    add_ln703_4012_fu_5111269_p2 = (!sext_ln703_2253_fu_5111265_p1.read().is_01() || !sext_ln1118_923_fu_5083783_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2253_fu_5111265_p1.read()) + sc_bigint<13>(sext_ln1118_923_fu_5083783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4013_fu_5121290_p2() {
    add_ln703_4013_fu_5121290_p2 = (!sext_ln703_2254_fu_5121287_p1.read().is_01() || !sext_ln703_2252_fu_5121284_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2254_fu_5121287_p1.read()) + sc_bigint<14>(sext_ln703_2252_fu_5121284_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4014_fu_5121296_p2() {
    add_ln703_4014_fu_5121296_p2 = (!add_ln703_4013_fu_5121290_p2.read().is_01() || !sext_ln708_203_fu_5113510_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4013_fu_5121290_p2.read()) + sc_bigint<14>(sext_ln708_203_fu_5113510_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4015_fu_5111275_p2() {
    add_ln703_4015_fu_5111275_p2 = (!sext_ln1118_924_fu_5083797_p1.read().is_01() || !sext_ln1118_925_fu_5083811_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_924_fu_5083797_p1.read()) + sc_bigint<11>(sext_ln1118_925_fu_5083811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4016_fu_5111285_p2() {
    add_ln703_4016_fu_5111285_p2 = (!sext_ln703_2256_fu_5111281_p1.read().is_01() || !zext_ln1118_1617_fu_5083849_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2256_fu_5111281_p1.read()) + sc_biguint<12>(zext_ln1118_1617_fu_5083849_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4017_fu_5121309_p2() {
    add_ln703_4017_fu_5121309_p2 = (!sext_ln703_2257_fu_5121306_p1.read().is_01() || !sext_ln703_2255_fu_5121302_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2257_fu_5121306_p1.read()) + sc_bigint<15>(sext_ln703_2255_fu_5121302_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4018_fu_5111291_p2() {
    add_ln703_4018_fu_5111291_p2 = (!sext_ln203_718_fu_5083337_p1.read().is_01() || !sext_ln708_243_fu_5083829_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_718_fu_5083337_p1.read()) + sc_bigint<9>(sext_ln708_243_fu_5083829_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4019_fu_5111301_p2() {
    add_ln703_4019_fu_5111301_p2 = (!sext_ln703_2258_fu_5111297_p1.read().is_01() || !sext_ln1118_903_fu_5081891_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2258_fu_5111297_p1.read()) + sc_bigint<10>(sext_ln1118_903_fu_5081891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_401_fu_5087049_p2() {
    add_ln703_401_fu_5087049_p2 = (!sext_ln703_154_fu_5087045_p1.read().is_01() || !zext_ln703_3_fu_5087035_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_154_fu_5087045_p1.read()) + sc_biguint<11>(zext_ln703_3_fu_5087035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4020_fu_5111311_p2() {
    add_ln703_4020_fu_5111311_p2 = (!zext_ln1118_1292_fu_5071031_p1.read().is_01() || !sext_ln203_724_fu_5083853_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1292_fu_5071031_p1.read()) + sc_bigint<10>(sext_ln203_724_fu_5083853_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4021_fu_5111317_p2() {
    add_ln703_4021_fu_5111317_p2 = (!add_ln703_4020_fu_5111311_p2.read().is_01() || !zext_ln1118_1616_fu_5083825_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_4020_fu_5111311_p2.read()) + sc_biguint<10>(zext_ln1118_1616_fu_5083825_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4022_fu_5111327_p2() {
    add_ln703_4022_fu_5111327_p2 = (!sext_ln703_2260_fu_5111323_p1.read().is_01() || !sext_ln703_2259_fu_5111307_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2260_fu_5111323_p1.read()) + sc_bigint<11>(sext_ln703_2259_fu_5111307_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4023_fu_5121318_p2() {
    add_ln703_4023_fu_5121318_p2 = (!sext_ln703_2261_fu_5121315_p1.read().is_01() || !add_ln703_4017_fu_5121309_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2261_fu_5121315_p1.read()) + sc_biguint<15>(add_ln703_4017_fu_5121309_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4024_fu_5111333_p2() {
    add_ln703_4024_fu_5111333_p2 = (!sext_ln203_725_fu_5083867_p1.read().is_01() || !sext_ln203_727_fu_5083891_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_725_fu_5083867_p1.read()) + sc_bigint<12>(sext_ln203_727_fu_5083891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4025_fu_5121327_p2() {
    add_ln703_4025_fu_5121327_p2 = (!sext_ln703_2262_fu_5121324_p1.read().is_01() || !add_ln703_4023_fu_5121318_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2262_fu_5121324_p1.read()) + sc_biguint<15>(add_ln703_4023_fu_5121318_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4026_fu_5111339_p2() {
    add_ln703_4026_fu_5111339_p2 = (!sext_ln203_682_fu_5080109_p1.read().is_01() || !sext_ln203_726_fu_5083871_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_682_fu_5080109_p1.read()) + sc_bigint<12>(sext_ln203_726_fu_5083871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4027_fu_5111349_p2() {
    add_ln703_4027_fu_5111349_p2 = (!sext_ln703_2263_fu_5111345_p1.read().is_01() || !sext_ln203_729_fu_5083923_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2263_fu_5111345_p1.read()) + sc_bigint<13>(sext_ln203_729_fu_5083923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4028_fu_5121336_p2() {
    add_ln703_4028_fu_5121336_p2 = (!sext_ln703_2264_fu_5121333_p1.read().is_01() || !add_ln703_4025_fu_5121327_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2264_fu_5121333_p1.read()) + sc_biguint<15>(add_ln703_4025_fu_5121327_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4029_fu_5111355_p2() {
    add_ln703_4029_fu_5111355_p2 = (!sext_ln203_648_fu_5076360_p1.read().is_01() || !sext_ln203_731_fu_5083941_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_648_fu_5076360_p1.read()) + sc_bigint<10>(sext_ln203_731_fu_5083941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_402_fu_5087055_p2() {
    add_ln703_402_fu_5087055_p2 = (!add_ln703_401_fu_5087049_p2.read().is_01() || !zext_ln708_34_fu_5023266_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_401_fu_5087049_p2.read()) + sc_biguint<11>(zext_ln708_34_fu_5023266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4030_fu_5111365_p2() {
    add_ln703_4030_fu_5111365_p2 = (!sext_ln703_2265_fu_5111361_p1.read().is_01() || !sext_ln203_728_fu_5083909_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2265_fu_5111361_p1.read()) + sc_bigint<11>(sext_ln203_728_fu_5083909_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4031_fu_5111375_p2() {
    add_ln703_4031_fu_5111375_p2 = (!zext_ln708_936_fu_5083905_p1.read().is_01() || !zext_ln708_883_fu_5080533_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_936_fu_5083905_p1.read()) + sc_biguint<8>(zext_ln708_883_fu_5080533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4032_fu_5111385_p2() {
    add_ln703_4032_fu_5111385_p2 = (!zext_ln1118_1317_fu_5071427_p1.read().is_01() || !sext_ln203_730_fu_5083927_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1317_fu_5071427_p1.read()) + sc_bigint<10>(sext_ln203_730_fu_5083927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4033_fu_5111391_p2() {
    add_ln703_4033_fu_5111391_p2 = (!add_ln703_4032_fu_5111385_p2.read().is_01() || !zext_ln703_564_fu_5111381_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_4032_fu_5111385_p2.read()) + sc_biguint<10>(zext_ln703_564_fu_5111381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4034_fu_5111401_p2() {
    add_ln703_4034_fu_5111401_p2 = (!sext_ln703_2267_fu_5111397_p1.read().is_01() || !sext_ln703_2266_fu_5111371_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2267_fu_5111397_p1.read()) + sc_bigint<12>(sext_ln703_2266_fu_5111371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4036_fu_5111415_p2() {
    add_ln703_4036_fu_5111415_p2 = (!sext_ln1118_907_fu_5082537_p1.read().is_01() || !sext_ln1118_838_fu_5077783_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_907_fu_5082537_p1.read()) + sc_bigint<12>(sext_ln1118_838_fu_5077783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4037_fu_5111425_p2() {
    add_ln703_4037_fu_5111425_p2 = (!sext_ln703_2270_fu_5111421_p1.read().is_01() || !or_ln703_25_fu_5111407_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2270_fu_5111421_p1.read()) + sc_biguint<16>(or_ln703_25_fu_5111407_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4038_fu_5111431_p2() {
    add_ln703_4038_fu_5111431_p2 = (!sext_ln1118_864_fu_5079853_p1.read().is_01() || !sext_ln1116_86_fu_5071005_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_864_fu_5079853_p1.read()) + sc_bigint<12>(sext_ln1116_86_fu_5071005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4039_fu_5111441_p2() {
    add_ln703_4039_fu_5111441_p2 = (!sext_ln1118_833_fu_5077449_p1.read().is_01() || !sext_ln203_737_fu_5084195_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_833_fu_5077449_p1.read()) + sc_bigint<12>(sext_ln203_737_fu_5084195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_403_fu_5087065_p2() {
    add_ln703_403_fu_5087065_p2 = (!zext_ln1118_111_fu_5023300_p1.read().is_01() || !sext_ln708_6_fu_5023332_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_111_fu_5023300_p1.read()) + sc_bigint<10>(sext_ln708_6_fu_5023332_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4040_fu_5111451_p2() {
    add_ln703_4040_fu_5111451_p2 = (!sext_ln703_2272_fu_5111447_p1.read().is_01() || !sext_ln703_2271_fu_5111437_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2272_fu_5111447_p1.read()) + sc_bigint<13>(sext_ln703_2271_fu_5111437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4041_fu_5111461_p2() {
    add_ln703_4041_fu_5111461_p2 = (!sext_ln703_2273_fu_5111457_p1.read().is_01() || !add_ln703_4037_fu_5111425_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2273_fu_5111457_p1.read()) + sc_biguint<16>(add_ln703_4037_fu_5111425_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4042_fu_5111467_p2() {
    add_ln703_4042_fu_5111467_p2 = (!sext_ln203_738_fu_5084209_p1.read().is_01() || !sext_ln203_739_fu_5084229_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_738_fu_5084209_p1.read()) + sc_bigint<12>(sext_ln203_739_fu_5084229_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4043_fu_5111477_p2() {
    add_ln703_4043_fu_5111477_p2 = (!zext_ln1118_1511_fu_5078203_p1.read().is_01() || !trunc_ln203_71_fu_5084005_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1511_fu_5078203_p1.read()) + sc_biguint<10>(trunc_ln203_71_fu_5084005_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4044_fu_5111487_p2() {
    add_ln703_4044_fu_5111487_p2 = (!zext_ln703_565_fu_5111483_p1.read().is_01() || !sext_ln703_2274_fu_5111473_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_565_fu_5111483_p1.read()) + sc_bigint<13>(sext_ln703_2274_fu_5111473_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4045_fu_5111493_p2() {
    add_ln703_4045_fu_5111493_p2 = (!zext_ln1118_1552_fu_5079805_p1.read().is_01() || !zext_ln203_461_fu_5084059_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1552_fu_5079805_p1.read()) + sc_biguint<10>(zext_ln203_461_fu_5084059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4046_fu_5111503_p2() {
    add_ln703_4046_fu_5111503_p2 = (!zext_ln203_462_fu_5084087_p1.read().is_01() || !zext_ln203_463_fu_5084091_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_462_fu_5084087_p1.read()) + sc_biguint<10>(zext_ln203_463_fu_5084091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4047_fu_5111513_p2() {
    add_ln703_4047_fu_5111513_p2 = (!zext_ln703_567_fu_5111509_p1.read().is_01() || !zext_ln703_566_fu_5111499_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_567_fu_5111509_p1.read()) + sc_biguint<11>(zext_ln703_566_fu_5111499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4048_fu_5111523_p2() {
    add_ln703_4048_fu_5111523_p2 = (!zext_ln703_568_fu_5111519_p1.read().is_01() || !add_ln703_4044_fu_5111487_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_568_fu_5111519_p1.read()) + sc_biguint<13>(add_ln703_4044_fu_5111487_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4049_fu_5121358_p2() {
    add_ln703_4049_fu_5121358_p2 = (!sext_ln703_2275_fu_5121355_p1.read().is_01() || !add_ln703_4041_reg_5126987.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2275_fu_5121355_p1.read()) + sc_biguint<16>(add_ln703_4041_reg_5126987.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_404_fu_5087075_p2() {
    add_ln703_404_fu_5087075_p2 = (!sext_ln703_155_fu_5087071_p1.read().is_01() || !zext_ln1118_110_fu_5023280_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_155_fu_5087071_p1.read()) + sc_biguint<12>(zext_ln1118_110_fu_5023280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4050_fu_5111529_p2() {
    add_ln703_4050_fu_5111529_p2 = (!zext_ln708_856_fu_5078948_p1.read().is_01() || !zext_ln708_942_fu_5084165_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_856_fu_5078948_p1.read()) + sc_biguint<11>(zext_ln708_942_fu_5084165_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4051_fu_5111539_p2() {
    add_ln703_4051_fu_5111539_p2 = (!trunc_ln203_72_fu_5084175_p4.read().is_01() || !zext_ln1118_1548_fu_5079617_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_72_fu_5084175_p4.read()) + sc_biguint<10>(zext_ln1118_1548_fu_5079617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4052_fu_5111549_p2() {
    add_ln703_4052_fu_5111549_p2 = (!zext_ln703_570_fu_5111545_p1.read().is_01() || !zext_ln703_569_fu_5111535_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_570_fu_5111545_p1.read()) + sc_biguint<12>(zext_ln703_569_fu_5111535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4053_fu_5111555_p2() {
    add_ln703_4053_fu_5111555_p2 = (!zext_ln1118_1520_fu_5078551_p1.read().is_01() || !zext_ln203_466_fu_5084261_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1520_fu_5078551_p1.read()) + sc_biguint<10>(zext_ln203_466_fu_5084261_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4054_fu_5111565_p2() {
    add_ln703_4054_fu_5111565_p2 = (!zext_ln203_467_fu_5084275_p1.read().is_01() || !sext_ln203_732_fu_5083975_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_467_fu_5084275_p1.read()) + sc_bigint<12>(sext_ln203_732_fu_5083975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4055_fu_5111575_p2() {
    add_ln703_4055_fu_5111575_p2 = (!sext_ln703_2276_fu_5111571_p1.read().is_01() || !zext_ln703_572_fu_5111561_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2276_fu_5111571_p1.read()) + sc_biguint<13>(zext_ln703_572_fu_5111561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4056_fu_5121369_p2() {
    add_ln703_4056_fu_5121369_p2 = (!sext_ln703_2277_fu_5121366_p1.read().is_01() || !zext_ln703_571_fu_5121363_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2277_fu_5121366_p1.read()) + sc_biguint<14>(zext_ln703_571_fu_5121363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4057_fu_5111581_p2() {
    add_ln703_4057_fu_5111581_p2 = (!sext_ln203_734_fu_5084035_p1.read().is_01() || !sext_ln203_717_fu_5083323_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_734_fu_5084035_p1.read()) + sc_bigint<11>(sext_ln203_717_fu_5083323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4058_fu_5111591_p2() {
    add_ln703_4058_fu_5111591_p2 = (!sext_ln203_736_fu_5084137_p1.read().is_01() || !zext_ln203_465_fu_5084257_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_736_fu_5084137_p1.read()) + sc_biguint<11>(zext_ln203_465_fu_5084257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4059_fu_5111601_p2() {
    add_ln703_4059_fu_5111601_p2 = (!sext_ln703_2279_fu_5111597_p1.read().is_01() || !sext_ln703_2278_fu_5111587_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2279_fu_5111597_p1.read()) + sc_bigint<12>(sext_ln703_2278_fu_5111587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_405_fu_5087085_p2() {
    add_ln703_405_fu_5087085_p2 = (!sext_ln703_156_fu_5087081_p1.read().is_01() || !zext_ln703_4_fu_5087061_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_156_fu_5087081_p1.read()) + sc_biguint<13>(zext_ln703_4_fu_5087061_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4060_fu_5111611_p2() {
    add_ln703_4060_fu_5111611_p2 = (!sext_ln203_733_fu_5083995_p1.read().is_01() || !sext_ln203_735_fu_5084063_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_733_fu_5083995_p1.read()) + sc_bigint<10>(sext_ln203_735_fu_5084063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4061_fu_5111621_p2() {
    add_ln703_4061_fu_5111621_p2 = (!zext_ln708_940_fu_5084105_p1.read().is_01() || !zext_ln708_941_fu_5084151_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_940_fu_5084105_p1.read()) + sc_biguint<8>(zext_ln708_941_fu_5084151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4062_fu_5111631_p2() {
    add_ln703_4062_fu_5111631_p2 = (!zext_ln703_573_fu_5111627_p1.read().is_01() || !sext_ln703_2281_fu_5111617_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_573_fu_5111627_p1.read()) + sc_bigint<11>(sext_ln703_2281_fu_5111617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4063_fu_5111641_p2() {
    add_ln703_4063_fu_5111641_p2 = (!sext_ln703_2282_fu_5111637_p1.read().is_01() || !sext_ln703_2280_fu_5111607_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2282_fu_5111637_p1.read()) + sc_bigint<13>(sext_ln703_2280_fu_5111607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4064_fu_5121378_p2() {
    add_ln703_4064_fu_5121378_p2 = (!sext_ln703_2283_fu_5121375_p1.read().is_01() || !add_ln703_4056_fu_5121369_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2283_fu_5121375_p1.read()) + sc_biguint<14>(add_ln703_4056_fu_5121369_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4066_fu_5111647_p2() {
    add_ln703_4066_fu_5111647_p2 = (!zext_ln203_468_fu_5084279_p1.read().is_01() || !ap_const_lv9_E0.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_468_fu_5084279_p1.read()) + sc_biguint<9>(ap_const_lv9_E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4067_fu_5111653_p2() {
    add_ln703_4067_fu_5111653_p2 = (!add_ln703_4066_fu_5111647_p2.read().is_01() || !zext_ln1116_167_fu_5076508_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_4066_fu_5111647_p2.read()) + sc_biguint<9>(zext_ln1116_167_fu_5076508_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4068_fu_5111663_p2() {
    add_ln703_4068_fu_5111663_p2 = (!sext_ln203_740_fu_5084303_p1.read().is_01() || !zext_ln203_469_fu_5084307_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_740_fu_5084303_p1.read()) + sc_biguint<12>(zext_ln203_469_fu_5084307_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4069_fu_5111669_p2() {
    add_ln703_4069_fu_5111669_p2 = (!zext_ln703_574_fu_5111659_p1.read().is_01() || !zext_ln708_943_fu_5084321_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_574_fu_5111659_p1.read()) + sc_biguint<10>(zext_ln708_943_fu_5084321_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_406_fu_5087091_p2() {
    add_ln703_406_fu_5087091_p2 = (!add_ln703_405_fu_5087085_p2.read().is_01() || !zext_ln708_36_fu_5023364_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_405_fu_5087085_p2.read()) + sc_biguint<13>(zext_ln708_36_fu_5023364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4070_fu_5111679_p2() {
    add_ln703_4070_fu_5111679_p2 = (!zext_ln703_575_fu_5111675_p1.read().is_01() || !add_ln703_4068_fu_5111663_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_575_fu_5111675_p1.read()) + sc_biguint<12>(add_ln703_4068_fu_5111663_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4071_fu_5111689_p2() {
    add_ln703_4071_fu_5111689_p2 = (!zext_ln708_876_fu_5080263_p1.read().is_01() || !zext_ln1116_173_fu_5078746_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_876_fu_5080263_p1.read()) + sc_biguint<11>(zext_ln1116_173_fu_5078746_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4072_fu_5111699_p2() {
    add_ln703_4072_fu_5111699_p2 = (!zext_ln703_576_fu_5111695_p1.read().is_01() || !sext_ln703_972_fu_5111685_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_576_fu_5111695_p1.read()) + sc_bigint<13>(sext_ln703_972_fu_5111685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4073_fu_5111705_p2() {
    add_ln703_4073_fu_5111705_p2 = (!zext_ln708_944_fu_5084341_p1.read().is_01() || !sext_ln1118_927_fu_5084399_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_944_fu_5084341_p1.read()) + sc_bigint<12>(sext_ln1118_927_fu_5084399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4074_fu_5121400_p2() {
    add_ln703_4074_fu_5121400_p2 = (!sext_ln703_2285_fu_5121397_p1.read().is_01() || !sext_ln703_973_fu_5121394_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2285_fu_5121397_p1.read()) + sc_bigint<14>(sext_ln703_973_fu_5121394_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4075_fu_5111711_p2() {
    add_ln703_4075_fu_5111711_p2 = (!zext_ln708_945_fu_5084385_p1.read().is_01() || !sext_ln1118_924_fu_5083797_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_945_fu_5084385_p1.read()) + sc_bigint<11>(sext_ln1118_924_fu_5083797_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4076_fu_5111721_p2() {
    add_ln703_4076_fu_5111721_p2 = (!sext_ln703_2286_fu_5111717_p1.read().is_01() || !zext_ln1118_1621_fu_5084361_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2286_fu_5111717_p1.read()) + sc_biguint<12>(zext_ln1118_1621_fu_5084361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4077_fu_5121409_p2() {
    add_ln703_4077_fu_5121409_p2 = (!sext_ln703_2287_fu_5121406_p1.read().is_01() || !add_ln703_4074_fu_5121400_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2287_fu_5121406_p1.read()) + sc_biguint<14>(add_ln703_4074_fu_5121400_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4078_fu_5121419_p2() {
    add_ln703_4078_fu_5121419_p2 = (!sext_ln703_974_fu_5121415_p1.read().is_01() || !sext_ln203_741_fu_5113582_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_974_fu_5121415_p1.read()) + sc_bigint<15>(sext_ln203_741_fu_5113582_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4079_fu_5111727_p2() {
    add_ln703_4079_fu_5111727_p2 = (!zext_ln708_946_fu_5084441_p1.read().is_01() || !zext_ln708_769_fu_5072789_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_946_fu_5084441_p1.read()) + sc_biguint<11>(zext_ln708_769_fu_5072789_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_407_fu_5087101_p2() {
    add_ln703_407_fu_5087101_p2 = (!zext_ln708_38_fu_5023424_p1.read().is_01() || !sext_ln708_7_fu_5023456_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_38_fu_5023424_p1.read()) + sc_bigint<11>(sext_ln708_7_fu_5023456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4080_fu_5111737_p2() {
    add_ln703_4080_fu_5111737_p2 = (!zext_ln703_577_fu_5111733_p1.read().is_01() || !sext_ln1118_929_fu_5084459_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_577_fu_5111733_p1.read()) + sc_bigint<13>(sext_ln1118_929_fu_5084459_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4081_fu_5121428_p2() {
    add_ln703_4081_fu_5121428_p2 = (!sext_ln703_2288_fu_5121425_p1.read().is_01() || !add_ln703_4078_fu_5121419_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2288_fu_5121425_p1.read()) + sc_biguint<15>(add_ln703_4078_fu_5121419_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4082_fu_5111743_p2() {
    add_ln703_4082_fu_5111743_p2 = (!zext_ln708_947_fu_5084493_p1.read().is_01() || !zext_ln708_948_fu_5084513_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_947_fu_5084493_p1.read()) + sc_biguint<11>(zext_ln708_948_fu_5084513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4083_fu_5111753_p2() {
    add_ln703_4083_fu_5111753_p2 = (!zext_ln703_578_fu_5111749_p1.read().is_01() || !zext_ln1118_1624_fu_5084473_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_578_fu_5111749_p1.read()) + sc_biguint<12>(zext_ln1118_1624_fu_5084473_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4084_fu_5111763_p2() {
    add_ln703_4084_fu_5111763_p2 = (!sext_ln1118_928_fu_5084445_p1.read().is_01() || !sext_ln1118_930_fu_5084527_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_928_fu_5084445_p1.read()) + sc_bigint<10>(sext_ln1118_930_fu_5084527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4085_fu_5111773_p2() {
    add_ln703_4085_fu_5111773_p2 = (!sext_ln703_2289_fu_5111769_p1.read().is_01() || !sext_ln708_198_fu_5072915_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2289_fu_5111769_p1.read()) + sc_bigint<11>(sext_ln708_198_fu_5072915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4086_fu_5111783_p2() {
    add_ln703_4086_fu_5111783_p2 = (!sext_ln703_2290_fu_5111779_p1.read().is_01() || !zext_ln703_579_fu_5111759_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2290_fu_5111779_p1.read()) + sc_biguint<13>(zext_ln703_579_fu_5111759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4087_fu_5121437_p2() {
    add_ln703_4087_fu_5121437_p2 = (!sext_ln703_2291_fu_5121434_p1.read().is_01() || !add_ln703_4081_fu_5121428_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2291_fu_5121434_p1.read()) + sc_biguint<15>(add_ln703_4081_fu_5121428_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4088_fu_5121443_p2() {
    add_ln703_4088_fu_5121443_p2 = (!add_ln703_4087_fu_5121437_p2.read().is_01() || !sext_ln203_692_fu_5113570_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4087_fu_5121437_p2.read()) + sc_bigint<15>(sext_ln203_692_fu_5113570_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4089_fu_5111789_p2() {
    add_ln703_4089_fu_5111789_p2 = (!zext_ln708_949_fu_5084565_p1.read().is_01() || !zext_ln708_950_fu_5084629_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_949_fu_5084565_p1.read()) + sc_biguint<11>(zext_ln708_950_fu_5084629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_408_fu_5087111_p2() {
    add_ln703_408_fu_5087111_p2 = (!sext_ln703_158_fu_5087107_p1.read().is_01() || !zext_ln1118_113_fu_5023396_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_158_fu_5087107_p1.read()) + sc_biguint<12>(zext_ln1118_113_fu_5023396_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4090_fu_5111799_p2() {
    add_ln703_4090_fu_5111799_p2 = (!zext_ln703_580_fu_5111795_p1.read().is_01() || !sext_ln203_743_fu_5084551_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_580_fu_5111795_p1.read()) + sc_bigint<13>(sext_ln203_743_fu_5084551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4091_fu_5121456_p2() {
    add_ln703_4091_fu_5121456_p2 = (!sext_ln703_2293_fu_5121453_p1.read().is_01() || !sext_ln703_2292_fu_5121449_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2293_fu_5121453_p1.read()) + sc_bigint<16>(sext_ln703_2292_fu_5121449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4092_fu_5111805_p2() {
    add_ln703_4092_fu_5111805_p2 = (!sext_ln203_635_fu_5074585_p1.read().is_01() || !sext_ln203_745_fu_5084609_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_635_fu_5074585_p1.read()) + sc_bigint<11>(sext_ln203_745_fu_5084609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4093_fu_5111815_p2() {
    add_ln703_4093_fu_5111815_p2 = (!zext_ln203_381_fu_5072237_p1.read().is_01() || !sext_ln203_742_fu_5084547_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_381_fu_5072237_p1.read()) + sc_bigint<9>(sext_ln203_742_fu_5084547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4094_fu_5111825_p2() {
    add_ln703_4094_fu_5111825_p2 = (!sext_ln703_2295_fu_5111821_p1.read().is_01() || !sext_ln203_744_fu_5084585_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2295_fu_5111821_p1.read()) + sc_bigint<10>(sext_ln203_744_fu_5084585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4095_fu_5111835_p2() {
    add_ln703_4095_fu_5111835_p2 = (!sext_ln703_2296_fu_5111831_p1.read().is_01() || !sext_ln703_2294_fu_5111811_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2296_fu_5111831_p1.read()) + sc_bigint<12>(sext_ln703_2294_fu_5111811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4097_fu_5111849_p2() {
    add_ln703_4097_fu_5111849_p2 = (!sext_ln203_747_fu_5084777_p1.read().is_01() || !sext_ln1118_853_fu_5079000_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_747_fu_5084777_p1.read()) + sc_bigint<12>(sext_ln1118_853_fu_5079000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4098_fu_5111859_p2() {
    add_ln703_4098_fu_5111859_p2 = (!sext_ln703_2298_fu_5111855_p1.read().is_01() || !or_ln703_26_fu_5111841_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2298_fu_5111855_p1.read()) + sc_biguint<16>(or_ln703_26_fu_5111841_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4099_fu_5111865_p2() {
    add_ln703_4099_fu_5111865_p2 = (!sext_ln203_750_fu_5084875_p1.read().is_01() || !zext_ln203_471_fu_5084673_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_750_fu_5084875_p1.read()) + sc_biguint<12>(zext_ln203_471_fu_5084673_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_409_fu_5087121_p2() {
    add_ln703_409_fu_5087121_p2 = (!sext_ln703_159_fu_5087117_p1.read().is_01() || !sext_ln703_157_fu_5087097_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_159_fu_5087117_p1.read()) + sc_bigint<14>(sext_ln703_157_fu_5087097_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4100_fu_5111875_p2() {
    add_ln703_4100_fu_5111875_p2 = (!zext_ln708_890_fu_5081227_p1.read().is_01() || !zext_ln203_473_fu_5084711_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_890_fu_5081227_p1.read()) + sc_biguint<9>(zext_ln203_473_fu_5084711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4101_fu_5111885_p2() {
    add_ln703_4101_fu_5111885_p2 = (!zext_ln703_581_fu_5111881_p1.read().is_01() || !sext_ln703_2299_fu_5111871_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_581_fu_5111881_p1.read()) + sc_bigint<13>(sext_ln703_2299_fu_5111871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4102_fu_5111895_p2() {
    add_ln703_4102_fu_5111895_p2 = (!sext_ln703_2300_fu_5111891_p1.read().is_01() || !add_ln703_4098_fu_5111859_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2300_fu_5111891_p1.read()) + sc_biguint<16>(add_ln703_4098_fu_5111859_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4103_fu_5111901_p2() {
    add_ln703_4103_fu_5111901_p2 = (!zext_ln203_474_fu_5084735_p1.read().is_01() || !zext_ln203_475_fu_5084763_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_474_fu_5084735_p1.read()) + sc_biguint<10>(zext_ln203_475_fu_5084763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4104_fu_5111911_p2() {
    add_ln703_4104_fu_5111911_p2 = (!zext_ln203_476_fu_5084805_p1.read().is_01() || !trunc_ln203_73_fu_5084815_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_476_fu_5084805_p1.read()) + sc_biguint<10>(trunc_ln203_73_fu_5084815_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4105_fu_5111921_p2() {
    add_ln703_4105_fu_5111921_p2 = (!zext_ln703_583_fu_5111917_p1.read().is_01() || !zext_ln703_582_fu_5111907_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_583_fu_5111917_p1.read()) + sc_biguint<11>(zext_ln703_582_fu_5111907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4106_fu_5111931_p2() {
    add_ln703_4106_fu_5111931_p2 = (!trunc_ln203_74_fu_5084831_p4.read().is_01() || !zext_ln1118_1403_fu_5074318_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_74_fu_5084831_p4.read()) + sc_biguint<10>(zext_ln1118_1403_fu_5074318_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4107_fu_5111941_p2() {
    add_ln703_4107_fu_5111941_p2 = (!trunc_ln203_75_fu_5084879_p4.read().is_01() || !zext_ln203_477_fu_5084909_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_75_fu_5084879_p4.read()) + sc_biguint<9>(zext_ln203_477_fu_5084909_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4108_fu_5111951_p2() {
    add_ln703_4108_fu_5111951_p2 = (!zext_ln703_586_fu_5111947_p1.read().is_01() || !zext_ln703_585_fu_5111937_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_586_fu_5111947_p1.read()) + sc_biguint<11>(zext_ln703_585_fu_5111937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4109_fu_5111961_p2() {
    add_ln703_4109_fu_5111961_p2 = (!zext_ln703_587_fu_5111957_p1.read().is_01() || !zext_ln703_584_fu_5111927_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_587_fu_5111957_p1.read()) + sc_biguint<12>(zext_ln703_584_fu_5111927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_410_fu_5087127_p2() {
    add_ln703_410_fu_5087127_p2 = (!zext_ln203_9_fu_5023496_p1.read().is_01() || !sext_ln1118_140_fu_5023628_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_9_fu_5023496_p1.read()) + sc_bigint<12>(sext_ln1118_140_fu_5023628_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4110_fu_5121474_p2() {
    add_ln703_4110_fu_5121474_p2 = (!zext_ln703_588_fu_5121471_p1.read().is_01() || !add_ln703_4102_reg_5127047.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_588_fu_5121471_p1.read()) + sc_biguint<16>(add_ln703_4102_reg_5127047.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4111_fu_5111967_p2() {
    add_ln703_4111_fu_5111967_p2 = (!zext_ln708_954_fu_5084929_p1.read().is_01() || !zext_ln708_955_fu_5084957_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_954_fu_5084929_p1.read()) + sc_biguint<11>(zext_ln708_955_fu_5084957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4112_fu_5111977_p2() {
    add_ln703_4112_fu_5111977_p2 = (!zext_ln203_479_fu_5084977_p1.read().is_01() || !zext_ln203_480_fu_5085021_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_479_fu_5084977_p1.read()) + sc_biguint<10>(zext_ln203_480_fu_5085021_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4113_fu_5111987_p2() {
    add_ln703_4113_fu_5111987_p2 = (!zext_ln703_590_fu_5111983_p1.read().is_01() || !zext_ln703_589_fu_5111973_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_590_fu_5111983_p1.read()) + sc_biguint<12>(zext_ln703_589_fu_5111973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4114_fu_5111993_p2() {
    add_ln703_4114_fu_5111993_p2 = (!zext_ln708_956_fu_5085035_p1.read().is_01() || !zext_ln708_757_fu_5072307_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_956_fu_5085035_p1.read()) + sc_biguint<11>(zext_ln708_757_fu_5072307_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4115_fu_5112003_p2() {
    add_ln703_4115_fu_5112003_p2 = (!zext_ln203_388_fu_5073161_p1.read().is_01() || !sext_ln203_746_fu_5084739_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_388_fu_5073161_p1.read()) + sc_bigint<12>(sext_ln203_746_fu_5084739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4116_fu_5112013_p2() {
    add_ln703_4116_fu_5112013_p2 = (!sext_ln703_2301_fu_5112009_p1.read().is_01() || !zext_ln703_592_fu_5111999_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2301_fu_5112009_p1.read()) + sc_biguint<13>(zext_ln703_592_fu_5111999_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4117_fu_5121485_p2() {
    add_ln703_4117_fu_5121485_p2 = (!sext_ln703_2302_fu_5121482_p1.read().is_01() || !zext_ln703_591_fu_5121479_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2302_fu_5121482_p1.read()) + sc_biguint<14>(zext_ln703_591_fu_5121479_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4118_fu_5112019_p2() {
    add_ln703_4118_fu_5112019_p2 = (!sext_ln203_748_fu_5084791_p1.read().is_01() || !sext_ln203_749_fu_5084861_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_748_fu_5084791_p1.read()) + sc_bigint<11>(sext_ln203_749_fu_5084861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4119_fu_5112029_p2() {
    add_ln703_4119_fu_5112029_p2 = (!sext_ln203_752_fu_5084997_p1.read().is_01() || !zext_ln1118_1507_fu_5077973_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_752_fu_5084997_p1.read()) + sc_biguint<11>(zext_ln1118_1507_fu_5077973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_411_fu_5087137_p2() {
    add_ln703_411_fu_5087137_p2 = (!sext_ln703_160_fu_5087133_p1.read().is_01() || !add_ln703_409_fu_5087121_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_160_fu_5087133_p1.read()) + sc_biguint<14>(add_ln703_409_fu_5087121_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4120_fu_5112039_p2() {
    add_ln703_4120_fu_5112039_p2 = (!sext_ln703_2304_fu_5112035_p1.read().is_01() || !sext_ln703_2303_fu_5112025_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2304_fu_5112035_p1.read()) + sc_bigint<12>(sext_ln703_2303_fu_5112025_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4121_fu_5112049_p2() {
    add_ln703_4121_fu_5112049_p2 = (!sext_ln203_751_fu_5084937_p1.read().is_01() || !zext_ln203_470_fu_5084659_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_751_fu_5084937_p1.read()) + sc_biguint<9>(zext_ln203_470_fu_5084659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4122_fu_5112059_p2() {
    add_ln703_4122_fu_5112059_p2 = (!zext_ln203_472_fu_5084687_p1.read().is_01() || !sext_ln1118_883_fu_5081179_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_472_fu_5084687_p1.read()) + sc_bigint<9>(sext_ln1118_883_fu_5081179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4123_fu_5112069_p2() {
    add_ln703_4123_fu_5112069_p2 = (!sext_ln703_2307_fu_5112065_p1.read().is_01() || !sext_ln703_2306_fu_5112055_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2307_fu_5112065_p1.read()) + sc_bigint<10>(sext_ln703_2306_fu_5112055_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4124_fu_5112079_p2() {
    add_ln703_4124_fu_5112079_p2 = (!sext_ln703_2308_fu_5112075_p1.read().is_01() || !sext_ln703_2305_fu_5112045_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2308_fu_5112075_p1.read()) + sc_bigint<13>(sext_ln703_2305_fu_5112045_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4125_fu_5121494_p2() {
    add_ln703_4125_fu_5121494_p2 = (!sext_ln703_2309_fu_5121491_p1.read().is_01() || !add_ln703_4117_fu_5121485_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2309_fu_5121491_p1.read()) + sc_biguint<14>(add_ln703_4117_fu_5121485_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4127_fu_5112085_p2() {
    add_ln703_4127_fu_5112085_p2 = (!zext_ln203_481_fu_5085055_p1.read().is_01() || !ap_const_lv10_260.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_481_fu_5085055_p1.read()) + sc_bigint<10>(ap_const_lv10_260));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4128_fu_5112091_p2() {
    add_ln703_4128_fu_5112091_p2 = (!zext_ln1118_1629_fu_5085059_p1.read().is_01() || !zext_ln1118_1630_fu_5085063_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1629_fu_5085059_p1.read()) + sc_biguint<10>(zext_ln1118_1630_fu_5085063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4129_fu_5112097_p2() {
    add_ln703_4129_fu_5112097_p2 = (!add_ln703_4128_fu_5112091_p2.read().is_01() || !zext_ln1118_1500_fu_5077697_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_4128_fu_5112091_p2.read()) + sc_biguint<10>(zext_ln1118_1500_fu_5077697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_412_fu_5087143_p2() {
    add_ln703_412_fu_5087143_p2 = (!zext_ln1118_117_fu_5023552_p1.read().is_01() || !zext_ln1118_118_fu_5023584_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_117_fu_5023552_p1.read()) + sc_biguint<10>(zext_ln1118_118_fu_5023584_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4130_fu_5112107_p2() {
    add_ln703_4130_fu_5112107_p2 = (!zext_ln708_809_fu_5076533_p1.read().is_01() || !sext_ln708_194_fu_5072393_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_809_fu_5076533_p1.read()) + sc_bigint<8>(sext_ln708_194_fu_5072393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4131_fu_5112117_p2() {
    add_ln703_4131_fu_5112117_p2 = (!sext_ln703_2311_fu_5112113_p1.read().is_01() || !add_ln703_4127_fu_5112085_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2311_fu_5112113_p1.read()) + sc_biguint<10>(add_ln703_4127_fu_5112085_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4132_fu_5112127_p2() {
    add_ln703_4132_fu_5112127_p2 = (!sext_ln703_2312_fu_5112123_p1.read().is_01() || !zext_ln703_593_fu_5112103_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2312_fu_5112123_p1.read()) + sc_biguint<12>(zext_ln703_593_fu_5112103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4133_fu_5112137_p2() {
    add_ln703_4133_fu_5112137_p2 = (!sext_ln1118_931_fu_5085087_p1.read().is_01() || !sext_ln1118_933_fu_5085117_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_931_fu_5085087_p1.read()) + sc_bigint<12>(sext_ln1118_933_fu_5085117_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4134_fu_5112147_p2() {
    add_ln703_4134_fu_5112147_p2 = (!sext_ln703_2313_fu_5112143_p1.read().is_01() || !sext_ln703_977_fu_5112133_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2313_fu_5112143_p1.read()) + sc_bigint<13>(sext_ln703_977_fu_5112133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4135_fu_5112153_p2() {
    add_ln703_4135_fu_5112153_p2 = (!sext_ln708_244_fu_5085121_p1.read().is_01() || !sext_ln1118_832_fu_5077333_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_244_fu_5085121_p1.read()) + sc_bigint<12>(sext_ln1118_832_fu_5077333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4136_fu_5121516_p2() {
    add_ln703_4136_fu_5121516_p2 = (!sext_ln703_2314_fu_5121513_p1.read().is_01() || !sext_ln703_978_fu_5121510_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2314_fu_5121513_p1.read()) + sc_bigint<14>(sext_ln703_978_fu_5121510_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4137_fu_5112159_p2() {
    add_ln703_4137_fu_5112159_p2 = (!zext_ln1118_1632_fu_5085125_p1.read().is_01() || !zext_ln708_957_fu_5085145_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1632_fu_5085125_p1.read()) + sc_biguint<10>(zext_ln708_957_fu_5085145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4138_fu_5112169_p2() {
    add_ln703_4138_fu_5112169_p2 = (!zext_ln708_866_fu_5079469_p1.read().is_01() || !zext_ln1118_1472_fu_5076655_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_866_fu_5079469_p1.read()) + sc_biguint<10>(zext_ln1118_1472_fu_5076655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4139_fu_5112179_p2() {
    add_ln703_4139_fu_5112179_p2 = (!zext_ln703_595_fu_5112175_p1.read().is_01() || !zext_ln703_594_fu_5112165_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_595_fu_5112175_p1.read()) + sc_biguint<11>(zext_ln703_594_fu_5112165_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_413_fu_5087153_p2() {
    add_ln703_413_fu_5087153_p2 = (!zext_ln703_5_fu_5087149_p1.read().is_01() || !sext_ln1118_144_fu_5023772_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_5_fu_5087149_p1.read()) + sc_bigint<12>(sext_ln1118_144_fu_5023772_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4140_fu_5121525_p2() {
    add_ln703_4140_fu_5121525_p2 = (!zext_ln703_596_fu_5121522_p1.read().is_01() || !add_ln703_4136_fu_5121516_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_596_fu_5121522_p1.read()) + sc_biguint<14>(add_ln703_4136_fu_5121516_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4141_fu_5112185_p2() {
    add_ln703_4141_fu_5112185_p2 = (!sext_ln203_753_fu_5085203_p1.read().is_01() || !sext_ln1118_853_fu_5079000_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_753_fu_5085203_p1.read()) + sc_bigint<12>(sext_ln1118_853_fu_5079000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4142_fu_5121534_p2() {
    add_ln703_4142_fu_5121534_p2 = (!sext_ln703_2315_fu_5121531_p1.read().is_01() || !add_ln703_4140_fu_5121525_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2315_fu_5121531_p1.read()) + sc_biguint<14>(add_ln703_4140_fu_5121525_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4143_fu_5112191_p2() {
    add_ln703_4143_fu_5112191_p2 = (!sext_ln1118_937_fu_5085223_p1.read().is_01() || !zext_ln1118_1481_fu_5076916_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_937_fu_5085223_p1.read()) + sc_biguint<12>(zext_ln1118_1481_fu_5076916_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4144_fu_5112201_p2() {
    add_ln703_4144_fu_5112201_p2 = (!sext_ln703_2317_fu_5112197_p1.read().is_01() || !sext_ln1118_867_fu_5079947_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2317_fu_5112197_p1.read()) + sc_bigint<13>(sext_ln1118_867_fu_5079947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4145_fu_5121547_p2() {
    add_ln703_4145_fu_5121547_p2 = (!sext_ln703_2318_fu_5121544_p1.read().is_01() || !sext_ln703_2316_fu_5121540_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2318_fu_5121544_p1.read()) + sc_bigint<15>(sext_ln703_2316_fu_5121540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4146_fu_5112207_p2() {
    add_ln703_4146_fu_5112207_p2 = (!trunc_ln203_76_fu_5085227_p4.read().is_01() || !zext_ln1118_1548_fu_5079617_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_76_fu_5085227_p4.read()) + sc_biguint<10>(zext_ln1118_1548_fu_5079617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4147_fu_5112217_p2() {
    add_ln703_4147_fu_5112217_p2 = (!zext_ln703_597_fu_5112213_p1.read().is_01() || !zext_ln708_799_fu_5075742_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_597_fu_5112213_p1.read()) + sc_biguint<11>(zext_ln708_799_fu_5075742_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4148_fu_5112227_p2() {
    add_ln703_4148_fu_5112227_p2 = (!sext_ln1118_826_fu_5076859_p1.read().is_01() || !sext_ln1118_934_fu_5085165_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_826_fu_5076859_p1.read()) + sc_bigint<11>(sext_ln1118_934_fu_5085165_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4149_fu_5112237_p2() {
    add_ln703_4149_fu_5112237_p2 = (!sext_ln703_2319_fu_5112233_p1.read().is_01() || !sext_ln1118_936_fu_5085189_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2319_fu_5112233_p1.read()) + sc_bigint<12>(sext_ln1118_936_fu_5085189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_414_fu_5113760_p2() {
    add_ln703_414_fu_5113760_p2 = (!sext_ln703_162_fu_5113757_p1.read().is_01() || !sext_ln703_161_fu_5113754_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_162_fu_5113757_p1.read()) + sc_bigint<15>(sext_ln703_161_fu_5113754_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4150_fu_5112247_p2() {
    add_ln703_4150_fu_5112247_p2 = (!sext_ln703_2320_fu_5112243_p1.read().is_01() || !zext_ln703_598_fu_5112223_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2320_fu_5112243_p1.read()) + sc_biguint<13>(zext_ln703_598_fu_5112223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4151_fu_5121556_p2() {
    add_ln703_4151_fu_5121556_p2 = (!sext_ln703_2321_fu_5121553_p1.read().is_01() || !add_ln703_4145_fu_5121547_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2321_fu_5121553_p1.read()) + sc_biguint<15>(add_ln703_4145_fu_5121547_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4152_fu_5121562_p2() {
    add_ln703_4152_fu_5121562_p2 = (!add_ln703_4151_fu_5121556_p2.read().is_01() || !sext_ln203_756_fu_5113585_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4151_fu_5121556_p2.read()) + sc_bigint<15>(sext_ln203_756_fu_5113585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4153_fu_5112253_p2() {
    add_ln703_4153_fu_5112253_p2 = (!sext_ln203_757_fu_5085319_p1.read().is_01() || !zext_ln203_482_fu_5085241_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_757_fu_5085319_p1.read()) + sc_biguint<12>(zext_ln203_482_fu_5085241_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4154_fu_5121571_p2() {
    add_ln703_4154_fu_5121571_p2 = (!sext_ln703_2322_fu_5121568_p1.read().is_01() || !add_ln703_4152_fu_5121562_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2322_fu_5121568_p1.read()) + sc_biguint<15>(add_ln703_4152_fu_5121562_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4155_fu_5112259_p2() {
    add_ln703_4155_fu_5112259_p2 = (!sext_ln203_754_fu_5085237_p1.read().is_01() || !zext_ln203_465_fu_5084257_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_754_fu_5085237_p1.read()) + sc_biguint<11>(zext_ln203_465_fu_5084257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4156_fu_5112265_p2() {
    add_ln703_4156_fu_5112265_p2 = (!sext_ln203_664_fu_5077575_p1.read().is_01() || !zext_ln203_483_fu_5085255_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_664_fu_5077575_p1.read()) + sc_biguint<9>(zext_ln203_483_fu_5085255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4157_fu_5112275_p2() {
    add_ln703_4157_fu_5112275_p2 = (!sext_ln703_2323_fu_5112271_p1.read().is_01() || !add_ln703_4155_fu_5112259_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2323_fu_5112271_p1.read()) + sc_biguint<11>(add_ln703_4155_fu_5112259_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4159_fu_5112281_p2() {
    add_ln703_4159_fu_5112281_p2 = (!trunc_ln1116_3_fu_5085369_p4.read().is_01() || !zext_ln1118_1634_fu_5085359_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1116_3_fu_5085369_p4.read()) + sc_biguint<9>(zext_ln1118_1634_fu_5085359_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_415_fu_5087159_p2() {
    add_ln703_415_fu_5087159_p2 = (!sext_ln708_8_fu_5023532_p1.read().is_01() || !sext_ln1118_142_fu_5023670_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_8_fu_5023532_p1.read()) + sc_bigint<11>(sext_ln1118_142_fu_5023670_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4160_fu_5112291_p2() {
    add_ln703_4160_fu_5112291_p2 = (!sext_ln1116_103_fu_5085339_p1.read().is_01() || !ap_const_lv10_160.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_103_fu_5085339_p1.read()) + sc_biguint<10>(ap_const_lv10_160));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4161_fu_5112297_p2() {
    add_ln703_4161_fu_5112297_p2 = (!add_ln703_4160_fu_5112291_p2.read().is_01() || !zext_ln703_599_fu_5112287_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_4160_fu_5112291_p2.read()) + sc_biguint<10>(zext_ln703_599_fu_5112287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4162_fu_5112307_p2() {
    add_ln703_4162_fu_5112307_p2 = (!sext_ln203_689_fu_5080635_p1.read().is_01() || !sext_ln1118_922_fu_5083707_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_689_fu_5080635_p1.read()) + sc_bigint<12>(sext_ln1118_922_fu_5083707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4163_fu_5112317_p2() {
    add_ln703_4163_fu_5112317_p2 = (!sext_ln703_2326_fu_5112313_p1.read().is_01() || !zext_ln703_600_fu_5112303_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2326_fu_5112313_p1.read()) + sc_biguint<13>(zext_ln703_600_fu_5112303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4164_fu_5112323_p2() {
    add_ln703_4164_fu_5112323_p2 = (!add_ln703_4163_fu_5112317_p2.read().is_01() || !sext_ln708_233_fu_5081265_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_4163_fu_5112317_p2.read()) + sc_bigint<13>(sext_ln708_233_fu_5081265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4165_fu_5112333_p2() {
    add_ln703_4165_fu_5112333_p2 = (!sext_ln1116_104_fu_5085399_p1.read().is_01() || !sext_ln1116_105_fu_5085419_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_104_fu_5085399_p1.read()) + sc_bigint<11>(sext_ln1116_105_fu_5085419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4166_fu_5112343_p2() {
    add_ln703_4166_fu_5112343_p2 = (!sext_ln703_2328_fu_5112339_p1.read().is_01() || !sext_ln1118_940_fu_5085379_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2328_fu_5112339_p1.read()) + sc_bigint<12>(sext_ln1118_940_fu_5085379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4167_fu_5112353_p2() {
    add_ln703_4167_fu_5112353_p2 = (!sext_ln703_2329_fu_5112349_p1.read().is_01() || !sext_ln703_2327_fu_5112329_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2329_fu_5112349_p1.read()) + sc_bigint<14>(sext_ln703_2327_fu_5112329_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4168_fu_5112359_p2() {
    add_ln703_4168_fu_5112359_p2 = (!add_ln703_4167_fu_5112353_p2.read().is_01() || !sext_ln1118_941_fu_5085439_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4167_fu_5112353_p2.read()) + sc_bigint<14>(sext_ln1118_941_fu_5085439_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4169_fu_5112365_p2() {
    add_ln703_4169_fu_5112365_p2 = (!sext_ln1118_943_fu_5085529_p1.read().is_01() || !zext_ln1118_1635_fu_5085443_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_943_fu_5085529_p1.read()) + sc_biguint<12>(zext_ln1118_1635_fu_5085443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_416_fu_5087169_p2() {
    add_ln703_416_fu_5087169_p2 = (!sext_ln703_163_fu_5087165_p1.read().is_01() || !zext_ln1118_124_fu_5023758_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_163_fu_5087165_p1.read()) + sc_biguint<12>(zext_ln1118_124_fu_5023758_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4170_fu_5112375_p2() {
    add_ln703_4170_fu_5112375_p2 = (!sext_ln703_2331_fu_5112371_p1.read().is_01() || !sext_ln1118_942_fu_5085457_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2331_fu_5112371_p1.read()) + sc_bigint<13>(sext_ln1118_942_fu_5085457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4171_fu_5121596_p2() {
    add_ln703_4171_fu_5121596_p2 = (!sext_ln703_2332_fu_5121593_p1.read().is_01() || !sext_ln703_2330_fu_5121590_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2332_fu_5121593_p1.read()) + sc_bigint<15>(sext_ln703_2330_fu_5121590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4172_fu_5112381_p2() {
    add_ln703_4172_fu_5112381_p2 = (!sext_ln708_245_fu_5085481_p1.read().is_01() || !sext_ln1116_106_fu_5085515_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_245_fu_5085481_p1.read()) + sc_bigint<11>(sext_ln1116_106_fu_5085515_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4173_fu_5112391_p2() {
    add_ln703_4173_fu_5112391_p2 = (!zext_ln1118_1637_fu_5085495_p1.read().is_01() || !sext_ln203_719_fu_5083357_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1637_fu_5085495_p1.read()) + sc_bigint<9>(sext_ln203_719_fu_5083357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4174_fu_5112401_p2() {
    add_ln703_4174_fu_5112401_p2 = (!sext_ln703_2334_fu_5112397_p1.read().is_01() || !sext_ln1118_944_fu_5085549_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2334_fu_5112397_p1.read()) + sc_bigint<11>(sext_ln1118_944_fu_5085549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4175_fu_5112411_p2() {
    add_ln703_4175_fu_5112411_p2 = (!sext_ln703_2335_fu_5112407_p1.read().is_01() || !sext_ln703_2333_fu_5112387_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2335_fu_5112407_p1.read()) + sc_bigint<12>(sext_ln703_2333_fu_5112387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4176_fu_5121605_p2() {
    add_ln703_4176_fu_5121605_p2 = (!sext_ln703_2336_fu_5121602_p1.read().is_01() || !add_ln703_4171_fu_5121596_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2336_fu_5121602_p1.read()) + sc_biguint<15>(add_ln703_4171_fu_5121596_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4177_fu_5112417_p2() {
    add_ln703_4177_fu_5112417_p2 = (!sext_ln203_759_fu_5085611_p1.read().is_01() || !sext_ln203_727_fu_5083891_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_759_fu_5085611_p1.read()) + sc_bigint<12>(sext_ln203_727_fu_5083891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4178_fu_5121614_p2() {
    add_ln703_4178_fu_5121614_p2 = (!sext_ln703_2337_fu_5121611_p1.read().is_01() || !add_ln703_4176_fu_5121605_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2337_fu_5121611_p1.read()) + sc_biguint<15>(add_ln703_4176_fu_5121605_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4179_fu_5121624_p2() {
    add_ln703_4179_fu_5121624_p2 = (!sext_ln203_760_fu_5113588_p1.read().is_01() || !sext_ln203_761_fu_5113591_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_760_fu_5113588_p1.read()) + sc_bigint<12>(sext_ln203_761_fu_5113591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_417_fu_5087179_p2() {
    add_ln703_417_fu_5087179_p2 = (!sext_ln708_9_fu_5023706_p1.read().is_01() || !zext_ln1118_123_fu_5023734_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_9_fu_5023706_p1.read()) + sc_biguint<11>(zext_ln1118_123_fu_5023734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4180_fu_5112423_p2() {
    add_ln703_4180_fu_5112423_p2 = (!sext_ln203_762_fu_5085635_p1.read().is_01() || !sext_ln203_763_fu_5085649_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_762_fu_5085635_p1.read()) + sc_bigint<12>(sext_ln203_763_fu_5085649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4181_fu_5121637_p2() {
    add_ln703_4181_fu_5121637_p2 = (!sext_ln703_2340_fu_5121634_p1.read().is_01() || !sext_ln703_2339_fu_5121630_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2340_fu_5121634_p1.read()) + sc_bigint<13>(sext_ln703_2339_fu_5121630_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4182_fu_5121647_p2() {
    add_ln703_4182_fu_5121647_p2 = (!sext_ln703_2341_fu_5121643_p1.read().is_01() || !sext_ln703_2338_fu_5121620_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2341_fu_5121643_p1.read()) + sc_bigint<16>(sext_ln703_2338_fu_5121620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4183_fu_5112429_p2() {
    add_ln703_4183_fu_5112429_p2 = (!zext_ln708_959_fu_5085587_p1.read().is_01() || !sext_ln203_764_fu_5085673_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_959_fu_5085587_p1.read()) + sc_bigint<11>(sext_ln203_764_fu_5085673_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4184_fu_5112439_p2() {
    add_ln703_4184_fu_5112439_p2 = (!sext_ln703_2342_fu_5112435_p1.read().is_01() || !sext_ln203_766_fu_5085697_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2342_fu_5112435_p1.read()) + sc_bigint<12>(sext_ln203_766_fu_5085697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4185_fu_5112449_p2() {
    add_ln703_4185_fu_5112449_p2 = (!sext_ln203_648_fu_5076360_p1.read().is_01() || !sext_ln203_758_fu_5085563_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_648_fu_5076360_p1.read()) + sc_bigint<10>(sext_ln203_758_fu_5085563_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4186_fu_5112459_p2() {
    add_ln703_4186_fu_5112459_p2 = (!sext_ln203_765_fu_5085677_p1.read().is_01() || !zext_ln203_484_fu_5085591_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_765_fu_5085677_p1.read()) + sc_biguint<9>(zext_ln203_484_fu_5085591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4187_fu_5112469_p2() {
    add_ln703_4187_fu_5112469_p2 = (!sext_ln703_2345_fu_5112465_p1.read().is_01() || !sext_ln703_2344_fu_5112455_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2345_fu_5112465_p1.read()) + sc_bigint<11>(sext_ln703_2344_fu_5112455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4188_fu_5112479_p2() {
    add_ln703_4188_fu_5112479_p2 = (!sext_ln703_2346_fu_5112475_p1.read().is_01() || !sext_ln703_2343_fu_5112445_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2346_fu_5112475_p1.read()) + sc_bigint<13>(sext_ln703_2343_fu_5112445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_418_fu_5087185_p2() {
    add_ln703_418_fu_5087185_p2 = (!sext_ln1118_134_fu_5022844_p1.read().is_01() || !zext_ln1118_115_fu_5023500_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_134_fu_5022844_p1.read()) + sc_biguint<10>(zext_ln1118_115_fu_5023500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4190_fu_5112485_p2() {
    add_ln703_4190_fu_5112485_p2 = (!sext_ln203_767_fu_5085721_p1.read().is_01() || !ap_const_lv12_E0.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_767_fu_5085721_p1.read()) + sc_biguint<12>(ap_const_lv12_E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4191_fu_5112495_p2() {
    add_ln703_4191_fu_5112495_p2 = (!sext_ln703_985_fu_5112491_p1.read().is_01() || !sext_ln203_768_fu_5085745_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_985_fu_5112491_p1.read()) + sc_bigint<13>(sext_ln203_768_fu_5085745_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4192_fu_5112501_p2() {
    add_ln703_4192_fu_5112501_p2 = (!zext_ln708_731_fu_5070351_p1.read().is_01() || !sext_ln1118_945_fu_5085759_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_731_fu_5070351_p1.read()) + sc_bigint<11>(sext_ln1118_945_fu_5085759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4193_fu_5112511_p2() {
    add_ln703_4193_fu_5112511_p2 = (!sext_ln703_2348_fu_5112507_p1.read().is_01() || !add_ln703_4191_fu_5112495_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2348_fu_5112507_p1.read()) + sc_biguint<13>(add_ln703_4191_fu_5112495_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4194_fu_5112517_p2() {
    add_ln703_4194_fu_5112517_p2 = (!add_ln703_4193_fu_5112511_p2.read().is_01() || !sext_ln708_246_fu_5085783_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_4193_fu_5112511_p2.read()) + sc_bigint<13>(sext_ln708_246_fu_5085783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4195_fu_5112527_p2() {
    add_ln703_4195_fu_5112527_p2 = (!zext_ln708_960_fu_5085797_p1.read().is_01() || !zext_ln708_961_fu_5085831_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_960_fu_5085797_p1.read()) + sc_biguint<11>(zext_ln708_961_fu_5085831_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4196_fu_5112537_p2() {
    add_ln703_4196_fu_5112537_p2 = (!zext_ln703_601_fu_5112533_p1.read().is_01() || !sext_ln708_247_fu_5085811_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_601_fu_5112533_p1.read()) + sc_bigint<13>(sext_ln708_247_fu_5085811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4197_fu_5112547_p2() {
    add_ln703_4197_fu_5112547_p2 = (!sext_ln703_2350_fu_5112543_p1.read().is_01() || !sext_ln703_2349_fu_5112523_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2350_fu_5112543_p1.read()) + sc_bigint<14>(sext_ln703_2349_fu_5112523_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4198_fu_5112553_p2() {
    add_ln703_4198_fu_5112553_p2 = (!add_ln703_4197_fu_5112547_p2.read().is_01() || !zext_ln1118_1643_fu_5085845_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4197_fu_5112547_p2.read()) + sc_biguint<14>(zext_ln1118_1643_fu_5085845_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4199_fu_5112559_p2() {
    add_ln703_4199_fu_5112559_p2 = (!zext_ln708_877_fu_5080321_p1.read().is_01() || !zext_ln708_939_fu_5084083_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_877_fu_5080321_p1.read()) + sc_biguint<11>(zext_ln708_939_fu_5084083_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_419_fu_5087195_p2() {
    add_ln703_419_fu_5087195_p2 = (!sext_ln703_165_fu_5087191_p1.read().is_01() || !add_ln703_417_fu_5087179_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_165_fu_5087191_p1.read()) + sc_biguint<11>(add_ln703_417_fu_5087179_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4200_fu_5112569_p2() {
    add_ln703_4200_fu_5112569_p2 = (!zext_ln703_602_fu_5112565_p1.read().is_01() || !sext_ln203_769_fu_5085893_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_602_fu_5112565_p1.read()) + sc_bigint<13>(sext_ln203_769_fu_5085893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4201_fu_5121668_p2() {
    add_ln703_4201_fu_5121668_p2 = (!sext_ln703_2352_fu_5121665_p1.read().is_01() || !sext_ln703_2351_fu_5121662_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2352_fu_5121665_p1.read()) + sc_bigint<15>(sext_ln703_2351_fu_5121662_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4202_fu_5112575_p2() {
    add_ln703_4202_fu_5112575_p2 = (!sext_ln1118_791_fu_5074220_p1.read().is_01() || !sext_ln708_249_fu_5085917_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_791_fu_5074220_p1.read()) + sc_bigint<11>(sext_ln708_249_fu_5085917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4203_fu_5112585_p2() {
    add_ln703_4203_fu_5112585_p2 = (!sext_ln703_2353_fu_5112581_p1.read().is_01() || !zext_ln708_963_fu_5085955_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2353_fu_5112581_p1.read()) + sc_biguint<12>(zext_ln708_963_fu_5085955_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4204_fu_5112595_p2() {
    add_ln703_4204_fu_5112595_p2 = (!zext_ln708_962_fu_5085931_p1.read().is_01() || !sext_ln708_248_fu_5085869_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_962_fu_5085931_p1.read()) + sc_bigint<8>(sext_ln708_248_fu_5085869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4205_fu_5112605_p2() {
    add_ln703_4205_fu_5112605_p2 = (!sext_ln703_2355_fu_5112601_p1.read().is_01() || !sext_ln1118_947_fu_5085951_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2355_fu_5112601_p1.read()) + sc_bigint<11>(sext_ln1118_947_fu_5085951_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4206_fu_5112615_p2() {
    add_ln703_4206_fu_5112615_p2 = (!sext_ln703_2356_fu_5112611_p1.read().is_01() || !sext_ln703_2354_fu_5112591_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2356_fu_5112611_p1.read()) + sc_bigint<13>(sext_ln703_2354_fu_5112591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4207_fu_5121677_p2() {
    add_ln703_4207_fu_5121677_p2 = (!sext_ln703_2357_fu_5121674_p1.read().is_01() || !add_ln703_4201_fu_5121668_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2357_fu_5121674_p1.read()) + sc_biguint<15>(add_ln703_4201_fu_5121668_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4208_fu_5112621_p2() {
    add_ln703_4208_fu_5112621_p2 = (!zext_ln708_964_fu_5085969_p1.read().is_01() || !zext_ln708_895_fu_5081437_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_964_fu_5085969_p1.read()) + sc_biguint<11>(zext_ln708_895_fu_5081437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4209_fu_5121686_p2() {
    add_ln703_4209_fu_5121686_p2 = (!zext_ln703_603_fu_5121683_p1.read().is_01() || !add_ln703_4207_fu_5121677_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_603_fu_5121683_p1.read()) + sc_biguint<15>(add_ln703_4207_fu_5121677_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_420_fu_5087205_p2() {
    add_ln703_420_fu_5087205_p2 = (!sext_ln703_166_fu_5087201_p1.read().is_01() || !sext_ln703_164_fu_5087175_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_166_fu_5087201_p1.read()) + sc_bigint<13>(sext_ln703_164_fu_5087175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4210_fu_5112627_p2() {
    add_ln703_4210_fu_5112627_p2 = (!zext_ln708_800_fu_5075798_p1.read().is_01() || !zext_ln203_486_fu_5086011_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_800_fu_5075798_p1.read()) + sc_biguint<9>(zext_ln203_486_fu_5086011_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4211_fu_5112637_p2() {
    add_ln703_4211_fu_5112637_p2 = (!zext_ln203_487_fu_5086031_p1.read().is_01() || !zext_ln203_488_fu_5086075_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_487_fu_5086031_p1.read()) + sc_biguint<10>(zext_ln203_488_fu_5086075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4212_fu_5112647_p2() {
    add_ln703_4212_fu_5112647_p2 = (!zext_ln703_605_fu_5112643_p1.read().is_01() || !zext_ln703_604_fu_5112633_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_605_fu_5112643_p1.read()) + sc_biguint<11>(zext_ln703_604_fu_5112633_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4213_fu_5121695_p2() {
    add_ln703_4213_fu_5121695_p2 = (!zext_ln703_606_fu_5121692_p1.read().is_01() || !add_ln703_4209_fu_5121686_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_606_fu_5121692_p1.read()) + sc_biguint<15>(add_ln703_4209_fu_5121686_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4214_fu_5112653_p2() {
    add_ln703_4214_fu_5112653_p2 = (!sext_ln203_770_fu_5085989_p1.read().is_01() || !sext_ln203_772_fu_5086055_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_770_fu_5085989_p1.read()) + sc_bigint<11>(sext_ln203_772_fu_5086055_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4215_fu_5112663_p2() {
    add_ln703_4215_fu_5112663_p2 = (!sext_ln703_2359_fu_5112659_p1.read().is_01() || !zext_ln203_489_fu_5086079_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2359_fu_5112659_p1.read()) + sc_biguint<12>(zext_ln203_489_fu_5086079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4216_fu_5112673_p2() {
    add_ln703_4216_fu_5112673_p2 = (!sext_ln203_745_fu_5084609_p1.read().is_01() || !sext_ln203_771_fu_5085993_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_745_fu_5084609_p1.read()) + sc_bigint<11>(sext_ln203_771_fu_5085993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4217_fu_5112683_p2() {
    add_ln703_4217_fu_5112683_p2 = (!sext_ln203_693_fu_5081050_p1.read().is_01() || !zext_ln203_485_fu_5086007_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_693_fu_5081050_p1.read()) + sc_biguint<10>(zext_ln203_485_fu_5086007_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4218_fu_5112693_p2() {
    add_ln703_4218_fu_5112693_p2 = (!sext_ln703_2362_fu_5112689_p1.read().is_01() || !sext_ln703_2361_fu_5112679_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2362_fu_5112689_p1.read()) + sc_bigint<12>(sext_ln703_2361_fu_5112679_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4219_fu_5112703_p2() {
    add_ln703_4219_fu_5112703_p2 = (!sext_ln703_2363_fu_5112699_p1.read().is_01() || !sext_ln703_2360_fu_5112669_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2363_fu_5112699_p1.read()) + sc_bigint<13>(sext_ln703_2360_fu_5112669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_421_fu_5113769_p2() {
    add_ln703_421_fu_5113769_p2 = (!sext_ln703_167_fu_5113766_p1.read().is_01() || !add_ln703_414_fu_5113760_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_167_fu_5113766_p1.read()) + sc_biguint<15>(add_ln703_414_fu_5113760_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4221_fu_5112709_p2() {
    add_ln703_4221_fu_5112709_p2 = (!trunc_ln203_77_fu_5086093_p4.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln203_77_fu_5086093_p4.read()) + sc_bigint<8>(ap_const_lv8_A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4222_fu_5112719_p2() {
    add_ln703_4222_fu_5112719_p2 = (!zext_ln203_490_fu_5086119_p1.read().is_01() || !sext_ln703_989_fu_5112715_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_490_fu_5086119_p1.read()) + sc_bigint<9>(sext_ln703_989_fu_5112715_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4223_fu_5112729_p2() {
    add_ln703_4223_fu_5112729_p2 = (!zext_ln708_934_fu_5083687_p1.read().is_01() || !sext_ln703_990_fu_5112725_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_934_fu_5083687_p1.read()) + sc_bigint<11>(sext_ln703_990_fu_5112725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4224_fu_5112735_p2() {
    add_ln703_4224_fu_5112735_p2 = (!add_ln703_4223_fu_5112729_p2.read().is_01() || !sext_ln1118_948_fu_5086139_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4223_fu_5112729_p2.read()) + sc_bigint<11>(sext_ln1118_948_fu_5086139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4225_fu_5112745_p2() {
    add_ln703_4225_fu_5112745_p2 = (!sext_ln1118_950_fu_5086163_p1.read().is_01() || !sext_ln1118_949_fu_5086159_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_950_fu_5086163_p1.read()) + sc_bigint<12>(sext_ln1118_949_fu_5086159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4226_fu_5112755_p2() {
    add_ln703_4226_fu_5112755_p2 = (!sext_ln703_2365_fu_5112751_p1.read().is_01() || !sext_ln703_992_fu_5112741_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2365_fu_5112751_p1.read()) + sc_bigint<13>(sext_ln703_992_fu_5112741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4227_fu_5112761_p2() {
    add_ln703_4227_fu_5112761_p2 = (!add_ln703_4226_fu_5112755_p2.read().is_01() || !zext_ln1118_1647_fu_5086167_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_4226_fu_5112755_p2.read()) + sc_biguint<13>(zext_ln1118_1647_fu_5086167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4228_fu_5112771_p2() {
    add_ln703_4228_fu_5112771_p2 = (!sext_ln1118_952_fu_5086207_p1.read().is_01() || !sext_ln1118_951_fu_5086187_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_952_fu_5086207_p1.read()) + sc_bigint<11>(sext_ln1118_951_fu_5086187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4229_fu_5112781_p2() {
    add_ln703_4229_fu_5112781_p2 = (!sext_ln703_2367_fu_5112777_p1.read().is_01() || !sext_ln708_244_fu_5085121_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2367_fu_5112777_p1.read()) + sc_bigint<12>(sext_ln708_244_fu_5085121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_422_fu_5113775_p2() {
    add_ln703_422_fu_5113775_p2 = (!add_ln703_421_fu_5113769_p2.read().is_01() || !sext_ln203_89_fu_5113186_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_421_fu_5113769_p2.read()) + sc_bigint<15>(sext_ln203_89_fu_5113186_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4230_fu_5112791_p2() {
    add_ln703_4230_fu_5112791_p2 = (!sext_ln703_2368_fu_5112787_p1.read().is_01() || !sext_ln703_2366_fu_5112767_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2368_fu_5112787_p1.read()) + sc_bigint<14>(sext_ln703_2366_fu_5112767_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4231_fu_5112797_p2() {
    add_ln703_4231_fu_5112797_p2 = (!sext_ln708_251_fu_5086261_p1.read().is_01() || !sext_ln1116_86_fu_5071005_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_251_fu_5086261_p1.read()) + sc_bigint<12>(sext_ln1116_86_fu_5071005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4232_fu_5112807_p2() {
    add_ln703_4232_fu_5112807_p2 = (!sext_ln703_2369_fu_5112803_p1.read().is_01() || !add_ln703_4230_fu_5112791_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2369_fu_5112803_p1.read()) + sc_biguint<14>(add_ln703_4230_fu_5112791_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4233_fu_5112813_p2() {
    add_ln703_4233_fu_5112813_p2 = (!sext_ln203_623_fu_5073643_p1.read().is_01() || !sext_ln708_232_fu_5080946_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_623_fu_5073643_p1.read()) + sc_bigint<12>(sext_ln708_232_fu_5080946_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4234_fu_5112823_p2() {
    add_ln703_4234_fu_5112823_p2 = (!sext_ln703_2371_fu_5112819_p1.read().is_01() || !sext_ln1118_954_fu_5086279_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2371_fu_5112819_p1.read()) + sc_bigint<13>(sext_ln1118_954_fu_5086279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4235_fu_5121720_p2() {
    add_ln703_4235_fu_5121720_p2 = (!sext_ln703_2372_fu_5121717_p1.read().is_01() || !sext_ln703_2370_fu_5121714_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2372_fu_5121717_p1.read()) + sc_bigint<15>(sext_ln703_2370_fu_5121714_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4236_fu_5112829_p2() {
    add_ln703_4236_fu_5112829_p2 = (!zext_ln708_953_fu_5084905_p1.read().is_01() || !sext_ln708_250_fu_5086237_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_953_fu_5084905_p1.read()) + sc_bigint<11>(sext_ln708_250_fu_5086237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4237_fu_5112835_p2() {
    add_ln703_4237_fu_5112835_p2 = (!add_ln703_4236_fu_5112829_p2.read().is_01() || !zext_ln708_855_fu_5078920_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4236_fu_5112829_p2.read()) + sc_biguint<11>(zext_ln708_855_fu_5078920_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4238_fu_5112845_p2() {
    add_ln703_4238_fu_5112845_p2 = (!sext_ln708_193_fu_5071879_p1.read().is_01() || !sext_ln1118_935_fu_5085185_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_193_fu_5071879_p1.read()) + sc_bigint<11>(sext_ln1118_935_fu_5085185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4239_fu_5112855_p2() {
    add_ln703_4239_fu_5112855_p2 = (!zext_ln708_774_fu_5073407_p1.read().is_01() || !zext_ln708_966_fu_5086275_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_774_fu_5073407_p1.read()) + sc_biguint<8>(zext_ln708_966_fu_5086275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_423_fu_5087211_p2() {
    add_ln703_423_fu_5087211_p2 = (!zext_ln203_10_fu_5023838_p1.read().is_01() || !zext_ln203_11_fu_5023882_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_10_fu_5023838_p1.read()) + sc_biguint<10>(zext_ln203_11_fu_5023882_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4240_fu_5112865_p2() {
    add_ln703_4240_fu_5112865_p2 = (!zext_ln703_607_fu_5112861_p1.read().is_01() || !sext_ln703_2374_fu_5112851_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_607_fu_5112861_p1.read()) + sc_bigint<12>(sext_ln703_2374_fu_5112851_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4241_fu_5112871_p2() {
    add_ln703_4241_fu_5112871_p2 = (!add_ln703_4240_fu_5112865_p2.read().is_01() || !sext_ln703_2373_fu_5112841_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_4240_fu_5112865_p2.read()) + sc_bigint<12>(sext_ln703_2373_fu_5112841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4242_fu_5121729_p2() {
    add_ln703_4242_fu_5121729_p2 = (!sext_ln703_2375_fu_5121726_p1.read().is_01() || !add_ln703_4235_fu_5121720_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2375_fu_5121726_p1.read()) + sc_biguint<15>(add_ln703_4235_fu_5121720_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4243_fu_5121735_p2() {
    add_ln703_4243_fu_5121735_p2 = (!add_ln703_4242_fu_5121729_p2.read().is_01() || !zext_ln203_491_fu_5113594_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4242_fu_5121729_p2.read()) + sc_biguint<15>(zext_ln203_491_fu_5113594_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4244_fu_5112877_p2() {
    add_ln703_4244_fu_5112877_p2 = (!sext_ln203_774_fu_5086351_p1.read().is_01() || !sext_ln203_738_fu_5084209_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_774_fu_5086351_p1.read()) + sc_bigint<12>(sext_ln203_738_fu_5084209_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4245_fu_5112887_p2() {
    add_ln703_4245_fu_5112887_p2 = (!sext_ln703_2376_fu_5112883_p1.read().is_01() || !sext_ln203_773_fu_5086337_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2376_fu_5112883_p1.read()) + sc_bigint<13>(sext_ln203_773_fu_5086337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4246_fu_5121744_p2() {
    add_ln703_4246_fu_5121744_p2 = (!sext_ln703_2377_fu_5121741_p1.read().is_01() || !add_ln703_4243_fu_5121735_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2377_fu_5121741_p1.read()) + sc_biguint<15>(add_ln703_4243_fu_5121735_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4247_fu_5112893_p2() {
    add_ln703_4247_fu_5112893_p2 = (!sext_ln203_755_fu_5085289_p1.read().is_01() || !sext_ln203_776_fu_5086379_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_755_fu_5085289_p1.read()) + sc_bigint<12>(sext_ln203_776_fu_5086379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4248_fu_5112903_p2() {
    add_ln703_4248_fu_5112903_p2 = (!sext_ln203_775_fu_5086365_p1.read().is_01() || !zext_ln1118_1312_fu_5071347_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_775_fu_5086365_p1.read()) + sc_biguint<11>(zext_ln1118_1312_fu_5071347_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4249_fu_5112913_p2() {
    add_ln703_4249_fu_5112913_p2 = (!sext_ln703_2380_fu_5112909_p1.read().is_01() || !zext_ln203_492_fu_5086323_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2380_fu_5112909_p1.read()) + sc_biguint<12>(zext_ln203_492_fu_5086323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_424_fu_5113784_p2() {
    add_ln703_424_fu_5113784_p2 = (!zext_ln703_6_fu_5113781_p1.read().is_01() || !add_ln703_422_fu_5113775_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_6_fu_5113781_p1.read()) + sc_biguint<15>(add_ln703_422_fu_5113775_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4250_fu_5112923_p2() {
    add_ln703_4250_fu_5112923_p2 = (!sext_ln703_2381_fu_5112919_p1.read().is_01() || !sext_ln703_2379_fu_5112899_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2381_fu_5112919_p1.read()) + sc_bigint<13>(sext_ln703_2379_fu_5112899_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4252_fu_5112929_p2() {
    add_ln703_4252_fu_5112929_p2 = (!or_ln703_23_fu_5110303_p3.read().is_01() || !mult_4065_V_fu_5086383_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_23_fu_5110303_p3.read()) + sc_biguint<16>(mult_4065_V_fu_5086383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4253_fu_5112935_p2() {
    add_ln703_4253_fu_5112935_p2 = (!sext_ln708_191_fu_5070729_p1.read().is_01() || !sext_ln1116_86_fu_5071005_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_191_fu_5070729_p1.read()) + sc_bigint<12>(sext_ln1116_86_fu_5071005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4254_fu_5112945_p2() {
    add_ln703_4254_fu_5112945_p2 = (!sext_ln703_2383_fu_5112941_p1.read().is_01() || !add_ln703_4252_fu_5112929_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2383_fu_5112941_p1.read()) + sc_biguint<16>(add_ln703_4252_fu_5112929_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4255_fu_5112951_p2() {
    add_ln703_4255_fu_5112951_p2 = (!sext_ln203_780_fu_5086523_p1.read().is_01() || !zext_ln203_493_fu_5086403_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_780_fu_5086523_p1.read()) + sc_biguint<12>(zext_ln203_493_fu_5086403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4256_fu_5112961_p2() {
    add_ln703_4256_fu_5112961_p2 = (!zext_ln708_934_fu_5083687_p1.read().is_01() || !zext_ln708_970_fu_5086423_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_934_fu_5083687_p1.read()) + sc_biguint<11>(zext_ln708_970_fu_5086423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4257_fu_5112971_p2() {
    add_ln703_4257_fu_5112971_p2 = (!zext_ln703_608_fu_5112967_p1.read().is_01() || !sext_ln703_2384_fu_5112957_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_608_fu_5112967_p1.read()) + sc_bigint<13>(sext_ln703_2384_fu_5112957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4258_fu_5112981_p2() {
    add_ln703_4258_fu_5112981_p2 = (!sext_ln703_2385_fu_5112977_p1.read().is_01() || !add_ln703_4254_fu_5112945_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2385_fu_5112977_p1.read()) + sc_biguint<16>(add_ln703_4254_fu_5112945_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4259_fu_5112987_p2() {
    add_ln703_4259_fu_5112987_p2 = (!zext_ln1118_1370_fu_5073293_p1.read().is_01() || !zext_ln203_475_fu_5084763_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1370_fu_5073293_p1.read()) + sc_biguint<10>(zext_ln203_475_fu_5084763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_425_fu_5087217_p2() {
    add_ln703_425_fu_5087217_p2 = (!zext_ln203_12_fu_5023922_p1.read().is_01() || !trunc_ln203_s_fu_5023926_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_12_fu_5023922_p1.read()) + sc_biguint<10>(trunc_ln203_s_fu_5023926_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4260_fu_5112997_p2() {
    add_ln703_4260_fu_5112997_p2 = (!zext_ln203_438_fu_5082253_p1.read().is_01() || !zext_ln203_495_fu_5086465_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_438_fu_5082253_p1.read()) + sc_biguint<10>(zext_ln203_495_fu_5086465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4261_fu_5113007_p2() {
    add_ln703_4261_fu_5113007_p2 = (!zext_ln703_610_fu_5113003_p1.read().is_01() || !zext_ln703_609_fu_5112993_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_610_fu_5113003_p1.read()) + sc_biguint<11>(zext_ln703_609_fu_5112993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4262_fu_5113017_p2() {
    add_ln703_4262_fu_5113017_p2 = (!zext_ln203_496_fu_5086499_p1.read().is_01() || !trunc_ln203_78_fu_5086537_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_496_fu_5086499_p1.read()) + sc_biguint<10>(trunc_ln203_78_fu_5086537_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4263_fu_5113027_p2() {
    add_ln703_4263_fu_5113027_p2 = (!trunc_ln203_79_fu_5086547_p4.read().is_01() || !zext_ln203_478_fu_5084933_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_79_fu_5086547_p4.read()) + sc_biguint<10>(zext_ln203_478_fu_5084933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4264_fu_5113037_p2() {
    add_ln703_4264_fu_5113037_p2 = (!zext_ln703_613_fu_5113033_p1.read().is_01() || !zext_ln703_612_fu_5113023_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_613_fu_5113033_p1.read()) + sc_biguint<11>(zext_ln703_612_fu_5113023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4265_fu_5113047_p2() {
    add_ln703_4265_fu_5113047_p2 = (!zext_ln703_614_fu_5113043_p1.read().is_01() || !zext_ln703_611_fu_5113013_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_614_fu_5113043_p1.read()) + sc_biguint<12>(zext_ln703_611_fu_5113013_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4266_fu_5121766_p2() {
    add_ln703_4266_fu_5121766_p2 = (!zext_ln703_615_fu_5121763_p1.read().is_01() || !add_ln703_4258_reg_5127197.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_615_fu_5121763_p1.read()) + sc_biguint<16>(add_ln703_4258_reg_5127197.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4267_fu_5113053_p2() {
    add_ln703_4267_fu_5113053_p2 = (!zext_ln203_497_fu_5086597_p1.read().is_01() || !zext_ln203_498_fu_5086637_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_497_fu_5086597_p1.read()) + sc_biguint<10>(zext_ln203_498_fu_5086637_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4268_fu_5113063_p2() {
    add_ln703_4268_fu_5113063_p2 = (!zext_ln203_426_fu_5081163_p1.read().is_01() || !zext_ln203_499_fu_5086661_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_426_fu_5081163_p1.read()) + sc_biguint<10>(zext_ln203_499_fu_5086661_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4269_fu_5113073_p2() {
    add_ln703_4269_fu_5113073_p2 = (!zext_ln703_617_fu_5113069_p1.read().is_01() || !zext_ln703_616_fu_5113059_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_617_fu_5113069_p1.read()) + sc_biguint<11>(zext_ln703_616_fu_5113059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_426_fu_5087227_p2() {
    add_ln703_426_fu_5087227_p2 = (!zext_ln203_13_fu_5023952_p1.read().is_01() || !sext_ln203_90_fu_5023806_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_13_fu_5023952_p1.read()) + sc_bigint<12>(sext_ln203_90_fu_5023806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4270_fu_5113083_p2() {
    add_ln703_4270_fu_5113083_p2 = (!sext_ln203_777_fu_5086427_p1.read().is_01() || !sext_ln1118_749_fu_5070648_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_777_fu_5086427_p1.read()) + sc_bigint<11>(sext_ln1118_749_fu_5070648_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4271_fu_5113093_p2() {
    add_ln703_4271_fu_5113093_p2 = (!sext_ln203_782_fu_5086617_p1.read().is_01() || !zext_ln708_781_fu_5074426_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_782_fu_5086617_p1.read()) + sc_biguint<11>(zext_ln708_781_fu_5074426_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4272_fu_5113103_p2() {
    add_ln703_4272_fu_5113103_p2 = (!sext_ln703_2387_fu_5113099_p1.read().is_01() || !sext_ln703_2386_fu_5113089_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2387_fu_5113099_p1.read()) + sc_bigint<12>(sext_ln703_2386_fu_5113089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4273_fu_5113113_p2() {
    add_ln703_4273_fu_5113113_p2 = (!sext_ln703_2388_fu_5113109_p1.read().is_01() || !zext_ln703_618_fu_5113079_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2388_fu_5113109_p1.read()) + sc_biguint<13>(zext_ln703_618_fu_5113079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4274_fu_5113119_p2() {
    add_ln703_4274_fu_5113119_p2 = (!sext_ln203_713_fu_5083117_p1.read().is_01() || !zext_ln708_734_fu_5070450_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_713_fu_5083117_p1.read()) + sc_biguint<10>(zext_ln708_734_fu_5070450_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4275_fu_5113125_p2() {
    add_ln703_4275_fu_5113125_p2 = (!zext_ln203_494_fu_5086441_p1.read().is_01() || !zext_ln203_464_fu_5084109_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln203_494_fu_5086441_p1.read()) + sc_biguint<7>(zext_ln203_464_fu_5084109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4276_fu_5113135_p2() {
    add_ln703_4276_fu_5113135_p2 = (!zext_ln703_619_fu_5113131_p1.read().is_01() || !add_ln703_4274_fu_5113119_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_619_fu_5113131_p1.read()) + sc_biguint<10>(add_ln703_4274_fu_5113119_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4277_fu_5113145_p2() {
    add_ln703_4277_fu_5113145_p2 = (!zext_ln203_458_fu_5083597_p1.read().is_01() || !sext_ln203_781_fu_5086577_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_458_fu_5083597_p1.read()) + sc_bigint<9>(sext_ln203_781_fu_5086577_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4278_fu_5113151_p2() {
    add_ln703_4278_fu_5113151_p2 = (!sext_ln203_778_fu_5086461_p1.read().is_01() || !sext_ln203_779_fu_5086485_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln203_778_fu_5086461_p1.read()) + sc_bigint<7>(sext_ln203_779_fu_5086485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4279_fu_5113161_p2() {
    add_ln703_4279_fu_5113161_p2 = (!sext_ln703_2391_fu_5113157_p1.read().is_01() || !add_ln703_4277_fu_5113145_p2.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_2391_fu_5113157_p1.read()) + sc_biguint<9>(add_ln703_4277_fu_5113145_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_427_fu_5087237_p2() {
    add_ln703_427_fu_5087237_p2 = (!sext_ln703_168_fu_5087233_p1.read().is_01() || !zext_ln703_7_fu_5087223_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_168_fu_5087233_p1.read()) + sc_biguint<13>(zext_ln703_7_fu_5087223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4280_fu_5113171_p2() {
    add_ln703_4280_fu_5113171_p2 = (!sext_ln703_2392_fu_5113167_p1.read().is_01() || !sext_ln703_2390_fu_5113141_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2392_fu_5113167_p1.read()) + sc_bigint<11>(sext_ln703_2390_fu_5113141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4281_fu_5121777_p2() {
    add_ln703_4281_fu_5121777_p2 = (!sext_ln703_2393_fu_5121774_p1.read().is_01() || !sext_ln703_2389_fu_5121771_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2393_fu_5121774_p1.read()) + sc_bigint<14>(sext_ln703_2389_fu_5121771_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_429_fu_5087243_p2() {
    add_ln703_429_fu_5087243_p2 = (!zext_ln1118_6_fu_5021065_p1.read().is_01() || !zext_ln1118_129_fu_5023960_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_6_fu_5021065_p1.read()) + sc_biguint<9>(zext_ln1118_129_fu_5023960_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_430_fu_5087253_p2() {
    add_ln703_430_fu_5087253_p2 = (!zext_ln703_8_fu_5087249_p1.read().is_01() || !ap_const_lv10_160.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_8_fu_5087249_p1.read()) + sc_biguint<10>(ap_const_lv10_160));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_431_fu_5087263_p2() {
    add_ln703_431_fu_5087263_p2 = (!zext_ln703_9_fu_5087259_p1.read().is_01() || !sext_ln203_91_fu_5023974_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_9_fu_5087259_p1.read()) + sc_bigint<12>(sext_ln203_91_fu_5023974_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_432_fu_5087273_p2() {
    add_ln703_432_fu_5087273_p2 = (!sext_ln703_171_fu_5087269_p1.read().is_01() || !sext_ln203_92_fu_5024020_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_171_fu_5087269_p1.read()) + sc_bigint<13>(sext_ln203_92_fu_5024020_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_433_fu_5087279_p2() {
    add_ln703_433_fu_5087279_p2 = (!sext_ln1118_146_fu_5024056_p1.read().is_01() || !zext_ln1118_16_fu_5021230_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_146_fu_5024056_p1.read()) + sc_biguint<12>(zext_ln1118_16_fu_5021230_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_434_fu_5087289_p2() {
    add_ln703_434_fu_5087289_p2 = (!sext_ln703_172_fu_5087285_p1.read().is_01() || !add_ln703_432_fu_5087273_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_172_fu_5087285_p1.read()) + sc_biguint<13>(add_ln703_432_fu_5087273_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_435_fu_5087299_p2() {
    add_ln703_435_fu_5087299_p2 = (!sext_ln703_173_fu_5087295_p1.read().is_01() || !sext_ln203_93_fu_5024070_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_173_fu_5087295_p1.read()) + sc_bigint<14>(sext_ln203_93_fu_5024070_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_436_fu_5087305_p2() {
    add_ln703_436_fu_5087305_p2 = (!zext_ln1118_134_fu_5024084_p1.read().is_01() || !sext_ln1118_148_fu_5024130_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_134_fu_5024084_p1.read()) + sc_bigint<10>(sext_ln1118_148_fu_5024130_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_437_fu_5087315_p2() {
    add_ln703_437_fu_5087315_p2 = (!sext_ln703_174_fu_5087311_p1.read().is_01() || !sext_ln1118_147_fu_5024098_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_174_fu_5087311_p1.read()) + sc_bigint<12>(sext_ln1118_147_fu_5024098_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_438_fu_5113806_p2() {
    add_ln703_438_fu_5113806_p2 = (!sext_ln703_175_fu_5113803_p1.read().is_01() || !add_ln703_435_reg_5123297.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_175_fu_5113803_p1.read()) + sc_biguint<14>(add_ln703_435_reg_5123297.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_439_fu_5113811_p2() {
    add_ln703_439_fu_5113811_p2 = (!add_ln703_438_fu_5113806_p2.read().is_01() || !sext_ln708_10_fu_5113189_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_438_fu_5113806_p2.read()) + sc_bigint<14>(sext_ln708_10_fu_5113189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_440_fu_5087321_p2() {
    add_ln703_440_fu_5087321_p2 = (!sext_ln1118_153_fu_5024260_p1.read().is_01() || !sext_ln1118_155_fu_5024316_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_153_fu_5024260_p1.read()) + sc_bigint<12>(sext_ln1118_155_fu_5024316_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_441_fu_5087331_p2() {
    add_ln703_441_fu_5087331_p2 = (!sext_ln703_177_fu_5087327_p1.read().is_01() || !sext_ln1118_151_fu_5024232_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_177_fu_5087327_p1.read()) + sc_bigint<13>(sext_ln1118_151_fu_5024232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_442_fu_5113824_p2() {
    add_ln703_442_fu_5113824_p2 = (!sext_ln703_178_fu_5113821_p1.read().is_01() || !sext_ln703_176_fu_5113817_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_178_fu_5113821_p1.read()) + sc_bigint<15>(sext_ln703_176_fu_5113817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_443_fu_5087337_p2() {
    add_ln703_443_fu_5087337_p2 = (!sext_ln1118_158_fu_5024382_p1.read().is_01() || !sext_ln1118_149_fu_5024144_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_158_fu_5024382_p1.read()) + sc_bigint<12>(sext_ln1118_149_fu_5024144_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_444_fu_5087347_p2() {
    add_ln703_444_fu_5087347_p2 = (!sext_ln1118_157_fu_5024358_p1.read().is_01() || !zext_ln1118_138_fu_5024202_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_157_fu_5024358_p1.read()) + sc_biguint<10>(zext_ln1118_138_fu_5024202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_445_fu_5087357_p2() {
    add_ln703_445_fu_5087357_p2 = (!sext_ln703_180_fu_5087353_p1.read().is_01() || !sext_ln1118_154_fu_5024284_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_180_fu_5087353_p1.read()) + sc_bigint<11>(sext_ln1118_154_fu_5024284_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_446_fu_5087367_p2() {
    add_ln703_446_fu_5087367_p2 = (!sext_ln703_181_fu_5087363_p1.read().is_01() || !sext_ln703_179_fu_5087343_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_181_fu_5087363_p1.read()) + sc_bigint<13>(sext_ln703_179_fu_5087343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_447_fu_5113833_p2() {
    add_ln703_447_fu_5113833_p2 = (!sext_ln703_182_fu_5113830_p1.read().is_01() || !add_ln703_442_fu_5113824_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_182_fu_5113830_p1.read()) + sc_biguint<15>(add_ln703_442_fu_5113824_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_448_fu_5087373_p2() {
    add_ln703_448_fu_5087373_p2 = (!sext_ln203_95_fu_5024434_p1.read().is_01() || !sext_ln203_96_fu_5024448_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_95_fu_5024434_p1.read()) + sc_bigint<12>(sext_ln203_96_fu_5024448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_449_fu_5113842_p2() {
    add_ln703_449_fu_5113842_p2 = (!sext_ln703_183_fu_5113839_p1.read().is_01() || !add_ln703_447_fu_5113833_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_183_fu_5113839_p1.read()) + sc_biguint<15>(add_ln703_447_fu_5113833_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_450_fu_5087379_p2() {
    add_ln703_450_fu_5087379_p2 = (!sext_ln203_98_fu_5024530_p1.read().is_01() || !sext_ln203_99_fu_5024544_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_98_fu_5024530_p1.read()) + sc_bigint<12>(sext_ln203_99_fu_5024544_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_451_fu_5087389_p2() {
    add_ln703_451_fu_5087389_p2 = (!sext_ln203_100_fu_5024576_p1.read().is_01() || !sext_ln203_101_fu_5024648_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_100_fu_5024576_p1.read()) + sc_bigint<12>(sext_ln203_101_fu_5024648_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_452_fu_5087399_p2() {
    add_ln703_452_fu_5087399_p2 = (!sext_ln703_186_fu_5087395_p1.read().is_01() || !sext_ln703_185_fu_5087385_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_186_fu_5087395_p1.read()) + sc_bigint<13>(sext_ln703_185_fu_5087385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_453_fu_5113855_p2() {
    add_ln703_453_fu_5113855_p2 = (!sext_ln703_187_fu_5113852_p1.read().is_01() || !sext_ln703_184_fu_5113848_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_187_fu_5113852_p1.read()) + sc_bigint<16>(sext_ln703_184_fu_5113848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_454_fu_5087405_p2() {
    add_ln703_454_fu_5087405_p2 = (!sext_ln203_88_fu_5023140_p1.read().is_01() || !sext_ln203_97_fu_5024498_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_88_fu_5023140_p1.read()) + sc_bigint<11>(sext_ln203_97_fu_5024498_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_455_fu_5087415_p2() {
    add_ln703_455_fu_5087415_p2 = (!sext_ln703_188_fu_5087411_p1.read().is_01() || !zext_ln203_17_fu_5024616_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_188_fu_5087411_p1.read()) + sc_biguint<12>(zext_ln203_17_fu_5024616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_456_fu_5087421_p2() {
    add_ln703_456_fu_5087421_p2 = (!zext_ln203_15_fu_5024462_p1.read().is_01() || !zext_ln203_16_fu_5024466_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_15_fu_5024462_p1.read()) + sc_biguint<9>(zext_ln203_16_fu_5024466_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_457_fu_5087431_p2() {
    add_ln703_457_fu_5087431_p2 = (!sext_ln203_102_fu_5024680_p1.read().is_01() || !sext_ln203_94_fu_5024402_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_102_fu_5024680_p1.read()) + sc_bigint<8>(sext_ln203_94_fu_5024402_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_458_fu_5087441_p2() {
    add_ln703_458_fu_5087441_p2 = (!sext_ln703_189_fu_5087437_p1.read().is_01() || !zext_ln703_10_fu_5087427_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_189_fu_5087437_p1.read()) + sc_biguint<10>(zext_ln703_10_fu_5087427_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_459_fu_5087451_p2() {
    add_ln703_459_fu_5087451_p2 = (!sext_ln703_190_fu_5087447_p1.read().is_01() || !add_ln703_455_fu_5087415_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_190_fu_5087447_p1.read()) + sc_biguint<12>(add_ln703_455_fu_5087415_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_461_fu_5087457_p2() {
    add_ln703_461_fu_5087457_p2 = (!sext_ln203_103_fu_5024703_p1.read().is_01() || !ap_const_lv12_20.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_103_fu_5024703_p1.read()) + sc_biguint<12>(ap_const_lv12_20));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_462_fu_5087463_p2() {
    add_ln703_462_fu_5087463_p2 = (!add_ln703_461_fu_5087457_p2.read().is_01() || !zext_ln1118_156_fu_5024751_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_461_fu_5087457_p2.read()) + sc_biguint<12>(zext_ln1118_156_fu_5024751_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_463_fu_5087473_p2() {
    add_ln703_463_fu_5087473_p2 = (!sext_ln1118_159_fu_5024747_p1.read().is_01() || !sext_ln1118_161_fu_5024833_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_159_fu_5024747_p1.read()) + sc_bigint<11>(sext_ln1118_161_fu_5024833_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_464_fu_5087483_p2() {
    add_ln703_464_fu_5087483_p2 = (!sext_ln703_193_fu_5087479_p1.read().is_01() || !zext_ln1118_159_fu_5024787_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_193_fu_5087479_p1.read()) + sc_biguint<12>(zext_ln1118_159_fu_5024787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_465_fu_5087493_p2() {
    add_ln703_465_fu_5087493_p2 = (!sext_ln703_194_fu_5087489_p1.read().is_01() || !sext_ln703_192_fu_5087469_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_194_fu_5087489_p1.read()) + sc_bigint<13>(sext_ln703_192_fu_5087469_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_466_fu_5087499_p2() {
    add_ln703_466_fu_5087499_p2 = (!sext_ln1116_18_fu_5024894_p1.read().is_01() || !sext_ln708_11_fu_5024915_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_18_fu_5024894_p1.read()) + sc_bigint<12>(sext_ln708_11_fu_5024915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_467_fu_5113876_p2() {
    add_ln703_467_fu_5113876_p2 = (!sext_ln703_196_fu_5113873_p1.read().is_01() || !sext_ln703_195_fu_5113870_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_196_fu_5113873_p1.read()) + sc_bigint<14>(sext_ln703_195_fu_5113870_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_468_fu_5087505_p2() {
    add_ln703_468_fu_5087505_p2 = (!sext_ln1118_163_fu_5024875_p1.read().is_01() || !zext_ln1116_25_fu_5024933_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_163_fu_5024875_p1.read()) + sc_biguint<11>(zext_ln1116_25_fu_5024933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_469_fu_5087515_p2() {
    add_ln703_469_fu_5087515_p2 = (!sext_ln703_197_fu_5087511_p1.read().is_01() || !sext_ln708_12_fu_5024953_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_197_fu_5087511_p1.read()) + sc_bigint<12>(sext_ln708_12_fu_5024953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_470_fu_5113885_p2() {
    add_ln703_470_fu_5113885_p2 = (!sext_ln703_198_fu_5113882_p1.read().is_01() || !add_ln703_467_fu_5113876_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_198_fu_5113882_p1.read()) + sc_biguint<14>(add_ln703_467_fu_5113876_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_471_fu_5087521_p2() {
    add_ln703_471_fu_5087521_p2 = (!sext_ln708_13_fu_5025057_p1.read().is_01() || !sext_ln1118_166_fu_5025264_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_13_fu_5025057_p1.read()) + sc_bigint<12>(sext_ln1118_166_fu_5025264_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_472_fu_5113898_p2() {
    add_ln703_472_fu_5113898_p2 = (!sext_ln703_200_fu_5113895_p1.read().is_01() || !sext_ln703_199_fu_5113891_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_200_fu_5113895_p1.read()) + sc_bigint<15>(sext_ln703_199_fu_5113891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_473_fu_5087527_p2() {
    add_ln703_473_fu_5087527_p2 = (!zext_ln708_47_fu_5024979_p1.read().is_01() || !zext_ln708_48_fu_5025043_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_47_fu_5024979_p1.read()) + sc_biguint<11>(zext_ln708_48_fu_5025043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_474_fu_5087533_p2() {
    add_ln703_474_fu_5087533_p2 = (!zext_ln1118_167_fu_5025109_p1.read().is_01() || !zext_ln1118_169_fu_5025133_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_167_fu_5025109_p1.read()) + sc_biguint<10>(zext_ln1118_169_fu_5025133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_475_fu_5087543_p2() {
    add_ln703_475_fu_5087543_p2 = (!zext_ln703_11_fu_5087539_p1.read().is_01() || !add_ln703_473_fu_5087527_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_11_fu_5087539_p1.read()) + sc_biguint<11>(add_ln703_473_fu_5087527_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_476_fu_5113907_p2() {
    add_ln703_476_fu_5113907_p2 = (!zext_ln703_12_fu_5113904_p1.read().is_01() || !add_ln703_472_fu_5113898_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_12_fu_5113904_p1.read()) + sc_biguint<15>(add_ln703_472_fu_5113898_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_477_fu_5087549_p2() {
    add_ln703_477_fu_5087549_p2 = (!zext_ln708_53_fu_5025237_p1.read().is_01() || !sext_ln1118_164_fu_5025011_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_53_fu_5025237_p1.read()) + sc_bigint<11>(sext_ln1118_164_fu_5025011_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_478_fu_5087559_p2() {
    add_ln703_478_fu_5087559_p2 = (!sext_ln703_201_fu_5087555_p1.read().is_01() || !zext_ln1118_171_fu_5025173_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_201_fu_5087555_p1.read()) + sc_biguint<12>(zext_ln1118_171_fu_5025173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_479_fu_5087565_p2() {
    add_ln703_479_fu_5087565_p2 = (!zext_ln1118_164_fu_5024965_p1.read().is_01() || !sext_ln1118_131_fu_5022776_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_164_fu_5024965_p1.read()) + sc_bigint<11>(sext_ln1118_131_fu_5022776_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_480_fu_5087571_p2() {
    add_ln703_480_fu_5087571_p2 = (!zext_ln708_50_fu_5025077_p1.read().is_01() || !sext_ln1118_165_fu_5025205_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_50_fu_5025077_p1.read()) + sc_bigint<8>(sext_ln1118_165_fu_5025205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_481_fu_5087581_p2() {
    add_ln703_481_fu_5087581_p2 = (!sext_ln703_202_fu_5087577_p1.read().is_01() || !add_ln703_479_fu_5087565_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_202_fu_5087577_p1.read()) + sc_biguint<11>(add_ln703_479_fu_5087565_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_482_fu_5087591_p2() {
    add_ln703_482_fu_5087591_p2 = (!sext_ln703_203_fu_5087587_p1.read().is_01() || !add_ln703_478_fu_5087559_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_203_fu_5087587_p1.read()) + sc_biguint<12>(add_ln703_478_fu_5087559_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_483_fu_5113916_p2() {
    add_ln703_483_fu_5113916_p2 = (!sext_ln703_204_fu_5113913_p1.read().is_01() || !add_ln703_476_fu_5113907_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_204_fu_5113913_p1.read()) + sc_biguint<15>(add_ln703_476_fu_5113907_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_484_fu_5113922_p2() {
    add_ln703_484_fu_5113922_p2 = (!add_ln703_483_fu_5113916_p2.read().is_01() || !sext_ln203_104_fu_5113192_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_483_fu_5113916_p2.read()) + sc_bigint<15>(sext_ln203_104_fu_5113192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_485_fu_5087597_p2() {
    add_ln703_485_fu_5087597_p2 = (!zext_ln203_fu_5022084_p1.read().is_01() || !zext_ln203_10_fu_5023838_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_fu_5022084_p1.read()) + sc_biguint<10>(zext_ln203_10_fu_5023838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_486_fu_5087607_p2() {
    add_ln703_486_fu_5087607_p2 = (!zext_ln703_13_fu_5087603_p1.read().is_01() || !sext_ln203_110_fu_5025425_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_13_fu_5087603_p1.read()) + sc_bigint<12>(sext_ln203_110_fu_5025425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_487_fu_5113931_p2() {
    add_ln703_487_fu_5113931_p2 = (!sext_ln703_205_fu_5113928_p1.read().is_01() || !add_ln703_484_fu_5113922_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_205_fu_5113928_p1.read()) + sc_biguint<15>(add_ln703_484_fu_5113922_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_488_fu_5087613_p2() {
    add_ln703_488_fu_5087613_p2 = (!sext_ln203_107_fu_5025376_p1.read().is_01() || !sext_ln203_106_fu_5025362_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_107_fu_5025376_p1.read()) + sc_bigint<11>(sext_ln203_106_fu_5025362_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_489_fu_5087619_p2() {
    add_ln703_489_fu_5087619_p2 = (!sext_ln203_85_fu_5023048_p1.read().is_01() || !sext_ln203_109_fu_5025404_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln203_85_fu_5023048_p1.read()) + sc_bigint<7>(sext_ln203_109_fu_5025404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_490_fu_5087629_p2() {
    add_ln703_490_fu_5087629_p2 = (!sext_ln703_206_fu_5087625_p1.read().is_01() || !sext_ln203_105_fu_5025324_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln703_206_fu_5087625_p1.read()) + sc_bigint<8>(sext_ln203_105_fu_5025324_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_491_fu_5087639_p2() {
    add_ln703_491_fu_5087639_p2 = (!sext_ln703_207_fu_5087635_p1.read().is_01() || !add_ln703_488_fu_5087613_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_207_fu_5087635_p1.read()) + sc_biguint<11>(add_ln703_488_fu_5087613_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_493_fu_5087645_p2() {
    add_ln703_493_fu_5087645_p2 = (!zext_ln203_19_fu_5025489_p1.read().is_01() || !ap_const_lv9_160.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_19_fu_5025489_p1.read()) + sc_bigint<9>(ap_const_lv9_160));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_494_fu_5087651_p2() {
    add_ln703_494_fu_5087651_p2 = (!add_ln703_493_fu_5087645_p2.read().is_01() || !zext_ln203_18_fu_5025457_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_493_fu_5087645_p2.read()) + sc_biguint<9>(zext_ln203_18_fu_5025457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_495_fu_5087661_p2() {
    add_ln703_495_fu_5087661_p2 = (!sext_ln1118_167_fu_5025513_p1.read().is_01() || !zext_ln1118_157_fu_5024755_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_167_fu_5025513_p1.read()) + sc_biguint<10>(zext_ln1118_157_fu_5024755_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_496_fu_5087671_p2() {
    add_ln703_496_fu_5087671_p2 = (!sext_ln703_211_fu_5087667_p1.read().is_01() || !sext_ln703_210_fu_5087657_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_211_fu_5087667_p1.read()) + sc_bigint<11>(sext_ln703_210_fu_5087657_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_497_fu_5087681_p2() {
    add_ln703_497_fu_5087681_p2 = (!sext_ln703_212_fu_5087677_p1.read().is_01() || !zext_ln708_55_fu_5025561_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_212_fu_5087677_p1.read()) + sc_biguint<12>(zext_ln708_55_fu_5025561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_498_fu_5087691_p2() {
    add_ln703_498_fu_5087691_p2 = (!sext_ln1118_168_fu_5025533_p1.read().is_01() || !zext_ln708_26_fu_5022484_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_168_fu_5025533_p1.read()) + sc_biguint<10>(zext_ln708_26_fu_5022484_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_499_fu_5087701_p2() {
    add_ln703_499_fu_5087701_p2 = (!sext_ln703_214_fu_5087697_p1.read().is_01() || !zext_ln203_20_fu_5025593_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_214_fu_5087697_p1.read()) + sc_biguint<12>(zext_ln203_20_fu_5025593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_500_fu_5087711_p2() {
    add_ln703_500_fu_5087711_p2 = (!sext_ln703_215_fu_5087707_p1.read().is_01() || !sext_ln703_213_fu_5087687_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_215_fu_5087707_p1.read()) + sc_bigint<13>(sext_ln703_213_fu_5087687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_501_fu_5087717_p2() {
    add_ln703_501_fu_5087717_p2 = (!add_ln703_500_fu_5087711_p2.read().is_01() || !sext_ln1118_169_fu_5025607_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_500_fu_5087711_p2.read()) + sc_bigint<13>(sext_ln1118_169_fu_5025607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_502_fu_5087723_p2() {
    add_ln703_502_fu_5087723_p2 = (!zext_ln708_57_fu_5025653_p1.read().is_01() || !sext_ln1118_171_fu_5025667_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_57_fu_5025653_p1.read()) + sc_bigint<11>(sext_ln1118_171_fu_5025667_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_503_fu_5087733_p2() {
    add_ln703_503_fu_5087733_p2 = (!sext_ln703_217_fu_5087729_p1.read().is_01() || !sext_ln1118_170_fu_5025621_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_217_fu_5087729_p1.read()) + sc_bigint<12>(sext_ln1118_170_fu_5025621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_504_fu_5113956_p2() {
    add_ln703_504_fu_5113956_p2 = (!sext_ln703_218_fu_5113953_p1.read().is_01() || !sext_ln703_216_fu_5113950_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_218_fu_5113953_p1.read()) + sc_bigint<14>(sext_ln703_216_fu_5113950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_505_fu_5113962_p2() {
    add_ln703_505_fu_5113962_p2 = (!add_ln703_504_fu_5113956_p2.read().is_01() || !sext_ln708_14_fu_5113195_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_504_fu_5113956_p2.read()) + sc_bigint<14>(sext_ln708_14_fu_5113195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_506_fu_5087739_p2() {
    add_ln703_506_fu_5087739_p2 = (!trunc_ln1118_s_fu_5025697_p4.read().is_01() || !zext_ln1118_117_fu_5023552_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_s_fu_5025697_p4.read()) + sc_biguint<10>(zext_ln1118_117_fu_5023552_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_507_fu_5087749_p2() {
    add_ln703_507_fu_5087749_p2 = (!zext_ln703_14_fu_5087745_p1.read().is_01() || !sext_ln1118_173_fu_5025787_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_14_fu_5087745_p1.read()) + sc_bigint<12>(sext_ln1118_173_fu_5025787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_508_fu_5113975_p2() {
    add_ln703_508_fu_5113975_p2 = (!sext_ln703_220_fu_5113972_p1.read().is_01() || !sext_ln703_219_fu_5113968_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_220_fu_5113972_p1.read()) + sc_bigint<15>(sext_ln703_219_fu_5113968_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_509_fu_5087755_p2() {
    add_ln703_509_fu_5087755_p2 = (!zext_ln708_58_fu_5025835_p1.read().is_01() || !sext_ln1118_174_fu_5025811_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_58_fu_5025835_p1.read()) + sc_bigint<11>(sext_ln1118_174_fu_5025811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_510_fu_5087765_p2() {
    add_ln703_510_fu_5087765_p2 = (!sext_ln703_221_fu_5087761_p1.read().is_01() || !zext_ln1118_185_fu_5025773_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_221_fu_5087761_p1.read()) + sc_biguint<12>(zext_ln1118_185_fu_5025773_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_511_fu_5087775_p2() {
    add_ln703_511_fu_5087775_p2 = (!sext_ln1118_172_fu_5025727_p1.read().is_01() || !sext_ln708_15_fu_5025759_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_172_fu_5025727_p1.read()) + sc_bigint<8>(sext_ln708_15_fu_5025759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_512_fu_5087785_p2() {
    add_ln703_512_fu_5087785_p2 = (!sext_ln703_223_fu_5087781_p1.read().is_01() || !sext_ln1118_175_fu_5025855_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_223_fu_5087781_p1.read()) + sc_bigint<10>(sext_ln1118_175_fu_5025855_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_513_fu_5087795_p2() {
    add_ln703_513_fu_5087795_p2 = (!sext_ln703_224_fu_5087791_p1.read().is_01() || !sext_ln703_222_fu_5087771_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_224_fu_5087791_p1.read()) + sc_bigint<13>(sext_ln703_222_fu_5087771_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_514_fu_5113984_p2() {
    add_ln703_514_fu_5113984_p2 = (!sext_ln703_225_fu_5113981_p1.read().is_01() || !add_ln703_508_fu_5113975_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_225_fu_5113981_p1.read()) + sc_biguint<15>(add_ln703_508_fu_5113975_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_515_fu_5113990_p2() {
    add_ln703_515_fu_5113990_p2 = (!add_ln703_514_fu_5113984_p2.read().is_01() || !zext_ln203_21_fu_5113198_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_514_fu_5113984_p2.read()) + sc_biguint<15>(zext_ln203_21_fu_5113198_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_516_fu_5087801_p2() {
    add_ln703_516_fu_5087801_p2 = (!sext_ln203_111_fu_5025869_p1.read().is_01() || !sext_ln203_112_fu_5025883_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_111_fu_5025869_p1.read()) + sc_bigint<11>(sext_ln203_112_fu_5025883_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_517_fu_5087811_p2() {
    add_ln703_517_fu_5087811_p2 = (!sext_ln703_226_fu_5087807_p1.read().is_01() || !zext_ln203_22_fu_5025993_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_226_fu_5087807_p1.read()) + sc_biguint<12>(zext_ln203_22_fu_5025993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_518_fu_5113999_p2() {
    add_ln703_518_fu_5113999_p2 = (!sext_ln703_227_fu_5113996_p1.read().is_01() || !add_ln703_515_fu_5113990_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_227_fu_5113996_p1.read()) + sc_biguint<15>(add_ln703_515_fu_5113990_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_519_fu_5087817_p2() {
    add_ln703_519_fu_5087817_p2 = (!sext_ln203_115_fu_5026023_p1.read().is_01() || !zext_ln203_4_fu_5022255_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_115_fu_5026023_p1.read()) + sc_biguint<11>(zext_ln203_4_fu_5022255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_520_fu_5087827_p2() {
    add_ln703_520_fu_5087827_p2 = (!zext_ln203_23_fu_5026027_p1.read().is_01() || !sext_ln203_114_fu_5025979_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_23_fu_5026027_p1.read()) + sc_bigint<11>(sext_ln203_114_fu_5025979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_521_fu_5087833_p2() {
    add_ln703_521_fu_5087833_p2 = (!add_ln703_520_fu_5087827_p2.read().is_01() || !sext_ln203_113_fu_5025919_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_520_fu_5087827_p2.read()) + sc_bigint<11>(sext_ln203_113_fu_5025919_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_522_fu_5087843_p2() {
    add_ln703_522_fu_5087843_p2 = (!sext_ln703_229_fu_5087839_p1.read().is_01() || !sext_ln703_228_fu_5087823_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_229_fu_5087839_p1.read()) + sc_bigint<12>(sext_ln703_228_fu_5087823_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_524_fu_5087849_p2() {
    add_ln703_524_fu_5087849_p2 = (!sext_ln1118_177_fu_5026063_p1.read().is_01() || !ap_const_lv11_660.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_177_fu_5026063_p1.read()) + sc_bigint<11>(ap_const_lv11_660));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_525_fu_5087855_p2() {
    add_ln703_525_fu_5087855_p2 = (!zext_ln1118_195_fu_5026141_p1.read().is_01() || !zext_ln1118_198_fu_5026213_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_195_fu_5026141_p1.read()) + sc_biguint<10>(zext_ln1118_198_fu_5026213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_526_fu_5087865_p2() {
    add_ln703_526_fu_5087865_p2 = (!zext_ln703_15_fu_5087861_p1.read().is_01() || !add_ln703_524_fu_5087849_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_15_fu_5087861_p1.read()) + sc_biguint<11>(add_ln703_524_fu_5087849_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_527_fu_5087875_p2() {
    add_ln703_527_fu_5087875_p2 = (!sext_ln708_16_fu_5026105_p1.read().is_01() || !zext_ln708_29_fu_5023196_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_16_fu_5026105_p1.read()) + sc_biguint<11>(zext_ln708_29_fu_5023196_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_528_fu_5087885_p2() {
    add_ln703_528_fu_5087885_p2 = (!sext_ln1118_179_fu_5026173_p1.read().is_01() || !zext_ln1118_12_fu_5021194_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_179_fu_5026173_p1.read()) + sc_biguint<10>(zext_ln1118_12_fu_5021194_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_529_fu_5087895_p2() {
    add_ln703_529_fu_5087895_p2 = (!sext_ln703_234_fu_5087891_p1.read().is_01() || !sext_ln703_233_fu_5087881_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_234_fu_5087891_p1.read()) + sc_bigint<12>(sext_ln703_233_fu_5087881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_530_fu_5087901_p2() {
    add_ln703_530_fu_5087901_p2 = (!add_ln703_529_fu_5087895_p2.read().is_01() || !sext_ln703_232_fu_5087871_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_529_fu_5087895_p2.read()) + sc_bigint<12>(sext_ln703_232_fu_5087871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_531_fu_5087911_p2() {
    add_ln703_531_fu_5087911_p2 = (!zext_ln708_35_fu_5023360_p1.read().is_01() || !zext_ln708_61_fu_5026265_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_35_fu_5023360_p1.read()) + sc_biguint<11>(zext_ln708_61_fu_5026265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_532_fu_5087921_p2() {
    add_ln703_532_fu_5087921_p2 = (!zext_ln703_16_fu_5087917_p1.read().is_01() || !sext_ln703_235_fu_5087907_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_16_fu_5087917_p1.read()) + sc_bigint<13>(sext_ln703_235_fu_5087907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_533_fu_5087927_p2() {
    add_ln703_533_fu_5087927_p2 = (!zext_ln708_63_fu_5026289_p1.read().is_01() || !zext_ln708_64_fu_5026303_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_63_fu_5026289_p1.read()) + sc_biguint<11>(zext_ln708_64_fu_5026303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_534_fu_5087937_p2() {
    add_ln703_534_fu_5087937_p2 = (!zext_ln708_65_fu_5026323_p1.read().is_01() || !sext_ln1118_180_fu_5026233_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_65_fu_5026323_p1.read()) + sc_bigint<11>(sext_ln1118_180_fu_5026233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_535_fu_5087947_p2() {
    add_ln703_535_fu_5087947_p2 = (!sext_ln703_237_fu_5087943_p1.read().is_01() || !zext_ln703_17_fu_5087933_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_237_fu_5087943_p1.read()) + sc_biguint<12>(zext_ln703_17_fu_5087933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_536_fu_5114024_p2() {
    add_ln703_536_fu_5114024_p2 = (!sext_ln703_238_fu_5114021_p1.read().is_01() || !sext_ln703_236_fu_5114018_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_238_fu_5114021_p1.read()) + sc_bigint<14>(sext_ln703_236_fu_5114018_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_537_fu_5114030_p2() {
    add_ln703_537_fu_5114030_p2 = (!add_ln703_536_fu_5114024_p2.read().is_01() || !zext_ln1118_200_fu_5113201_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_536_fu_5114024_p2.read()) + sc_biguint<14>(zext_ln1118_200_fu_5113201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_538_fu_5087953_p2() {
    add_ln703_538_fu_5087953_p2 = (!zext_ln708_40_fu_5023580_p1.read().is_01() || !zext_ln708_66_fu_5026455_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_40_fu_5023580_p1.read()) + sc_biguint<11>(zext_ln708_66_fu_5026455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_539_fu_5114039_p2() {
    add_ln703_539_fu_5114039_p2 = (!zext_ln703_18_fu_5114036_p1.read().is_01() || !add_ln703_537_fu_5114030_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_18_fu_5114036_p1.read()) + sc_biguint<14>(add_ln703_537_fu_5114030_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_540_fu_5087959_p2() {
    add_ln703_540_fu_5087959_p2 = (!zext_ln708_67_fu_5026475_p1.read().is_01() || !zext_ln708_68_fu_5026489_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_67_fu_5026475_p1.read()) + sc_biguint<11>(zext_ln708_68_fu_5026489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_541_fu_5087965_p2() {
    add_ln703_541_fu_5087965_p2 = (!zext_ln1118_206_fu_5026537_p1.read().is_01() || !zext_ln708_71_fu_5026589_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_206_fu_5026537_p1.read()) + sc_biguint<9>(zext_ln708_71_fu_5026589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_542_fu_5087975_p2() {
    add_ln703_542_fu_5087975_p2 = (!zext_ln703_19_fu_5087971_p1.read().is_01() || !add_ln703_540_fu_5087959_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_19_fu_5087971_p1.read()) + sc_biguint<11>(add_ln703_540_fu_5087959_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_543_fu_5114052_p2() {
    add_ln703_543_fu_5114052_p2 = (!zext_ln703_20_fu_5114049_p1.read().is_01() || !sext_ln703_239_fu_5114045_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_20_fu_5114049_p1.read()) + sc_bigint<15>(sext_ln703_239_fu_5114045_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_544_fu_5087981_p2() {
    add_ln703_544_fu_5087981_p2 = (!zext_ln203_10_fu_5023838_p1.read().is_01() || !trunc_ln203_1_fu_5026613_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_10_fu_5023838_p1.read()) + sc_biguint<10>(trunc_ln203_1_fu_5026613_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_545_fu_5087991_p2() {
    add_ln703_545_fu_5087991_p2 = (!zext_ln708_44_fu_5023918_p1.read().is_01() || !sext_ln708_17_fu_5026381_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_44_fu_5023918_p1.read()) + sc_bigint<11>(sext_ln708_17_fu_5026381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_546_fu_5088001_p2() {
    add_ln703_546_fu_5088001_p2 = (!sext_ln703_240_fu_5087997_p1.read().is_01() || !zext_ln703_24_fu_5087987_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_240_fu_5087997_p1.read()) + sc_biguint<12>(zext_ln703_24_fu_5087987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_547_fu_5088011_p2() {
    add_ln703_547_fu_5088011_p2 = (!sext_ln708_18_fu_5026441_p1.read().is_01() || !zext_ln1118_202_fu_5026395_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_18_fu_5026441_p1.read()) + sc_biguint<11>(zext_ln1118_202_fu_5026395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_548_fu_5088017_p2() {
    add_ln703_548_fu_5088017_p2 = (!zext_ln203_24_fu_5026603_p1.read().is_01() || !sext_ln708_19_fu_5026569_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_24_fu_5026603_p1.read()) + sc_bigint<9>(sext_ln708_19_fu_5026569_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_549_fu_5088027_p2() {
    add_ln703_549_fu_5088027_p2 = (!sext_ln703_242_fu_5088023_p1.read().is_01() || !zext_ln1118_60_fu_5021901_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_242_fu_5088023_p1.read()) + sc_biguint<10>(zext_ln1118_60_fu_5021901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_550_fu_5088037_p2() {
    add_ln703_550_fu_5088037_p2 = (!sext_ln703_243_fu_5088033_p1.read().is_01() || !add_ln703_547_fu_5088011_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_243_fu_5088033_p1.read()) + sc_biguint<11>(add_ln703_547_fu_5088011_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_551_fu_5088047_p2() {
    add_ln703_551_fu_5088047_p2 = (!sext_ln703_244_fu_5088043_p1.read().is_01() || !sext_ln703_241_fu_5088007_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_244_fu_5088043_p1.read()) + sc_bigint<13>(sext_ln703_241_fu_5088007_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_552_fu_5114061_p2() {
    add_ln703_552_fu_5114061_p2 = (!sext_ln703_245_fu_5114058_p1.read().is_01() || !add_ln703_543_fu_5114052_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_245_fu_5114058_p1.read()) + sc_biguint<15>(add_ln703_543_fu_5114052_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_553_fu_5114067_p2() {
    add_ln703_553_fu_5114067_p2 = (!add_ln703_552_fu_5114061_p2.read().is_01() || !zext_ln203_26_fu_5113204_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_552_fu_5114061_p2.read()) + sc_biguint<15>(zext_ln203_26_fu_5113204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_554_fu_5088053_p2() {
    add_ln703_554_fu_5088053_p2 = (!zext_ln203_25_fu_5026635_p1.read().is_01() || !sext_ln203_108_fu_5025400_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_25_fu_5026635_p1.read()) + sc_bigint<11>(sext_ln203_108_fu_5025400_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_556_fu_5088059_p2() {
    add_ln703_556_fu_5088059_p2 = (!trunc_ln203_2_fu_5026673_p4.read().is_01() || !ap_const_lv10_A0.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_2_fu_5026673_p4.read()) + sc_biguint<10>(ap_const_lv10_A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_557_fu_5088069_p2() {
    add_ln703_557_fu_5088069_p2 = (!zext_ln703_21_fu_5088065_p1.read().is_01() || !sext_ln203_116_fu_5026699_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_21_fu_5088065_p1.read()) + sc_bigint<12>(sext_ln203_116_fu_5026699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_558_fu_5088079_p2() {
    add_ln703_558_fu_5088079_p2 = (!sext_ln1118_183_fu_5026713_p1.read().is_01() || !sext_ln1118_184_fu_5026737_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_183_fu_5026713_p1.read()) + sc_bigint<11>(sext_ln1118_184_fu_5026737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_559_fu_5088089_p2() {
    add_ln703_559_fu_5088089_p2 = (!sext_ln703_249_fu_5088085_p1.read().is_01() || !sext_ln703_248_fu_5088075_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_249_fu_5088085_p1.read()) + sc_bigint<13>(sext_ln703_248_fu_5088075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_560_fu_5088099_p2() {
    add_ln703_560_fu_5088099_p2 = (!sext_ln708_20_fu_5026779_p1.read().is_01() || !sext_ln1118_186_fu_5026835_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_20_fu_5026779_p1.read()) + sc_bigint<12>(sext_ln1118_186_fu_5026835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_561_fu_5088109_p2() {
    add_ln703_561_fu_5088109_p2 = (!sext_ln703_251_fu_5088105_p1.read().is_01() || !sext_ln703_250_fu_5088095_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_251_fu_5088105_p1.read()) + sc_bigint<14>(sext_ln703_250_fu_5088095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_562_fu_5088115_p2() {
    add_ln703_562_fu_5088115_p2 = (!zext_ln1118_212_fu_5026811_p1.read().is_01() || !zext_ln1118_215_fu_5026859_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_212_fu_5026811_p1.read()) + sc_biguint<10>(zext_ln1118_215_fu_5026859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_563_fu_5088125_p2() {
    add_ln703_563_fu_5088125_p2 = (!zext_ln708_75_fu_5026873_p1.read().is_01() || !sext_ln1118_185_fu_5026765_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_75_fu_5026873_p1.read()) + sc_bigint<11>(sext_ln1118_185_fu_5026765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_564_fu_5088135_p2() {
    add_ln703_564_fu_5088135_p2 = (!sext_ln703_252_fu_5088131_p1.read().is_01() || !zext_ln703_25_fu_5088121_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_252_fu_5088131_p1.read()) + sc_biguint<12>(zext_ln703_25_fu_5088121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_565_fu_5114089_p2() {
    add_ln703_565_fu_5114089_p2 = (!sext_ln703_253_fu_5114086_p1.read().is_01() || !add_ln703_561_reg_5123432.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_253_fu_5114086_p1.read()) + sc_biguint<14>(add_ln703_561_reg_5123432.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_566_fu_5114094_p2() {
    add_ln703_566_fu_5114094_p2 = (!add_ln703_565_fu_5114089_p2.read().is_01() || !sext_ln1118_187_fu_5113207_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_565_fu_5114089_p2.read()) + sc_bigint<14>(sext_ln1118_187_fu_5113207_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_567_fu_5088141_p2() {
    add_ln703_567_fu_5088141_p2 = (!sext_ln1118_190_fu_5027033_p1.read().is_01() || !zext_ln708_77_fu_5026937_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_190_fu_5027033_p1.read()) + sc_biguint<12>(zext_ln708_77_fu_5026937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_568_fu_5088151_p2() {
    add_ln703_568_fu_5088151_p2 = (!sext_ln703_255_fu_5088147_p1.read().is_01() || !sext_ln1116_13_fu_5021792_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_255_fu_5088147_p1.read()) + sc_bigint<13>(sext_ln1116_13_fu_5021792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_569_fu_5114107_p2() {
    add_ln703_569_fu_5114107_p2 = (!sext_ln703_256_fu_5114104_p1.read().is_01() || !sext_ln703_254_fu_5114100_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_256_fu_5114104_p1.read()) + sc_bigint<15>(sext_ln703_254_fu_5114100_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_570_fu_5088157_p2() {
    add_ln703_570_fu_5088157_p2 = (!sext_ln1118_188_fu_5026909_p1.read().is_01() || !sext_ln1118_189_fu_5026965_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_188_fu_5026909_p1.read()) + sc_bigint<11>(sext_ln1118_189_fu_5026965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_571_fu_5088167_p2() {
    add_ln703_571_fu_5088167_p2 = (!sext_ln703_257_fu_5088163_p1.read().is_01() || !zext_ln1118_217_fu_5026951_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_257_fu_5088163_p1.read()) + sc_biguint<12>(zext_ln1118_217_fu_5026951_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_572_fu_5088177_p2() {
    add_ln703_572_fu_5088177_p2 = (!sext_ln1118_191_fu_5027065_p1.read().is_01() || !zext_ln1118_220_fu_5026997_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_191_fu_5027065_p1.read()) + sc_biguint<11>(zext_ln1118_220_fu_5026997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_573_fu_5088187_p2() {
    add_ln703_573_fu_5088187_p2 = (!sext_ln703_259_fu_5088183_p1.read().is_01() || !sext_ln708_21_fu_5026993_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_259_fu_5088183_p1.read()) + sc_bigint<12>(sext_ln708_21_fu_5026993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_574_fu_5088197_p2() {
    add_ln703_574_fu_5088197_p2 = (!sext_ln703_260_fu_5088193_p1.read().is_01() || !sext_ln703_258_fu_5088173_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_260_fu_5088193_p1.read()) + sc_bigint<13>(sext_ln703_258_fu_5088173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_575_fu_5114116_p2() {
    add_ln703_575_fu_5114116_p2 = (!sext_ln703_261_fu_5114113_p1.read().is_01() || !add_ln703_569_fu_5114107_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_261_fu_5114113_p1.read()) + sc_biguint<15>(add_ln703_569_fu_5114107_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_576_fu_5114122_p2() {
    add_ln703_576_fu_5114122_p2 = (!add_ln703_575_fu_5114116_p2.read().is_01() || !sext_ln203_117_fu_5113210_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_575_fu_5114116_p2.read()) + sc_bigint<15>(sext_ln203_117_fu_5113210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_577_fu_5088203_p2() {
    add_ln703_577_fu_5088203_p2 = (!sext_ln203_119_fu_5027127_p1.read().is_01() || !sext_ln203_100_fu_5024576_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_119_fu_5027127_p1.read()) + sc_bigint<12>(sext_ln203_100_fu_5024576_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_578_fu_5088213_p2() {
    add_ln703_578_fu_5088213_p2 = (!sext_ln703_262_fu_5088209_p1.read().is_01() || !sext_ln203_118_fu_5027089_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_262_fu_5088209_p1.read()) + sc_bigint<13>(sext_ln203_118_fu_5027089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_579_fu_5114131_p2() {
    add_ln703_579_fu_5114131_p2 = (!sext_ln703_263_fu_5114128_p1.read().is_01() || !add_ln703_576_fu_5114122_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_263_fu_5114128_p1.read()) + sc_biguint<15>(add_ln703_576_fu_5114122_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_580_fu_5088219_p2() {
    add_ln703_580_fu_5088219_p2 = (!trunc_ln203_3_fu_5027161_p4.read().is_01() || !zext_ln203_28_fu_5027237_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_3_fu_5027161_p4.read()) + sc_biguint<9>(zext_ln203_28_fu_5027237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_581_fu_5088229_p2() {
    add_ln703_581_fu_5088229_p2 = (!zext_ln703_30_fu_5088225_p1.read().is_01() || !sext_ln203_121_fu_5027181_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_30_fu_5088225_p1.read()) + sc_bigint<12>(sext_ln203_121_fu_5027181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_582_fu_5088235_p2() {
    add_ln703_582_fu_5088235_p2 = (!sext_ln203_122_fu_5027205_p1.read().is_01() || !zext_ln203_27_fu_5027103_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_122_fu_5027205_p1.read()) + sc_biguint<9>(zext_ln203_27_fu_5027103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_583_fu_5088245_p2() {
    add_ln703_583_fu_5088245_p2 = (!sext_ln703_265_fu_5088241_p1.read().is_01() || !sext_ln203_120_fu_5027151_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_265_fu_5088241_p1.read()) + sc_bigint<10>(sext_ln203_120_fu_5027151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_584_fu_5088255_p2() {
    add_ln703_584_fu_5088255_p2 = (!sext_ln703_266_fu_5088251_p1.read().is_01() || !add_ln703_581_fu_5088229_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_266_fu_5088251_p1.read()) + sc_biguint<12>(add_ln703_581_fu_5088229_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_586_fu_5088261_p2() {
    add_ln703_586_fu_5088261_p2 = (!zext_ln1116_29_fu_5027299_p1.read().is_01() || !zext_ln1118_230_fu_5027328_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_29_fu_5027299_p1.read()) + sc_biguint<9>(zext_ln1118_230_fu_5027328_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_587_fu_5088279_p2() {
    add_ln703_587_fu_5088279_p2 = (!or_ln703_1_fu_5088271_p3.read().is_01() || !sext_ln203_123_fu_5027275_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(or_ln703_1_fu_5088271_p3.read()) + sc_bigint<12>(sext_ln203_123_fu_5027275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_588_fu_5088285_p2() {
    add_ln703_588_fu_5088285_p2 = (!add_ln703_587_fu_5088279_p2.read().is_01() || !zext_ln703_31_fu_5088267_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_587_fu_5088279_p2.read()) + sc_biguint<12>(zext_ln703_31_fu_5088267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_589_fu_5088295_p2() {
    add_ln703_589_fu_5088295_p2 = (!sext_ln703_268_fu_5088291_p1.read().is_01() || !sext_ln203_124_fu_5027332_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_268_fu_5088291_p1.read()) + sc_bigint<13>(sext_ln203_124_fu_5027332_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_590_fu_5088301_p2() {
    add_ln703_590_fu_5088301_p2 = (!sext_ln708_22_fu_5027356_p1.read().is_01() || !zext_ln1118_231_fu_5027370_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_22_fu_5027356_p1.read()) + sc_biguint<11>(zext_ln1118_231_fu_5027370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_591_fu_5088311_p2() {
    add_ln703_591_fu_5088311_p2 = (!sext_ln703_269_fu_5088307_p1.read().is_01() || !add_ln703_589_fu_5088295_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_269_fu_5088307_p1.read()) + sc_biguint<13>(add_ln703_589_fu_5088295_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_592_fu_5088317_p2() {
    add_ln703_592_fu_5088317_p2 = (!zext_ln708_83_fu_5027518_p1.read().is_01() || !sext_ln1116_19_fu_5027398_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_83_fu_5027518_p1.read()) + sc_bigint<11>(sext_ln1116_19_fu_5027398_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_593_fu_5088327_p2() {
    add_ln703_593_fu_5088327_p2 = (!sext_ln703_270_fu_5088323_p1.read().is_01() || !add_ln703_591_fu_5088311_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_270_fu_5088323_p1.read()) + sc_biguint<13>(add_ln703_591_fu_5088311_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_594_fu_5088333_p2() {
    add_ln703_594_fu_5088333_p2 = (!sext_ln1116_21_fu_5027442_p1.read().is_01() || !sext_ln1118_194_fu_5027564_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_21_fu_5027442_p1.read()) + sc_bigint<10>(sext_ln1118_194_fu_5027564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_595_fu_5088343_p2() {
    add_ln703_595_fu_5088343_p2 = (!zext_ln708_81_fu_5027486_p1.read().is_01() || !sext_ln1116_22_fu_5027466_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_81_fu_5027486_p1.read()) + sc_bigint<8>(sext_ln1116_22_fu_5027466_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_596_fu_5088353_p2() {
    add_ln703_596_fu_5088353_p2 = (!sext_ln703_273_fu_5088349_p1.read().is_01() || !sext_ln703_272_fu_5088339_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_273_fu_5088349_p1.read()) + sc_bigint<11>(sext_ln703_272_fu_5088339_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_597_fu_5114156_p2() {
    add_ln703_597_fu_5114156_p2 = (!sext_ln703_274_fu_5114153_p1.read().is_01() || !sext_ln703_271_fu_5114150_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_274_fu_5114153_p1.read()) + sc_bigint<14>(sext_ln703_271_fu_5114150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_598_fu_5114162_p2() {
    add_ln703_598_fu_5114162_p2 = (!add_ln703_597_fu_5114156_p2.read().is_01() || !zext_ln1118_247_fu_5113216_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_597_fu_5114156_p2.read()) + sc_biguint<14>(zext_ln1118_247_fu_5113216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_599_fu_5088359_p2() {
    add_ln703_599_fu_5088359_p2 = (!sext_ln1118_199_fu_5027650_p1.read().is_01() || !sext_ln1118_142_fu_5023670_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_199_fu_5027650_p1.read()) + sc_bigint<11>(sext_ln1118_142_fu_5023670_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_600_fu_5088369_p2() {
    add_ln703_600_fu_5088369_p2 = (!sext_ln703_275_fu_5088365_p1.read().is_01() || !sext_ln1118_197_fu_5027612_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_275_fu_5088365_p1.read()) + sc_bigint<12>(sext_ln1118_197_fu_5027612_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_601_fu_5114171_p2() {
    add_ln703_601_fu_5114171_p2 = (!sext_ln703_276_fu_5114168_p1.read().is_01() || !add_ln703_598_fu_5114162_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_276_fu_5114168_p1.read()) + sc_biguint<14>(add_ln703_598_fu_5114162_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_602_fu_5088375_p2() {
    add_ln703_602_fu_5088375_p2 = (!sext_ln708_9_fu_5023706_p1.read().is_01() || !sext_ln1116_23_fu_5027594_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_9_fu_5023706_p1.read()) + sc_bigint<11>(sext_ln1116_23_fu_5027594_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_603_fu_5088385_p2() {
    add_ln703_603_fu_5088385_p2 = (!sext_ln1118_135_fu_5022848_p1.read().is_01() || !zext_ln708_84_fu_5027616_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_135_fu_5022848_p1.read()) + sc_biguint<9>(zext_ln708_84_fu_5027616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_604_fu_5088395_p2() {
    add_ln703_604_fu_5088395_p2 = (!sext_ln703_278_fu_5088391_p1.read().is_01() || !sext_ln1116_24_fu_5027670_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_278_fu_5088391_p1.read()) + sc_bigint<10>(sext_ln1116_24_fu_5027670_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_605_fu_5088405_p2() {
    add_ln703_605_fu_5088405_p2 = (!sext_ln703_279_fu_5088401_p1.read().is_01() || !sext_ln703_277_fu_5088381_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_279_fu_5088401_p1.read()) + sc_bigint<12>(sext_ln703_277_fu_5088381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_606_fu_5114180_p2() {
    add_ln703_606_fu_5114180_p2 = (!sext_ln703_280_fu_5114177_p1.read().is_01() || !add_ln703_601_fu_5114171_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_280_fu_5114177_p1.read()) + sc_biguint<14>(add_ln703_601_fu_5114171_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_607_fu_5114186_p2() {
    add_ln703_607_fu_5114186_p2 = (!add_ln703_606_fu_5114180_p2.read().is_01() || !sext_ln203_126_fu_5113219_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_606_fu_5114180_p2.read()) + sc_bigint<14>(sext_ln203_126_fu_5113219_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_608_fu_5088411_p2() {
    add_ln703_608_fu_5088411_p2 = (!sext_ln203_129_fu_5027842_p1.read().is_01() || !zext_ln203_29_fu_5027753_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_129_fu_5027842_p1.read()) + sc_biguint<11>(zext_ln203_29_fu_5027753_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_609_fu_5088421_p2() {
    add_ln703_609_fu_5088421_p2 = (!sext_ln703_282_fu_5088417_p1.read().is_01() || !sext_ln203_128_fu_5027812_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_282_fu_5088417_p1.read()) + sc_bigint<12>(sext_ln203_128_fu_5027812_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_610_fu_5114199_p2() {
    add_ln703_610_fu_5114199_p2 = (!sext_ln703_283_fu_5114196_p1.read().is_01() || !sext_ln703_281_fu_5114192_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_283_fu_5114196_p1.read()) + sc_bigint<15>(sext_ln703_281_fu_5114192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_611_fu_5088427_p2() {
    add_ln703_611_fu_5088427_p2 = (!sext_ln203_131_fu_5027860_p1.read().is_01() || !sext_ln203_125_fu_5027721_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_131_fu_5027860_p1.read()) + sc_bigint<10>(sext_ln203_125_fu_5027721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_612_fu_5088437_p2() {
    add_ln703_612_fu_5088437_p2 = (!sext_ln703_284_fu_5088433_p1.read().is_01() || !sext_ln203_127_fu_5027778_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_284_fu_5088433_p1.read()) + sc_bigint<11>(sext_ln203_127_fu_5027778_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_613_fu_5088443_p2() {
    add_ln703_613_fu_5088443_p2 = (!zext_ln203_31_fu_5027896_p1.read().is_01() || !sext_ln203_132_fu_5027878_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_31_fu_5027896_p1.read()) + sc_bigint<9>(sext_ln203_132_fu_5027878_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_614_fu_5088449_p2() {
    add_ln703_614_fu_5088449_p2 = (!add_ln703_613_fu_5088443_p2.read().is_01() || !zext_ln203_30_fu_5027874_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_613_fu_5088443_p2.read()) + sc_biguint<9>(zext_ln203_30_fu_5027874_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_615_fu_5088459_p2() {
    add_ln703_615_fu_5088459_p2 = (!sext_ln703_285_fu_5088455_p1.read().is_01() || !add_ln703_612_fu_5088437_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_285_fu_5088455_p1.read()) + sc_biguint<11>(add_ln703_612_fu_5088437_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_617_fu_5088465_p2() {
    add_ln703_617_fu_5088465_p2 = (!zext_ln203_32_fu_5027910_p1.read().is_01() || !ap_const_lv10_240.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_32_fu_5027910_p1.read()) + sc_bigint<10>(ap_const_lv10_240));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_618_fu_5088475_p2() {
    add_ln703_618_fu_5088475_p2 = (!zext_ln708_88_fu_5027930_p1.read().is_01() || !sext_ln703_288_fu_5088471_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_88_fu_5027930_p1.read()) + sc_bigint<11>(sext_ln703_288_fu_5088471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_619_fu_5088481_p2() {
    add_ln703_619_fu_5088481_p2 = (!add_ln703_618_fu_5088475_p2.read().is_01() || !zext_ln708_89_fu_5027944_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_618_fu_5088475_p2.read()) + sc_biguint<11>(zext_ln708_89_fu_5027944_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_620_fu_5088491_p2() {
    add_ln703_620_fu_5088491_p2 = (!sext_ln703_289_fu_5088487_p1.read().is_01() || !sext_ln203_133_fu_5027968_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_289_fu_5088487_p1.read()) + sc_bigint<12>(sext_ln203_133_fu_5027968_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_621_fu_5088497_p2() {
    add_ln703_621_fu_5088497_p2 = (!zext_ln1118_251_fu_5027988_p1.read().is_01() || !zext_ln1118_253_fu_5028036_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_251_fu_5027988_p1.read()) + sc_biguint<9>(zext_ln1118_253_fu_5028036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_622_fu_5088507_p2() {
    add_ln703_622_fu_5088507_p2 = (!zext_ln703_36_fu_5088503_p1.read().is_01() || !add_ln703_620_fu_5088491_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_36_fu_5088503_p1.read()) + sc_biguint<12>(add_ln703_620_fu_5088491_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_623_fu_5088513_p2() {
    add_ln703_623_fu_5088513_p2 = (!sext_ln1118_202_fu_5028012_p1.read().is_01() || !zext_ln708_3_fu_5021212_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_202_fu_5028012_p1.read()) + sc_biguint<11>(zext_ln708_3_fu_5021212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_624_fu_5088519_p2() {
    add_ln703_624_fu_5088519_p2 = (!add_ln703_623_fu_5088513_p2.read().is_01() || !zext_ln708_91_fu_5028056_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_623_fu_5088513_p2.read()) + sc_biguint<11>(zext_ln708_91_fu_5028056_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_625_fu_5114224_p2() {
    add_ln703_625_fu_5114224_p2 = (!sext_ln703_291_fu_5114221_p1.read().is_01() || !sext_ln703_290_fu_5114218_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_291_fu_5114221_p1.read()) + sc_bigint<13>(sext_ln703_290_fu_5114218_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_626_fu_5114230_p2() {
    add_ln703_626_fu_5114230_p2 = (!add_ln703_625_fu_5114224_p2.read().is_01() || !sext_ln1118_203_fu_5113222_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_625_fu_5114224_p2.read()) + sc_bigint<13>(sext_ln1118_203_fu_5113222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_627_fu_5088525_p2() {
    add_ln703_627_fu_5088525_p2 = (!sext_ln1118_205_fu_5028124_p1.read().is_01() || !zext_ln203_33_fu_5028148_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_205_fu_5028124_p1.read()) + sc_biguint<12>(zext_ln203_33_fu_5028148_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_628_fu_5114243_p2() {
    add_ln703_628_fu_5114243_p2 = (!sext_ln703_293_fu_5114240_p1.read().is_01() || !sext_ln703_292_fu_5114236_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_293_fu_5114240_p1.read()) + sc_bigint<14>(sext_ln703_292_fu_5114236_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_629_fu_5088531_p2() {
    add_ln703_629_fu_5088531_p2 = (!zext_ln708_93_fu_5028172_p1.read().is_01() || !zext_ln708_95_fu_5028204_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_93_fu_5028172_p1.read()) + sc_biguint<9>(zext_ln708_95_fu_5028204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_630_fu_5088541_p2() {
    add_ln703_630_fu_5088541_p2 = (!sext_ln1118_204_fu_5028104_p1.read().is_01() || !zext_ln1118_115_fu_5023500_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_204_fu_5028104_p1.read()) + sc_biguint<10>(zext_ln1118_115_fu_5023500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_631_fu_5088551_p2() {
    add_ln703_631_fu_5088551_p2 = (!sext_ln703_294_fu_5088547_p1.read().is_01() || !zext_ln703_37_fu_5088537_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_294_fu_5088547_p1.read()) + sc_biguint<11>(zext_ln703_37_fu_5088537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_632_fu_5114252_p2() {
    add_ln703_632_fu_5114252_p2 = (!sext_ln703_295_fu_5114249_p1.read().is_01() || !add_ln703_628_fu_5114243_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_295_fu_5114249_p1.read()) + sc_biguint<14>(add_ln703_628_fu_5114243_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_633_fu_5114258_p2() {
    add_ln703_633_fu_5114258_p2 = (!add_ln703_632_fu_5114252_p2.read().is_01() || !zext_ln1118_258_fu_5113228_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_632_fu_5114252_p2.read()) + sc_biguint<14>(zext_ln1118_258_fu_5113228_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_634_fu_5088557_p2() {
    add_ln703_634_fu_5088557_p2 = (!sext_ln1118_206_fu_5028240_p1.read().is_01() || !sext_ln1118_207_fu_5028254_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_206_fu_5028240_p1.read()) + sc_bigint<12>(sext_ln1118_207_fu_5028254_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_635_fu_5088567_p2() {
    add_ln703_635_fu_5088567_p2 = (!sext_ln703_297_fu_5088563_p1.read().is_01() || !sext_ln1116_13_fu_5021792_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_297_fu_5088563_p1.read()) + sc_bigint<13>(sext_ln1116_13_fu_5021792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_636_fu_5114271_p2() {
    add_ln703_636_fu_5114271_p2 = (!sext_ln703_298_fu_5114268_p1.read().is_01() || !sext_ln703_296_fu_5114264_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_298_fu_5114268_p1.read()) + sc_bigint<15>(sext_ln703_296_fu_5114264_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_637_fu_5088573_p2() {
    add_ln703_637_fu_5088573_p2 = (!zext_ln708_69_fu_5026513_p1.read().is_01() || !sext_ln203_135_fu_5028302_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_69_fu_5026513_p1.read()) + sc_bigint<11>(sext_ln203_135_fu_5028302_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_638_fu_5088583_p2() {
    add_ln703_638_fu_5088583_p2 = (!sext_ln703_299_fu_5088579_p1.read().is_01() || !zext_ln1118_260_fu_5028334_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_299_fu_5088579_p1.read()) + sc_biguint<12>(zext_ln1118_260_fu_5028334_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_639_fu_5088589_p2() {
    add_ln703_639_fu_5088589_p2 = (!zext_ln1118_69_fu_5022032_p1.read().is_01() || !sext_ln708_24_fu_5028282_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_69_fu_5022032_p1.read()) + sc_bigint<10>(sext_ln708_24_fu_5028282_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_640_fu_5088599_p2() {
    add_ln703_640_fu_5088599_p2 = (!sext_ln703_300_fu_5088595_p1.read().is_01() || !zext_ln1118_64_fu_5021954_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_300_fu_5088595_p1.read()) + sc_biguint<11>(zext_ln1118_64_fu_5021954_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_641_fu_5088609_p2() {
    add_ln703_641_fu_5088609_p2 = (!sext_ln703_301_fu_5088605_p1.read().is_01() || !add_ln703_638_fu_5088583_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_301_fu_5088605_p1.read()) + sc_biguint<12>(add_ln703_638_fu_5088583_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_642_fu_5114280_p2() {
    add_ln703_642_fu_5114280_p2 = (!sext_ln703_302_fu_5114277_p1.read().is_01() || !add_ln703_636_fu_5114271_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_302_fu_5114277_p1.read()) + sc_biguint<15>(add_ln703_636_fu_5114271_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_643_fu_5114286_p2() {
    add_ln703_643_fu_5114286_p2 = (!zext_ln203_34_fu_5113231_p1.read().is_01() || !zext_ln203_35_fu_5113234_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_34_fu_5113231_p1.read()) + sc_biguint<10>(zext_ln203_35_fu_5113234_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_644_fu_5114296_p2() {
    add_ln703_644_fu_5114296_p2 = (!zext_ln703_42_fu_5114292_p1.read().is_01() || !add_ln703_642_fu_5114280_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_42_fu_5114292_p1.read()) + sc_biguint<15>(add_ln703_642_fu_5114280_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_645_fu_5088615_p2() {
    add_ln703_645_fu_5088615_p2 = (!sext_ln203_136_fu_5028366_p1.read().is_01() || !sext_ln203_137_fu_5028406_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_136_fu_5028366_p1.read()) + sc_bigint<9>(sext_ln203_137_fu_5028406_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_646_fu_5088625_p2() {
    add_ln703_646_fu_5088625_p2 = (!sext_ln703_303_fu_5088621_p1.read().is_01() || !zext_ln708_97_fu_5028386_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_303_fu_5088621_p1.read()) + sc_biguint<10>(zext_ln708_97_fu_5028386_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_648_fu_5088631_p2() {
    add_ln703_648_fu_5088631_p2 = (!sext_ln1118_208_fu_5028426_p1.read().is_01() || !ap_const_lv11_640.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_208_fu_5028426_p1.read()) + sc_bigint<11>(ap_const_lv11_640));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_649_fu_5088637_p2() {
    add_ln703_649_fu_5088637_p2 = (!add_ln703_648_fu_5088631_p2.read().is_01() || !zext_ln708_98_fu_5028454_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_648_fu_5088631_p2.read()) + sc_biguint<11>(zext_ln708_98_fu_5028454_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_650_fu_5088647_p2() {
    add_ln703_650_fu_5088647_p2 = (!sext_ln703_306_fu_5088643_p1.read().is_01() || !sext_ln708_25_fu_5028468_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_306_fu_5088643_p1.read()) + sc_bigint<12>(sext_ln708_25_fu_5028468_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_651_fu_5088653_p2() {
    add_ln703_651_fu_5088653_p2 = (!zext_ln1118_264_fu_5028488_p1.read().is_01() || !sext_ln1118_209_fu_5028508_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_264_fu_5028488_p1.read()) + sc_bigint<10>(sext_ln1118_209_fu_5028508_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_652_fu_5088663_p2() {
    add_ln703_652_fu_5088663_p2 = (!sext_ln703_307_fu_5088659_p1.read().is_01() || !add_ln703_650_fu_5088647_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_307_fu_5088659_p1.read()) + sc_biguint<12>(add_ln703_650_fu_5088647_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_653_fu_5088673_p2() {
    add_ln703_653_fu_5088673_p2 = (!sext_ln708_26_fu_5028532_p1.read().is_01() || !sext_ln1118_211_fu_5028574_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_26_fu_5028532_p1.read()) + sc_bigint<12>(sext_ln1118_211_fu_5028574_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_654_fu_5088683_p2() {
    add_ln703_654_fu_5088683_p2 = (!sext_ln703_309_fu_5088679_p1.read().is_01() || !sext_ln703_308_fu_5088669_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_309_fu_5088679_p1.read()) + sc_bigint<13>(sext_ln703_308_fu_5088669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_655_fu_5088693_p2() {
    add_ln703_655_fu_5088693_p2 = (!zext_ln708_99_fu_5028546_p1.read().is_01() || !zext_ln708_100_fu_5028560_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_99_fu_5028546_p1.read()) + sc_biguint<11>(zext_ln708_100_fu_5028560_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_656_fu_5088703_p2() {
    add_ln703_656_fu_5088703_p2 = (!zext_ln703_43_fu_5088699_p1.read().is_01() || !sext_ln1118_212_fu_5028594_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_43_fu_5088699_p1.read()) + sc_bigint<13>(sext_ln1118_212_fu_5028594_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_657_fu_5088713_p2() {
    add_ln703_657_fu_5088713_p2 = (!sext_ln703_311_fu_5088709_p1.read().is_01() || !sext_ln703_310_fu_5088689_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_311_fu_5088709_p1.read()) + sc_bigint<14>(sext_ln703_310_fu_5088689_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_658_fu_5088719_p2() {
    add_ln703_658_fu_5088719_p2 = (!sext_ln1118_213_fu_5028630_p1.read().is_01() || !sext_ln1118_215_fu_5028676_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_213_fu_5028630_p1.read()) + sc_bigint<12>(sext_ln1118_215_fu_5028676_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_659_fu_5088729_p2() {
    add_ln703_659_fu_5088729_p2 = (!sext_ln703_312_fu_5088725_p1.read().is_01() || !add_ln703_657_fu_5088713_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_312_fu_5088725_p1.read()) + sc_biguint<14>(add_ln703_657_fu_5088713_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_660_fu_5088735_p2() {
    add_ln703_660_fu_5088735_p2 = (!sext_ln1116_14_fu_5021796_p1.read().is_01() || !zext_ln1118_269_fu_5028708_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_14_fu_5021796_p1.read()) + sc_biguint<12>(zext_ln1118_269_fu_5028708_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_661_fu_5088745_p2() {
    add_ln703_661_fu_5088745_p2 = (!sext_ln703_314_fu_5088741_p1.read().is_01() || !sext_ln1118_216_fu_5028712_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_314_fu_5088741_p1.read()) + sc_bigint<13>(sext_ln1118_216_fu_5028712_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_662_fu_5114321_p2() {
    add_ln703_662_fu_5114321_p2 = (!sext_ln703_315_fu_5114318_p1.read().is_01() || !sext_ln703_313_fu_5114315_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_315_fu_5114318_p1.read()) + sc_bigint<15>(sext_ln703_313_fu_5114315_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_663_fu_5088751_p2() {
    add_ln703_663_fu_5088751_p2 = (!zext_ln708_102_fu_5028760_p1.read().is_01() || !sext_ln1118_214_fu_5028662_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_102_fu_5028760_p1.read()) + sc_bigint<11>(sext_ln1118_214_fu_5028662_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_664_fu_5088761_p2() {
    add_ln703_664_fu_5088761_p2 = (!sext_ln703_316_fu_5088757_p1.read().is_01() || !zext_ln1118_270_fu_5028756_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_316_fu_5088757_p1.read()) + sc_biguint<12>(zext_ln1118_270_fu_5028756_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_665_fu_5088767_p2() {
    add_ln703_665_fu_5088767_p2 = (!zext_ln1118_271_fu_5028764_p1.read().is_01() || !sext_ln708_23_fu_5028278_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_271_fu_5028764_p1.read()) + sc_bigint<11>(sext_ln708_23_fu_5028278_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_666_fu_5088773_p2() {
    add_ln703_666_fu_5088773_p2 = (!add_ln703_665_fu_5088767_p2.read().is_01() || !sext_ln1118_217_fu_5028732_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_665_fu_5088767_p2.read()) + sc_bigint<11>(sext_ln1118_217_fu_5028732_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_667_fu_5088783_p2() {
    add_ln703_667_fu_5088783_p2 = (!sext_ln703_317_fu_5088779_p1.read().is_01() || !add_ln703_664_fu_5088761_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_317_fu_5088779_p1.read()) + sc_biguint<12>(add_ln703_664_fu_5088761_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_668_fu_5114330_p2() {
    add_ln703_668_fu_5114330_p2 = (!sext_ln703_318_fu_5114327_p1.read().is_01() || !add_ln703_662_fu_5114321_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_318_fu_5114327_p1.read()) + sc_biguint<15>(add_ln703_662_fu_5114321_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_669_fu_5114336_p2() {
    add_ln703_669_fu_5114336_p2 = (!add_ln703_668_fu_5114330_p2.read().is_01() || !sext_ln203_139_fu_5113237_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_668_fu_5114330_p2.read()) + sc_bigint<15>(sext_ln203_139_fu_5113237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_670_fu_5088789_p2() {
    add_ln703_670_fu_5088789_p2 = (!zext_ln203_36_fu_5028798_p1.read().is_01() || !zext_ln203_37_fu_5028822_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_36_fu_5028798_p1.read()) + sc_biguint<10>(zext_ln203_37_fu_5028822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_671_fu_5088799_p2() {
    add_ln703_671_fu_5088799_p2 = (!zext_ln703_44_fu_5088795_p1.read().is_01() || !sext_ln203_141_fu_5028926_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_44_fu_5088795_p1.read()) + sc_bigint<12>(sext_ln203_141_fu_5028926_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_672_fu_5114345_p2() {
    add_ln703_672_fu_5114345_p2 = (!sext_ln703_319_fu_5114342_p1.read().is_01() || !add_ln703_669_fu_5114336_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_319_fu_5114342_p1.read()) + sc_biguint<15>(add_ln703_669_fu_5114336_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_673_fu_5088805_p2() {
    add_ln703_673_fu_5088805_p2 = (!zext_ln203_39_fu_5028884_p1.read().is_01() || !zext_ln203_40_fu_5028912_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_39_fu_5028884_p1.read()) + sc_biguint<10>(zext_ln203_40_fu_5028912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_674_fu_5088811_p2() {
    add_ln703_674_fu_5088811_p2 = (!add_ln703_673_fu_5088805_p2.read().is_01() || !zext_ln203_38_fu_5028854_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_673_fu_5088805_p2.read()) + sc_biguint<10>(zext_ln203_38_fu_5028854_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_675_fu_5088821_p2() {
    add_ln703_675_fu_5088821_p2 = (!zext_ln203_27_fu_5027103_p1.read().is_01() || !sext_ln203_140_fu_5028908_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_27_fu_5027103_p1.read()) + sc_bigint<9>(sext_ln203_140_fu_5028908_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_676_fu_5088831_p2() {
    add_ln703_676_fu_5088831_p2 = (!sext_ln703_320_fu_5088827_p1.read().is_01() || !sext_ln203_138_fu_5028784_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_320_fu_5088827_p1.read()) + sc_bigint<10>(sext_ln203_138_fu_5028784_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_677_fu_5088841_p2() {
    add_ln703_677_fu_5088841_p2 = (!sext_ln703_321_fu_5088837_p1.read().is_01() || !zext_ln703_45_fu_5088817_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_321_fu_5088837_p1.read()) + sc_biguint<12>(zext_ln703_45_fu_5088817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_679_fu_5088847_p2() {
    add_ln703_679_fu_5088847_p2 = (!sext_ln1118_218_fu_5028946_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_218_fu_5028946_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_680_fu_5088853_p2() {
    add_ln703_680_fu_5088853_p2 = (!add_ln703_679_fu_5088847_p2.read().is_01() || !zext_ln708_30_fu_5023216_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_679_fu_5088847_p2.read()) + sc_biguint<11>(zext_ln708_30_fu_5023216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_681_fu_5088859_p2() {
    add_ln703_681_fu_5088859_p2 = (!trunc_ln708_1151_fu_5029004_p4.read().is_01() || !zext_ln1118_276_fu_5029030_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln708_1151_fu_5029004_p4.read()) + sc_biguint<9>(zext_ln1118_276_fu_5029030_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_682_fu_5088869_p2() {
    add_ln703_682_fu_5088869_p2 = (!zext_ln703_46_fu_5088865_p1.read().is_01() || !zext_ln1118_275_fu_5028994_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_46_fu_5088865_p1.read()) + sc_biguint<10>(zext_ln1118_275_fu_5028994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_683_fu_5088879_p2() {
    add_ln703_683_fu_5088879_p2 = (!zext_ln703_47_fu_5088875_p1.read().is_01() || !add_ln703_680_fu_5088853_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_47_fu_5088875_p1.read()) + sc_biguint<11>(add_ln703_680_fu_5088853_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_684_fu_5088889_p2() {
    add_ln703_684_fu_5088889_p2 = (!zext_ln708_37_fu_5023392_p1.read().is_01() || !zext_ln708_75_fu_5026873_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_37_fu_5023392_p1.read()) + sc_biguint<11>(zext_ln708_75_fu_5026873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_685_fu_5088895_p2() {
    add_ln703_685_fu_5088895_p2 = (!add_ln703_684_fu_5088889_p2.read().is_01() || !zext_ln708_105_fu_5029044_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_684_fu_5088889_p2.read()) + sc_biguint<11>(zext_ln708_105_fu_5029044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_686_fu_5088905_p2() {
    add_ln703_686_fu_5088905_p2 = (!zext_ln708_106_fu_5029058_p1.read().is_01() || !zext_ln708_46_fu_5024929_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_106_fu_5029058_p1.read()) + sc_biguint<8>(zext_ln708_46_fu_5024929_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_687_fu_5088915_p2() {
    add_ln703_687_fu_5088915_p2 = (!zext_ln703_49_fu_5088911_p1.read().is_01() || !sext_ln1118_219_fu_5028970_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_49_fu_5088911_p1.read()) + sc_bigint<11>(sext_ln1118_219_fu_5028970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_688_fu_5088925_p2() {
    add_ln703_688_fu_5088925_p2 = (!sext_ln703_325_fu_5088921_p1.read().is_01() || !zext_ln703_48_fu_5088901_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_325_fu_5088921_p1.read()) + sc_biguint<13>(zext_ln703_48_fu_5088901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_689_fu_5088931_p2() {
    add_ln703_689_fu_5088931_p2 = (!add_ln703_688_fu_5088925_p2.read().is_01() || !sext_ln703_324_fu_5088885_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_688_fu_5088925_p2.read()) + sc_bigint<13>(sext_ln703_324_fu_5088885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_690_fu_5088937_p2() {
    add_ln703_690_fu_5088937_p2 = (!add_ln703_689_fu_5088931_p2.read().is_01() || !zext_ln708_108_fu_5029082_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_689_fu_5088931_p2.read()) + sc_biguint<13>(zext_ln708_108_fu_5029082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_691_fu_5088943_p2() {
    add_ln703_691_fu_5088943_p2 = (!zext_ln1118_278_fu_5029150_p1.read().is_01() || !zext_ln1118_280_fu_5029174_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_278_fu_5029150_p1.read()) + sc_biguint<10>(zext_ln1118_280_fu_5029174_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_692_fu_5088949_p2() {
    add_ln703_692_fu_5088949_p2 = (!add_ln703_691_fu_5088943_p2.read().is_01() || !zext_ln708_110_fu_5029126_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_691_fu_5088943_p2.read()) + sc_biguint<10>(zext_ln708_110_fu_5029126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_693_fu_5114370_p2() {
    add_ln703_693_fu_5114370_p2 = (!zext_ln703_50_fu_5114367_p1.read().is_01() || !sext_ln703_326_fu_5114364_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_50_fu_5114367_p1.read()) + sc_bigint<14>(sext_ln703_326_fu_5114364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_694_fu_5088955_p2() {
    add_ln703_694_fu_5088955_p2 = (!zext_ln1118_281_fu_5029188_p1.read().is_01() || !trunc_ln1118_1_fu_5029228_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_281_fu_5029188_p1.read()) + sc_biguint<10>(trunc_ln1118_1_fu_5029228_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_695_fu_5088965_p2() {
    add_ln703_695_fu_5088965_p2 = (!zext_ln1118_277_fu_5029102_p1.read().is_01() || !sext_ln708_27_fu_5029202_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_277_fu_5029102_p1.read()) + sc_bigint<9>(sext_ln708_27_fu_5029202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_696_fu_5088975_p2() {
    add_ln703_696_fu_5088975_p2 = (!sext_ln703_327_fu_5088971_p1.read().is_01() || !zext_ln708_114_fu_5029254_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_327_fu_5088971_p1.read()) + sc_biguint<11>(zext_ln708_114_fu_5029254_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_697_fu_5088985_p2() {
    add_ln703_697_fu_5088985_p2 = (!sext_ln703_328_fu_5088981_p1.read().is_01() || !zext_ln703_51_fu_5088961_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_328_fu_5088981_p1.read()) + sc_biguint<12>(zext_ln703_51_fu_5088961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_698_fu_5114379_p2() {
    add_ln703_698_fu_5114379_p2 = (!sext_ln703_329_fu_5114376_p1.read().is_01() || !add_ln703_693_fu_5114370_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_329_fu_5114376_p1.read()) + sc_biguint<14>(add_ln703_693_fu_5114370_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_699_fu_5114385_p2() {
    add_ln703_699_fu_5114385_p2 = (!zext_ln708_115_fu_5113240_p1.read().is_01() || !zext_ln1118_246_fu_5113213_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_115_fu_5113240_p1.read()) + sc_biguint<10>(zext_ln1118_246_fu_5113213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_700_fu_5114395_p2() {
    add_ln703_700_fu_5114395_p2 = (!zext_ln703_52_fu_5114391_p1.read().is_01() || !add_ln703_698_fu_5114379_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_52_fu_5114391_p1.read()) + sc_biguint<14>(add_ln703_698_fu_5114379_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_701_fu_5088991_p2() {
    add_ln703_701_fu_5088991_p2 = (!zext_ln1118_284_fu_5029342_p1.read().is_01() || !zext_ln203_41_fu_5029370_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_284_fu_5029342_p1.read()) + sc_biguint<10>(zext_ln203_41_fu_5029370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_702_fu_5089001_p2() {
    add_ln703_702_fu_5089001_p2 = (!zext_ln703_53_fu_5088997_p1.read().is_01() || !zext_ln708_116_fu_5029318_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_53_fu_5088997_p1.read()) + sc_biguint<11>(zext_ln708_116_fu_5029318_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_703_fu_5114408_p2() {
    add_ln703_703_fu_5114408_p2 = (!zext_ln703_54_fu_5114405_p1.read().is_01() || !sext_ln703_330_fu_5114401_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_54_fu_5114405_p1.read()) + sc_bigint<15>(sext_ln703_330_fu_5114401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_704_fu_5089007_p2() {
    add_ln703_704_fu_5089007_p2 = (!sext_ln1118_221_fu_5029298_p1.read().is_01() || !zext_ln1118_282_fu_5029274_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_221_fu_5029298_p1.read()) + sc_biguint<10>(zext_ln1118_282_fu_5029274_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_705_fu_5089017_p2() {
    add_ln703_705_fu_5089017_p2 = (!sext_ln703_331_fu_5089013_p1.read().is_01() || !zext_ln708_117_fu_5029410_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_331_fu_5089013_p1.read()) + sc_biguint<11>(zext_ln708_117_fu_5029410_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_706_fu_5089027_p2() {
    add_ln703_706_fu_5089027_p2 = (!zext_ln1118_285_fu_5029374_p1.read().is_01() || !sext_ln1116_25_fu_5029434_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_285_fu_5029374_p1.read()) + sc_bigint<10>(sext_ln1116_25_fu_5029434_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_707_fu_5089037_p2() {
    add_ln703_707_fu_5089037_p2 = (!sext_ln703_333_fu_5089033_p1.read().is_01() || !zext_ln1118_76_fu_5022138_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_333_fu_5089033_p1.read()) + sc_biguint<11>(zext_ln1118_76_fu_5022138_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_708_fu_5089047_p2() {
    add_ln703_708_fu_5089047_p2 = (!sext_ln703_334_fu_5089043_p1.read().is_01() || !sext_ln703_332_fu_5089023_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_334_fu_5089043_p1.read()) + sc_bigint<12>(sext_ln703_332_fu_5089023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_710_fu_5089053_p2() {
    add_ln703_710_fu_5089053_p2 = (!zext_ln708_118_fu_5029454_p1.read().is_01() || !ap_const_lv11_5A0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_118_fu_5029454_p1.read()) + sc_bigint<11>(ap_const_lv11_5A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_711_fu_5089059_p2() {
    add_ln703_711_fu_5089059_p2 = (!zext_ln1118_289_fu_5029462_p1.read().is_01() || !trunc_ln708_1155_fu_5029484_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_289_fu_5029462_p1.read()) + sc_biguint<10>(trunc_ln708_1155_fu_5029484_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_712_fu_5089069_p2() {
    add_ln703_712_fu_5089069_p2 = (!zext_ln703_55_fu_5089065_p1.read().is_01() || !add_ln703_710_fu_5089053_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_55_fu_5089065_p1.read()) + sc_biguint<11>(add_ln703_710_fu_5089053_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_713_fu_5089079_p2() {
    add_ln703_713_fu_5089079_p2 = (!zext_ln708_122_fu_5029514_p1.read().is_01() || !zext_ln708_123_fu_5029533_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_122_fu_5029514_p1.read()) + sc_biguint<11>(zext_ln708_123_fu_5029533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_714_fu_5089089_p2() {
    add_ln703_714_fu_5089089_p2 = (!zext_ln703_56_fu_5089085_p1.read().is_01() || !sext_ln703_337_fu_5089075_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_56_fu_5089085_p1.read()) + sc_bigint<12>(sext_ln703_337_fu_5089075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_715_fu_5089099_p2() {
    add_ln703_715_fu_5089099_p2 = (!sext_ln703_338_fu_5089095_p1.read().is_01() || !zext_ln203_42_fu_5029541_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_338_fu_5089095_p1.read()) + sc_biguint<13>(zext_ln203_42_fu_5029541_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_716_fu_5089105_p2() {
    add_ln703_716_fu_5089105_p2 = (!zext_ln1116_35_fu_5029537_p1.read().is_01() || !sext_ln1118_222_fu_5029605_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1116_35_fu_5029537_p1.read()) + sc_bigint<11>(sext_ln1118_222_fu_5029605_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_717_fu_5089115_p2() {
    add_ln703_717_fu_5089115_p2 = (!sext_ln703_339_fu_5089111_p1.read().is_01() || !zext_ln708_124_fu_5029573_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_339_fu_5089111_p1.read()) + sc_biguint<12>(zext_ln708_124_fu_5029573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_718_fu_5089125_p2() {
    add_ln703_718_fu_5089125_p2 = (!sext_ln703_340_fu_5089121_p1.read().is_01() || !add_ln703_715_fu_5089099_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_340_fu_5089121_p1.read()) + sc_biguint<13>(add_ln703_715_fu_5089099_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_719_fu_5114430_p2() {
    add_ln703_719_fu_5114430_p2 = (!sext_ln703_341_fu_5114427_p1.read().is_01() || !sext_ln203_134_fu_5113225_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_341_fu_5114427_p1.read()) + sc_bigint<14>(sext_ln203_134_fu_5113225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_720_fu_5089131_p2() {
    add_ln703_720_fu_5089131_p2 = (!zext_ln1118_293_fu_5029649_p1.read().is_01() || !zext_ln1118_294_fu_5029715_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_293_fu_5029649_p1.read()) + sc_biguint<9>(zext_ln1118_294_fu_5029715_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_721_fu_5114439_p2() {
    add_ln703_721_fu_5114439_p2 = (!zext_ln703_57_fu_5114436_p1.read().is_01() || !add_ln703_719_fu_5114430_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_57_fu_5114436_p1.read()) + sc_biguint<14>(add_ln703_719_fu_5114430_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_722_fu_5089137_p2() {
    add_ln703_722_fu_5089137_p2 = (!zext_ln1118_117_fu_5023552_p1.read().is_01() || !sext_ln1118_223_fu_5029629_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_117_fu_5023552_p1.read()) + sc_bigint<10>(sext_ln1118_223_fu_5029629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_723_fu_5089147_p2() {
    add_ln703_723_fu_5089147_p2 = (!sext_ln708_28_fu_5029679_p1.read().is_01() || !zext_ln1118_115_fu_5023500_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_28_fu_5029679_p1.read()) + sc_biguint<10>(zext_ln1118_115_fu_5023500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_724_fu_5089157_p2() {
    add_ln703_724_fu_5089157_p2 = (!sext_ln703_343_fu_5089153_p1.read().is_01() || !sext_ln703_342_fu_5089143_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_343_fu_5089153_p1.read()) + sc_bigint<11>(sext_ln703_342_fu_5089143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_725_fu_5114448_p2() {
    add_ln703_725_fu_5114448_p2 = (!sext_ln703_344_fu_5114445_p1.read().is_01() || !add_ln703_721_fu_5114439_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_344_fu_5114445_p1.read()) + sc_biguint<14>(add_ln703_721_fu_5114439_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_726_fu_5089163_p2() {
    add_ln703_726_fu_5089163_p2 = (!zext_ln1118_296_fu_5029743_p1.read().is_01() || !sext_ln1118_226_fu_5029791_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_296_fu_5029743_p1.read()) + sc_bigint<12>(sext_ln1118_226_fu_5029791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_727_fu_5114457_p2() {
    add_ln703_727_fu_5114457_p2 = (!sext_ln703_345_fu_5114454_p1.read().is_01() || !add_ln703_725_fu_5114448_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_345_fu_5114454_p1.read()) + sc_biguint<14>(add_ln703_725_fu_5114448_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_728_fu_5089169_p2() {
    add_ln703_728_fu_5089169_p2 = (!sext_ln1116_26_fu_5029881_p1.read().is_01() || !sext_ln1116_27_fu_5029895_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_26_fu_5029881_p1.read()) + sc_bigint<12>(sext_ln1116_27_fu_5029895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_729_fu_5089179_p2() {
    add_ln703_729_fu_5089179_p2 = (!sext_ln703_347_fu_5089175_p1.read().is_01() || !sext_ln708_29_fu_5029811_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_347_fu_5089175_p1.read()) + sc_bigint<13>(sext_ln708_29_fu_5029811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_730_fu_5114470_p2() {
    add_ln703_730_fu_5114470_p2 = (!sext_ln703_348_fu_5114467_p1.read().is_01() || !sext_ln703_346_fu_5114463_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_348_fu_5114467_p1.read()) + sc_bigint<15>(sext_ln703_346_fu_5114463_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_731_fu_5089185_p2() {
    add_ln703_731_fu_5089185_p2 = (!zext_ln1118_300_fu_5029833_p1.read().is_01() || !zext_ln1116_36_fu_5029861_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_300_fu_5029833_p1.read()) + sc_biguint<10>(zext_ln1116_36_fu_5029861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_732_fu_5089195_p2() {
    add_ln703_732_fu_5089195_p2 = (!zext_ln703_58_fu_5089191_p1.read().is_01() || !zext_ln708_128_fu_5029825_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_58_fu_5089191_p1.read()) + sc_biguint<11>(zext_ln708_128_fu_5029825_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_733_fu_5089205_p2() {
    add_ln703_733_fu_5089205_p2 = (!zext_ln1118_69_fu_5022032_p1.read().is_01() || !sext_ln1118_225_fu_5029767_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_69_fu_5022032_p1.read()) + sc_bigint<10>(sext_ln1118_225_fu_5029767_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_734_fu_5089215_p2() {
    add_ln703_734_fu_5089215_p2 = (!sext_ln703_349_fu_5089211_p1.read().is_01() || !zext_ln708_129_fu_5029919_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_349_fu_5089211_p1.read()) + sc_biguint<11>(zext_ln708_129_fu_5029919_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_735_fu_5089225_p2() {
    add_ln703_735_fu_5089225_p2 = (!sext_ln703_350_fu_5089221_p1.read().is_01() || !zext_ln703_59_fu_5089201_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_350_fu_5089221_p1.read()) + sc_biguint<13>(zext_ln703_59_fu_5089201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_736_fu_5114479_p2() {
    add_ln703_736_fu_5114479_p2 = (!sext_ln703_351_fu_5114476_p1.read().is_01() || !add_ln703_730_fu_5114470_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_351_fu_5114476_p1.read()) + sc_biguint<15>(add_ln703_730_fu_5114470_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_737_fu_5089231_p2() {
    add_ln703_737_fu_5089231_p2 = (!sext_ln203_142_fu_5029953_p1.read().is_01() || !sext_ln203_143_fu_5029995_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_142_fu_5029953_p1.read()) + sc_bigint<12>(sext_ln203_143_fu_5029995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_738_fu_5114488_p2() {
    add_ln703_738_fu_5114488_p2 = (!sext_ln703_352_fu_5114485_p1.read().is_01() || !add_ln703_736_fu_5114479_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_352_fu_5114485_p1.read()) + sc_biguint<15>(add_ln703_736_fu_5114479_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_739_fu_5089237_p2() {
    add_ln703_739_fu_5089237_p2 = (!trunc_ln203_4_fu_5030042_p4.read().is_01() || !zext_ln203_43_fu_5030038_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_4_fu_5030042_p4.read()) + sc_biguint<10>(zext_ln203_43_fu_5030038_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_740_fu_5089247_p2() {
    add_ln703_740_fu_5089247_p2 = (!zext_ln703_60_fu_5089243_p1.read().is_01() || !zext_ln708_131_fu_5030019_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_60_fu_5089243_p1.read()) + sc_biguint<11>(zext_ln708_131_fu_5030019_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_742_fu_5089253_p2() {
    add_ln703_742_fu_5089253_p2 = (!zext_ln708_89_fu_5027944_p1.read().is_01() || !ap_const_lv11_5C0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_89_fu_5027944_p1.read()) + sc_bigint<11>(ap_const_lv11_5C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_743_fu_5089259_p2() {
    add_ln703_743_fu_5089259_p2 = (!zext_ln708_134_fu_5030100_p1.read().is_01() || !sext_ln203_144_fu_5030062_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_134_fu_5030100_p1.read()) + sc_bigint<11>(sext_ln203_144_fu_5030062_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_744_fu_5089265_p2() {
    add_ln703_744_fu_5089265_p2 = (!add_ln703_743_fu_5089259_p2.read().is_01() || !zext_ln708_133_fu_5030076_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_743_fu_5089259_p2.read()) + sc_biguint<11>(zext_ln708_133_fu_5030076_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_745_fu_5089271_p2() {
    add_ln703_745_fu_5089271_p2 = (!add_ln703_744_fu_5089265_p2.read().is_01() || !add_ln703_742_fu_5089253_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_744_fu_5089265_p2.read()) + sc_biguint<11>(add_ln703_742_fu_5089253_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_746_fu_5089281_p2() {
    add_ln703_746_fu_5089281_p2 = (!zext_ln708_135_fu_5030134_p1.read().is_01() || !sext_ln708_30_fu_5030120_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_135_fu_5030134_p1.read()) + sc_bigint<11>(sext_ln708_30_fu_5030120_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_747_fu_5089291_p2() {
    add_ln703_747_fu_5089291_p2 = (!sext_ln703_355_fu_5089287_p1.read().is_01() || !sext_ln703_354_fu_5089277_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_355_fu_5089287_p1.read()) + sc_bigint<12>(sext_ln703_354_fu_5089277_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_748_fu_5114510_p2() {
    add_ln703_748_fu_5114510_p2 = (!sext_ln703_356_fu_5114507_p1.read().is_01() || !sext_ln708_32_fu_5113243_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_356_fu_5114507_p1.read()) + sc_bigint<13>(sext_ln708_32_fu_5113243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_749_fu_5089297_p2() {
    add_ln703_749_fu_5089297_p2 = (!zext_ln708_38_fu_5023424_p1.read().is_01() || !sext_ln708_31_fu_5030188_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_38_fu_5023424_p1.read()) + sc_bigint<11>(sext_ln708_31_fu_5030188_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_750_fu_5114519_p2() {
    add_ln703_750_fu_5114519_p2 = (!sext_ln703_357_fu_5114516_p1.read().is_01() || !add_ln703_748_fu_5114510_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_357_fu_5114516_p1.read()) + sc_biguint<13>(add_ln703_748_fu_5114510_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_751_fu_5089303_p2() {
    add_ln703_751_fu_5089303_p2 = (!zext_ln708_137_fu_5030260_p1.read().is_01() || !sext_ln1118_228_fu_5030158_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_137_fu_5030260_p1.read()) + sc_bigint<10>(sext_ln1118_228_fu_5030158_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_752_fu_5089313_p2() {
    add_ln703_752_fu_5089313_p2 = (!zext_ln708_136_fu_5030202_p1.read().is_01() || !zext_ln708_45_fu_5024198_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_136_fu_5030202_p1.read()) + sc_biguint<8>(zext_ln708_45_fu_5024198_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_753_fu_5089323_p2() {
    add_ln703_753_fu_5089323_p2 = (!zext_ln703_62_fu_5089319_p1.read().is_01() || !sext_ln703_359_fu_5089309_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_62_fu_5089319_p1.read()) + sc_bigint<11>(sext_ln703_359_fu_5089309_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_754_fu_5114532_p2() {
    add_ln703_754_fu_5114532_p2 = (!sext_ln703_360_fu_5114529_p1.read().is_01() || !sext_ln703_358_fu_5114525_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_360_fu_5114529_p1.read()) + sc_bigint<14>(sext_ln703_358_fu_5114525_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_755_fu_5089329_p2() {
    add_ln703_755_fu_5089329_p2 = (!sext_ln1118_232_fu_5030388_p1.read().is_01() || !zext_ln708_140_fu_5030370_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_232_fu_5030388_p1.read()) + sc_biguint<12>(zext_ln708_140_fu_5030370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_756_fu_5114541_p2() {
    add_ln703_756_fu_5114541_p2 = (!sext_ln703_361_fu_5114538_p1.read().is_01() || !add_ln703_754_fu_5114532_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_361_fu_5114538_p1.read()) + sc_biguint<14>(add_ln703_754_fu_5114532_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_757_fu_5089335_p2() {
    add_ln703_757_fu_5089335_p2 = (!zext_ln1118_311_fu_5030374_p1.read().is_01() || !zext_ln1118_312_fu_5030408_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_311_fu_5030374_p1.read()) + sc_biguint<10>(zext_ln1118_312_fu_5030408_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_758_fu_5089345_p2() {
    add_ln703_758_fu_5089345_p2 = (!zext_ln708_141_fu_5030428_p1.read().is_01() || !zext_ln708_142_fu_5030442_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_141_fu_5030428_p1.read()) + sc_biguint<11>(zext_ln708_142_fu_5030442_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_759_fu_5089351_p2() {
    add_ln703_759_fu_5089351_p2 = (!add_ln703_758_fu_5089345_p2.read().is_01() || !zext_ln703_63_fu_5089341_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_758_fu_5089345_p2.read()) + sc_biguint<11>(zext_ln703_63_fu_5089341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_760_fu_5114550_p2() {
    add_ln703_760_fu_5114550_p2 = (!zext_ln703_64_fu_5114547_p1.read().is_01() || !add_ln703_756_fu_5114541_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_64_fu_5114547_p1.read()) + sc_biguint<14>(add_ln703_756_fu_5114541_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_761_fu_5089357_p2() {
    add_ln703_761_fu_5089357_p2 = (!sext_ln708_33_fu_5030324_p1.read().is_01() || !zext_ln708_138_fu_5030284_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_33_fu_5030324_p1.read()) + sc_biguint<11>(zext_ln708_138_fu_5030284_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_762_fu_5089367_p2() {
    add_ln703_762_fu_5089367_p2 = (!zext_ln1118_220_fu_5026997_p1.read().is_01() || !sext_ln203_145_fu_5030280_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_220_fu_5026997_p1.read()) + sc_bigint<11>(sext_ln203_145_fu_5030280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_763_fu_5089377_p2() {
    add_ln703_763_fu_5089377_p2 = (!sext_ln703_364_fu_5089373_p1.read().is_01() || !sext_ln703_363_fu_5089363_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_364_fu_5089373_p1.read()) + sc_bigint<12>(sext_ln703_363_fu_5089363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_764_fu_5089387_p2() {
    add_ln703_764_fu_5089387_p2 = (!zext_ln708_13_fu_5021635_p1.read().is_01() || !zext_ln1118_310_fu_5030338_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_13_fu_5021635_p1.read()) + sc_biguint<9>(zext_ln1118_310_fu_5030338_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_765_fu_5089397_p2() {
    add_ln703_765_fu_5089397_p2 = (!sext_ln203_146_fu_5030466_p1.read().is_01() || !sext_ln1118_231_fu_5030304_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_146_fu_5030466_p1.read()) + sc_bigint<8>(sext_ln1118_231_fu_5030304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_766_fu_5089407_p2() {
    add_ln703_766_fu_5089407_p2 = (!sext_ln703_366_fu_5089403_p1.read().is_01() || !zext_ln703_65_fu_5089393_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_366_fu_5089403_p1.read()) + sc_biguint<10>(zext_ln703_65_fu_5089393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_767_fu_5089417_p2() {
    add_ln703_767_fu_5089417_p2 = (!sext_ln703_367_fu_5089413_p1.read().is_01() || !sext_ln703_365_fu_5089383_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_367_fu_5089413_p1.read()) + sc_bigint<13>(sext_ln703_365_fu_5089383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_768_fu_5114563_p2() {
    add_ln703_768_fu_5114563_p2 = (!sext_ln703_368_fu_5114560_p1.read().is_01() || !sext_ln703_362_fu_5114556_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_368_fu_5114560_p1.read()) + sc_bigint<15>(sext_ln703_362_fu_5114556_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_769_fu_5114569_p2() {
    add_ln703_769_fu_5114569_p2 = (!add_ln703_768_fu_5114563_p2.read().is_01() || !zext_ln203_44_fu_5113246_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_768_fu_5114563_p2.read()) + sc_biguint<15>(zext_ln203_44_fu_5113246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_770_fu_5089423_p2() {
    add_ln703_770_fu_5089423_p2 = (!zext_ln708_143_fu_5030504_p1.read().is_01() || !sext_ln203_130_fu_5027856_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_143_fu_5030504_p1.read()) + sc_bigint<11>(sext_ln203_130_fu_5027856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_771_fu_5089433_p2() {
    add_ln703_771_fu_5089433_p2 = (!sext_ln703_369_fu_5089429_p1.read().is_01() || !zext_ln203_45_fu_5030490_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_369_fu_5089429_p1.read()) + sc_biguint<12>(zext_ln203_45_fu_5030490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_773_fu_5089447_p2() {
    add_ln703_773_fu_5089447_p2 = (!or_ln703_2_fu_5089439_p3.read().is_01() || !trunc_ln203_5_fu_5030508_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(or_ln703_2_fu_5089439_p3.read()) + sc_biguint<9>(trunc_ln203_5_fu_5030508_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_774_fu_5089457_p2() {
    add_ln703_774_fu_5089457_p2 = (!sext_ln203_147_fu_5030528_p1.read().is_01() || !sext_ln703_372_fu_5089453_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_147_fu_5030528_p1.read()) + sc_bigint<12>(sext_ln703_372_fu_5089453_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_775_fu_5089467_p2() {
    add_ln703_775_fu_5089467_p2 = (!sext_ln703_373_fu_5089463_p1.read().is_01() || !sext_ln203_148_fu_5030572_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_373_fu_5089463_p1.read()) + sc_bigint<13>(sext_ln203_148_fu_5030572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_776_fu_5089473_p2() {
    add_ln703_776_fu_5089473_p2 = (!zext_ln1118_316_fu_5030596_p1.read().is_01() || !sext_ln1118_233_fu_5030552_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_316_fu_5030596_p1.read()) + sc_bigint<10>(sext_ln1118_233_fu_5030552_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_777_fu_5089483_p2() {
    add_ln703_777_fu_5089483_p2 = (!sext_ln703_374_fu_5089479_p1.read().is_01() || !add_ln703_775_fu_5089467_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_374_fu_5089479_p1.read()) + sc_biguint<13>(add_ln703_775_fu_5089467_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_778_fu_5089489_p2() {
    add_ln703_778_fu_5089489_p2 = (!sext_ln708_20_fu_5026779_p1.read().is_01() || !sext_ln1118_236_fu_5030640_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_20_fu_5026779_p1.read()) + sc_bigint<12>(sext_ln1118_236_fu_5030640_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_779_fu_5114594_p2() {
    add_ln703_779_fu_5114594_p2 = (!sext_ln703_376_fu_5114591_p1.read().is_01() || !sext_ln703_375_fu_5114588_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_376_fu_5114591_p1.read()) + sc_bigint<14>(sext_ln703_375_fu_5114588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_780_fu_5089495_p2() {
    add_ln703_780_fu_5089495_p2 = (!sext_ln1118_235_fu_5030626_p1.read().is_01() || !sext_ln1116_20_fu_5027438_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_235_fu_5030626_p1.read()) + sc_bigint<11>(sext_ln1116_20_fu_5027438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_781_fu_5089501_p2() {
    add_ln703_781_fu_5089501_p2 = (!add_ln703_780_fu_5089495_p2.read().is_01() || !zext_ln708_90_fu_5028032_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_780_fu_5089495_p2.read()) + sc_biguint<11>(zext_ln708_90_fu_5028032_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_782_fu_5114603_p2() {
    add_ln703_782_fu_5114603_p2 = (!sext_ln703_377_fu_5114600_p1.read().is_01() || !add_ln703_779_fu_5114594_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_377_fu_5114600_p1.read()) + sc_biguint<14>(add_ln703_779_fu_5114594_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_783_fu_5089507_p2() {
    add_ln703_783_fu_5089507_p2 = (!sext_ln1118_237_fu_5030644_p1.read().is_01() || !sext_ln1118_239_fu_5030720_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_237_fu_5030644_p1.read()) + sc_bigint<12>(sext_ln1118_239_fu_5030720_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_784_fu_5114612_p2() {
    add_ln703_784_fu_5114612_p2 = (!sext_ln703_378_fu_5114609_p1.read().is_01() || !add_ln703_782_fu_5114603_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_378_fu_5114609_p1.read()) + sc_biguint<14>(add_ln703_782_fu_5114603_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_785_fu_5089513_p2() {
    add_ln703_785_fu_5089513_p2 = (!sext_ln1118_242_fu_5030776_p1.read().is_01() || !zext_ln708_77_fu_5026937_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_242_fu_5030776_p1.read()) + sc_biguint<12>(zext_ln708_77_fu_5026937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_786_fu_5089523_p2() {
    add_ln703_786_fu_5089523_p2 = (!sext_ln703_380_fu_5089519_p1.read().is_01() || !sext_ln1118_240_fu_5030738_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_380_fu_5089519_p1.read()) + sc_bigint<13>(sext_ln1118_240_fu_5030738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_787_fu_5114625_p2() {
    add_ln703_787_fu_5114625_p2 = (!sext_ln703_381_fu_5114622_p1.read().is_01() || !sext_ln703_379_fu_5114618_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_381_fu_5114622_p1.read()) + sc_bigint<15>(sext_ln703_379_fu_5114618_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_788_fu_5089529_p2() {
    add_ln703_788_fu_5089529_p2 = (!sext_ln1118_241_fu_5030752_p1.read().is_01() || !sext_ln708_34_fu_5030658_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_241_fu_5030752_p1.read()) + sc_bigint<11>(sext_ln708_34_fu_5030658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_789_fu_5089539_p2() {
    add_ln703_789_fu_5089539_p2 = (!sext_ln703_382_fu_5089535_p1.read().is_01() || !zext_ln203_46_fu_5030734_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_382_fu_5089535_p1.read()) + sc_biguint<12>(zext_ln203_46_fu_5030734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_790_fu_5089545_p2() {
    add_ln703_790_fu_5089545_p2 = (!zext_ln1118_317_fu_5030672_p1.read().is_01() || !zext_ln1118_298_fu_5029771_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_317_fu_5030672_p1.read()) + sc_biguint<9>(zext_ln1118_298_fu_5029771_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_791_fu_5089555_p2() {
    add_ln703_791_fu_5089555_p2 = (!zext_ln703_66_fu_5089551_p1.read().is_01() || !sext_ln1118_238_fu_5030696_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_66_fu_5089551_p1.read()) + sc_bigint<10>(sext_ln1118_238_fu_5030696_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_792_fu_5089565_p2() {
    add_ln703_792_fu_5089565_p2 = (!sext_ln703_383_fu_5089561_p1.read().is_01() || !add_ln703_789_fu_5089539_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_383_fu_5089561_p1.read()) + sc_biguint<12>(add_ln703_789_fu_5089539_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_793_fu_5114634_p2() {
    add_ln703_793_fu_5114634_p2 = (!sext_ln703_384_fu_5114631_p1.read().is_01() || !add_ln703_787_fu_5114625_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_384_fu_5114631_p1.read()) + sc_biguint<15>(add_ln703_787_fu_5114625_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_794_fu_5114640_p2() {
    add_ln703_794_fu_5114640_p2 = (!add_ln703_793_fu_5114634_p2.read().is_01() || !sext_ln203_151_fu_5113249_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_793_fu_5114634_p2.read()) + sc_bigint<15>(sext_ln203_151_fu_5113249_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_795_fu_5089571_p2() {
    add_ln703_795_fu_5089571_p2 = (!sext_ln203_154_fu_5030900_p1.read().is_01() || !zext_ln203_47_fu_5030886_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_154_fu_5030900_p1.read()) + sc_biguint<12>(zext_ln203_47_fu_5030886_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_796_fu_5089581_p2() {
    add_ln703_796_fu_5089581_p2 = (!sext_ln703_385_fu_5089577_p1.read().is_01() || !sext_ln203_153_fu_5030872_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_385_fu_5089577_p1.read()) + sc_bigint<13>(sext_ln203_153_fu_5030872_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_797_fu_5114649_p2() {
    add_ln703_797_fu_5114649_p2 = (!sext_ln703_386_fu_5114646_p1.read().is_01() || !add_ln703_794_fu_5114640_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_386_fu_5114646_p1.read()) + sc_biguint<15>(add_ln703_794_fu_5114640_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_798_fu_5089587_p2() {
    add_ln703_798_fu_5089587_p2 = (!sext_ln203_152_fu_5030868_p1.read().is_01() || !zext_ln203_48_fu_5030904_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_152_fu_5030868_p1.read()) + sc_biguint<11>(zext_ln203_48_fu_5030904_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_799_fu_5089597_p2() {
    add_ln703_799_fu_5089597_p2 = (!sext_ln703_388_fu_5089593_p1.read().is_01() || !sext_ln203_149_fu_5030800_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_388_fu_5089593_p1.read()) + sc_bigint<12>(sext_ln203_149_fu_5030800_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_800_fu_5089603_p2() {
    add_ln703_800_fu_5089603_p2 = (!zext_ln708_144_fu_5030814_p1.read().is_01() || !zext_ln708_87_fu_5027892_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_144_fu_5030814_p1.read()) + sc_biguint<8>(zext_ln708_87_fu_5027892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_801_fu_5089613_p2() {
    add_ln703_801_fu_5089613_p2 = (!zext_ln703_67_fu_5089609_p1.read().is_01() || !sext_ln203_150_fu_5030818_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_67_fu_5089609_p1.read()) + sc_bigint<10>(sext_ln203_150_fu_5030818_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_802_fu_5089623_p2() {
    add_ln703_802_fu_5089623_p2 = (!sext_ln703_389_fu_5089619_p1.read().is_01() || !add_ln703_799_fu_5089597_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_389_fu_5089619_p1.read()) + sc_biguint<12>(add_ln703_799_fu_5089597_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_804_fu_5089629_p2() {
    add_ln703_804_fu_5089629_p2 = (!sext_ln203_155_fu_5030936_p1.read().is_01() || !ap_const_lv12_EC0.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_155_fu_5030936_p1.read()) + sc_bigint<12>(ap_const_lv12_EC0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_805_fu_5089639_p2() {
    add_ln703_805_fu_5089639_p2 = (!sext_ln1118_244_fu_5030968_p1.read().is_01() || !zext_ln1118_326_fu_5031058_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_244_fu_5030968_p1.read()) + sc_biguint<12>(zext_ln1118_326_fu_5031058_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_806_fu_5089649_p2() {
    add_ln703_806_fu_5089649_p2 = (!sext_ln703_392_fu_5089645_p1.read().is_01() || !sext_ln703_391_fu_5089635_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_392_fu_5089645_p1.read()) + sc_bigint<13>(sext_ln703_391_fu_5089635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_807_fu_5089655_p2() {
    add_ln703_807_fu_5089655_p2 = (!sext_ln708_35_fu_5031000_p1.read().is_01() || !zext_ln708_145_fu_5031014_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_35_fu_5031000_p1.read()) + sc_biguint<9>(zext_ln708_145_fu_5031014_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_808_fu_5089665_p2() {
    add_ln703_808_fu_5089665_p2 = (!sext_ln703_393_fu_5089661_p1.read().is_01() || !zext_ln708_146_fu_5031034_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_393_fu_5089661_p1.read()) + sc_biguint<10>(zext_ln708_146_fu_5031034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_809_fu_5089675_p2() {
    add_ln703_809_fu_5089675_p2 = (!sext_ln703_394_fu_5089671_p1.read().is_01() || !add_ln703_806_fu_5089649_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_394_fu_5089671_p1.read()) + sc_biguint<13>(add_ln703_806_fu_5089649_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_810_fu_5089681_p2() {
    add_ln703_810_fu_5089681_p2 = (!add_ln703_809_fu_5089675_p2.read().is_01() || !sext_ln708_36_fu_5031072_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_809_fu_5089675_p2.read()) + sc_bigint<13>(sext_ln708_36_fu_5031072_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_811_fu_5089691_p2() {
    add_ln703_811_fu_5089691_p2 = (!zext_ln1118_113_fu_5023396_p1.read().is_01() || !sext_ln708_37_fu_5031092_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_113_fu_5023396_p1.read()) + sc_bigint<12>(sext_ln708_37_fu_5031092_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_812_fu_5089701_p2() {
    add_ln703_812_fu_5089701_p2 = (!sext_ln703_396_fu_5089697_p1.read().is_01() || !zext_ln708_36_fu_5023364_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_396_fu_5089697_p1.read()) + sc_biguint<13>(zext_ln708_36_fu_5023364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_813_fu_5089711_p2() {
    add_ln703_813_fu_5089711_p2 = (!sext_ln703_397_fu_5089707_p1.read().is_01() || !sext_ln703_395_fu_5089687_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_397_fu_5089707_p1.read()) + sc_bigint<14>(sext_ln703_395_fu_5089687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_814_fu_5089717_p2() {
    add_ln703_814_fu_5089717_p2 = (!zext_ln1118_327_fu_5031116_p1.read().is_01() || !sext_ln203_156_fu_5031200_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_327_fu_5031116_p1.read()) + sc_bigint<12>(sext_ln203_156_fu_5031200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_815_fu_5114674_p2() {
    add_ln703_815_fu_5114674_p2 = (!sext_ln703_399_fu_5114671_p1.read().is_01() || !sext_ln703_398_fu_5114668_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_399_fu_5114671_p1.read()) + sc_bigint<15>(sext_ln703_398_fu_5114668_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_816_fu_5089723_p2() {
    add_ln703_816_fu_5089723_p2 = (!zext_ln708_150_fu_5031224_p1.read().is_01() || !zext_ln708_151_fu_5031244_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_150_fu_5031224_p1.read()) + sc_biguint<11>(zext_ln708_151_fu_5031244_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_817_fu_5089733_p2() {
    add_ln703_817_fu_5089733_p2 = (!zext_ln703_68_fu_5089729_p1.read().is_01() || !zext_ln1118_328_fu_5031170_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_68_fu_5089729_p1.read()) + sc_biguint<12>(zext_ln1118_328_fu_5031170_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_818_fu_5114683_p2() {
    add_ln703_818_fu_5114683_p2 = (!zext_ln703_69_fu_5114680_p1.read().is_01() || !add_ln703_815_fu_5114674_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_69_fu_5114680_p1.read()) + sc_biguint<15>(add_ln703_815_fu_5114674_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_819_fu_5089739_p2() {
    add_ln703_819_fu_5089739_p2 = (!sext_ln1118_196_fu_5027608_p1.read().is_01() || !zext_ln1118_329_fu_5031278_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_196_fu_5027608_p1.read()) + sc_biguint<11>(zext_ln1118_329_fu_5031278_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_820_fu_5089749_p2() {
    add_ln703_820_fu_5089749_p2 = (!sext_ln703_400_fu_5089745_p1.read().is_01() || !zext_ln1118_245_fu_5027707_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_400_fu_5089745_p1.read()) + sc_biguint<12>(zext_ln1118_245_fu_5027707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_821_fu_5089755_p2() {
    add_ln703_821_fu_5089755_p2 = (!sext_ln708_38_fu_5031136_p1.read().is_01() || !sext_ln708_39_fu_5031204_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_38_fu_5031136_p1.read()) + sc_bigint<10>(sext_ln708_39_fu_5031204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_822_fu_5089761_p2() {
    add_ln703_822_fu_5089761_p2 = (!zext_ln708_149_fu_5031150_p1.read().is_01() || !zext_ln708_152_fu_5031258_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln708_149_fu_5031150_p1.read()) + sc_biguint<7>(zext_ln708_152_fu_5031258_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_823_fu_5089771_p2() {
    add_ln703_823_fu_5089771_p2 = (!zext_ln703_70_fu_5089767_p1.read().is_01() || !add_ln703_821_fu_5089755_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_70_fu_5089767_p1.read()) + sc_biguint<10>(add_ln703_821_fu_5089755_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_824_fu_5089781_p2() {
    add_ln703_824_fu_5089781_p2 = (!sext_ln703_401_fu_5089777_p1.read().is_01() || !add_ln703_820_fu_5089749_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_401_fu_5089777_p1.read()) + sc_biguint<12>(add_ln703_820_fu_5089749_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_825_fu_5114692_p2() {
    add_ln703_825_fu_5114692_p2 = (!sext_ln703_402_fu_5114689_p1.read().is_01() || !add_ln703_818_fu_5114683_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_402_fu_5114689_p1.read()) + sc_biguint<15>(add_ln703_818_fu_5114683_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_826_fu_5114698_p2() {
    add_ln703_826_fu_5114698_p2 = (!add_ln703_825_fu_5114692_p2.read().is_01() || !sext_ln203_159_fu_5113252_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_825_fu_5114692_p2.read()) + sc_bigint<15>(sext_ln203_159_fu_5113252_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_827_fu_5089787_p2() {
    add_ln703_827_fu_5089787_p2 = (!zext_ln203_50_fu_5031358_p1.read().is_01() || !sext_ln203_157_fu_5031282_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_50_fu_5031358_p1.read()) + sc_bigint<12>(sext_ln203_157_fu_5031282_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_828_fu_5089793_p2() {
    add_ln703_828_fu_5089793_p2 = (!add_ln703_827_fu_5089787_p2.read().is_01() || !zext_ln203_49_fu_5031306_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_827_fu_5089787_p2.read()) + sc_biguint<12>(zext_ln203_49_fu_5031306_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_829_fu_5114707_p2() {
    add_ln703_829_fu_5114707_p2 = (!sext_ln703_403_fu_5114704_p1.read().is_01() || !add_ln703_826_fu_5114698_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_403_fu_5114704_p1.read()) + sc_biguint<15>(add_ln703_826_fu_5114698_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_830_fu_5089799_p2() {
    add_ln703_830_fu_5089799_p2 = (!sext_ln203_83_fu_5022982_p1.read().is_01() || !sext_ln203_158_fu_5031310_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_83_fu_5022982_p1.read()) + sc_bigint<11>(sext_ln203_158_fu_5031310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_831_fu_5089809_p2() {
    add_ln703_831_fu_5089809_p2 = (!zext_ln708_154_fu_5031324_p1.read().is_01() || !zext_ln708_87_fu_5027892_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_154_fu_5031324_p1.read()) + sc_biguint<8>(zext_ln708_87_fu_5027892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_832_fu_5089819_p2() {
    add_ln703_832_fu_5089819_p2 = (!zext_ln703_71_fu_5089815_p1.read().is_01() || !sext_ln203_160_fu_5031378_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_71_fu_5089815_p1.read()) + sc_bigint<10>(sext_ln203_160_fu_5031378_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_833_fu_5089829_p2() {
    add_ln703_833_fu_5089829_p2 = (!sext_ln703_405_fu_5089825_p1.read().is_01() || !sext_ln703_404_fu_5089805_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_405_fu_5089825_p1.read()) + sc_bigint<12>(sext_ln703_404_fu_5089805_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_835_fu_5089845_p2() {
    add_ln703_835_fu_5089845_p2 = (!zext_ln708_156_fu_5031402_p1.read().is_01() || !sext_ln703_408_fu_5089841_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_156_fu_5031402_p1.read()) + sc_bigint<11>(sext_ln703_408_fu_5089841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_836_fu_5089855_p2() {
    add_ln703_836_fu_5089855_p2 = (!sext_ln703_409_fu_5089851_p1.read().is_01() || !sext_ln203_161_fu_5031426_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_409_fu_5089851_p1.read()) + sc_bigint<12>(sext_ln203_161_fu_5031426_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_837_fu_5089865_p2() {
    add_ln703_837_fu_5089865_p2 = (!sext_ln1116_28_fu_5031450_p1.read().is_01() || !zext_ln1118_331_fu_5031464_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_28_fu_5031450_p1.read()) + sc_biguint<12>(zext_ln1118_331_fu_5031464_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_838_fu_5089875_p2() {
    add_ln703_838_fu_5089875_p2 = (!sext_ln703_411_fu_5089871_p1.read().is_01() || !sext_ln703_410_fu_5089861_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_411_fu_5089871_p1.read()) + sc_bigint<13>(sext_ln703_410_fu_5089861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_839_fu_5089881_p2() {
    add_ln703_839_fu_5089881_p2 = (!sext_ln1118_246_fu_5031560_p1.read().is_01() || !zext_ln1116_39_fu_5031512_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_246_fu_5031560_p1.read()) + sc_biguint<12>(zext_ln1116_39_fu_5031512_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_840_fu_5114732_p2() {
    add_ln703_840_fu_5114732_p2 = (!sext_ln703_413_fu_5114729_p1.read().is_01() || !sext_ln703_412_fu_5114726_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_413_fu_5114729_p1.read()) + sc_bigint<14>(sext_ln703_412_fu_5114726_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_841_fu_5089887_p2() {
    add_ln703_841_fu_5089887_p2 = (!zext_ln708_158_fu_5031526_p1.read().is_01() || !zext_ln708_159_fu_5031546_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_158_fu_5031526_p1.read()) + sc_biguint<11>(zext_ln708_159_fu_5031546_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_842_fu_5089897_p2() {
    add_ln703_842_fu_5089897_p2 = (!zext_ln708_57_fu_5025653_p1.read().is_01() || !sext_ln708_40_fu_5031488_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_57_fu_5025653_p1.read()) + sc_bigint<11>(sext_ln708_40_fu_5031488_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_843_fu_5089907_p2() {
    add_ln703_843_fu_5089907_p2 = (!sext_ln703_414_fu_5089903_p1.read().is_01() || !zext_ln703_72_fu_5089893_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_414_fu_5089903_p1.read()) + sc_biguint<12>(zext_ln703_72_fu_5089893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_844_fu_5114741_p2() {
    add_ln703_844_fu_5114741_p2 = (!sext_ln703_415_fu_5114738_p1.read().is_01() || !add_ln703_840_fu_5114732_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_415_fu_5114738_p1.read()) + sc_biguint<14>(add_ln703_840_fu_5114732_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_845_fu_5089913_p2() {
    add_ln703_845_fu_5089913_p2 = (!sext_ln1118_226_fu_5029791_p1.read().is_01() || !sext_ln708_43_fu_5031737_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_226_fu_5029791_p1.read()) + sc_bigint<12>(sext_ln708_43_fu_5031737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_846_fu_5114754_p2() {
    add_ln703_846_fu_5114754_p2 = (!sext_ln703_417_fu_5114751_p1.read().is_01() || !sext_ln703_416_fu_5114747_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_417_fu_5114751_p1.read()) + sc_bigint<15>(sext_ln703_416_fu_5114747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_847_fu_5089919_p2() {
    add_ln703_847_fu_5089919_p2 = (!trunc_ln1118_2_fu_5031597_p4.read().is_01() || !zext_ln1116_42_fu_5031651_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_2_fu_5031597_p4.read()) + sc_biguint<10>(zext_ln1116_42_fu_5031651_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_848_fu_5089929_p2() {
    add_ln703_848_fu_5089929_p2 = (!zext_ln703_73_fu_5089925_p1.read().is_01() || !zext_ln708_111_fu_5029146_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_73_fu_5089925_p1.read()) + sc_biguint<11>(zext_ln708_111_fu_5029146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_849_fu_5114763_p2() {
    add_ln703_849_fu_5114763_p2 = (!zext_ln703_74_fu_5114760_p1.read().is_01() || !add_ln703_846_fu_5114754_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_74_fu_5114760_p1.read()) + sc_biguint<15>(add_ln703_846_fu_5114754_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_850_fu_5089935_p2() {
    add_ln703_850_fu_5089935_p2 = (!sext_ln1118_247_fu_5031574_p1.read().is_01() || !sext_ln708_41_fu_5031588_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_247_fu_5031574_p1.read()) + sc_bigint<11>(sext_ln708_41_fu_5031588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_851_fu_5089945_p2() {
    add_ln703_851_fu_5089945_p2 = (!sext_ln703_418_fu_5089941_p1.read().is_01() || !zext_ln1116_43_fu_5031713_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_418_fu_5089941_p1.read()) + sc_biguint<12>(zext_ln1116_43_fu_5031713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_852_fu_5089955_p2() {
    add_ln703_852_fu_5089955_p2 = (!sext_ln1118_251_fu_5031767_p1.read().is_01() || !sext_ln708_42_fu_5031685_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_251_fu_5031767_p1.read()) + sc_bigint<11>(sext_ln708_42_fu_5031685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_853_fu_5089965_p2() {
    add_ln703_853_fu_5089965_p2 = (!sext_ln703_420_fu_5089961_p1.read().is_01() || !sext_ln1118_248_fu_5031627_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_420_fu_5089961_p1.read()) + sc_bigint<12>(sext_ln1118_248_fu_5031627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_854_fu_5089975_p2() {
    add_ln703_854_fu_5089975_p2 = (!sext_ln703_421_fu_5089971_p1.read().is_01() || !sext_ln703_419_fu_5089951_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_421_fu_5089971_p1.read()) + sc_bigint<13>(sext_ln703_419_fu_5089951_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_855_fu_5114772_p2() {
    add_ln703_855_fu_5114772_p2 = (!sext_ln703_422_fu_5114769_p1.read().is_01() || !add_ln703_849_fu_5114763_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_422_fu_5114769_p1.read()) + sc_biguint<15>(add_ln703_849_fu_5114763_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_856_fu_5114778_p2() {
    add_ln703_856_fu_5114778_p2 = (!add_ln703_855_fu_5114772_p2.read().is_01() || !sext_ln203_164_fu_5113255_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_855_fu_5114772_p2.read()) + sc_bigint<15>(sext_ln203_164_fu_5113255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_857_fu_5089981_p2() {
    add_ln703_857_fu_5089981_p2 = (!sext_ln203_169_fu_5031917_p1.read().is_01() || !zext_ln203_49_fu_5031306_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_169_fu_5031917_p1.read()) + sc_biguint<12>(zext_ln203_49_fu_5031306_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_858_fu_5089991_p2() {
    add_ln703_858_fu_5089991_p2 = (!sext_ln703_423_fu_5089987_p1.read().is_01() || !sext_ln203_168_fu_5031897_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_423_fu_5089987_p1.read()) + sc_bigint<13>(sext_ln203_168_fu_5031897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_859_fu_5114787_p2() {
    add_ln703_859_fu_5114787_p2 = (!sext_ln703_424_fu_5114784_p1.read().is_01() || !add_ln703_856_fu_5114778_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_424_fu_5114784_p1.read()) + sc_biguint<15>(add_ln703_856_fu_5114778_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_860_fu_5089997_p2() {
    add_ln703_860_fu_5089997_p2 = (!zext_ln203_51_fu_5031954_p1.read().is_01() || !zext_ln203_52_fu_5031958_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_51_fu_5031954_p1.read()) + sc_biguint<10>(zext_ln203_52_fu_5031958_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_861_fu_5090007_p2() {
    add_ln703_861_fu_5090007_p2 = (!sext_ln203_165_fu_5031841_p1.read().is_01() || !sext_ln203_166_fu_5031855_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_165_fu_5031841_p1.read()) + sc_bigint<10>(sext_ln203_166_fu_5031855_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_862_fu_5090017_p2() {
    add_ln703_862_fu_5090017_p2 = (!sext_ln703_426_fu_5090013_p1.read().is_01() || !sext_ln203_163_fu_5031809_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_426_fu_5090013_p1.read()) + sc_bigint<11>(sext_ln203_163_fu_5031809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_863_fu_5090027_p2() {
    add_ln703_863_fu_5090027_p2 = (!sext_ln703_427_fu_5090023_p1.read().is_01() || !zext_ln703_75_fu_5090003_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_427_fu_5090023_p1.read()) + sc_biguint<12>(zext_ln703_75_fu_5090003_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_865_fu_5090033_p2() {
    add_ln703_865_fu_5090033_p2 = (!sext_ln1118_254_fu_5031962_p1.read().is_01() || !ap_const_lv10_20.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_254_fu_5031962_p1.read()) + sc_biguint<10>(ap_const_lv10_20));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_866_fu_5090043_p2() {
    add_ln703_866_fu_5090043_p2 = (!zext_ln1118_343_fu_5031998_p1.read().is_01() || !zext_ln708_161_fu_5032018_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_343_fu_5031998_p1.read()) + sc_biguint<9>(zext_ln708_161_fu_5032018_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_867_fu_5090053_p2() {
    add_ln703_867_fu_5090053_p2 = (!zext_ln703_76_fu_5090049_p1.read().is_01() || !sext_ln703_429_fu_5090039_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_76_fu_5090049_p1.read()) + sc_bigint<11>(sext_ln703_429_fu_5090039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_868_fu_5090063_p2() {
    add_ln703_868_fu_5090063_p2 = (!zext_ln1118_344_fu_5032022_p1.read().is_01() || !sext_ln1118_256_fu_5031970_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_344_fu_5032022_p1.read()) + sc_bigint<9>(sext_ln1118_256_fu_5031970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_869_fu_5090073_p2() {
    add_ln703_869_fu_5090073_p2 = (!sext_ln703_431_fu_5090069_p1.read().is_01() || !sext_ln1118_258_fu_5031994_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_431_fu_5090069_p1.read()) + sc_bigint<11>(sext_ln1118_258_fu_5031994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_870_fu_5090083_p2() {
    add_ln703_870_fu_5090083_p2 = (!sext_ln703_432_fu_5090079_p1.read().is_01() || !sext_ln703_430_fu_5090059_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_432_fu_5090079_p1.read()) + sc_bigint<12>(sext_ln703_430_fu_5090059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_871_fu_5090093_p2() {
    add_ln703_871_fu_5090093_p2 = (!sext_ln703_433_fu_5090089_p1.read().is_01() || !sext_ln708_44_fu_5032056_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_433_fu_5090089_p1.read()) + sc_bigint<13>(sext_ln708_44_fu_5032056_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_872_fu_5090099_p2() {
    add_ln703_872_fu_5090099_p2 = (!zext_ln708_162_fu_5032070_p1.read().is_01() || !sext_ln1118_259_fu_5032036_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_162_fu_5032070_p1.read()) + sc_bigint<12>(sext_ln1118_259_fu_5032036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_873_fu_5090109_p2() {
    add_ln703_873_fu_5090109_p2 = (!sext_ln703_434_fu_5090105_p1.read().is_01() || !add_ln703_871_fu_5090093_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_434_fu_5090105_p1.read()) + sc_biguint<13>(add_ln703_871_fu_5090093_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_874_fu_5090115_p2() {
    add_ln703_874_fu_5090115_p2 = (!sext_ln708_6_fu_5023332_p1.read().is_01() || !zext_ln708_163_fu_5032074_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_6_fu_5023332_p1.read()) + sc_biguint<10>(zext_ln708_163_fu_5032074_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_875_fu_5090125_p2() {
    add_ln703_875_fu_5090125_p2 = (!zext_ln708_45_fu_5024198_p1.read().is_01() || !zext_ln708_165_fu_5032102_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_45_fu_5024198_p1.read()) + sc_biguint<8>(zext_ln708_165_fu_5032102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_876_fu_5090131_p2() {
    add_ln703_876_fu_5090131_p2 = (!add_ln703_875_fu_5090125_p2.read().is_01() || !zext_ln708_164_fu_5032088_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln703_875_fu_5090125_p2.read()) + sc_biguint<8>(zext_ln708_164_fu_5032088_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_877_fu_5090141_p2() {
    add_ln703_877_fu_5090141_p2 = (!zext_ln703_77_fu_5090137_p1.read().is_01() || !sext_ln703_436_fu_5090121_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_77_fu_5090137_p1.read()) + sc_bigint<11>(sext_ln703_436_fu_5090121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_878_fu_5114812_p2() {
    add_ln703_878_fu_5114812_p2 = (!sext_ln703_437_fu_5114809_p1.read().is_01() || !sext_ln703_435_fu_5114806_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_437_fu_5114809_p1.read()) + sc_bigint<14>(sext_ln703_435_fu_5114806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_879_fu_5090147_p2() {
    add_ln703_879_fu_5090147_p2 = (!sext_ln1118_261_fu_5032148_p1.read().is_01() || !zext_ln1118_346_fu_5032162_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_261_fu_5032148_p1.read()) + sc_biguint<12>(zext_ln1118_346_fu_5032162_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_880_fu_5114821_p2() {
    add_ln703_880_fu_5114821_p2 = (!sext_ln703_438_fu_5114818_p1.read().is_01() || !add_ln703_878_fu_5114812_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_438_fu_5114818_p1.read()) + sc_biguint<14>(add_ln703_878_fu_5114812_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_881_fu_5090153_p2() {
    add_ln703_881_fu_5090153_p2 = (!zext_ln708_166_fu_5032228_p1.read().is_01() || !zext_ln708_167_fu_5032242_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_166_fu_5032228_p1.read()) + sc_biguint<11>(zext_ln708_167_fu_5032242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_882_fu_5090159_p2() {
    add_ln703_882_fu_5090159_p2 = (!add_ln703_881_fu_5090153_p2.read().is_01() || !zext_ln708_41_fu_5023754_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_881_fu_5090153_p2.read()) + sc_biguint<11>(zext_ln708_41_fu_5023754_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_883_fu_5114830_p2() {
    add_ln703_883_fu_5114830_p2 = (!zext_ln703_78_fu_5114827_p1.read().is_01() || !add_ln703_880_fu_5114821_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_78_fu_5114827_p1.read()) + sc_biguint<14>(add_ln703_880_fu_5114821_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_884_fu_5090165_p2() {
    add_ln703_884_fu_5090165_p2 = (!sext_ln703_275_fu_5088365_p1.read().is_01() || !zext_ln1118_350_fu_5032262_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_275_fu_5088365_p1.read()) + sc_biguint<12>(zext_ln1118_350_fu_5032262_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_885_fu_5090175_p2() {
    add_ln703_885_fu_5090175_p2 = (!sext_ln1118_264_fu_5032204_p1.read().is_01() || !sext_ln1118_262_fu_5032166_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_264_fu_5032204_p1.read()) + sc_bigint<10>(sext_ln1118_262_fu_5032166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_886_fu_5090185_p2() {
    add_ln703_886_fu_5090185_p2 = (!sext_ln703_441_fu_5090181_p1.read().is_01() || !sext_ln1118_260_fu_5032116_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_441_fu_5090181_p1.read()) + sc_bigint<11>(sext_ln1118_260_fu_5032116_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_887_fu_5090195_p2() {
    add_ln703_887_fu_5090195_p2 = (!sext_ln703_442_fu_5090191_p1.read().is_01() || !sext_ln703_440_fu_5090171_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_442_fu_5090191_p1.read()) + sc_bigint<13>(sext_ln703_440_fu_5090171_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_888_fu_5114843_p2() {
    add_ln703_888_fu_5114843_p2 = (!sext_ln703_443_fu_5114840_p1.read().is_01() || !sext_ln703_439_fu_5114836_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_443_fu_5114840_p1.read()) + sc_bigint<15>(sext_ln703_439_fu_5114836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_889_fu_5090201_p2() {
    add_ln703_889_fu_5090201_p2 = (!zext_ln203_53_fu_5032282_p1.read().is_01() || !sext_ln203_170_fu_5032328_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_53_fu_5032282_p1.read()) + sc_bigint<12>(sext_ln203_170_fu_5032328_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_890_fu_5114852_p2() {
    add_ln703_890_fu_5114852_p2 = (!sext_ln703_444_fu_5114849_p1.read().is_01() || !add_ln703_888_fu_5114843_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_444_fu_5114849_p1.read()) + sc_biguint<15>(add_ln703_888_fu_5114843_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_891_fu_5090207_p2() {
    add_ln703_891_fu_5090207_p2 = (!sext_ln203_172_fu_5032356_p1.read().is_01() || !zext_ln203_54_fu_5032286_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_172_fu_5032356_p1.read()) + sc_biguint<12>(zext_ln203_54_fu_5032286_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_892_fu_5090217_p2() {
    add_ln703_892_fu_5090217_p2 = (!zext_ln708_168_fu_5032300_p1.read().is_01() || !zext_ln708_169_fu_5032314_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_168_fu_5032300_p1.read()) + sc_biguint<11>(zext_ln708_169_fu_5032314_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_893_fu_5090227_p2() {
    add_ln703_893_fu_5090227_p2 = (!zext_ln703_79_fu_5090223_p1.read().is_01() || !sext_ln703_445_fu_5090213_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_79_fu_5090223_p1.read()) + sc_bigint<13>(sext_ln703_445_fu_5090213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_895_fu_5090233_p2() {
    add_ln703_895_fu_5090233_p2 = (!zext_ln708_54_fu_5025453_p1.read().is_01() || !ap_const_lv10_2C0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_54_fu_5025453_p1.read()) + sc_bigint<10>(ap_const_lv10_2C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_896_fu_5090243_p2() {
    add_ln703_896_fu_5090243_p2 = (!sext_ln703_448_fu_5090239_p1.read().is_01() || !sext_ln1118_265_fu_5032376_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_448_fu_5090239_p1.read()) + sc_bigint<11>(sext_ln1118_265_fu_5032376_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_897_fu_5090253_p2() {
    add_ln703_897_fu_5090253_p2 = (!sext_ln703_449_fu_5090249_p1.read().is_01() || !sext_ln1118_267_fu_5032440_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_449_fu_5090249_p1.read()) + sc_bigint<12>(sext_ln1118_267_fu_5032440_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_898_fu_5090263_p2() {
    add_ln703_898_fu_5090263_p2 = (!zext_ln708_171_fu_5032408_p1.read().is_01() || !sext_ln1118_266_fu_5032380_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_171_fu_5032408_p1.read()) + sc_bigint<11>(sext_ln1118_266_fu_5032380_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_899_fu_5090273_p2() {
    add_ln703_899_fu_5090273_p2 = (!sext_ln703_451_fu_5090269_p1.read().is_01() || !zext_ln1118_352_fu_5032404_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_451_fu_5090269_p1.read()) + sc_biguint<12>(zext_ln1118_352_fu_5032404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_900_fu_5090283_p2() {
    add_ln703_900_fu_5090283_p2 = (!sext_ln703_452_fu_5090279_p1.read().is_01() || !sext_ln703_450_fu_5090259_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_452_fu_5090279_p1.read()) + sc_bigint<13>(sext_ln703_450_fu_5090259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_901_fu_5090289_p2() {
    add_ln703_901_fu_5090289_p2 = (!zext_ln708_172_fu_5032538_p1.read().is_01() || !sext_ln1118_271_fu_5032518_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_172_fu_5032538_p1.read()) + sc_bigint<11>(sext_ln1118_271_fu_5032518_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_902_fu_5114874_p2() {
    add_ln703_902_fu_5114874_p2 = (!sext_ln703_453_fu_5114871_p1.read().is_01() || !add_ln703_900_reg_5123797.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_453_fu_5114871_p1.read()) + sc_biguint<13>(add_ln703_900_reg_5123797.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_903_fu_5090295_p2() {
    add_ln703_903_fu_5090295_p2 = (!sext_ln1118_269_fu_5032474_p1.read().is_01() || !sext_ln1118_270_fu_5032494_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_269_fu_5032474_p1.read()) + sc_bigint<10>(sext_ln1118_270_fu_5032494_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_904_fu_5090305_p2() {
    add_ln703_904_fu_5090305_p2 = (!sext_ln703_454_fu_5090301_p1.read().is_01() || !sext_ln1118_273_fu_5032572_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_454_fu_5090301_p1.read()) + sc_bigint<11>(sext_ln1118_273_fu_5032572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_905_fu_5114882_p2() {
    add_ln703_905_fu_5114882_p2 = (!sext_ln703_455_fu_5114879_p1.read().is_01() || !add_ln703_902_fu_5114874_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_455_fu_5114879_p1.read()) + sc_biguint<13>(add_ln703_902_fu_5114874_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_906_fu_5090311_p2() {
    add_ln703_906_fu_5090311_p2 = (!sext_ln1118_274_fu_5032596_p1.read().is_01() || !sext_ln1118_275_fu_5032662_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_274_fu_5032596_p1.read()) + sc_bigint<12>(sext_ln1118_275_fu_5032662_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_907_fu_5114895_p2() {
    add_ln703_907_fu_5114895_p2 = (!sext_ln703_457_fu_5114892_p1.read().is_01() || !sext_ln703_456_fu_5114888_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_457_fu_5114892_p1.read()) + sc_bigint<14>(sext_ln703_456_fu_5114888_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_908_fu_5090317_p2() {
    add_ln703_908_fu_5090317_p2 = (!sext_ln708_46_fu_5032748_p1.read().is_01() || !zext_ln1118_359_fu_5032648_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_46_fu_5032748_p1.read()) + sc_biguint<12>(zext_ln1118_359_fu_5032648_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_909_fu_5090327_p2() {
    add_ln703_909_fu_5090327_p2 = (!sext_ln703_459_fu_5090323_p1.read().is_01() || !sext_ln1118_278_fu_5032734_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_459_fu_5090323_p1.read()) + sc_bigint<13>(sext_ln1118_278_fu_5032734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_910_fu_5114908_p2() {
    add_ln703_910_fu_5114908_p2 = (!sext_ln703_460_fu_5114905_p1.read().is_01() || !sext_ln703_458_fu_5114901_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_460_fu_5114905_p1.read()) + sc_bigint<15>(sext_ln703_458_fu_5114901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_911_fu_5090333_p2() {
    add_ln703_911_fu_5090333_p2 = (!zext_ln708_173_fu_5032768_p1.read().is_01() || !sext_ln1118_276_fu_5032682_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_173_fu_5032768_p1.read()) + sc_bigint<10>(sext_ln1118_276_fu_5032682_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_912_fu_5090339_p2() {
    add_ln703_912_fu_5090339_p2 = (!add_ln703_911_fu_5090333_p2.read().is_01() || !zext_ln708_137_fu_5030260_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_911_fu_5090333_p2.read()) + sc_biguint<10>(zext_ln708_137_fu_5030260_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_913_fu_5090349_p2() {
    add_ln703_913_fu_5090349_p2 = (!sext_ln708_45_fu_5032620_p1.read().is_01() || !sext_ln1118_277_fu_5032702_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_45_fu_5032620_p1.read()) + sc_bigint<8>(sext_ln1118_277_fu_5032702_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_914_fu_5090355_p2() {
    add_ln703_914_fu_5090355_p2 = (!add_ln703_913_fu_5090349_p2.read().is_01() || !zext_ln708_174_fu_5032782_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln703_913_fu_5090349_p2.read()) + sc_biguint<8>(zext_ln708_174_fu_5032782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_915_fu_5090365_p2() {
    add_ln703_915_fu_5090365_p2 = (!sext_ln703_462_fu_5090361_p1.read().is_01() || !sext_ln703_461_fu_5090345_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_462_fu_5090361_p1.read()) + sc_bigint<11>(sext_ln703_461_fu_5090345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_916_fu_5114917_p2() {
    add_ln703_916_fu_5114917_p2 = (!sext_ln703_463_fu_5114914_p1.read().is_01() || !add_ln703_910_fu_5114908_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_463_fu_5114914_p1.read()) + sc_biguint<15>(add_ln703_910_fu_5114908_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_917_fu_5114923_p2() {
    add_ln703_917_fu_5114923_p2 = (!add_ln703_916_fu_5114917_p2.read().is_01() || !zext_ln203_55_fu_5113258_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_916_fu_5114917_p2.read()) + sc_biguint<15>(zext_ln203_55_fu_5113258_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_918_fu_5090371_p2() {
    add_ln703_918_fu_5090371_p2 = (!zext_ln708_175_fu_5032796_p1.read().is_01() || !zext_ln708_176_fu_5032810_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_175_fu_5032796_p1.read()) + sc_biguint<11>(zext_ln708_176_fu_5032810_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_919_fu_5090381_p2() {
    add_ln703_919_fu_5090381_p2 = (!zext_ln703_80_fu_5090377_p1.read().is_01() || !sext_ln203_171_fu_5032352_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_80_fu_5090377_p1.read()) + sc_bigint<13>(sext_ln203_171_fu_5032352_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_920_fu_5114932_p2() {
    add_ln703_920_fu_5114932_p2 = (!sext_ln703_464_fu_5114929_p1.read().is_01() || !add_ln703_917_fu_5114923_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_464_fu_5114929_p1.read()) + sc_biguint<15>(add_ln703_917_fu_5114923_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_921_fu_5090387_p2() {
    add_ln703_921_fu_5090387_p2 = (!zext_ln203_56_fu_5032814_p1.read().is_01() || !zext_ln203_57_fu_5032828_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_56_fu_5032814_p1.read()) + sc_biguint<10>(zext_ln203_57_fu_5032828_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_922_fu_5090397_p2() {
    add_ln703_922_fu_5090397_p2 = (!zext_ln203_58_fu_5032862_p1.read().is_01() || !zext_ln708_72_fu_5026623_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_58_fu_5032862_p1.read()) + sc_biguint<9>(zext_ln708_72_fu_5026623_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_923_fu_5090407_p2() {
    add_ln703_923_fu_5090407_p2 = (!zext_ln703_82_fu_5090403_p1.read().is_01() || !zext_ln708_177_fu_5032842_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_82_fu_5090403_p1.read()) + sc_biguint<11>(zext_ln708_177_fu_5032842_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_924_fu_5090413_p2() {
    add_ln703_924_fu_5090413_p2 = (!add_ln703_923_fu_5090407_p2.read().is_01() || !zext_ln703_81_fu_5090393_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_923_fu_5090407_p2.read()) + sc_biguint<11>(zext_ln703_81_fu_5090393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_926_fu_5090427_p2() {
    add_ln703_926_fu_5090427_p2 = (!zext_ln203_59_fu_5032876_p1.read().is_01() || !zext_ln203_60_fu_5032914_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_59_fu_5032876_p1.read()) + sc_biguint<10>(zext_ln203_60_fu_5032914_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_927_fu_5090437_p2() {
    add_ln703_927_fu_5090437_p2 = (!zext_ln703_84_fu_5090433_p1.read().is_01() || !or_ln_fu_5090419_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_84_fu_5090433_p1.read()) + sc_biguint<16>(or_ln_fu_5090419_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_928_fu_5090443_p2() {
    add_ln703_928_fu_5090443_p2 = (!tmp_163_fu_5032942_p4.read().is_01() || !zext_ln203_61_fu_5033000_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_163_fu_5032942_p4.read()) + sc_biguint<10>(zext_ln203_61_fu_5033000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_929_fu_5090453_p2() {
    add_ln703_929_fu_5090453_p2 = (!trunc_ln203_8_fu_5033014_p4.read().is_01() || !zext_ln203_62_fu_5033024_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_8_fu_5033014_p4.read()) + sc_biguint<10>(zext_ln203_62_fu_5033024_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_930_fu_5090463_p2() {
    add_ln703_930_fu_5090463_p2 = (!zext_ln703_86_fu_5090459_p1.read().is_01() || !zext_ln703_85_fu_5090449_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_86_fu_5090459_p1.read()) + sc_biguint<11>(zext_ln703_85_fu_5090449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_931_fu_5090473_p2() {
    add_ln703_931_fu_5090473_p2 = (!zext_ln703_87_fu_5090469_p1.read().is_01() || !add_ln703_927_fu_5090437_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_87_fu_5090469_p1.read()) + sc_biguint<16>(add_ln703_927_fu_5090437_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_932_fu_5090479_p2() {
    add_ln703_932_fu_5090479_p2 = (!trunc_ln203_9_fu_5033048_p4.read().is_01() || !zext_ln203_64_fu_5033058_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_9_fu_5033048_p4.read()) + sc_biguint<9>(zext_ln203_64_fu_5033058_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_933_fu_5090489_p2() {
    add_ln703_933_fu_5090489_p2 = (!zext_ln703_88_fu_5090485_p1.read().is_01() || !zext_ln203_63_fu_5033044_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_88_fu_5090485_p1.read()) + sc_biguint<10>(zext_ln203_63_fu_5033044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_934_fu_5090499_p2() {
    add_ln703_934_fu_5090499_p2 = (!zext_ln203_65_fu_5033062_p1.read().is_01() || !trunc_ln1118_1_fu_5029228_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_65_fu_5033062_p1.read()) + sc_biguint<10>(trunc_ln1118_1_fu_5029228_p4.read()));
}

}

