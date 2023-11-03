#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3805_fu_13025019_p2() {
    add_ln703_3805_fu_13025019_p2 = (!zext_ln708_822_fu_12993119_p1.read().is_01() || !sext_ln1118_1142_fu_12993133_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_822_fu_12993119_p1.read()) + sc_bigint<11>(sext_ln1118_1142_fu_12993133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3806_fu_13025029_p2() {
    add_ln703_3806_fu_13025029_p2 = (!sext_ln703_2167_fu_13025025_p1.read().is_01() || !sext_ln703_1024_fu_13025015_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2167_fu_13025025_p1.read()) + sc_bigint<13>(sext_ln703_1024_fu_13025015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3807_fu_13025035_p2() {
    add_ln703_3807_fu_13025035_p2 = (!sext_ln708_167_fu_12993229_p1.read().is_01() || !zext_ln1118_2030_fu_12993243_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_167_fu_12993229_p1.read()) + sc_biguint<12>(zext_ln1118_2030_fu_12993243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3808_fu_13025045_p2() {
    add_ln703_3808_fu_13025045_p2 = (!sext_ln703_2168_fu_13025041_p1.read().is_01() || !add_ln703_3806_fu_13025029_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2168_fu_13025041_p1.read()) + sc_biguint<13>(add_ln703_3806_fu_13025029_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3809_fu_13025055_p2() {
    add_ln703_3809_fu_13025055_p2 = (!sext_ln1118_1145_fu_12993201_p1.read().is_01() || !sext_ln1118_1143_fu_12993147_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1145_fu_12993201_p1.read()) + sc_bigint<10>(sext_ln1118_1143_fu_12993147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_380_fu_13002753_p2() {
    add_ln703_380_fu_13002753_p2 = (!sext_ln703_140_fu_13002749_p1.read().is_01() || !sext_ln203_99_fu_12926168_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_140_fu_13002749_p1.read()) + sc_bigint<9>(sext_ln203_99_fu_12926168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3810_fu_13025065_p2() {
    add_ln703_3810_fu_13025065_p2 = (!sext_ln703_2170_fu_13025061_p1.read().is_01() || !sext_ln1118_1146_fu_12993215_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2170_fu_13025061_p1.read()) + sc_bigint<11>(sext_ln1118_1146_fu_12993215_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3811_fu_13025075_p2() {
    add_ln703_3811_fu_13025075_p2 = (!sext_ln703_2171_fu_13025071_p1.read().is_01() || !sext_ln703_2169_fu_13025051_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2171_fu_13025071_p1.read()) + sc_bigint<14>(sext_ln703_2169_fu_13025051_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3812_fu_13025081_p2() {
    add_ln703_3812_fu_13025081_p2 = (!add_ln703_3811_fu_13025075_p2.read().is_01() || !zext_ln708_824_fu_12993267_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3811_fu_13025075_p2.read()) + sc_biguint<14>(zext_ln708_824_fu_12993267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3813_fu_13025087_p2() {
    add_ln703_3813_fu_13025087_p2 = (!sext_ln1118_1148_fu_12993415_p1.read().is_01() || !zext_ln1118_2032_fu_12993331_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1148_fu_12993415_p1.read()) + sc_biguint<12>(zext_ln1118_2032_fu_12993331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3814_fu_13025097_p2() {
    add_ln703_3814_fu_13025097_p2 = (!sext_ln703_2173_fu_13025093_p1.read().is_01() || !sext_ln1118_1147_fu_12993401_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2173_fu_13025093_p1.read()) + sc_bigint<13>(sext_ln1118_1147_fu_12993401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3815_fu_13036893_p2() {
    add_ln703_3815_fu_13036893_p2 = (!sext_ln703_2174_fu_13036890_p1.read().is_01() || !sext_ln703_2172_fu_13036887_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2174_fu_13036890_p1.read()) + sc_bigint<15>(sext_ln703_2172_fu_13036887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3816_fu_13025103_p2() {
    add_ln703_3816_fu_13025103_p2 = (!sext_ln1118_1149_fu_12993439_p1.read().is_01() || !sext_ln708_168_fu_12993311_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1149_fu_12993439_p1.read()) + sc_bigint<10>(sext_ln708_168_fu_12993311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3817_fu_13025109_p2() {
    add_ln703_3817_fu_13025109_p2 = (!add_ln703_3816_fu_13025103_p2.read().is_01() || !zext_ln708_825_fu_12993287_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3816_fu_13025103_p2.read()) + sc_biguint<10>(zext_ln708_825_fu_12993287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3818_fu_13025119_p2() {
    add_ln703_3818_fu_13025119_p2 = (!sext_ln1118_1151_fu_12993473_p1.read().is_01() || !zext_ln1118_2034_fu_12993377_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1151_fu_12993473_p1.read()) + sc_biguint<9>(zext_ln1118_2034_fu_12993377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3819_fu_13025129_p2() {
    add_ln703_3819_fu_13025129_p2 = (!sext_ln703_2176_fu_13025125_p1.read().is_01() || !sext_ln708_169_fu_12993363_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2176_fu_13025125_p1.read()) + sc_bigint<10>(sext_ln708_169_fu_12993363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_381_fu_13002763_p2() {
    add_ln703_381_fu_13002763_p2 = (!sext_ln703_141_fu_13002759_p1.read().is_01() || !add_ln703_378_fu_13002737_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_141_fu_13002759_p1.read()) + sc_biguint<12>(add_ln703_378_fu_13002737_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3820_fu_13025139_p2() {
    add_ln703_3820_fu_13025139_p2 = (!sext_ln703_2177_fu_13025135_p1.read().is_01() || !sext_ln703_2175_fu_13025115_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2177_fu_13025135_p1.read()) + sc_bigint<11>(sext_ln703_2175_fu_13025115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3821_fu_13036902_p2() {
    add_ln703_3821_fu_13036902_p2 = (!sext_ln703_2178_fu_13036899_p1.read().is_01() || !add_ln703_3815_fu_13036893_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2178_fu_13036899_p1.read()) + sc_biguint<15>(add_ln703_3815_fu_13036893_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3822_fu_13025145_p2() {
    add_ln703_3822_fu_13025145_p2 = (!sext_ln203_751_fu_12993513_p1.read().is_01() || !sext_ln203_752_fu_12993541_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_751_fu_12993513_p1.read()) + sc_bigint<12>(sext_ln203_752_fu_12993541_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3823_fu_13036911_p2() {
    add_ln703_3823_fu_13036911_p2 = (!sext_ln703_2179_fu_13036908_p1.read().is_01() || !add_ln703_3821_fu_13036902_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2179_fu_13036908_p1.read()) + sc_biguint<15>(add_ln703_3821_fu_13036902_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3824_fu_13025151_p2() {
    add_ln703_3824_fu_13025151_p2 = (!zext_ln203_272_fu_12992323_p1.read().is_01() || !zext_ln203_279_fu_12993579_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_272_fu_12992323_p1.read()) + sc_biguint<10>(zext_ln203_279_fu_12993579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3825_fu_13025161_p2() {
    add_ln703_3825_fu_13025161_p2 = (!zext_ln703_503_fu_13025157_p1.read().is_01() || !sext_ln203_754_fu_12993641_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_503_fu_13025157_p1.read()) + sc_bigint<12>(sext_ln203_754_fu_12993641_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3826_fu_13036920_p2() {
    add_ln703_3826_fu_13036920_p2 = (!sext_ln703_2180_fu_13036917_p1.read().is_01() || !add_ln703_3823_fu_13036911_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2180_fu_13036917_p1.read()) + sc_biguint<15>(add_ln703_3823_fu_13036911_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3827_fu_13025167_p2() {
    add_ln703_3827_fu_13025167_p2 = (!sext_ln203_750_fu_12993493_p1.read().is_01() || !sext_ln203_730_fu_12991095_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_750_fu_12993493_p1.read()) + sc_bigint<10>(sext_ln203_730_fu_12991095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3828_fu_13025177_p2() {
    add_ln703_3828_fu_13025177_p2 = (!sext_ln703_2181_fu_13025173_p1.read().is_01() || !zext_ln708_827_fu_12993603_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2181_fu_13025173_p1.read()) + sc_biguint<11>(zext_ln708_827_fu_12993603_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3829_fu_13025187_p2() {
    add_ln703_3829_fu_13025187_p2 = (!sext_ln203_753_fu_12993565_p1.read().is_01() || !sext_ln203_755_fu_12993661_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln203_753_fu_12993565_p1.read()) + sc_bigint<7>(sext_ln203_755_fu_12993661_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3830_fu_13025197_p2() {
    add_ln703_3830_fu_13025197_p2 = (!sext_ln703_2183_fu_13025193_p1.read().is_01() || !zext_ln708_826_fu_12993527_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln703_2183_fu_13025193_p1.read()) + sc_biguint<8>(zext_ln708_826_fu_12993527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3831_fu_13025207_p2() {
    add_ln703_3831_fu_13025207_p2 = (!sext_ln703_2184_fu_13025203_p1.read().is_01() || !sext_ln703_2182_fu_13025183_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2184_fu_13025203_p1.read()) + sc_bigint<12>(sext_ln703_2182_fu_13025183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3833_fu_13025213_p2() {
    add_ln703_3833_fu_13025213_p2 = (!sext_ln203_687_fu_12986300_p1.read().is_01() || !ap_const_lv12_C70.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()) + sc_bigint<12>(ap_const_lv12_C70));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3834_fu_13025219_p2() {
    add_ln703_3834_fu_13025219_p2 = (!zext_ln708_828_fu_12993693_p1.read().is_01() || !zext_ln708_829_fu_12993707_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_828_fu_12993693_p1.read()) + sc_biguint<11>(zext_ln708_829_fu_12993707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3835_fu_13025229_p2() {
    add_ln703_3835_fu_13025229_p2 = (!zext_ln703_504_fu_13025225_p1.read().is_01() || !add_ln703_3833_fu_13025213_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_504_fu_13025225_p1.read()) + sc_biguint<12>(add_ln703_3833_fu_13025213_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3836_fu_13025239_p2() {
    add_ln703_3836_fu_13025239_p2 = (!sext_ln1118_1153_fu_12993727_p1.read().is_01() || !sext_ln1118_1154_fu_12993741_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1153_fu_12993727_p1.read()) + sc_bigint<11>(sext_ln1118_1154_fu_12993741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3837_fu_13025249_p2() {
    add_ln703_3837_fu_13025249_p2 = (!sext_ln703_2187_fu_13025245_p1.read().is_01() || !sext_ln703_1028_fu_13025235_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2187_fu_13025245_p1.read()) + sc_bigint<13>(sext_ln703_1028_fu_13025235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3838_fu_13025255_p2() {
    add_ln703_3838_fu_13025255_p2 = (!sext_ln1118_1155_fu_12993773_p1.read().is_01() || !sext_ln708_170_fu_12993815_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1155_fu_12993773_p1.read()) + sc_bigint<12>(sext_ln708_170_fu_12993815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3839_fu_13036945_p2() {
    add_ln703_3839_fu_13036945_p2 = (!sext_ln703_2188_fu_13036942_p1.read().is_01() || !sext_ln703_1029_fu_13036939_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2188_fu_13036942_p1.read()) + sc_bigint<14>(sext_ln703_1029_fu_13036939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_383_fu_13002769_p2() {
    add_ln703_383_fu_13002769_p2 = (!zext_ln708_16_fu_12926481_p1.read().is_01() || !ap_const_lv11_420.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_16_fu_12926481_p1.read()) + sc_bigint<11>(ap_const_lv11_420));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3840_fu_13025261_p2() {
    add_ln703_3840_fu_13025261_p2 = (!zext_ln1118_2045_fu_12993829_p1.read().is_01() || !sext_ln1118_1156_fu_12993787_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2045_fu_12993829_p1.read()) + sc_bigint<12>(sext_ln1118_1156_fu_12993787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3841_fu_13025267_p2() {
    add_ln703_3841_fu_13025267_p2 = (!add_ln703_3840_fu_13025261_p2.read().is_01() || !zext_ln1118_2044_fu_12993801_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3840_fu_13025261_p2.read()) + sc_biguint<12>(zext_ln1118_2044_fu_12993801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3842_fu_13036954_p2() {
    add_ln703_3842_fu_13036954_p2 = (!sext_ln703_2189_fu_13036951_p1.read().is_01() || !add_ln703_3839_fu_13036945_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2189_fu_13036951_p1.read()) + sc_biguint<14>(add_ln703_3839_fu_13036945_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3843_fu_13036960_p2() {
    add_ln703_3843_fu_13036960_p2 = (!add_ln703_3842_fu_13036954_p2.read().is_01() || !sext_ln708_171_fu_13029244_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3842_fu_13036954_p2.read()) + sc_bigint<14>(sext_ln708_171_fu_13029244_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3844_fu_13025273_p2() {
    add_ln703_3844_fu_13025273_p2 = (!sext_ln708_153_fu_12986706_p1.read().is_01() || !sext_ln708_173_fu_12993961_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_153_fu_12986706_p1.read()) + sc_bigint<12>(sext_ln708_173_fu_12993961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3845_fu_13025283_p2() {
    add_ln703_3845_fu_13025283_p2 = (!sext_ln703_2191_fu_13025279_p1.read().is_01() || !sext_ln708_172_fu_12993899_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2191_fu_13025279_p1.read()) + sc_bigint<13>(sext_ln708_172_fu_12993899_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3846_fu_13036973_p2() {
    add_ln703_3846_fu_13036973_p2 = (!sext_ln703_2192_fu_13036970_p1.read().is_01() || !sext_ln703_2190_fu_13036966_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2192_fu_13036970_p1.read()) + sc_bigint<15>(sext_ln703_2190_fu_13036966_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3847_fu_13025289_p2() {
    add_ln703_3847_fu_13025289_p2 = (!zext_ln708_830_fu_12993913_p1.read().is_01() || !zext_ln708_831_fu_12993933_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_830_fu_12993913_p1.read()) + sc_biguint<11>(zext_ln708_831_fu_12993933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3848_fu_13025299_p2() {
    add_ln703_3848_fu_13025299_p2 = (!zext_ln703_505_fu_13025295_p1.read().is_01() || !zext_ln1118_2047_fu_12993885_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_505_fu_13025295_p1.read()) + sc_biguint<12>(zext_ln1118_2047_fu_12993885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3849_fu_13025309_p2() {
    add_ln703_3849_fu_13025309_p2 = (!zext_ln708_832_fu_12993981_p1.read().is_01() || !sext_ln1118_1157_fu_12993861_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_832_fu_12993981_p1.read()) + sc_bigint<11>(sext_ln1118_1157_fu_12993861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_384_fu_13002779_p2() {
    add_ln703_384_fu_13002779_p2 = (!zext_ln203_fu_12926529_p1.read().is_01() || !sext_ln203_105_fu_12926495_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_fu_12926529_p1.read()) + sc_bigint<12>(sext_ln203_105_fu_12926495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3850_fu_13025319_p2() {
    add_ln703_3850_fu_13025319_p2 = (!sext_ln703_2193_fu_13025315_p1.read().is_01() || !zext_ln1118_2048_fu_12993947_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2193_fu_13025315_p1.read()) + sc_biguint<12>(zext_ln1118_2048_fu_12993947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3851_fu_13025329_p2() {
    add_ln703_3851_fu_13025329_p2 = (!sext_ln703_2194_fu_13025325_p1.read().is_01() || !zext_ln703_506_fu_13025305_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2194_fu_13025325_p1.read()) + sc_biguint<13>(zext_ln703_506_fu_13025305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3852_fu_13036982_p2() {
    add_ln703_3852_fu_13036982_p2 = (!sext_ln703_2195_fu_13036979_p1.read().is_01() || !add_ln703_3846_fu_13036973_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2195_fu_13036979_p1.read()) + sc_biguint<15>(add_ln703_3846_fu_13036973_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3853_fu_13025335_p2() {
    add_ln703_3853_fu_13025335_p2 = (!sext_ln203_756_fu_12993995_p1.read().is_01() || !sext_ln203_757_fu_12994184_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_756_fu_12993995_p1.read()) + sc_bigint<12>(sext_ln203_757_fu_12994184_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3854_fu_13036991_p2() {
    add_ln703_3854_fu_13036991_p2 = (!sext_ln703_2196_fu_13036988_p1.read().is_01() || !add_ln703_3852_fu_13036982_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2196_fu_13036988_p1.read()) + sc_biguint<15>(add_ln703_3852_fu_13036982_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3855_fu_13025341_p2() {
    add_ln703_3855_fu_13025341_p2 = (!zext_ln708_835_fu_12994039_p1.read().is_01() || !zext_ln708_836_fu_12994061_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_835_fu_12994039_p1.read()) + sc_biguint<11>(zext_ln708_836_fu_12994061_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3856_fu_13025347_p2() {
    add_ln703_3856_fu_13025347_p2 = (!add_ln703_3855_fu_13025341_p2.read().is_01() || !zext_ln708_834_fu_12994019_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3855_fu_13025341_p2.read()) + sc_biguint<11>(zext_ln708_834_fu_12994019_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3857_fu_13037004_p2() {
    add_ln703_3857_fu_13037004_p2 = (!zext_ln703_507_fu_13037001_p1.read().is_01() || !sext_ln703_2197_fu_13036997_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_507_fu_13037001_p1.read()) + sc_bigint<16>(sext_ln703_2197_fu_13036997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3858_fu_13025353_p2() {
    add_ln703_3858_fu_13025353_p2 = (!zext_ln708_837_fu_12994103_p1.read().is_01() || !zext_ln708_838_fu_12994131_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_837_fu_12994103_p1.read()) + sc_biguint<11>(zext_ln708_838_fu_12994131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3859_fu_13025363_p2() {
    add_ln703_3859_fu_13025363_p2 = (!zext_ln703_508_fu_13025359_p1.read().is_01() || !zext_ln203_280_fu_12994075_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_508_fu_13025359_p1.read()) + sc_biguint<12>(zext_ln203_280_fu_12994075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_385_fu_13002785_p2() {
    add_ln703_385_fu_13002785_p2 = (!add_ln703_384_fu_13002779_p2.read().is_01() || !sext_ln703_143_fu_13002775_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_384_fu_13002779_p2.read()) + sc_bigint<12>(sext_ln703_143_fu_13002775_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3860_fu_13025369_p2() {
    add_ln703_3860_fu_13025369_p2 = (!zext_ln203_281_fu_12994150_p1.read().is_01() || !zext_ln203_282_fu_12994170_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_281_fu_12994150_p1.read()) + sc_biguint<9>(zext_ln203_282_fu_12994170_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3861_fu_13025379_p2() {
    add_ln703_3861_fu_13025379_p2 = (!tmp_1141_fu_12992387_p4.read().is_01() || !zext_ln203_283_fu_12994198_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1141_fu_12992387_p4.read()) + sc_biguint<10>(zext_ln203_283_fu_12994198_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3862_fu_13025389_p2() {
    add_ln703_3862_fu_13025389_p2 = (!zext_ln703_510_fu_13025385_p1.read().is_01() || !zext_ln703_509_fu_13025375_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_510_fu_13025385_p1.read()) + sc_biguint<11>(zext_ln703_509_fu_13025375_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3863_fu_13025399_p2() {
    add_ln703_3863_fu_13025399_p2 = (!zext_ln703_511_fu_13025395_p1.read().is_01() || !add_ln703_3859_fu_13025363_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_511_fu_13025395_p1.read()) + sc_biguint<12>(add_ln703_3859_fu_13025363_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3865_fu_13025405_p2() {
    add_ln703_3865_fu_13025405_p2 = (!trunc_ln1118_62_fu_12994212_p4.read().is_01() || !ap_const_lv10_50.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_62_fu_12994212_p4.read()) + sc_biguint<10>(ap_const_lv10_50));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3866_fu_13025415_p2() {
    add_ln703_3866_fu_13025415_p2 = (!zext_ln703_513_fu_13025411_p1.read().is_01() || !sext_ln203_687_fu_12986300_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_513_fu_13025411_p1.read()) + sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3867_fu_13025425_p2() {
    add_ln703_3867_fu_13025425_p2 = (!sext_ln703_1032_fu_13025421_p1.read().is_01() || !sext_ln203_758_fu_12994238_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1032_fu_13025421_p1.read()) + sc_bigint<13>(sext_ln203_758_fu_12994238_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3868_fu_13025431_p2() {
    add_ln703_3868_fu_13025431_p2 = (!trunc_ln1118_63_fu_12994252_p4.read().is_01() || !zext_ln1118_2051_fu_12994272_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_63_fu_12994252_p4.read()) + sc_biguint<10>(zext_ln1118_2051_fu_12994272_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3869_fu_13025441_p2() {
    add_ln703_3869_fu_13025441_p2 = (!zext_ln703_514_fu_13025437_p1.read().is_01() || !add_ln703_3867_fu_13025425_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_514_fu_13025437_p1.read()) + sc_biguint<13>(add_ln703_3867_fu_13025425_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_386_fu_13002791_p2() {
    add_ln703_386_fu_13002791_p2 = (!add_ln703_385_fu_13002785_p2.read().is_01() || !zext_ln1118_79_fu_12926569_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_385_fu_13002785_p2.read()) + sc_biguint<12>(zext_ln1118_79_fu_12926569_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3870_fu_13025451_p2() {
    add_ln703_3870_fu_13025451_p2 = (!sext_ln1118_1160_fu_12994394_p1.read().is_01() || !zext_ln1118_2054_fu_12994328_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1160_fu_12994394_p1.read()) + sc_biguint<12>(zext_ln1118_2054_fu_12994328_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3871_fu_13025461_p2() {
    add_ln703_3871_fu_13025461_p2 = (!sext_ln703_2198_fu_13025457_p1.read().is_01() || !sext_ln703_1033_fu_13025447_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2198_fu_13025457_p1.read()) + sc_bigint<14>(sext_ln703_1033_fu_13025447_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3872_fu_13025467_p2() {
    add_ln703_3872_fu_13025467_p2 = (!zext_ln1118_2055_fu_12994356_p1.read().is_01() || !zext_ln1118_2058_fu_12994418_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2055_fu_12994356_p1.read()) + sc_biguint<10>(zext_ln1118_2058_fu_12994418_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3873_fu_13025477_p2() {
    add_ln703_3873_fu_13025477_p2 = (!sext_ln1118_1158_fu_12994308_p1.read().is_01() || !sext_ln1118_1159_fu_12994370_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1158_fu_12994308_p1.read()) + sc_bigint<11>(sext_ln1118_1159_fu_12994370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3874_fu_13025487_p2() {
    add_ln703_3874_fu_13025487_p2 = (!sext_ln703_2199_fu_13025483_p1.read().is_01() || !zext_ln703_515_fu_13025473_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2199_fu_13025483_p1.read()) + sc_biguint<12>(zext_ln703_515_fu_13025473_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3875_fu_13025497_p2() {
    add_ln703_3875_fu_13025497_p2 = (!sext_ln703_2200_fu_13025493_p1.read().is_01() || !add_ln703_3871_fu_13025461_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2200_fu_13025493_p1.read()) + sc_biguint<14>(add_ln703_3871_fu_13025461_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3876_fu_13025503_p2() {
    add_ln703_3876_fu_13025503_p2 = (!zext_ln708_823_fu_12993263_p1.read().is_01() || !sext_ln1118_1161_fu_12994466_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_823_fu_12993263_p1.read()) + sc_bigint<12>(sext_ln1118_1161_fu_12994466_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3877_fu_13037025_p2() {
    add_ln703_3877_fu_13037025_p2 = (!sext_ln703_2201_fu_13037022_p1.read().is_01() || !sext_ln703_1034_fu_13037019_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2201_fu_13037022_p1.read()) + sc_bigint<15>(sext_ln703_1034_fu_13037019_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3878_fu_13025509_p2() {
    add_ln703_3878_fu_13025509_p2 = (!sext_ln1118_1163_fu_12994512_p1.read().is_01() || !sext_ln1118_1164_fu_12994554_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1163_fu_12994512_p1.read()) + sc_bigint<12>(sext_ln1118_1164_fu_12994554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3879_fu_13025519_p2() {
    add_ln703_3879_fu_13025519_p2 = (!sext_ln703_2202_fu_13025515_p1.read().is_01() || !sext_ln1116_130_fu_12983847_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2202_fu_13025515_p1.read()) + sc_bigint<13>(sext_ln1116_130_fu_12983847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_387_fu_13002801_p2() {
    add_ln703_387_fu_13002801_p2 = (!sext_ln1118_210_fu_12926583_p1.read().is_01() || !zext_ln1118_80_fu_12926597_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_210_fu_12926583_p1.read()) + sc_biguint<12>(zext_ln1118_80_fu_12926597_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3880_fu_13037034_p2() {
    add_ln703_3880_fu_13037034_p2 = (!sext_ln703_2203_fu_13037031_p1.read().is_01() || !add_ln703_3877_fu_13037025_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2203_fu_13037031_p1.read()) + sc_biguint<15>(add_ln703_3877_fu_13037025_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3881_fu_13025525_p2() {
    add_ln703_3881_fu_13025525_p2 = (!zext_ln1118_2060_fu_12994442_p1.read().is_01() || !zext_ln1118_2064_fu_12994536_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2060_fu_12994442_p1.read()) + sc_biguint<10>(zext_ln1118_2064_fu_12994536_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3882_fu_13025535_p2() {
    add_ln703_3882_fu_13025535_p2 = (!zext_ln703_516_fu_13025531_p1.read().is_01() || !sext_ln203_711_fu_12989003_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_516_fu_13025531_p1.read()) + sc_bigint<12>(sext_ln203_711_fu_12989003_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3883_fu_13025545_p2() {
    add_ln703_3883_fu_13025545_p2 = (!zext_ln1118_2065_fu_12994550_p1.read().is_01() || !zext_ln1118_2067_fu_12994622_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2065_fu_12994550_p1.read()) + sc_biguint<9>(zext_ln1118_2067_fu_12994622_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3884_fu_13025555_p2() {
    add_ln703_3884_fu_13025555_p2 = (!sext_ln1118_1162_fu_12994480_p1.read().is_01() || !sext_ln1118_1166_fu_12994582_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1162_fu_12994480_p1.read()) + sc_bigint<11>(sext_ln1118_1166_fu_12994582_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3885_fu_13025565_p2() {
    add_ln703_3885_fu_13025565_p2 = (!sext_ln703_2205_fu_13025561_p1.read().is_01() || !zext_ln703_517_fu_13025551_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2205_fu_13025561_p1.read()) + sc_biguint<12>(zext_ln703_517_fu_13025551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3886_fu_13025575_p2() {
    add_ln703_3886_fu_13025575_p2 = (!sext_ln703_2206_fu_13025571_p1.read().is_01() || !sext_ln703_2204_fu_13025541_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2206_fu_13025571_p1.read()) + sc_bigint<13>(sext_ln703_2204_fu_13025541_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3887_fu_13037043_p2() {
    add_ln703_3887_fu_13037043_p2 = (!sext_ln703_2207_fu_13037040_p1.read().is_01() || !add_ln703_3880_fu_13037034_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2207_fu_13037040_p1.read()) + sc_biguint<15>(add_ln703_3880_fu_13037034_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3888_fu_13037049_p2() {
    add_ln703_3888_fu_13037049_p2 = (!add_ln703_3887_fu_13037043_p2.read().is_01() || !sext_ln203_759_fu_13029247_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3887_fu_13037043_p2.read()) + sc_bigint<15>(sext_ln203_759_fu_13029247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3889_fu_13025581_p2() {
    add_ln703_3889_fu_13025581_p2 = (!sext_ln203_760_fu_12994664_p1.read().is_01() || !sext_ln203_761_fu_12994688_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_760_fu_12994664_p1.read()) + sc_bigint<12>(sext_ln203_761_fu_12994688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_388_fu_13002811_p2() {
    add_ln703_388_fu_13002811_p2 = (!sext_ln703_145_fu_13002807_p1.read().is_01() || !sext_ln703_144_fu_13002797_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_145_fu_13002807_p1.read()) + sc_bigint<13>(sext_ln703_144_fu_13002797_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3890_fu_13025591_p2() {
    add_ln703_3890_fu_13025591_p2 = (!sext_ln703_2209_fu_13025587_p1.read().is_01() || !sext_ln203_718_fu_12990364_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2209_fu_13025587_p1.read()) + sc_bigint<13>(sext_ln203_718_fu_12990364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3891_fu_13037062_p2() {
    add_ln703_3891_fu_13037062_p2 = (!sext_ln703_2210_fu_13037059_p1.read().is_01() || !sext_ln703_2208_fu_13037055_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2210_fu_13037059_p1.read()) + sc_bigint<16>(sext_ln703_2208_fu_13037055_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3892_fu_13025597_p2() {
    add_ln703_3892_fu_13025597_p2 = (!sext_ln203_762_fu_12994748_p1.read().is_01() || !zext_ln203_285_fu_12994716_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_762_fu_12994748_p1.read()) + sc_biguint<12>(zext_ln203_285_fu_12994716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3893_fu_13025607_p2() {
    add_ln703_3893_fu_13025607_p2 = (!sext_ln203_763_fu_12994762_p1.read().is_01() || !zext_ln203_284_fu_12994702_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_763_fu_12994762_p1.read()) + sc_biguint<11>(zext_ln203_284_fu_12994702_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3894_fu_13025613_p2() {
    add_ln703_3894_fu_13025613_p2 = (!add_ln703_3893_fu_13025607_p2.read().is_01() || !zext_ln708_845_fu_12994786_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3893_fu_13025607_p2.read()) + sc_biguint<11>(zext_ln708_845_fu_12994786_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3895_fu_13025623_p2() {
    add_ln703_3895_fu_13025623_p2 = (!sext_ln703_2212_fu_13025619_p1.read().is_01() || !sext_ln703_2211_fu_13025603_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2212_fu_13025619_p1.read()) + sc_bigint<13>(sext_ln703_2211_fu_13025603_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3897_fu_13025629_p2() {
    add_ln703_3897_fu_13025629_p2 = (!sext_ln203_764_fu_12994820_p1.read().is_01() || !ap_const_lv12_DE0.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_764_fu_12994820_p1.read()) + sc_bigint<12>(ap_const_lv12_DE0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3898_fu_13025635_p2() {
    add_ln703_3898_fu_13025635_p2 = (!trunc_ln1116_10_fu_12994824_p4.read().is_01() || !zext_ln1116_191_fu_12994854_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1116_10_fu_12994824_p4.read()) + sc_biguint<10>(zext_ln1116_191_fu_12994854_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3899_fu_13025645_p2() {
    add_ln703_3899_fu_13025645_p2 = (!zext_ln703_518_fu_13025641_p1.read().is_01() || !add_ln703_3897_fu_13025629_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_518_fu_13025641_p1.read()) + sc_biguint<12>(add_ln703_3897_fu_13025629_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_389_fu_13002817_p2() {
    add_ln703_389_fu_13002817_p2 = (!zext_ln1118_20_fu_12925455_p1.read().is_01() || !sext_ln1118_212_fu_12926683_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_20_fu_12925455_p1.read()) + sc_bigint<12>(sext_ln1118_212_fu_12926683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3900_fu_13025655_p2() {
    add_ln703_3900_fu_13025655_p2 = (!sext_ln703_1036_fu_13025651_p1.read().is_01() || !zext_ln203_286_fu_12994868_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1036_fu_13025651_p1.read()) + sc_biguint<13>(zext_ln203_286_fu_12994868_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3901_fu_13025661_p2() {
    add_ln703_3901_fu_13025661_p2 = (!sext_ln1116_146_fu_12994906_p1.read().is_01() || !zext_ln1116_192_fu_12994882_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_146_fu_12994906_p1.read()) + sc_biguint<12>(zext_ln1116_192_fu_12994882_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3902_fu_13025671_p2() {
    add_ln703_3902_fu_13025671_p2 = (!sext_ln703_2214_fu_13025667_p1.read().is_01() || !add_ln703_3900_fu_13025655_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2214_fu_13025667_p1.read()) + sc_biguint<13>(add_ln703_3900_fu_13025655_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3903_fu_13037080_p2() {
    add_ln703_3903_fu_13037080_p2 = (!sext_ln703_1037_fu_13037077_p1.read().is_01() || !zext_ln203_287_fu_13029250_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1037_fu_13037077_p1.read()) + sc_biguint<14>(zext_ln203_287_fu_13029250_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3904_fu_13025677_p2() {
    add_ln703_3904_fu_13025677_p2 = (!zext_ln1116_193_fu_12994934_p1.read().is_01() || !sext_ln1116_147_fu_12994948_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_193_fu_12994934_p1.read()) + sc_bigint<12>(sext_ln1116_147_fu_12994948_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3905_fu_13025687_p2() {
    add_ln703_3905_fu_13025687_p2 = (!sext_ln703_2215_fu_13025683_p1.read().is_01() || !sext_ln1116_148_fu_12994952_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2215_fu_13025683_p1.read()) + sc_bigint<13>(sext_ln1116_148_fu_12994952_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3906_fu_13037089_p2() {
    add_ln703_3906_fu_13037089_p2 = (!sext_ln703_2216_fu_13037086_p1.read().is_01() || !add_ln703_3903_fu_13037080_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2216_fu_13037086_p1.read()) + sc_biguint<14>(add_ln703_3903_fu_13037080_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3907_fu_13037099_p2() {
    add_ln703_3907_fu_13037099_p2 = (!sext_ln703_1038_fu_13037095_p1.read().is_01() || !sext_ln203_765_fu_13029253_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1038_fu_13037095_p1.read()) + sc_bigint<15>(sext_ln203_765_fu_13029253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3908_fu_13025693_p2() {
    add_ln703_3908_fu_13025693_p2 = (!sext_ln1116_150_fu_12995012_p1.read().is_01() || !sext_ln1118_1169_fu_12995054_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_150_fu_12995012_p1.read()) + sc_bigint<12>(sext_ln1118_1169_fu_12995054_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3909_fu_13025703_p2() {
    add_ln703_3909_fu_13025703_p2 = (!sext_ln703_2217_fu_13025699_p1.read().is_01() || !sext_ln708_174_fu_12994956_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2217_fu_13025699_p1.read()) + sc_bigint<13>(sext_ln708_174_fu_12994956_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_390_fu_13029380_p2() {
    add_ln703_390_fu_13029380_p2 = (!sext_ln703_147_fu_13029377_p1.read().is_01() || !sext_ln703_146_fu_13029374_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_147_fu_13029377_p1.read()) + sc_bigint<14>(sext_ln703_146_fu_13029374_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3910_fu_13037108_p2() {
    add_ln703_3910_fu_13037108_p2 = (!sext_ln703_2218_fu_13037105_p1.read().is_01() || !add_ln703_3907_fu_13037099_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2218_fu_13037105_p1.read()) + sc_biguint<15>(add_ln703_3907_fu_13037099_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3911_fu_13025709_p2() {
    add_ln703_3911_fu_13025709_p2 = (!zext_ln708_848_fu_12994970_p1.read().is_01() || !zext_ln708_849_fu_12994984_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_848_fu_12994970_p1.read()) + sc_biguint<11>(zext_ln708_849_fu_12994984_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3912_fu_13025719_p2() {
    add_ln703_3912_fu_13025719_p2 = (!sext_ln1116_149_fu_12994998_p1.read().is_01() || !sext_ln708_175_fu_12995102_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_149_fu_12994998_p1.read()) + sc_bigint<10>(sext_ln708_175_fu_12995102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3913_fu_13025729_p2() {
    add_ln703_3913_fu_13025729_p2 = (!sext_ln703_2219_fu_13025725_p1.read().is_01() || !zext_ln708_850_fu_12995068_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2219_fu_13025725_p1.read()) + sc_biguint<11>(zext_ln708_850_fu_12995068_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3914_fu_13025739_p2() {
    add_ln703_3914_fu_13025739_p2 = (!sext_ln703_2220_fu_13025735_p1.read().is_01() || !zext_ln703_519_fu_13025715_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2220_fu_13025735_p1.read()) + sc_biguint<12>(zext_ln703_519_fu_13025715_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3915_fu_13037117_p2() {
    add_ln703_3915_fu_13037117_p2 = (!sext_ln703_2221_fu_13037114_p1.read().is_01() || !add_ln703_3910_fu_13037108_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2221_fu_13037114_p1.read()) + sc_biguint<15>(add_ln703_3910_fu_13037108_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3916_fu_13025745_p2() {
    add_ln703_3916_fu_13025745_p2 = (!zext_ln203_288_fu_12995122_p1.read().is_01() || !sext_ln203_766_fu_12995170_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_288_fu_12995122_p1.read()) + sc_bigint<12>(sext_ln203_766_fu_12995170_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3917_fu_13037126_p2() {
    add_ln703_3917_fu_13037126_p2 = (!sext_ln703_2222_fu_13037123_p1.read().is_01() || !add_ln703_3915_fu_13037117_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2222_fu_13037123_p1.read()) + sc_biguint<15>(add_ln703_3915_fu_13037117_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3918_fu_13025751_p2() {
    add_ln703_3918_fu_13025751_p2 = (!sext_ln203_769_fu_12995272_p1.read().is_01() || !sext_ln203_770_fu_12995286_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_769_fu_12995272_p1.read()) + sc_bigint<12>(sext_ln203_770_fu_12995286_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3919_fu_13025761_p2() {
    add_ln703_3919_fu_13025761_p2 = (!sext_ln703_2224_fu_13025757_p1.read().is_01() || !sext_ln203_768_fu_12995228_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2224_fu_13025757_p1.read()) + sc_bigint<13>(sext_ln203_768_fu_12995228_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_391_fu_13002823_p2() {
    add_ln703_391_fu_13002823_p2 = (!zext_ln708_18_fu_12926669_p1.read().is_01() || !sext_ln1118_211_fu_12926611_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_18_fu_12926669_p1.read()) + sc_bigint<11>(sext_ln1118_211_fu_12926611_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3920_fu_13037139_p2() {
    add_ln703_3920_fu_13037139_p2 = (!sext_ln703_2225_fu_13037136_p1.read().is_01() || !sext_ln703_2223_fu_13037132_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2225_fu_13037136_p1.read()) + sc_bigint<16>(sext_ln703_2223_fu_13037132_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3921_fu_13025767_p2() {
    add_ln703_3921_fu_13025767_p2 = (!zext_ln203_289_fu_12995190_p1.read().is_01() || !zext_ln203_290_fu_12995258_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_289_fu_12995190_p1.read()) + sc_biguint<10>(zext_ln203_290_fu_12995258_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3922_fu_13025777_p2() {
    add_ln703_3922_fu_13025777_p2 = (!zext_ln703_520_fu_13025773_p1.read().is_01() || !sext_ln203_771_fu_12995355_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_520_fu_13025773_p1.read()) + sc_bigint<12>(sext_ln203_771_fu_12995355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3923_fu_13025787_p2() {
    add_ln703_3923_fu_13025787_p2 = (!zext_ln203_291_fu_12995304_p1.read().is_01() || !zext_ln203_260_fu_12989169_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_291_fu_12995304_p1.read()) + sc_biguint<10>(zext_ln203_260_fu_12989169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3924_fu_13025797_p2() {
    add_ln703_3924_fu_13025797_p2 = (!zext_ln203_292_fu_12995323_p1.read().is_01() || !sext_ln203_767_fu_12995214_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_292_fu_12995323_p1.read()) + sc_bigint<10>(sext_ln203_767_fu_12995214_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3925_fu_13025807_p2() {
    add_ln703_3925_fu_13025807_p2 = (!sext_ln703_2227_fu_13025803_p1.read().is_01() || !zext_ln703_521_fu_13025793_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2227_fu_13025803_p1.read()) + sc_biguint<12>(zext_ln703_521_fu_13025793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3926_fu_13025817_p2() {
    add_ln703_3926_fu_13025817_p2 = (!sext_ln703_2228_fu_13025813_p1.read().is_01() || !sext_ln703_2226_fu_13025783_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2228_fu_13025813_p1.read()) + sc_bigint<13>(sext_ln703_2226_fu_13025783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3928_fu_13025823_p2() {
    add_ln703_3928_fu_13025823_p2 = (!sext_ln1118_1173_fu_12995383_p1.read().is_01() || !ap_const_lv9_180.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1173_fu_12995383_p1.read()) + sc_bigint<9>(ap_const_lv9_180));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3929_fu_13025833_p2() {
    add_ln703_3929_fu_13025833_p2 = (!sext_ln1118_1175_fu_12995417_p1.read().is_01() || !sext_ln1118_1174_fu_12995397_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1175_fu_12995417_p1.read()) + sc_bigint<10>(sext_ln1118_1174_fu_12995397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_392_fu_13002833_p2() {
    add_ln703_392_fu_13002833_p2 = (!sext_ln703_148_fu_13002829_p1.read().is_01() || !zext_ln1118_81_fu_12926625_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_148_fu_13002829_p1.read()) + sc_biguint<12>(zext_ln1118_81_fu_12926625_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3930_fu_13025839_p2() {
    add_ln703_3930_fu_13025839_p2 = (!add_ln703_3929_fu_13025833_p2.read().is_01() || !sext_ln703_2230_fu_13025829_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3929_fu_13025833_p2.read()) + sc_bigint<10>(sext_ln703_2230_fu_13025829_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3931_fu_13025849_p2() {
    add_ln703_3931_fu_13025849_p2 = (!sext_ln703_2231_fu_13025845_p1.read().is_01() || !sext_ln1118_1178_fu_12995499_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2231_fu_13025845_p1.read()) + sc_bigint<12>(sext_ln1118_1178_fu_12995499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3932_fu_13025855_p2() {
    add_ln703_3932_fu_13025855_p2 = (!trunc_ln1118_64_fu_12995445_p4.read().is_01() || !zext_ln1118_2082_fu_12995465_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_64_fu_12995445_p4.read()) + sc_biguint<9>(zext_ln1118_2082_fu_12995465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3933_fu_13025865_p2() {
    add_ln703_3933_fu_13025865_p2 = (!zext_ln703_522_fu_13025861_p1.read().is_01() || !add_ln703_3931_fu_13025849_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_522_fu_13025861_p1.read()) + sc_biguint<12>(add_ln703_3931_fu_13025849_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3934_fu_13025875_p2() {
    add_ln703_3934_fu_13025875_p2 = (!zext_ln708_852_fu_12995591_p1.read().is_01() || !sext_ln1118_1180_fu_12995533_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_852_fu_12995591_p1.read()) + sc_bigint<11>(sext_ln1118_1180_fu_12995533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3935_fu_13025881_p2() {
    add_ln703_3935_fu_13025881_p2 = (!sext_ln1118_1182_fu_12995567_p1.read().is_01() || !sext_ln1118_1176_fu_12995441_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_1182_fu_12995567_p1.read()) + sc_bigint<8>(sext_ln1118_1176_fu_12995441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3936_fu_13025891_p2() {
    add_ln703_3936_fu_13025891_p2 = (!sext_ln703_2233_fu_13025887_p1.read().is_01() || !add_ln703_3934_fu_13025875_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2233_fu_13025887_p1.read()) + sc_biguint<11>(add_ln703_3934_fu_13025875_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3937_fu_13025901_p2() {
    add_ln703_3937_fu_13025901_p2 = (!sext_ln703_2234_fu_13025897_p1.read().is_01() || !sext_ln703_2232_fu_13025871_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2234_fu_13025897_p1.read()) + sc_bigint<13>(sext_ln703_2232_fu_13025871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3938_fu_13025907_p2() {
    add_ln703_3938_fu_13025907_p2 = (!add_ln703_3937_fu_13025901_p2.read().is_01() || !zext_ln708_853_fu_12995667_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3937_fu_13025901_p2.read()) + sc_biguint<13>(zext_ln708_853_fu_12995667_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3939_fu_13025913_p2() {
    add_ln703_3939_fu_13025913_p2 = (!sext_ln1118_1183_fu_12995605_p1.read().is_01() || !sext_ln1118_1185_fu_12995635_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1183_fu_12995605_p1.read()) + sc_bigint<11>(sext_ln1118_1185_fu_12995635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_393_fu_13029389_p2() {
    add_ln703_393_fu_13029389_p2 = (!sext_ln703_149_fu_13029386_p1.read().is_01() || !add_ln703_390_fu_13029380_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_149_fu_13029386_p1.read()) + sc_biguint<14>(add_ln703_390_fu_13029380_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3940_fu_13025923_p2() {
    add_ln703_3940_fu_13025923_p2 = (!sext_ln703_2236_fu_13025919_p1.read().is_01() || !zext_ln1118_2093_fu_12995783_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2236_fu_13025919_p1.read()) + sc_biguint<12>(zext_ln1118_2093_fu_12995783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3941_fu_13037160_p2() {
    add_ln703_3941_fu_13037160_p2 = (!sext_ln703_2237_fu_13037157_p1.read().is_01() || !sext_ln703_2235_fu_13037154_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2237_fu_13037157_p1.read()) + sc_bigint<14>(sext_ln703_2235_fu_13037154_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3942_fu_13025929_p2() {
    add_ln703_3942_fu_13025929_p2 = (!sext_ln1118_1190_fu_12995797_p1.read().is_01() || !sext_ln1118_1191_fu_12995811_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1190_fu_12995797_p1.read()) + sc_bigint<11>(sext_ln1118_1191_fu_12995811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3943_fu_13025939_p2() {
    add_ln703_3943_fu_13025939_p2 = (!sext_ln703_2238_fu_13025935_p1.read().is_01() || !sext_ln1118_1187_fu_12995731_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2238_fu_13025935_p1.read()) + sc_bigint<12>(sext_ln1118_1187_fu_12995731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3944_fu_13025945_p2() {
    add_ln703_3944_fu_13025945_p2 = (!sext_ln1118_1186_fu_12995717_p1.read().is_01() || !zext_ln1118_2088_fu_12995681_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1186_fu_12995717_p1.read()) + sc_biguint<9>(zext_ln1118_2088_fu_12995681_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3945_fu_13025955_p2() {
    add_ln703_3945_fu_13025955_p2 = (!sext_ln703_2239_fu_13025951_p1.read().is_01() || !sext_ln1118_1189_fu_12995769_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2239_fu_13025951_p1.read()) + sc_bigint<10>(sext_ln1118_1189_fu_12995769_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3946_fu_13025965_p2() {
    add_ln703_3946_fu_13025965_p2 = (!sext_ln703_2240_fu_13025961_p1.read().is_01() || !add_ln703_3943_fu_13025939_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2240_fu_13025961_p1.read()) + sc_biguint<12>(add_ln703_3943_fu_13025939_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3947_fu_13037169_p2() {
    add_ln703_3947_fu_13037169_p2 = (!sext_ln703_2241_fu_13037166_p1.read().is_01() || !add_ln703_3941_fu_13037160_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2241_fu_13037166_p1.read()) + sc_biguint<14>(add_ln703_3941_fu_13037160_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3948_fu_13025971_p2() {
    add_ln703_3948_fu_13025971_p2 = (!sext_ln203_776_fu_12995911_p1.read().is_01() || !sext_ln203_778_fu_12995963_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_776_fu_12995911_p1.read()) + sc_bigint<12>(sext_ln203_778_fu_12995963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3949_fu_13037182_p2() {
    add_ln703_3949_fu_13037182_p2 = (!sext_ln703_2243_fu_13037179_p1.read().is_01() || !sext_ln703_2242_fu_13037175_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2243_fu_13037179_p1.read()) + sc_bigint<15>(sext_ln703_2242_fu_13037175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_394_fu_13002839_p2() {
    add_ln703_394_fu_13002839_p2 = (!trunc_ln_fu_12926754_p4.read().is_01() || !zext_ln1118_86_fu_12926779_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln_fu_12926754_p4.read()) + sc_biguint<10>(zext_ln1118_86_fu_12926779_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3950_fu_13025977_p2() {
    add_ln703_3950_fu_13025977_p2 = (!zext_ln708_790_fu_12990489_p1.read().is_01() || !sext_ln203_772_fu_12995831_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_790_fu_12990489_p1.read()) + sc_bigint<11>(sext_ln203_772_fu_12995831_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3951_fu_13025983_p2() {
    add_ln703_3951_fu_13025983_p2 = (!add_ln703_3950_fu_13025977_p2.read().is_01() || !zext_ln708_854_fu_12995987_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3950_fu_13025977_p2.read()) + sc_biguint<11>(zext_ln708_854_fu_12995987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3952_fu_13037191_p2() {
    add_ln703_3952_fu_13037191_p2 = (!sext_ln703_2244_fu_13037188_p1.read().is_01() || !add_ln703_3949_fu_13037182_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2244_fu_13037188_p1.read()) + sc_biguint<15>(add_ln703_3949_fu_13037182_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3953_fu_13025989_p2() {
    add_ln703_3953_fu_13025989_p2 = (!sext_ln203_775_fu_12995897_p1.read().is_01() || !sext_ln203_779_fu_12996001_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_775_fu_12995897_p1.read()) + sc_bigint<11>(sext_ln203_779_fu_12996001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3954_fu_13025999_p2() {
    add_ln703_3954_fu_13025999_p2 = (!sext_ln703_2245_fu_13025995_p1.read().is_01() || !sext_ln203_774_fu_12995869_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2245_fu_13025995_p1.read()) + sc_bigint<12>(sext_ln203_774_fu_12995869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3955_fu_13026009_p2() {
    add_ln703_3955_fu_13026009_p2 = (!sext_ln203_773_fu_12995855_p1.read().is_01() || !sext_ln203_777_fu_12995949_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_773_fu_12995855_p1.read()) + sc_bigint<10>(sext_ln203_777_fu_12995949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3956_fu_13026019_p2() {
    add_ln703_3956_fu_13026019_p2 = (!sext_ln203_780_fu_12996025_p1.read().is_01() || !zext_ln203_293_fu_12995883_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_780_fu_12996025_p1.read()) + sc_biguint<9>(zext_ln203_293_fu_12995883_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3957_fu_13026029_p2() {
    add_ln703_3957_fu_13026029_p2 = (!sext_ln703_2248_fu_13026025_p1.read().is_01() || !sext_ln703_2247_fu_13026015_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2248_fu_13026025_p1.read()) + sc_bigint<11>(sext_ln703_2247_fu_13026015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3958_fu_13026039_p2() {
    add_ln703_3958_fu_13026039_p2 = (!sext_ln703_2249_fu_13026035_p1.read().is_01() || !sext_ln703_2246_fu_13026005_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2249_fu_13026035_p1.read()) + sc_bigint<13>(sext_ln703_2246_fu_13026005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_395_fu_13029398_p2() {
    add_ln703_395_fu_13029398_p2 = (!zext_ln703_7_fu_13029395_p1.read().is_01() || !add_ln703_393_fu_13029389_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_7_fu_13029395_p1.read()) + sc_biguint<14>(add_ln703_393_fu_13029389_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3960_fu_13026045_p2() {
    add_ln703_3960_fu_13026045_p2 = (!sext_ln1118_1172_fu_12995379_p1.read().is_01() || !ap_const_lv10_218.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1172_fu_12995379_p1.read()) + sc_bigint<10>(ap_const_lv10_218));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3961_fu_13026055_p2() {
    add_ln703_3961_fu_13026055_p2 = (!sext_ln1118_1194_fu_12996043_p1.read().is_01() || !sext_ln1118_1193_fu_12996039_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1194_fu_12996043_p1.read()) + sc_bigint<12>(sext_ln1118_1193_fu_12996039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3962_fu_13026065_p2() {
    add_ln703_3962_fu_13026065_p2 = (!sext_ln703_2252_fu_13026061_p1.read().is_01() || !zext_ln703_523_fu_13026051_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2252_fu_13026061_p1.read()) + sc_biguint<13>(zext_ln703_523_fu_13026051_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3963_fu_13026071_p2() {
    add_ln703_3963_fu_13026071_p2 = (!sext_ln1118_1195_fu_12996063_p1.read().is_01() || !zext_ln1118_2099_fu_12996067_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1195_fu_12996063_p1.read()) + sc_biguint<12>(zext_ln1118_2099_fu_12996067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3964_fu_13026081_p2() {
    add_ln703_3964_fu_13026081_p2 = (!sext_ln703_2253_fu_13026077_p1.read().is_01() || !add_ln703_3962_fu_13026065_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2253_fu_13026077_p1.read()) + sc_biguint<13>(add_ln703_3962_fu_13026065_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3965_fu_13026091_p2() {
    add_ln703_3965_fu_13026091_p2 = (!sext_ln1118_1197_fu_12996125_p1.read().is_01() || !sext_ln1118_1196_fu_12996091_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1197_fu_12996125_p1.read()) + sc_bigint<10>(sext_ln1118_1196_fu_12996091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3966_fu_13026101_p2() {
    add_ln703_3966_fu_13026101_p2 = (!sext_ln703_2255_fu_13026097_p1.read().is_01() || !zext_ln708_855_fu_12996111_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2255_fu_13026097_p1.read()) + sc_biguint<11>(zext_ln708_855_fu_12996111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3967_fu_13026111_p2() {
    add_ln703_3967_fu_13026111_p2 = (!sext_ln703_2256_fu_13026107_p1.read().is_01() || !sext_ln703_2254_fu_13026087_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2256_fu_13026107_p1.read()) + sc_bigint<14>(sext_ln703_2254_fu_13026087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3968_fu_13026117_p2() {
    add_ln703_3968_fu_13026117_p2 = (!sext_ln1118_1160_fu_12994394_p1.read().is_01() || !sext_ln1116_131_fu_12983900_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1160_fu_12994394_p1.read()) + sc_bigint<12>(sext_ln1116_131_fu_12983900_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3969_fu_13026127_p2() {
    add_ln703_3969_fu_13026127_p2 = (!sext_ln703_2257_fu_13026123_p1.read().is_01() || !add_ln703_3967_fu_13026111_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2257_fu_13026123_p1.read()) + sc_biguint<14>(add_ln703_3967_fu_13026111_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_396_fu_13002845_p2() {
    add_ln703_396_fu_13002845_p2 = (!zext_ln708_22_fu_12926913_p1.read().is_01() || !zext_ln708_24_fu_12926943_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_22_fu_12926913_p1.read()) + sc_biguint<11>(zext_ln708_24_fu_12926943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3970_fu_13026133_p2() {
    add_ln703_3970_fu_13026133_p2 = (!sext_ln1118_1199_fu_12996239_p1.read().is_01() || !sext_ln1118_1164_fu_12994554_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1199_fu_12996239_p1.read()) + sc_bigint<12>(sext_ln1118_1164_fu_12994554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3971_fu_13026143_p2() {
    add_ln703_3971_fu_13026143_p2 = (!sext_ln1118_1201_fu_12996311_p1.read().is_01() || !zext_ln1118_2102_fu_12996149_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1201_fu_12996311_p1.read()) + sc_biguint<12>(zext_ln1118_2102_fu_12996149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3972_fu_13026153_p2() {
    add_ln703_3972_fu_13026153_p2 = (!sext_ln703_2260_fu_13026149_p1.read().is_01() || !sext_ln703_2259_fu_13026139_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2260_fu_13026149_p1.read()) + sc_bigint<13>(sext_ln703_2259_fu_13026139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3973_fu_13037216_p2() {
    add_ln703_3973_fu_13037216_p2 = (!sext_ln703_2261_fu_13037213_p1.read().is_01() || !sext_ln703_2258_fu_13037210_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2261_fu_13037213_p1.read()) + sc_bigint<15>(sext_ln703_2258_fu_13037210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3974_fu_13026159_p2() {
    add_ln703_3974_fu_13026159_p2 = (!zext_ln1118_2105_fu_12996225_p1.read().is_01() || !zext_ln1118_2107_fu_12996263_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2105_fu_12996225_p1.read()) + sc_biguint<9>(zext_ln1118_2107_fu_12996263_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3975_fu_13026169_p2() {
    add_ln703_3975_fu_13026169_p2 = (!zext_ln703_524_fu_13026165_p1.read().is_01() || !zext_ln708_856_fu_12996201_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_524_fu_13026165_p1.read()) + sc_biguint<11>(zext_ln708_856_fu_12996201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3976_fu_13026179_p2() {
    add_ln703_3976_fu_13026179_p2 = (!zext_ln708_857_fu_12996297_p1.read().is_01() || !sext_ln1118_1198_fu_12996173_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_857_fu_12996297_p1.read()) + sc_bigint<11>(sext_ln1118_1198_fu_12996173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3977_fu_13026185_p2() {
    add_ln703_3977_fu_13026185_p2 = (!zext_ln1118_2104_fu_12996205_p1.read().is_01() || !sext_ln1118_1200_fu_12996277_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2104_fu_12996205_p1.read()) + sc_bigint<9>(sext_ln1118_1200_fu_12996277_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3978_fu_13026195_p2() {
    add_ln703_3978_fu_13026195_p2 = (!sext_ln703_2262_fu_13026191_p1.read().is_01() || !add_ln703_3976_fu_13026179_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2262_fu_13026191_p1.read()) + sc_biguint<11>(add_ln703_3976_fu_13026179_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3979_fu_13026205_p2() {
    add_ln703_3979_fu_13026205_p2 = (!sext_ln703_2263_fu_13026201_p1.read().is_01() || !zext_ln703_525_fu_13026175_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2263_fu_13026201_p1.read()) + sc_biguint<13>(zext_ln703_525_fu_13026175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_397_fu_13002851_p2() {
    add_ln703_397_fu_13002851_p2 = (!trunc_ln1118_s_fu_12926977_p4.read().is_01() || !zext_ln1118_97_fu_12927032_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_s_fu_12926977_p4.read()) + sc_biguint<10>(zext_ln1118_97_fu_12927032_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3980_fu_13037225_p2() {
    add_ln703_3980_fu_13037225_p2 = (!sext_ln703_2264_fu_13037222_p1.read().is_01() || !add_ln703_3973_fu_13037216_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2264_fu_13037222_p1.read()) + sc_biguint<15>(add_ln703_3973_fu_13037216_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3981_fu_13037231_p2() {
    add_ln703_3981_fu_13037231_p2 = (!add_ln703_3980_fu_13037225_p2.read().is_01() || !sext_ln203_782_fu_13029256_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3980_fu_13037225_p2.read()) + sc_bigint<15>(sext_ln203_782_fu_13029256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3982_fu_13026211_p2() {
    add_ln703_3982_fu_13026211_p2 = (!sext_ln203_783_fu_12996387_p1.read().is_01() || !sext_ln203_784_fu_12996401_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_783_fu_12996387_p1.read()) + sc_bigint<12>(sext_ln203_784_fu_12996401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3983_fu_13026221_p2() {
    add_ln703_3983_fu_13026221_p2 = (!sext_ln703_2265_fu_13026217_p1.read().is_01() || !sext_ln203_718_fu_12990364_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2265_fu_13026217_p1.read()) + sc_bigint<13>(sext_ln203_718_fu_12990364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3984_fu_13037240_p2() {
    add_ln703_3984_fu_13037240_p2 = (!sext_ln703_2266_fu_13037237_p1.read().is_01() || !add_ln703_3981_fu_13037231_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2266_fu_13037237_p1.read()) + sc_biguint<15>(add_ln703_3981_fu_13037231_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3985_fu_13026227_p2() {
    add_ln703_3985_fu_13026227_p2 = (!zext_ln708_858_fu_12996467_p1.read().is_01() || !sext_ln203_787_fu_12996453_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_858_fu_12996467_p1.read()) + sc_bigint<11>(sext_ln203_787_fu_12996453_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3986_fu_13026237_p2() {
    add_ln703_3986_fu_13026237_p2 = (!sext_ln703_2268_fu_13026233_p1.read().is_01() || !sext_ln203_762_fu_12994748_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2268_fu_13026233_p1.read()) + sc_bigint<12>(sext_ln203_762_fu_12994748_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3987_fu_13026247_p2() {
    add_ln703_3987_fu_13026247_p2 = (!sext_ln203_785_fu_12996425_p1.read().is_01() || !sext_ln203_786_fu_12996439_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_785_fu_12996425_p1.read()) + sc_bigint<9>(sext_ln203_786_fu_12996439_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3988_fu_13026257_p2() {
    add_ln703_3988_fu_13026257_p2 = (!sext_ln703_2270_fu_13026253_p1.read().is_01() || !sext_ln203_781_fu_12996353_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2270_fu_13026253_p1.read()) + sc_bigint<10>(sext_ln203_781_fu_12996353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3989_fu_13026267_p2() {
    add_ln703_3989_fu_13026267_p2 = (!sext_ln703_2271_fu_13026263_p1.read().is_01() || !sext_ln703_2269_fu_13026243_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2271_fu_13026263_p1.read()) + sc_bigint<13>(sext_ln703_2269_fu_13026243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_398_fu_13002861_p2() {
    add_ln703_398_fu_13002861_p2 = (!zext_ln703_8_fu_13002857_p1.read().is_01() || !add_ln703_396_fu_13002845_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_8_fu_13002857_p1.read()) + sc_biguint<11>(add_ln703_396_fu_13002845_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3991_fu_13026273_p2() {
    add_ln703_3991_fu_13026273_p2 = (!sext_ln203_788_fu_12996481_p1.read().is_01() || !zext_ln203_294_fu_12996485_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_788_fu_12996481_p1.read()) + sc_biguint<12>(zext_ln203_294_fu_12996485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3992_fu_13026279_p2() {
    add_ln703_3992_fu_13026279_p2 = (!zext_ln1118_2111_fu_12996513_p1.read().is_01() || !ap_const_lv10_290.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2111_fu_12996513_p1.read()) + sc_bigint<10>(ap_const_lv10_290));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3993_fu_13026289_p2() {
    add_ln703_3993_fu_13026289_p2 = (!sext_ln703_2273_fu_13026285_p1.read().is_01() || !zext_ln708_859_fu_12996499_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2273_fu_13026285_p1.read()) + sc_biguint<11>(zext_ln708_859_fu_12996499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3994_fu_13026299_p2() {
    add_ln703_3994_fu_13026299_p2 = (!sext_ln703_2274_fu_13026295_p1.read().is_01() || !add_ln703_3991_fu_13026273_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2274_fu_13026295_p1.read()) + sc_biguint<12>(add_ln703_3991_fu_13026273_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3995_fu_13026309_p2() {
    add_ln703_3995_fu_13026309_p2 = (!sext_ln703_1048_fu_13026305_p1.read().is_01() || !sext_ln203_789_fu_12996583_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1048_fu_13026305_p1.read()) + sc_bigint<13>(sext_ln203_789_fu_12996583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3996_fu_13026315_p2() {
    add_ln703_3996_fu_13026315_p2 = (!zext_ln708_860_fu_12996559_p1.read().is_01() || !sext_ln708_176_fu_12996545_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_860_fu_12996559_p1.read()) + sc_bigint<8>(sext_ln708_176_fu_12996545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3997_fu_13037262_p2() {
    add_ln703_3997_fu_13037262_p2 = (!sext_ln703_2275_fu_13037259_p1.read().is_01() || !add_ln703_3995_reg_13043650.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2275_fu_13037259_p1.read()) + sc_biguint<13>(add_ln703_3995_reg_13043650.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3998_fu_13037267_p2() {
    add_ln703_3998_fu_13037267_p2 = (!add_ln703_3997_fu_13037262_p2.read().is_01() || !sext_ln1118_1203_reg_13039615.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3997_fu_13037262_p2.read()) + sc_bigint<13>(sext_ln1118_1203_reg_13039615.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3999_fu_13026321_p2() {
    add_ln703_3999_fu_13026321_p2 = (!zext_ln708_861_fu_12996655_p1.read().is_01() || !sext_ln1118_1206_fu_12996641_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_861_fu_12996655_p1.read()) + sc_bigint<10>(sext_ln1118_1206_fu_12996641_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_399_fu_13029411_p2() {
    add_ln703_399_fu_13029411_p2 = (!zext_ln703_9_fu_13029408_p1.read().is_01() || !sext_ln703_150_fu_13029404_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_9_fu_13029408_p1.read()) + sc_bigint<15>(sext_ln703_150_fu_13029404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4000_fu_13026331_p2() {
    add_ln703_4000_fu_13026331_p2 = (!sext_ln703_2277_fu_13026327_p1.read().is_01() || !sext_ln1118_1205_fu_12996617_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2277_fu_13026327_p1.read()) + sc_bigint<12>(sext_ln1118_1205_fu_12996617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4001_fu_13037279_p2() {
    add_ln703_4001_fu_13037279_p2 = (!sext_ln703_2278_fu_13037276_p1.read().is_01() || !sext_ln703_2276_fu_13037272_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2278_fu_13037276_p1.read()) + sc_bigint<14>(sext_ln703_2276_fu_13037272_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4002_fu_13026337_p2() {
    add_ln703_4002_fu_13026337_p2 = (!zext_ln708_862_fu_12996675_p1.read().is_01() || !zext_ln708_863_fu_12996689_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_862_fu_12996675_p1.read()) + sc_biguint<11>(zext_ln708_863_fu_12996689_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4003_fu_13037288_p2() {
    add_ln703_4003_fu_13037288_p2 = (!zext_ln703_526_fu_13037285_p1.read().is_01() || !add_ln703_4001_fu_13037279_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_526_fu_13037285_p1.read()) + sc_biguint<14>(add_ln703_4001_fu_13037279_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4004_fu_13026343_p2() {
    add_ln703_4004_fu_13026343_p2 = (!zext_ln708_865_fu_12996779_p1.read().is_01() || !zext_ln708_866_fu_12996807_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_865_fu_12996779_p1.read()) + sc_biguint<11>(zext_ln708_866_fu_12996807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4005_fu_13026353_p2() {
    add_ln703_4005_fu_13026353_p2 = (!zext_ln703_527_fu_13026349_p1.read().is_01() || !zext_ln1118_2117_fu_12996765_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_527_fu_13026349_p1.read()) + sc_biguint<12>(zext_ln1118_2117_fu_12996765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4006_fu_13037301_p2() {
    add_ln703_4006_fu_13037301_p2 = (!zext_ln703_528_fu_13037298_p1.read().is_01() || !sext_ln703_2279_fu_13037294_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_528_fu_13037298_p1.read()) + sc_bigint<15>(sext_ln703_2279_fu_13037294_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4007_fu_13026359_p2() {
    add_ln703_4007_fu_13026359_p2 = (!sext_ln1118_1207_fu_12996741_p1.read().is_01() || !sext_ln708_177_fu_12996713_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1207_fu_12996741_p1.read()) + sc_bigint<11>(sext_ln708_177_fu_12996713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4008_fu_13026369_p2() {
    add_ln703_4008_fu_13026369_p2 = (!sext_ln703_2280_fu_13026365_p1.read().is_01() || !zext_ln1118_2118_fu_12996821_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2280_fu_13026365_p1.read()) + sc_biguint<12>(zext_ln1118_2118_fu_12996821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4009_fu_13026375_p2() {
    add_ln703_4009_fu_13026375_p2 = (!zext_ln1118_2116_fu_12996727_p1.read().is_01() || !sext_ln1118_1208_fu_12996845_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2116_fu_12996727_p1.read()) + sc_bigint<9>(sext_ln1118_1208_fu_12996845_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_400_fu_13002867_p2() {
    add_ln703_400_fu_13002867_p2 = (!zext_ln1118_100_fu_12927062_p1.read().is_01() || !zext_ln1118_102_fu_12927102_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_100_fu_12927062_p1.read()) + sc_biguint<10>(zext_ln1118_102_fu_12927102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4010_fu_13026385_p2() {
    add_ln703_4010_fu_13026385_p2 = (!sext_ln703_2281_fu_13026381_p1.read().is_01() || !sext_ln708_178_fu_12996793_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2281_fu_13026381_p1.read()) + sc_bigint<10>(sext_ln708_178_fu_12996793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4011_fu_13026395_p2() {
    add_ln703_4011_fu_13026395_p2 = (!sext_ln703_2282_fu_13026391_p1.read().is_01() || !add_ln703_4008_fu_13026369_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2282_fu_13026391_p1.read()) + sc_biguint<12>(add_ln703_4008_fu_13026369_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4012_fu_13037310_p2() {
    add_ln703_4012_fu_13037310_p2 = (!sext_ln703_2283_fu_13037307_p1.read().is_01() || !add_ln703_4006_fu_13037301_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2283_fu_13037307_p1.read()) + sc_biguint<15>(add_ln703_4006_fu_13037301_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4013_fu_13037316_p2() {
    add_ln703_4013_fu_13037316_p2 = (!add_ln703_4012_fu_13037310_p2.read().is_01() || !sext_ln203_790_fu_13029259_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4012_fu_13037310_p2.read()) + sc_bigint<15>(sext_ln203_790_fu_13029259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4014_fu_13026401_p2() {
    add_ln703_4014_fu_13026401_p2 = (!trunc_ln203_46_fu_12996883_p4.read().is_01() || !zext_ln203_295_fu_12996893_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_46_fu_12996883_p4.read()) + sc_biguint<10>(zext_ln203_295_fu_12996893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4015_fu_13026411_p2() {
    add_ln703_4015_fu_13026411_p2 = (!zext_ln703_529_fu_13026407_p1.read().is_01() || !zext_ln708_867_fu_12996879_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_529_fu_13026407_p1.read()) + sc_biguint<11>(zext_ln708_867_fu_12996879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4016_fu_13037325_p2() {
    add_ln703_4016_fu_13037325_p2 = (!zext_ln703_530_fu_13037322_p1.read().is_01() || !add_ln703_4013_fu_13037316_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_530_fu_13037322_p1.read()) + sc_biguint<15>(add_ln703_4013_fu_13037316_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4017_fu_13026417_p2() {
    add_ln703_4017_fu_13026417_p2 = (!zext_ln708_869_fu_12996921_p1.read().is_01() || !zext_ln708_870_fu_12996945_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_869_fu_12996921_p1.read()) + sc_biguint<11>(zext_ln708_870_fu_12996945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4018_fu_13026423_p2() {
    add_ln703_4018_fu_13026423_p2 = (!add_ln703_4017_fu_13026417_p2.read().is_01() || !zext_ln708_851_fu_12995300_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4017_fu_13026417_p2.read()) + sc_biguint<11>(zext_ln708_851_fu_12995300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4019_fu_13026433_p2() {
    add_ln703_4019_fu_13026433_p2 = (!zext_ln203_296_fu_12996959_p1.read().is_01() || !sext_ln203_791_fu_12996897_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln203_296_fu_12996959_p1.read()) + sc_bigint<7>(sext_ln203_791_fu_12996897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_401_fu_13002877_p2() {
    add_ln703_401_fu_13002877_p2 = (!zext_ln708_28_fu_12927158_p1.read().is_01() || !sext_ln1118_215_fu_12926833_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_28_fu_12927158_p1.read()) + sc_bigint<11>(sext_ln1118_215_fu_12926833_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4020_fu_13026443_p2() {
    add_ln703_4020_fu_13026443_p2 = (!sext_ln703_2284_fu_13026439_p1.read().is_01() || !sext_ln203_727_fu_12990991_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_2284_fu_13026439_p1.read()) + sc_bigint<9>(sext_ln203_727_fu_12990991_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4021_fu_13026453_p2() {
    add_ln703_4021_fu_13026453_p2 = (!sext_ln703_2285_fu_13026449_p1.read().is_01() || !zext_ln703_531_fu_13026429_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2285_fu_13026449_p1.read()) + sc_biguint<12>(zext_ln703_531_fu_13026429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4023_fu_13026459_p2() {
    add_ln703_4023_fu_13026459_p2 = (!zext_ln708_872_fu_12996983_p1.read().is_01() || !ap_const_lv11_460.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_872_fu_12996983_p1.read()) + sc_bigint<11>(ap_const_lv11_460));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4024_fu_13026469_p2() {
    add_ln703_4024_fu_13026469_p2 = (!sext_ln703_1052_fu_13026465_p1.read().is_01() || !sext_ln203_792_fu_12997003_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1052_fu_13026465_p1.read()) + sc_bigint<12>(sext_ln203_792_fu_12997003_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4025_fu_13026479_p2() {
    add_ln703_4025_fu_13026479_p2 = (!sext_ln1116_151_fu_12997077_p1.read().is_01() || !zext_ln1116_197_fu_12997053_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_151_fu_12997077_p1.read()) + sc_biguint<12>(zext_ln1116_197_fu_12997053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4026_fu_13026489_p2() {
    add_ln703_4026_fu_13026489_p2 = (!sext_ln703_2288_fu_13026485_p1.read().is_01() || !sext_ln703_1053_fu_13026475_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2288_fu_13026485_p1.read()) + sc_bigint<13>(sext_ln703_1053_fu_13026475_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4027_fu_13026495_p2() {
    add_ln703_4027_fu_13026495_p2 = (!zext_ln708_874_fu_12997105_p1.read().is_01() || !sext_ln1118_1209_fu_12997035_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_874_fu_12997105_p1.read()) + sc_bigint<11>(sext_ln1118_1209_fu_12997035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4028_fu_13026501_p2() {
    add_ln703_4028_fu_13026501_p2 = (!add_ln703_4027_fu_13026495_p2.read().is_01() || !zext_ln708_873_fu_12997091_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4027_fu_13026495_p2.read()) + sc_biguint<11>(zext_ln708_873_fu_12997091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4029_fu_13026511_p2() {
    add_ln703_4029_fu_13026511_p2 = (!sext_ln703_2289_fu_13026507_p1.read().is_01() || !add_ln703_4026_fu_13026489_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2289_fu_13026507_p1.read()) + sc_biguint<13>(add_ln703_4026_fu_13026489_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_402_fu_13002887_p2() {
    add_ln703_402_fu_13002887_p2 = (!sext_ln703_151_fu_13002883_p1.read().is_01() || !zext_ln703_10_fu_13002873_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_151_fu_13002883_p1.read()) + sc_biguint<12>(zext_ln703_10_fu_13002873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4030_fu_13026517_p2() {
    add_ln703_4030_fu_13026517_p2 = (!add_ln703_4029_fu_13026511_p2.read().is_01() || !sext_ln1118_1203_fu_12996587_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_4029_fu_13026511_p2.read()) + sc_bigint<13>(sext_ln1118_1203_fu_12996587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4031_fu_13026523_p2() {
    add_ln703_4031_fu_13026523_p2 = (!sext_ln1118_1210_fu_12997119_p1.read().is_01() || !sext_ln1116_152_fu_12997225_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1210_fu_12997119_p1.read()) + sc_bigint<12>(sext_ln1116_152_fu_12997225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4032_fu_13037350_p2() {
    add_ln703_4032_fu_13037350_p2 = (!sext_ln703_2291_fu_13037347_p1.read().is_01() || !sext_ln703_2290_fu_13037344_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2291_fu_13037347_p1.read()) + sc_bigint<14>(sext_ln703_2290_fu_13037344_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4033_fu_13026529_p2() {
    add_ln703_4033_fu_13026529_p2 = (!zext_ln1118_2126_fu_12997167_p1.read().is_01() || !zext_ln1118_2128_fu_12997191_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2126_fu_12997167_p1.read()) + sc_biguint<9>(zext_ln1118_2128_fu_12997191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4034_fu_13026539_p2() {
    add_ln703_4034_fu_13026539_p2 = (!zext_ln708_875_fu_12997245_p1.read().is_01() || !sext_ln1118_1212_fu_12997143_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_875_fu_12997245_p1.read()) + sc_bigint<11>(sext_ln1118_1212_fu_12997143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4035_fu_13026545_p2() {
    add_ln703_4035_fu_13026545_p2 = (!add_ln703_4034_fu_13026539_p2.read().is_01() || !zext_ln703_532_fu_13026535_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4034_fu_13026539_p2.read()) + sc_biguint<11>(zext_ln703_532_fu_13026535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4036_fu_13037359_p2() {
    add_ln703_4036_fu_13037359_p2 = (!sext_ln703_2292_fu_13037356_p1.read().is_01() || !add_ln703_4032_fu_13037350_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2292_fu_13037356_p1.read()) + sc_biguint<14>(add_ln703_4032_fu_13037350_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4037_fu_13037365_p2() {
    add_ln703_4037_fu_13037365_p2 = (!add_ln703_4036_fu_13037359_p2.read().is_01() || !zext_ln1118_2130_fu_13029262_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4036_fu_13037359_p2.read()) + sc_biguint<14>(zext_ln1118_2130_fu_13029262_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4038_fu_13026551_p2() {
    add_ln703_4038_fu_13026551_p2 = (!zext_ln708_877_fu_12997289_p1.read().is_01() || !zext_ln708_878_fu_12997419_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_877_fu_12997289_p1.read()) + sc_biguint<11>(zext_ln708_878_fu_12997419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4039_fu_13026557_p2() {
    add_ln703_4039_fu_13026557_p2 = (!add_ln703_4038_fu_13026551_p2.read().is_01() || !zext_ln708_876_fu_12997275_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4038_fu_13026551_p2.read()) + sc_biguint<11>(zext_ln708_876_fu_12997275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_403_fu_13002897_p2() {
    add_ln703_403_fu_13002897_p2 = (!sext_ln1118_219_fu_12927144_p1.read().is_01() || !zext_ln708_25_fu_12926955_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_219_fu_12927144_p1.read()) + sc_biguint<11>(zext_ln708_25_fu_12926955_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4040_fu_13037378_p2() {
    add_ln703_4040_fu_13037378_p2 = (!zext_ln703_533_fu_13037375_p1.read().is_01() || !sext_ln703_2293_fu_13037371_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_533_fu_13037375_p1.read()) + sc_bigint<15>(sext_ln703_2293_fu_13037371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4041_fu_13026563_p2() {
    add_ln703_4041_fu_13026563_p2 = (!sext_ln1116_153_fu_12997317_p1.read().is_01() || !sext_ln1118_1216_fu_12997363_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_153_fu_12997317_p1.read()) + sc_bigint<10>(sext_ln1118_1216_fu_12997363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4042_fu_13026573_p2() {
    add_ln703_4042_fu_13026573_p2 = (!sext_ln703_2294_fu_13026569_p1.read().is_01() || !zext_ln708_879_fu_12997451_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2294_fu_13026569_p1.read()) + sc_biguint<11>(zext_ln708_879_fu_12997451_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4043_fu_13026579_p2() {
    add_ln703_4043_fu_13026579_p2 = (!sext_ln708_179_fu_12997405_p1.read().is_01() || !sext_ln1116_154_fu_12997367_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_179_fu_12997405_p1.read()) + sc_bigint<9>(sext_ln1116_154_fu_12997367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4044_fu_13026589_p2() {
    add_ln703_4044_fu_13026589_p2 = (!sext_ln703_2295_fu_13026585_p1.read().is_01() || !sext_ln1118_1217_fu_12997371_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2295_fu_13026585_p1.read()) + sc_bigint<10>(sext_ln1118_1217_fu_12997371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4045_fu_13026599_p2() {
    add_ln703_4045_fu_13026599_p2 = (!sext_ln703_2296_fu_13026595_p1.read().is_01() || !add_ln703_4042_fu_13026573_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2296_fu_13026595_p1.read()) + sc_biguint<11>(add_ln703_4042_fu_13026573_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4046_fu_13037387_p2() {
    add_ln703_4046_fu_13037387_p2 = (!sext_ln703_2297_fu_13037384_p1.read().is_01() || !add_ln703_4040_fu_13037378_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2297_fu_13037384_p1.read()) + sc_biguint<15>(add_ln703_4040_fu_13037378_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4047_fu_13037393_p2() {
    add_ln703_4047_fu_13037393_p2 = (!add_ln703_4046_fu_13037387_p2.read().is_01() || !zext_ln203_297_fu_13029265_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4046_fu_13037387_p2.read()) + sc_biguint<15>(zext_ln203_297_fu_13029265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4048_fu_13026605_p2() {
    add_ln703_4048_fu_13026605_p2 = (!sext_ln203_794_fu_12997509_p1.read().is_01() || !zext_ln203_298_fu_12997481_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_794_fu_12997509_p1.read()) + sc_biguint<12>(zext_ln203_298_fu_12997481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4049_fu_13037402_p2() {
    add_ln703_4049_fu_13037402_p2 = (!sext_ln703_2298_fu_13037399_p1.read().is_01() || !add_ln703_4047_fu_13037393_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2298_fu_13037399_p1.read()) + sc_biguint<15>(add_ln703_4047_fu_13037393_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_404_fu_13002903_p2() {
    add_ln703_404_fu_13002903_p2 = (!sext_ln1118_217_fu_12926887_p1.read().is_01() || !sext_ln1118_213_fu_12926715_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_217_fu_12926887_p1.read()) + sc_bigint<9>(sext_ln1118_213_fu_12926715_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4050_fu_13026611_p2() {
    add_ln703_4050_fu_13026611_p2 = (!trunc_ln203_47_fu_12997533_p4.read().is_01() || !zext_ln203_300_fu_12997553_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_47_fu_12997533_p4.read()) + sc_biguint<10>(zext_ln203_300_fu_12997553_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4051_fu_13026621_p2() {
    add_ln703_4051_fu_13026621_p2 = (!sext_ln203_793_fu_12997495_p1.read().is_01() || !zext_ln203_299_fu_12997523_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_793_fu_12997495_p1.read()) + sc_biguint<11>(zext_ln203_299_fu_12997523_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4052_fu_13026627_p2() {
    add_ln703_4052_fu_13026627_p2 = (!add_ln703_4051_fu_13026621_p2.read().is_01() || !zext_ln708_880_fu_12997567_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4051_fu_13026621_p2.read()) + sc_biguint<11>(zext_ln708_880_fu_12997567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4053_fu_13026637_p2() {
    add_ln703_4053_fu_13026637_p2 = (!sext_ln703_2299_fu_13026633_p1.read().is_01() || !zext_ln703_534_fu_13026617_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2299_fu_13026633_p1.read()) + sc_biguint<12>(zext_ln703_534_fu_13026617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4055_fu_13026643_p2() {
    add_ln703_4055_fu_13026643_p2 = (!zext_ln708_881_fu_12997595_p1.read().is_01() || !ap_const_lv11_438.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_881_fu_12997595_p1.read()) + sc_bigint<11>(ap_const_lv11_438));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4056_fu_13026653_p2() {
    add_ln703_4056_fu_13026653_p2 = (!zext_ln708_882_fu_12997637_p1.read().is_01() || !sext_ln1118_1219_fu_12997581_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_882_fu_12997637_p1.read()) + sc_bigint<11>(sext_ln1118_1219_fu_12997581_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4057_fu_13026663_p2() {
    add_ln703_4057_fu_13026663_p2 = (!sext_ln703_2303_fu_13026659_p1.read().is_01() || !zext_ln203_301_fu_12997609_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2303_fu_13026659_p1.read()) + sc_biguint<12>(zext_ln203_301_fu_12997609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4058_fu_13026669_p2() {
    add_ln703_4058_fu_13026669_p2 = (!add_ln703_4057_fu_13026663_p2.read().is_01() || !sext_ln703_2302_fu_13026649_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_4057_fu_13026663_p2.read()) + sc_bigint<12>(sext_ln703_2302_fu_13026649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4059_fu_13026679_p2() {
    add_ln703_4059_fu_13026679_p2 = (!sext_ln703_1057_fu_13026675_p1.read().is_01() || !sext_ln203_795_fu_12997665_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1057_fu_13026675_p1.read()) + sc_bigint<13>(sext_ln203_795_fu_12997665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_405_fu_13002913_p2() {
    add_ln703_405_fu_13002913_p2 = (!sext_ln703_153_fu_13002909_p1.read().is_01() || !add_ln703_403_fu_13002897_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_153_fu_13002909_p1.read()) + sc_biguint<11>(add_ln703_403_fu_13002897_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4060_fu_13026685_p2() {
    add_ln703_4060_fu_13026685_p2 = (!zext_ln1118_2136_fu_12997685_p1.read().is_01() || !sext_ln1118_1220_fu_12997651_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2136_fu_12997685_p1.read()) + sc_bigint<10>(sext_ln1118_1220_fu_12997651_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4061_fu_13026695_p2() {
    add_ln703_4061_fu_13026695_p2 = (!sext_ln703_2304_fu_13026691_p1.read().is_01() || !add_ln703_4059_fu_13026679_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2304_fu_13026691_p1.read()) + sc_biguint<13>(add_ln703_4059_fu_13026679_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4062_fu_13026701_p2() {
    add_ln703_4062_fu_13026701_p2 = (!sext_ln1118_1221_fu_12997699_p1.read().is_01() || !sext_ln1118_1222_fu_12997727_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1221_fu_12997699_p1.read()) + sc_bigint<12>(sext_ln1118_1222_fu_12997727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4063_fu_13037427_p2() {
    add_ln703_4063_fu_13037427_p2 = (!sext_ln703_2305_fu_13037424_p1.read().is_01() || !sext_ln703_1058_fu_13037421_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2305_fu_13037424_p1.read()) + sc_bigint<14>(sext_ln703_1058_fu_13037421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4064_fu_13026707_p2() {
    add_ln703_4064_fu_13026707_p2 = (!sext_ln708_180_fu_12997755_p1.read().is_01() || !zext_ln1118_2137_fu_12997713_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_180_fu_12997755_p1.read()) + sc_biguint<12>(zext_ln1118_2137_fu_12997713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4065_fu_13026717_p2() {
    add_ln703_4065_fu_13026717_p2 = (!zext_ln1118_2138_fu_12997741_p1.read().is_01() || !trunc_ln1118_65_fu_12997759_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2138_fu_12997741_p1.read()) + sc_biguint<10>(trunc_ln1118_65_fu_12997759_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4066_fu_13026727_p2() {
    add_ln703_4066_fu_13026727_p2 = (!zext_ln703_535_fu_13026723_p1.read().is_01() || !sext_ln703_2306_fu_13026713_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_535_fu_13026723_p1.read()) + sc_bigint<13>(sext_ln703_2306_fu_13026713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4067_fu_13037436_p2() {
    add_ln703_4067_fu_13037436_p2 = (!sext_ln703_2307_fu_13037433_p1.read().is_01() || !add_ln703_4063_fu_13037427_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2307_fu_13037433_p1.read()) + sc_biguint<14>(add_ln703_4063_fu_13037427_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4068_fu_13037442_p2() {
    add_ln703_4068_fu_13037442_p2 = (!add_ln703_4067_fu_13037436_p2.read().is_01() || !sext_ln1118_1224_fu_13029268_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4067_fu_13037436_p2.read()) + sc_bigint<14>(sext_ln1118_1224_fu_13029268_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4069_fu_13026733_p2() {
    add_ln703_4069_fu_13026733_p2 = (!sext_ln203_796_fu_12997875_p1.read().is_01() || !zext_ln1118_2139_fu_12997789_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_796_fu_12997875_p1.read()) + sc_biguint<12>(zext_ln1118_2139_fu_12997789_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_406_fu_13002923_p2() {
    add_ln703_406_fu_13002923_p2 = (!sext_ln703_154_fu_13002919_p1.read().is_01() || !sext_ln703_152_fu_13002893_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_154_fu_13002919_p1.read()) + sc_bigint<13>(sext_ln703_152_fu_13002893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4070_fu_13037455_p2() {
    add_ln703_4070_fu_13037455_p2 = (!sext_ln703_2309_fu_13037452_p1.read().is_01() || !sext_ln703_2308_fu_13037448_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2309_fu_13037452_p1.read()) + sc_bigint<15>(sext_ln703_2308_fu_13037448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4071_fu_13026739_p2() {
    add_ln703_4071_fu_13026739_p2 = (!zext_ln1118_2140_fu_12997803_p1.read().is_01() || !trunc_ln1118_66_fu_12997807_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_2140_fu_12997803_p1.read()) + sc_biguint<8>(trunc_ln1118_66_fu_12997807_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4072_fu_13026749_p2() {
    add_ln703_4072_fu_13026749_p2 = (!zext_ln1118_2144_fu_12997899_p1.read().is_01() || !trunc_ln1118_67_fu_12997903_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2144_fu_12997899_p1.read()) + sc_biguint<10>(trunc_ln1118_67_fu_12997903_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4073_fu_13026755_p2() {
    add_ln703_4073_fu_13026755_p2 = (!add_ln703_4072_fu_13026749_p2.read().is_01() || !zext_ln708_883_fu_12997837_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_4072_fu_13026749_p2.read()) + sc_biguint<10>(zext_ln708_883_fu_12997837_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4074_fu_13026765_p2() {
    add_ln703_4074_fu_13026765_p2 = (!zext_ln703_537_fu_13026761_p1.read().is_01() || !zext_ln703_536_fu_13026745_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_537_fu_13026761_p1.read()) + sc_biguint<11>(zext_ln703_536_fu_13026745_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4075_fu_13037464_p2() {
    add_ln703_4075_fu_13037464_p2 = (!zext_ln703_538_fu_13037461_p1.read().is_01() || !add_ln703_4070_fu_13037455_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_538_fu_13037461_p1.read()) + sc_biguint<15>(add_ln703_4070_fu_13037455_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4076_fu_13026771_p2() {
    add_ln703_4076_fu_13026771_p2 = (!zext_ln1118_2145_fu_12997923_p1.read().is_01() || !zext_ln708_884_fu_12997937_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2145_fu_12997923_p1.read()) + sc_biguint<10>(zext_ln708_884_fu_12997937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4077_fu_13026781_p2() {
    add_ln703_4077_fu_13026781_p2 = (!zext_ln1118_2146_fu_12997979_p1.read().is_01() || !zext_ln708_887_fu_12997993_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2146_fu_12997979_p1.read()) + sc_biguint<10>(zext_ln708_887_fu_12997993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4078_fu_13026791_p2() {
    add_ln703_4078_fu_13026791_p2 = (!zext_ln703_540_fu_13026787_p1.read().is_01() || !zext_ln708_886_fu_12997961_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_540_fu_13026787_p1.read()) + sc_biguint<11>(zext_ln708_886_fu_12997961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4079_fu_13026801_p2() {
    add_ln703_4079_fu_13026801_p2 = (!zext_ln703_541_fu_13026797_p1.read().is_01() || !zext_ln703_539_fu_13026777_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_541_fu_13026797_p1.read()) + sc_biguint<12>(zext_ln703_539_fu_13026777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_407_fu_13029420_p2() {
    add_ln703_407_fu_13029420_p2 = (!sext_ln703_155_fu_13029417_p1.read().is_01() || !add_ln703_399_fu_13029411_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_155_fu_13029417_p1.read()) + sc_biguint<15>(add_ln703_399_fu_13029411_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4080_fu_13026807_p2() {
    add_ln703_4080_fu_13026807_p2 = (!zext_ln708_888_fu_12997997_p1.read().is_01() || !sext_ln1118_1223_fu_12997785_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_888_fu_12997997_p1.read()) + sc_bigint<11>(sext_ln1118_1223_fu_12997785_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4081_fu_13026817_p2() {
    add_ln703_4081_fu_13026817_p2 = (!zext_ln1118_2142_fu_12997851_p1.read().is_01() || !zext_ln1118_2075_fu_12995134_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2142_fu_12997851_p1.read()) + sc_biguint<9>(zext_ln1118_2075_fu_12995134_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4082_fu_13026827_p2() {
    add_ln703_4082_fu_13026827_p2 = (!zext_ln703_543_fu_13026823_p1.read().is_01() || !sext_ln1118_1226_fu_12997965_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_543_fu_13026823_p1.read()) + sc_bigint<10>(sext_ln1118_1226_fu_12997965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4083_fu_13026837_p2() {
    add_ln703_4083_fu_13026837_p2 = (!sext_ln703_2311_fu_13026833_p1.read().is_01() || !sext_ln703_2310_fu_13026813_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2311_fu_13026833_p1.read()) + sc_bigint<12>(sext_ln703_2310_fu_13026813_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4084_fu_13037476_p2() {
    add_ln703_4084_fu_13037476_p2 = (!sext_ln703_2312_fu_13037473_p1.read().is_01() || !zext_ln703_542_fu_13037470_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2312_fu_13037473_p1.read()) + sc_biguint<13>(zext_ln703_542_fu_13037470_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4085_fu_13037486_p2() {
    add_ln703_4085_fu_13037486_p2 = (!sext_ln703_2313_fu_13037482_p1.read().is_01() || !add_ln703_4075_fu_13037464_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2313_fu_13037482_p1.read()) + sc_biguint<15>(add_ln703_4075_fu_13037464_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4087_fu_13026843_p2() {
    add_ln703_4087_fu_13026843_p2 = (!zext_ln708_727_fu_12984579_p1.read().is_01() || !ap_const_lv11_5E0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_727_fu_12984579_p1.read()) + sc_bigint<11>(ap_const_lv11_5E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4088_fu_13026853_p2() {
    add_ln703_4088_fu_13026853_p2 = (!sext_ln703_1061_fu_13026849_p1.read().is_01() || !sext_ln203_798_fu_12998035_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1061_fu_13026849_p1.read()) + sc_bigint<12>(sext_ln203_798_fu_12998035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4089_fu_13026863_p2() {
    add_ln703_4089_fu_13026863_p2 = (!sext_ln708_181_fu_12998063_p1.read().is_01() || !sext_ln1118_1228_fu_12998049_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_181_fu_12998063_p1.read()) + sc_bigint<12>(sext_ln1118_1228_fu_12998049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_408_fu_13002929_p2() {
    add_ln703_408_fu_13002929_p2 = (!zext_ln708_29_fu_12927247_p1.read().is_01() || !zext_ln708_31_fu_12927287_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_29_fu_12927247_p1.read()) + sc_biguint<11>(zext_ln708_31_fu_12927287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4090_fu_13026873_p2() {
    add_ln703_4090_fu_13026873_p2 = (!sext_ln703_2315_fu_13026869_p1.read().is_01() || !sext_ln703_1062_fu_13026859_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2315_fu_13026869_p1.read()) + sc_bigint<13>(sext_ln703_1062_fu_13026859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4091_fu_13026883_p2() {
    add_ln703_4091_fu_13026883_p2 = (!zext_ln708_889_fu_12998077_p1.read().is_01() || !sext_ln708_182_fu_12998115_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_889_fu_12998077_p1.read()) + sc_bigint<12>(sext_ln708_182_fu_12998115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4092_fu_13026893_p2() {
    add_ln703_4092_fu_13026893_p2 = (!sext_ln703_2316_fu_13026889_p1.read().is_01() || !sext_ln703_1063_fu_13026879_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2316_fu_13026889_p1.read()) + sc_bigint<14>(sext_ln703_1063_fu_13026879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4093_fu_13026899_p2() {
    add_ln703_4093_fu_13026899_p2 = (!zext_ln708_713_fu_12983549_p1.read().is_01() || !zext_ln708_890_fu_12998129_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_713_fu_12983549_p1.read()) + sc_biguint<11>(zext_ln708_890_fu_12998129_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4094_fu_13026909_p2() {
    add_ln703_4094_fu_13026909_p2 = (!zext_ln703_544_fu_13026905_p1.read().is_01() || !zext_ln1118_2148_fu_12998091_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_544_fu_13026905_p1.read()) + sc_biguint<12>(zext_ln1118_2148_fu_12998091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4095_fu_13037505_p2() {
    add_ln703_4095_fu_13037505_p2 = (!zext_ln703_545_fu_13037502_p1.read().is_01() || !add_ln703_4092_reg_13043760.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_545_fu_13037502_p1.read()) + sc_biguint<14>(add_ln703_4092_reg_13043760.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4096_fu_13037510_p2() {
    add_ln703_4096_fu_13037510_p2 = (!add_ln703_4095_fu_13037505_p2.read().is_01() || !zext_ln708_891_fu_13029274_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4095_fu_13037505_p2.read()) + sc_biguint<14>(zext_ln708_891_fu_13029274_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4097_fu_13026915_p2() {
    add_ln703_4097_fu_13026915_p2 = (!zext_ln708_893_fu_12998187_p1.read().is_01() || !trunc_ln1118_68_fu_12998197_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_893_fu_12998187_p1.read()) + sc_biguint<10>(trunc_ln1118_68_fu_12998197_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4098_fu_13026925_p2() {
    add_ln703_4098_fu_13026925_p2 = (!zext_ln703_546_fu_13026921_p1.read().is_01() || !zext_ln708_892_fu_12998173_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_546_fu_13026921_p1.read()) + sc_biguint<11>(zext_ln708_892_fu_12998173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4099_fu_13037523_p2() {
    add_ln703_4099_fu_13037523_p2 = (!zext_ln703_547_fu_13037520_p1.read().is_01() || !sext_ln703_2317_fu_13037516_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_547_fu_13037520_p1.read()) + sc_bigint<15>(sext_ln703_2317_fu_13037516_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_409_fu_13029429_p2() {
    add_ln703_409_fu_13029429_p2 = (!zext_ln703_11_fu_13029426_p1.read().is_01() || !add_ln703_407_fu_13029420_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_11_fu_13029426_p1.read()) + sc_biguint<15>(add_ln703_407_fu_13029420_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4100_fu_13026931_p2() {
    add_ln703_4100_fu_13026931_p2 = (!zext_ln1118_2150_fu_12998279_p1.read().is_01() || !sext_ln1118_1230_fu_12998207_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2150_fu_12998279_p1.read()) + sc_bigint<12>(sext_ln1118_1230_fu_12998207_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4101_fu_13026941_p2() {
    add_ln703_4101_fu_13026941_p2 = (!sext_ln703_2318_fu_13026937_p1.read().is_01() || !zext_ln708_894_fu_12998255_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2318_fu_13026937_p1.read()) + sc_biguint<13>(zext_ln708_894_fu_12998255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4102_fu_13026947_p2() {
    add_ln703_4102_fu_13026947_p2 = (!sext_ln1118_1229_fu_12998143_p1.read().is_01() || !sext_ln708_183_fu_12998235_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1229_fu_12998143_p1.read()) + sc_bigint<9>(sext_ln708_183_fu_12998235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4103_fu_13026957_p2() {
    add_ln703_4103_fu_13026957_p2 = (!sext_ln703_2319_fu_13026953_p1.read().is_01() || !sext_ln1118_1231_fu_12998221_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2319_fu_13026953_p1.read()) + sc_bigint<11>(sext_ln1118_1231_fu_12998221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4104_fu_13026967_p2() {
    add_ln703_4104_fu_13026967_p2 = (!sext_ln703_2320_fu_13026963_p1.read().is_01() || !add_ln703_4101_fu_13026941_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2320_fu_13026963_p1.read()) + sc_biguint<13>(add_ln703_4101_fu_13026941_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4105_fu_13037532_p2() {
    add_ln703_4105_fu_13037532_p2 = (!sext_ln703_2321_fu_13037529_p1.read().is_01() || !add_ln703_4099_fu_13037523_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2321_fu_13037529_p1.read()) + sc_biguint<15>(add_ln703_4099_fu_13037523_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4106_fu_13026973_p2() {
    add_ln703_4106_fu_13026973_p2 = (!sext_ln203_804_fu_12998477_p1.read().is_01() || !sext_ln203_771_fu_12995355_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_804_fu_12998477_p1.read()) + sc_bigint<12>(sext_ln203_771_fu_12995355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4107_fu_13037541_p2() {
    add_ln703_4107_fu_13037541_p2 = (!sext_ln703_2322_fu_13037538_p1.read().is_01() || !add_ln703_4105_fu_13037532_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2322_fu_13037538_p1.read()) + sc_biguint<15>(add_ln703_4105_fu_13037532_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4108_fu_13026979_p2() {
    add_ln703_4108_fu_13026979_p2 = (!tmp_1015_fu_12984064_p4.read().is_01() || !zext_ln203_302_fu_12998361_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1015_fu_12984064_p4.read()) + sc_biguint<10>(zext_ln203_302_fu_12998361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4109_fu_13026989_p2() {
    add_ln703_4109_fu_13026989_p2 = (!zext_ln708_898_fu_12998403_p1.read().is_01() || !zext_ln708_899_fu_12998521_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_898_fu_12998403_p1.read()) + sc_biguint<11>(zext_ln708_899_fu_12998521_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_410_fu_13002935_p2() {
    add_ln703_410_fu_13002935_p2 = (!sext_ln203_107_fu_12927208_p1.read().is_01() || !sext_ln203_108_fu_12927222_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_107_fu_12927208_p1.read()) + sc_bigint<11>(sext_ln203_108_fu_12927222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4110_fu_13026995_p2() {
    add_ln703_4110_fu_13026995_p2 = (!add_ln703_4109_fu_13026989_p2.read().is_01() || !zext_ln703_548_fu_13026985_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4109_fu_13026989_p2.read()) + sc_biguint<11>(zext_ln703_548_fu_13026985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4111_fu_13037550_p2() {
    add_ln703_4111_fu_13037550_p2 = (!zext_ln703_549_fu_13037547_p1.read().is_01() || !add_ln703_4107_fu_13037541_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_549_fu_13037547_p1.read()) + sc_biguint<15>(add_ln703_4107_fu_13037541_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4112_fu_13027001_p2() {
    add_ln703_4112_fu_13027001_p2 = (!sext_ln203_801_fu_12998375_p1.read().is_01() || !sext_ln203_803_fu_12998445_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_801_fu_12998375_p1.read()) + sc_bigint<11>(sext_ln203_803_fu_12998445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4113_fu_13027011_p2() {
    add_ln703_4113_fu_13027011_p2 = (!sext_ln703_2324_fu_13027007_p1.read().is_01() || !sext_ln203_799_fu_12998303_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2324_fu_13027007_p1.read()) + sc_bigint<12>(sext_ln203_799_fu_12998303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4114_fu_13027021_p2() {
    add_ln703_4114_fu_13027021_p2 = (!zext_ln708_896_fu_12998323_p1.read().is_01() || !sext_ln203_800_fu_12998337_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_896_fu_12998323_p1.read()) + sc_bigint<10>(sext_ln203_800_fu_12998337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4115_fu_13027031_p2() {
    add_ln703_4115_fu_13027031_p2 = (!sext_ln203_802_fu_12998389_p1.read().is_01() || !sext_ln203_805_fu_12998501_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_802_fu_12998389_p1.read()) + sc_bigint<9>(sext_ln203_805_fu_12998501_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4116_fu_13027041_p2() {
    add_ln703_4116_fu_13027041_p2 = (!sext_ln703_2327_fu_13027037_p1.read().is_01() || !sext_ln703_2326_fu_13027027_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2327_fu_13027037_p1.read()) + sc_bigint<11>(sext_ln703_2326_fu_13027027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4117_fu_13027051_p2() {
    add_ln703_4117_fu_13027051_p2 = (!sext_ln703_2328_fu_13027047_p1.read().is_01() || !sext_ln703_2325_fu_13027017_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2328_fu_13027047_p1.read()) + sc_bigint<13>(sext_ln703_2325_fu_13027017_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4119_fu_13027057_p2() {
    add_ln703_4119_fu_13027057_p2 = (!zext_ln708_900_fu_12998535_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_900_fu_12998535_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_411_fu_13002945_p2() {
    add_ln703_411_fu_13002945_p2 = (!sext_ln203_109_fu_12927331_p1.read().is_01() || !sext_ln203_106_fu_12927194_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_109_fu_12927331_p1.read()) + sc_bigint<11>(sext_ln203_106_fu_12927194_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4120_fu_13027071_p2() {
    add_ln703_4120_fu_13027071_p2 = (!zext_ln703_550_fu_13027067_p1.read().is_01() || !sext_ln203_687_fu_12986300_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_550_fu_13027067_p1.read()) + sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4121_fu_13027081_p2() {
    add_ln703_4121_fu_13027081_p2 = (!sext_ln1118_1234_fu_12998569_p1.read().is_01() || !sext_ln1118_1235_fu_12998583_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1234_fu_12998569_p1.read()) + sc_bigint<12>(sext_ln1118_1235_fu_12998583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4122_fu_13027091_p2() {
    add_ln703_4122_fu_13027091_p2 = (!sext_ln703_2331_fu_13027087_p1.read().is_01() || !sext_ln703_1066_fu_13027077_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2331_fu_13027087_p1.read()) + sc_bigint<13>(sext_ln703_1066_fu_13027077_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4123_fu_13027101_p2() {
    add_ln703_4123_fu_13027101_p2 = (!sext_ln703_2131_fu_13024631_p1.read().is_01() || !sext_ln703_1067_fu_13027097_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2131_fu_13024631_p1.read()) + sc_bigint<14>(sext_ln703_1067_fu_13027097_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4124_fu_13027107_p2() {
    add_ln703_4124_fu_13027107_p2 = (!sext_ln1118_1236_fu_12998597_p1.read().is_01() || !sext_ln1118_1237_fu_12998641_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1236_fu_12998597_p1.read()) + sc_bigint<11>(sext_ln1118_1237_fu_12998641_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4125_fu_13027113_p2() {
    add_ln703_4125_fu_13027113_p2 = (!add_ln703_4124_fu_13027107_p2.read().is_01() || !zext_ln708_901_fu_12998617_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4124_fu_13027107_p2.read()) + sc_biguint<11>(zext_ln708_901_fu_12998617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4126_fu_13037572_p2() {
    add_ln703_4126_fu_13037572_p2 = (!sext_ln703_2332_fu_13037569_p1.read().is_01() || !add_ln703_4123_reg_13043795.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2332_fu_13037569_p1.read()) + sc_biguint<14>(add_ln703_4123_reg_13043795.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4127_fu_13037577_p2() {
    add_ln703_4127_fu_13037577_p2 = (!add_ln703_4126_fu_13037572_p2.read().is_01() || !sext_ln203_806_fu_13029277_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4126_fu_13037572_p2.read()) + sc_bigint<14>(sext_ln203_806_fu_13029277_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4128_fu_13027119_p2() {
    add_ln703_4128_fu_13027119_p2 = (!sext_ln1118_1239_fu_12998683_p1.read().is_01() || !zext_ln708_902_fu_12998655_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1239_fu_12998683_p1.read()) + sc_biguint<12>(zext_ln708_902_fu_12998655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4129_fu_13037590_p2() {
    add_ln703_4129_fu_13037590_p2 = (!sext_ln703_2334_fu_13037587_p1.read().is_01() || !sext_ln703_2333_fu_13037583_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2334_fu_13037587_p1.read()) + sc_bigint<15>(sext_ln703_2333_fu_13037583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_412_fu_13002955_p2() {
    add_ln703_412_fu_13002955_p2 = (!sext_ln703_157_fu_13002951_p1.read().is_01() || !sext_ln703_156_fu_13002941_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_157_fu_13002951_p1.read()) + sc_bigint<12>(sext_ln703_156_fu_13002941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4130_fu_13027125_p2() {
    add_ln703_4130_fu_13027125_p2 = (!zext_ln708_823_fu_12993263_p1.read().is_01() || !sext_ln1118_1238_fu_12998669_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_823_fu_12993263_p1.read()) + sc_bigint<12>(sext_ln1118_1238_fu_12998669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4131_fu_13027131_p2() {
    add_ln703_4131_fu_13027131_p2 = (!sext_ln1118_1189_fu_12995769_p1.read().is_01() || !sext_ln1118_1240_fu_12998687_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1189_fu_12995769_p1.read()) + sc_bigint<10>(sext_ln1118_1240_fu_12998687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4132_fu_13027141_p2() {
    add_ln703_4132_fu_13027141_p2 = (!sext_ln703_2335_fu_13027137_p1.read().is_01() || !sext_ln1118_1241_fu_12998711_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2335_fu_13027137_p1.read()) + sc_bigint<11>(sext_ln1118_1241_fu_12998711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4133_fu_13027151_p2() {
    add_ln703_4133_fu_13027151_p2 = (!sext_ln703_2336_fu_13027147_p1.read().is_01() || !add_ln703_4130_fu_13027125_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2336_fu_13027147_p1.read()) + sc_biguint<12>(add_ln703_4130_fu_13027125_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4134_fu_13037599_p2() {
    add_ln703_4134_fu_13037599_p2 = (!sext_ln703_2337_fu_13037596_p1.read().is_01() || !add_ln703_4129_fu_13037590_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2337_fu_13037596_p1.read()) + sc_biguint<15>(add_ln703_4129_fu_13037590_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4135_fu_13037605_p2() {
    add_ln703_4135_fu_13037605_p2 = (!add_ln703_4134_fu_13037599_p2.read().is_01() || !sext_ln203_807_fu_13029280_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4134_fu_13037599_p2.read()) + sc_bigint<15>(sext_ln203_807_fu_13029280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4136_fu_13027157_p2() {
    add_ln703_4136_fu_13027157_p2 = (!sext_ln1118_1080_fu_12988263_p1.read().is_01() || !sext_ln203_808_fu_12998745_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1080_fu_12988263_p1.read()) + sc_bigint<12>(sext_ln203_808_fu_12998745_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4137_fu_13037614_p2() {
    add_ln703_4137_fu_13037614_p2 = (!sext_ln703_2338_fu_13037611_p1.read().is_01() || !add_ln703_4135_fu_13037605_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2338_fu_13037611_p1.read()) + sc_biguint<15>(add_ln703_4135_fu_13037605_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4138_fu_13027163_p2() {
    add_ln703_4138_fu_13027163_p2 = (!sext_ln203_810_fu_12998779_p1.read().is_01() || !sext_ln203_811_fu_12998799_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_810_fu_12998779_p1.read()) + sc_bigint<12>(sext_ln203_811_fu_12998799_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4139_fu_13027173_p2() {
    add_ln703_4139_fu_13027173_p2 = (!sext_ln203_812_fu_12998813_p1.read().is_01() || !sext_ln203_813_fu_12998859_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_812_fu_12998813_p1.read()) + sc_bigint<12>(sext_ln203_813_fu_12998859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4140_fu_13027183_p2() {
    add_ln703_4140_fu_13027183_p2 = (!sext_ln703_2341_fu_13027179_p1.read().is_01() || !sext_ln703_2340_fu_13027169_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2341_fu_13027179_p1.read()) + sc_bigint<13>(sext_ln703_2340_fu_13027169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4141_fu_13037627_p2() {
    add_ln703_4141_fu_13037627_p2 = (!sext_ln703_2342_fu_13037624_p1.read().is_01() || !sext_ln703_2339_fu_13037620_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2342_fu_13037624_p1.read()) + sc_bigint<16>(sext_ln703_2339_fu_13037620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4142_fu_13027189_p2() {
    add_ln703_4142_fu_13027189_p2 = (!sext_ln203_815_fu_12998915_p1.read().is_01() || !sext_ln203_816_fu_12998965_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_815_fu_12998915_p1.read()) + sc_bigint<12>(sext_ln203_816_fu_12998965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4143_fu_13027199_p2() {
    add_ln703_4143_fu_13027199_p2 = (!zext_ln203_303_fu_12998947_p1.read().is_01() || !zext_ln203_304_fu_12998951_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_303_fu_12998947_p1.read()) + sc_biguint<10>(zext_ln203_304_fu_12998951_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4144_fu_13027209_p2() {
    add_ln703_4144_fu_13027209_p2 = (!zext_ln703_551_fu_13027205_p1.read().is_01() || !sext_ln703_2343_fu_13027195_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_551_fu_13027205_p1.read()) + sc_bigint<13>(sext_ln703_2343_fu_13027195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4145_fu_13027215_p2() {
    add_ln703_4145_fu_13027215_p2 = (!zext_ln708_903_fu_12998999_p1.read().is_01() || !sext_ln203_814_fu_12998891_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_903_fu_12998999_p1.read()) + sc_bigint<11>(sext_ln203_814_fu_12998891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4146_fu_13027221_p2() {
    add_ln703_4146_fu_13027221_p2 = (!sext_ln203_809_fu_12998765_p1.read().is_01() || !sext_ln203_817_fu_12998985_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_809_fu_12998765_p1.read()) + sc_bigint<9>(sext_ln203_817_fu_12998985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4147_fu_13027231_p2() {
    add_ln703_4147_fu_13027231_p2 = (!sext_ln703_2344_fu_13027227_p1.read().is_01() || !add_ln703_4145_fu_13027215_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2344_fu_13027227_p1.read()) + sc_biguint<11>(add_ln703_4145_fu_13027215_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4148_fu_13027241_p2() {
    add_ln703_4148_fu_13027241_p2 = (!sext_ln703_2345_fu_13027237_p1.read().is_01() || !add_ln703_4144_fu_13027209_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2345_fu_13027237_p1.read()) + sc_biguint<13>(add_ln703_4144_fu_13027209_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_414_fu_13002961_p2() {
    add_ln703_414_fu_13002961_p2 = (!trunc_ln8_fu_12927365_p4.read().is_01() || !ap_const_lv10_220.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln8_fu_12927365_p4.read()) + sc_bigint<10>(ap_const_lv10_220));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4150_fu_13027247_p2() {
    add_ln703_4150_fu_13027247_p2 = (!sext_ln203_687_fu_12986300_p1.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4151_fu_13027253_p2() {
    add_ln703_4151_fu_13027253_p2 = (!add_ln703_4150_fu_13027247_p2.read().is_01() || !zext_ln1116_198_fu_12999047_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_4150_fu_13027247_p2.read()) + sc_biguint<12>(zext_ln1116_198_fu_12999047_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4152_fu_13027263_p2() {
    add_ln703_4152_fu_13027263_p2 = (!sext_ln708_184_fu_12999023_p1.read().is_01() || !sext_ln1118_1243_fu_12999061_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_184_fu_12999023_p1.read()) + sc_bigint<11>(sext_ln1118_1243_fu_12999061_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4153_fu_13027273_p2() {
    add_ln703_4153_fu_13027273_p2 = (!sext_ln703_2348_fu_13027269_p1.read().is_01() || !zext_ln1116_199_fu_12999075_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2348_fu_13027269_p1.read()) + sc_biguint<12>(zext_ln1116_199_fu_12999075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4154_fu_13027283_p2() {
    add_ln703_4154_fu_13027283_p2 = (!sext_ln703_2349_fu_13027279_p1.read().is_01() || !sext_ln703_2347_fu_13027259_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2349_fu_13027279_p1.read()) + sc_bigint<13>(sext_ln703_2347_fu_13027259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4155_fu_13027289_p2() {
    add_ln703_4155_fu_13027289_p2 = (!add_ln703_4154_fu_13027283_p2.read().is_01() || !sext_ln1116_156_fu_12999083_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_4154_fu_13027283_p2.read()) + sc_bigint<13>(sext_ln1116_156_fu_12999083_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4156_fu_13027295_p2() {
    add_ln703_4156_fu_13027295_p2 = (!sext_ln1118_1158_fu_12994308_p1.read().is_01() || !sext_ln1116_155_fu_12999079_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1158_fu_12994308_p1.read()) + sc_bigint<11>(sext_ln1116_155_fu_12999079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4157_fu_13027305_p2() {
    add_ln703_4157_fu_13027305_p2 = (!sext_ln703_2351_fu_13027301_p1.read().is_01() || !sext_ln1116_157_fu_12999097_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2351_fu_13027301_p1.read()) + sc_bigint<12>(sext_ln1116_157_fu_12999097_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4158_fu_13037648_p2() {
    add_ln703_4158_fu_13037648_p2 = (!sext_ln703_2352_fu_13037645_p1.read().is_01() || !sext_ln703_2350_fu_13037642_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2352_fu_13037645_p1.read()) + sc_bigint<14>(sext_ln703_2350_fu_13037642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4159_fu_13037654_p2() {
    add_ln703_4159_fu_13037654_p2 = (!add_ln703_4158_fu_13037648_p2.read().is_01() || !sext_ln1118_1098_fu_13029226_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4158_fu_13037648_p2.read()) + sc_bigint<14>(sext_ln1118_1098_fu_13029226_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_415_fu_13002971_p2() {
    add_ln703_415_fu_13002971_p2 = (!sext_ln703_160_fu_13002967_p1.read().is_01() || !sext_ln1118_221_fu_12927413_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_160_fu_13002967_p1.read()) + sc_bigint<11>(sext_ln1118_221_fu_12927413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4160_fu_13027311_p2() {
    add_ln703_4160_fu_13027311_p2 = (!sext_ln708_186_fu_12999199_p1.read().is_01() || !zext_ln1116_200_fu_12999139_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_186_fu_12999199_p1.read()) + sc_biguint<12>(zext_ln1116_200_fu_12999139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4161_fu_13027321_p2() {
    add_ln703_4161_fu_13027321_p2 = (!sext_ln703_2354_fu_13027317_p1.read().is_01() || !sext_ln1116_139_fu_12990068_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2354_fu_13027317_p1.read()) + sc_bigint<13>(sext_ln1116_139_fu_12990068_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4162_fu_13037667_p2() {
    add_ln703_4162_fu_13037667_p2 = (!sext_ln703_2355_fu_13037664_p1.read().is_01() || !sext_ln703_2353_fu_13037660_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2355_fu_13037664_p1.read()) + sc_bigint<15>(sext_ln703_2353_fu_13037660_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4163_fu_13027327_p2() {
    add_ln703_4163_fu_13027327_p2 = (!zext_ln708_905_fu_12999185_p1.read().is_01() || !sext_ln1116_158_fu_12999135_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_905_fu_12999185_p1.read()) + sc_bigint<11>(sext_ln1116_158_fu_12999135_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4164_fu_13027337_p2() {
    add_ln703_4164_fu_13027337_p2 = (!zext_ln1116_201_fu_12999157_p1.read().is_01() || !sext_ln1118_1244_fu_12999121_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln1116_201_fu_12999157_p1.read()) + sc_bigint<7>(sext_ln1118_1244_fu_12999121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4165_fu_13027347_p2() {
    add_ln703_4165_fu_13027347_p2 = (!sext_ln703_2357_fu_13027343_p1.read().is_01() || !sext_ln708_185_fu_12999143_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2357_fu_13027343_p1.read()) + sc_bigint<11>(sext_ln708_185_fu_12999143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4166_fu_13027357_p2() {
    add_ln703_4166_fu_13027357_p2 = (!sext_ln703_2358_fu_13027353_p1.read().is_01() || !sext_ln703_2356_fu_13027333_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2358_fu_13027353_p1.read()) + sc_bigint<12>(sext_ln703_2356_fu_13027333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4167_fu_13037676_p2() {
    add_ln703_4167_fu_13037676_p2 = (!sext_ln703_2359_fu_13037673_p1.read().is_01() || !add_ln703_4162_fu_13037667_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2359_fu_13037673_p1.read()) + sc_biguint<15>(add_ln703_4162_fu_13037667_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4168_fu_13027363_p2() {
    add_ln703_4168_fu_13027363_p2 = (!zext_ln203_305_fu_12999231_p1.read().is_01() || !sext_ln203_820_fu_12999279_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_305_fu_12999231_p1.read()) + sc_bigint<12>(sext_ln203_820_fu_12999279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4169_fu_13037685_p2() {
    add_ln703_4169_fu_13037685_p2 = (!sext_ln703_2360_fu_13037682_p1.read().is_01() || !add_ln703_4167_fu_13037676_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2360_fu_13037682_p1.read()) + sc_biguint<15>(add_ln703_4167_fu_13037676_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_416_fu_13002981_p2() {
    add_ln703_416_fu_13002981_p2 = (!sext_ln703_161_fu_13002977_p1.read().is_01() || !zext_ln203_2_fu_12927427_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_161_fu_13002977_p1.read()) + sc_biguint<12>(zext_ln203_2_fu_12927427_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4170_fu_13027369_p2() {
    add_ln703_4170_fu_13027369_p2 = (!sext_ln203_821_fu_12999307_p1.read().is_01() || !sext_ln203_760_fu_12994664_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_821_fu_12999307_p1.read()) + sc_bigint<12>(sext_ln203_760_fu_12994664_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4171_fu_13027379_p2() {
    add_ln703_4171_fu_13027379_p2 = (!sext_ln203_823_fu_12999349_p1.read().is_01() || !sext_ln203_824_fu_12999363_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_823_fu_12999349_p1.read()) + sc_bigint<12>(sext_ln203_824_fu_12999363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4172_fu_13027389_p2() {
    add_ln703_4172_fu_13027389_p2 = (!sext_ln703_2363_fu_13027385_p1.read().is_01() || !sext_ln703_2362_fu_13027375_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2363_fu_13027385_p1.read()) + sc_bigint<13>(sext_ln703_2362_fu_13027375_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4173_fu_13037698_p2() {
    add_ln703_4173_fu_13037698_p2 = (!sext_ln703_2364_fu_13037695_p1.read().is_01() || !sext_ln703_2361_fu_13037691_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2364_fu_13037695_p1.read()) + sc_bigint<16>(sext_ln703_2361_fu_13037691_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4174_fu_13027395_p2() {
    add_ln703_4174_fu_13027395_p2 = (!zext_ln708_907_fu_12999345_p1.read().is_01() || !zext_ln708_908_fu_12999377_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_907_fu_12999345_p1.read()) + sc_biguint<11>(zext_ln708_908_fu_12999377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4175_fu_13027405_p2() {
    add_ln703_4175_fu_13027405_p2 = (!zext_ln203_307_fu_12999421_p1.read().is_01() || !sext_ln203_818_fu_12999251_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_307_fu_12999421_p1.read()) + sc_bigint<12>(sext_ln203_818_fu_12999251_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4176_fu_13027415_p2() {
    add_ln703_4176_fu_13027415_p2 = (!sext_ln703_2365_fu_13027411_p1.read().is_01() || !zext_ln703_552_fu_13027401_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2365_fu_13027411_p1.read()) + sc_biguint<13>(zext_ln703_552_fu_13027401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4177_fu_13027425_p2() {
    add_ln703_4177_fu_13027425_p2 = (!sext_ln203_819_fu_12999265_p1.read().is_01() || !sext_ln203_822_fu_12999331_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_819_fu_12999265_p1.read()) + sc_bigint<11>(sext_ln203_822_fu_12999331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4178_fu_13027435_p2() {
    add_ln703_4178_fu_13027435_p2 = (!sext_ln203_825_fu_12999407_p1.read().is_01() || !zext_ln203_306_fu_12999293_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_825_fu_12999407_p1.read()) + sc_biguint<11>(zext_ln203_306_fu_12999293_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4179_fu_13027445_p2() {
    add_ln703_4179_fu_13027445_p2 = (!sext_ln703_2368_fu_13027441_p1.read().is_01() || !sext_ln703_2367_fu_13027431_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2368_fu_13027441_p1.read()) + sc_bigint<12>(sext_ln703_2367_fu_13027431_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_417_fu_13002987_p2() {
    add_ln703_417_fu_13002987_p2 = (!add_ln703_416_fu_13002981_p2.read().is_01() || !zext_ln1118_113_fu_12927495_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_416_fu_13002981_p2.read()) + sc_biguint<12>(zext_ln1118_113_fu_12927495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4180_fu_13027455_p2() {
    add_ln703_4180_fu_13027455_p2 = (!sext_ln703_2369_fu_13027451_p1.read().is_01() || !sext_ln703_2366_fu_13027421_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2369_fu_13027451_p1.read()) + sc_bigint<14>(sext_ln703_2366_fu_13027421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4182_fu_13027471_p2() {
    add_ln703_4182_fu_13027471_p2 = (!zext_ln1118_2167_fu_12999451_p1.read().is_01() || !sext_ln703_2371_fu_13027467_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2167_fu_12999451_p1.read()) + sc_bigint<10>(sext_ln703_2371_fu_13027467_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4183_fu_13027481_p2() {
    add_ln703_4183_fu_13027481_p2 = (!sext_ln703_2372_fu_13027477_p1.read().is_01() || !sext_ln1118_1074_fu_12987922_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2372_fu_13027477_p1.read()) + sc_bigint<12>(sext_ln1118_1074_fu_12987922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4184_fu_13027491_p2() {
    add_ln703_4184_fu_13027491_p2 = (!sext_ln703_1075_fu_13027487_p1.read().is_01() || !sext_ln203_826_fu_12999503_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1075_fu_13027487_p1.read()) + sc_bigint<13>(sext_ln203_826_fu_12999503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4185_fu_13027497_p2() {
    add_ln703_4185_fu_13027497_p2 = (!zext_ln708_909_fu_12999517_p1.read().is_01() || !sext_ln1118_1246_fu_12999465_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_909_fu_12999517_p1.read()) + sc_bigint<11>(sext_ln1118_1246_fu_12999465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4186_fu_13027507_p2() {
    add_ln703_4186_fu_13027507_p2 = (!sext_ln703_2373_fu_13027503_p1.read().is_01() || !zext_ln1118_2169_fu_12999489_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2373_fu_13027503_p1.read()) + sc_biguint<12>(zext_ln1118_2169_fu_12999489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4187_fu_13027517_p2() {
    add_ln703_4187_fu_13027517_p2 = (!sext_ln703_2374_fu_13027513_p1.read().is_01() || !add_ln703_4184_fu_13027491_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2374_fu_13027513_p1.read()) + sc_biguint<13>(add_ln703_4184_fu_13027491_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4188_fu_13027523_p2() {
    add_ln703_4188_fu_13027523_p2 = (!sext_ln708_187_fu_12999545_p1.read().is_01() || !sext_ln1118_1248_fu_12999599_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_187_fu_12999545_p1.read()) + sc_bigint<12>(sext_ln1118_1248_fu_12999599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4189_fu_13037719_p2() {
    add_ln703_4189_fu_13037719_p2 = (!sext_ln703_2375_fu_13037716_p1.read().is_01() || !sext_ln703_1076_fu_13037713_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2375_fu_13037716_p1.read()) + sc_bigint<14>(sext_ln703_1076_fu_13037713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_418_fu_13002997_p2() {
    add_ln703_418_fu_13002997_p2 = (!sext_ln1118_223_fu_12927509_p1.read().is_01() || !sext_ln1118_222_fu_12927463_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_223_fu_12927509_p1.read()) + sc_bigint<11>(sext_ln1118_222_fu_12927463_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4190_fu_13027529_p2() {
    add_ln703_4190_fu_13027529_p2 = (!zext_ln1118_2170_fu_12999565_p1.read().is_01() || !trunc_ln1118_69_fu_12999579_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_2170_fu_12999565_p1.read()) + sc_biguint<8>(trunc_ln1118_69_fu_12999579_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4191_fu_13027539_p2() {
    add_ln703_4191_fu_13027539_p2 = (!zext_ln708_910_fu_12999619_p1.read().is_01() || !sext_ln1118_1247_fu_12999531_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_910_fu_12999619_p1.read()) + sc_bigint<11>(sext_ln1118_1247_fu_12999531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4192_fu_13027545_p2() {
    add_ln703_4192_fu_13027545_p2 = (!add_ln703_4191_fu_13027539_p2.read().is_01() || !zext_ln703_553_fu_13027535_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4191_fu_13027539_p2.read()) + sc_biguint<11>(zext_ln703_553_fu_13027535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4193_fu_13037728_p2() {
    add_ln703_4193_fu_13037728_p2 = (!sext_ln703_2376_fu_13037725_p1.read().is_01() || !add_ln703_4189_fu_13037719_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2376_fu_13037725_p1.read()) + sc_biguint<14>(add_ln703_4189_fu_13037719_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4194_fu_13037734_p2() {
    add_ln703_4194_fu_13037734_p2 = (!add_ln703_4193_fu_13037728_p2.read().is_01() || !sext_ln1118_1249_fu_13029283_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4193_fu_13037728_p2.read()) + sc_bigint<14>(sext_ln1118_1249_fu_13029283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4195_fu_13027551_p2() {
    add_ln703_4195_fu_13027551_p2 = (!zext_ln1118_2173_fu_12999657_p1.read().is_01() || !zext_ln1118_2174_fu_12999677_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2173_fu_12999657_p1.read()) + sc_biguint<10>(zext_ln1118_2174_fu_12999677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4196_fu_13027561_p2() {
    add_ln703_4196_fu_13027561_p2 = (!zext_ln703_554_fu_13027557_p1.read().is_01() || !sext_ln1118_1250_fu_12999633_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_554_fu_13027557_p1.read()) + sc_bigint<12>(sext_ln1118_1250_fu_12999633_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4197_fu_13037747_p2() {
    add_ln703_4197_fu_13037747_p2 = (!sext_ln703_2378_fu_13037744_p1.read().is_01() || !sext_ln703_2377_fu_13037740_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2378_fu_13037744_p1.read()) + sc_bigint<15>(sext_ln703_2377_fu_13037740_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4198_fu_13027567_p2() {
    add_ln703_4198_fu_13027567_p2 = (!zext_ln1118_2177_fu_12999771_p1.read().is_01() || !sext_ln1118_1251_fu_12999691_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2177_fu_12999771_p1.read()) + sc_bigint<12>(sext_ln1118_1251_fu_12999691_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4199_fu_13027577_p2() {
    add_ln703_4199_fu_13027577_p2 = (!sext_ln703_2379_fu_13027573_p1.read().is_01() || !zext_ln1118_2175_fu_12999695_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2379_fu_13027573_p1.read()) + sc_biguint<13>(zext_ln1118_2175_fu_12999695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_419_fu_13003007_p2() {
    add_ln703_419_fu_13003007_p2 = (!sext_ln703_163_fu_13003003_p1.read().is_01() || !sext_ln703_162_fu_13002993_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_163_fu_13003003_p1.read()) + sc_bigint<13>(sext_ln703_162_fu_13002993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4200_fu_13027583_p2() {
    add_ln703_4200_fu_13027583_p2 = (!sext_ln1118_1200_fu_12996277_p1.read().is_01() || !sext_ln1118_1254_fu_12999751_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1200_fu_12996277_p1.read()) + sc_bigint<9>(sext_ln1118_1254_fu_12999751_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4201_fu_13027593_p2() {
    add_ln703_4201_fu_13027593_p2 = (!sext_ln703_2380_fu_13027589_p1.read().is_01() || !sext_ln1118_1252_fu_12999727_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2380_fu_13027589_p1.read()) + sc_bigint<10>(sext_ln1118_1252_fu_12999727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4202_fu_13027603_p2() {
    add_ln703_4202_fu_13027603_p2 = (!sext_ln703_2381_fu_13027599_p1.read().is_01() || !add_ln703_4199_fu_13027577_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2381_fu_13027599_p1.read()) + sc_biguint<13>(add_ln703_4199_fu_13027577_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4203_fu_13037756_p2() {
    add_ln703_4203_fu_13037756_p2 = (!sext_ln703_2382_fu_13037753_p1.read().is_01() || !add_ln703_4197_fu_13037747_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2382_fu_13037753_p1.read()) + sc_biguint<15>(add_ln703_4197_fu_13037747_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4204_fu_13037762_p2() {
    add_ln703_4204_fu_13037762_p2 = (!add_ln703_4203_fu_13037756_p2.read().is_01() || !sext_ln203_829_fu_13029286_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4203_fu_13037756_p2.read()) + sc_bigint<15>(sext_ln203_829_fu_13029286_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4205_fu_13027609_p2() {
    add_ln703_4205_fu_13027609_p2 = (!zext_ln203_309_fu_12999873_p1.read().is_01() || !zext_ln203_311_fu_12999917_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_309_fu_12999873_p1.read()) + sc_biguint<10>(zext_ln203_311_fu_12999917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4206_fu_13027615_p2() {
    add_ln703_4206_fu_13027615_p2 = (!add_ln703_4205_fu_13027609_p2.read().is_01() || !zext_ln203_308_fu_12999795_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_4205_fu_13027609_p2.read()) + sc_biguint<10>(zext_ln203_308_fu_12999795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4207_fu_13037771_p2() {
    add_ln703_4207_fu_13037771_p2 = (!zext_ln703_555_fu_13037768_p1.read().is_01() || !add_ln703_4204_fu_13037762_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_555_fu_13037768_p1.read()) + sc_biguint<15>(add_ln703_4204_fu_13037762_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4208_fu_13027621_p2() {
    add_ln703_4208_fu_13027621_p2 = (!sext_ln203_828_fu_12999835_p1.read().is_01() || !sext_ln203_830_fu_12999859_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_828_fu_12999835_p1.read()) + sc_bigint<11>(sext_ln203_830_fu_12999859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4209_fu_13027631_p2() {
    add_ln703_4209_fu_13027631_p2 = (!sext_ln203_727_fu_12990991_p1.read().is_01() || !sext_ln203_827_fu_12999799_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_727_fu_12990991_p1.read()) + sc_bigint<9>(sext_ln203_827_fu_12999799_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_420_fu_13003013_p2() {
    add_ln703_420_fu_13003013_p2 = (!zext_ln708_34_fu_12927555_p1.read().is_01() || !zext_ln708_37_fu_12927599_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_34_fu_12927555_p1.read()) + sc_biguint<11>(zext_ln708_37_fu_12927599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4210_fu_13027637_p2() {
    add_ln703_4210_fu_13027637_p2 = (!add_ln703_4209_fu_13027631_p2.read().is_01() || !zext_ln203_310_fu_12999893_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_4209_fu_13027631_p2.read()) + sc_biguint<9>(zext_ln203_310_fu_12999893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4211_fu_13027647_p2() {
    add_ln703_4211_fu_13027647_p2 = (!sext_ln703_2384_fu_13027643_p1.read().is_01() || !sext_ln703_2383_fu_13027627_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2384_fu_13027643_p1.read()) + sc_bigint<12>(sext_ln703_2383_fu_13027627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4213_fu_13027653_p2() {
    add_ln703_4213_fu_13027653_p2 = (!sext_ln203_831_fu_12999941_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_831_fu_12999941_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4214_fu_13027663_p2() {
    add_ln703_4214_fu_13027663_p2 = (!sext_ln703_1079_fu_13027659_p1.read().is_01() || !sext_ln203_832_fu_12999979_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1079_fu_13027659_p1.read()) + sc_bigint<13>(sext_ln203_832_fu_12999979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4215_fu_13027669_p2() {
    add_ln703_4215_fu_13027669_p2 = (!sext_ln708_188_fu_12999961_p1.read().is_01() || !zext_ln1118_2182_fu_12999975_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_188_fu_12999961_p1.read()) + sc_biguint<10>(zext_ln1118_2182_fu_12999975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4216_fu_13027679_p2() {
    add_ln703_4216_fu_13027679_p2 = (!sext_ln703_2387_fu_13027675_p1.read().is_01() || !add_ln703_4214_fu_13027663_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2387_fu_13027675_p1.read()) + sc_biguint<13>(add_ln703_4214_fu_13027663_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4217_fu_13027689_p2() {
    add_ln703_4217_fu_13027689_p2 = (!sext_ln703_1080_fu_13027685_p1.read().is_01() || !sext_ln203_833_fu_13000031_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1080_fu_13027685_p1.read()) + sc_bigint<14>(sext_ln203_833_fu_13000031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4218_fu_13027695_p2() {
    add_ln703_4218_fu_13027695_p2 = (!sext_ln1118_1255_fu_13000045_p1.read().is_01() || !sext_ln1118_1256_fu_13000065_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1255_fu_13000045_p1.read()) + sc_bigint<12>(sext_ln1118_1256_fu_13000065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4219_fu_13027705_p2() {
    add_ln703_4219_fu_13027705_p2 = (!sext_ln703_2388_fu_13027701_p1.read().is_01() || !add_ln703_4217_fu_13027689_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2388_fu_13027701_p1.read()) + sc_biguint<14>(add_ln703_4217_fu_13027689_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_421_fu_13003023_p2() {
    add_ln703_421_fu_13003023_p2 = (!zext_ln703_12_fu_13003019_p1.read().is_01() || !add_ln703_419_fu_13003007_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_12_fu_13003019_p1.read()) + sc_biguint<13>(add_ln703_419_fu_13003007_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4220_fu_13027711_p2() {
    add_ln703_4220_fu_13027711_p2 = (!zext_ln708_912_fu_13000007_p1.read().is_01() || !zext_ln708_913_fu_13000079_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_912_fu_13000007_p1.read()) + sc_biguint<11>(zext_ln708_913_fu_13000079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4221_fu_13027721_p2() {
    add_ln703_4221_fu_13027721_p2 = (!zext_ln708_915_fu_13000097_p1.read().is_01() || !sext_ln708_189_fu_12999993_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_915_fu_13000097_p1.read()) + sc_bigint<11>(sext_ln708_189_fu_12999993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4222_fu_13027727_p2() {
    add_ln703_4222_fu_13027727_p2 = (!add_ln703_4221_fu_13027721_p2.read().is_01() || !zext_ln708_914_fu_13000093_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4221_fu_13027721_p2.read()) + sc_biguint<11>(zext_ln708_914_fu_13000093_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4223_fu_13027737_p2() {
    add_ln703_4223_fu_13027737_p2 = (!sext_ln703_2389_fu_13027733_p1.read().is_01() || !zext_ln703_556_fu_13027717_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2389_fu_13027733_p1.read()) + sc_biguint<13>(zext_ln703_556_fu_13027717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4224_fu_13037793_p2() {
    add_ln703_4224_fu_13037793_p2 = (!sext_ln703_2390_fu_13037790_p1.read().is_01() || !add_ln703_4219_reg_13043900.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2390_fu_13037790_p1.read()) + sc_biguint<14>(add_ln703_4219_reg_13043900.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4225_fu_13027743_p2() {
    add_ln703_4225_fu_13027743_p2 = (!zext_ln708_916_fu_13000111_p1.read().is_01() || !zext_ln708_918_fu_13000143_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_916_fu_13000111_p1.read()) + sc_biguint<11>(zext_ln708_918_fu_13000143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4226_fu_13037801_p2() {
    add_ln703_4226_fu_13037801_p2 = (!zext_ln703_557_fu_13037798_p1.read().is_01() || !add_ln703_4224_fu_13037793_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_557_fu_13037798_p1.read()) + sc_biguint<14>(add_ln703_4224_fu_13037793_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4227_fu_13027749_p2() {
    add_ln703_4227_fu_13027749_p2 = (!trunc_ln1118_70_fu_13000209_p4.read().is_01() || !zext_ln1118_2186_fu_13000239_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_70_fu_13000209_p4.read()) + sc_biguint<10>(zext_ln1118_2186_fu_13000239_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4228_fu_13027759_p2() {
    add_ln703_4228_fu_13027759_p2 = (!zext_ln703_558_fu_13027755_p1.read().is_01() || !zext_ln708_920_fu_13000199_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_558_fu_13027755_p1.read()) + sc_biguint<11>(zext_ln708_920_fu_13000199_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4229_fu_13037814_p2() {
    add_ln703_4229_fu_13037814_p2 = (!zext_ln703_559_fu_13037811_p1.read().is_01() || !sext_ln703_2391_fu_13037807_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_559_fu_13037811_p1.read()) + sc_bigint<15>(sext_ln703_2391_fu_13037807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_422_fu_13003029_p2() {
    add_ln703_422_fu_13003029_p2 = (!sext_ln708_fu_12927541_p1.read().is_01() || !sext_ln1118_224_fu_12927675_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_fu_12927541_p1.read()) + sc_bigint<8>(sext_ln1118_224_fu_12927675_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4230_fu_13027765_p2() {
    add_ln703_4230_fu_13027765_p2 = (!sext_ln1118_1190_fu_12995797_p1.read().is_01() || !sext_ln1118_1258_fu_13000253_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1190_fu_12995797_p1.read()) + sc_bigint<11>(sext_ln1118_1258_fu_13000253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4231_fu_13027775_p2() {
    add_ln703_4231_fu_13027775_p2 = (!sext_ln703_2392_fu_13027771_p1.read().is_01() || !zext_ln708_921_fu_13000305_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2392_fu_13027771_p1.read()) + sc_biguint<12>(zext_ln708_921_fu_13000305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4232_fu_13027781_p2() {
    add_ln703_4232_fu_13027781_p2 = (!sext_ln1118_1257_fu_13000167_p1.read().is_01() || !sext_ln708_190_fu_13000181_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1257_fu_13000167_p1.read()) + sc_bigint<10>(sext_ln708_190_fu_13000181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4233_fu_13027791_p2() {
    add_ln703_4233_fu_13027791_p2 = (!zext_ln708_919_fu_13000185_p1.read().is_01() || !sext_ln1118_1259_fu_13000277_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln708_919_fu_13000185_p1.read()) + sc_bigint<7>(sext_ln1118_1259_fu_13000277_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4234_fu_13027801_p2() {
    add_ln703_4234_fu_13027801_p2 = (!sext_ln703_2394_fu_13027797_p1.read().is_01() || !sext_ln703_2393_fu_13027787_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2394_fu_13027797_p1.read()) + sc_bigint<11>(sext_ln703_2393_fu_13027787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4235_fu_13027811_p2() {
    add_ln703_4235_fu_13027811_p2 = (!sext_ln703_2395_fu_13027807_p1.read().is_01() || !add_ln703_4231_fu_13027775_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2395_fu_13027807_p1.read()) + sc_biguint<12>(add_ln703_4231_fu_13027775_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4236_fu_13037823_p2() {
    add_ln703_4236_fu_13037823_p2 = (!sext_ln703_2396_fu_13037820_p1.read().is_01() || !add_ln703_4229_fu_13037814_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2396_fu_13037820_p1.read()) + sc_biguint<15>(add_ln703_4229_fu_13037814_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4237_fu_13037829_p2() {
    add_ln703_4237_fu_13037829_p2 = (!add_ln703_4236_fu_13037823_p2.read().is_01() || !zext_ln203_312_fu_13029289_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4236_fu_13037823_p2.read()) + sc_biguint<15>(zext_ln203_312_fu_13029289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4238_fu_13027817_p2() {
    add_ln703_4238_fu_13027817_p2 = (!sext_ln203_836_fu_13000459_p1.read().is_01() || !zext_ln203_313_fu_13000343_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_836_fu_13000459_p1.read()) + sc_biguint<12>(zext_ln203_313_fu_13000343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4239_fu_13037838_p2() {
    add_ln703_4239_fu_13037838_p2 = (!sext_ln703_2397_fu_13037835_p1.read().is_01() || !add_ln703_4237_fu_13037829_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2397_fu_13037835_p1.read()) + sc_biguint<15>(add_ln703_4237_fu_13037829_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_423_fu_13003039_p2() {
    add_ln703_423_fu_13003039_p2 = (!sext_ln703_165_fu_13003035_p1.read().is_01() || !zext_ln708_40_fu_12927643_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_165_fu_13003035_p1.read()) + sc_biguint<11>(zext_ln708_40_fu_12927643_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4240_fu_13027823_p2() {
    add_ln703_4240_fu_13027823_p2 = (!zext_ln708_923_fu_13000357_p1.read().is_01() || !zext_ln708_924_fu_13000371_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_923_fu_13000357_p1.read()) + sc_biguint<11>(zext_ln708_924_fu_13000371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4241_fu_13027833_p2() {
    add_ln703_4241_fu_13027833_p2 = (!sext_ln203_835_fu_13000425_p1.read().is_01() || !sext_ln203_834_fu_13000405_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_835_fu_13000425_p1.read()) + sc_bigint<11>(sext_ln203_834_fu_13000405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4242_fu_13027843_p2() {
    add_ln703_4242_fu_13027843_p2 = (!sext_ln703_2399_fu_13027839_p1.read().is_01() || !zext_ln203_314_fu_13000385_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2399_fu_13027839_p1.read()) + sc_biguint<12>(zext_ln203_314_fu_13000385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4243_fu_13027853_p2() {
    add_ln703_4243_fu_13027853_p2 = (!sext_ln703_2400_fu_13027849_p1.read().is_01() || !zext_ln703_560_fu_13027829_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2400_fu_13027849_p1.read()) + sc_biguint<13>(zext_ln703_560_fu_13027829_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4245_fu_13027859_p2() {
    add_ln703_4245_fu_13027859_p2 = (!sext_ln203_837_fu_13000479_p1.read().is_01() || !ap_const_lv12_E78.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_837_fu_13000479_p1.read()) + sc_bigint<12>(ap_const_lv12_E78));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4246_fu_13027869_p2() {
    add_ln703_4246_fu_13027869_p2 = (!sext_ln703_1083_fu_13027865_p1.read().is_01() || !sext_ln203_838_fu_13000493_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1083_fu_13027865_p1.read()) + sc_bigint<13>(sext_ln203_838_fu_13000493_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4247_fu_13027875_p2() {
    add_ln703_4247_fu_13027875_p2 = (!sext_ln1118_1261_fu_13000551_p1.read().is_01() || !zext_ln1118_2192_fu_13000513_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1261_fu_13000551_p1.read()) + sc_biguint<11>(zext_ln1118_2192_fu_13000513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4248_fu_13027881_p2() {
    add_ln703_4248_fu_13027881_p2 = (!add_ln703_4247_fu_13027875_p2.read().is_01() || !zext_ln708_925_fu_13000537_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4247_fu_13027875_p2.read()) + sc_biguint<11>(zext_ln708_925_fu_13000537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4249_fu_13027891_p2() {
    add_ln703_4249_fu_13027891_p2 = (!sext_ln703_2402_fu_13027887_p1.read().is_01() || !add_ln703_4246_fu_13027869_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2402_fu_13027887_p1.read()) + sc_biguint<13>(add_ln703_4246_fu_13027869_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_424_fu_13029454_p2() {
    add_ln703_424_fu_13029454_p2 = (!sext_ln703_166_fu_13029451_p1.read().is_01() || !sext_ln703_164_fu_13029448_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_166_fu_13029451_p1.read()) + sc_bigint<14>(sext_ln703_164_fu_13029448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4250_fu_13027901_p2() {
    add_ln703_4250_fu_13027901_p2 = (!sext_ln1118_1262_fu_13000565_p1.read().is_01() || !sext_ln1118_1265_fu_13000627_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1262_fu_13000565_p1.read()) + sc_bigint<12>(sext_ln1118_1265_fu_13000627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4251_fu_13027911_p2() {
    add_ln703_4251_fu_13027911_p2 = (!sext_ln703_2403_fu_13027907_p1.read().is_01() || !sext_ln703_1084_fu_13027897_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2403_fu_13027907_p1.read()) + sc_bigint<14>(sext_ln703_1084_fu_13027897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4252_fu_13027917_p2() {
    add_ln703_4252_fu_13027917_p2 = (!zext_ln708_926_fu_13000579_p1.read().is_01() || !zext_ln708_847_fu_12994930_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_926_fu_13000579_p1.read()) + sc_biguint<11>(zext_ln708_847_fu_12994930_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4253_fu_13027927_p2() {
    add_ln703_4253_fu_13027927_p2 = (!zext_ln708_927_fu_13000641_p1.read().is_01() || !sext_ln1118_1264_fu_13000613_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_927_fu_13000641_p1.read()) + sc_bigint<11>(sext_ln1118_1264_fu_13000613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4254_fu_13027937_p2() {
    add_ln703_4254_fu_13027937_p2 = (!sext_ln703_2404_fu_13027933_p1.read().is_01() || !zext_ln703_561_fu_13027923_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2404_fu_13027933_p1.read()) + sc_biguint<13>(zext_ln703_561_fu_13027923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4255_fu_13037860_p2() {
    add_ln703_4255_fu_13037860_p2 = (!sext_ln703_2405_fu_13037857_p1.read().is_01() || !add_ln703_4251_reg_13043935.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2405_fu_13037857_p1.read()) + sc_biguint<14>(add_ln703_4251_reg_13043935.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4256_fu_13037865_p2() {
    add_ln703_4256_fu_13037865_p2 = (!add_ln703_4255_fu_13037860_p2.read().is_01() || !sext_ln1118_1098_fu_13029226_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4255_fu_13037860_p2.read()) + sc_bigint<14>(sext_ln1118_1098_fu_13029226_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4257_fu_13027943_p2() {
    add_ln703_4257_fu_13027943_p2 = (!sext_ln1118_1088_fu_12988859_p1.read().is_01() || !sext_ln1118_1267_fu_13000683_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1088_fu_12988859_p1.read()) + sc_bigint<12>(sext_ln1118_1267_fu_13000683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4258_fu_13027953_p2() {
    add_ln703_4258_fu_13027953_p2 = (!sext_ln703_2407_fu_13027949_p1.read().is_01() || !sext_ln1118_1266_fu_13000655_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2407_fu_13027949_p1.read()) + sc_bigint<13>(sext_ln1118_1266_fu_13000655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4259_fu_13037878_p2() {
    add_ln703_4259_fu_13037878_p2 = (!sext_ln703_2408_fu_13037875_p1.read().is_01() || !sext_ln703_2406_fu_13037871_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2408_fu_13037875_p1.read()) + sc_bigint<15>(sext_ln703_2406_fu_13037871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_425_fu_13029460_p2() {
    add_ln703_425_fu_13029460_p2 = (!add_ln703_424_fu_13029454_p2.read().is_01() || !zext_ln1118_118_fu_13028881_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_424_fu_13029454_p2.read()) + sc_biguint<14>(zext_ln1118_118_fu_13028881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4260_fu_13027959_p2() {
    add_ln703_4260_fu_13027959_p2 = (!zext_ln708_831_fu_12993933_p1.read().is_01() || !zext_ln708_928_fu_13000707_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_831_fu_12993933_p1.read()) + sc_biguint<11>(zext_ln708_928_fu_13000707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4261_fu_13027969_p2() {
    add_ln703_4261_fu_13027969_p2 = (!sext_ln708_192_fu_13000741_p1.read().is_01() || !sext_ln708_191_fu_13000669_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_192_fu_13000741_p1.read()) + sc_bigint<11>(sext_ln708_191_fu_13000669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4262_fu_13027979_p2() {
    add_ln703_4262_fu_13027979_p2 = (!sext_ln703_2409_fu_13027975_p1.read().is_01() || !sext_ln1118_1268_fu_13000727_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2409_fu_13027975_p1.read()) + sc_bigint<12>(sext_ln1118_1268_fu_13000727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4263_fu_13027989_p2() {
    add_ln703_4263_fu_13027989_p2 = (!sext_ln703_2410_fu_13027985_p1.read().is_01() || !zext_ln703_562_fu_13027965_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2410_fu_13027985_p1.read()) + sc_biguint<13>(zext_ln703_562_fu_13027965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4264_fu_13037887_p2() {
    add_ln703_4264_fu_13037887_p2 = (!sext_ln703_2411_fu_13037884_p1.read().is_01() || !add_ln703_4259_fu_13037878_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2411_fu_13037884_p1.read()) + sc_biguint<15>(add_ln703_4259_fu_13037878_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4265_fu_13027995_p2() {
    add_ln703_4265_fu_13027995_p2 = (!zext_ln203_315_fu_13000755_p1.read().is_01() || !sext_ln203_840_fu_13000811_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_315_fu_13000755_p1.read()) + sc_bigint<12>(sext_ln203_840_fu_13000811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4266_fu_13037896_p2() {
    add_ln703_4266_fu_13037896_p2 = (!sext_ln703_2412_fu_13037893_p1.read().is_01() || !add_ln703_4264_fu_13037887_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2412_fu_13037893_p1.read()) + sc_biguint<15>(add_ln703_4264_fu_13037887_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4267_fu_13028001_p2() {
    add_ln703_4267_fu_13028001_p2 = (!sext_ln203_843_fu_13000903_p1.read().is_01() || !zext_ln203_316_fu_13000769_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_843_fu_13000903_p1.read()) + sc_biguint<12>(zext_ln203_316_fu_13000769_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4268_fu_13028011_p2() {
    add_ln703_4268_fu_13028011_p2 = (!sext_ln703_2414_fu_13028007_p1.read().is_01() || !sext_ln203_842_fu_13000879_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2414_fu_13028007_p1.read()) + sc_bigint<13>(sext_ln203_842_fu_13000879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4269_fu_13037909_p2() {
    add_ln703_4269_fu_13037909_p2 = (!sext_ln703_2415_fu_13037906_p1.read().is_01() || !sext_ln703_2413_fu_13037902_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2415_fu_13037906_p1.read()) + sc_bigint<16>(sext_ln703_2413_fu_13037902_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_426_fu_13003045_p2() {
    add_ln703_426_fu_13003045_p2 = (!zext_ln1118_119_fu_12927753_p1.read().is_01() || !zext_ln708_42_fu_12927777_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_119_fu_12927753_p1.read()) + sc_biguint<10>(zext_ln708_42_fu_12927777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4270_fu_13028017_p2() {
    add_ln703_4270_fu_13028017_p2 = (!zext_ln203_318_fu_13000855_p1.read().is_01() || !zext_ln203_319_fu_13000917_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_318_fu_13000855_p1.read()) + sc_biguint<10>(zext_ln203_319_fu_13000917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4271_fu_13028023_p2() {
    add_ln703_4271_fu_13028023_p2 = (!add_ln703_4270_fu_13028017_p2.read().is_01() || !zext_ln203_317_fu_13000787_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_4270_fu_13028017_p2.read()) + sc_biguint<10>(zext_ln203_317_fu_13000787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4272_fu_13028033_p2() {
    add_ln703_4272_fu_13028033_p2 = (!sext_ln203_841_fu_13000835_p1.read().is_01() || !sext_ln1118_1044_fu_12986166_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_841_fu_13000835_p1.read()) + sc_bigint<11>(sext_ln1118_1044_fu_12986166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4273_fu_13028043_p2() {
    add_ln703_4273_fu_13028043_p2 = (!sext_ln703_2416_fu_13028039_p1.read().is_01() || !sext_ln203_839_fu_13000783_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2416_fu_13028039_p1.read()) + sc_bigint<12>(sext_ln203_839_fu_13000783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4274_fu_13028049_p2() {
    add_ln703_4274_fu_13028049_p2 = (!add_ln703_4273_fu_13028043_p2.read().is_01() || !zext_ln703_563_fu_13028029_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_4273_fu_13028043_p2.read()) + sc_biguint<12>(zext_ln703_563_fu_13028029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4276_fu_13028055_p2() {
    add_ln703_4276_fu_13028055_p2 = (!sext_ln203_687_fu_12986300_p1.read().is_01() || !ap_const_lv12_CE0.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()) + sc_bigint<12>(ap_const_lv12_CE0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4277_fu_13028061_p2() {
    add_ln703_4277_fu_13028061_p2 = (!tmp_1032_fu_12985515_p4.read().is_01() || !zext_ln1118_2201_fu_13000949_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1032_fu_12985515_p4.read()) + sc_biguint<10>(zext_ln1118_2201_fu_13000949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4278_fu_13028071_p2() {
    add_ln703_4278_fu_13028071_p2 = (!zext_ln703_564_fu_13028067_p1.read().is_01() || !add_ln703_4276_fu_13028055_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_564_fu_13028067_p1.read()) + sc_biguint<12>(add_ln703_4276_fu_13028055_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4279_fu_13028077_p2() {
    add_ln703_4279_fu_13028077_p2 = (!zext_ln708_929_fu_13000953_p1.read().is_01() || !sext_ln708_193_fu_13000941_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_929_fu_13000953_p1.read()) + sc_bigint<10>(sext_ln708_193_fu_13000941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_427_fu_13029469_p2() {
    add_ln703_427_fu_13029469_p2 = (!zext_ln703_15_fu_13029466_p1.read().is_01() || !add_ln703_425_fu_13029460_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_15_fu_13029466_p1.read()) + sc_biguint<14>(add_ln703_425_fu_13029460_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4280_fu_13028087_p2() {
    add_ln703_4280_fu_13028087_p2 = (!zext_ln1118_2202_fu_13000967_p1.read().is_01() || !sext_ln1116_159_fu_13000945_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2202_fu_13000967_p1.read()) + sc_bigint<9>(sext_ln1116_159_fu_13000945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4281_fu_13028097_p2() {
    add_ln703_4281_fu_13028097_p2 = (!sext_ln703_2419_fu_13028093_p1.read().is_01() || !sext_ln703_2418_fu_13028083_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2419_fu_13028093_p1.read()) + sc_bigint<11>(sext_ln703_2418_fu_13028083_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4282_fu_13028107_p2() {
    add_ln703_4282_fu_13028107_p2 = (!sext_ln703_2420_fu_13028103_p1.read().is_01() || !add_ln703_4278_fu_13028071_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2420_fu_13028103_p1.read()) + sc_biguint<12>(add_ln703_4278_fu_13028071_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4283_fu_13028117_p2() {
    add_ln703_4283_fu_13028117_p2 = (!sext_ln1118_1050_fu_12986456_p1.read().is_01() || !zext_ln708_930_fu_13000981_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1050_fu_12986456_p1.read()) + sc_biguint<12>(zext_ln708_930_fu_13000981_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4284_fu_13028127_p2() {
    add_ln703_4284_fu_13028127_p2 = (!sext_ln703_2422_fu_13028123_p1.read().is_01() || !sext_ln703_2421_fu_13028113_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2422_fu_13028123_p1.read()) + sc_bigint<13>(sext_ln703_2421_fu_13028113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4285_fu_13028133_p2() {
    add_ln703_4285_fu_13028133_p2 = (!zext_ln708_862_fu_12996675_p1.read().is_01() || !zext_ln708_931_fu_13001033_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_862_fu_12996675_p1.read()) + sc_biguint<11>(zext_ln708_931_fu_13001033_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4286_fu_13028143_p2() {
    add_ln703_4286_fu_13028143_p2 = (!sext_ln1116_160_fu_13000995_p1.read().is_01() || !zext_ln1118_2203_fu_13001009_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_160_fu_13000995_p1.read()) + sc_biguint<11>(zext_ln1118_2203_fu_13001009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4287_fu_13028153_p2() {
    add_ln703_4287_fu_13028153_p2 = (!sext_ln703_2424_fu_13028149_p1.read().is_01() || !zext_ln703_565_fu_13028139_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2424_fu_13028149_p1.read()) + sc_biguint<13>(zext_ln703_565_fu_13028139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4288_fu_13037930_p2() {
    add_ln703_4288_fu_13037930_p2 = (!sext_ln703_2425_fu_13037927_p1.read().is_01() || !sext_ln703_2423_fu_13037924_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2425_fu_13037927_p1.read()) + sc_bigint<14>(sext_ln703_2423_fu_13037924_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4289_fu_13037936_p2() {
    add_ln703_4289_fu_13037936_p2 = (!add_ln703_4288_fu_13037930_p2.read().is_01() || !sext_ln1118_1269_fu_13029292_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4288_fu_13037930_p2.read()) + sc_bigint<14>(sext_ln1118_1269_fu_13029292_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_428_fu_13003051_p2() {
    add_ln703_428_fu_13003051_p2 = (!zext_ln1118_124_fu_12927825_p1.read().is_01() || !zext_ln1118_125_fu_12927839_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_124_fu_12927825_p1.read()) + sc_biguint<10>(zext_ln1118_125_fu_12927839_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4290_fu_13028159_p2() {
    add_ln703_4290_fu_13028159_p2 = (!zext_ln1116_202_fu_13001077_p1.read().is_01() || !zext_ln1118_2207_fu_13001091_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_202_fu_13001077_p1.read()) + sc_biguint<10>(zext_ln1118_2207_fu_13001091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4291_fu_13037945_p2() {
    add_ln703_4291_fu_13037945_p2 = (!zext_ln703_566_fu_13037942_p1.read().is_01() || !add_ln703_4289_fu_13037936_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_566_fu_13037942_p1.read()) + sc_biguint<14>(add_ln703_4289_fu_13037936_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4292_fu_13028165_p2() {
    add_ln703_4292_fu_13028165_p2 = (!zext_ln1118_2208_fu_13001105_p1.read().is_01() || !trunc_ln1116_11_fu_13001153_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2208_fu_13001105_p1.read()) + sc_biguint<10>(trunc_ln1116_11_fu_13001153_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4293_fu_13028175_p2() {
    add_ln703_4293_fu_13028175_p2 = (!zext_ln1118_2210_fu_13001187_p1.read().is_01() || !zext_ln1118_2211_fu_13001201_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2210_fu_13001187_p1.read()) + sc_biguint<10>(zext_ln1118_2211_fu_13001201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4294_fu_13028185_p2() {
    add_ln703_4294_fu_13028185_p2 = (!zext_ln703_568_fu_13028181_p1.read().is_01() || !zext_ln703_567_fu_13028171_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_568_fu_13028181_p1.read()) + sc_biguint<11>(zext_ln703_567_fu_13028171_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4295_fu_13037958_p2() {
    add_ln703_4295_fu_13037958_p2 = (!zext_ln703_569_fu_13037955_p1.read().is_01() || !sext_ln703_2426_fu_13037951_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_569_fu_13037955_p1.read()) + sc_bigint<15>(sext_ln703_2426_fu_13037951_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4296_fu_13028191_p2() {
    add_ln703_4296_fu_13028191_p2 = (!zext_ln1116_203_fu_13001215_p1.read().is_01() || !zext_ln1118_2213_fu_13001253_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_203_fu_13001215_p1.read()) + sc_biguint<9>(zext_ln1118_2213_fu_13001253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4297_fu_13028201_p2() {
    add_ln703_4297_fu_13028201_p2 = (!zext_ln1118_2214_fu_13001267_p1.read().is_01() || !zext_ln1118_2215_fu_13001281_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2214_fu_13001267_p1.read()) + sc_biguint<10>(zext_ln1118_2215_fu_13001281_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4298_fu_13028211_p2() {
    add_ln703_4298_fu_13028211_p2 = (!zext_ln703_571_fu_13028207_p1.read().is_01() || !zext_ln703_570_fu_13028197_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_571_fu_13028207_p1.read()) + sc_biguint<11>(zext_ln703_570_fu_13028197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4299_fu_13028221_p2() {
    add_ln703_4299_fu_13028221_p2 = (!sext_ln1116_161_fu_13001129_p1.read().is_01() || !sext_ln1116_162_fu_13001143_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_161_fu_13001129_p1.read()) + sc_bigint<11>(sext_ln1116_162_fu_13001143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_429_fu_13003061_p2() {
    add_ln703_429_fu_13003061_p2 = (!zext_ln1118_131_fu_12927919_p1.read().is_01() || !tmp_39_fu_12927945_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_131_fu_12927919_p1.read()) + sc_biguint<8>(tmp_39_fu_12927945_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4300_fu_13028231_p2() {
    add_ln703_4300_fu_13028231_p2 = (!sext_ln1118_1270_fu_13001173_p1.read().is_01() || !sext_ln1118_1271_fu_13001239_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1270_fu_13001173_p1.read()) + sc_bigint<10>(sext_ln1118_1271_fu_13001239_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4301_fu_13028241_p2() {
    add_ln703_4301_fu_13028241_p2 = (!sext_ln703_2428_fu_13028237_p1.read().is_01() || !sext_ln703_2427_fu_13028227_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2428_fu_13028237_p1.read()) + sc_bigint<12>(sext_ln703_2427_fu_13028227_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4302_fu_13028251_p2() {
    add_ln703_4302_fu_13028251_p2 = (!sext_ln703_2429_fu_13028247_p1.read().is_01() || !zext_ln703_572_fu_13028217_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2429_fu_13028247_p1.read()) + sc_biguint<13>(zext_ln703_572_fu_13028217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4303_fu_13037967_p2() {
    add_ln703_4303_fu_13037967_p2 = (!sext_ln703_2430_fu_13037964_p1.read().is_01() || !add_ln703_4295_fu_13037958_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2430_fu_13037964_p1.read()) + sc_biguint<15>(add_ln703_4295_fu_13037958_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4304_fu_13037973_p2() {
    add_ln703_4304_fu_13037973_p2 = (!add_ln703_4303_fu_13037967_p2.read().is_01() || !zext_ln203_320_fu_13029295_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4303_fu_13037967_p2.read()) + sc_biguint<15>(zext_ln203_320_fu_13029295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4305_fu_13028257_p2() {
    add_ln703_4305_fu_13028257_p2 = (!zext_ln708_932_fu_13001295_p1.read().is_01() || !zext_ln708_934_fu_13001333_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_932_fu_13001295_p1.read()) + sc_biguint<11>(zext_ln708_934_fu_13001333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4306_fu_13028267_p2() {
    add_ln703_4306_fu_13028267_p2 = (!zext_ln703_573_fu_13028263_p1.read().is_01() || !sext_ln203_844_fu_13001309_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_573_fu_13028263_p1.read()) + sc_bigint<13>(sext_ln203_844_fu_13001309_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4308_fu_13028273_p2() {
    add_ln703_4308_fu_13028273_p2 = (!sext_ln203_845_fu_13001351_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_845_fu_13001351_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4309_fu_13028283_p2() {
    add_ln703_4309_fu_13028283_p2 = (!sext_ln703_1091_fu_13028279_p1.read().is_01() || !sext_ln203_846_fu_13001365_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1091_fu_13028279_p1.read()) + sc_bigint<13>(sext_ln203_846_fu_13001365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_430_fu_13003071_p2() {
    add_ln703_430_fu_13003071_p2 = (!zext_ln703_21_fu_13003067_p1.read().is_01() || !zext_ln1118_127_fu_12927871_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_21_fu_13003067_p1.read()) + sc_biguint<9>(zext_ln1118_127_fu_12927871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4310_fu_13028289_p2() {
    add_ln703_4310_fu_13028289_p2 = (!zext_ln1118_2216_fu_13001393_p1.read().is_01() || !sext_ln708_194_fu_13001379_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2216_fu_13001393_p1.read()) + sc_bigint<12>(sext_ln708_194_fu_13001379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4311_fu_13028299_p2() {
    add_ln703_4311_fu_13028299_p2 = (!sext_ln703_2433_fu_13028295_p1.read().is_01() || !add_ln703_4309_fu_13028283_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2433_fu_13028295_p1.read()) + sc_biguint<13>(add_ln703_4309_fu_13028283_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4312_fu_13028309_p2() {
    add_ln703_4312_fu_13028309_p2 = (!sext_ln708_195_fu_13001407_p1.read().is_01() || !sext_ln1118_1050_fu_12986456_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_195_fu_13001407_p1.read()) + sc_bigint<12>(sext_ln1118_1050_fu_12986456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4313_fu_13028319_p2() {
    add_ln703_4313_fu_13028319_p2 = (!sext_ln703_2434_fu_13028315_p1.read().is_01() || !sext_ln703_1092_fu_13028305_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2434_fu_13028315_p1.read()) + sc_bigint<14>(sext_ln703_1092_fu_13028305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4314_fu_13028325_p2() {
    add_ln703_4314_fu_13028325_p2 = (!zext_ln708_935_fu_13001421_p1.read().is_01() || !sext_ln1118_1273_fu_13001445_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_935_fu_13001421_p1.read()) + sc_bigint<11>(sext_ln1118_1273_fu_13001445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4315_fu_13028335_p2() {
    add_ln703_4315_fu_13028335_p2 = (!sext_ln703_2435_fu_13028331_p1.read().is_01() || !sext_ln708_196_fu_13001465_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2435_fu_13028331_p1.read()) + sc_bigint<12>(sext_ln708_196_fu_13001465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4316_fu_13037995_p2() {
    add_ln703_4316_fu_13037995_p2 = (!sext_ln703_2436_fu_13037992_p1.read().is_01() || !add_ln703_4313_reg_13044000.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2436_fu_13037992_p1.read()) + sc_biguint<14>(add_ln703_4313_reg_13044000.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4317_fu_13028341_p2() {
    add_ln703_4317_fu_13028341_p2 = (!zext_ln708_936_fu_13001479_p1.read().is_01() || !zext_ln708_937_fu_13001493_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_936_fu_13001479_p1.read()) + sc_biguint<11>(zext_ln708_937_fu_13001493_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4318_fu_13038003_p2() {
    add_ln703_4318_fu_13038003_p2 = (!zext_ln703_574_fu_13038000_p1.read().is_01() || !add_ln703_4316_fu_13037995_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_574_fu_13038000_p1.read()) + sc_biguint<14>(add_ln703_4316_fu_13037995_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4319_fu_13028347_p2() {
    add_ln703_4319_fu_13028347_p2 = (!zext_ln708_938_fu_13001507_p1.read().is_01() || !zext_ln708_939_fu_13001605_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_938_fu_13001507_p1.read()) + sc_biguint<11>(zext_ln708_939_fu_13001605_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_431_fu_13003081_p2() {
    add_ln703_431_fu_13003081_p2 = (!zext_ln703_23_fu_13003077_p1.read().is_01() || !zext_ln703_18_fu_13003057_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_23_fu_13003077_p1.read()) + sc_biguint<11>(zext_ln703_18_fu_13003057_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4320_fu_13028353_p2() {
    add_ln703_4320_fu_13028353_p2 = (!zext_ln1118_2221_fu_13001629_p1.read().is_01() || !zext_ln708_940_fu_13001649_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2221_fu_13001629_p1.read()) + sc_biguint<10>(zext_ln708_940_fu_13001649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4321_fu_13028363_p2() {
    add_ln703_4321_fu_13028363_p2 = (!zext_ln703_575_fu_13028359_p1.read().is_01() || !add_ln703_4319_fu_13028347_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_575_fu_13028359_p1.read()) + sc_biguint<11>(add_ln703_4319_fu_13028347_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4322_fu_13038016_p2() {
    add_ln703_4322_fu_13038016_p2 = (!zext_ln703_576_fu_13038013_p1.read().is_01() || !sext_ln703_2437_fu_13038009_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_576_fu_13038013_p1.read()) + sc_bigint<15>(sext_ln703_2437_fu_13038009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4323_fu_13028369_p2() {
    add_ln703_4323_fu_13028369_p2 = (!sext_ln1118_1276_fu_13001601_p1.read().is_01() || !zext_ln708_941_fu_13001653_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1276_fu_13001601_p1.read()) + sc_biguint<11>(zext_ln708_941_fu_13001653_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4324_fu_13028375_p2() {
    add_ln703_4324_fu_13028375_p2 = (!add_ln703_4323_fu_13028369_p2.read().is_01() || !zext_ln708_843_fu_12994618_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4323_fu_13028369_p2.read()) + sc_biguint<11>(zext_ln708_843_fu_12994618_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4325_fu_13028385_p2() {
    add_ln703_4325_fu_13028385_p2 = (!sext_ln1118_1274_fu_13001511_p1.read().is_01() || !zext_ln1118_2218_fu_13001557_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1274_fu_13001511_p1.read()) + sc_biguint<9>(zext_ln1118_2218_fu_13001557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4326_fu_13028395_p2() {
    add_ln703_4326_fu_13028395_p2 = (!sext_ln708_197_fu_13001543_p1.read().is_01() || !sext_ln1118_1275_fu_13001581_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_197_fu_13001543_p1.read()) + sc_bigint<8>(sext_ln1118_1275_fu_13001581_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4327_fu_13028405_p2() {
    add_ln703_4327_fu_13028405_p2 = (!sext_ln703_2440_fu_13028401_p1.read().is_01() || !sext_ln703_2439_fu_13028391_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2440_fu_13028401_p1.read()) + sc_bigint<10>(sext_ln703_2439_fu_13028391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4328_fu_13028415_p2() {
    add_ln703_4328_fu_13028415_p2 = (!sext_ln703_2441_fu_13028411_p1.read().is_01() || !sext_ln703_2438_fu_13028381_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2441_fu_13028411_p1.read()) + sc_bigint<12>(sext_ln703_2438_fu_13028381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4329_fu_13038025_p2() {
    add_ln703_4329_fu_13038025_p2 = (!sext_ln703_2442_fu_13038022_p1.read().is_01() || !add_ln703_4322_fu_13038016_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2442_fu_13038022_p1.read()) + sc_biguint<15>(add_ln703_4322_fu_13038016_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_432_fu_13029478_p2() {
    add_ln703_432_fu_13029478_p2 = (!zext_ln703_24_fu_13029475_p1.read().is_01() || !add_ln703_427_fu_13029469_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_24_fu_13029475_p1.read()) + sc_biguint<14>(add_ln703_427_fu_13029469_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4330_fu_13038031_p2() {
    add_ln703_4330_fu_13038031_p2 = (!add_ln703_4329_fu_13038025_p2.read().is_01() || !zext_ln203_322_fu_13029298_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4329_fu_13038025_p2.read()) + sc_biguint<15>(zext_ln203_322_fu_13029298_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4331_fu_13028421_p2() {
    add_ln703_4331_fu_13028421_p2 = (!zext_ln708_922_fu_13000319_p1.read().is_01() || !zext_ln708_942_fu_13001697_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_922_fu_13000319_p1.read()) + sc_biguint<11>(zext_ln708_942_fu_13001697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4332_fu_13028431_p2() {
    add_ln703_4332_fu_13028431_p2 = (!zext_ln703_577_fu_13028427_p1.read().is_01() || !sext_ln203_849_fu_13001779_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_577_fu_13028427_p1.read()) + sc_bigint<13>(sext_ln203_849_fu_13001779_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4333_fu_13038040_p2() {
    add_ln703_4333_fu_13038040_p2 = (!sext_ln703_2443_fu_13038037_p1.read().is_01() || !add_ln703_4330_fu_13038031_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2443_fu_13038037_p1.read()) + sc_biguint<15>(add_ln703_4330_fu_13038031_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4334_fu_13028437_p2() {
    add_ln703_4334_fu_13028437_p2 = (!zext_ln708_785_fu_12989727_p1.read().is_01() || !zext_ln708_943_fu_13001755_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_785_fu_12989727_p1.read()) + sc_biguint<11>(zext_ln708_943_fu_13001755_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4335_fu_13028447_p2() {
    add_ln703_4335_fu_13028447_p2 = (!sext_ln203_847_fu_13001677_p1.read().is_01() || !sext_ln203_848_fu_13001731_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_847_fu_13001677_p1.read()) + sc_bigint<11>(sext_ln203_848_fu_13001731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4336_fu_13028457_p2() {
    add_ln703_4336_fu_13028457_p2 = (!sext_ln703_2445_fu_13028453_p1.read().is_01() || !zext_ln203_321_fu_13001337_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2445_fu_13028453_p1.read()) + sc_biguint<12>(zext_ln203_321_fu_13001337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4337_fu_13028467_p2() {
    add_ln703_4337_fu_13028467_p2 = (!sext_ln703_2446_fu_13028463_p1.read().is_01() || !zext_ln703_578_fu_13028443_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2446_fu_13028463_p1.read()) + sc_biguint<13>(zext_ln703_578_fu_13028443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4339_fu_13028473_p2() {
    add_ln703_4339_fu_13028473_p2 = (!trunc_ln203_49_fu_13001783_p4.read().is_01() || !ap_const_lv10_58.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_49_fu_13001783_p4.read()) + sc_biguint<10>(ap_const_lv10_58));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_433_fu_13003087_p2() {
    add_ln703_433_fu_13003087_p2 = (!zext_ln1118_135_fu_12927969_p1.read().is_01() || !zext_ln1118_137_fu_12928001_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_135_fu_12927969_p1.read()) + sc_biguint<10>(zext_ln1118_137_fu_12928001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4340_fu_13028483_p2() {
    add_ln703_4340_fu_13028483_p2 = (!sext_ln203_850_fu_13001803_p1.read().is_01() || !zext_ln703_22_fu_13028479_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_850_fu_13001803_p1.read()) + sc_biguint<12>(zext_ln703_22_fu_13028479_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4341_fu_13028493_p2() {
    add_ln703_4341_fu_13028493_p2 = (!zext_ln1118_2225_fu_13001821_p1.read().is_01() || !sext_ln708_198_fu_13001807_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2225_fu_13001821_p1.read()) + sc_bigint<12>(sext_ln708_198_fu_13001807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4342_fu_13028503_p2() {
    add_ln703_4342_fu_13028503_p2 = (!sext_ln703_2448_fu_13028499_p1.read().is_01() || !sext_ln703_1095_fu_13028489_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2448_fu_13028499_p1.read()) + sc_bigint<13>(sext_ln703_1095_fu_13028489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4343_fu_13038062_p2() {
    add_ln703_4343_fu_13038062_p2 = (!sext_ln703_1096_fu_13038059_p1.read().is_01() || !sext_ln203_851_fu_13029301_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1096_fu_13038059_p1.read()) + sc_bigint<14>(sext_ln203_851_fu_13029301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4344_fu_13028509_p2() {
    add_ln703_4344_fu_13028509_p2 = (!sext_ln1116_127_fu_12983505_p1.read().is_01() || !sext_ln1118_1050_fu_12986456_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_127_fu_12983505_p1.read()) + sc_bigint<12>(sext_ln1118_1050_fu_12986456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4345_fu_13028519_p2() {
    add_ln703_4345_fu_13028519_p2 = (!sext_ln703_2449_fu_13028515_p1.read().is_01() || !sext_ln1118_1278_fu_13001835_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2449_fu_13028515_p1.read()) + sc_bigint<13>(sext_ln1118_1278_fu_13001835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4346_fu_13038071_p2() {
    add_ln703_4346_fu_13038071_p2 = (!sext_ln703_2450_fu_13038068_p1.read().is_01() || !add_ln703_4343_fu_13038062_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2450_fu_13038068_p1.read()) + sc_biguint<14>(add_ln703_4343_fu_13038062_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4347_fu_13038081_p2() {
    add_ln703_4347_fu_13038081_p2 = (!sext_ln703_1097_fu_13038077_p1.read().is_01() || !sext_ln203_852_fu_13029304_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1097_fu_13038077_p1.read()) + sc_bigint<15>(sext_ln203_852_fu_13029304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4348_fu_13028525_p2() {
    add_ln703_4348_fu_13028525_p2 = (!sext_ln1118_1281_fu_13001877_p1.read().is_01() || !sext_ln1118_1282_fu_13001891_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1281_fu_13001877_p1.read()) + sc_bigint<12>(sext_ln1118_1282_fu_13001891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4349_fu_13028535_p2() {
    add_ln703_4349_fu_13028535_p2 = (!sext_ln703_2451_fu_13028531_p1.read().is_01() || !sext_ln1118_1280_fu_13001863_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2451_fu_13028531_p1.read()) + sc_bigint<13>(sext_ln1118_1280_fu_13001863_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_434_fu_13003097_p2() {
    add_ln703_434_fu_13003097_p2 = (!zext_ln1118_138_fu_12928015_p1.read().is_01() || !zext_ln708_43_fu_12928036_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_138_fu_12928015_p1.read()) + sc_biguint<10>(zext_ln708_43_fu_12928036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4350_fu_13038090_p2() {
    add_ln703_4350_fu_13038090_p2 = (!sext_ln703_2452_fu_13038087_p1.read().is_01() || !add_ln703_4347_fu_13038081_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2452_fu_13038087_p1.read()) + sc_biguint<15>(add_ln703_4347_fu_13038081_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4351_fu_13028541_p2() {
    add_ln703_4351_fu_13028541_p2 = (!zext_ln1118_2226_fu_13001935_p1.read().is_01() || !zext_ln1118_2227_fu_13001949_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2226_fu_13001935_p1.read()) + sc_biguint<10>(zext_ln1118_2227_fu_13001949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4352_fu_13028551_p2() {
    add_ln703_4352_fu_13028551_p2 = (!sext_ln1118_1279_fu_13001849_p1.read().is_01() || !sext_ln1118_1284_fu_13001915_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1279_fu_13001849_p1.read()) + sc_bigint<10>(sext_ln1118_1284_fu_13001915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4353_fu_13028561_p2() {
    add_ln703_4353_fu_13028561_p2 = (!sext_ln703_2453_fu_13028557_p1.read().is_01() || !sext_ln1118_1283_fu_13001911_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2453_fu_13028557_p1.read()) + sc_bigint<11>(sext_ln1118_1283_fu_13001911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4354_fu_13028571_p2() {
    add_ln703_4354_fu_13028571_p2 = (!sext_ln703_2454_fu_13028567_p1.read().is_01() || !zext_ln703_579_fu_13028547_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2454_fu_13028567_p1.read()) + sc_biguint<12>(zext_ln703_579_fu_13028547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4355_fu_13038099_p2() {
    add_ln703_4355_fu_13038099_p2 = (!sext_ln703_2455_fu_13038096_p1.read().is_01() || !add_ln703_4350_fu_13038090_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2455_fu_13038096_p1.read()) + sc_biguint<15>(add_ln703_4350_fu_13038090_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4356_fu_13038105_p2() {
    add_ln703_4356_fu_13038105_p2 = (!add_ln703_4355_fu_13038099_p2.read().is_01() || !sext_ln203_854_fu_13029307_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_4355_fu_13038099_p2.read()) + sc_bigint<15>(sext_ln203_854_fu_13029307_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4357_fu_13028577_p2() {
    add_ln703_4357_fu_13028577_p2 = (!sext_ln203_808_fu_12998745_p1.read().is_01() || !sext_ln1118_1110_fu_12990933_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_808_fu_12998745_p1.read()) + sc_bigint<12>(sext_ln1118_1110_fu_12990933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4358_fu_13038114_p2() {
    add_ln703_4358_fu_13038114_p2 = (!sext_ln703_2456_fu_13038111_p1.read().is_01() || !add_ln703_4356_fu_13038105_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2456_fu_13038111_p1.read()) + sc_biguint<15>(add_ln703_4356_fu_13038105_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4359_fu_13028583_p2() {
    add_ln703_4359_fu_13028583_p2 = (!sext_ln203_855_fu_13001997_p1.read().is_01() || !sext_ln203_856_fu_13002043_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_855_fu_13001997_p1.read()) + sc_bigint<12>(sext_ln203_856_fu_13002043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_435_fu_13003107_p2() {
    add_ln703_435_fu_13003107_p2 = (!zext_ln703_26_fu_13003103_p1.read().is_01() || !zext_ln703_25_fu_13003093_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_26_fu_13003103_p1.read()) + sc_biguint<11>(zext_ln703_25_fu_13003093_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4360_fu_13028593_p2() {
    add_ln703_4360_fu_13028593_p2 = (!sext_ln203_857_fu_13002057_p1.read().is_01() || !sext_ln203_858_fu_13002071_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_857_fu_13002057_p1.read()) + sc_bigint<12>(sext_ln203_858_fu_13002071_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4361_fu_13028603_p2() {
    add_ln703_4361_fu_13028603_p2 = (!sext_ln703_2459_fu_13028599_p1.read().is_01() || !sext_ln703_2458_fu_13028589_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2459_fu_13028599_p1.read()) + sc_bigint<13>(sext_ln703_2458_fu_13028589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4362_fu_13038127_p2() {
    add_ln703_4362_fu_13038127_p2 = (!sext_ln703_2460_fu_13038124_p1.read().is_01() || !sext_ln703_2457_fu_13038120_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2460_fu_13038124_p1.read()) + sc_bigint<16>(sext_ln703_2457_fu_13038120_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4363_fu_13028609_p2() {
    add_ln703_4363_fu_13028609_p2 = (!sext_ln203_859_fu_13002123_p1.read().is_01() || !sext_ln203_680_fu_12984559_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_859_fu_13002123_p1.read()) + sc_bigint<12>(sext_ln203_680_fu_12984559_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4364_fu_13028619_p2() {
    add_ln703_4364_fu_13028619_p2 = (!zext_ln708_944_fu_13002011_p1.read().is_01() || !zext_ln708_945_fu_13002085_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_944_fu_13002011_p1.read()) + sc_biguint<11>(zext_ln708_945_fu_13002085_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4365_fu_13028629_p2() {
    add_ln703_4365_fu_13028629_p2 = (!zext_ln703_580_fu_13028625_p1.read().is_01() || !sext_ln703_2461_fu_13028615_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_580_fu_13028625_p1.read()) + sc_bigint<13>(sext_ln703_2461_fu_13028615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4366_fu_13028639_p2() {
    add_ln703_4366_fu_13028639_p2 = (!zext_ln203_323_fu_13002109_p1.read().is_01() || !zext_ln203_324_fu_13002137_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_323_fu_13002109_p1.read()) + sc_biguint<10>(zext_ln203_324_fu_13002137_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4367_fu_13028649_p2() {
    add_ln703_4367_fu_13028649_p2 = (!zext_ln203_325_fu_13002151_p1.read().is_01() || !sext_ln203_853_fu_13001973_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_325_fu_13002151_p1.read()) + sc_bigint<12>(sext_ln203_853_fu_13001973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4368_fu_13028655_p2() {
    add_ln703_4368_fu_13028655_p2 = (!add_ln703_4367_fu_13028649_p2.read().is_01() || !zext_ln703_581_fu_13028645_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_4367_fu_13028649_p2.read()) + sc_biguint<12>(zext_ln703_581_fu_13028645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4369_fu_13028665_p2() {
    add_ln703_4369_fu_13028665_p2 = (!sext_ln703_2463_fu_13028661_p1.read().is_01() || !sext_ln703_2462_fu_13028635_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2463_fu_13028661_p1.read()) + sc_bigint<14>(sext_ln703_2462_fu_13028635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_436_fu_13003117_p2() {
    add_ln703_436_fu_13003117_p2 = (!sext_ln708_1_fu_12927719_p1.read().is_01() || !sext_ln708_2_fu_12928082_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_1_fu_12927719_p1.read()) + sc_bigint<11>(sext_ln708_2_fu_12928082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4371_fu_13028671_p2() {
    add_ln703_4371_fu_13028671_p2 = (!trunc_ln203_50_fu_13002169_p4.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln203_50_fu_13002169_p4.read()) + sc_bigint<8>(ap_const_lv8_A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4372_fu_13028681_p2() {
    add_ln703_4372_fu_13028681_p2 = (!sext_ln1118_1285_fu_13002189_p1.read().is_01() || !sext_ln703_2465_fu_13028677_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1285_fu_13002189_p1.read()) + sc_bigint<11>(sext_ln703_2465_fu_13028677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4373_fu_13028687_p2() {
    add_ln703_4373_fu_13028687_p2 = (!add_ln703_4372_fu_13028681_p2.read().is_01() || !zext_ln708_946_fu_13002227_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_4372_fu_13028681_p2.read()) + sc_biguint<11>(zext_ln708_946_fu_13002227_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4374_fu_13028697_p2() {
    add_ln703_4374_fu_13028697_p2 = (!sext_ln1118_1286_fu_13002213_p1.read().is_01() || !sext_ln1118_1261_fu_13000551_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1286_fu_13002213_p1.read()) + sc_bigint<11>(sext_ln1118_1261_fu_13000551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4375_fu_13028707_p2() {
    add_ln703_4375_fu_13028707_p2 = (!sext_ln703_2467_fu_13028703_p1.read().is_01() || !sext_ln703_2466_fu_13028693_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2467_fu_13028703_p1.read()) + sc_bigint<12>(sext_ln703_2466_fu_13028693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4376_fu_13028717_p2() {
    add_ln703_4376_fu_13028717_p2 = (!sext_ln703_2468_fu_13028713_p1.read().is_01() || !sext_ln1118_1288_fu_13002257_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2468_fu_13028713_p1.read()) + sc_bigint<13>(sext_ln1118_1288_fu_13002257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4377_fu_13028723_p2() {
    add_ln703_4377_fu_13028723_p2 = (!zext_ln1118_2234_fu_13002309_p1.read().is_01() || !zext_ln1118_2235_fu_13002349_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_2234_fu_13002309_p1.read()) + sc_biguint<8>(zext_ln1118_2235_fu_13002349_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4378_fu_13028733_p2() {
    add_ln703_4378_fu_13028733_p2 = (!zext_ln703_582_fu_13028729_p1.read().is_01() || !add_ln703_4376_fu_13028717_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_582_fu_13028729_p1.read()) + sc_biguint<13>(add_ln703_4376_fu_13028717_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4379_fu_13028739_p2() {
    add_ln703_4379_fu_13028739_p2 = (!zext_ln708_915_fu_13000097_p1.read().is_01() || !sext_ln1118_1291_fu_13002329_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_915_fu_13000097_p1.read()) + sc_bigint<11>(sext_ln1118_1291_fu_13002329_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_437_fu_13003127_p2() {
    add_ln703_437_fu_13003127_p2 = (!zext_ln708_14_fu_12926276_p1.read().is_01() || !sext_ln1118_225_fu_12928068_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_14_fu_12926276_p1.read()) + sc_bigint<11>(sext_ln1118_225_fu_12928068_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4380_fu_13028749_p2() {
    add_ln703_4380_fu_13028749_p2 = (!sext_ln1118_1289_fu_13002271_p1.read().is_01() || !sext_ln1118_1290_fu_13002285_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1289_fu_13002271_p1.read()) + sc_bigint<10>(sext_ln1118_1290_fu_13002285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4381_fu_13028759_p2() {
    add_ln703_4381_fu_13028759_p2 = (!sext_ln703_2471_fu_13028755_p1.read().is_01() || !sext_ln703_2470_fu_13028745_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2471_fu_13028755_p1.read()) + sc_bigint<12>(sext_ln703_2470_fu_13028745_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4382_fu_13038148_p2() {
    add_ln703_4382_fu_13038148_p2 = (!sext_ln703_2472_fu_13038145_p1.read().is_01() || !sext_ln703_2469_fu_13038142_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2472_fu_13038145_p1.read()) + sc_bigint<14>(sext_ln703_2469_fu_13038142_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4383_fu_13028765_p2() {
    add_ln703_4383_fu_13028765_p2 = (!sext_ln1118_1295_fu_13002401_p1.read().is_01() || !zext_ln1118_2237_fu_13002405_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1295_fu_13002401_p1.read()) + sc_biguint<12>(zext_ln1118_2237_fu_13002405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4384_fu_13038157_p2() {
    add_ln703_4384_fu_13038157_p2 = (!sext_ln703_2473_fu_13038154_p1.read().is_01() || !add_ln703_4382_fu_13038148_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2473_fu_13038154_p1.read()) + sc_biguint<14>(add_ln703_4382_fu_13038148_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4385_fu_13028771_p2() {
    add_ln703_4385_fu_13028771_p2 = (!sext_ln1118_1296_fu_13002429_p1.read().is_01() || !sext_ln708_199_fu_13002443_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1296_fu_13002429_p1.read()) + sc_bigint<10>(sext_ln708_199_fu_13002443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4386_fu_13028781_p2() {
    add_ln703_4386_fu_13028781_p2 = (!sext_ln703_2474_fu_13028777_p1.read().is_01() || !sext_ln1118_1283_fu_13001911_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2474_fu_13028777_p1.read()) + sc_bigint<11>(sext_ln1118_1283_fu_13001911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4387_fu_13038166_p2() {
    add_ln703_4387_fu_13038166_p2 = (!sext_ln703_2475_fu_13038163_p1.read().is_01() || !add_ln703_4384_fu_13038157_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2475_fu_13038163_p1.read()) + sc_biguint<14>(add_ln703_4384_fu_13038157_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4388_fu_13028787_p2() {
    add_ln703_4388_fu_13028787_p2 = (!zext_ln1118_1723_fu_12983994_p1.read().is_01() || !zext_ln1118_2239_fu_13002457_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1723_fu_12983994_p1.read()) + sc_biguint<9>(zext_ln1118_2239_fu_13002457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4389_fu_13028793_p2() {
    add_ln703_4389_fu_13028793_p2 = (!add_ln703_4388_fu_13028787_p2.read().is_01() || !zext_ln1118_2034_fu_12993377_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_4388_fu_13028787_p2.read()) + sc_biguint<9>(zext_ln1118_2034_fu_12993377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_438_fu_13003137_p2() {
    add_ln703_438_fu_13003137_p2 = (!sext_ln703_169_fu_13003133_p1.read().is_01() || !zext_ln1118_121_fu_12927781_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_169_fu_13003133_p1.read()) + sc_biguint<12>(zext_ln1118_121_fu_12927781_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4390_fu_13028803_p2() {
    add_ln703_4390_fu_13028803_p2 = (!sext_ln1118_1293_fu_13002377_p1.read().is_01() || !sext_ln1118_1297_fu_13002477_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln1118_1293_fu_13002377_p1.read()) + sc_bigint<6>(sext_ln1118_1297_fu_13002477_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4391_fu_13028813_p2() {
    add_ln703_4391_fu_13028813_p2 = (!sext_ln703_2476_fu_13028809_p1.read().is_01() || !sext_ln1118_1292_fu_13002353_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln703_2476_fu_13028809_p1.read()) + sc_bigint<7>(sext_ln1118_1292_fu_13002353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4392_fu_13028823_p2() {
    add_ln703_4392_fu_13028823_p2 = (!sext_ln703_2477_fu_13028819_p1.read().is_01() || !zext_ln703_583_fu_13028799_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2477_fu_13028819_p1.read()) + sc_biguint<10>(zext_ln703_583_fu_13028799_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4393_fu_13038175_p2() {
    add_ln703_4393_fu_13038175_p2 = (!sext_ln703_2478_fu_13038172_p1.read().is_01() || !add_ln703_4387_fu_13038166_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2478_fu_13038172_p1.read()) + sc_biguint<14>(add_ln703_4387_fu_13038166_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4394_fu_13038181_p2() {
    add_ln703_4394_fu_13038181_p2 = (!add_ln703_4393_fu_13038175_p2.read().is_01() || !zext_ln203_326_fu_13029310_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_4393_fu_13038175_p2.read()) + sc_biguint<14>(zext_ln203_326_fu_13029310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4395_fu_13028829_p2() {
    add_ln703_4395_fu_13028829_p2 = (!sext_ln203_748_fu_12993061_p1.read().is_01() || !sext_ln203_825_fu_12999407_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_748_fu_12993061_p1.read()) + sc_bigint<11>(sext_ln203_825_fu_12999407_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4396_fu_13028839_p2() {
    add_ln703_4396_fu_13028839_p2 = (!sext_ln703_2480_fu_13028835_p1.read().is_01() || !sext_ln203_861_fu_13002521_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2480_fu_13028835_p1.read()) + sc_bigint<12>(sext_ln203_861_fu_13002521_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4397_fu_13038194_p2() {
    add_ln703_4397_fu_13038194_p2 = (!sext_ln703_2481_fu_13038191_p1.read().is_01() || !sext_ln703_2479_fu_13038187_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2481_fu_13038191_p1.read()) + sc_bigint<15>(sext_ln703_2479_fu_13038187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4398_fu_13028845_p2() {
    add_ln703_4398_fu_13028845_p2 = (!sext_ln203_860_fu_13002491_p1.read().is_01() || !sext_ln203_862_fu_13002535_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_860_fu_13002491_p1.read()) + sc_bigint<10>(sext_ln203_862_fu_13002535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4399_fu_13028855_p2() {
    add_ln703_4399_fu_13028855_p2 = (!sext_ln203_785_fu_12996425_p1.read().is_01() || !zext_ln203_327_fu_13002549_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_785_fu_12996425_p1.read()) + sc_biguint<9>(zext_ln203_327_fu_13002549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_439_fu_13003147_p2() {
    add_ln703_439_fu_13003147_p2 = (!sext_ln703_170_fu_13003143_p1.read().is_01() || !sext_ln703_168_fu_13003123_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_170_fu_13003143_p1.read()) + sc_bigint<13>(sext_ln703_168_fu_13003123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4400_fu_13028865_p2() {
    add_ln703_4400_fu_13028865_p2 = (!sext_ln703_2483_fu_13028861_p1.read().is_01() || !sext_ln203_720_fu_12990388_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2483_fu_13028861_p1.read()) + sc_bigint<10>(sext_ln203_720_fu_12990388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_4401_fu_13028875_p2() {
    add_ln703_4401_fu_13028875_p2 = (!sext_ln703_2484_fu_13028871_p1.read().is_01() || !sext_ln703_2482_fu_13028851_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2484_fu_13028871_p1.read()) + sc_bigint<11>(sext_ln703_2482_fu_13028851_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_440_fu_13003153_p2() {
    add_ln703_440_fu_13003153_p2 = (!add_ln703_439_fu_13003147_p2.read().is_01() || !zext_ln703_27_fu_13003113_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_439_fu_13003147_p2.read()) + sc_biguint<13>(zext_ln703_27_fu_13003113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_441_fu_13029491_p2() {
    add_ln703_441_fu_13029491_p2 = (!sext_ln703_171_fu_13029488_p1.read().is_01() || !sext_ln703_167_fu_13029484_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_171_fu_13029488_p1.read()) + sc_bigint<15>(sext_ln703_167_fu_13029484_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_442_fu_13029497_p2() {
    add_ln703_442_fu_13029497_p2 = (!add_ln703_441_fu_13029491_p2.read().is_01() || !zext_ln203_3_fu_13028884_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_441_fu_13029491_p2.read()) + sc_biguint<15>(zext_ln203_3_fu_13028884_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_443_fu_13003159_p2() {
    add_ln703_443_fu_13003159_p2 = (!zext_ln708_44_fu_12928136_p1.read().is_01() || !sext_ln203_110_fu_12928178_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_44_fu_12928136_p1.read()) + sc_bigint<11>(sext_ln203_110_fu_12928178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_445_fu_13003165_p2() {
    add_ln703_445_fu_13003165_p2 = (!sext_ln203_111_fu_12928202_p1.read().is_01() || !ap_const_lv12_EC0.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_111_fu_12928202_p1.read()) + sc_bigint<12>(ap_const_lv12_EC0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_446_fu_13003175_p2() {
    add_ln703_446_fu_13003175_p2 = (!sext_ln703_174_fu_13003171_p1.read().is_01() || !sext_ln203_112_fu_12928216_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_174_fu_13003171_p1.read()) + sc_bigint<13>(sext_ln203_112_fu_12928216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_447_fu_13003181_p2() {
    add_ln703_447_fu_13003181_p2 = (!sext_ln1118_227_fu_12928274_p1.read().is_01() || !zext_ln1118_147_fu_12928260_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_227_fu_12928274_p1.read()) + sc_biguint<12>(zext_ln1118_147_fu_12928260_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_448_fu_13003191_p2() {
    add_ln703_448_fu_13003191_p2 = (!sext_ln703_175_fu_13003187_p1.read().is_01() || !add_ln703_446_fu_13003175_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_175_fu_13003187_p1.read()) + sc_biguint<13>(add_ln703_446_fu_13003175_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_449_fu_13003201_p2() {
    add_ln703_449_fu_13003201_p2 = (!sext_ln1118_230_fu_12928334_p1.read().is_01() || !sext_ln1118_231_fu_12928358_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_230_fu_12928334_p1.read()) + sc_bigint<12>(sext_ln1118_231_fu_12928358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_450_fu_13003211_p2() {
    add_ln703_450_fu_13003211_p2 = (!sext_ln703_177_fu_13003207_p1.read().is_01() || !sext_ln703_176_fu_13003197_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_177_fu_13003207_p1.read()) + sc_bigint<14>(sext_ln703_176_fu_13003197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_451_fu_13003217_p2() {
    add_ln703_451_fu_13003217_p2 = (!sext_ln1118_229_fu_12928320_p1.read().is_01() || !sext_ln1118_228_fu_12928306_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_229_fu_12928320_p1.read()) + sc_bigint<11>(sext_ln1118_228_fu_12928306_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_452_fu_13003223_p2() {
    add_ln703_452_fu_13003223_p2 = (!add_ln703_451_fu_13003217_p2.read().is_01() || !zext_ln708_45_fu_12928372_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_451_fu_13003217_p2.read()) + sc_biguint<11>(zext_ln708_45_fu_12928372_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_453_fu_13029519_p2() {
    add_ln703_453_fu_13029519_p2 = (!sext_ln703_178_fu_13029516_p1.read().is_01() || !add_ln703_450_reg_13039810.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_178_fu_13029516_p1.read()) + sc_biguint<14>(add_ln703_450_reg_13039810.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_454_fu_13029524_p2() {
    add_ln703_454_fu_13029524_p2 = (!add_ln703_453_fu_13029519_p2.read().is_01() || !sext_ln1118_235_fu_13028887_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_453_fu_13029519_p2.read()) + sc_bigint<14>(sext_ln1118_235_fu_13028887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_455_fu_13003229_p2() {
    add_ln703_455_fu_13003229_p2 = (!sext_ln708_3_fu_12928608_p1.read().is_01() || !zext_ln1118_151_fu_12928424_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_3_fu_12928608_p1.read()) + sc_biguint<12>(zext_ln1118_151_fu_12928424_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_456_fu_13003239_p2() {
    add_ln703_456_fu_13003239_p2 = (!sext_ln703_180_fu_13003235_p1.read().is_01() || !sext_ln1118_236_fu_12928576_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_180_fu_13003235_p1.read()) + sc_bigint<13>(sext_ln1118_236_fu_12928576_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_457_fu_13029537_p2() {
    add_ln703_457_fu_13029537_p2 = (!sext_ln703_181_fu_13029534_p1.read().is_01() || !sext_ln703_179_fu_13029530_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_181_fu_13029534_p1.read()) + sc_bigint<15>(sext_ln703_179_fu_13029530_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_458_fu_13003245_p2() {
    add_ln703_458_fu_13003245_p2 = (!zext_ln708_47_fu_12928474_p1.read().is_01() || !zext_ln708_48_fu_12928636_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_47_fu_12928474_p1.read()) + sc_biguint<11>(zext_ln708_48_fu_12928636_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_459_fu_13003251_p2() {
    add_ln703_459_fu_13003251_p2 = (!add_ln703_458_fu_13003245_p2.read().is_01() || !zext_ln708_46_fu_12928438_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_458_fu_13003245_p2.read()) + sc_biguint<11>(zext_ln708_46_fu_12928438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_460_fu_13003261_p2() {
    add_ln703_460_fu_13003261_p2 = (!sext_ln1118_234_fu_12928542_p1.read().is_01() || !sext_ln1118_233_fu_12928498_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_234_fu_12928542_p1.read()) + sc_bigint<11>(sext_ln1118_233_fu_12928498_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_461_fu_13003271_p2() {
    add_ln703_461_fu_13003271_p2 = (!sext_ln703_182_fu_13003267_p1.read().is_01() || !sext_ln1118_232_fu_12928404_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_182_fu_13003267_p1.read()) + sc_bigint<12>(sext_ln1118_232_fu_12928404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_462_fu_13003281_p2() {
    add_ln703_462_fu_13003281_p2 = (!sext_ln703_183_fu_13003277_p1.read().is_01() || !zext_ln703_28_fu_13003257_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_183_fu_13003277_p1.read()) + sc_biguint<13>(zext_ln703_28_fu_13003257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_463_fu_13029546_p2() {
    add_ln703_463_fu_13029546_p2 = (!sext_ln703_184_fu_13029543_p1.read().is_01() || !add_ln703_457_fu_13029537_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_184_fu_13029543_p1.read()) + sc_biguint<15>(add_ln703_457_fu_13029537_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_464_fu_13003287_p2() {
    add_ln703_464_fu_13003287_p2 = (!sext_ln203_113_fu_12928650_p1.read().is_01() || !sext_ln203_116_fu_12928704_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_113_fu_12928650_p1.read()) + sc_bigint<12>(sext_ln203_116_fu_12928704_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_465_fu_13029555_p2() {
    add_ln703_465_fu_13029555_p2 = (!sext_ln703_185_fu_13029552_p1.read().is_01() || !add_ln703_463_fu_13029546_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_185_fu_13029552_p1.read()) + sc_biguint<15>(add_ln703_463_fu_13029546_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_466_fu_13003293_p2() {
    add_ln703_466_fu_13003293_p2 = (!zext_ln708_49_fu_12928732_p1.read().is_01() || !zext_ln708_50_fu_12928746_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_49_fu_12928732_p1.read()) + sc_biguint<11>(zext_ln708_50_fu_12928746_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_467_fu_13003299_p2() {
    add_ln703_467_fu_13003299_p2 = (!zext_ln203_4_fu_12928786_p1.read().is_01() || !trunc_ln203_2_fu_12928790_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_4_fu_12928786_p1.read()) + sc_biguint<9>(trunc_ln203_2_fu_12928790_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_468_fu_13003309_p2() {
    add_ln703_468_fu_13003309_p2 = (!zext_ln703_29_fu_13003305_p1.read().is_01() || !add_ln703_466_fu_13003293_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_29_fu_13003305_p1.read()) + sc_biguint<11>(add_ln703_466_fu_13003293_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_469_fu_13029564_p2() {
    add_ln703_469_fu_13029564_p2 = (!zext_ln703_30_fu_13029561_p1.read().is_01() || !add_ln703_465_fu_13029555_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_30_fu_13029561_p1.read()) + sc_biguint<15>(add_ln703_465_fu_13029555_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_470_fu_13003315_p2() {
    add_ln703_470_fu_13003315_p2 = (!zext_ln203_6_fu_12928824_p1.read().is_01() || !sext_ln203_114_fu_12928670_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_6_fu_12928824_p1.read()) + sc_bigint<12>(sext_ln203_114_fu_12928670_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_471_fu_13003321_p2() {
    add_ln703_471_fu_13003321_p2 = (!add_ln703_470_fu_13003315_p2.read().is_01() || !zext_ln203_5_fu_12928810_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_470_fu_13003315_p2.read()) + sc_biguint<12>(zext_ln203_5_fu_12928810_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_472_fu_13003331_p2() {
    add_ln703_472_fu_13003331_p2 = (!sext_ln203_115_fu_12928690_p1.read().is_01() || !zext_ln203_7_fu_12928838_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_115_fu_12928690_p1.read()) + sc_biguint<11>(zext_ln203_7_fu_12928838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_473_fu_13003337_p2() {
    add_ln703_473_fu_13003337_p2 = (!sext_ln203_97_fu_12926076_p1.read().is_01() || !sext_ln203_117_fu_12928874_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_97_fu_12926076_p1.read()) + sc_bigint<8>(sext_ln203_117_fu_12928874_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_474_fu_13003347_p2() {
    add_ln703_474_fu_13003347_p2 = (!sext_ln703_188_fu_13003343_p1.read().is_01() || !add_ln703_472_fu_13003331_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_188_fu_13003343_p1.read()) + sc_biguint<11>(add_ln703_472_fu_13003331_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_475_fu_13003357_p2() {
    add_ln703_475_fu_13003357_p2 = (!sext_ln703_189_fu_13003353_p1.read().is_01() || !sext_ln703_187_fu_13003327_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_189_fu_13003353_p1.read()) + sc_bigint<13>(sext_ln703_187_fu_13003327_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_477_fu_13003363_p2() {
    add_ln703_477_fu_13003363_p2 = (!sext_ln1118_237_fu_12928888_p1.read().is_01() || !ap_const_lv11_790.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_237_fu_12928888_p1.read()) + sc_bigint<11>(ap_const_lv11_790));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_478_fu_13003373_p2() {
    add_ln703_478_fu_13003373_p2 = (!sext_ln1118_239_fu_12928916_p1.read().is_01() || !sext_ln1118_238_fu_12928902_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_239_fu_12928916_p1.read()) + sc_bigint<11>(sext_ln1118_238_fu_12928902_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_479_fu_13003383_p2() {
    add_ln703_479_fu_13003383_p2 = (!sext_ln703_192_fu_13003379_p1.read().is_01() || !sext_ln703_191_fu_13003369_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_192_fu_13003379_p1.read()) + sc_bigint<12>(sext_ln703_191_fu_13003369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_480_fu_13003389_p2() {
    add_ln703_480_fu_13003389_p2 = (!zext_ln708_52_fu_12928990_p1.read().is_01() || !sext_ln1118_240_fu_12928930_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_52_fu_12928990_p1.read()) + sc_bigint<11>(sext_ln1118_240_fu_12928930_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_481_fu_13003399_p2() {
    add_ln703_481_fu_13003399_p2 = (!sext_ln703_193_fu_13003395_p1.read().is_01() || !add_ln703_479_fu_13003383_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_193_fu_13003395_p1.read()) + sc_biguint<12>(add_ln703_479_fu_13003383_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_482_fu_13003409_p2() {
    add_ln703_482_fu_13003409_p2 = (!sext_ln1116_18_fu_12929053_p1.read().is_01() || !sext_ln1118_243_fu_12929039_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_18_fu_12929053_p1.read()) + sc_bigint<11>(sext_ln1118_243_fu_12929039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_483_fu_13003419_p2() {
    add_ln703_483_fu_13003419_p2 = (!sext_ln703_195_fu_13003415_p1.read().is_01() || !sext_ln1118_242_fu_12928976_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_195_fu_13003415_p1.read()) + sc_bigint<12>(sext_ln1118_242_fu_12928976_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_484_fu_13003429_p2() {
    add_ln703_484_fu_13003429_p2 = (!sext_ln703_196_fu_13003425_p1.read().is_01() || !sext_ln703_194_fu_13003405_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_196_fu_13003425_p1.read()) + sc_bigint<13>(sext_ln703_194_fu_13003405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_485_fu_13003435_p2() {
    add_ln703_485_fu_13003435_p2 = (!sext_ln1118_247_fu_12929153_p1.read().is_01() || !zext_ln1118_176_fu_12929249_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_247_fu_12929153_p1.read()) + sc_biguint<12>(zext_ln1118_176_fu_12929249_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_486_fu_13029589_p2() {
    add_ln703_486_fu_13029589_p2 = (!sext_ln703_198_fu_13029586_p1.read().is_01() || !sext_ln703_197_fu_13029583_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_198_fu_13029586_p1.read()) + sc_bigint<14>(sext_ln703_197_fu_13029583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_487_fu_13003441_p2() {
    add_ln703_487_fu_13003441_p2 = (!zext_ln708_54_fu_12929336_p1.read().is_01() || !sext_ln1118_251_fu_12929426_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_54_fu_12929336_p1.read()) + sc_bigint<11>(sext_ln1118_251_fu_12929426_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_488_fu_13003447_p2() {
    add_ln703_488_fu_13003447_p2 = (!add_ln703_487_fu_13003441_p2.read().is_01() || !zext_ln708_53_fu_12929313_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_487_fu_13003441_p2.read()) + sc_biguint<11>(zext_ln708_53_fu_12929313_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_489_fu_13029598_p2() {
    add_ln703_489_fu_13029598_p2 = (!sext_ln703_199_fu_13029595_p1.read().is_01() || !add_ln703_486_fu_13029589_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_199_fu_13029595_p1.read()) + sc_biguint<14>(add_ln703_486_fu_13029589_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_490_fu_13003453_p2() {
    add_ln703_490_fu_13003453_p2 = (!sext_ln1118_248_fu_12929167_p1.read().is_01() || !sext_ln1116_21_fu_12929445_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_248_fu_12929167_p1.read()) + sc_bigint<10>(sext_ln1116_21_fu_12929445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_491_fu_13003463_p2() {
    add_ln703_491_fu_13003463_p2 = (!sext_ln703_200_fu_13003459_p1.read().is_01() || !sext_ln1118_245_fu_12929111_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_200_fu_13003459_p1.read()) + sc_bigint<11>(sext_ln1118_245_fu_12929111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_492_fu_13003469_p2() {
    add_ln703_492_fu_13003469_p2 = (!sext_ln1118_249_fu_12929281_p1.read().is_01() || !sext_ln1116_20_fu_12929372_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_249_fu_12929281_p1.read()) + sc_bigint<8>(sext_ln1116_20_fu_12929372_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_493_fu_13003479_p2() {
    add_ln703_493_fu_13003479_p2 = (!sext_ln703_201_fu_13003475_p1.read().is_01() || !sext_ln1116_19_fu_12929222_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_201_fu_13003475_p1.read()) + sc_bigint<9>(sext_ln1116_19_fu_12929222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_494_fu_13003489_p2() {
    add_ln703_494_fu_13003489_p2 = (!sext_ln703_202_fu_13003485_p1.read().is_01() || !add_ln703_491_fu_13003463_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_202_fu_13003485_p1.read()) + sc_biguint<11>(add_ln703_491_fu_13003463_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_495_fu_13029607_p2() {
    add_ln703_495_fu_13029607_p2 = (!sext_ln703_203_fu_13029604_p1.read().is_01() || !add_ln703_489_fu_13029598_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_203_fu_13029604_p1.read()) + sc_biguint<14>(add_ln703_489_fu_13029598_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_496_fu_13003495_p2() {
    add_ln703_496_fu_13003495_p2 = (!sext_ln203_121_fu_12929570_p1.read().is_01() || !sext_ln203_128_fu_12929790_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_121_fu_12929570_p1.read()) + sc_bigint<12>(sext_ln203_128_fu_12929790_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_497_fu_13029620_p2() {
    add_ln703_497_fu_13029620_p2 = (!sext_ln703_205_fu_13029617_p1.read().is_01() || !sext_ln703_204_fu_13029613_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_205_fu_13029617_p1.read()) + sc_bigint<15>(sext_ln703_204_fu_13029613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_498_fu_13003501_p2() {
    add_ln703_498_fu_13003501_p2 = (!sext_ln203_123_fu_12929608_p1.read().is_01() || !sext_ln203_124_fu_12929632_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_123_fu_12929608_p1.read()) + sc_bigint<11>(sext_ln203_124_fu_12929632_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_499_fu_13003511_p2() {
    add_ln703_499_fu_13003511_p2 = (!sext_ln703_206_fu_13003507_p1.read().is_01() || !sext_ln203_119_fu_12929492_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_206_fu_13003507_p1.read()) + sc_bigint<12>(sext_ln203_119_fu_12929492_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_500_fu_13029629_p2() {
    add_ln703_500_fu_13029629_p2 = (!sext_ln703_207_fu_13029626_p1.read().is_01() || !add_ln703_497_fu_13029620_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_207_fu_13029626_p1.read()) + sc_biguint<15>(add_ln703_497_fu_13029620_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_501_fu_13003517_p2() {
    add_ln703_501_fu_13003517_p2 = (!sext_ln203_122_fu_12929594_p1.read().is_01() || !sext_ln203_125_fu_12929646_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_122_fu_12929594_p1.read()) + sc_bigint<10>(sext_ln203_125_fu_12929646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_502_fu_13003527_p2() {
    add_ln703_502_fu_13003527_p2 = (!sext_ln703_208_fu_13003523_p1.read().is_01() || !sext_ln203_120_fu_12929528_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_208_fu_13003523_p1.read()) + sc_bigint<11>(sext_ln203_120_fu_12929528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_503_fu_13003537_p2() {
    add_ln703_503_fu_13003537_p2 = (!sext_ln203_127_fu_12929776_p1.read().is_01() || !sext_ln203_118_fu_12929478_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_127_fu_12929776_p1.read()) + sc_bigint<10>(sext_ln203_118_fu_12929478_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_504_fu_13003543_p2() {
    add_ln703_504_fu_13003543_p2 = (!zext_ln708_58_fu_12929734_p1.read().is_01() || !sext_ln203_126_fu_12929709_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_58_fu_12929734_p1.read()) + sc_bigint<8>(sext_ln203_126_fu_12929709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_505_fu_13003553_p2() {
    add_ln703_505_fu_13003553_p2 = (!sext_ln703_210_fu_13003549_p1.read().is_01() || !add_ln703_503_fu_13003537_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_210_fu_13003549_p1.read()) + sc_biguint<10>(add_ln703_503_fu_13003537_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_506_fu_13003563_p2() {
    add_ln703_506_fu_13003563_p2 = (!sext_ln703_211_fu_13003559_p1.read().is_01() || !sext_ln703_209_fu_13003533_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_211_fu_13003559_p1.read()) + sc_bigint<12>(sext_ln703_209_fu_13003533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_508_fu_13003569_p2() {
    add_ln703_508_fu_13003569_p2 = (!sext_ln1118_254_fu_12929810_p1.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_254_fu_12929810_p1.read()) + sc_bigint<11>(ap_const_lv11_600));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_509_fu_13003579_p2() {
    add_ln703_509_fu_13003579_p2 = (!sext_ln1118_255_fu_12929824_p1.read().is_01() || !zext_ln708_59_fu_12929845_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_255_fu_12929824_p1.read()) + sc_biguint<12>(zext_ln708_59_fu_12929845_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_510_fu_13003585_p2() {
    add_ln703_510_fu_13003585_p2 = (!add_ln703_509_fu_13003579_p2.read().is_01() || !sext_ln703_214_fu_13003575_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_509_fu_13003579_p2.read()) + sc_bigint<12>(sext_ln703_214_fu_13003575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_511_fu_13003595_p2() {
    add_ln703_511_fu_13003595_p2 = (!zext_ln708_60_fu_12929917_p1.read().is_01() || !sext_ln1118_257_fu_12929889_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_60_fu_12929917_p1.read()) + sc_bigint<11>(sext_ln1118_257_fu_12929889_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_512_fu_13003605_p2() {
    add_ln703_512_fu_13003605_p2 = (!sext_ln703_216_fu_13003601_p1.read().is_01() || !zext_ln1118_199_fu_12929859_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_216_fu_13003601_p1.read()) + sc_biguint<12>(zext_ln1118_199_fu_12929859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_513_fu_13003615_p2() {
    add_ln703_513_fu_13003615_p2 = (!sext_ln703_217_fu_13003611_p1.read().is_01() || !sext_ln703_215_fu_13003591_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_217_fu_13003611_p1.read()) + sc_bigint<13>(sext_ln703_215_fu_13003591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_514_fu_13003621_p2() {
    add_ln703_514_fu_13003621_p2 = (!zext_ln1118_200_fu_12929945_p1.read().is_01() || !sext_ln203_129_fu_12929977_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_200_fu_12929945_p1.read()) + sc_bigint<12>(sext_ln203_129_fu_12929977_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_515_fu_13029654_p2() {
    add_ln703_515_fu_13029654_p2 = (!sext_ln703_219_fu_13029651_p1.read().is_01() || !sext_ln703_218_fu_13029648_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_219_fu_13029651_p1.read()) + sc_bigint<14>(sext_ln703_218_fu_13029648_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_516_fu_13003627_p2() {
    add_ln703_516_fu_13003627_p2 = (!zext_ln708_61_fu_12929991_p1.read().is_01() || !sext_ln1118_245_fu_12929111_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_61_fu_12929991_p1.read()) + sc_bigint<11>(sext_ln1118_245_fu_12929111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_517_fu_13003637_p2() {
    add_ln703_517_fu_13003637_p2 = (!zext_ln1116_19_fu_12929057_p1.read().is_01() || !zext_ln1118_28_fu_12925554_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_19_fu_12929057_p1.read()) + sc_biguint<9>(zext_ln1118_28_fu_12925554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_518_fu_13003647_p2() {
    add_ln703_518_fu_13003647_p2 = (!zext_ln703_31_fu_13003643_p1.read().is_01() || !sext_ln703_220_fu_13003633_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_31_fu_13003643_p1.read()) + sc_bigint<12>(sext_ln703_220_fu_13003633_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_519_fu_13029663_p2() {
    add_ln703_519_fu_13029663_p2 = (!sext_ln703_221_fu_13029660_p1.read().is_01() || !add_ln703_515_fu_13029654_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_221_fu_13029660_p1.read()) + sc_biguint<14>(add_ln703_515_fu_13029654_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_520_fu_13003653_p2() {
    add_ln703_520_fu_13003653_p2 = (!zext_ln1118_203_fu_12930013_p1.read().is_01() || !sext_ln1118_261_fu_12930165_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_203_fu_12930013_p1.read()) + sc_bigint<12>(sext_ln1118_261_fu_12930165_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_521_fu_13029672_p2() {
    add_ln703_521_fu_13029672_p2 = (!sext_ln703_222_fu_13029669_p1.read().is_01() || !add_ln703_519_fu_13029663_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_222_fu_13029669_p1.read()) + sc_biguint<14>(add_ln703_519_fu_13029663_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_522_fu_13003659_p2() {
    add_ln703_522_fu_13003659_p2 = (!zext_ln708_62_fu_12930069_p1.read().is_01() || !zext_ln708_63_fu_12930109_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_62_fu_12930069_p1.read()) + sc_biguint<11>(zext_ln708_63_fu_12930109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_523_fu_13003669_p2() {
    add_ln703_523_fu_13003669_p2 = (!zext_ln703_32_fu_13003665_p1.read().is_01() || !sext_ln1118_262_fu_12930189_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_32_fu_13003665_p1.read()) + sc_bigint<13>(sext_ln1118_262_fu_12930189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_524_fu_13029685_p2() {
    add_ln703_524_fu_13029685_p2 = (!sext_ln703_224_fu_13029682_p1.read().is_01() || !sext_ln703_223_fu_13029678_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_224_fu_13029682_p1.read()) + sc_bigint<15>(sext_ln703_223_fu_13029678_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_525_fu_13003675_p2() {
    add_ln703_525_fu_13003675_p2 = (!zext_ln1118_134_fu_12927955_p1.read().is_01() || !trunc_ln1118_2_fu_12930227_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_134_fu_12927955_p1.read()) + sc_biguint<10>(trunc_ln1118_2_fu_12930227_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_526_fu_13003681_p2() {
    add_ln703_526_fu_13003681_p2 = (!add_ln703_525_fu_13003675_p2.read().is_01() || !zext_ln1118_209_fu_12930213_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_525_fu_13003675_p2.read()) + sc_biguint<10>(zext_ln1118_209_fu_12930213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_527_fu_13003691_p2() {
    add_ln703_527_fu_13003691_p2 = (!zext_ln708_65_fu_12930265_p1.read().is_01() || !sext_ln708_4_fu_12930055_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_65_fu_12930265_p1.read()) + sc_bigint<11>(sext_ln708_4_fu_12930055_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_528_fu_13003701_p2() {
    add_ln703_528_fu_13003701_p2 = (!sext_ln1118_259_fu_12930041_p1.read().is_01() || !sext_ln1118_260_fu_12930141_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_259_fu_12930041_p1.read()) + sc_bigint<10>(sext_ln1118_260_fu_12930141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_529_fu_13003711_p2() {
    add_ln703_529_fu_13003711_p2 = (!sext_ln703_226_fu_13003707_p1.read().is_01() || !sext_ln703_225_fu_13003697_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_226_fu_13003707_p1.read()) + sc_bigint<12>(sext_ln703_225_fu_13003697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_530_fu_13003721_p2() {
    add_ln703_530_fu_13003721_p2 = (!sext_ln703_227_fu_13003717_p1.read().is_01() || !zext_ln703_33_fu_13003687_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_227_fu_13003717_p1.read()) + sc_biguint<13>(zext_ln703_33_fu_13003687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_531_fu_13029694_p2() {
    add_ln703_531_fu_13029694_p2 = (!sext_ln703_228_fu_13029691_p1.read().is_01() || !add_ln703_524_fu_13029685_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_228_fu_13029691_p1.read()) + sc_biguint<15>(add_ln703_524_fu_13029685_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_532_fu_13029700_p2() {
    add_ln703_532_fu_13029700_p2 = (!add_ln703_531_fu_13029694_p2.read().is_01() || !sext_ln203_131_fu_13028890_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_531_fu_13029694_p2.read()) + sc_bigint<15>(sext_ln203_131_fu_13028890_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_533_fu_13003727_p2() {
    add_ln703_533_fu_13003727_p2 = (!sext_ln203_133_fu_12930415_p1.read().is_01() || !zext_ln203_8_fu_12930293_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_133_fu_12930415_p1.read()) + sc_biguint<12>(zext_ln203_8_fu_12930293_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_534_fu_13029709_p2() {
    add_ln703_534_fu_13029709_p2 = (!sext_ln703_229_fu_13029706_p1.read().is_01() || !add_ln703_532_fu_13029700_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_229_fu_13029706_p1.read()) + sc_biguint<15>(add_ln703_532_fu_13029700_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_535_fu_13003733_p2() {
    add_ln703_535_fu_13003733_p2 = (!zext_ln203_9_fu_12930317_p1.read().is_01() || !tmp_44_fu_12928086_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_9_fu_12930317_p1.read()) + sc_biguint<10>(tmp_44_fu_12928086_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_536_fu_13003743_p2() {
    add_ln703_536_fu_13003743_p2 = (!sext_ln203_130_fu_12930279_p1.read().is_01() || !sext_ln203_132_fu_12930401_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_130_fu_12930279_p1.read()) + sc_bigint<11>(sext_ln203_132_fu_12930401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_537_fu_13003749_p2() {
    add_ln703_537_fu_13003749_p2 = (!add_ln703_536_fu_13003743_p2.read().is_01() || !zext_ln708_66_fu_12930429_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_536_fu_13003743_p2.read()) + sc_biguint<11>(zext_ln708_66_fu_12930429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_538_fu_13003759_p2() {
    add_ln703_538_fu_13003759_p2 = (!sext_ln703_231_fu_13003755_p1.read().is_01() || !zext_ln703_34_fu_13003739_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_231_fu_13003755_p1.read()) + sc_biguint<12>(zext_ln703_34_fu_13003739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_540_fu_13003765_p2() {
    add_ln703_540_fu_13003765_p2 = (!sext_ln203_111_fu_12928202_p1.read().is_01() || !ap_const_lv12_CD8.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_111_fu_12928202_p1.read()) + sc_bigint<12>(ap_const_lv12_CD8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_541_fu_13003771_p2() {
    add_ln703_541_fu_13003771_p2 = (!add_ln703_540_fu_13003765_p2.read().is_01() || !zext_ln1118_216_fu_12930457_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_540_fu_13003765_p2.read()) + sc_biguint<12>(zext_ln1118_216_fu_12930457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_542_fu_13003781_p2() {
    add_ln703_542_fu_13003781_p2 = (!sext_ln708_5_fu_12930443_p1.read().is_01() || !sext_ln1118_265_fu_12930501_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_5_fu_12930443_p1.read()) + sc_bigint<11>(sext_ln1118_265_fu_12930501_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_543_fu_13003791_p2() {
    add_ln703_543_fu_13003791_p2 = (!sext_ln703_234_fu_13003787_p1.read().is_01() || !sext_ln703_233_fu_13003777_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_234_fu_13003787_p1.read()) + sc_bigint<13>(sext_ln703_233_fu_13003777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_544_fu_13003801_p2() {
    add_ln703_544_fu_13003801_p2 = (!sext_ln1118_266_fu_12930533_p1.read().is_01() || !sext_ln1118_267_fu_12930547_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_266_fu_12930533_p1.read()) + sc_bigint<12>(sext_ln1118_267_fu_12930547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_545_fu_13003811_p2() {
    add_ln703_545_fu_13003811_p2 = (!sext_ln703_236_fu_13003807_p1.read().is_01() || !sext_ln703_235_fu_13003797_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_236_fu_13003807_p1.read()) + sc_bigint<14>(sext_ln703_235_fu_13003797_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_546_fu_13003817_p2() {
    add_ln703_546_fu_13003817_p2 = (!zext_ln708_67_fu_12930567_p1.read().is_01() || !sext_ln1118_268_fu_12930611_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_67_fu_12930567_p1.read()) + sc_bigint<11>(sext_ln1118_268_fu_12930611_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_547_fu_13003827_p2() {
    add_ln703_547_fu_13003827_p2 = (!sext_ln703_237_fu_13003823_p1.read().is_01() || !sext_ln708_6_fu_12930655_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_237_fu_13003823_p1.read()) + sc_bigint<12>(sext_ln708_6_fu_12930655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_548_fu_13029731_p2() {
    add_ln703_548_fu_13029731_p2 = (!sext_ln703_238_fu_13029728_p1.read().is_01() || !add_ln703_545_reg_13039920.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_238_fu_13029728_p1.read()) + sc_biguint<14>(add_ln703_545_reg_13039920.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_549_fu_13029736_p2() {
    add_ln703_549_fu_13029736_p2 = (!add_ln703_548_fu_13029731_p2.read().is_01() || !zext_ln1118_224_fu_13028893_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_548_fu_13029731_p2.read()) + sc_biguint<14>(zext_ln1118_224_fu_13028893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_550_fu_13003833_p2() {
    add_ln703_550_fu_13003833_p2 = (!sext_ln1118_269_fu_12930761_p1.read().is_01() || !sext_ln708_3_fu_12928608_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_269_fu_12930761_p1.read()) + sc_bigint<12>(sext_ln708_3_fu_12928608_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_551_fu_13003843_p2() {
    add_ln703_551_fu_13003843_p2 = (!sext_ln703_240_fu_13003839_p1.read().is_01() || !sext_ln708_7_fu_12930693_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_240_fu_13003839_p1.read()) + sc_bigint<13>(sext_ln708_7_fu_12930693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_552_fu_13029749_p2() {
    add_ln703_552_fu_13029749_p2 = (!sext_ln703_241_fu_13029746_p1.read().is_01() || !sext_ln703_239_fu_13029742_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_241_fu_13029746_p1.read()) + sc_bigint<15>(sext_ln703_239_fu_13029742_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_553_fu_13003849_p2() {
    add_ln703_553_fu_13003849_p2 = (!zext_ln1118_225_fu_12930729_p1.read().is_01() || !sext_ln1118_270_fu_12930775_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_225_fu_12930729_p1.read()) + sc_bigint<12>(sext_ln1118_270_fu_12930775_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_554_fu_13003855_p2() {
    add_ln703_554_fu_13003855_p2 = (!sext_ln1118_271_fu_12930795_p1.read().is_01() || !zext_ln1118_27_fu_12925550_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_271_fu_12930795_p1.read()) + sc_biguint<10>(zext_ln1118_27_fu_12925550_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_555_fu_13003865_p2() {
    add_ln703_555_fu_13003865_p2 = (!sext_ln703_242_fu_13003861_p1.read().is_01() || !sext_ln1118_272_fu_12930809_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_242_fu_13003861_p1.read()) + sc_bigint<11>(sext_ln1118_272_fu_12930809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_556_fu_13003875_p2() {
    add_ln703_556_fu_13003875_p2 = (!sext_ln703_243_fu_13003871_p1.read().is_01() || !add_ln703_553_fu_13003849_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_243_fu_13003871_p1.read()) + sc_biguint<12>(add_ln703_553_fu_13003849_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_557_fu_13029758_p2() {
    add_ln703_557_fu_13029758_p2 = (!sext_ln703_244_fu_13029755_p1.read().is_01() || !add_ln703_552_fu_13029749_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_244_fu_13029755_p1.read()) + sc_biguint<15>(add_ln703_552_fu_13029749_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_558_fu_13003881_p2() {
    add_ln703_558_fu_13003881_p2 = (!sext_ln203_134_fu_12930841_p1.read().is_01() || !sext_ln203_135_fu_12930905_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_134_fu_12930841_p1.read()) + sc_bigint<12>(sext_ln203_135_fu_12930905_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_559_fu_13029767_p2() {
    add_ln703_559_fu_13029767_p2 = (!sext_ln703_245_fu_13029764_p1.read().is_01() || !add_ln703_557_fu_13029758_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_245_fu_13029764_p1.read()) + sc_biguint<15>(add_ln703_557_fu_13029758_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_560_fu_13003887_p2() {
    add_ln703_560_fu_13003887_p2 = (!sext_ln203_136_fu_12931095_p1.read().is_01() || !zext_ln203_10_fu_12930869_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_136_fu_12931095_p1.read()) + sc_biguint<12>(zext_ln203_10_fu_12930869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_561_fu_13003897_p2() {
    add_ln703_561_fu_13003897_p2 = (!zext_ln708_70_fu_12930919_p1.read().is_01() || !zext_ln708_27_fu_12927058_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_70_fu_12930919_p1.read()) + sc_biguint<11>(zext_ln708_27_fu_12927058_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_562_fu_13003907_p2() {
    add_ln703_562_fu_13003907_p2 = (!zext_ln703_35_fu_13003903_p1.read().is_01() || !sext_ln703_247_fu_13003893_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_35_fu_13003903_p1.read()) + sc_bigint<13>(sext_ln703_247_fu_13003893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_563_fu_13029780_p2() {
    add_ln703_563_fu_13029780_p2 = (!sext_ln703_248_fu_13029777_p1.read().is_01() || !sext_ln703_246_fu_13029773_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_248_fu_13029777_p1.read()) + sc_bigint<16>(sext_ln703_246_fu_13029773_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_564_fu_13003913_p2() {
    add_ln703_564_fu_13003913_p2 = (!zext_ln203_11_fu_12930933_p1.read().is_01() || !zext_ln1118_138_fu_12928015_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_11_fu_12930933_p1.read()) + sc_biguint<10>(zext_ln1118_138_fu_12928015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_565_fu_13003923_p2() {
    add_ln703_565_fu_13003923_p2 = (!trunc_ln203_3_fu_12930937_p4.read().is_01() || !zext_ln203_12_fu_12930967_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_3_fu_12930937_p4.read()) + sc_biguint<10>(zext_ln203_12_fu_12930967_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_566_fu_13003933_p2() {
    add_ln703_566_fu_13003933_p2 = (!zext_ln703_37_fu_13003929_p1.read().is_01() || !zext_ln703_36_fu_13003919_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_37_fu_13003929_p1.read()) + sc_biguint<11>(zext_ln703_36_fu_13003919_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_567_fu_13003943_p2() {
    add_ln703_567_fu_13003943_p2 = (!trunc_ln203_4_fu_12930989_p4.read().is_01() || !zext_ln203_13_fu_12931031_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_4_fu_12930989_p4.read()) + sc_biguint<10>(zext_ln203_13_fu_12931031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_568_fu_13003953_p2() {
    add_ln703_568_fu_13003953_p2 = (!zext_ln203_14_fu_12931071_p1.read().is_01() || !zext_ln203_15_fu_12931127_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_14_fu_12931071_p1.read()) + sc_biguint<10>(zext_ln203_15_fu_12931127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_569_fu_13003963_p2() {
    add_ln703_569_fu_13003963_p2 = (!zext_ln703_40_fu_13003959_p1.read().is_01() || !zext_ln703_39_fu_13003949_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_40_fu_13003959_p1.read()) + sc_biguint<11>(zext_ln703_39_fu_13003949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_570_fu_13003973_p2() {
    add_ln703_570_fu_13003973_p2 = (!zext_ln703_41_fu_13003969_p1.read().is_01() || !zext_ln703_38_fu_13003939_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_41_fu_13003969_p1.read()) + sc_biguint<12>(zext_ln703_38_fu_13003939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_572_fu_13003979_p2() {
    add_ln703_572_fu_13003979_p2 = (!sext_ln203_111_fu_12928202_p1.read().is_01() || !zext_ln203_16_fu_12931153_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_111_fu_12928202_p1.read()) + sc_biguint<12>(zext_ln203_16_fu_12931153_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_573_fu_13003985_p2() {
    add_ln703_573_fu_13003985_p2 = (!zext_ln1118_236_fu_12931139_p1.read().is_01() || !ap_const_lv10_260.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_236_fu_12931139_p1.read()) + sc_bigint<10>(ap_const_lv10_260));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_574_fu_13003995_p2() {
    add_ln703_574_fu_13003995_p2 = (!sext_ln703_249_fu_13003991_p1.read().is_01() || !add_ln703_572_fu_13003979_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_249_fu_13003991_p1.read()) + sc_biguint<12>(add_ln703_572_fu_13003979_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_575_fu_13004005_p2() {
    add_ln703_575_fu_13004005_p2 = (!zext_ln1118_237_fu_12931181_p1.read().is_01() || !sext_ln708_8_fu_12931205_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_237_fu_12931181_p1.read()) + sc_bigint<12>(sext_ln708_8_fu_12931205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_576_fu_13004015_p2() {
    add_ln703_576_fu_13004015_p2 = (!sext_ln703_251_fu_13004011_p1.read().is_01() || !sext_ln703_250_fu_13004001_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_251_fu_13004011_p1.read()) + sc_bigint<13>(sext_ln703_250_fu_13004001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_577_fu_13004025_p2() {
    add_ln703_577_fu_13004025_p2 = (!sext_ln703_252_fu_13004021_p1.read().is_01() || !zext_ln203_17_fu_12931233_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_252_fu_13004021_p1.read()) + sc_biguint<14>(zext_ln203_17_fu_12931233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_578_fu_13004031_p2() {
    add_ln703_578_fu_13004031_p2 = (!sext_ln1118_273_fu_12931261_p1.read().is_01() || !zext_ln1118_243_fu_12931325_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_273_fu_12931261_p1.read()) + sc_biguint<12>(zext_ln1118_243_fu_12931325_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_579_fu_13004041_p2() {
    add_ln703_579_fu_13004041_p2 = (!sext_ln703_253_fu_13004037_p1.read().is_01() || !add_ln703_577_fu_13004025_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_253_fu_13004037_p1.read()) + sc_biguint<14>(add_ln703_577_fu_13004025_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_580_fu_13004047_p2() {
    add_ln703_580_fu_13004047_p2 = (!zext_ln1118_245_fu_12931357_p1.read().is_01() || !trunc_ln1118_3_fu_12931361_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_245_fu_12931357_p1.read()) + sc_biguint<9>(trunc_ln1118_3_fu_12931361_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_581_fu_13004057_p2() {
    add_ln703_581_fu_13004057_p2 = (!zext_ln1118_239_fu_12931247_p1.read().is_01() || !zext_ln1118_242_fu_12931311_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1118_239_fu_12931247_p1.read()) + sc_biguint<6>(zext_ln1118_242_fu_12931311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_582_fu_13004067_p2() {
    add_ln703_582_fu_13004067_p2 = (!zext_ln703_44_fu_13004063_p1.read().is_01() || !sext_ln708_9_fu_12931297_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_44_fu_13004063_p1.read()) + sc_bigint<9>(sext_ln708_9_fu_12931297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_583_fu_13004077_p2() {
    add_ln703_583_fu_13004077_p2 = (!sext_ln703_254_fu_13004073_p1.read().is_01() || !zext_ln703_43_fu_13004053_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_254_fu_13004073_p1.read()) + sc_biguint<11>(zext_ln703_43_fu_13004053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_584_fu_13029798_p2() {
    add_ln703_584_fu_13029798_p2 = (!sext_ln703_255_fu_13029795_p1.read().is_01() || !add_ln703_579_reg_13039955.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_255_fu_13029795_p1.read()) + sc_biguint<14>(add_ln703_579_reg_13039955.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_585_fu_13029803_p2() {
    add_ln703_585_fu_13029803_p2 = (!add_ln703_584_fu_13029798_p2.read().is_01() || !sext_ln1118_274_fu_13028896_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_584_fu_13029798_p2.read()) + sc_bigint<14>(sext_ln1118_274_fu_13028896_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_586_fu_13004083_p2() {
    add_ln703_586_fu_13004083_p2 = (!sext_ln1118_261_fu_12930165_p1.read().is_01() || !sext_ln708_11_fu_12931533_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_261_fu_12930165_p1.read()) + sc_bigint<12>(sext_ln708_11_fu_12931533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_587_fu_13029816_p2() {
    add_ln703_587_fu_13029816_p2 = (!sext_ln703_257_fu_13029813_p1.read().is_01() || !sext_ln703_256_fu_13029809_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_257_fu_13029813_p1.read()) + sc_bigint<15>(sext_ln703_256_fu_13029809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_588_fu_13004089_p2() {
    add_ln703_588_fu_13004089_p2 = (!trunc_ln1118_4_fu_12931403_p4.read().is_01() || !zext_ln1118_130_fu_12927915_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_4_fu_12931403_p4.read()) + sc_biguint<9>(zext_ln1118_130_fu_12927915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_589_fu_13004099_p2() {
    add_ln703_589_fu_13004099_p2 = (!trunc_ln1118_5_fu_12931473_p4.read().is_01() || !zext_ln1118_102_fu_12927102_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_5_fu_12931473_p4.read()) + sc_biguint<10>(zext_ln1118_102_fu_12927102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_590_fu_13004109_p2() {
    add_ln703_590_fu_13004109_p2 = (!zext_ln703_46_fu_13004105_p1.read().is_01() || !zext_ln703_45_fu_13004095_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_46_fu_13004105_p1.read()) + sc_biguint<11>(zext_ln703_45_fu_13004095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_591_fu_13029825_p2() {
    add_ln703_591_fu_13029825_p2 = (!zext_ln703_47_fu_13029822_p1.read().is_01() || !add_ln703_587_fu_13029816_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_47_fu_13029822_p1.read()) + sc_biguint<15>(add_ln703_587_fu_13029816_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_592_fu_13004115_p2() {
    add_ln703_592_fu_13004115_p2 = (!trunc_ln1118_6_fu_12931537_p4.read().is_01() || !zext_ln1118_253_fu_12931587_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_6_fu_12931537_p4.read()) + sc_biguint<10>(zext_ln1118_253_fu_12931587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_593_fu_13004125_p2() {
    add_ln703_593_fu_13004125_p2 = (!zext_ln708_73_fu_12931601_p1.read().is_01() || !zext_ln708_74_fu_12931629_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_73_fu_12931601_p1.read()) + sc_biguint<11>(zext_ln708_74_fu_12931629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_594_fu_13004135_p2() {
    add_ln703_594_fu_13004135_p2 = (!zext_ln703_49_fu_13004131_p1.read().is_01() || !zext_ln703_48_fu_13004121_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_49_fu_13004131_p1.read()) + sc_biguint<12>(zext_ln703_48_fu_13004121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_595_fu_13004145_p2() {
    add_ln703_595_fu_13004145_p2 = (!sext_ln1118_275_fu_12931423_p1.read().is_01() || !sext_ln708_10_fu_12931455_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_275_fu_12931423_p1.read()) + sc_bigint<11>(sext_ln708_10_fu_12931455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_596_fu_13004155_p2() {
    add_ln703_596_fu_13004155_p2 = (!zext_ln1118_38_fu_12925770_p1.read().is_01() || !zext_ln708_72_fu_12931469_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_38_fu_12925770_p1.read()) + sc_biguint<9>(zext_ln708_72_fu_12931469_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_597_fu_13004165_p2() {
    add_ln703_597_fu_13004165_p2 = (!zext_ln703_51_fu_13004161_p1.read().is_01() || !sext_ln703_258_fu_13004151_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_51_fu_13004161_p1.read()) + sc_bigint<12>(sext_ln703_258_fu_13004151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_598_fu_13004175_p2() {
    add_ln703_598_fu_13004175_p2 = (!sext_ln703_259_fu_13004171_p1.read().is_01() || !zext_ln703_50_fu_13004141_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_259_fu_13004171_p1.read()) + sc_biguint<13>(zext_ln703_50_fu_13004141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_599_fu_13029834_p2() {
    add_ln703_599_fu_13029834_p2 = (!sext_ln703_260_fu_13029831_p1.read().is_01() || !add_ln703_591_fu_13029825_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_260_fu_13029831_p1.read()) + sc_biguint<15>(add_ln703_591_fu_13029825_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_600_fu_13029840_p2() {
    add_ln703_600_fu_13029840_p2 = (!add_ln703_599_fu_13029834_p2.read().is_01() || !sext_ln203_139_fu_13028899_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_599_fu_13029834_p2.read()) + sc_bigint<15>(sext_ln203_139_fu_13028899_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_601_fu_13004181_p2() {
    add_ln703_601_fu_13004181_p2 = (!sext_ln203_138_fu_12931681_p1.read().is_01() || !sext_ln203_137_fu_12931649_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_138_fu_12931681_p1.read()) + sc_bigint<10>(sext_ln203_137_fu_12931649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_602_fu_13004191_p2() {
    add_ln703_602_fu_13004191_p2 = (!sext_ln703_261_fu_13004187_p1.read().is_01() || !sext_ln203_110_fu_12928178_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_261_fu_13004187_p1.read()) + sc_bigint<11>(sext_ln203_110_fu_12928178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_604_fu_13004197_p2() {
    add_ln703_604_fu_13004197_p2 = (!trunc_ln708_1178_fu_12931702_p4.read().is_01() || !ap_const_lv9_38.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln708_1178_fu_12931702_p4.read()) + sc_biguint<9>(ap_const_lv9_38));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_605_fu_13004207_p2() {
    add_ln703_605_fu_13004207_p2 = (!zext_ln703_52_fu_13004203_p1.read().is_01() || !sext_ln203_111_fu_12928202_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_52_fu_13004203_p1.read()) + sc_bigint<12>(sext_ln203_111_fu_12928202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_606_fu_13004217_p2() {
    add_ln703_606_fu_13004217_p2 = (!sext_ln1116_22_fu_12931746_p1.read().is_01() || !sext_ln1116_23_fu_12931760_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_22_fu_12931746_p1.read()) + sc_bigint<11>(sext_ln1116_23_fu_12931760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_607_fu_13004227_p2() {
    add_ln703_607_fu_13004227_p2 = (!sext_ln703_265_fu_13004223_p1.read().is_01() || !sext_ln703_264_fu_13004213_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_265_fu_13004223_p1.read()) + sc_bigint<13>(sext_ln703_264_fu_13004213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_608_fu_13004233_p2() {
    add_ln703_608_fu_13004233_p2 = (!add_ln703_607_fu_13004227_p2.read().is_01() || !sext_ln1116_24_fu_12931764_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_607_fu_13004227_p2.read()) + sc_bigint<13>(sext_ln1116_24_fu_12931764_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_609_fu_13004239_p2() {
    add_ln703_609_fu_13004239_p2 = (!sext_ln708_12_fu_12931907_p1.read().is_01() || !zext_ln708_75_fu_12931810_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_12_fu_12931907_p1.read()) + sc_biguint<12>(zext_ln708_75_fu_12931810_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_610_fu_13029865_p2() {
    add_ln703_610_fu_13029865_p2 = (!sext_ln703_267_fu_13029862_p1.read().is_01() || !sext_ln703_266_fu_13029859_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_267_fu_13029862_p1.read()) + sc_bigint<14>(sext_ln703_266_fu_13029859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_611_fu_13004245_p2() {
    add_ln703_611_fu_13004245_p2 = (!zext_ln708_76_fu_12931880_p1.read().is_01() || !sext_ln1118_278_fu_12931861_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_76_fu_12931880_p1.read()) + sc_bigint<11>(sext_ln1118_278_fu_12931861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_612_fu_13004255_p2() {
    add_ln703_612_fu_13004255_p2 = (!zext_ln1116_21_fu_12931814_p1.read().is_01() || !zext_ln1118_28_fu_12925554_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_21_fu_12931814_p1.read()) + sc_biguint<9>(zext_ln1118_28_fu_12925554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_613_fu_13004265_p2() {
    add_ln703_613_fu_13004265_p2 = (!zext_ln703_53_fu_13004261_p1.read().is_01() || !sext_ln703_268_fu_13004251_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_53_fu_13004261_p1.read()) + sc_bigint<12>(sext_ln703_268_fu_13004251_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_614_fu_13029874_p2() {
    add_ln703_614_fu_13029874_p2 = (!sext_ln703_269_fu_13029871_p1.read().is_01() || !add_ln703_610_fu_13029865_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_269_fu_13029871_p1.read()) + sc_biguint<14>(add_ln703_610_fu_13029865_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_615_fu_13029880_p2() {
    add_ln703_615_fu_13029880_p2 = (!add_ln703_614_fu_13029874_p2.read().is_01() || !sext_ln1118_279_fu_13028902_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_614_fu_13029874_p2.read()) + sc_bigint<14>(sext_ln1118_279_fu_13028902_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_616_fu_13004271_p2() {
    add_ln703_616_fu_13004271_p2 = (!sext_ln1116_26_fu_12931989_p1.read().is_01() || !sext_ln1116_27_fu_12932080_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_26_fu_12931989_p1.read()) + sc_bigint<12>(sext_ln1116_27_fu_12932080_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_617_fu_13004281_p2() {
    add_ln703_617_fu_13004281_p2 = (!sext_ln703_271_fu_13004277_p1.read().is_01() || !sext_ln1116_25_fu_12931970_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_271_fu_13004277_p1.read()) + sc_bigint<13>(sext_ln1116_25_fu_12931970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_618_fu_13029893_p2() {
    add_ln703_618_fu_13029893_p2 = (!sext_ln703_272_fu_13029890_p1.read().is_01() || !sext_ln703_270_fu_13029886_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_272_fu_13029890_p1.read()) + sc_bigint<15>(sext_ln703_270_fu_13029886_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_619_fu_13004287_p2() {
    add_ln703_619_fu_13004287_p2 = (!zext_ln708_78_fu_12931962_p1.read().is_01() || !sext_ln1116_28_fu_12932152_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_78_fu_12931962_p1.read()) + sc_bigint<11>(sext_ln1116_28_fu_12932152_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_620_fu_13004297_p2() {
    add_ln703_620_fu_13004297_p2 = (!sext_ln703_273_fu_13004293_p1.read().is_01() || !sext_ln1116_29_fu_12932178_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_273_fu_13004293_p1.read()) + sc_bigint<12>(sext_ln1116_29_fu_12932178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_621_fu_13004307_p2() {
    add_ln703_621_fu_13004307_p2 = (!sext_ln708_13_fu_12932045_p1.read().is_01() || !zext_ln1116_26_fu_12932059_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_13_fu_12932045_p1.read()) + sc_biguint<9>(zext_ln1116_26_fu_12932059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_622_fu_13004317_p2() {
    add_ln703_622_fu_13004317_p2 = (!sext_ln703_275_fu_13004313_p1.read().is_01() || !sext_ln1118_281_fu_12932112_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_275_fu_13004313_p1.read()) + sc_bigint<10>(sext_ln1118_281_fu_12932112_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_623_fu_13004327_p2() {
    add_ln703_623_fu_13004327_p2 = (!sext_ln703_276_fu_13004323_p1.read().is_01() || !sext_ln703_274_fu_13004303_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_276_fu_13004323_p1.read()) + sc_bigint<13>(sext_ln703_274_fu_13004303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_624_fu_13029902_p2() {
    add_ln703_624_fu_13029902_p2 = (!sext_ln703_277_fu_13029899_p1.read().is_01() || !add_ln703_618_fu_13029893_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_277_fu_13029899_p1.read()) + sc_biguint<15>(add_ln703_618_fu_13029893_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_625_fu_13004333_p2() {
    add_ln703_625_fu_13004333_p2 = (!sext_ln203_141_fu_12932226_p1.read().is_01() || !sext_ln203_143_fu_12932270_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_141_fu_12932226_p1.read()) + sc_bigint<12>(sext_ln203_143_fu_12932270_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_626_fu_13029911_p2() {
    add_ln703_626_fu_13029911_p2 = (!sext_ln703_278_fu_13029908_p1.read().is_01() || !add_ln703_624_fu_13029902_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_278_fu_13029908_p1.read()) + sc_biguint<15>(add_ln703_624_fu_13029902_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_627_fu_13004339_p2() {
    add_ln703_627_fu_13004339_p2 = (!sext_ln203_136_fu_12931095_p1.read().is_01() || !zext_ln203_18_fu_12932212_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_136_fu_12931095_p1.read()) + sc_biguint<12>(zext_ln203_18_fu_12932212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_628_fu_13004349_p2() {
    add_ln703_628_fu_13004349_p2 = (!sext_ln703_280_fu_13004345_p1.read().is_01() || !sext_ln203_145_fu_12932311_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_280_fu_13004345_p1.read()) + sc_bigint<13>(sext_ln203_145_fu_12932311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_629_fu_13029924_p2() {
    add_ln703_629_fu_13029924_p2 = (!sext_ln703_281_fu_13029921_p1.read().is_01() || !sext_ln703_279_fu_13029917_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_281_fu_13029921_p1.read()) + sc_bigint<16>(sext_ln703_279_fu_13029917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_630_fu_13004355_p2() {
    add_ln703_630_fu_13004355_p2 = (!zext_ln708_79_fu_12932391_p1.read().is_01() || !sext_ln203_140_fu_12932192_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_79_fu_12932391_p1.read()) + sc_bigint<11>(sext_ln203_140_fu_12932192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_631_fu_13004365_p2() {
    add_ln703_631_fu_13004365_p2 = (!sext_ln703_282_fu_13004361_p1.read().is_01() || !zext_ln203_19_fu_12932357_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_282_fu_13004361_p1.read()) + sc_biguint<12>(zext_ln203_19_fu_12932357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_632_fu_13004375_p2() {
    add_ln703_632_fu_13004375_p2 = (!sext_ln203_147_fu_12932377_p1.read().is_01() || !sext_ln203_144_fu_12932290_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_147_fu_12932377_p1.read()) + sc_bigint<10>(sext_ln203_144_fu_12932290_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_633_fu_13004385_p2() {
    add_ln703_633_fu_13004385_p2 = (!sext_ln703_284_fu_13004381_p1.read().is_01() || !sext_ln203_146_fu_12932325_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_284_fu_13004381_p1.read()) + sc_bigint<11>(sext_ln203_146_fu_12932325_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_634_fu_13004395_p2() {
    add_ln703_634_fu_13004395_p2 = (!sext_ln703_285_fu_13004391_p1.read().is_01() || !sext_ln703_283_fu_13004371_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_285_fu_13004391_p1.read()) + sc_bigint<13>(sext_ln703_283_fu_13004371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_636_fu_13004401_p2() {
    add_ln703_636_fu_13004401_p2 = (!trunc_ln203_5_fu_12932449_p4.read().is_01() || !ap_const_lv9_118.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_5_fu_12932449_p4.read()) + sc_bigint<9>(ap_const_lv9_118));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_637_fu_13004407_p2() {
    add_ln703_637_fu_13004407_p2 = (!add_ln703_636_fu_13004401_p2.read().is_01() || !zext_ln203_20_fu_12932423_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_636_fu_13004401_p2.read()) + sc_biguint<9>(zext_ln203_20_fu_12932423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_638_fu_13004417_p2() {
    add_ln703_638_fu_13004417_p2 = (!zext_ln708_80_fu_12932487_p1.read().is_01() || !sext_ln703_287_fu_13004413_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_80_fu_12932487_p1.read()) + sc_bigint<11>(sext_ln703_287_fu_13004413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_639_fu_13004427_p2() {
    add_ln703_639_fu_13004427_p2 = (!sext_ln703_288_fu_13004423_p1.read().is_01() || !zext_ln203_21_fu_12932501_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_288_fu_13004423_p1.read()) + sc_biguint<12>(zext_ln203_21_fu_12932501_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_640_fu_13004437_p2() {
    add_ln703_640_fu_13004437_p2 = (!sext_ln703_289_fu_13004433_p1.read().is_01() || !sext_ln203_148_fu_12932539_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_289_fu_13004433_p1.read()) + sc_bigint<13>(sext_ln203_148_fu_12932539_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_641_fu_13004443_p2() {
    add_ln703_641_fu_13004443_p2 = (!zext_ln708_81_fu_12932571_p1.read().is_01() || !trunc_ln1118_7_fu_12932575_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_81_fu_12932571_p1.read()) + sc_biguint<10>(trunc_ln1118_7_fu_12932575_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_642_fu_13004453_p2() {
    add_ln703_642_fu_13004453_p2 = (!zext_ln703_54_fu_13004449_p1.read().is_01() || !sext_ln1118_283_fu_12932595_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_54_fu_13004449_p1.read()) + sc_bigint<12>(sext_ln1118_283_fu_12932595_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_643_fu_13004463_p2() {
    add_ln703_643_fu_13004463_p2 = (!sext_ln703_290_fu_13004459_p1.read().is_01() || !add_ln703_640_fu_13004437_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_290_fu_13004459_p1.read()) + sc_biguint<13>(add_ln703_640_fu_13004437_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_644_fu_13029942_p2() {
    add_ln703_644_fu_13029942_p2 = (!sext_ln703_291_fu_13029939_p1.read().is_01() || !sext_ln203_149_fu_13028905_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_291_fu_13029939_p1.read()) + sc_bigint<14>(sext_ln203_149_fu_13028905_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_645_fu_13004469_p2() {
    add_ln703_645_fu_13004469_p2 = (!sext_ln1118_286_fu_12932671_p1.read().is_01() || !sext_ln1118_284_fu_12932615_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_286_fu_12932671_p1.read()) + sc_bigint<11>(sext_ln1118_284_fu_12932615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_646_fu_13004479_p2() {
    add_ln703_646_fu_13004479_p2 = (!sext_ln703_292_fu_13004475_p1.read().is_01() || !sext_ln1118_287_fu_12932685_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_292_fu_13004475_p1.read()) + sc_bigint<12>(sext_ln1118_287_fu_12932685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_647_fu_13029951_p2() {
    add_ln703_647_fu_13029951_p2 = (!sext_ln703_293_fu_13029948_p1.read().is_01() || !add_ln703_644_fu_13029942_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_293_fu_13029948_p1.read()) + sc_biguint<14>(add_ln703_644_fu_13029942_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_648_fu_13029957_p2() {
    add_ln703_648_fu_13029957_p2 = (!add_ln703_647_fu_13029951_p2.read().is_01() || !zext_ln1118_285_fu_13028908_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_647_fu_13029951_p2.read()) + sc_biguint<14>(zext_ln1118_285_fu_13028908_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_649_fu_13004485_p2() {
    add_ln703_649_fu_13004485_p2 = (!sext_ln1118_291_fu_12932835_p1.read().is_01() || !zext_ln1118_287_fu_12932741_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_291_fu_12932835_p1.read()) + sc_biguint<12>(zext_ln1118_287_fu_12932741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_650_fu_13004495_p2() {
    add_ln703_650_fu_13004495_p2 = (!sext_ln703_295_fu_13004491_p1.read().is_01() || !sext_ln1116_16_fu_12925749_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_295_fu_13004491_p1.read()) + sc_bigint<13>(sext_ln1116_16_fu_12925749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_651_fu_13029970_p2() {
    add_ln703_651_fu_13029970_p2 = (!sext_ln703_296_fu_13029967_p1.read().is_01() || !sext_ln703_294_fu_13029963_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_296_fu_13029967_p1.read()) + sc_bigint<15>(sext_ln703_294_fu_13029963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_652_fu_13004501_p2() {
    add_ln703_652_fu_13004501_p2 = (!zext_ln1118_288_fu_12932775_p1.read().is_01() || !zext_ln1118_291_fu_12932849_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_288_fu_12932775_p1.read()) + sc_biguint<10>(zext_ln1118_291_fu_12932849_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_653_fu_13004511_p2() {
    add_ln703_653_fu_13004511_p2 = (!zext_ln703_55_fu_13004507_p1.read().is_01() || !zext_ln708_82_fu_12932755_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_55_fu_13004507_p1.read()) + sc_biguint<11>(zext_ln708_82_fu_12932755_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_654_fu_13004521_p2() {
    add_ln703_654_fu_13004521_p2 = (!sext_ln1118_290_fu_12932821_p1.read().is_01() || !sext_ln1118_233_fu_12928498_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_290_fu_12932821_p1.read()) + sc_bigint<11>(sext_ln1118_233_fu_12928498_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_655_fu_13004531_p2() {
    add_ln703_655_fu_13004531_p2 = (!sext_ln703_297_fu_13004527_p1.read().is_01() || !sext_ln1118_288_fu_12932727_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_297_fu_13004527_p1.read()) + sc_bigint<12>(sext_ln1118_288_fu_12932727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_656_fu_13004541_p2() {
    add_ln703_656_fu_13004541_p2 = (!sext_ln703_298_fu_13004537_p1.read().is_01() || !zext_ln703_56_fu_13004517_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_298_fu_13004537_p1.read()) + sc_biguint<13>(zext_ln703_56_fu_13004517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_657_fu_13029979_p2() {
    add_ln703_657_fu_13029979_p2 = (!sext_ln703_299_fu_13029976_p1.read().is_01() || !add_ln703_651_fu_13029970_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_299_fu_13029976_p1.read()) + sc_biguint<15>(add_ln703_651_fu_13029970_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_658_fu_13029985_p2() {
    add_ln703_658_fu_13029985_p2 = (!add_ln703_657_fu_13029979_p2.read().is_01() || !sext_ln203_150_fu_13028911_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_657_fu_13029979_p2.read()) + sc_bigint<15>(sext_ln203_150_fu_13028911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_659_fu_13004547_p2() {
    add_ln703_659_fu_13004547_p2 = (!zext_ln203_22_fu_12932949_p1.read().is_01() || !trunc_ln203_6_fu_12933073_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_22_fu_12932949_p1.read()) + sc_biguint<10>(trunc_ln203_6_fu_12933073_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_660_fu_13004557_p2() {
    add_ln703_660_fu_13004557_p2 = (!zext_ln703_57_fu_13004553_p1.read().is_01() || !sext_ln203_156_fu_12933047_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_57_fu_13004553_p1.read()) + sc_bigint<12>(sext_ln203_156_fu_12933047_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_661_fu_13029994_p2() {
    add_ln703_661_fu_13029994_p2 = (!sext_ln703_300_fu_13029991_p1.read().is_01() || !add_ln703_658_fu_13029985_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_300_fu_13029991_p1.read()) + sc_biguint<15>(add_ln703_658_fu_13029985_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_662_fu_13004563_p2() {
    add_ln703_662_fu_13004563_p2 = (!sext_ln203_153_fu_12932983_p1.read().is_01() || !sext_ln203_155_fu_12933001_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_153_fu_12932983_p1.read()) + sc_bigint<11>(sext_ln203_155_fu_12933001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_663_fu_13004573_p2() {
    add_ln703_663_fu_13004573_p2 = (!sext_ln703_302_fu_13004569_p1.read().is_01() || !zext_ln203_23_fu_12933145_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_302_fu_13004569_p1.read()) + sc_biguint<12>(zext_ln203_23_fu_12933145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_664_fu_13004579_p2() {
    add_ln703_664_fu_13004579_p2 = (!sext_ln203_151_fu_12932893_p1.read().is_01() || !sext_ln203_152_fu_12932925_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_151_fu_12932893_p1.read()) + sc_bigint<9>(sext_ln203_152_fu_12932925_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_665_fu_13004589_p2() {
    add_ln703_665_fu_13004589_p2 = (!sext_ln703_303_fu_13004585_p1.read().is_01() || !sext_ln203_157_fu_12933123_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_303_fu_13004585_p1.read()) + sc_bigint<10>(sext_ln203_157_fu_12933123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_666_fu_13004599_p2() {
    add_ln703_666_fu_13004599_p2 = (!sext_ln703_304_fu_13004595_p1.read().is_01() || !add_ln703_663_fu_13004573_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_304_fu_13004595_p1.read()) + sc_biguint<12>(add_ln703_663_fu_13004573_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_668_fu_13004605_p2() {
    add_ln703_668_fu_13004605_p2 = (!trunc_ln1118_8_fu_12933171_p4.read().is_01() || !ap_const_lv10_2B0.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_8_fu_12933171_p4.read()) + sc_bigint<10>(ap_const_lv10_2B0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_669_fu_13004615_p2() {
    add_ln703_669_fu_13004615_p2 = (!sext_ln703_306_fu_13004611_p1.read().is_01() || !sext_ln203_111_fu_12928202_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_306_fu_13004611_p1.read()) + sc_bigint<12>(sext_ln203_111_fu_12928202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_670_fu_13004625_p2() {
    add_ln703_670_fu_13004625_p2 = (!sext_ln1118_297_fu_12933251_p1.read().is_01() || !sext_ln1118_296_fu_12933223_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_297_fu_12933251_p1.read()) + sc_bigint<12>(sext_ln1118_296_fu_12933223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_671_fu_13004635_p2() {
    add_ln703_671_fu_13004635_p2 = (!sext_ln703_308_fu_13004631_p1.read().is_01() || !sext_ln703_307_fu_13004621_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_308_fu_13004631_p1.read()) + sc_bigint<13>(sext_ln703_307_fu_13004621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_672_fu_13004645_p2() {
    add_ln703_672_fu_13004645_p2 = (!sext_ln1118_298_fu_12933265_p1.read().is_01() || !sext_ln1118_299_fu_12933289_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_298_fu_12933265_p1.read()) + sc_bigint<12>(sext_ln1118_299_fu_12933289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_673_fu_13004655_p2() {
    add_ln703_673_fu_13004655_p2 = (!sext_ln703_310_fu_13004651_p1.read().is_01() || !sext_ln703_309_fu_13004641_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_310_fu_13004651_p1.read()) + sc_bigint<14>(sext_ln703_309_fu_13004641_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_674_fu_13004661_p2() {
    add_ln703_674_fu_13004661_p2 = (!sext_ln1118_231_fu_12928358_p1.read().is_01() || !zext_ln1118_306_fu_12933303_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_231_fu_12928358_p1.read()) + sc_biguint<12>(zext_ln1118_306_fu_12933303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_675_fu_13004671_p2() {
    add_ln703_675_fu_13004671_p2 = (!zext_ln708_87_fu_12933317_p1.read().is_01() || !sext_ln708_14_fu_12933341_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_87_fu_12933317_p1.read()) + sc_bigint<11>(sext_ln708_14_fu_12933341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_676_fu_13004681_p2() {
    add_ln703_676_fu_13004681_p2 = (!sext_ln703_312_fu_13004677_p1.read().is_01() || !sext_ln703_311_fu_13004667_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_312_fu_13004677_p1.read()) + sc_bigint<13>(sext_ln703_311_fu_13004667_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_677_fu_13004691_p2() {
    add_ln703_677_fu_13004691_p2 = (!sext_ln703_313_fu_13004687_p1.read().is_01() || !add_ln703_673_fu_13004655_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_313_fu_13004687_p1.read()) + sc_biguint<14>(add_ln703_673_fu_13004655_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_678_fu_13004697_p2() {
    add_ln703_678_fu_13004697_p2 = (!zext_ln1118_308_fu_12933355_p1.read().is_01() || !sext_ln1118_300_fu_12933449_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_308_fu_12933355_p1.read()) + sc_bigint<12>(sext_ln1118_300_fu_12933449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_679_fu_13030019_p2() {
    add_ln703_679_fu_13030019_p2 = (!sext_ln703_315_fu_13030016_p1.read().is_01() || !sext_ln703_314_fu_13030013_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_315_fu_13030016_p1.read()) + sc_bigint<15>(sext_ln703_314_fu_13030013_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_680_fu_13004703_p2() {
    add_ln703_680_fu_13004703_p2 = (!sext_ln1118_305_fu_12933599_p1.read().is_01() || !zext_ln1118_309_fu_12933369_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_305_fu_12933599_p1.read()) + sc_biguint<12>(zext_ln1118_309_fu_12933369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_681_fu_13004713_p2() {
    add_ln703_681_fu_13004713_p2 = (!sext_ln703_316_fu_13004709_p1.read().is_01() || !sext_ln1118_301_fu_12933487_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_316_fu_13004709_p1.read()) + sc_bigint<13>(sext_ln1118_301_fu_12933487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_682_fu_13030028_p2() {
    add_ln703_682_fu_13030028_p2 = (!sext_ln703_317_fu_13030025_p1.read().is_01() || !add_ln703_679_fu_13030019_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_317_fu_13030025_p1.read()) + sc_biguint<15>(add_ln703_679_fu_13030019_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_683_fu_13004719_p2() {
    add_ln703_683_fu_13004719_p2 = (!zext_ln1118_312_fu_12933421_p1.read().is_01() || !zext_ln1118_313_fu_12933435_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_312_fu_12933421_p1.read()) + sc_biguint<9>(zext_ln1118_313_fu_12933435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_684_fu_13004729_p2() {
    add_ln703_684_fu_13004729_p2 = (!zext_ln703_58_fu_13004725_p1.read().is_01() || !zext_ln1118_311_fu_12933393_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_58_fu_13004725_p1.read()) + sc_biguint<10>(zext_ln1118_311_fu_12933393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_685_fu_13004739_p2() {
    add_ln703_685_fu_13004739_p2 = (!zext_ln1118_314_fu_12933473_p1.read().is_01() || !zext_ln1118_317_fu_12933567_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_314_fu_12933473_p1.read()) + sc_biguint<10>(zext_ln1118_317_fu_12933567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_686_fu_13004749_p2() {
    add_ln703_686_fu_13004749_p2 = (!sext_ln1118_302_fu_12933501_p1.read().is_01() || !sext_ln1118_304_fu_12933543_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_302_fu_12933501_p1.read()) + sc_bigint<11>(sext_ln1118_304_fu_12933543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_687_fu_13004759_p2() {
    add_ln703_687_fu_13004759_p2 = (!sext_ln703_318_fu_13004755_p1.read().is_01() || !zext_ln703_60_fu_13004745_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_318_fu_13004755_p1.read()) + sc_biguint<12>(zext_ln703_60_fu_13004745_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_688_fu_13004769_p2() {
    add_ln703_688_fu_13004769_p2 = (!sext_ln703_319_fu_13004765_p1.read().is_01() || !zext_ln703_59_fu_13004735_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_319_fu_13004765_p1.read()) + sc_biguint<13>(zext_ln703_59_fu_13004735_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_689_fu_13030037_p2() {
    add_ln703_689_fu_13030037_p2 = (!sext_ln703_320_fu_13030034_p1.read().is_01() || !add_ln703_682_fu_13030028_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_320_fu_13030034_p1.read()) + sc_biguint<15>(add_ln703_682_fu_13030028_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_690_fu_13030043_p2() {
    add_ln703_690_fu_13030043_p2 = (!add_ln703_689_fu_13030037_p2.read().is_01() || !sext_ln203_158_fu_13028914_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_689_fu_13030037_p2.read()) + sc_bigint<15>(sext_ln203_158_fu_13028914_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_691_fu_13004775_p2() {
    add_ln703_691_fu_13004775_p2 = (!sext_ln203_163_fu_12933763_p1.read().is_01() || !zext_ln203_24_fu_12933613_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_163_fu_12933763_p1.read()) + sc_biguint<12>(zext_ln203_24_fu_12933613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_692_fu_13004785_p2() {
    add_ln703_692_fu_13004785_p2 = (!sext_ln703_322_fu_13004781_p1.read().is_01() || !sext_ln203_159_fu_12933627_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_322_fu_13004781_p1.read()) + sc_bigint<13>(sext_ln203_159_fu_12933627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_693_fu_13030056_p2() {
    add_ln703_693_fu_13030056_p2 = (!sext_ln703_323_fu_13030053_p1.read().is_01() || !sext_ln703_321_fu_13030049_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_323_fu_13030053_p1.read()) + sc_bigint<16>(sext_ln703_321_fu_13030049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_694_fu_13004791_p2() {
    add_ln703_694_fu_13004791_p2 = (!zext_ln708_90_fu_12933679_p1.read().is_01() || !zext_ln708_91_fu_12933783_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_90_fu_12933679_p1.read()) + sc_biguint<11>(zext_ln708_91_fu_12933783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_695_fu_13004797_p2() {
    add_ln703_695_fu_13004797_p2 = (!add_ln703_694_fu_13004791_p2.read().is_01() || !zext_ln708_89_fu_12933665_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_694_fu_13004791_p2.read()) + sc_biguint<11>(zext_ln708_89_fu_12933665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_696_fu_13004807_p2() {
    add_ln703_696_fu_13004807_p2 = (!sext_ln203_160_fu_12933651_p1.read().is_01() || !sext_ln203_161_fu_12933703_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_160_fu_12933651_p1.read()) + sc_bigint<8>(sext_ln203_161_fu_12933703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_697_fu_13004817_p2() {
    add_ln703_697_fu_13004817_p2 = (!sext_ln703_324_fu_13004813_p1.read().is_01() || !sext_ln203_162_fu_12933749_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_324_fu_13004813_p1.read()) + sc_bigint<9>(sext_ln203_162_fu_12933749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_698_fu_13004827_p2() {
    add_ln703_698_fu_13004827_p2 = (!sext_ln703_325_fu_13004823_p1.read().is_01() || !zext_ln703_61_fu_13004803_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_325_fu_13004823_p1.read()) + sc_biguint<12>(zext_ln703_61_fu_13004803_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_700_fu_13004833_p2() {
    add_ln703_700_fu_13004833_p2 = (!sext_ln203_164_fu_12933807_p1.read().is_01() || !zext_ln203_25_fu_12933821_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_164_fu_12933807_p1.read()) + sc_biguint<12>(zext_ln203_25_fu_12933821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_701_fu_13004839_p2() {
    add_ln703_701_fu_13004839_p2 = (!zext_ln708_92_fu_12933841_p1.read().is_01() || !ap_const_lv11_760.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_92_fu_12933841_p1.read()) + sc_bigint<11>(ap_const_lv11_760));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_702_fu_13004849_p2() {
    add_ln703_702_fu_13004849_p2 = (!sext_ln703_327_fu_13004845_p1.read().is_01() || !add_ln703_700_fu_13004833_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_327_fu_13004845_p1.read()) + sc_biguint<12>(add_ln703_700_fu_13004833_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_703_fu_13004859_p2() {
    add_ln703_703_fu_13004859_p2 = (!zext_ln1118_324_fu_12933855_p1.read().is_01() || !sext_ln708_15_fu_12933875_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_324_fu_12933855_p1.read()) + sc_bigint<12>(sext_ln708_15_fu_12933875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_704_fu_13004869_p2() {
    add_ln703_704_fu_13004869_p2 = (!sext_ln703_329_fu_13004865_p1.read().is_01() || !sext_ln703_328_fu_13004855_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_329_fu_13004865_p1.read()) + sc_bigint<13>(sext_ln703_328_fu_13004855_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_705_fu_13004879_p2() {
    add_ln703_705_fu_13004879_p2 = (!sext_ln1118_299_fu_12933289_p1.read().is_01() || !sext_ln1118_231_fu_12928358_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_299_fu_12933289_p1.read()) + sc_bigint<12>(sext_ln1118_231_fu_12928358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_706_fu_13004889_p2() {
    add_ln703_706_fu_13004889_p2 = (!sext_ln703_331_fu_13004885_p1.read().is_01() || !sext_ln703_330_fu_13004875_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_331_fu_13004885_p1.read()) + sc_bigint<14>(sext_ln703_330_fu_13004875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_707_fu_13004895_p2() {
    add_ln703_707_fu_13004895_p2 = (!zext_ln708_93_fu_12933975_p1.read().is_01() || !sext_ln1118_308_fu_12933943_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_93_fu_12933975_p1.read()) + sc_bigint<11>(sext_ln1118_308_fu_12933943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_708_fu_13004901_p2() {
    add_ln703_708_fu_13004901_p2 = (!sext_ln1118_309_fu_12933995_p1.read().is_01() || !zext_ln1118_325_fu_12933889_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_309_fu_12933995_p1.read()) + sc_biguint<9>(zext_ln1118_325_fu_12933889_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_709_fu_13004911_p2() {
    add_ln703_709_fu_13004911_p2 = (!sext_ln703_332_fu_13004907_p1.read().is_01() || !add_ln703_707_fu_13004895_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_332_fu_13004907_p1.read()) + sc_biguint<11>(add_ln703_707_fu_13004895_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_710_fu_13030074_p2() {
    add_ln703_710_fu_13030074_p2 = (!sext_ln703_333_fu_13030071_p1.read().is_01() || !add_ln703_706_reg_13040085.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_333_fu_13030071_p1.read()) + sc_biguint<14>(add_ln703_706_reg_13040085.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_711_fu_13030079_p2() {
    add_ln703_711_fu_13030079_p2 = (!add_ln703_710_fu_13030074_p2.read().is_01() || !sext_ln203_165_fu_13028917_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_710_fu_13030074_p2.read()) + sc_bigint<14>(sext_ln203_165_fu_13028917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_712_fu_13004917_p2() {
    add_ln703_712_fu_13004917_p2 = (!sext_ln1118_313_fu_12934117_p1.read().is_01() || !zext_ln708_94_fu_12934043_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_313_fu_12934117_p1.read()) + sc_biguint<12>(zext_ln708_94_fu_12934043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_713_fu_13004927_p2() {
    add_ln703_713_fu_13004927_p2 = (!sext_ln703_335_fu_13004923_p1.read().is_01() || !sext_ln1118_312_fu_12934103_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_335_fu_13004923_p1.read()) + sc_bigint<13>(sext_ln1118_312_fu_12934103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_714_fu_13030092_p2() {
    add_ln703_714_fu_13030092_p2 = (!sext_ln703_336_fu_13030089_p1.read().is_01() || !sext_ln703_334_fu_13030085_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_336_fu_13030089_p1.read()) + sc_bigint<15>(sext_ln703_334_fu_13030085_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_715_fu_13004933_p2() {
    add_ln703_715_fu_13004933_p2 = (!zext_ln708_97_fu_12934141_p1.read().is_01() || !sext_ln1118_310_fu_12934025_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_97_fu_12934141_p1.read()) + sc_bigint<11>(sext_ln1118_310_fu_12934025_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_716_fu_13004943_p2() {
    add_ln703_716_fu_13004943_p2 = (!sext_ln703_337_fu_13004939_p1.read().is_01() || !zext_ln1118_329_fu_12934079_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_337_fu_13004939_p1.read()) + sc_biguint<12>(zext_ln1118_329_fu_12934079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_717_fu_13004953_p2() {
    add_ln703_717_fu_13004953_p2 = (!sext_ln1118_314_fu_12934165_p1.read().is_01() || !zext_ln1118_172_fu_12929178_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_314_fu_12934165_p1.read()) + sc_biguint<11>(zext_ln1118_172_fu_12929178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_718_fu_13004963_p2() {
    add_ln703_718_fu_13004963_p2 = (!sext_ln703_339_fu_13004959_p1.read().is_01() || !sext_ln1118_311_fu_12934029_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_339_fu_13004959_p1.read()) + sc_bigint<12>(sext_ln1118_311_fu_12934029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_719_fu_13004973_p2() {
    add_ln703_719_fu_13004973_p2 = (!sext_ln703_340_fu_13004969_p1.read().is_01() || !sext_ln703_338_fu_13004949_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_340_fu_13004969_p1.read()) + sc_bigint<13>(sext_ln703_338_fu_13004949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_720_fu_13030101_p2() {
    add_ln703_720_fu_13030101_p2 = (!sext_ln703_341_fu_13030098_p1.read().is_01() || !add_ln703_714_fu_13030092_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_341_fu_13030098_p1.read()) + sc_biguint<15>(add_ln703_714_fu_13030092_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_721_fu_13004979_p2() {
    add_ln703_721_fu_13004979_p2 = (!sext_ln203_167_fu_12934313_p1.read().is_01() || !zext_ln203_18_fu_12932212_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_167_fu_12934313_p1.read()) + sc_biguint<12>(zext_ln203_18_fu_12932212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_722_fu_13030110_p2() {
    add_ln703_722_fu_13030110_p2 = (!sext_ln703_342_fu_13030107_p1.read().is_01() || !add_ln703_720_fu_13030101_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_342_fu_13030107_p1.read()) + sc_biguint<15>(add_ln703_720_fu_13030101_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_723_fu_13004985_p2() {
    add_ln703_723_fu_13004985_p2 = (!zext_ln203_26_fu_12934225_p1.read().is_01() || !zext_ln203_27_fu_12934239_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_26_fu_12934225_p1.read()) + sc_biguint<10>(zext_ln203_27_fu_12934239_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_724_fu_13004995_p2() {
    add_ln703_724_fu_13004995_p2 = (!zext_ln703_62_fu_13004991_p1.read().is_01() || !zext_ln708_98_fu_12934211_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_62_fu_13004991_p1.read()) + sc_biguint<11>(zext_ln708_98_fu_12934211_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_725_fu_13030119_p2() {
    add_ln703_725_fu_13030119_p2 = (!zext_ln703_63_fu_13030116_p1.read().is_01() || !add_ln703_722_fu_13030110_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_63_fu_13030116_p1.read()) + sc_biguint<15>(add_ln703_722_fu_13030110_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_726_fu_13005001_p2() {
    add_ln703_726_fu_13005001_p2 = (!zext_ln708_100_fu_12934285_p1.read().is_01() || !zext_ln708_101_fu_12934299_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_100_fu_12934285_p1.read()) + sc_biguint<11>(zext_ln708_101_fu_12934299_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_727_fu_13005007_p2() {
    add_ln703_727_fu_13005007_p2 = (!add_ln703_726_fu_13005001_p2.read().is_01() || !zext_ln708_99_fu_12934271_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_726_fu_13005001_p2.read()) + sc_biguint<11>(zext_ln708_99_fu_12934271_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_728_fu_13005017_p2() {
    add_ln703_728_fu_13005017_p2 = (!sext_ln203_166_fu_12934179_p1.read().is_01() || !sext_ln203_151_fu_12932893_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_166_fu_12934179_p1.read()) + sc_bigint<9>(sext_ln203_151_fu_12932893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_729_fu_13005027_p2() {
    add_ln703_729_fu_13005027_p2 = (!sext_ln703_344_fu_13005023_p1.read().is_01() || !zext_ln203_28_fu_12934327_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_344_fu_13005023_p1.read()) + sc_biguint<12>(zext_ln203_28_fu_12934327_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_730_fu_13005037_p2() {
    add_ln703_730_fu_13005037_p2 = (!sext_ln703_345_fu_13005033_p1.read().is_01() || !zext_ln703_64_fu_13005013_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_345_fu_13005033_p1.read()) + sc_biguint<13>(zext_ln703_64_fu_13005013_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_732_fu_13005043_p2() {
    add_ln703_732_fu_13005043_p2 = (!zext_ln708_103_fu_12934359_p1.read().is_01() || !ap_const_lv11_70.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_103_fu_12934359_p1.read()) + sc_biguint<11>(ap_const_lv11_70));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_733_fu_13005053_p2() {
    add_ln703_733_fu_13005053_p2 = (!sext_ln1118_316_fu_12934419_p1.read().is_01() || !sext_ln1116_30_fu_12934405_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_316_fu_12934419_p1.read()) + sc_bigint<10>(sext_ln1116_30_fu_12934405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_734_fu_13005063_p2() {
    add_ln703_734_fu_13005063_p2 = (!sext_ln703_347_fu_13005059_p1.read().is_01() || !zext_ln703_65_fu_13005049_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_347_fu_13005059_p1.read()) + sc_biguint<12>(zext_ln703_65_fu_13005049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_735_fu_13005073_p2() {
    add_ln703_735_fu_13005073_p2 = (!sext_ln1116_31_fu_12934461_p1.read().is_01() || !sext_ln708_16_fu_12934493_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_31_fu_12934461_p1.read()) + sc_bigint<12>(sext_ln708_16_fu_12934493_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_736_fu_13005083_p2() {
    add_ln703_736_fu_13005083_p2 = (!sext_ln703_349_fu_13005079_p1.read().is_01() || !sext_ln703_348_fu_13005069_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_349_fu_13005079_p1.read()) + sc_bigint<13>(sext_ln703_348_fu_13005069_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_737_fu_13005089_p2() {
    add_ln703_737_fu_13005089_p2 = (!zext_ln1118_20_fu_12925455_p1.read().is_01() || !sext_ln1118_317_fu_12934433_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_20_fu_12925455_p1.read()) + sc_bigint<12>(sext_ln1118_317_fu_12934433_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_738_fu_13005099_p2() {
    add_ln703_738_fu_13005099_p2 = (!sext_ln703_351_fu_13005095_p1.read().is_01() || !zext_ln1118_337_fu_12934447_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_351_fu_13005095_p1.read()) + sc_biguint<13>(zext_ln1118_337_fu_12934447_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_739_fu_13030144_p2() {
    add_ln703_739_fu_13030144_p2 = (!sext_ln703_352_fu_13030141_p1.read().is_01() || !sext_ln703_350_fu_13030138_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_352_fu_13030141_p1.read()) + sc_bigint<14>(sext_ln703_350_fu_13030138_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_740_fu_13005105_p2() {
    add_ln703_740_fu_13005105_p2 = (!zext_ln708_104_fu_12934520_p1.read().is_01() || !sext_ln1118_318_fu_12934564_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_104_fu_12934520_p1.read()) + sc_bigint<12>(sext_ln1118_318_fu_12934564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_741_fu_13030153_p2() {
    add_ln703_741_fu_13030153_p2 = (!sext_ln703_353_fu_13030150_p1.read().is_01() || !add_ln703_739_fu_13030144_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_353_fu_13030150_p1.read()) + sc_biguint<14>(add_ln703_739_fu_13030144_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_742_fu_13005111_p2() {
    add_ln703_742_fu_13005111_p2 = (!trunc_ln1116_s_fu_12934534_p4.read().is_01() || !zext_ln708_106_fu_12934608_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1116_s_fu_12934534_p4.read()) + sc_biguint<10>(zext_ln708_106_fu_12934608_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_743_fu_13005121_p2() {
    add_ln703_743_fu_13005121_p2 = (!zext_ln1118_345_fu_12934682_p1.read().is_01() || !zext_ln1116_34_fu_12934696_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_345_fu_12934682_p1.read()) + sc_biguint<10>(zext_ln1116_34_fu_12934696_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_744_fu_13005131_p2() {
    add_ln703_744_fu_13005131_p2 = (!zext_ln703_67_fu_13005127_p1.read().is_01() || !zext_ln703_66_fu_13005117_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_67_fu_13005127_p1.read()) + sc_biguint<11>(zext_ln703_66_fu_13005117_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_745_fu_13030166_p2() {
    add_ln703_745_fu_13030166_p2 = (!zext_ln703_68_fu_13030163_p1.read().is_01() || !sext_ln703_354_fu_13030159_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_68_fu_13030163_p1.read()) + sc_bigint<15>(sext_ln703_354_fu_13030159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_746_fu_13005137_p2() {
    add_ln703_746_fu_13005137_p2 = (!zext_ln708_109_fu_12934744_p1.read().is_01() || !zext_ln708_110_fu_12934778_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_109_fu_12934744_p1.read()) + sc_biguint<11>(zext_ln708_110_fu_12934778_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_747_fu_13005143_p2() {
    add_ln703_747_fu_13005143_p2 = (!add_ln703_746_fu_13005137_p2.read().is_01() || !zext_ln708_108_fu_12934730_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_746_fu_13005137_p2.read()) + sc_biguint<11>(zext_ln708_108_fu_12934730_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_748_fu_13005153_p2() {
    add_ln703_748_fu_13005153_p2 = (!sext_ln1118_320_fu_12934668_p1.read().is_01() || !sext_ln1118_322_fu_12934764_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_320_fu_12934668_p1.read()) + sc_bigint<11>(sext_ln1118_322_fu_12934764_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_749_fu_13005163_p2() {
    add_ln703_749_fu_13005163_p2 = (!zext_ln708_107_fu_12934622_p1.read().is_01() || !sext_ln1118_321_fu_12934716_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_107_fu_12934622_p1.read()) + sc_bigint<8>(sext_ln1118_321_fu_12934716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_750_fu_13005173_p2() {
    add_ln703_750_fu_13005173_p2 = (!sext_ln703_356_fu_13005169_p1.read().is_01() || !sext_ln703_355_fu_13005159_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_356_fu_13005169_p1.read()) + sc_bigint<12>(sext_ln703_355_fu_13005159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_751_fu_13005183_p2() {
    add_ln703_751_fu_13005183_p2 = (!sext_ln703_357_fu_13005179_p1.read().is_01() || !zext_ln703_69_fu_13005149_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_357_fu_13005179_p1.read()) + sc_biguint<13>(zext_ln703_69_fu_13005149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_752_fu_13030175_p2() {
    add_ln703_752_fu_13030175_p2 = (!sext_ln703_358_fu_13030172_p1.read().is_01() || !add_ln703_745_fu_13030166_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_358_fu_13030172_p1.read()) + sc_biguint<15>(add_ln703_745_fu_13030166_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_753_fu_13005189_p2() {
    add_ln703_753_fu_13005189_p2 = (!sext_ln1118_305_fu_12933599_p1.read().is_01() || !sext_ln203_168_fu_12934814_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_305_fu_12933599_p1.read()) + sc_bigint<12>(sext_ln203_168_fu_12934814_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_754_fu_13030184_p2() {
    add_ln703_754_fu_13030184_p2 = (!sext_ln703_359_fu_13030181_p1.read().is_01() || !add_ln703_752_fu_13030175_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_359_fu_13030181_p1.read()) + sc_biguint<15>(add_ln703_752_fu_13030175_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_755_fu_13005195_p2() {
    add_ln703_755_fu_13005195_p2 = (!sext_ln203_173_fu_12934987_p1.read().is_01() || !zext_ln203_29_fu_12934828_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_173_fu_12934987_p1.read()) + sc_biguint<12>(zext_ln203_29_fu_12934828_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_756_fu_13005205_p2() {
    add_ln703_756_fu_13005205_p2 = (!sext_ln703_360_fu_13005201_p1.read().is_01() || !sext_ln203_171_fu_12934923_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_360_fu_13005201_p1.read()) + sc_bigint<13>(sext_ln203_171_fu_12934923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_757_fu_13030193_p2() {
    add_ln703_757_fu_13030193_p2 = (!sext_ln703_361_fu_13030190_p1.read().is_01() || !add_ln703_754_fu_13030184_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_361_fu_13030190_p1.read()) + sc_biguint<15>(add_ln703_754_fu_13030184_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_758_fu_13005211_p2() {
    add_ln703_758_fu_13005211_p2 = (!zext_ln203_31_fu_12934943_p1.read().is_01() || !trunc_ln203_8_fu_12934967_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_31_fu_12934943_p1.read()) + sc_biguint<10>(trunc_ln203_8_fu_12934967_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_759_fu_13005217_p2() {
    add_ln703_759_fu_13005217_p2 = (!add_ln703_758_fu_13005211_p2.read().is_01() || !zext_ln203_30_fu_12934900_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_758_fu_13005211_p2.read()) + sc_biguint<10>(zext_ln203_30_fu_12934900_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_760_fu_13005227_p2() {
    add_ln703_760_fu_13005227_p2 = (!sext_ln203_169_fu_12934856_p1.read().is_01() || !sext_ln203_170_fu_12934880_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_169_fu_12934856_p1.read()) + sc_bigint<10>(sext_ln203_170_fu_12934880_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_761_fu_13005237_p2() {
    add_ln703_761_fu_13005237_p2 = (!sext_ln703_363_fu_13005233_p1.read().is_01() || !sext_ln203_172_fu_12934963_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_363_fu_13005233_p1.read()) + sc_bigint<11>(sext_ln203_172_fu_12934963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_762_fu_13005247_p2() {
    add_ln703_762_fu_13005247_p2 = (!sext_ln703_364_fu_13005243_p1.read().is_01() || !zext_ln703_70_fu_13005223_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_364_fu_13005243_p1.read()) + sc_biguint<12>(zext_ln703_70_fu_13005223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_764_fu_13005253_p2() {
    add_ln703_764_fu_13005253_p2 = (!sext_ln1118_254_fu_12929810_p1.read().is_01() || !ap_const_lv11_7A0.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_254_fu_12929810_p1.read()) + sc_bigint<11>(ap_const_lv11_7A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_765_fu_13005263_p2() {
    add_ln703_765_fu_13005263_p2 = (!sext_ln703_366_fu_13005259_p1.read().is_01() || !zext_ln203_32_fu_12935001_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_366_fu_13005259_p1.read()) + sc_biguint<12>(zext_ln203_32_fu_12935001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_766_fu_13005273_p2() {
    add_ln703_766_fu_13005273_p2 = (!zext_ln708_111_fu_12935021_p1.read().is_01() || !sext_ln1118_323_fu_12935035_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_111_fu_12935021_p1.read()) + sc_bigint<11>(sext_ln1118_323_fu_12935035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_767_fu_13005283_p2() {
    add_ln703_767_fu_13005283_p2 = (!sext_ln703_368_fu_13005279_p1.read().is_01() || !sext_ln703_367_fu_13005269_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_368_fu_13005279_p1.read()) + sc_bigint<13>(sext_ln703_367_fu_13005269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_768_fu_13005289_p2() {
    add_ln703_768_fu_13005289_p2 = (!sext_ln708_17_fu_12935131_p1.read().is_01() || !zext_ln1118_353_fu_12935145_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_17_fu_12935131_p1.read()) + sc_biguint<12>(zext_ln1118_353_fu_12935145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_769_fu_13005299_p2() {
    add_ln703_769_fu_13005299_p2 = (!sext_ln703_369_fu_13005295_p1.read().is_01() || !add_ln703_767_fu_13005283_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_369_fu_13005295_p1.read()) + sc_biguint<13>(add_ln703_767_fu_13005283_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_770_fu_13005309_p2() {
    add_ln703_770_fu_13005309_p2 = (!sext_ln1118_326_fu_12935103_p1.read().is_01() || !sext_ln1118_324_fu_12935049_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_326_fu_12935103_p1.read()) + sc_bigint<10>(sext_ln1118_324_fu_12935049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_771_fu_13005319_p2() {
    add_ln703_771_fu_13005319_p2 = (!sext_ln703_371_fu_13005315_p1.read().is_01() || !sext_ln1118_327_fu_12935117_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_371_fu_13005315_p1.read()) + sc_bigint<11>(sext_ln1118_327_fu_12935117_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_772_fu_13005329_p2() {
    add_ln703_772_fu_13005329_p2 = (!sext_ln703_372_fu_13005325_p1.read().is_01() || !sext_ln703_370_fu_13005305_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_372_fu_13005325_p1.read()) + sc_bigint<14>(sext_ln703_370_fu_13005305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_773_fu_13005335_p2() {
    add_ln703_773_fu_13005335_p2 = (!add_ln703_772_fu_13005329_p2.read().is_01() || !zext_ln708_113_fu_12935169_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_772_fu_13005329_p2.read()) + sc_biguint<14>(zext_ln708_113_fu_12935169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_774_fu_13005341_p2() {
    add_ln703_774_fu_13005341_p2 = (!sext_ln1118_329_fu_12935317_p1.read().is_01() || !zext_ln1118_355_fu_12935233_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_329_fu_12935317_p1.read()) + sc_biguint<12>(zext_ln1118_355_fu_12935233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_775_fu_13005351_p2() {
    add_ln703_775_fu_13005351_p2 = (!sext_ln703_374_fu_13005347_p1.read().is_01() || !sext_ln1118_328_fu_12935303_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_374_fu_13005347_p1.read()) + sc_bigint<13>(sext_ln1118_328_fu_12935303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_776_fu_13030218_p2() {
    add_ln703_776_fu_13030218_p2 = (!sext_ln703_375_fu_13030215_p1.read().is_01() || !sext_ln703_373_fu_13030212_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_375_fu_13030215_p1.read()) + sc_bigint<15>(sext_ln703_373_fu_13030212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_777_fu_13005357_p2() {
    add_ln703_777_fu_13005357_p2 = (!sext_ln1118_330_fu_12935341_p1.read().is_01() || !sext_ln708_18_fu_12935213_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_330_fu_12935341_p1.read()) + sc_bigint<10>(sext_ln708_18_fu_12935213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_778_fu_13005363_p2() {
    add_ln703_778_fu_13005363_p2 = (!add_ln703_777_fu_13005357_p2.read().is_01() || !zext_ln708_114_fu_12935189_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_777_fu_13005357_p2.read()) + sc_biguint<10>(zext_ln708_114_fu_12935189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_779_fu_13005373_p2() {
    add_ln703_779_fu_13005373_p2 = (!sext_ln1118_332_fu_12935375_p1.read().is_01() || !zext_ln1118_357_fu_12935279_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_332_fu_12935375_p1.read()) + sc_biguint<9>(zext_ln1118_357_fu_12935279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_780_fu_13005383_p2() {
    add_ln703_780_fu_13005383_p2 = (!sext_ln703_377_fu_13005379_p1.read().is_01() || !sext_ln708_19_fu_12935265_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_377_fu_13005379_p1.read()) + sc_bigint<10>(sext_ln708_19_fu_12935265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_781_fu_13005393_p2() {
    add_ln703_781_fu_13005393_p2 = (!sext_ln703_378_fu_13005389_p1.read().is_01() || !sext_ln703_376_fu_13005369_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_378_fu_13005389_p1.read()) + sc_bigint<11>(sext_ln703_376_fu_13005369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_782_fu_13030227_p2() {
    add_ln703_782_fu_13030227_p2 = (!sext_ln703_379_fu_13030224_p1.read().is_01() || !add_ln703_776_fu_13030218_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_379_fu_13030224_p1.read()) + sc_biguint<15>(add_ln703_776_fu_13030218_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_783_fu_13005399_p2() {
    add_ln703_783_fu_13005399_p2 = (!sext_ln203_175_fu_12935415_p1.read().is_01() || !sext_ln203_176_fu_12935443_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_175_fu_12935415_p1.read()) + sc_bigint<12>(sext_ln203_176_fu_12935443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_784_fu_13030236_p2() {
    add_ln703_784_fu_13030236_p2 = (!sext_ln703_380_fu_13030233_p1.read().is_01() || !add_ln703_782_fu_13030227_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_380_fu_13030233_p1.read()) + sc_biguint<15>(add_ln703_782_fu_13030227_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_785_fu_13005405_p2() {
    add_ln703_785_fu_13005405_p2 = (!zext_ln203_26_fu_12934225_p1.read().is_01() || !zext_ln203_33_fu_12935481_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_26_fu_12934225_p1.read()) + sc_biguint<10>(zext_ln203_33_fu_12935481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_786_fu_13005415_p2() {
    add_ln703_786_fu_13005415_p2 = (!zext_ln703_71_fu_13005411_p1.read().is_01() || !sext_ln203_178_fu_12935543_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_71_fu_13005411_p1.read()) + sc_bigint<12>(sext_ln203_178_fu_12935543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_787_fu_13030245_p2() {
    add_ln703_787_fu_13030245_p2 = (!sext_ln703_381_fu_13030242_p1.read().is_01() || !add_ln703_784_fu_13030236_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_381_fu_13030242_p1.read()) + sc_biguint<15>(add_ln703_784_fu_13030236_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_788_fu_13005421_p2() {
    add_ln703_788_fu_13005421_p2 = (!sext_ln203_174_fu_12935395_p1.read().is_01() || !sext_ln203_154_fu_12932997_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_174_fu_12935395_p1.read()) + sc_bigint<10>(sext_ln203_154_fu_12932997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_789_fu_13005431_p2() {
    add_ln703_789_fu_13005431_p2 = (!sext_ln703_382_fu_13005427_p1.read().is_01() || !zext_ln708_116_fu_12935505_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_382_fu_13005427_p1.read()) + sc_biguint<11>(zext_ln708_116_fu_12935505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_790_fu_13005441_p2() {
    add_ln703_790_fu_13005441_p2 = (!sext_ln203_177_fu_12935467_p1.read().is_01() || !sext_ln203_179_fu_12935563_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln203_177_fu_12935467_p1.read()) + sc_bigint<7>(sext_ln203_179_fu_12935563_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_791_fu_13005451_p2() {
    add_ln703_791_fu_13005451_p2 = (!sext_ln703_384_fu_13005447_p1.read().is_01() || !zext_ln708_115_fu_12935429_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln703_384_fu_13005447_p1.read()) + sc_biguint<8>(zext_ln708_115_fu_12935429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_792_fu_13005461_p2() {
    add_ln703_792_fu_13005461_p2 = (!sext_ln703_385_fu_13005457_p1.read().is_01() || !sext_ln703_383_fu_13005437_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_385_fu_13005457_p1.read()) + sc_bigint<12>(sext_ln703_383_fu_13005437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_794_fu_13005467_p2() {
    add_ln703_794_fu_13005467_p2 = (!sext_ln203_111_fu_12928202_p1.read().is_01() || !ap_const_lv12_C70.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_111_fu_12928202_p1.read()) + sc_bigint<12>(ap_const_lv12_C70));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_795_fu_13005473_p2() {
    add_ln703_795_fu_13005473_p2 = (!zext_ln708_117_fu_12935595_p1.read().is_01() || !zext_ln708_118_fu_12935609_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_117_fu_12935595_p1.read()) + sc_biguint<11>(zext_ln708_118_fu_12935609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_796_fu_13005483_p2() {
    add_ln703_796_fu_13005483_p2 = (!zext_ln703_72_fu_13005479_p1.read().is_01() || !add_ln703_794_fu_13005467_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_72_fu_13005479_p1.read()) + sc_biguint<12>(add_ln703_794_fu_13005467_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_797_fu_13005493_p2() {
    add_ln703_797_fu_13005493_p2 = (!sext_ln1118_334_fu_12935629_p1.read().is_01() || !sext_ln1118_335_fu_12935643_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_334_fu_12935629_p1.read()) + sc_bigint<11>(sext_ln1118_335_fu_12935643_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_798_fu_13005503_p2() {
    add_ln703_798_fu_13005503_p2 = (!sext_ln703_389_fu_13005499_p1.read().is_01() || !sext_ln703_388_fu_13005489_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_389_fu_13005499_p1.read()) + sc_bigint<13>(sext_ln703_388_fu_13005489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_799_fu_13005509_p2() {
    add_ln703_799_fu_13005509_p2 = (!sext_ln1118_336_fu_12935675_p1.read().is_01() || !sext_ln708_20_fu_12935717_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_336_fu_12935675_p1.read()) + sc_bigint<12>(sext_ln708_20_fu_12935717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_800_fu_13030270_p2() {
    add_ln703_800_fu_13030270_p2 = (!sext_ln703_391_fu_13030267_p1.read().is_01() || !sext_ln703_390_fu_13030264_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_391_fu_13030267_p1.read()) + sc_bigint<14>(sext_ln703_390_fu_13030264_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_801_fu_13005515_p2() {
    add_ln703_801_fu_13005515_p2 = (!zext_ln1118_368_fu_12935731_p1.read().is_01() || !sext_ln1118_337_fu_12935689_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_368_fu_12935731_p1.read()) + sc_bigint<12>(sext_ln1118_337_fu_12935689_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_802_fu_13005521_p2() {
    add_ln703_802_fu_13005521_p2 = (!add_ln703_801_fu_13005515_p2.read().is_01() || !zext_ln1118_367_fu_12935703_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_801_fu_13005515_p2.read()) + sc_biguint<12>(zext_ln1118_367_fu_12935703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_803_fu_13030279_p2() {
    add_ln703_803_fu_13030279_p2 = (!sext_ln703_392_fu_13030276_p1.read().is_01() || !add_ln703_800_fu_13030270_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_392_fu_13030276_p1.read()) + sc_biguint<14>(add_ln703_800_fu_13030270_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_804_fu_13030285_p2() {
    add_ln703_804_fu_13030285_p2 = (!add_ln703_803_fu_13030279_p2.read().is_01() || !sext_ln708_21_fu_13028920_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_803_fu_13030279_p2.read()) + sc_bigint<14>(sext_ln708_21_fu_13028920_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_805_fu_13005527_p2() {
    add_ln703_805_fu_13005527_p2 = (!sext_ln708_3_fu_12928608_p1.read().is_01() || !sext_ln708_23_fu_12935863_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_3_fu_12928608_p1.read()) + sc_bigint<12>(sext_ln708_23_fu_12935863_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_806_fu_13005537_p2() {
    add_ln703_806_fu_13005537_p2 = (!sext_ln703_394_fu_13005533_p1.read().is_01() || !sext_ln708_22_fu_12935801_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_394_fu_13005533_p1.read()) + sc_bigint<13>(sext_ln708_22_fu_12935801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_807_fu_13030298_p2() {
    add_ln703_807_fu_13030298_p2 = (!sext_ln703_395_fu_13030295_p1.read().is_01() || !sext_ln703_393_fu_13030291_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_395_fu_13030295_p1.read()) + sc_bigint<15>(sext_ln703_393_fu_13030291_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_808_fu_13005543_p2() {
    add_ln703_808_fu_13005543_p2 = (!zext_ln708_119_fu_12935815_p1.read().is_01() || !zext_ln708_120_fu_12935835_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_119_fu_12935815_p1.read()) + sc_biguint<11>(zext_ln708_120_fu_12935835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_809_fu_13005553_p2() {
    add_ln703_809_fu_13005553_p2 = (!zext_ln703_73_fu_13005549_p1.read().is_01() || !zext_ln1118_370_fu_12935787_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_73_fu_13005549_p1.read()) + sc_biguint<12>(zext_ln1118_370_fu_12935787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_810_fu_13005563_p2() {
    add_ln703_810_fu_13005563_p2 = (!zext_ln708_121_fu_12935883_p1.read().is_01() || !sext_ln1118_338_fu_12935763_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_121_fu_12935883_p1.read()) + sc_bigint<11>(sext_ln1118_338_fu_12935763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_811_fu_13005573_p2() {
    add_ln703_811_fu_13005573_p2 = (!sext_ln703_396_fu_13005569_p1.read().is_01() || !zext_ln1118_371_fu_12935849_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_396_fu_13005569_p1.read()) + sc_biguint<12>(zext_ln1118_371_fu_12935849_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_812_fu_13005583_p2() {
    add_ln703_812_fu_13005583_p2 = (!sext_ln703_397_fu_13005579_p1.read().is_01() || !zext_ln703_74_fu_13005559_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_397_fu_13005579_p1.read()) + sc_biguint<13>(zext_ln703_74_fu_13005559_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_813_fu_13030307_p2() {
    add_ln703_813_fu_13030307_p2 = (!sext_ln703_398_fu_13030304_p1.read().is_01() || !add_ln703_807_fu_13030298_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_398_fu_13030304_p1.read()) + sc_biguint<15>(add_ln703_807_fu_13030298_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_814_fu_13005589_p2() {
    add_ln703_814_fu_13005589_p2 = (!sext_ln203_180_fu_12935897_p1.read().is_01() || !sext_ln203_181_fu_12936086_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_180_fu_12935897_p1.read()) + sc_bigint<12>(sext_ln203_181_fu_12936086_p1.read()));
}

}

