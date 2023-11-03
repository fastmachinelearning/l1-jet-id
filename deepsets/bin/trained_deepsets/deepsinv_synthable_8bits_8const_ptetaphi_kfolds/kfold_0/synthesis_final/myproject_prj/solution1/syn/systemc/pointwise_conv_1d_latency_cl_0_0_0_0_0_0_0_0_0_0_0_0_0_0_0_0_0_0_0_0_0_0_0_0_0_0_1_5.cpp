#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2801_fu_13018515_p2() {
    add_ln703_2801_fu_13018515_p2 = (!sext_ln703_1634_fu_13018511_p1.read().is_01() || !sext_ln1118_874_fu_12974035_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1634_fu_13018511_p1.read()) + sc_bigint<13>(sext_ln1118_874_fu_12974035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2802_fu_13034668_p2() {
    add_ln703_2802_fu_13034668_p2 = (!sext_ln703_1635_fu_13034665_p1.read().is_01() || !sext_ln703_1633_fu_13034662_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1635_fu_13034665_p1.read()) + sc_bigint<15>(sext_ln703_1633_fu_13034662_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2803_fu_13018521_p2() {
    add_ln703_2803_fu_13018521_p2 = (!sext_ln1118_876_fu_12974073_p1.read().is_01() || !sext_ln708_118_fu_12973945_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_876_fu_12974073_p1.read()) + sc_bigint<10>(sext_ln708_118_fu_12973945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2804_fu_13018527_p2() {
    add_ln703_2804_fu_13018527_p2 = (!add_ln703_2803_fu_13018521_p2.read().is_01() || !zext_ln708_588_fu_12973921_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2803_fu_13018521_p2.read()) + sc_biguint<10>(zext_ln708_588_fu_12973921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2805_fu_13018537_p2() {
    add_ln703_2805_fu_13018537_p2 = (!sext_ln1118_878_fu_12974107_p1.read().is_01() || !zext_ln1118_1475_fu_12974011_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_878_fu_12974107_p1.read()) + sc_biguint<9>(zext_ln1118_1475_fu_12974011_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2806_fu_13018547_p2() {
    add_ln703_2806_fu_13018547_p2 = (!sext_ln703_1637_fu_13018543_p1.read().is_01() || !sext_ln708_119_fu_12973997_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1637_fu_13018543_p1.read()) + sc_bigint<10>(sext_ln708_119_fu_12973997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2807_fu_13018557_p2() {
    add_ln703_2807_fu_13018557_p2 = (!sext_ln703_1638_fu_13018553_p1.read().is_01() || !sext_ln703_1636_fu_13018533_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1638_fu_13018553_p1.read()) + sc_bigint<11>(sext_ln703_1636_fu_13018533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2808_fu_13034677_p2() {
    add_ln703_2808_fu_13034677_p2 = (!sext_ln703_1639_fu_13034674_p1.read().is_01() || !add_ln703_2802_fu_13034668_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1639_fu_13034674_p1.read()) + sc_biguint<15>(add_ln703_2802_fu_13034668_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2809_fu_13018563_p2() {
    add_ln703_2809_fu_13018563_p2 = (!sext_ln203_559_fu_12974147_p1.read().is_01() || !sext_ln203_560_fu_12974175_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_559_fu_12974147_p1.read()) + sc_bigint<12>(sext_ln203_560_fu_12974175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2810_fu_13034686_p2() {
    add_ln703_2810_fu_13034686_p2 = (!sext_ln703_1640_fu_13034683_p1.read().is_01() || !add_ln703_2808_fu_13034677_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1640_fu_13034683_p1.read()) + sc_biguint<15>(add_ln703_2808_fu_13034677_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2811_fu_13018569_p2() {
    add_ln703_2811_fu_13018569_p2 = (!zext_ln203_190_fu_12972957_p1.read().is_01() || !zext_ln203_197_fu_12974213_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_190_fu_12972957_p1.read()) + sc_biguint<10>(zext_ln203_197_fu_12974213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2812_fu_13018579_p2() {
    add_ln703_2812_fu_13018579_p2 = (!zext_ln703_359_fu_13018575_p1.read().is_01() || !sext_ln203_562_fu_12974275_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_359_fu_13018575_p1.read()) + sc_bigint<12>(sext_ln203_562_fu_12974275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2813_fu_13034695_p2() {
    add_ln703_2813_fu_13034695_p2 = (!sext_ln703_1641_fu_13034692_p1.read().is_01() || !add_ln703_2810_fu_13034686_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1641_fu_13034692_p1.read()) + sc_biguint<15>(add_ln703_2810_fu_13034686_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2814_fu_13018585_p2() {
    add_ln703_2814_fu_13018585_p2 = (!sext_ln203_558_fu_12974127_p1.read().is_01() || !sext_ln203_538_fu_12971729_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_558_fu_12974127_p1.read()) + sc_bigint<10>(sext_ln203_538_fu_12971729_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2815_fu_13018595_p2() {
    add_ln703_2815_fu_13018595_p2 = (!sext_ln703_1642_fu_13018591_p1.read().is_01() || !zext_ln708_590_fu_12974237_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1642_fu_13018591_p1.read()) + sc_biguint<11>(zext_ln708_590_fu_12974237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2816_fu_13018605_p2() {
    add_ln703_2816_fu_13018605_p2 = (!sext_ln203_561_fu_12974199_p1.read().is_01() || !sext_ln203_563_fu_12974295_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln203_561_fu_12974199_p1.read()) + sc_bigint<7>(sext_ln203_563_fu_12974295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2817_fu_13018615_p2() {
    add_ln703_2817_fu_13018615_p2 = (!sext_ln703_1644_fu_13018611_p1.read().is_01() || !zext_ln708_589_fu_12974161_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln703_1644_fu_13018611_p1.read()) + sc_biguint<8>(zext_ln708_589_fu_12974161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2818_fu_13018625_p2() {
    add_ln703_2818_fu_13018625_p2 = (!sext_ln703_1645_fu_13018621_p1.read().is_01() || !sext_ln703_1643_fu_13018601_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1645_fu_13018621_p1.read()) + sc_bigint<12>(sext_ln703_1643_fu_13018601_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2820_fu_13018631_p2() {
    add_ln703_2820_fu_13018631_p2 = (!sext_ln203_495_fu_12966934_p1.read().is_01() || !ap_const_lv12_C70.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_495_fu_12966934_p1.read()) + sc_bigint<12>(ap_const_lv12_C70));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2821_fu_13018637_p2() {
    add_ln703_2821_fu_13018637_p2 = (!zext_ln708_591_fu_12974327_p1.read().is_01() || !zext_ln708_592_fu_12974341_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_591_fu_12974327_p1.read()) + sc_biguint<11>(zext_ln708_592_fu_12974341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2822_fu_13018647_p2() {
    add_ln703_2822_fu_13018647_p2 = (!zext_ln703_360_fu_13018643_p1.read().is_01() || !add_ln703_2820_fu_13018631_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_360_fu_13018643_p1.read()) + sc_biguint<12>(add_ln703_2820_fu_13018631_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2823_fu_13018657_p2() {
    add_ln703_2823_fu_13018657_p2 = (!sext_ln1118_880_fu_12974361_p1.read().is_01() || !sext_ln1118_881_fu_12974375_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_880_fu_12974361_p1.read()) + sc_bigint<11>(sext_ln1118_881_fu_12974375_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2824_fu_13018667_p2() {
    add_ln703_2824_fu_13018667_p2 = (!sext_ln703_1648_fu_13018663_p1.read().is_01() || !sext_ln703_894_fu_13018653_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1648_fu_13018663_p1.read()) + sc_bigint<13>(sext_ln703_894_fu_13018653_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2825_fu_13018673_p2() {
    add_ln703_2825_fu_13018673_p2 = (!sext_ln1118_882_fu_12974407_p1.read().is_01() || !sext_ln708_120_fu_12974449_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_882_fu_12974407_p1.read()) + sc_bigint<12>(sext_ln708_120_fu_12974449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2826_fu_13034720_p2() {
    add_ln703_2826_fu_13034720_p2 = (!sext_ln703_1649_fu_13034717_p1.read().is_01() || !sext_ln703_895_fu_13034714_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1649_fu_13034717_p1.read()) + sc_bigint<14>(sext_ln703_895_fu_13034714_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2827_fu_13018679_p2() {
    add_ln703_2827_fu_13018679_p2 = (!zext_ln1118_1486_fu_12974463_p1.read().is_01() || !sext_ln1118_883_fu_12974421_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1486_fu_12974463_p1.read()) + sc_bigint<12>(sext_ln1118_883_fu_12974421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2828_fu_13018685_p2() {
    add_ln703_2828_fu_13018685_p2 = (!add_ln703_2827_fu_13018679_p2.read().is_01() || !zext_ln1118_1485_fu_12974435_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2827_fu_13018679_p2.read()) + sc_biguint<12>(zext_ln1118_1485_fu_12974435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2829_fu_13034729_p2() {
    add_ln703_2829_fu_13034729_p2 = (!sext_ln703_1650_fu_13034726_p1.read().is_01() || !add_ln703_2826_fu_13034720_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1650_fu_13034726_p1.read()) + sc_biguint<14>(add_ln703_2826_fu_13034720_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2830_fu_13034735_p2() {
    add_ln703_2830_fu_13034735_p2 = (!add_ln703_2829_fu_13034729_p2.read().is_01() || !sext_ln708_121_fu_13029136_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2829_fu_13034729_p2.read()) + sc_bigint<14>(sext_ln708_121_fu_13029136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2831_fu_13018691_p2() {
    add_ln703_2831_fu_13018691_p2 = (!sext_ln708_103_fu_12967340_p1.read().is_01() || !sext_ln708_123_fu_12974595_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_103_fu_12967340_p1.read()) + sc_bigint<12>(sext_ln708_123_fu_12974595_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2832_fu_13018701_p2() {
    add_ln703_2832_fu_13018701_p2 = (!sext_ln703_1652_fu_13018697_p1.read().is_01() || !sext_ln708_122_fu_12974533_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1652_fu_13018697_p1.read()) + sc_bigint<13>(sext_ln708_122_fu_12974533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2833_fu_13034748_p2() {
    add_ln703_2833_fu_13034748_p2 = (!sext_ln703_1653_fu_13034745_p1.read().is_01() || !sext_ln703_1651_fu_13034741_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1653_fu_13034745_p1.read()) + sc_bigint<15>(sext_ln703_1651_fu_13034741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2834_fu_13018707_p2() {
    add_ln703_2834_fu_13018707_p2 = (!zext_ln708_593_fu_12974547_p1.read().is_01() || !zext_ln708_594_fu_12974567_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_593_fu_12974547_p1.read()) + sc_biguint<11>(zext_ln708_594_fu_12974567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2835_fu_13018717_p2() {
    add_ln703_2835_fu_13018717_p2 = (!zext_ln703_361_fu_13018713_p1.read().is_01() || !zext_ln1118_1488_fu_12974519_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_361_fu_13018713_p1.read()) + sc_biguint<12>(zext_ln1118_1488_fu_12974519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2836_fu_13018727_p2() {
    add_ln703_2836_fu_13018727_p2 = (!zext_ln708_595_fu_12974615_p1.read().is_01() || !sext_ln1118_884_fu_12974495_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_595_fu_12974615_p1.read()) + sc_bigint<11>(sext_ln1118_884_fu_12974495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2837_fu_13018737_p2() {
    add_ln703_2837_fu_13018737_p2 = (!sext_ln703_1654_fu_13018733_p1.read().is_01() || !zext_ln1118_1489_fu_12974581_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1654_fu_13018733_p1.read()) + sc_biguint<12>(zext_ln1118_1489_fu_12974581_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2838_fu_13018747_p2() {
    add_ln703_2838_fu_13018747_p2 = (!sext_ln703_1655_fu_13018743_p1.read().is_01() || !zext_ln703_362_fu_13018723_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1655_fu_13018743_p1.read()) + sc_biguint<13>(zext_ln703_362_fu_13018723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2839_fu_13034757_p2() {
    add_ln703_2839_fu_13034757_p2 = (!sext_ln703_1656_fu_13034754_p1.read().is_01() || !add_ln703_2833_fu_13034748_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1656_fu_13034754_p1.read()) + sc_biguint<15>(add_ln703_2833_fu_13034748_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2840_fu_13018753_p2() {
    add_ln703_2840_fu_13018753_p2 = (!sext_ln203_564_fu_12974629_p1.read().is_01() || !sext_ln203_565_fu_12974818_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_564_fu_12974629_p1.read()) + sc_bigint<12>(sext_ln203_565_fu_12974818_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2841_fu_13034766_p2() {
    add_ln703_2841_fu_13034766_p2 = (!sext_ln703_1657_fu_13034763_p1.read().is_01() || !add_ln703_2839_fu_13034757_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1657_fu_13034763_p1.read()) + sc_biguint<15>(add_ln703_2839_fu_13034757_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2842_fu_13018759_p2() {
    add_ln703_2842_fu_13018759_p2 = (!zext_ln708_598_fu_12974673_p1.read().is_01() || !zext_ln708_599_fu_12974695_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_598_fu_12974673_p1.read()) + sc_biguint<11>(zext_ln708_599_fu_12974695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2843_fu_13018765_p2() {
    add_ln703_2843_fu_13018765_p2 = (!add_ln703_2842_fu_13018759_p2.read().is_01() || !zext_ln708_597_fu_12974653_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2842_fu_13018759_p2.read()) + sc_biguint<11>(zext_ln708_597_fu_12974653_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2844_fu_13034779_p2() {
    add_ln703_2844_fu_13034779_p2 = (!zext_ln703_363_fu_13034776_p1.read().is_01() || !sext_ln703_1658_fu_13034772_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_363_fu_13034776_p1.read()) + sc_bigint<16>(sext_ln703_1658_fu_13034772_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2845_fu_13018771_p2() {
    add_ln703_2845_fu_13018771_p2 = (!zext_ln708_600_fu_12974737_p1.read().is_01() || !zext_ln708_601_fu_12974765_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_600_fu_12974737_p1.read()) + sc_biguint<11>(zext_ln708_601_fu_12974765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2846_fu_13018781_p2() {
    add_ln703_2846_fu_13018781_p2 = (!zext_ln703_364_fu_13018777_p1.read().is_01() || !zext_ln203_198_fu_12974709_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_364_fu_13018777_p1.read()) + sc_biguint<12>(zext_ln203_198_fu_12974709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2847_fu_13018787_p2() {
    add_ln703_2847_fu_13018787_p2 = (!zext_ln203_199_fu_12974784_p1.read().is_01() || !zext_ln203_200_fu_12974804_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_199_fu_12974784_p1.read()) + sc_biguint<9>(zext_ln203_200_fu_12974804_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2848_fu_13018797_p2() {
    add_ln703_2848_fu_13018797_p2 = (!tmp_806_fu_12973021_p4.read().is_01() || !zext_ln203_201_fu_12974832_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_806_fu_12973021_p4.read()) + sc_biguint<10>(zext_ln203_201_fu_12974832_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2849_fu_13018807_p2() {
    add_ln703_2849_fu_13018807_p2 = (!zext_ln703_366_fu_13018803_p1.read().is_01() || !zext_ln703_365_fu_13018793_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_366_fu_13018803_p1.read()) + sc_biguint<11>(zext_ln703_365_fu_13018793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2850_fu_13018817_p2() {
    add_ln703_2850_fu_13018817_p2 = (!zext_ln703_367_fu_13018813_p1.read().is_01() || !add_ln703_2846_fu_13018781_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_367_fu_13018813_p1.read()) + sc_biguint<12>(add_ln703_2846_fu_13018781_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2852_fu_13018823_p2() {
    add_ln703_2852_fu_13018823_p2 = (!trunc_ln1118_44_fu_12974846_p4.read().is_01() || !ap_const_lv10_50.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_44_fu_12974846_p4.read()) + sc_biguint<10>(ap_const_lv10_50));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2853_fu_13018833_p2() {
    add_ln703_2853_fu_13018833_p2 = (!zext_ln703_369_fu_13018829_p1.read().is_01() || !sext_ln203_495_fu_12966934_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_369_fu_13018829_p1.read()) + sc_bigint<12>(sext_ln203_495_fu_12966934_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2854_fu_13018843_p2() {
    add_ln703_2854_fu_13018843_p2 = (!sext_ln703_898_fu_13018839_p1.read().is_01() || !sext_ln203_566_fu_12974872_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_898_fu_13018839_p1.read()) + sc_bigint<13>(sext_ln203_566_fu_12974872_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2855_fu_13018849_p2() {
    add_ln703_2855_fu_13018849_p2 = (!trunc_ln1118_45_fu_12974886_p4.read().is_01() || !zext_ln1118_1492_fu_12974906_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_45_fu_12974886_p4.read()) + sc_biguint<10>(zext_ln1118_1492_fu_12974906_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2856_fu_13018859_p2() {
    add_ln703_2856_fu_13018859_p2 = (!zext_ln703_370_fu_13018855_p1.read().is_01() || !add_ln703_2854_fu_13018843_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_370_fu_13018855_p1.read()) + sc_biguint<13>(add_ln703_2854_fu_13018843_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2857_fu_13018869_p2() {
    add_ln703_2857_fu_13018869_p2 = (!sext_ln1118_887_fu_12975028_p1.read().is_01() || !zext_ln1118_1495_fu_12974962_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_887_fu_12975028_p1.read()) + sc_biguint<12>(zext_ln1118_1495_fu_12974962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2858_fu_13018879_p2() {
    add_ln703_2858_fu_13018879_p2 = (!sext_ln703_1659_fu_13018875_p1.read().is_01() || !sext_ln703_899_fu_13018865_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1659_fu_13018875_p1.read()) + sc_bigint<14>(sext_ln703_899_fu_13018865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2859_fu_13018885_p2() {
    add_ln703_2859_fu_13018885_p2 = (!zext_ln1118_1496_fu_12974990_p1.read().is_01() || !zext_ln1118_1499_fu_12975052_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1496_fu_12974990_p1.read()) + sc_biguint<10>(zext_ln1118_1499_fu_12975052_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2860_fu_13018895_p2() {
    add_ln703_2860_fu_13018895_p2 = (!sext_ln1118_885_fu_12974942_p1.read().is_01() || !sext_ln1118_886_fu_12975004_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_885_fu_12974942_p1.read()) + sc_bigint<11>(sext_ln1118_886_fu_12975004_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2861_fu_13018905_p2() {
    add_ln703_2861_fu_13018905_p2 = (!sext_ln703_1660_fu_13018901_p1.read().is_01() || !zext_ln703_371_fu_13018891_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1660_fu_13018901_p1.read()) + sc_biguint<12>(zext_ln703_371_fu_13018891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2862_fu_13018915_p2() {
    add_ln703_2862_fu_13018915_p2 = (!sext_ln703_1661_fu_13018911_p1.read().is_01() || !add_ln703_2858_fu_13018879_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1661_fu_13018911_p1.read()) + sc_biguint<14>(add_ln703_2858_fu_13018879_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2863_fu_13018921_p2() {
    add_ln703_2863_fu_13018921_p2 = (!zext_ln708_586_fu_12973897_p1.read().is_01() || !sext_ln1118_888_fu_12975100_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_586_fu_12973897_p1.read()) + sc_bigint<12>(sext_ln1118_888_fu_12975100_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2864_fu_13034800_p2() {
    add_ln703_2864_fu_13034800_p2 = (!sext_ln703_1662_fu_13034797_p1.read().is_01() || !sext_ln703_900_fu_13034794_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1662_fu_13034797_p1.read()) + sc_bigint<15>(sext_ln703_900_fu_13034794_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2865_fu_13018927_p2() {
    add_ln703_2865_fu_13018927_p2 = (!sext_ln1118_890_fu_12975146_p1.read().is_01() || !sext_ln1118_891_fu_12975188_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_890_fu_12975146_p1.read()) + sc_bigint<12>(sext_ln1118_891_fu_12975188_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2866_fu_13018937_p2() {
    add_ln703_2866_fu_13018937_p2 = (!sext_ln703_1663_fu_13018933_p1.read().is_01() || !sext_ln1116_92_fu_12964481_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1663_fu_13018933_p1.read()) + sc_bigint<13>(sext_ln1116_92_fu_12964481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2867_fu_13034809_p2() {
    add_ln703_2867_fu_13034809_p2 = (!sext_ln703_1664_fu_13034806_p1.read().is_01() || !add_ln703_2864_fu_13034800_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1664_fu_13034806_p1.read()) + sc_biguint<15>(add_ln703_2864_fu_13034800_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2868_fu_13018943_p2() {
    add_ln703_2868_fu_13018943_p2 = (!zext_ln1118_1501_fu_12975076_p1.read().is_01() || !zext_ln1118_1505_fu_12975170_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1501_fu_12975076_p1.read()) + sc_biguint<10>(zext_ln1118_1505_fu_12975170_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2869_fu_13018953_p2() {
    add_ln703_2869_fu_13018953_p2 = (!zext_ln703_372_fu_13018949_p1.read().is_01() || !sext_ln203_519_fu_12969637_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_372_fu_13018949_p1.read()) + sc_bigint<12>(sext_ln203_519_fu_12969637_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2870_fu_13018963_p2() {
    add_ln703_2870_fu_13018963_p2 = (!zext_ln1118_1506_fu_12975184_p1.read().is_01() || !zext_ln1118_1508_fu_12975256_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1506_fu_12975184_p1.read()) + sc_biguint<9>(zext_ln1118_1508_fu_12975256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2871_fu_13018973_p2() {
    add_ln703_2871_fu_13018973_p2 = (!sext_ln1118_889_fu_12975114_p1.read().is_01() || !sext_ln1118_893_fu_12975216_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_889_fu_12975114_p1.read()) + sc_bigint<11>(sext_ln1118_893_fu_12975216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2872_fu_13018983_p2() {
    add_ln703_2872_fu_13018983_p2 = (!sext_ln703_1666_fu_13018979_p1.read().is_01() || !zext_ln703_373_fu_13018969_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1666_fu_13018979_p1.read()) + sc_biguint<12>(zext_ln703_373_fu_13018969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2873_fu_13018993_p2() {
    add_ln703_2873_fu_13018993_p2 = (!sext_ln703_1667_fu_13018989_p1.read().is_01() || !sext_ln703_1665_fu_13018959_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1667_fu_13018989_p1.read()) + sc_bigint<13>(sext_ln703_1665_fu_13018959_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2874_fu_13034818_p2() {
    add_ln703_2874_fu_13034818_p2 = (!sext_ln703_1668_fu_13034815_p1.read().is_01() || !add_ln703_2867_fu_13034809_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1668_fu_13034815_p1.read()) + sc_biguint<15>(add_ln703_2867_fu_13034809_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2875_fu_13034824_p2() {
    add_ln703_2875_fu_13034824_p2 = (!add_ln703_2874_fu_13034818_p2.read().is_01() || !sext_ln203_567_fu_13029139_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2874_fu_13034818_p2.read()) + sc_bigint<15>(sext_ln203_567_fu_13029139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2876_fu_13018999_p2() {
    add_ln703_2876_fu_13018999_p2 = (!sext_ln203_568_fu_12975298_p1.read().is_01() || !sext_ln203_569_fu_12975322_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_568_fu_12975298_p1.read()) + sc_bigint<12>(sext_ln203_569_fu_12975322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2877_fu_13019009_p2() {
    add_ln703_2877_fu_13019009_p2 = (!sext_ln703_1670_fu_13019005_p1.read().is_01() || !sext_ln203_526_fu_12970998_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1670_fu_13019005_p1.read()) + sc_bigint<13>(sext_ln203_526_fu_12970998_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2878_fu_13034837_p2() {
    add_ln703_2878_fu_13034837_p2 = (!sext_ln703_1671_fu_13034834_p1.read().is_01() || !sext_ln703_1669_fu_13034830_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1671_fu_13034834_p1.read()) + sc_bigint<16>(sext_ln703_1669_fu_13034830_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2879_fu_13019015_p2() {
    add_ln703_2879_fu_13019015_p2 = (!sext_ln203_570_fu_12975382_p1.read().is_01() || !zext_ln203_203_fu_12975350_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_570_fu_12975382_p1.read()) + sc_biguint<12>(zext_ln203_203_fu_12975350_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2880_fu_13019025_p2() {
    add_ln703_2880_fu_13019025_p2 = (!sext_ln203_571_fu_12975396_p1.read().is_01() || !zext_ln203_202_fu_12975336_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_571_fu_12975396_p1.read()) + sc_biguint<11>(zext_ln203_202_fu_12975336_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2881_fu_13019031_p2() {
    add_ln703_2881_fu_13019031_p2 = (!add_ln703_2880_fu_13019025_p2.read().is_01() || !zext_ln708_608_fu_12975420_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2880_fu_13019025_p2.read()) + sc_biguint<11>(zext_ln708_608_fu_12975420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2882_fu_13019041_p2() {
    add_ln703_2882_fu_13019041_p2 = (!sext_ln703_1673_fu_13019037_p1.read().is_01() || !sext_ln703_1672_fu_13019021_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1673_fu_13019037_p1.read()) + sc_bigint<13>(sext_ln703_1672_fu_13019021_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2884_fu_13019047_p2() {
    add_ln703_2884_fu_13019047_p2 = (!sext_ln203_572_fu_12975454_p1.read().is_01() || !ap_const_lv12_DE0.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_572_fu_12975454_p1.read()) + sc_bigint<12>(ap_const_lv12_DE0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2885_fu_13019053_p2() {
    add_ln703_2885_fu_13019053_p2 = (!trunc_ln1116_7_fu_12975458_p4.read().is_01() || !zext_ln1116_140_fu_12975488_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1116_7_fu_12975458_p4.read()) + sc_biguint<10>(zext_ln1116_140_fu_12975488_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2886_fu_13019063_p2() {
    add_ln703_2886_fu_13019063_p2 = (!zext_ln703_374_fu_13019059_p1.read().is_01() || !add_ln703_2884_fu_13019047_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_374_fu_13019059_p1.read()) + sc_biguint<12>(add_ln703_2884_fu_13019047_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2887_fu_13019073_p2() {
    add_ln703_2887_fu_13019073_p2 = (!sext_ln703_902_fu_13019069_p1.read().is_01() || !zext_ln203_204_fu_12975502_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_902_fu_13019069_p1.read()) + sc_biguint<13>(zext_ln203_204_fu_12975502_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2888_fu_13019079_p2() {
    add_ln703_2888_fu_13019079_p2 = (!sext_ln1116_108_fu_12975540_p1.read().is_01() || !zext_ln1116_141_fu_12975516_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_108_fu_12975540_p1.read()) + sc_biguint<12>(zext_ln1116_141_fu_12975516_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2889_fu_13019089_p2() {
    add_ln703_2889_fu_13019089_p2 = (!sext_ln703_1675_fu_13019085_p1.read().is_01() || !add_ln703_2887_fu_13019073_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1675_fu_13019085_p1.read()) + sc_biguint<13>(add_ln703_2887_fu_13019073_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2890_fu_13034855_p2() {
    add_ln703_2890_fu_13034855_p2 = (!sext_ln703_903_fu_13034852_p1.read().is_01() || !zext_ln203_205_fu_13029142_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_903_fu_13034852_p1.read()) + sc_biguint<14>(zext_ln203_205_fu_13029142_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2891_fu_13019095_p2() {
    add_ln703_2891_fu_13019095_p2 = (!zext_ln1116_142_fu_12975568_p1.read().is_01() || !sext_ln1116_109_fu_12975582_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_142_fu_12975568_p1.read()) + sc_bigint<12>(sext_ln1116_109_fu_12975582_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2892_fu_13019105_p2() {
    add_ln703_2892_fu_13019105_p2 = (!sext_ln703_1676_fu_13019101_p1.read().is_01() || !sext_ln1116_110_fu_12975586_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1676_fu_13019101_p1.read()) + sc_bigint<13>(sext_ln1116_110_fu_12975586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2893_fu_13034864_p2() {
    add_ln703_2893_fu_13034864_p2 = (!sext_ln703_1677_fu_13034861_p1.read().is_01() || !add_ln703_2890_fu_13034855_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1677_fu_13034861_p1.read()) + sc_biguint<14>(add_ln703_2890_fu_13034855_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2894_fu_13034874_p2() {
    add_ln703_2894_fu_13034874_p2 = (!sext_ln703_904_fu_13034870_p1.read().is_01() || !sext_ln203_573_fu_13029145_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_904_fu_13034870_p1.read()) + sc_bigint<15>(sext_ln203_573_fu_13029145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2895_fu_13019111_p2() {
    add_ln703_2895_fu_13019111_p2 = (!sext_ln1116_112_fu_12975646_p1.read().is_01() || !sext_ln1118_896_fu_12975688_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_112_fu_12975646_p1.read()) + sc_bigint<12>(sext_ln1118_896_fu_12975688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2896_fu_13019121_p2() {
    add_ln703_2896_fu_13019121_p2 = (!sext_ln703_1678_fu_13019117_p1.read().is_01() || !sext_ln708_124_fu_12975590_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1678_fu_13019117_p1.read()) + sc_bigint<13>(sext_ln708_124_fu_12975590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2897_fu_13034883_p2() {
    add_ln703_2897_fu_13034883_p2 = (!sext_ln703_1679_fu_13034880_p1.read().is_01() || !add_ln703_2894_fu_13034874_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1679_fu_13034880_p1.read()) + sc_biguint<15>(add_ln703_2894_fu_13034874_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2898_fu_13019127_p2() {
    add_ln703_2898_fu_13019127_p2 = (!zext_ln708_611_fu_12975604_p1.read().is_01() || !zext_ln708_612_fu_12975618_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_611_fu_12975604_p1.read()) + sc_biguint<11>(zext_ln708_612_fu_12975618_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2899_fu_13019137_p2() {
    add_ln703_2899_fu_13019137_p2 = (!sext_ln1116_111_fu_12975632_p1.read().is_01() || !sext_ln708_125_fu_12975736_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_111_fu_12975632_p1.read()) + sc_bigint<10>(sext_ln708_125_fu_12975736_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2900_fu_13019147_p2() {
    add_ln703_2900_fu_13019147_p2 = (!sext_ln703_1680_fu_13019143_p1.read().is_01() || !zext_ln708_613_fu_12975702_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1680_fu_13019143_p1.read()) + sc_biguint<11>(zext_ln708_613_fu_12975702_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2901_fu_13019157_p2() {
    add_ln703_2901_fu_13019157_p2 = (!sext_ln703_1681_fu_13019153_p1.read().is_01() || !zext_ln703_375_fu_13019133_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1681_fu_13019153_p1.read()) + sc_biguint<12>(zext_ln703_375_fu_13019133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2902_fu_13034892_p2() {
    add_ln703_2902_fu_13034892_p2 = (!sext_ln703_1682_fu_13034889_p1.read().is_01() || !add_ln703_2897_fu_13034883_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1682_fu_13034889_p1.read()) + sc_biguint<15>(add_ln703_2897_fu_13034883_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2903_fu_13019163_p2() {
    add_ln703_2903_fu_13019163_p2 = (!zext_ln203_206_fu_12975756_p1.read().is_01() || !sext_ln203_574_fu_12975804_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_206_fu_12975756_p1.read()) + sc_bigint<12>(sext_ln203_574_fu_12975804_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2904_fu_13034901_p2() {
    add_ln703_2904_fu_13034901_p2 = (!sext_ln703_1683_fu_13034898_p1.read().is_01() || !add_ln703_2902_fu_13034892_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1683_fu_13034898_p1.read()) + sc_biguint<15>(add_ln703_2902_fu_13034892_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2905_fu_13019169_p2() {
    add_ln703_2905_fu_13019169_p2 = (!sext_ln203_577_fu_12975906_p1.read().is_01() || !sext_ln203_578_fu_12975920_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_577_fu_12975906_p1.read()) + sc_bigint<12>(sext_ln203_578_fu_12975920_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2906_fu_13019179_p2() {
    add_ln703_2906_fu_13019179_p2 = (!sext_ln703_1685_fu_13019175_p1.read().is_01() || !sext_ln203_576_fu_12975862_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1685_fu_13019175_p1.read()) + sc_bigint<13>(sext_ln203_576_fu_12975862_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2907_fu_13034914_p2() {
    add_ln703_2907_fu_13034914_p2 = (!sext_ln703_1686_fu_13034911_p1.read().is_01() || !sext_ln703_1684_fu_13034907_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1686_fu_13034911_p1.read()) + sc_bigint<16>(sext_ln703_1684_fu_13034907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2908_fu_13019185_p2() {
    add_ln703_2908_fu_13019185_p2 = (!zext_ln203_207_fu_12975824_p1.read().is_01() || !zext_ln203_208_fu_12975892_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_207_fu_12975824_p1.read()) + sc_biguint<10>(zext_ln203_208_fu_12975892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2909_fu_13019195_p2() {
    add_ln703_2909_fu_13019195_p2 = (!zext_ln703_376_fu_13019191_p1.read().is_01() || !sext_ln203_579_fu_12975989_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_376_fu_13019191_p1.read()) + sc_bigint<12>(sext_ln203_579_fu_12975989_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2910_fu_13019205_p2() {
    add_ln703_2910_fu_13019205_p2 = (!zext_ln203_209_fu_12975938_p1.read().is_01() || !zext_ln203_178_fu_12969803_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_209_fu_12975938_p1.read()) + sc_biguint<10>(zext_ln203_178_fu_12969803_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2911_fu_13019215_p2() {
    add_ln703_2911_fu_13019215_p2 = (!zext_ln203_210_fu_12975957_p1.read().is_01() || !sext_ln203_575_fu_12975848_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_210_fu_12975957_p1.read()) + sc_bigint<10>(sext_ln203_575_fu_12975848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2912_fu_13019225_p2() {
    add_ln703_2912_fu_13019225_p2 = (!sext_ln703_1688_fu_13019221_p1.read().is_01() || !zext_ln703_377_fu_13019211_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1688_fu_13019221_p1.read()) + sc_biguint<12>(zext_ln703_377_fu_13019211_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2913_fu_13019235_p2() {
    add_ln703_2913_fu_13019235_p2 = (!sext_ln703_1689_fu_13019231_p1.read().is_01() || !sext_ln703_1687_fu_13019201_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1689_fu_13019231_p1.read()) + sc_bigint<13>(sext_ln703_1687_fu_13019201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2915_fu_13019241_p2() {
    add_ln703_2915_fu_13019241_p2 = (!sext_ln1118_900_fu_12976017_p1.read().is_01() || !ap_const_lv9_180.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_900_fu_12976017_p1.read()) + sc_bigint<9>(ap_const_lv9_180));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2916_fu_13019251_p2() {
    add_ln703_2916_fu_13019251_p2 = (!sext_ln1118_902_fu_12976051_p1.read().is_01() || !sext_ln1118_901_fu_12976031_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_902_fu_12976051_p1.read()) + sc_bigint<10>(sext_ln1118_901_fu_12976031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2917_fu_13019257_p2() {
    add_ln703_2917_fu_13019257_p2 = (!add_ln703_2916_fu_13019251_p2.read().is_01() || !sext_ln703_1691_fu_13019247_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2916_fu_13019251_p2.read()) + sc_bigint<10>(sext_ln703_1691_fu_13019247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2918_fu_13019267_p2() {
    add_ln703_2918_fu_13019267_p2 = (!sext_ln703_1692_fu_13019263_p1.read().is_01() || !sext_ln1118_905_fu_12976133_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1692_fu_13019263_p1.read()) + sc_bigint<12>(sext_ln1118_905_fu_12976133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2919_fu_13019273_p2() {
    add_ln703_2919_fu_13019273_p2 = (!trunc_ln1118_46_fu_12976079_p4.read().is_01() || !zext_ln1118_1523_fu_12976099_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_46_fu_12976079_p4.read()) + sc_biguint<9>(zext_ln1118_1523_fu_12976099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2920_fu_13019283_p2() {
    add_ln703_2920_fu_13019283_p2 = (!zext_ln703_378_fu_13019279_p1.read().is_01() || !add_ln703_2918_fu_13019267_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_378_fu_13019279_p1.read()) + sc_biguint<12>(add_ln703_2918_fu_13019267_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2921_fu_13019293_p2() {
    add_ln703_2921_fu_13019293_p2 = (!zext_ln708_615_fu_12976225_p1.read().is_01() || !sext_ln1118_907_fu_12976167_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_615_fu_12976225_p1.read()) + sc_bigint<11>(sext_ln1118_907_fu_12976167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2922_fu_13019299_p2() {
    add_ln703_2922_fu_13019299_p2 = (!sext_ln1118_909_fu_12976201_p1.read().is_01() || !sext_ln1118_903_fu_12976075_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_909_fu_12976201_p1.read()) + sc_bigint<8>(sext_ln1118_903_fu_12976075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2923_fu_13019309_p2() {
    add_ln703_2923_fu_13019309_p2 = (!sext_ln703_1694_fu_13019305_p1.read().is_01() || !add_ln703_2921_fu_13019293_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1694_fu_13019305_p1.read()) + sc_biguint<11>(add_ln703_2921_fu_13019293_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2924_fu_13019319_p2() {
    add_ln703_2924_fu_13019319_p2 = (!sext_ln703_1695_fu_13019315_p1.read().is_01() || !sext_ln703_1693_fu_13019289_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1695_fu_13019315_p1.read()) + sc_bigint<13>(sext_ln703_1693_fu_13019289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2925_fu_13019325_p2() {
    add_ln703_2925_fu_13019325_p2 = (!add_ln703_2924_fu_13019319_p2.read().is_01() || !zext_ln708_616_fu_12976301_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2924_fu_13019319_p2.read()) + sc_biguint<13>(zext_ln708_616_fu_12976301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2926_fu_13019331_p2() {
    add_ln703_2926_fu_13019331_p2 = (!sext_ln1118_910_fu_12976239_p1.read().is_01() || !sext_ln1118_912_fu_12976269_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_910_fu_12976239_p1.read()) + sc_bigint<11>(sext_ln1118_912_fu_12976269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2927_fu_13019341_p2() {
    add_ln703_2927_fu_13019341_p2 = (!sext_ln703_1697_fu_13019337_p1.read().is_01() || !zext_ln1118_1534_fu_12976417_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1697_fu_13019337_p1.read()) + sc_biguint<12>(zext_ln1118_1534_fu_12976417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2928_fu_13034935_p2() {
    add_ln703_2928_fu_13034935_p2 = (!sext_ln703_1698_fu_13034932_p1.read().is_01() || !sext_ln703_1696_fu_13034929_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1698_fu_13034932_p1.read()) + sc_bigint<14>(sext_ln703_1696_fu_13034929_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2929_fu_13019347_p2() {
    add_ln703_2929_fu_13019347_p2 = (!sext_ln1118_917_fu_12976431_p1.read().is_01() || !sext_ln1118_918_fu_12976445_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_917_fu_12976431_p1.read()) + sc_bigint<11>(sext_ln1118_918_fu_12976445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2930_fu_13019357_p2() {
    add_ln703_2930_fu_13019357_p2 = (!sext_ln703_1699_fu_13019353_p1.read().is_01() || !sext_ln1118_914_fu_12976365_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1699_fu_13019353_p1.read()) + sc_bigint<12>(sext_ln1118_914_fu_12976365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2931_fu_13019363_p2() {
    add_ln703_2931_fu_13019363_p2 = (!sext_ln1118_913_fu_12976351_p1.read().is_01() || !zext_ln1118_1529_fu_12976315_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_913_fu_12976351_p1.read()) + sc_biguint<9>(zext_ln1118_1529_fu_12976315_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2932_fu_13019373_p2() {
    add_ln703_2932_fu_13019373_p2 = (!sext_ln703_1700_fu_13019369_p1.read().is_01() || !sext_ln1118_916_fu_12976403_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1700_fu_13019369_p1.read()) + sc_bigint<10>(sext_ln1118_916_fu_12976403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2933_fu_13019383_p2() {
    add_ln703_2933_fu_13019383_p2 = (!sext_ln703_1701_fu_13019379_p1.read().is_01() || !add_ln703_2930_fu_13019357_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1701_fu_13019379_p1.read()) + sc_biguint<12>(add_ln703_2930_fu_13019357_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2934_fu_13034944_p2() {
    add_ln703_2934_fu_13034944_p2 = (!sext_ln703_1702_fu_13034941_p1.read().is_01() || !add_ln703_2928_fu_13034935_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1702_fu_13034941_p1.read()) + sc_biguint<14>(add_ln703_2928_fu_13034935_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2935_fu_13019389_p2() {
    add_ln703_2935_fu_13019389_p2 = (!sext_ln203_584_fu_12976545_p1.read().is_01() || !sext_ln203_586_fu_12976597_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_584_fu_12976545_p1.read()) + sc_bigint<12>(sext_ln203_586_fu_12976597_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2936_fu_13034957_p2() {
    add_ln703_2936_fu_13034957_p2 = (!sext_ln703_1704_fu_13034954_p1.read().is_01() || !sext_ln703_1703_fu_13034950_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1704_fu_13034954_p1.read()) + sc_bigint<15>(sext_ln703_1703_fu_13034950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2937_fu_13019395_p2() {
    add_ln703_2937_fu_13019395_p2 = (!zext_ln708_553_fu_12971123_p1.read().is_01() || !sext_ln203_580_fu_12976465_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_553_fu_12971123_p1.read()) + sc_bigint<11>(sext_ln203_580_fu_12976465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2938_fu_13019401_p2() {
    add_ln703_2938_fu_13019401_p2 = (!add_ln703_2937_fu_13019395_p2.read().is_01() || !zext_ln708_617_fu_12976621_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2937_fu_13019395_p2.read()) + sc_biguint<11>(zext_ln708_617_fu_12976621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2939_fu_13034966_p2() {
    add_ln703_2939_fu_13034966_p2 = (!sext_ln703_1705_fu_13034963_p1.read().is_01() || !add_ln703_2936_fu_13034957_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1705_fu_13034963_p1.read()) + sc_biguint<15>(add_ln703_2936_fu_13034957_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2940_fu_13019407_p2() {
    add_ln703_2940_fu_13019407_p2 = (!sext_ln203_583_fu_12976531_p1.read().is_01() || !sext_ln203_587_fu_12976635_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_583_fu_12976531_p1.read()) + sc_bigint<11>(sext_ln203_587_fu_12976635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2941_fu_13019417_p2() {
    add_ln703_2941_fu_13019417_p2 = (!sext_ln703_1706_fu_13019413_p1.read().is_01() || !sext_ln203_582_fu_12976503_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1706_fu_13019413_p1.read()) + sc_bigint<12>(sext_ln203_582_fu_12976503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2942_fu_13019427_p2() {
    add_ln703_2942_fu_13019427_p2 = (!sext_ln203_581_fu_12976489_p1.read().is_01() || !sext_ln203_585_fu_12976583_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_581_fu_12976489_p1.read()) + sc_bigint<10>(sext_ln203_585_fu_12976583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2943_fu_13019437_p2() {
    add_ln703_2943_fu_13019437_p2 = (!sext_ln203_588_fu_12976659_p1.read().is_01() || !zext_ln203_211_fu_12976517_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_588_fu_12976659_p1.read()) + sc_biguint<9>(zext_ln203_211_fu_12976517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2944_fu_13019447_p2() {
    add_ln703_2944_fu_13019447_p2 = (!sext_ln703_1709_fu_13019443_p1.read().is_01() || !sext_ln703_1708_fu_13019433_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1709_fu_13019443_p1.read()) + sc_bigint<11>(sext_ln703_1708_fu_13019433_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2945_fu_13019457_p2() {
    add_ln703_2945_fu_13019457_p2 = (!sext_ln703_1710_fu_13019453_p1.read().is_01() || !sext_ln703_1707_fu_13019423_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1710_fu_13019453_p1.read()) + sc_bigint<13>(sext_ln703_1707_fu_13019423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2947_fu_13019463_p2() {
    add_ln703_2947_fu_13019463_p2 = (!sext_ln1118_899_fu_12976013_p1.read().is_01() || !ap_const_lv10_218.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_899_fu_12976013_p1.read()) + sc_bigint<10>(ap_const_lv10_218));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2948_fu_13019473_p2() {
    add_ln703_2948_fu_13019473_p2 = (!sext_ln1118_921_fu_12976677_p1.read().is_01() || !sext_ln1118_920_fu_12976673_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_921_fu_12976677_p1.read()) + sc_bigint<12>(sext_ln1118_920_fu_12976673_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2949_fu_13019483_p2() {
    add_ln703_2949_fu_13019483_p2 = (!sext_ln703_1713_fu_13019479_p1.read().is_01() || !zext_ln703_379_fu_13019469_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1713_fu_13019479_p1.read()) + sc_biguint<13>(zext_ln703_379_fu_13019469_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2950_fu_13019489_p2() {
    add_ln703_2950_fu_13019489_p2 = (!sext_ln1118_922_fu_12976697_p1.read().is_01() || !zext_ln1118_1540_fu_12976701_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_922_fu_12976697_p1.read()) + sc_biguint<12>(zext_ln1118_1540_fu_12976701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2951_fu_13019499_p2() {
    add_ln703_2951_fu_13019499_p2 = (!sext_ln703_1714_fu_13019495_p1.read().is_01() || !add_ln703_2949_fu_13019483_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1714_fu_13019495_p1.read()) + sc_biguint<13>(add_ln703_2949_fu_13019483_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2952_fu_13019509_p2() {
    add_ln703_2952_fu_13019509_p2 = (!sext_ln1118_924_fu_12976759_p1.read().is_01() || !sext_ln1118_923_fu_12976725_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_924_fu_12976759_p1.read()) + sc_bigint<10>(sext_ln1118_923_fu_12976725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2953_fu_13019519_p2() {
    add_ln703_2953_fu_13019519_p2 = (!sext_ln703_1716_fu_13019515_p1.read().is_01() || !zext_ln708_618_fu_12976745_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1716_fu_13019515_p1.read()) + sc_biguint<11>(zext_ln708_618_fu_12976745_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2954_fu_13019529_p2() {
    add_ln703_2954_fu_13019529_p2 = (!sext_ln703_1717_fu_13019525_p1.read().is_01() || !sext_ln703_1715_fu_13019505_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1717_fu_13019525_p1.read()) + sc_bigint<14>(sext_ln703_1715_fu_13019505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2955_fu_13019535_p2() {
    add_ln703_2955_fu_13019535_p2 = (!sext_ln1118_887_fu_12975028_p1.read().is_01() || !sext_ln1116_93_fu_12964534_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_887_fu_12975028_p1.read()) + sc_bigint<12>(sext_ln1116_93_fu_12964534_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2956_fu_13019545_p2() {
    add_ln703_2956_fu_13019545_p2 = (!sext_ln703_1718_fu_13019541_p1.read().is_01() || !add_ln703_2954_fu_13019529_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1718_fu_13019541_p1.read()) + sc_biguint<14>(add_ln703_2954_fu_13019529_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2957_fu_13019551_p2() {
    add_ln703_2957_fu_13019551_p2 = (!sext_ln1118_926_fu_12976873_p1.read().is_01() || !sext_ln1118_891_fu_12975188_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_926_fu_12976873_p1.read()) + sc_bigint<12>(sext_ln1118_891_fu_12975188_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2958_fu_13019561_p2() {
    add_ln703_2958_fu_13019561_p2 = (!sext_ln1118_928_fu_12976945_p1.read().is_01() || !zext_ln1118_1543_fu_12976783_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_928_fu_12976945_p1.read()) + sc_biguint<12>(zext_ln1118_1543_fu_12976783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2959_fu_13019571_p2() {
    add_ln703_2959_fu_13019571_p2 = (!sext_ln703_1721_fu_13019567_p1.read().is_01() || !sext_ln703_1720_fu_13019557_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1721_fu_13019567_p1.read()) + sc_bigint<13>(sext_ln703_1720_fu_13019557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2960_fu_13034991_p2() {
    add_ln703_2960_fu_13034991_p2 = (!sext_ln703_1722_fu_13034988_p1.read().is_01() || !sext_ln703_1719_fu_13034985_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1722_fu_13034988_p1.read()) + sc_bigint<15>(sext_ln703_1719_fu_13034985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2961_fu_13019577_p2() {
    add_ln703_2961_fu_13019577_p2 = (!zext_ln1118_1546_fu_12976859_p1.read().is_01() || !zext_ln1118_1548_fu_12976897_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1546_fu_12976859_p1.read()) + sc_biguint<9>(zext_ln1118_1548_fu_12976897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2962_fu_13019587_p2() {
    add_ln703_2962_fu_13019587_p2 = (!zext_ln703_380_fu_13019583_p1.read().is_01() || !zext_ln708_619_fu_12976835_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_380_fu_13019583_p1.read()) + sc_biguint<11>(zext_ln708_619_fu_12976835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2963_fu_13019597_p2() {
    add_ln703_2963_fu_13019597_p2 = (!zext_ln708_620_fu_12976931_p1.read().is_01() || !sext_ln1118_925_fu_12976807_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_620_fu_12976931_p1.read()) + sc_bigint<11>(sext_ln1118_925_fu_12976807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2964_fu_13019603_p2() {
    add_ln703_2964_fu_13019603_p2 = (!zext_ln1118_1545_fu_12976839_p1.read().is_01() || !sext_ln1118_927_fu_12976911_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1545_fu_12976839_p1.read()) + sc_bigint<9>(sext_ln1118_927_fu_12976911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2965_fu_13019613_p2() {
    add_ln703_2965_fu_13019613_p2 = (!sext_ln703_1723_fu_13019609_p1.read().is_01() || !add_ln703_2963_fu_13019597_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1723_fu_13019609_p1.read()) + sc_biguint<11>(add_ln703_2963_fu_13019597_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2966_fu_13019623_p2() {
    add_ln703_2966_fu_13019623_p2 = (!sext_ln703_1724_fu_13019619_p1.read().is_01() || !zext_ln703_381_fu_13019593_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1724_fu_13019619_p1.read()) + sc_biguint<13>(zext_ln703_381_fu_13019593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2967_fu_13035000_p2() {
    add_ln703_2967_fu_13035000_p2 = (!sext_ln703_1725_fu_13034997_p1.read().is_01() || !add_ln703_2960_fu_13034991_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1725_fu_13034997_p1.read()) + sc_biguint<15>(add_ln703_2960_fu_13034991_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2968_fu_13035006_p2() {
    add_ln703_2968_fu_13035006_p2 = (!add_ln703_2967_fu_13035000_p2.read().is_01() || !sext_ln203_590_fu_13029148_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2967_fu_13035000_p2.read()) + sc_bigint<15>(sext_ln203_590_fu_13029148_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2969_fu_13019629_p2() {
    add_ln703_2969_fu_13019629_p2 = (!sext_ln203_591_fu_12977021_p1.read().is_01() || !sext_ln203_592_fu_12977035_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_591_fu_12977021_p1.read()) + sc_bigint<12>(sext_ln203_592_fu_12977035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2970_fu_13019639_p2() {
    add_ln703_2970_fu_13019639_p2 = (!sext_ln703_1726_fu_13019635_p1.read().is_01() || !sext_ln203_526_fu_12970998_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1726_fu_13019635_p1.read()) + sc_bigint<13>(sext_ln203_526_fu_12970998_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2971_fu_13035015_p2() {
    add_ln703_2971_fu_13035015_p2 = (!sext_ln703_1727_fu_13035012_p1.read().is_01() || !add_ln703_2968_fu_13035006_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1727_fu_13035012_p1.read()) + sc_biguint<15>(add_ln703_2968_fu_13035006_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2972_fu_13019645_p2() {
    add_ln703_2972_fu_13019645_p2 = (!zext_ln708_621_fu_12977101_p1.read().is_01() || !sext_ln203_595_fu_12977087_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_621_fu_12977101_p1.read()) + sc_bigint<11>(sext_ln203_595_fu_12977087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2973_fu_13019655_p2() {
    add_ln703_2973_fu_13019655_p2 = (!sext_ln703_1729_fu_13019651_p1.read().is_01() || !sext_ln203_570_fu_12975382_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1729_fu_13019651_p1.read()) + sc_bigint<12>(sext_ln203_570_fu_12975382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2974_fu_13019665_p2() {
    add_ln703_2974_fu_13019665_p2 = (!sext_ln203_593_fu_12977059_p1.read().is_01() || !sext_ln203_594_fu_12977073_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_593_fu_12977059_p1.read()) + sc_bigint<9>(sext_ln203_594_fu_12977073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2975_fu_13019675_p2() {
    add_ln703_2975_fu_13019675_p2 = (!sext_ln703_1731_fu_13019671_p1.read().is_01() || !sext_ln203_589_fu_12976987_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1731_fu_13019671_p1.read()) + sc_bigint<10>(sext_ln203_589_fu_12976987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2976_fu_13019685_p2() {
    add_ln703_2976_fu_13019685_p2 = (!sext_ln703_1732_fu_13019681_p1.read().is_01() || !sext_ln703_1730_fu_13019661_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1732_fu_13019681_p1.read()) + sc_bigint<13>(sext_ln703_1730_fu_13019661_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2978_fu_13019691_p2() {
    add_ln703_2978_fu_13019691_p2 = (!sext_ln203_596_fu_12977115_p1.read().is_01() || !zext_ln203_212_fu_12977119_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_596_fu_12977115_p1.read()) + sc_biguint<12>(zext_ln203_212_fu_12977119_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2979_fu_13019697_p2() {
    add_ln703_2979_fu_13019697_p2 = (!zext_ln1118_1552_fu_12977147_p1.read().is_01() || !ap_const_lv10_290.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1552_fu_12977147_p1.read()) + sc_bigint<10>(ap_const_lv10_290));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2980_fu_13019707_p2() {
    add_ln703_2980_fu_13019707_p2 = (!sext_ln703_1734_fu_13019703_p1.read().is_01() || !zext_ln708_622_fu_12977133_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1734_fu_13019703_p1.read()) + sc_biguint<11>(zext_ln708_622_fu_12977133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2981_fu_13019717_p2() {
    add_ln703_2981_fu_13019717_p2 = (!sext_ln703_1735_fu_13019713_p1.read().is_01() || !add_ln703_2978_fu_13019691_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1735_fu_13019713_p1.read()) + sc_biguint<12>(add_ln703_2978_fu_13019691_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2982_fu_13019727_p2() {
    add_ln703_2982_fu_13019727_p2 = (!sext_ln703_914_fu_13019723_p1.read().is_01() || !sext_ln203_597_fu_12977217_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_914_fu_13019723_p1.read()) + sc_bigint<13>(sext_ln203_597_fu_12977217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2983_fu_13019733_p2() {
    add_ln703_2983_fu_13019733_p2 = (!zext_ln708_623_fu_12977193_p1.read().is_01() || !sext_ln708_126_fu_12977179_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_623_fu_12977193_p1.read()) + sc_bigint<8>(sext_ln708_126_fu_12977179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2984_fu_13035037_p2() {
    add_ln703_2984_fu_13035037_p2 = (!sext_ln703_1736_fu_13035034_p1.read().is_01() || !add_ln703_2982_reg_13042550.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1736_fu_13035034_p1.read()) + sc_biguint<13>(add_ln703_2982_reg_13042550.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2985_fu_13035042_p2() {
    add_ln703_2985_fu_13035042_p2 = (!add_ln703_2984_fu_13035037_p2.read().is_01() || !sext_ln1118_930_reg_13039434.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2984_fu_13035037_p2.read()) + sc_bigint<13>(sext_ln1118_930_reg_13039434.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2986_fu_13019739_p2() {
    add_ln703_2986_fu_13019739_p2 = (!zext_ln708_624_fu_12977289_p1.read().is_01() || !sext_ln1118_933_fu_12977275_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_624_fu_12977289_p1.read()) + sc_bigint<10>(sext_ln1118_933_fu_12977275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2987_fu_13019749_p2() {
    add_ln703_2987_fu_13019749_p2 = (!sext_ln703_1738_fu_13019745_p1.read().is_01() || !sext_ln1118_932_fu_12977251_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1738_fu_13019745_p1.read()) + sc_bigint<12>(sext_ln1118_932_fu_12977251_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2988_fu_13035054_p2() {
    add_ln703_2988_fu_13035054_p2 = (!sext_ln703_1739_fu_13035051_p1.read().is_01() || !sext_ln703_1737_fu_13035047_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1739_fu_13035051_p1.read()) + sc_bigint<14>(sext_ln703_1737_fu_13035047_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2989_fu_13019755_p2() {
    add_ln703_2989_fu_13019755_p2 = (!zext_ln708_625_fu_12977309_p1.read().is_01() || !zext_ln708_626_fu_12977323_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_625_fu_12977309_p1.read()) + sc_biguint<11>(zext_ln708_626_fu_12977323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2990_fu_13035063_p2() {
    add_ln703_2990_fu_13035063_p2 = (!zext_ln703_382_fu_13035060_p1.read().is_01() || !add_ln703_2988_fu_13035054_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_382_fu_13035060_p1.read()) + sc_biguint<14>(add_ln703_2988_fu_13035054_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2991_fu_13019761_p2() {
    add_ln703_2991_fu_13019761_p2 = (!zext_ln708_628_fu_12977413_p1.read().is_01() || !zext_ln708_629_fu_12977441_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_628_fu_12977413_p1.read()) + sc_biguint<11>(zext_ln708_629_fu_12977441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2992_fu_13019771_p2() {
    add_ln703_2992_fu_13019771_p2 = (!zext_ln703_383_fu_13019767_p1.read().is_01() || !zext_ln1118_1558_fu_12977399_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_383_fu_13019767_p1.read()) + sc_biguint<12>(zext_ln1118_1558_fu_12977399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2993_fu_13035076_p2() {
    add_ln703_2993_fu_13035076_p2 = (!zext_ln703_384_fu_13035073_p1.read().is_01() || !sext_ln703_1740_fu_13035069_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_384_fu_13035073_p1.read()) + sc_bigint<15>(sext_ln703_1740_fu_13035069_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2994_fu_13019777_p2() {
    add_ln703_2994_fu_13019777_p2 = (!sext_ln1118_934_fu_12977375_p1.read().is_01() || !sext_ln708_127_fu_12977347_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_934_fu_12977375_p1.read()) + sc_bigint<11>(sext_ln708_127_fu_12977347_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2995_fu_13019787_p2() {
    add_ln703_2995_fu_13019787_p2 = (!sext_ln703_1741_fu_13019783_p1.read().is_01() || !zext_ln1118_1559_fu_12977455_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1741_fu_13019783_p1.read()) + sc_biguint<12>(zext_ln1118_1559_fu_12977455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2996_fu_13019793_p2() {
    add_ln703_2996_fu_13019793_p2 = (!zext_ln1118_1557_fu_12977361_p1.read().is_01() || !sext_ln1118_935_fu_12977479_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1557_fu_12977361_p1.read()) + sc_bigint<9>(sext_ln1118_935_fu_12977479_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2997_fu_13019803_p2() {
    add_ln703_2997_fu_13019803_p2 = (!sext_ln703_1742_fu_13019799_p1.read().is_01() || !sext_ln708_128_fu_12977427_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1742_fu_13019799_p1.read()) + sc_bigint<10>(sext_ln708_128_fu_12977427_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2998_fu_13019813_p2() {
    add_ln703_2998_fu_13019813_p2 = (!sext_ln703_1743_fu_13019809_p1.read().is_01() || !add_ln703_2995_fu_13019787_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1743_fu_13019809_p1.read()) + sc_biguint<12>(add_ln703_2995_fu_13019787_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2999_fu_13035085_p2() {
    add_ln703_2999_fu_13035085_p2 = (!sext_ln703_1744_fu_13035082_p1.read().is_01() || !add_ln703_2993_fu_13035076_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1744_fu_13035082_p1.read()) + sc_biguint<15>(add_ln703_2993_fu_13035076_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3000_fu_13035091_p2() {
    add_ln703_3000_fu_13035091_p2 = (!add_ln703_2999_fu_13035085_p2.read().is_01() || !sext_ln203_598_fu_13029151_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2999_fu_13035085_p2.read()) + sc_bigint<15>(sext_ln203_598_fu_13029151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3001_fu_13019819_p2() {
    add_ln703_3001_fu_13019819_p2 = (!trunc_ln203_33_fu_12977517_p4.read().is_01() || !zext_ln203_213_fu_12977527_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_33_fu_12977517_p4.read()) + sc_biguint<10>(zext_ln203_213_fu_12977527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3002_fu_13019829_p2() {
    add_ln703_3002_fu_13019829_p2 = (!zext_ln703_385_fu_13019825_p1.read().is_01() || !zext_ln708_630_fu_12977513_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_385_fu_13019825_p1.read()) + sc_biguint<11>(zext_ln708_630_fu_12977513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3003_fu_13035100_p2() {
    add_ln703_3003_fu_13035100_p2 = (!zext_ln703_386_fu_13035097_p1.read().is_01() || !add_ln703_3000_fu_13035091_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_386_fu_13035097_p1.read()) + sc_biguint<15>(add_ln703_3000_fu_13035091_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3004_fu_13019835_p2() {
    add_ln703_3004_fu_13019835_p2 = (!zext_ln708_632_fu_12977555_p1.read().is_01() || !zext_ln708_633_fu_12977579_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_632_fu_12977555_p1.read()) + sc_biguint<11>(zext_ln708_633_fu_12977579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3005_fu_13019841_p2() {
    add_ln703_3005_fu_13019841_p2 = (!add_ln703_3004_fu_13019835_p2.read().is_01() || !zext_ln708_614_fu_12975934_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3004_fu_13019835_p2.read()) + sc_biguint<11>(zext_ln708_614_fu_12975934_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3006_fu_13019851_p2() {
    add_ln703_3006_fu_13019851_p2 = (!zext_ln203_214_fu_12977593_p1.read().is_01() || !sext_ln203_599_fu_12977531_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln203_214_fu_12977593_p1.read()) + sc_bigint<7>(sext_ln203_599_fu_12977531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3007_fu_13019861_p2() {
    add_ln703_3007_fu_13019861_p2 = (!sext_ln703_1745_fu_13019857_p1.read().is_01() || !sext_ln203_535_fu_12971625_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_1745_fu_13019857_p1.read()) + sc_bigint<9>(sext_ln203_535_fu_12971625_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3008_fu_13019871_p2() {
    add_ln703_3008_fu_13019871_p2 = (!sext_ln703_1746_fu_13019867_p1.read().is_01() || !zext_ln703_387_fu_13019847_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1746_fu_13019867_p1.read()) + sc_biguint<12>(zext_ln703_387_fu_13019847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3010_fu_13019877_p2() {
    add_ln703_3010_fu_13019877_p2 = (!zext_ln708_635_fu_12977617_p1.read().is_01() || !ap_const_lv11_460.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_635_fu_12977617_p1.read()) + sc_bigint<11>(ap_const_lv11_460));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3011_fu_13019887_p2() {
    add_ln703_3011_fu_13019887_p2 = (!sext_ln703_918_fu_13019883_p1.read().is_01() || !sext_ln203_600_fu_12977637_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_918_fu_13019883_p1.read()) + sc_bigint<12>(sext_ln203_600_fu_12977637_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3012_fu_13019897_p2() {
    add_ln703_3012_fu_13019897_p2 = (!sext_ln1116_113_fu_12977711_p1.read().is_01() || !zext_ln1116_146_fu_12977687_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_113_fu_12977711_p1.read()) + sc_biguint<12>(zext_ln1116_146_fu_12977687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3013_fu_13019907_p2() {
    add_ln703_3013_fu_13019907_p2 = (!sext_ln703_1749_fu_13019903_p1.read().is_01() || !sext_ln703_919_fu_13019893_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1749_fu_13019903_p1.read()) + sc_bigint<13>(sext_ln703_919_fu_13019893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3014_fu_13019913_p2() {
    add_ln703_3014_fu_13019913_p2 = (!zext_ln708_637_fu_12977739_p1.read().is_01() || !sext_ln1118_936_fu_12977669_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_637_fu_12977739_p1.read()) + sc_bigint<11>(sext_ln1118_936_fu_12977669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3015_fu_13019919_p2() {
    add_ln703_3015_fu_13019919_p2 = (!add_ln703_3014_fu_13019913_p2.read().is_01() || !zext_ln708_636_fu_12977725_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3014_fu_13019913_p2.read()) + sc_biguint<11>(zext_ln708_636_fu_12977725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3016_fu_13019929_p2() {
    add_ln703_3016_fu_13019929_p2 = (!sext_ln703_1750_fu_13019925_p1.read().is_01() || !add_ln703_3013_fu_13019907_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1750_fu_13019925_p1.read()) + sc_biguint<13>(add_ln703_3013_fu_13019907_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3017_fu_13019935_p2() {
    add_ln703_3017_fu_13019935_p2 = (!add_ln703_3016_fu_13019929_p2.read().is_01() || !sext_ln1118_930_fu_12977221_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3016_fu_13019929_p2.read()) + sc_bigint<13>(sext_ln1118_930_fu_12977221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3018_fu_13019941_p2() {
    add_ln703_3018_fu_13019941_p2 = (!sext_ln1118_937_fu_12977753_p1.read().is_01() || !sext_ln1116_114_fu_12977859_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_937_fu_12977753_p1.read()) + sc_bigint<12>(sext_ln1116_114_fu_12977859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3019_fu_13035125_p2() {
    add_ln703_3019_fu_13035125_p2 = (!sext_ln703_1752_fu_13035122_p1.read().is_01() || !sext_ln703_1751_fu_13035119_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1752_fu_13035122_p1.read()) + sc_bigint<14>(sext_ln703_1751_fu_13035119_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3020_fu_13019947_p2() {
    add_ln703_3020_fu_13019947_p2 = (!zext_ln1118_1567_fu_12977801_p1.read().is_01() || !zext_ln1118_1569_fu_12977825_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1567_fu_12977801_p1.read()) + sc_biguint<9>(zext_ln1118_1569_fu_12977825_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3021_fu_13019957_p2() {
    add_ln703_3021_fu_13019957_p2 = (!zext_ln708_638_fu_12977879_p1.read().is_01() || !sext_ln1118_939_fu_12977777_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_638_fu_12977879_p1.read()) + sc_bigint<11>(sext_ln1118_939_fu_12977777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3022_fu_13019963_p2() {
    add_ln703_3022_fu_13019963_p2 = (!add_ln703_3021_fu_13019957_p2.read().is_01() || !zext_ln703_388_fu_13019953_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3021_fu_13019957_p2.read()) + sc_biguint<11>(zext_ln703_388_fu_13019953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3023_fu_13035134_p2() {
    add_ln703_3023_fu_13035134_p2 = (!sext_ln703_1753_fu_13035131_p1.read().is_01() || !add_ln703_3019_fu_13035125_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1753_fu_13035131_p1.read()) + sc_biguint<14>(add_ln703_3019_fu_13035125_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3024_fu_13035140_p2() {
    add_ln703_3024_fu_13035140_p2 = (!add_ln703_3023_fu_13035134_p2.read().is_01() || !zext_ln1118_1571_fu_13029154_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3023_fu_13035134_p2.read()) + sc_biguint<14>(zext_ln1118_1571_fu_13029154_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3025_fu_13019969_p2() {
    add_ln703_3025_fu_13019969_p2 = (!zext_ln708_640_fu_12977923_p1.read().is_01() || !zext_ln708_641_fu_12978053_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_640_fu_12977923_p1.read()) + sc_biguint<11>(zext_ln708_641_fu_12978053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3026_fu_13019975_p2() {
    add_ln703_3026_fu_13019975_p2 = (!add_ln703_3025_fu_13019969_p2.read().is_01() || !zext_ln708_639_fu_12977909_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3025_fu_13019969_p2.read()) + sc_biguint<11>(zext_ln708_639_fu_12977909_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3027_fu_13035153_p2() {
    add_ln703_3027_fu_13035153_p2 = (!zext_ln703_389_fu_13035150_p1.read().is_01() || !sext_ln703_1754_fu_13035146_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_389_fu_13035150_p1.read()) + sc_bigint<15>(sext_ln703_1754_fu_13035146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3028_fu_13019981_p2() {
    add_ln703_3028_fu_13019981_p2 = (!sext_ln1116_115_fu_12977951_p1.read().is_01() || !sext_ln1118_943_fu_12977997_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_115_fu_12977951_p1.read()) + sc_bigint<10>(sext_ln1118_943_fu_12977997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3029_fu_13019991_p2() {
    add_ln703_3029_fu_13019991_p2 = (!sext_ln703_1755_fu_13019987_p1.read().is_01() || !zext_ln708_642_fu_12978085_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1755_fu_13019987_p1.read()) + sc_biguint<11>(zext_ln708_642_fu_12978085_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3030_fu_13019997_p2() {
    add_ln703_3030_fu_13019997_p2 = (!sext_ln708_129_fu_12978039_p1.read().is_01() || !sext_ln1116_116_fu_12978001_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_129_fu_12978039_p1.read()) + sc_bigint<9>(sext_ln1116_116_fu_12978001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3031_fu_13020007_p2() {
    add_ln703_3031_fu_13020007_p2 = (!sext_ln703_1756_fu_13020003_p1.read().is_01() || !sext_ln1118_944_fu_12978005_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1756_fu_13020003_p1.read()) + sc_bigint<10>(sext_ln1118_944_fu_12978005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3032_fu_13020017_p2() {
    add_ln703_3032_fu_13020017_p2 = (!sext_ln703_1757_fu_13020013_p1.read().is_01() || !add_ln703_3029_fu_13019991_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1757_fu_13020013_p1.read()) + sc_biguint<11>(add_ln703_3029_fu_13019991_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3033_fu_13035162_p2() {
    add_ln703_3033_fu_13035162_p2 = (!sext_ln703_1758_fu_13035159_p1.read().is_01() || !add_ln703_3027_fu_13035153_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1758_fu_13035159_p1.read()) + sc_biguint<15>(add_ln703_3027_fu_13035153_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3034_fu_13035168_p2() {
    add_ln703_3034_fu_13035168_p2 = (!add_ln703_3033_fu_13035162_p2.read().is_01() || !zext_ln203_215_fu_13029157_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3033_fu_13035162_p2.read()) + sc_biguint<15>(zext_ln203_215_fu_13029157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3035_fu_13020023_p2() {
    add_ln703_3035_fu_13020023_p2 = (!sext_ln203_602_fu_12978143_p1.read().is_01() || !zext_ln203_216_fu_12978115_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_602_fu_12978143_p1.read()) + sc_biguint<12>(zext_ln203_216_fu_12978115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3036_fu_13035177_p2() {
    add_ln703_3036_fu_13035177_p2 = (!sext_ln703_1759_fu_13035174_p1.read().is_01() || !add_ln703_3034_fu_13035168_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1759_fu_13035174_p1.read()) + sc_biguint<15>(add_ln703_3034_fu_13035168_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3037_fu_13020029_p2() {
    add_ln703_3037_fu_13020029_p2 = (!trunc_ln203_34_fu_12978167_p4.read().is_01() || !zext_ln203_218_fu_12978187_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_34_fu_12978167_p4.read()) + sc_biguint<10>(zext_ln203_218_fu_12978187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3038_fu_13020039_p2() {
    add_ln703_3038_fu_13020039_p2 = (!sext_ln203_601_fu_12978129_p1.read().is_01() || !zext_ln203_217_fu_12978157_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_601_fu_12978129_p1.read()) + sc_biguint<11>(zext_ln203_217_fu_12978157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3039_fu_13020045_p2() {
    add_ln703_3039_fu_13020045_p2 = (!add_ln703_3038_fu_13020039_p2.read().is_01() || !zext_ln708_643_fu_12978201_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3038_fu_13020039_p2.read()) + sc_biguint<11>(zext_ln708_643_fu_12978201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3040_fu_13020055_p2() {
    add_ln703_3040_fu_13020055_p2 = (!sext_ln703_1760_fu_13020051_p1.read().is_01() || !zext_ln703_390_fu_13020035_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1760_fu_13020051_p1.read()) + sc_biguint<12>(zext_ln703_390_fu_13020035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3042_fu_13020061_p2() {
    add_ln703_3042_fu_13020061_p2 = (!zext_ln708_644_fu_12978229_p1.read().is_01() || !ap_const_lv11_438.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_644_fu_12978229_p1.read()) + sc_bigint<11>(ap_const_lv11_438));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3043_fu_13020071_p2() {
    add_ln703_3043_fu_13020071_p2 = (!zext_ln708_645_fu_12978271_p1.read().is_01() || !sext_ln1118_946_fu_12978215_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_645_fu_12978271_p1.read()) + sc_bigint<11>(sext_ln1118_946_fu_12978215_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3044_fu_13020081_p2() {
    add_ln703_3044_fu_13020081_p2 = (!sext_ln703_1764_fu_13020077_p1.read().is_01() || !zext_ln203_219_fu_12978243_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1764_fu_13020077_p1.read()) + sc_biguint<12>(zext_ln203_219_fu_12978243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3045_fu_13020087_p2() {
    add_ln703_3045_fu_13020087_p2 = (!add_ln703_3044_fu_13020081_p2.read().is_01() || !sext_ln703_1763_fu_13020067_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3044_fu_13020081_p2.read()) + sc_bigint<12>(sext_ln703_1763_fu_13020067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3046_fu_13020097_p2() {
    add_ln703_3046_fu_13020097_p2 = (!sext_ln703_923_fu_13020093_p1.read().is_01() || !sext_ln203_603_fu_12978299_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_923_fu_13020093_p1.read()) + sc_bigint<13>(sext_ln203_603_fu_12978299_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3047_fu_13020103_p2() {
    add_ln703_3047_fu_13020103_p2 = (!zext_ln1118_1577_fu_12978319_p1.read().is_01() || !sext_ln1118_947_fu_12978285_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1577_fu_12978319_p1.read()) + sc_bigint<10>(sext_ln1118_947_fu_12978285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3048_fu_13020113_p2() {
    add_ln703_3048_fu_13020113_p2 = (!sext_ln703_1765_fu_13020109_p1.read().is_01() || !add_ln703_3046_fu_13020097_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1765_fu_13020109_p1.read()) + sc_biguint<13>(add_ln703_3046_fu_13020097_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3049_fu_13020119_p2() {
    add_ln703_3049_fu_13020119_p2 = (!sext_ln1118_948_fu_12978333_p1.read().is_01() || !sext_ln1118_949_fu_12978361_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_948_fu_12978333_p1.read()) + sc_bigint<12>(sext_ln1118_949_fu_12978361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3050_fu_13035202_p2() {
    add_ln703_3050_fu_13035202_p2 = (!sext_ln703_1766_fu_13035199_p1.read().is_01() || !sext_ln703_924_fu_13035196_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1766_fu_13035199_p1.read()) + sc_bigint<14>(sext_ln703_924_fu_13035196_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3051_fu_13020125_p2() {
    add_ln703_3051_fu_13020125_p2 = (!sext_ln708_130_fu_12978389_p1.read().is_01() || !zext_ln1118_1578_fu_12978347_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_130_fu_12978389_p1.read()) + sc_biguint<12>(zext_ln1118_1578_fu_12978347_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3052_fu_13020135_p2() {
    add_ln703_3052_fu_13020135_p2 = (!zext_ln1118_1579_fu_12978375_p1.read().is_01() || !trunc_ln1118_47_fu_12978393_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1579_fu_12978375_p1.read()) + sc_biguint<10>(trunc_ln1118_47_fu_12978393_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3053_fu_13020145_p2() {
    add_ln703_3053_fu_13020145_p2 = (!zext_ln703_391_fu_13020141_p1.read().is_01() || !sext_ln703_1767_fu_13020131_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_391_fu_13020141_p1.read()) + sc_bigint<13>(sext_ln703_1767_fu_13020131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3054_fu_13035211_p2() {
    add_ln703_3054_fu_13035211_p2 = (!sext_ln703_1768_fu_13035208_p1.read().is_01() || !add_ln703_3050_fu_13035202_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1768_fu_13035208_p1.read()) + sc_biguint<14>(add_ln703_3050_fu_13035202_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3055_fu_13035217_p2() {
    add_ln703_3055_fu_13035217_p2 = (!add_ln703_3054_fu_13035211_p2.read().is_01() || !sext_ln1118_951_fu_13029160_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3054_fu_13035211_p2.read()) + sc_bigint<14>(sext_ln1118_951_fu_13029160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3056_fu_13020151_p2() {
    add_ln703_3056_fu_13020151_p2 = (!sext_ln203_604_fu_12978509_p1.read().is_01() || !zext_ln1118_1580_fu_12978423_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_604_fu_12978509_p1.read()) + sc_biguint<12>(zext_ln1118_1580_fu_12978423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3057_fu_13035230_p2() {
    add_ln703_3057_fu_13035230_p2 = (!sext_ln703_1770_fu_13035227_p1.read().is_01() || !sext_ln703_1769_fu_13035223_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1770_fu_13035227_p1.read()) + sc_bigint<15>(sext_ln703_1769_fu_13035223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3058_fu_13020157_p2() {
    add_ln703_3058_fu_13020157_p2 = (!zext_ln1118_1581_fu_12978437_p1.read().is_01() || !trunc_ln1118_48_fu_12978441_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_1581_fu_12978437_p1.read()) + sc_biguint<8>(trunc_ln1118_48_fu_12978441_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3059_fu_13020167_p2() {
    add_ln703_3059_fu_13020167_p2 = (!zext_ln1118_1585_fu_12978533_p1.read().is_01() || !trunc_ln1118_49_fu_12978537_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1585_fu_12978533_p1.read()) + sc_biguint<10>(trunc_ln1118_49_fu_12978537_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3060_fu_13020173_p2() {
    add_ln703_3060_fu_13020173_p2 = (!add_ln703_3059_fu_13020167_p2.read().is_01() || !zext_ln708_646_fu_12978471_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3059_fu_13020167_p2.read()) + sc_biguint<10>(zext_ln708_646_fu_12978471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3061_fu_13020183_p2() {
    add_ln703_3061_fu_13020183_p2 = (!zext_ln703_393_fu_13020179_p1.read().is_01() || !zext_ln703_392_fu_13020163_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_393_fu_13020179_p1.read()) + sc_biguint<11>(zext_ln703_392_fu_13020163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3062_fu_13035239_p2() {
    add_ln703_3062_fu_13035239_p2 = (!zext_ln703_394_fu_13035236_p1.read().is_01() || !add_ln703_3057_fu_13035230_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_394_fu_13035236_p1.read()) + sc_biguint<15>(add_ln703_3057_fu_13035230_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3063_fu_13020189_p2() {
    add_ln703_3063_fu_13020189_p2 = (!zext_ln1118_1586_fu_12978557_p1.read().is_01() || !zext_ln708_647_fu_12978571_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1586_fu_12978557_p1.read()) + sc_biguint<10>(zext_ln708_647_fu_12978571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3064_fu_13020199_p2() {
    add_ln703_3064_fu_13020199_p2 = (!zext_ln1118_1587_fu_12978613_p1.read().is_01() || !zext_ln708_650_fu_12978627_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1587_fu_12978613_p1.read()) + sc_biguint<10>(zext_ln708_650_fu_12978627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3065_fu_13020209_p2() {
    add_ln703_3065_fu_13020209_p2 = (!zext_ln703_396_fu_13020205_p1.read().is_01() || !zext_ln708_649_fu_12978595_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_396_fu_13020205_p1.read()) + sc_biguint<11>(zext_ln708_649_fu_12978595_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3066_fu_13020219_p2() {
    add_ln703_3066_fu_13020219_p2 = (!zext_ln703_397_fu_13020215_p1.read().is_01() || !zext_ln703_395_fu_13020195_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_397_fu_13020215_p1.read()) + sc_biguint<12>(zext_ln703_395_fu_13020195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3067_fu_13020225_p2() {
    add_ln703_3067_fu_13020225_p2 = (!zext_ln708_651_fu_12978631_p1.read().is_01() || !sext_ln1118_950_fu_12978419_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_651_fu_12978631_p1.read()) + sc_bigint<11>(sext_ln1118_950_fu_12978419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3068_fu_13020235_p2() {
    add_ln703_3068_fu_13020235_p2 = (!zext_ln1118_1583_fu_12978485_p1.read().is_01() || !zext_ln1118_1516_fu_12975768_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1583_fu_12978485_p1.read()) + sc_biguint<9>(zext_ln1118_1516_fu_12975768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3069_fu_13020245_p2() {
    add_ln703_3069_fu_13020245_p2 = (!zext_ln703_399_fu_13020241_p1.read().is_01() || !sext_ln1118_953_fu_12978599_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_399_fu_13020241_p1.read()) + sc_bigint<10>(sext_ln1118_953_fu_12978599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3070_fu_13020255_p2() {
    add_ln703_3070_fu_13020255_p2 = (!sext_ln703_1772_fu_13020251_p1.read().is_01() || !sext_ln703_1771_fu_13020231_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1772_fu_13020251_p1.read()) + sc_bigint<12>(sext_ln703_1771_fu_13020231_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3071_fu_13035251_p2() {
    add_ln703_3071_fu_13035251_p2 = (!sext_ln703_1773_fu_13035248_p1.read().is_01() || !zext_ln703_398_fu_13035245_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1773_fu_13035248_p1.read()) + sc_biguint<13>(zext_ln703_398_fu_13035245_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3072_fu_13035261_p2() {
    add_ln703_3072_fu_13035261_p2 = (!sext_ln703_1774_fu_13035257_p1.read().is_01() || !add_ln703_3062_fu_13035239_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1774_fu_13035257_p1.read()) + sc_biguint<15>(add_ln703_3062_fu_13035239_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3074_fu_13020261_p2() {
    add_ln703_3074_fu_13020261_p2 = (!zext_ln708_490_fu_12965213_p1.read().is_01() || !ap_const_lv11_5E0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_490_fu_12965213_p1.read()) + sc_bigint<11>(ap_const_lv11_5E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3075_fu_13020271_p2() {
    add_ln703_3075_fu_13020271_p2 = (!sext_ln703_927_fu_13020267_p1.read().is_01() || !sext_ln203_606_fu_12978669_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_927_fu_13020267_p1.read()) + sc_bigint<12>(sext_ln203_606_fu_12978669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3076_fu_13020281_p2() {
    add_ln703_3076_fu_13020281_p2 = (!sext_ln708_131_fu_12978697_p1.read().is_01() || !sext_ln1118_955_fu_12978683_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_131_fu_12978697_p1.read()) + sc_bigint<12>(sext_ln1118_955_fu_12978683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3077_fu_13020291_p2() {
    add_ln703_3077_fu_13020291_p2 = (!sext_ln703_1776_fu_13020287_p1.read().is_01() || !sext_ln703_928_fu_13020277_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1776_fu_13020287_p1.read()) + sc_bigint<13>(sext_ln703_928_fu_13020277_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3078_fu_13020301_p2() {
    add_ln703_3078_fu_13020301_p2 = (!zext_ln708_652_fu_12978711_p1.read().is_01() || !sext_ln708_132_fu_12978749_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_652_fu_12978711_p1.read()) + sc_bigint<12>(sext_ln708_132_fu_12978749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3079_fu_13020311_p2() {
    add_ln703_3079_fu_13020311_p2 = (!sext_ln703_1777_fu_13020307_p1.read().is_01() || !sext_ln703_929_fu_13020297_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1777_fu_13020307_p1.read()) + sc_bigint<14>(sext_ln703_929_fu_13020297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3080_fu_13020317_p2() {
    add_ln703_3080_fu_13020317_p2 = (!zext_ln708_476_fu_12964183_p1.read().is_01() || !zext_ln708_653_fu_12978763_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_476_fu_12964183_p1.read()) + sc_biguint<11>(zext_ln708_653_fu_12978763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3081_fu_13020327_p2() {
    add_ln703_3081_fu_13020327_p2 = (!zext_ln703_400_fu_13020323_p1.read().is_01() || !zext_ln1118_1589_fu_12978725_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_400_fu_13020323_p1.read()) + sc_biguint<12>(zext_ln1118_1589_fu_12978725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3082_fu_13035280_p2() {
    add_ln703_3082_fu_13035280_p2 = (!zext_ln703_401_fu_13035277_p1.read().is_01() || !add_ln703_3079_reg_13042660.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_401_fu_13035277_p1.read()) + sc_biguint<14>(add_ln703_3079_reg_13042660.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3083_fu_13035285_p2() {
    add_ln703_3083_fu_13035285_p2 = (!add_ln703_3082_fu_13035280_p2.read().is_01() || !zext_ln708_654_fu_13029166_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3082_fu_13035280_p2.read()) + sc_biguint<14>(zext_ln708_654_fu_13029166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3084_fu_13020333_p2() {
    add_ln703_3084_fu_13020333_p2 = (!zext_ln708_656_fu_12978821_p1.read().is_01() || !trunc_ln1118_50_fu_12978831_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_656_fu_12978821_p1.read()) + sc_biguint<10>(trunc_ln1118_50_fu_12978831_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3085_fu_13020343_p2() {
    add_ln703_3085_fu_13020343_p2 = (!zext_ln703_402_fu_13020339_p1.read().is_01() || !zext_ln708_655_fu_12978807_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_402_fu_13020339_p1.read()) + sc_biguint<11>(zext_ln708_655_fu_12978807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3086_fu_13035298_p2() {
    add_ln703_3086_fu_13035298_p2 = (!zext_ln703_403_fu_13035295_p1.read().is_01() || !sext_ln703_1778_fu_13035291_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_403_fu_13035295_p1.read()) + sc_bigint<15>(sext_ln703_1778_fu_13035291_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3087_fu_13020349_p2() {
    add_ln703_3087_fu_13020349_p2 = (!zext_ln1118_1591_fu_12978913_p1.read().is_01() || !sext_ln1118_957_fu_12978841_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1591_fu_12978913_p1.read()) + sc_bigint<12>(sext_ln1118_957_fu_12978841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3088_fu_13020359_p2() {
    add_ln703_3088_fu_13020359_p2 = (!sext_ln703_1779_fu_13020355_p1.read().is_01() || !zext_ln708_657_fu_12978889_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1779_fu_13020355_p1.read()) + sc_biguint<13>(zext_ln708_657_fu_12978889_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3089_fu_13020365_p2() {
    add_ln703_3089_fu_13020365_p2 = (!sext_ln1118_956_fu_12978777_p1.read().is_01() || !sext_ln708_133_fu_12978869_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_956_fu_12978777_p1.read()) + sc_bigint<9>(sext_ln708_133_fu_12978869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3090_fu_13020375_p2() {
    add_ln703_3090_fu_13020375_p2 = (!sext_ln703_1780_fu_13020371_p1.read().is_01() || !sext_ln1118_958_fu_12978855_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1780_fu_13020371_p1.read()) + sc_bigint<11>(sext_ln1118_958_fu_12978855_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3091_fu_13020385_p2() {
    add_ln703_3091_fu_13020385_p2 = (!sext_ln703_1781_fu_13020381_p1.read().is_01() || !add_ln703_3088_fu_13020359_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1781_fu_13020381_p1.read()) + sc_biguint<13>(add_ln703_3088_fu_13020359_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3092_fu_13035307_p2() {
    add_ln703_3092_fu_13035307_p2 = (!sext_ln703_1782_fu_13035304_p1.read().is_01() || !add_ln703_3086_fu_13035298_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1782_fu_13035304_p1.read()) + sc_biguint<15>(add_ln703_3086_fu_13035298_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3093_fu_13020391_p2() {
    add_ln703_3093_fu_13020391_p2 = (!sext_ln203_612_fu_12979111_p1.read().is_01() || !sext_ln203_579_fu_12975989_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_612_fu_12979111_p1.read()) + sc_bigint<12>(sext_ln203_579_fu_12975989_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3094_fu_13035316_p2() {
    add_ln703_3094_fu_13035316_p2 = (!sext_ln703_1783_fu_13035313_p1.read().is_01() || !add_ln703_3092_fu_13035307_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1783_fu_13035313_p1.read()) + sc_biguint<15>(add_ln703_3092_fu_13035307_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3095_fu_13020397_p2() {
    add_ln703_3095_fu_13020397_p2 = (!tmp_680_fu_12964698_p4.read().is_01() || !zext_ln203_220_fu_12978995_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_680_fu_12964698_p4.read()) + sc_biguint<10>(zext_ln203_220_fu_12978995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3096_fu_13020407_p2() {
    add_ln703_3096_fu_13020407_p2 = (!zext_ln708_661_fu_12979037_p1.read().is_01() || !zext_ln708_662_fu_12979155_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_661_fu_12979037_p1.read()) + sc_biguint<11>(zext_ln708_662_fu_12979155_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3097_fu_13020413_p2() {
    add_ln703_3097_fu_13020413_p2 = (!add_ln703_3096_fu_13020407_p2.read().is_01() || !zext_ln703_404_fu_13020403_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3096_fu_13020407_p2.read()) + sc_biguint<11>(zext_ln703_404_fu_13020403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3098_fu_13035325_p2() {
    add_ln703_3098_fu_13035325_p2 = (!zext_ln703_405_fu_13035322_p1.read().is_01() || !add_ln703_3094_fu_13035316_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_405_fu_13035322_p1.read()) + sc_biguint<15>(add_ln703_3094_fu_13035316_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3099_fu_13020419_p2() {
    add_ln703_3099_fu_13020419_p2 = (!sext_ln203_609_fu_12979009_p1.read().is_01() || !sext_ln203_611_fu_12979079_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_609_fu_12979009_p1.read()) + sc_bigint<11>(sext_ln203_611_fu_12979079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3100_fu_13020429_p2() {
    add_ln703_3100_fu_13020429_p2 = (!sext_ln703_1785_fu_13020425_p1.read().is_01() || !sext_ln203_607_fu_12978937_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1785_fu_13020425_p1.read()) + sc_bigint<12>(sext_ln203_607_fu_12978937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3101_fu_13020439_p2() {
    add_ln703_3101_fu_13020439_p2 = (!zext_ln708_659_fu_12978957_p1.read().is_01() || !sext_ln203_608_fu_12978971_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_659_fu_12978957_p1.read()) + sc_bigint<10>(sext_ln203_608_fu_12978971_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3102_fu_13020449_p2() {
    add_ln703_3102_fu_13020449_p2 = (!sext_ln203_610_fu_12979023_p1.read().is_01() || !sext_ln203_613_fu_12979135_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_610_fu_12979023_p1.read()) + sc_bigint<9>(sext_ln203_613_fu_12979135_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3103_fu_13020459_p2() {
    add_ln703_3103_fu_13020459_p2 = (!sext_ln703_1788_fu_13020455_p1.read().is_01() || !sext_ln703_1787_fu_13020445_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1788_fu_13020455_p1.read()) + sc_bigint<11>(sext_ln703_1787_fu_13020445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3104_fu_13020469_p2() {
    add_ln703_3104_fu_13020469_p2 = (!sext_ln703_1789_fu_13020465_p1.read().is_01() || !sext_ln703_1786_fu_13020435_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1789_fu_13020465_p1.read()) + sc_bigint<13>(sext_ln703_1786_fu_13020435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3106_fu_13020475_p2() {
    add_ln703_3106_fu_13020475_p2 = (!zext_ln708_663_fu_12979169_p1.read().is_01() || !ap_const_lv8_90.is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_663_fu_12979169_p1.read()) + sc_bigint<8>(ap_const_lv8_90));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3107_fu_13020489_p2() {
    add_ln703_3107_fu_13020489_p2 = (!zext_ln703_406_fu_13020485_p1.read().is_01() || !sext_ln203_495_fu_12966934_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_406_fu_13020485_p1.read()) + sc_bigint<12>(sext_ln203_495_fu_12966934_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3108_fu_13020499_p2() {
    add_ln703_3108_fu_13020499_p2 = (!sext_ln1118_961_fu_12979203_p1.read().is_01() || !sext_ln1118_962_fu_12979217_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_961_fu_12979203_p1.read()) + sc_bigint<12>(sext_ln1118_962_fu_12979217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3109_fu_13020509_p2() {
    add_ln703_3109_fu_13020509_p2 = (!sext_ln703_1792_fu_13020505_p1.read().is_01() || !sext_ln703_932_fu_13020495_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1792_fu_13020505_p1.read()) + sc_bigint<13>(sext_ln703_932_fu_13020495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3110_fu_13020519_p2() {
    add_ln703_3110_fu_13020519_p2 = (!sext_ln703_1592_fu_13018049_p1.read().is_01() || !sext_ln703_933_fu_13020515_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1592_fu_13018049_p1.read()) + sc_bigint<14>(sext_ln703_933_fu_13020515_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3111_fu_13020525_p2() {
    add_ln703_3111_fu_13020525_p2 = (!sext_ln1118_963_fu_12979231_p1.read().is_01() || !sext_ln1118_964_fu_12979275_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_963_fu_12979231_p1.read()) + sc_bigint<11>(sext_ln1118_964_fu_12979275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3112_fu_13020531_p2() {
    add_ln703_3112_fu_13020531_p2 = (!add_ln703_3111_fu_13020525_p2.read().is_01() || !zext_ln708_664_fu_12979251_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3111_fu_13020525_p2.read()) + sc_biguint<11>(zext_ln708_664_fu_12979251_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3113_fu_13035347_p2() {
    add_ln703_3113_fu_13035347_p2 = (!sext_ln703_1793_fu_13035344_p1.read().is_01() || !add_ln703_3110_reg_13042695.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1793_fu_13035344_p1.read()) + sc_biguint<14>(add_ln703_3110_reg_13042695.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3114_fu_13035352_p2() {
    add_ln703_3114_fu_13035352_p2 = (!add_ln703_3113_fu_13035347_p2.read().is_01() || !sext_ln203_614_fu_13029169_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3113_fu_13035347_p2.read()) + sc_bigint<14>(sext_ln203_614_fu_13029169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3115_fu_13020537_p2() {
    add_ln703_3115_fu_13020537_p2 = (!sext_ln1118_966_fu_12979317_p1.read().is_01() || !zext_ln708_665_fu_12979289_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_966_fu_12979317_p1.read()) + sc_biguint<12>(zext_ln708_665_fu_12979289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3116_fu_13035365_p2() {
    add_ln703_3116_fu_13035365_p2 = (!sext_ln703_1795_fu_13035362_p1.read().is_01() || !sext_ln703_1794_fu_13035358_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1795_fu_13035362_p1.read()) + sc_bigint<15>(sext_ln703_1794_fu_13035358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3117_fu_13020543_p2() {
    add_ln703_3117_fu_13020543_p2 = (!zext_ln708_586_fu_12973897_p1.read().is_01() || !sext_ln1118_965_fu_12979303_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_586_fu_12973897_p1.read()) + sc_bigint<12>(sext_ln1118_965_fu_12979303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3118_fu_13020549_p2() {
    add_ln703_3118_fu_13020549_p2 = (!sext_ln1118_916_fu_12976403_p1.read().is_01() || !sext_ln1118_967_fu_12979321_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_916_fu_12976403_p1.read()) + sc_bigint<10>(sext_ln1118_967_fu_12979321_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3119_fu_13020559_p2() {
    add_ln703_3119_fu_13020559_p2 = (!sext_ln703_1796_fu_13020555_p1.read().is_01() || !sext_ln1118_968_fu_12979345_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1796_fu_13020555_p1.read()) + sc_bigint<11>(sext_ln1118_968_fu_12979345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3120_fu_13020569_p2() {
    add_ln703_3120_fu_13020569_p2 = (!sext_ln703_1797_fu_13020565_p1.read().is_01() || !add_ln703_3117_fu_13020543_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1797_fu_13020565_p1.read()) + sc_biguint<12>(add_ln703_3117_fu_13020543_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3121_fu_13035374_p2() {
    add_ln703_3121_fu_13035374_p2 = (!sext_ln703_1798_fu_13035371_p1.read().is_01() || !add_ln703_3116_fu_13035365_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1798_fu_13035371_p1.read()) + sc_biguint<15>(add_ln703_3116_fu_13035365_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3122_fu_13035380_p2() {
    add_ln703_3122_fu_13035380_p2 = (!add_ln703_3121_fu_13035374_p2.read().is_01() || !sext_ln203_615_fu_13029172_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3121_fu_13035374_p2.read()) + sc_bigint<15>(sext_ln203_615_fu_13029172_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3123_fu_13020575_p2() {
    add_ln703_3123_fu_13020575_p2 = (!sext_ln1118_807_fu_12968897_p1.read().is_01() || !sext_ln203_616_fu_12979379_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_807_fu_12968897_p1.read()) + sc_bigint<12>(sext_ln203_616_fu_12979379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3124_fu_13035389_p2() {
    add_ln703_3124_fu_13035389_p2 = (!sext_ln703_1799_fu_13035386_p1.read().is_01() || !add_ln703_3122_fu_13035380_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1799_fu_13035386_p1.read()) + sc_biguint<15>(add_ln703_3122_fu_13035380_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3125_fu_13020581_p2() {
    add_ln703_3125_fu_13020581_p2 = (!sext_ln203_618_fu_12979413_p1.read().is_01() || !sext_ln203_619_fu_12979433_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_618_fu_12979413_p1.read()) + sc_bigint<12>(sext_ln203_619_fu_12979433_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3126_fu_13020591_p2() {
    add_ln703_3126_fu_13020591_p2 = (!sext_ln203_620_fu_12979447_p1.read().is_01() || !sext_ln203_621_fu_12979493_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_620_fu_12979447_p1.read()) + sc_bigint<12>(sext_ln203_621_fu_12979493_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3127_fu_13020601_p2() {
    add_ln703_3127_fu_13020601_p2 = (!sext_ln703_1802_fu_13020597_p1.read().is_01() || !sext_ln703_1801_fu_13020587_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1802_fu_13020597_p1.read()) + sc_bigint<13>(sext_ln703_1801_fu_13020587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3128_fu_13035402_p2() {
    add_ln703_3128_fu_13035402_p2 = (!sext_ln703_1803_fu_13035399_p1.read().is_01() || !sext_ln703_1800_fu_13035395_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1803_fu_13035399_p1.read()) + sc_bigint<16>(sext_ln703_1800_fu_13035395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3129_fu_13020607_p2() {
    add_ln703_3129_fu_13020607_p2 = (!sext_ln203_623_fu_12979549_p1.read().is_01() || !sext_ln203_624_fu_12979599_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_623_fu_12979549_p1.read()) + sc_bigint<12>(sext_ln203_624_fu_12979599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3130_fu_13020617_p2() {
    add_ln703_3130_fu_13020617_p2 = (!zext_ln203_221_fu_12979581_p1.read().is_01() || !zext_ln203_222_fu_12979585_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_221_fu_12979581_p1.read()) + sc_biguint<10>(zext_ln203_222_fu_12979585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3131_fu_13020627_p2() {
    add_ln703_3131_fu_13020627_p2 = (!zext_ln703_407_fu_13020623_p1.read().is_01() || !sext_ln703_1804_fu_13020613_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_407_fu_13020623_p1.read()) + sc_bigint<13>(sext_ln703_1804_fu_13020613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3132_fu_13020633_p2() {
    add_ln703_3132_fu_13020633_p2 = (!zext_ln708_666_fu_12979633_p1.read().is_01() || !sext_ln203_622_fu_12979525_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_666_fu_12979633_p1.read()) + sc_bigint<11>(sext_ln203_622_fu_12979525_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3133_fu_13020639_p2() {
    add_ln703_3133_fu_13020639_p2 = (!sext_ln203_617_fu_12979399_p1.read().is_01() || !sext_ln203_625_fu_12979619_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_617_fu_12979399_p1.read()) + sc_bigint<9>(sext_ln203_625_fu_12979619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3134_fu_13020649_p2() {
    add_ln703_3134_fu_13020649_p2 = (!sext_ln703_1805_fu_13020645_p1.read().is_01() || !add_ln703_3132_fu_13020633_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1805_fu_13020645_p1.read()) + sc_biguint<11>(add_ln703_3132_fu_13020633_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3135_fu_13020659_p2() {
    add_ln703_3135_fu_13020659_p2 = (!sext_ln703_1806_fu_13020655_p1.read().is_01() || !add_ln703_3131_fu_13020627_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1806_fu_13020655_p1.read()) + sc_biguint<13>(add_ln703_3131_fu_13020627_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3137_fu_13020665_p2() {
    add_ln703_3137_fu_13020665_p2 = (!sext_ln203_495_fu_12966934_p1.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_495_fu_12966934_p1.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3138_fu_13020671_p2() {
    add_ln703_3138_fu_13020671_p2 = (!add_ln703_3137_fu_13020665_p2.read().is_01() || !zext_ln1116_147_fu_12979681_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3137_fu_13020665_p2.read()) + sc_biguint<12>(zext_ln1116_147_fu_12979681_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3139_fu_13020681_p2() {
    add_ln703_3139_fu_13020681_p2 = (!sext_ln708_134_fu_12979657_p1.read().is_01() || !sext_ln1118_970_fu_12979695_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_134_fu_12979657_p1.read()) + sc_bigint<11>(sext_ln1118_970_fu_12979695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3140_fu_13020691_p2() {
    add_ln703_3140_fu_13020691_p2 = (!sext_ln703_1809_fu_13020687_p1.read().is_01() || !zext_ln1116_148_fu_12979709_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1809_fu_13020687_p1.read()) + sc_biguint<12>(zext_ln1116_148_fu_12979709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3141_fu_13020701_p2() {
    add_ln703_3141_fu_13020701_p2 = (!sext_ln703_1810_fu_13020697_p1.read().is_01() || !sext_ln703_1808_fu_13020677_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1810_fu_13020697_p1.read()) + sc_bigint<13>(sext_ln703_1808_fu_13020677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3142_fu_13020707_p2() {
    add_ln703_3142_fu_13020707_p2 = (!add_ln703_3141_fu_13020701_p2.read().is_01() || !sext_ln1116_118_fu_12979717_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3141_fu_13020701_p2.read()) + sc_bigint<13>(sext_ln1116_118_fu_12979717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3143_fu_13020713_p2() {
    add_ln703_3143_fu_13020713_p2 = (!sext_ln1118_885_fu_12974942_p1.read().is_01() || !sext_ln1116_117_fu_12979713_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_885_fu_12974942_p1.read()) + sc_bigint<11>(sext_ln1116_117_fu_12979713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3144_fu_13020723_p2() {
    add_ln703_3144_fu_13020723_p2 = (!sext_ln703_1812_fu_13020719_p1.read().is_01() || !sext_ln1116_119_fu_12979731_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1812_fu_13020719_p1.read()) + sc_bigint<12>(sext_ln1116_119_fu_12979731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3145_fu_13035423_p2() {
    add_ln703_3145_fu_13035423_p2 = (!sext_ln703_1813_fu_13035420_p1.read().is_01() || !sext_ln703_1811_fu_13035417_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1813_fu_13035420_p1.read()) + sc_bigint<14>(sext_ln703_1811_fu_13035417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3146_fu_13035429_p2() {
    add_ln703_3146_fu_13035429_p2 = (!add_ln703_3145_fu_13035423_p2.read().is_01() || !sext_ln1118_825_fu_13029118_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3145_fu_13035423_p2.read()) + sc_bigint<14>(sext_ln1118_825_fu_13029118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3147_fu_13020729_p2() {
    add_ln703_3147_fu_13020729_p2 = (!sext_ln708_136_fu_12979833_p1.read().is_01() || !zext_ln1116_149_fu_12979773_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_136_fu_12979833_p1.read()) + sc_biguint<12>(zext_ln1116_149_fu_12979773_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3148_fu_13020739_p2() {
    add_ln703_3148_fu_13020739_p2 = (!sext_ln703_1815_fu_13020735_p1.read().is_01() || !sext_ln1116_101_fu_12970702_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1815_fu_13020735_p1.read()) + sc_bigint<13>(sext_ln1116_101_fu_12970702_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3149_fu_13035442_p2() {
    add_ln703_3149_fu_13035442_p2 = (!sext_ln703_1816_fu_13035439_p1.read().is_01() || !sext_ln703_1814_fu_13035435_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1816_fu_13035439_p1.read()) + sc_bigint<15>(sext_ln703_1814_fu_13035435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3150_fu_13020745_p2() {
    add_ln703_3150_fu_13020745_p2 = (!zext_ln708_668_fu_12979819_p1.read().is_01() || !sext_ln1116_120_fu_12979769_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_668_fu_12979819_p1.read()) + sc_bigint<11>(sext_ln1116_120_fu_12979769_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3151_fu_13020755_p2() {
    add_ln703_3151_fu_13020755_p2 = (!zext_ln1116_150_fu_12979791_p1.read().is_01() || !sext_ln1118_971_fu_12979755_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln1116_150_fu_12979791_p1.read()) + sc_bigint<7>(sext_ln1118_971_fu_12979755_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3152_fu_13020765_p2() {
    add_ln703_3152_fu_13020765_p2 = (!sext_ln703_1818_fu_13020761_p1.read().is_01() || !sext_ln708_135_fu_12979777_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1818_fu_13020761_p1.read()) + sc_bigint<11>(sext_ln708_135_fu_12979777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3153_fu_13020775_p2() {
    add_ln703_3153_fu_13020775_p2 = (!sext_ln703_1819_fu_13020771_p1.read().is_01() || !sext_ln703_1817_fu_13020751_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1819_fu_13020771_p1.read()) + sc_bigint<12>(sext_ln703_1817_fu_13020751_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3154_fu_13035451_p2() {
    add_ln703_3154_fu_13035451_p2 = (!sext_ln703_1820_fu_13035448_p1.read().is_01() || !add_ln703_3149_fu_13035442_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1820_fu_13035448_p1.read()) + sc_biguint<15>(add_ln703_3149_fu_13035442_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3155_fu_13020781_p2() {
    add_ln703_3155_fu_13020781_p2 = (!zext_ln203_223_fu_12979865_p1.read().is_01() || !sext_ln203_628_fu_12979913_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_223_fu_12979865_p1.read()) + sc_bigint<12>(sext_ln203_628_fu_12979913_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3156_fu_13035460_p2() {
    add_ln703_3156_fu_13035460_p2 = (!sext_ln703_1821_fu_13035457_p1.read().is_01() || !add_ln703_3154_fu_13035451_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1821_fu_13035457_p1.read()) + sc_biguint<15>(add_ln703_3154_fu_13035451_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3157_fu_13020787_p2() {
    add_ln703_3157_fu_13020787_p2 = (!sext_ln203_629_fu_12979941_p1.read().is_01() || !sext_ln203_568_fu_12975298_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_629_fu_12979941_p1.read()) + sc_bigint<12>(sext_ln203_568_fu_12975298_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3158_fu_13020797_p2() {
    add_ln703_3158_fu_13020797_p2 = (!sext_ln203_631_fu_12979983_p1.read().is_01() || !sext_ln203_632_fu_12979997_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_631_fu_12979983_p1.read()) + sc_bigint<12>(sext_ln203_632_fu_12979997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3159_fu_13020807_p2() {
    add_ln703_3159_fu_13020807_p2 = (!sext_ln703_1824_fu_13020803_p1.read().is_01() || !sext_ln703_1823_fu_13020793_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1824_fu_13020803_p1.read()) + sc_bigint<13>(sext_ln703_1823_fu_13020793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3160_fu_13035473_p2() {
    add_ln703_3160_fu_13035473_p2 = (!sext_ln703_1825_fu_13035470_p1.read().is_01() || !sext_ln703_1822_fu_13035466_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1825_fu_13035470_p1.read()) + sc_bigint<16>(sext_ln703_1822_fu_13035466_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3161_fu_13020813_p2() {
    add_ln703_3161_fu_13020813_p2 = (!zext_ln708_670_fu_12979979_p1.read().is_01() || !zext_ln708_671_fu_12980011_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_670_fu_12979979_p1.read()) + sc_biguint<11>(zext_ln708_671_fu_12980011_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3162_fu_13020823_p2() {
    add_ln703_3162_fu_13020823_p2 = (!zext_ln203_225_fu_12980055_p1.read().is_01() || !sext_ln203_626_fu_12979885_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_225_fu_12980055_p1.read()) + sc_bigint<12>(sext_ln203_626_fu_12979885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3163_fu_13020833_p2() {
    add_ln703_3163_fu_13020833_p2 = (!sext_ln703_1826_fu_13020829_p1.read().is_01() || !zext_ln703_408_fu_13020819_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1826_fu_13020829_p1.read()) + sc_biguint<13>(zext_ln703_408_fu_13020819_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3164_fu_13020843_p2() {
    add_ln703_3164_fu_13020843_p2 = (!sext_ln203_627_fu_12979899_p1.read().is_01() || !sext_ln203_630_fu_12979965_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_627_fu_12979899_p1.read()) + sc_bigint<11>(sext_ln203_630_fu_12979965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3165_fu_13020853_p2() {
    add_ln703_3165_fu_13020853_p2 = (!sext_ln203_633_fu_12980041_p1.read().is_01() || !zext_ln203_224_fu_12979927_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_633_fu_12980041_p1.read()) + sc_biguint<11>(zext_ln203_224_fu_12979927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3166_fu_13020863_p2() {
    add_ln703_3166_fu_13020863_p2 = (!sext_ln703_1829_fu_13020859_p1.read().is_01() || !sext_ln703_1828_fu_13020849_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1829_fu_13020859_p1.read()) + sc_bigint<12>(sext_ln703_1828_fu_13020849_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3167_fu_13020873_p2() {
    add_ln703_3167_fu_13020873_p2 = (!sext_ln703_1830_fu_13020869_p1.read().is_01() || !sext_ln703_1827_fu_13020839_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1830_fu_13020869_p1.read()) + sc_bigint<14>(sext_ln703_1827_fu_13020839_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3169_fu_13020889_p2() {
    add_ln703_3169_fu_13020889_p2 = (!zext_ln1118_1608_fu_12980085_p1.read().is_01() || !sext_ln703_1832_fu_13020885_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1608_fu_12980085_p1.read()) + sc_bigint<10>(sext_ln703_1832_fu_13020885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3170_fu_13020899_p2() {
    add_ln703_3170_fu_13020899_p2 = (!sext_ln703_1833_fu_13020895_p1.read().is_01() || !sext_ln1118_801_fu_12968556_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1833_fu_13020895_p1.read()) + sc_bigint<12>(sext_ln1118_801_fu_12968556_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3171_fu_13020909_p2() {
    add_ln703_3171_fu_13020909_p2 = (!sext_ln703_941_fu_13020905_p1.read().is_01() || !sext_ln203_634_fu_12980137_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_941_fu_13020905_p1.read()) + sc_bigint<13>(sext_ln203_634_fu_12980137_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3172_fu_13020915_p2() {
    add_ln703_3172_fu_13020915_p2 = (!zext_ln708_672_fu_12980151_p1.read().is_01() || !sext_ln1118_973_fu_12980099_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_672_fu_12980151_p1.read()) + sc_bigint<11>(sext_ln1118_973_fu_12980099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3173_fu_13020925_p2() {
    add_ln703_3173_fu_13020925_p2 = (!sext_ln703_1834_fu_13020921_p1.read().is_01() || !zext_ln1118_1610_fu_12980123_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1834_fu_13020921_p1.read()) + sc_biguint<12>(zext_ln1118_1610_fu_12980123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3174_fu_13020935_p2() {
    add_ln703_3174_fu_13020935_p2 = (!sext_ln703_1835_fu_13020931_p1.read().is_01() || !add_ln703_3171_fu_13020909_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1835_fu_13020931_p1.read()) + sc_biguint<13>(add_ln703_3171_fu_13020909_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3175_fu_13020941_p2() {
    add_ln703_3175_fu_13020941_p2 = (!sext_ln708_137_fu_12980179_p1.read().is_01() || !sext_ln1118_975_fu_12980233_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_137_fu_12980179_p1.read()) + sc_bigint<12>(sext_ln1118_975_fu_12980233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3176_fu_13035494_p2() {
    add_ln703_3176_fu_13035494_p2 = (!sext_ln703_1836_fu_13035491_p1.read().is_01() || !sext_ln703_942_fu_13035488_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1836_fu_13035491_p1.read()) + sc_bigint<14>(sext_ln703_942_fu_13035488_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3177_fu_13020947_p2() {
    add_ln703_3177_fu_13020947_p2 = (!zext_ln1118_1611_fu_12980199_p1.read().is_01() || !trunc_ln1118_51_fu_12980213_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_1611_fu_12980199_p1.read()) + sc_biguint<8>(trunc_ln1118_51_fu_12980213_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3178_fu_13020957_p2() {
    add_ln703_3178_fu_13020957_p2 = (!zext_ln708_673_fu_12980253_p1.read().is_01() || !sext_ln1118_974_fu_12980165_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_673_fu_12980253_p1.read()) + sc_bigint<11>(sext_ln1118_974_fu_12980165_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3179_fu_13020963_p2() {
    add_ln703_3179_fu_13020963_p2 = (!add_ln703_3178_fu_13020957_p2.read().is_01() || !zext_ln703_409_fu_13020953_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3178_fu_13020957_p2.read()) + sc_biguint<11>(zext_ln703_409_fu_13020953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3180_fu_13035503_p2() {
    add_ln703_3180_fu_13035503_p2 = (!sext_ln703_1837_fu_13035500_p1.read().is_01() || !add_ln703_3176_fu_13035494_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1837_fu_13035500_p1.read()) + sc_biguint<14>(add_ln703_3176_fu_13035494_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3181_fu_13035509_p2() {
    add_ln703_3181_fu_13035509_p2 = (!add_ln703_3180_fu_13035503_p2.read().is_01() || !sext_ln1118_976_fu_13029175_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3180_fu_13035503_p2.read()) + sc_bigint<14>(sext_ln1118_976_fu_13029175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3182_fu_13020969_p2() {
    add_ln703_3182_fu_13020969_p2 = (!zext_ln1118_1614_fu_12980291_p1.read().is_01() || !zext_ln1118_1615_fu_12980311_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1614_fu_12980291_p1.read()) + sc_biguint<10>(zext_ln1118_1615_fu_12980311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3183_fu_13020979_p2() {
    add_ln703_3183_fu_13020979_p2 = (!zext_ln703_410_fu_13020975_p1.read().is_01() || !sext_ln1118_977_fu_12980267_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_410_fu_13020975_p1.read()) + sc_bigint<12>(sext_ln1118_977_fu_12980267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3184_fu_13035522_p2() {
    add_ln703_3184_fu_13035522_p2 = (!sext_ln703_1839_fu_13035519_p1.read().is_01() || !sext_ln703_1838_fu_13035515_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1839_fu_13035519_p1.read()) + sc_bigint<15>(sext_ln703_1838_fu_13035515_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3185_fu_13020985_p2() {
    add_ln703_3185_fu_13020985_p2 = (!zext_ln1118_1618_fu_12980405_p1.read().is_01() || !sext_ln1118_978_fu_12980325_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1618_fu_12980405_p1.read()) + sc_bigint<12>(sext_ln1118_978_fu_12980325_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3186_fu_13020995_p2() {
    add_ln703_3186_fu_13020995_p2 = (!sext_ln703_1840_fu_13020991_p1.read().is_01() || !zext_ln1118_1616_fu_12980329_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1840_fu_13020991_p1.read()) + sc_biguint<13>(zext_ln1118_1616_fu_12980329_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3187_fu_13021001_p2() {
    add_ln703_3187_fu_13021001_p2 = (!sext_ln1118_927_fu_12976911_p1.read().is_01() || !sext_ln1118_981_fu_12980385_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_927_fu_12976911_p1.read()) + sc_bigint<9>(sext_ln1118_981_fu_12980385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3188_fu_13021011_p2() {
    add_ln703_3188_fu_13021011_p2 = (!sext_ln703_1841_fu_13021007_p1.read().is_01() || !sext_ln1118_979_fu_12980361_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1841_fu_13021007_p1.read()) + sc_bigint<10>(sext_ln1118_979_fu_12980361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3189_fu_13021021_p2() {
    add_ln703_3189_fu_13021021_p2 = (!sext_ln703_1842_fu_13021017_p1.read().is_01() || !add_ln703_3186_fu_13020995_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1842_fu_13021017_p1.read()) + sc_biguint<13>(add_ln703_3186_fu_13020995_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3190_fu_13035531_p2() {
    add_ln703_3190_fu_13035531_p2 = (!sext_ln703_1843_fu_13035528_p1.read().is_01() || !add_ln703_3184_fu_13035522_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1843_fu_13035528_p1.read()) + sc_biguint<15>(add_ln703_3184_fu_13035522_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3191_fu_13035537_p2() {
    add_ln703_3191_fu_13035537_p2 = (!add_ln703_3190_fu_13035531_p2.read().is_01() || !sext_ln203_637_fu_13029178_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3190_fu_13035531_p2.read()) + sc_bigint<15>(sext_ln203_637_fu_13029178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3192_fu_13021027_p2() {
    add_ln703_3192_fu_13021027_p2 = (!zext_ln203_227_fu_12980507_p1.read().is_01() || !zext_ln203_229_fu_12980551_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_227_fu_12980507_p1.read()) + sc_biguint<10>(zext_ln203_229_fu_12980551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3193_fu_13021033_p2() {
    add_ln703_3193_fu_13021033_p2 = (!add_ln703_3192_fu_13021027_p2.read().is_01() || !zext_ln203_226_fu_12980429_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3192_fu_13021027_p2.read()) + sc_biguint<10>(zext_ln203_226_fu_12980429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3194_fu_13035546_p2() {
    add_ln703_3194_fu_13035546_p2 = (!zext_ln703_411_fu_13035543_p1.read().is_01() || !add_ln703_3191_fu_13035537_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_411_fu_13035543_p1.read()) + sc_biguint<15>(add_ln703_3191_fu_13035537_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3195_fu_13021039_p2() {
    add_ln703_3195_fu_13021039_p2 = (!sext_ln203_636_fu_12980469_p1.read().is_01() || !sext_ln203_638_fu_12980493_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_636_fu_12980469_p1.read()) + sc_bigint<11>(sext_ln203_638_fu_12980493_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3196_fu_13021049_p2() {
    add_ln703_3196_fu_13021049_p2 = (!sext_ln203_535_fu_12971625_p1.read().is_01() || !sext_ln203_635_fu_12980433_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_535_fu_12971625_p1.read()) + sc_bigint<9>(sext_ln203_635_fu_12980433_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3197_fu_13021055_p2() {
    add_ln703_3197_fu_13021055_p2 = (!add_ln703_3196_fu_13021049_p2.read().is_01() || !zext_ln203_228_fu_12980527_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_3196_fu_13021049_p2.read()) + sc_biguint<9>(zext_ln203_228_fu_12980527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3198_fu_13021065_p2() {
    add_ln703_3198_fu_13021065_p2 = (!sext_ln703_1845_fu_13021061_p1.read().is_01() || !sext_ln703_1844_fu_13021045_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1845_fu_13021061_p1.read()) + sc_bigint<12>(sext_ln703_1844_fu_13021045_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3200_fu_13021071_p2() {
    add_ln703_3200_fu_13021071_p2 = (!sext_ln203_639_fu_12980575_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_639_fu_12980575_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3201_fu_13021081_p2() {
    add_ln703_3201_fu_13021081_p2 = (!sext_ln703_945_fu_13021077_p1.read().is_01() || !sext_ln203_640_fu_12980613_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_945_fu_13021077_p1.read()) + sc_bigint<13>(sext_ln203_640_fu_12980613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3202_fu_13021087_p2() {
    add_ln703_3202_fu_13021087_p2 = (!sext_ln708_138_fu_12980595_p1.read().is_01() || !zext_ln1118_1623_fu_12980609_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_138_fu_12980595_p1.read()) + sc_biguint<10>(zext_ln1118_1623_fu_12980609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3203_fu_13021097_p2() {
    add_ln703_3203_fu_13021097_p2 = (!sext_ln703_1848_fu_13021093_p1.read().is_01() || !add_ln703_3201_fu_13021081_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1848_fu_13021093_p1.read()) + sc_biguint<13>(add_ln703_3201_fu_13021081_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3204_fu_13021107_p2() {
    add_ln703_3204_fu_13021107_p2 = (!sext_ln703_946_fu_13021103_p1.read().is_01() || !sext_ln203_641_fu_12980665_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_946_fu_13021103_p1.read()) + sc_bigint<14>(sext_ln203_641_fu_12980665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3205_fu_13021113_p2() {
    add_ln703_3205_fu_13021113_p2 = (!sext_ln1118_982_fu_12980679_p1.read().is_01() || !sext_ln1118_983_fu_12980699_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_982_fu_12980679_p1.read()) + sc_bigint<12>(sext_ln1118_983_fu_12980699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3206_fu_13021123_p2() {
    add_ln703_3206_fu_13021123_p2 = (!sext_ln703_1849_fu_13021119_p1.read().is_01() || !add_ln703_3204_fu_13021107_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1849_fu_13021119_p1.read()) + sc_biguint<14>(add_ln703_3204_fu_13021107_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3207_fu_13021129_p2() {
    add_ln703_3207_fu_13021129_p2 = (!zext_ln708_675_fu_12980641_p1.read().is_01() || !zext_ln708_676_fu_12980713_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_675_fu_12980641_p1.read()) + sc_biguint<11>(zext_ln708_676_fu_12980713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3208_fu_13021139_p2() {
    add_ln703_3208_fu_13021139_p2 = (!zext_ln708_678_fu_12980731_p1.read().is_01() || !sext_ln708_139_fu_12980627_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_678_fu_12980731_p1.read()) + sc_bigint<11>(sext_ln708_139_fu_12980627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3209_fu_13021145_p2() {
    add_ln703_3209_fu_13021145_p2 = (!add_ln703_3208_fu_13021139_p2.read().is_01() || !zext_ln708_677_fu_12980727_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3208_fu_13021139_p2.read()) + sc_biguint<11>(zext_ln708_677_fu_12980727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3210_fu_13021155_p2() {
    add_ln703_3210_fu_13021155_p2 = (!sext_ln703_1850_fu_13021151_p1.read().is_01() || !zext_ln703_412_fu_13021135_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1850_fu_13021151_p1.read()) + sc_biguint<13>(zext_ln703_412_fu_13021135_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3211_fu_13035568_p2() {
    add_ln703_3211_fu_13035568_p2 = (!sext_ln703_1851_fu_13035565_p1.read().is_01() || !add_ln703_3206_reg_13042800.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1851_fu_13035565_p1.read()) + sc_biguint<14>(add_ln703_3206_reg_13042800.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3212_fu_13021161_p2() {
    add_ln703_3212_fu_13021161_p2 = (!zext_ln708_679_fu_12980745_p1.read().is_01() || !zext_ln708_681_fu_12980777_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_679_fu_12980745_p1.read()) + sc_biguint<11>(zext_ln708_681_fu_12980777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3213_fu_13035576_p2() {
    add_ln703_3213_fu_13035576_p2 = (!zext_ln703_413_fu_13035573_p1.read().is_01() || !add_ln703_3211_fu_13035568_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_413_fu_13035573_p1.read()) + sc_biguint<14>(add_ln703_3211_fu_13035568_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3214_fu_13021167_p2() {
    add_ln703_3214_fu_13021167_p2 = (!trunc_ln1118_52_fu_12980843_p4.read().is_01() || !zext_ln1118_1627_fu_12980873_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_52_fu_12980843_p4.read()) + sc_biguint<10>(zext_ln1118_1627_fu_12980873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3215_fu_13021177_p2() {
    add_ln703_3215_fu_13021177_p2 = (!zext_ln703_414_fu_13021173_p1.read().is_01() || !zext_ln708_683_fu_12980833_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_414_fu_13021173_p1.read()) + sc_biguint<11>(zext_ln708_683_fu_12980833_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3216_fu_13035589_p2() {
    add_ln703_3216_fu_13035589_p2 = (!zext_ln703_415_fu_13035586_p1.read().is_01() || !sext_ln703_1852_fu_13035582_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_415_fu_13035586_p1.read()) + sc_bigint<15>(sext_ln703_1852_fu_13035582_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3217_fu_13021183_p2() {
    add_ln703_3217_fu_13021183_p2 = (!sext_ln1118_917_fu_12976431_p1.read().is_01() || !sext_ln1118_985_fu_12980887_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_917_fu_12976431_p1.read()) + sc_bigint<11>(sext_ln1118_985_fu_12980887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3218_fu_13021193_p2() {
    add_ln703_3218_fu_13021193_p2 = (!sext_ln703_1853_fu_13021189_p1.read().is_01() || !zext_ln708_684_fu_12980939_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1853_fu_13021189_p1.read()) + sc_biguint<12>(zext_ln708_684_fu_12980939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3219_fu_13021199_p2() {
    add_ln703_3219_fu_13021199_p2 = (!sext_ln1118_984_fu_12980801_p1.read().is_01() || !sext_ln708_140_fu_12980815_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_984_fu_12980801_p1.read()) + sc_bigint<10>(sext_ln708_140_fu_12980815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3220_fu_13021209_p2() {
    add_ln703_3220_fu_13021209_p2 = (!zext_ln708_682_fu_12980819_p1.read().is_01() || !sext_ln1118_986_fu_12980911_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln708_682_fu_12980819_p1.read()) + sc_bigint<7>(sext_ln1118_986_fu_12980911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3221_fu_13021219_p2() {
    add_ln703_3221_fu_13021219_p2 = (!sext_ln703_1855_fu_13021215_p1.read().is_01() || !sext_ln703_1854_fu_13021205_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1855_fu_13021215_p1.read()) + sc_bigint<11>(sext_ln703_1854_fu_13021205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3222_fu_13021229_p2() {
    add_ln703_3222_fu_13021229_p2 = (!sext_ln703_1856_fu_13021225_p1.read().is_01() || !add_ln703_3218_fu_13021193_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1856_fu_13021225_p1.read()) + sc_biguint<12>(add_ln703_3218_fu_13021193_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3223_fu_13035598_p2() {
    add_ln703_3223_fu_13035598_p2 = (!sext_ln703_1857_fu_13035595_p1.read().is_01() || !add_ln703_3216_fu_13035589_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1857_fu_13035595_p1.read()) + sc_biguint<15>(add_ln703_3216_fu_13035589_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3224_fu_13035604_p2() {
    add_ln703_3224_fu_13035604_p2 = (!add_ln703_3223_fu_13035598_p2.read().is_01() || !zext_ln203_230_fu_13029181_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3223_fu_13035598_p2.read()) + sc_biguint<15>(zext_ln203_230_fu_13029181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3225_fu_13021235_p2() {
    add_ln703_3225_fu_13021235_p2 = (!sext_ln203_644_fu_12981093_p1.read().is_01() || !zext_ln203_231_fu_12980977_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_644_fu_12981093_p1.read()) + sc_biguint<12>(zext_ln203_231_fu_12980977_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3226_fu_13035613_p2() {
    add_ln703_3226_fu_13035613_p2 = (!sext_ln703_1858_fu_13035610_p1.read().is_01() || !add_ln703_3224_fu_13035604_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1858_fu_13035610_p1.read()) + sc_biguint<15>(add_ln703_3224_fu_13035604_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3227_fu_13021241_p2() {
    add_ln703_3227_fu_13021241_p2 = (!zext_ln708_686_fu_12980991_p1.read().is_01() || !zext_ln708_687_fu_12981005_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_686_fu_12980991_p1.read()) + sc_biguint<11>(zext_ln708_687_fu_12981005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3228_fu_13021251_p2() {
    add_ln703_3228_fu_13021251_p2 = (!sext_ln203_643_fu_12981059_p1.read().is_01() || !sext_ln203_642_fu_12981039_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_643_fu_12981059_p1.read()) + sc_bigint<11>(sext_ln203_642_fu_12981039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3229_fu_13021261_p2() {
    add_ln703_3229_fu_13021261_p2 = (!sext_ln703_1860_fu_13021257_p1.read().is_01() || !zext_ln203_232_fu_12981019_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1860_fu_13021257_p1.read()) + sc_biguint<12>(zext_ln203_232_fu_12981019_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3230_fu_13021271_p2() {
    add_ln703_3230_fu_13021271_p2 = (!sext_ln703_1861_fu_13021267_p1.read().is_01() || !zext_ln703_416_fu_13021247_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1861_fu_13021267_p1.read()) + sc_biguint<13>(zext_ln703_416_fu_13021247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3232_fu_13021277_p2() {
    add_ln703_3232_fu_13021277_p2 = (!sext_ln203_645_fu_12981113_p1.read().is_01() || !ap_const_lv12_E78.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_645_fu_12981113_p1.read()) + sc_bigint<12>(ap_const_lv12_E78));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3233_fu_13021287_p2() {
    add_ln703_3233_fu_13021287_p2 = (!sext_ln703_949_fu_13021283_p1.read().is_01() || !sext_ln203_646_fu_12981127_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_949_fu_13021283_p1.read()) + sc_bigint<13>(sext_ln203_646_fu_12981127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3234_fu_13021293_p2() {
    add_ln703_3234_fu_13021293_p2 = (!sext_ln1118_988_fu_12981185_p1.read().is_01() || !zext_ln1118_1633_fu_12981147_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_988_fu_12981185_p1.read()) + sc_biguint<11>(zext_ln1118_1633_fu_12981147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3235_fu_13021299_p2() {
    add_ln703_3235_fu_13021299_p2 = (!add_ln703_3234_fu_13021293_p2.read().is_01() || !zext_ln708_688_fu_12981171_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3234_fu_13021293_p2.read()) + sc_biguint<11>(zext_ln708_688_fu_12981171_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3236_fu_13021309_p2() {
    add_ln703_3236_fu_13021309_p2 = (!sext_ln703_1863_fu_13021305_p1.read().is_01() || !add_ln703_3233_fu_13021287_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1863_fu_13021305_p1.read()) + sc_biguint<13>(add_ln703_3233_fu_13021287_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3237_fu_13021319_p2() {
    add_ln703_3237_fu_13021319_p2 = (!sext_ln1118_989_fu_12981199_p1.read().is_01() || !sext_ln1118_992_fu_12981261_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_989_fu_12981199_p1.read()) + sc_bigint<12>(sext_ln1118_992_fu_12981261_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3238_fu_13021329_p2() {
    add_ln703_3238_fu_13021329_p2 = (!sext_ln703_1864_fu_13021325_p1.read().is_01() || !sext_ln703_950_fu_13021315_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1864_fu_13021325_p1.read()) + sc_bigint<14>(sext_ln703_950_fu_13021315_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3239_fu_13021335_p2() {
    add_ln703_3239_fu_13021335_p2 = (!zext_ln708_689_fu_12981213_p1.read().is_01() || !zext_ln708_610_fu_12975564_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_689_fu_12981213_p1.read()) + sc_biguint<11>(zext_ln708_610_fu_12975564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3240_fu_13021345_p2() {
    add_ln703_3240_fu_13021345_p2 = (!zext_ln708_690_fu_12981275_p1.read().is_01() || !sext_ln1118_991_fu_12981247_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_690_fu_12981275_p1.read()) + sc_bigint<11>(sext_ln1118_991_fu_12981247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3241_fu_13021355_p2() {
    add_ln703_3241_fu_13021355_p2 = (!sext_ln703_1865_fu_13021351_p1.read().is_01() || !zext_ln703_417_fu_13021341_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1865_fu_13021351_p1.read()) + sc_biguint<13>(zext_ln703_417_fu_13021341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3242_fu_13035635_p2() {
    add_ln703_3242_fu_13035635_p2 = (!sext_ln703_1866_fu_13035632_p1.read().is_01() || !add_ln703_3238_reg_13042835.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1866_fu_13035632_p1.read()) + sc_biguint<14>(add_ln703_3238_reg_13042835.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3243_fu_13035640_p2() {
    add_ln703_3243_fu_13035640_p2 = (!add_ln703_3242_fu_13035635_p2.read().is_01() || !sext_ln1118_825_fu_13029118_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3242_fu_13035635_p2.read()) + sc_bigint<14>(sext_ln1118_825_fu_13029118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3244_fu_13021361_p2() {
    add_ln703_3244_fu_13021361_p2 = (!sext_ln1118_815_fu_12969493_p1.read().is_01() || !sext_ln1118_994_fu_12981317_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_815_fu_12969493_p1.read()) + sc_bigint<12>(sext_ln1118_994_fu_12981317_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3245_fu_13021371_p2() {
    add_ln703_3245_fu_13021371_p2 = (!sext_ln703_1868_fu_13021367_p1.read().is_01() || !sext_ln1118_993_fu_12981289_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1868_fu_13021367_p1.read()) + sc_bigint<13>(sext_ln1118_993_fu_12981289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3246_fu_13035653_p2() {
    add_ln703_3246_fu_13035653_p2 = (!sext_ln703_1869_fu_13035650_p1.read().is_01() || !sext_ln703_1867_fu_13035646_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1869_fu_13035650_p1.read()) + sc_bigint<15>(sext_ln703_1867_fu_13035646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3247_fu_13021377_p2() {
    add_ln703_3247_fu_13021377_p2 = (!zext_ln708_594_fu_12974567_p1.read().is_01() || !zext_ln708_691_fu_12981341_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_594_fu_12974567_p1.read()) + sc_biguint<11>(zext_ln708_691_fu_12981341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3248_fu_13021387_p2() {
    add_ln703_3248_fu_13021387_p2 = (!sext_ln708_142_fu_12981375_p1.read().is_01() || !sext_ln708_141_fu_12981303_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_142_fu_12981375_p1.read()) + sc_bigint<11>(sext_ln708_141_fu_12981303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3249_fu_13021397_p2() {
    add_ln703_3249_fu_13021397_p2 = (!sext_ln703_1870_fu_13021393_p1.read().is_01() || !sext_ln1118_995_fu_12981361_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1870_fu_13021393_p1.read()) + sc_bigint<12>(sext_ln1118_995_fu_12981361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3250_fu_13021407_p2() {
    add_ln703_3250_fu_13021407_p2 = (!sext_ln703_1871_fu_13021403_p1.read().is_01() || !zext_ln703_418_fu_13021383_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1871_fu_13021403_p1.read()) + sc_biguint<13>(zext_ln703_418_fu_13021383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3251_fu_13035662_p2() {
    add_ln703_3251_fu_13035662_p2 = (!sext_ln703_1872_fu_13035659_p1.read().is_01() || !add_ln703_3246_fu_13035653_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1872_fu_13035659_p1.read()) + sc_biguint<15>(add_ln703_3246_fu_13035653_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3252_fu_13021413_p2() {
    add_ln703_3252_fu_13021413_p2 = (!zext_ln203_233_fu_12981389_p1.read().is_01() || !sext_ln203_648_fu_12981445_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_233_fu_12981389_p1.read()) + sc_bigint<12>(sext_ln203_648_fu_12981445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3253_fu_13035671_p2() {
    add_ln703_3253_fu_13035671_p2 = (!sext_ln703_1873_fu_13035668_p1.read().is_01() || !add_ln703_3251_fu_13035662_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1873_fu_13035668_p1.read()) + sc_biguint<15>(add_ln703_3251_fu_13035662_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3254_fu_13021419_p2() {
    add_ln703_3254_fu_13021419_p2 = (!sext_ln203_651_fu_12981537_p1.read().is_01() || !zext_ln203_234_fu_12981403_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_651_fu_12981537_p1.read()) + sc_biguint<12>(zext_ln203_234_fu_12981403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3255_fu_13021429_p2() {
    add_ln703_3255_fu_13021429_p2 = (!sext_ln703_1875_fu_13021425_p1.read().is_01() || !sext_ln203_650_fu_12981513_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1875_fu_13021425_p1.read()) + sc_bigint<13>(sext_ln203_650_fu_12981513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3256_fu_13035684_p2() {
    add_ln703_3256_fu_13035684_p2 = (!sext_ln703_1876_fu_13035681_p1.read().is_01() || !sext_ln703_1874_fu_13035677_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1876_fu_13035681_p1.read()) + sc_bigint<16>(sext_ln703_1874_fu_13035677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3257_fu_13021435_p2() {
    add_ln703_3257_fu_13021435_p2 = (!zext_ln203_236_fu_12981489_p1.read().is_01() || !zext_ln203_237_fu_12981551_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_236_fu_12981489_p1.read()) + sc_biguint<10>(zext_ln203_237_fu_12981551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3258_fu_13021441_p2() {
    add_ln703_3258_fu_13021441_p2 = (!add_ln703_3257_fu_13021435_p2.read().is_01() || !zext_ln203_235_fu_12981421_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3257_fu_13021435_p2.read()) + sc_biguint<10>(zext_ln203_235_fu_12981421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3259_fu_13021451_p2() {
    add_ln703_3259_fu_13021451_p2 = (!sext_ln203_649_fu_12981469_p1.read().is_01() || !sext_ln1118_771_fu_12966800_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_649_fu_12981469_p1.read()) + sc_bigint<11>(sext_ln1118_771_fu_12966800_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3260_fu_13021461_p2() {
    add_ln703_3260_fu_13021461_p2 = (!sext_ln703_1877_fu_13021457_p1.read().is_01() || !sext_ln203_647_fu_12981417_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1877_fu_13021457_p1.read()) + sc_bigint<12>(sext_ln203_647_fu_12981417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3261_fu_13021467_p2() {
    add_ln703_3261_fu_13021467_p2 = (!add_ln703_3260_fu_13021461_p2.read().is_01() || !zext_ln703_419_fu_13021447_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3260_fu_13021461_p2.read()) + sc_biguint<12>(zext_ln703_419_fu_13021447_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3263_fu_13021473_p2() {
    add_ln703_3263_fu_13021473_p2 = (!sext_ln203_495_fu_12966934_p1.read().is_01() || !ap_const_lv12_CE0.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_495_fu_12966934_p1.read()) + sc_bigint<12>(ap_const_lv12_CE0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3264_fu_13021479_p2() {
    add_ln703_3264_fu_13021479_p2 = (!tmp_697_fu_12966149_p4.read().is_01() || !zext_ln1118_1642_fu_12981583_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_697_fu_12966149_p4.read()) + sc_biguint<10>(zext_ln1118_1642_fu_12981583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3265_fu_13021489_p2() {
    add_ln703_3265_fu_13021489_p2 = (!zext_ln703_420_fu_13021485_p1.read().is_01() || !add_ln703_3263_fu_13021473_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_420_fu_13021485_p1.read()) + sc_biguint<12>(add_ln703_3263_fu_13021473_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3266_fu_13021495_p2() {
    add_ln703_3266_fu_13021495_p2 = (!zext_ln708_692_fu_12981587_p1.read().is_01() || !sext_ln708_143_fu_12981575_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_692_fu_12981587_p1.read()) + sc_bigint<10>(sext_ln708_143_fu_12981575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3267_fu_13021505_p2() {
    add_ln703_3267_fu_13021505_p2 = (!zext_ln1118_1643_fu_12981601_p1.read().is_01() || !sext_ln1116_121_fu_12981579_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1643_fu_12981601_p1.read()) + sc_bigint<9>(sext_ln1116_121_fu_12981579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3268_fu_13021515_p2() {
    add_ln703_3268_fu_13021515_p2 = (!sext_ln703_1880_fu_13021511_p1.read().is_01() || !sext_ln703_1879_fu_13021501_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1880_fu_13021511_p1.read()) + sc_bigint<11>(sext_ln703_1879_fu_13021501_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3269_fu_13021525_p2() {
    add_ln703_3269_fu_13021525_p2 = (!sext_ln703_1881_fu_13021521_p1.read().is_01() || !add_ln703_3265_fu_13021489_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1881_fu_13021521_p1.read()) + sc_biguint<12>(add_ln703_3265_fu_13021489_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3270_fu_13021535_p2() {
    add_ln703_3270_fu_13021535_p2 = (!sext_ln1118_777_fu_12967090_p1.read().is_01() || !zext_ln708_693_fu_12981615_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_777_fu_12967090_p1.read()) + sc_biguint<12>(zext_ln708_693_fu_12981615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3271_fu_13021545_p2() {
    add_ln703_3271_fu_13021545_p2 = (!sext_ln703_1883_fu_13021541_p1.read().is_01() || !sext_ln703_1882_fu_13021531_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1883_fu_13021541_p1.read()) + sc_bigint<13>(sext_ln703_1882_fu_13021531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3272_fu_13021551_p2() {
    add_ln703_3272_fu_13021551_p2 = (!zext_ln708_625_fu_12977309_p1.read().is_01() || !zext_ln708_694_fu_12981667_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_625_fu_12977309_p1.read()) + sc_biguint<11>(zext_ln708_694_fu_12981667_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3273_fu_13021561_p2() {
    add_ln703_3273_fu_13021561_p2 = (!sext_ln1116_122_fu_12981629_p1.read().is_01() || !zext_ln1118_1644_fu_12981643_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_122_fu_12981629_p1.read()) + sc_biguint<11>(zext_ln1118_1644_fu_12981643_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3274_fu_13021571_p2() {
    add_ln703_3274_fu_13021571_p2 = (!sext_ln703_1885_fu_13021567_p1.read().is_01() || !zext_ln703_421_fu_13021557_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1885_fu_13021567_p1.read()) + sc_biguint<13>(zext_ln703_421_fu_13021557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3275_fu_13035705_p2() {
    add_ln703_3275_fu_13035705_p2 = (!sext_ln703_1886_fu_13035702_p1.read().is_01() || !sext_ln703_1884_fu_13035699_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1886_fu_13035702_p1.read()) + sc_bigint<14>(sext_ln703_1884_fu_13035699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3276_fu_13035711_p2() {
    add_ln703_3276_fu_13035711_p2 = (!add_ln703_3275_fu_13035705_p2.read().is_01() || !sext_ln1118_996_fu_13029184_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3275_fu_13035705_p2.read()) + sc_bigint<14>(sext_ln1118_996_fu_13029184_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3277_fu_13021577_p2() {
    add_ln703_3277_fu_13021577_p2 = (!zext_ln1116_151_fu_12981711_p1.read().is_01() || !zext_ln1118_1648_fu_12981725_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_151_fu_12981711_p1.read()) + sc_biguint<10>(zext_ln1118_1648_fu_12981725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3278_fu_13035720_p2() {
    add_ln703_3278_fu_13035720_p2 = (!zext_ln703_422_fu_13035717_p1.read().is_01() || !add_ln703_3276_fu_13035711_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_422_fu_13035717_p1.read()) + sc_biguint<14>(add_ln703_3276_fu_13035711_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3279_fu_13021583_p2() {
    add_ln703_3279_fu_13021583_p2 = (!zext_ln1118_1649_fu_12981739_p1.read().is_01() || !trunc_ln1116_8_fu_12981787_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1649_fu_12981739_p1.read()) + sc_biguint<10>(trunc_ln1116_8_fu_12981787_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3280_fu_13021593_p2() {
    add_ln703_3280_fu_13021593_p2 = (!zext_ln1118_1651_fu_12981821_p1.read().is_01() || !zext_ln1118_1652_fu_12981835_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1651_fu_12981821_p1.read()) + sc_biguint<10>(zext_ln1118_1652_fu_12981835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3281_fu_13021603_p2() {
    add_ln703_3281_fu_13021603_p2 = (!zext_ln703_424_fu_13021599_p1.read().is_01() || !zext_ln703_423_fu_13021589_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_424_fu_13021599_p1.read()) + sc_biguint<11>(zext_ln703_423_fu_13021589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3282_fu_13035733_p2() {
    add_ln703_3282_fu_13035733_p2 = (!zext_ln703_425_fu_13035730_p1.read().is_01() || !sext_ln703_1887_fu_13035726_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_425_fu_13035730_p1.read()) + sc_bigint<15>(sext_ln703_1887_fu_13035726_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3283_fu_13021609_p2() {
    add_ln703_3283_fu_13021609_p2 = (!zext_ln1116_152_fu_12981849_p1.read().is_01() || !zext_ln1118_1654_fu_12981887_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_152_fu_12981849_p1.read()) + sc_biguint<9>(zext_ln1118_1654_fu_12981887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3284_fu_13021619_p2() {
    add_ln703_3284_fu_13021619_p2 = (!zext_ln1118_1655_fu_12981901_p1.read().is_01() || !zext_ln1118_1656_fu_12981915_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1655_fu_12981901_p1.read()) + sc_biguint<10>(zext_ln1118_1656_fu_12981915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3285_fu_13021629_p2() {
    add_ln703_3285_fu_13021629_p2 = (!zext_ln703_427_fu_13021625_p1.read().is_01() || !zext_ln703_426_fu_13021615_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_427_fu_13021625_p1.read()) + sc_biguint<11>(zext_ln703_426_fu_13021615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3286_fu_13021639_p2() {
    add_ln703_3286_fu_13021639_p2 = (!sext_ln1116_123_fu_12981763_p1.read().is_01() || !sext_ln1116_124_fu_12981777_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_123_fu_12981763_p1.read()) + sc_bigint<11>(sext_ln1116_124_fu_12981777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3287_fu_13021649_p2() {
    add_ln703_3287_fu_13021649_p2 = (!sext_ln1118_997_fu_12981807_p1.read().is_01() || !sext_ln1118_998_fu_12981873_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_997_fu_12981807_p1.read()) + sc_bigint<10>(sext_ln1118_998_fu_12981873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3288_fu_13021659_p2() {
    add_ln703_3288_fu_13021659_p2 = (!sext_ln703_1889_fu_13021655_p1.read().is_01() || !sext_ln703_1888_fu_13021645_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1889_fu_13021655_p1.read()) + sc_bigint<12>(sext_ln703_1888_fu_13021645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3289_fu_13021669_p2() {
    add_ln703_3289_fu_13021669_p2 = (!sext_ln703_1890_fu_13021665_p1.read().is_01() || !zext_ln703_428_fu_13021635_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1890_fu_13021665_p1.read()) + sc_biguint<13>(zext_ln703_428_fu_13021635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3290_fu_13035742_p2() {
    add_ln703_3290_fu_13035742_p2 = (!sext_ln703_1891_fu_13035739_p1.read().is_01() || !add_ln703_3282_fu_13035733_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1891_fu_13035739_p1.read()) + sc_biguint<15>(add_ln703_3282_fu_13035733_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3291_fu_13035748_p2() {
    add_ln703_3291_fu_13035748_p2 = (!add_ln703_3290_fu_13035742_p2.read().is_01() || !zext_ln203_238_fu_13029187_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3290_fu_13035742_p2.read()) + sc_biguint<15>(zext_ln203_238_fu_13029187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3292_fu_13021675_p2() {
    add_ln703_3292_fu_13021675_p2 = (!zext_ln708_695_fu_12981929_p1.read().is_01() || !zext_ln708_697_fu_12981967_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_695_fu_12981929_p1.read()) + sc_biguint<11>(zext_ln708_697_fu_12981967_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3293_fu_13021685_p2() {
    add_ln703_3293_fu_13021685_p2 = (!zext_ln703_429_fu_13021681_p1.read().is_01() || !sext_ln203_652_fu_12981943_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_429_fu_13021681_p1.read()) + sc_bigint<13>(sext_ln203_652_fu_12981943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3295_fu_13021691_p2() {
    add_ln703_3295_fu_13021691_p2 = (!sext_ln203_653_fu_12981985_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_653_fu_12981985_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3296_fu_13021701_p2() {
    add_ln703_3296_fu_13021701_p2 = (!sext_ln703_957_fu_13021697_p1.read().is_01() || !sext_ln203_654_fu_12981999_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_957_fu_13021697_p1.read()) + sc_bigint<13>(sext_ln203_654_fu_12981999_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3297_fu_13021707_p2() {
    add_ln703_3297_fu_13021707_p2 = (!zext_ln1118_1657_fu_12982027_p1.read().is_01() || !sext_ln708_144_fu_12982013_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1657_fu_12982027_p1.read()) + sc_bigint<12>(sext_ln708_144_fu_12982013_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3298_fu_13021717_p2() {
    add_ln703_3298_fu_13021717_p2 = (!sext_ln703_1894_fu_13021713_p1.read().is_01() || !add_ln703_3296_fu_13021701_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1894_fu_13021713_p1.read()) + sc_biguint<13>(add_ln703_3296_fu_13021701_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3299_fu_13021727_p2() {
    add_ln703_3299_fu_13021727_p2 = (!sext_ln708_145_fu_12982041_p1.read().is_01() || !sext_ln1118_777_fu_12967090_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_145_fu_12982041_p1.read()) + sc_bigint<12>(sext_ln1118_777_fu_12967090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3300_fu_13021737_p2() {
    add_ln703_3300_fu_13021737_p2 = (!sext_ln703_1895_fu_13021733_p1.read().is_01() || !sext_ln703_958_fu_13021723_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1895_fu_13021733_p1.read()) + sc_bigint<14>(sext_ln703_958_fu_13021723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3301_fu_13021743_p2() {
    add_ln703_3301_fu_13021743_p2 = (!zext_ln708_698_fu_12982055_p1.read().is_01() || !sext_ln1118_1000_fu_12982079_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_698_fu_12982055_p1.read()) + sc_bigint<11>(sext_ln1118_1000_fu_12982079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3302_fu_13021753_p2() {
    add_ln703_3302_fu_13021753_p2 = (!sext_ln703_1896_fu_13021749_p1.read().is_01() || !sext_ln708_146_fu_12982099_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1896_fu_13021749_p1.read()) + sc_bigint<12>(sext_ln708_146_fu_12982099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3303_fu_13035770_p2() {
    add_ln703_3303_fu_13035770_p2 = (!sext_ln703_1897_fu_13035767_p1.read().is_01() || !add_ln703_3300_reg_13042900.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1897_fu_13035767_p1.read()) + sc_biguint<14>(add_ln703_3300_reg_13042900.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3304_fu_13021759_p2() {
    add_ln703_3304_fu_13021759_p2 = (!zext_ln708_699_fu_12982113_p1.read().is_01() || !zext_ln708_700_fu_12982127_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_699_fu_12982113_p1.read()) + sc_biguint<11>(zext_ln708_700_fu_12982127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3305_fu_13035778_p2() {
    add_ln703_3305_fu_13035778_p2 = (!zext_ln703_430_fu_13035775_p1.read().is_01() || !add_ln703_3303_fu_13035770_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_430_fu_13035775_p1.read()) + sc_biguint<14>(add_ln703_3303_fu_13035770_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3306_fu_13021765_p2() {
    add_ln703_3306_fu_13021765_p2 = (!zext_ln708_701_fu_12982141_p1.read().is_01() || !zext_ln708_702_fu_12982239_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_701_fu_12982141_p1.read()) + sc_biguint<11>(zext_ln708_702_fu_12982239_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3307_fu_13021771_p2() {
    add_ln703_3307_fu_13021771_p2 = (!zext_ln1118_1662_fu_12982263_p1.read().is_01() || !zext_ln708_703_fu_12982283_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1662_fu_12982263_p1.read()) + sc_biguint<10>(zext_ln708_703_fu_12982283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3308_fu_13021781_p2() {
    add_ln703_3308_fu_13021781_p2 = (!zext_ln703_431_fu_13021777_p1.read().is_01() || !add_ln703_3306_fu_13021765_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_431_fu_13021777_p1.read()) + sc_biguint<11>(add_ln703_3306_fu_13021765_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3309_fu_13035791_p2() {
    add_ln703_3309_fu_13035791_p2 = (!zext_ln703_432_fu_13035788_p1.read().is_01() || !sext_ln703_1898_fu_13035784_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_432_fu_13035788_p1.read()) + sc_bigint<15>(sext_ln703_1898_fu_13035784_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3310_fu_13021787_p2() {
    add_ln703_3310_fu_13021787_p2 = (!sext_ln1118_1003_fu_12982235_p1.read().is_01() || !zext_ln708_704_fu_12982287_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1003_fu_12982235_p1.read()) + sc_biguint<11>(zext_ln708_704_fu_12982287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3311_fu_13021793_p2() {
    add_ln703_3311_fu_13021793_p2 = (!add_ln703_3310_fu_13021787_p2.read().is_01() || !zext_ln708_606_fu_12975252_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3310_fu_13021787_p2.read()) + sc_biguint<11>(zext_ln708_606_fu_12975252_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3312_fu_13021803_p2() {
    add_ln703_3312_fu_13021803_p2 = (!sext_ln1118_1001_fu_12982145_p1.read().is_01() || !zext_ln1118_1659_fu_12982191_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1001_fu_12982145_p1.read()) + sc_biguint<9>(zext_ln1118_1659_fu_12982191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3313_fu_13021813_p2() {
    add_ln703_3313_fu_13021813_p2 = (!sext_ln708_147_fu_12982177_p1.read().is_01() || !sext_ln1118_1002_fu_12982215_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_147_fu_12982177_p1.read()) + sc_bigint<8>(sext_ln1118_1002_fu_12982215_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3314_fu_13021823_p2() {
    add_ln703_3314_fu_13021823_p2 = (!sext_ln703_1901_fu_13021819_p1.read().is_01() || !sext_ln703_1900_fu_13021809_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1901_fu_13021819_p1.read()) + sc_bigint<10>(sext_ln703_1900_fu_13021809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3315_fu_13021833_p2() {
    add_ln703_3315_fu_13021833_p2 = (!sext_ln703_1902_fu_13021829_p1.read().is_01() || !sext_ln703_1899_fu_13021799_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1902_fu_13021829_p1.read()) + sc_bigint<12>(sext_ln703_1899_fu_13021799_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3316_fu_13035800_p2() {
    add_ln703_3316_fu_13035800_p2 = (!sext_ln703_1903_fu_13035797_p1.read().is_01() || !add_ln703_3309_fu_13035791_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1903_fu_13035797_p1.read()) + sc_biguint<15>(add_ln703_3309_fu_13035791_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3317_fu_13035806_p2() {
    add_ln703_3317_fu_13035806_p2 = (!add_ln703_3316_fu_13035800_p2.read().is_01() || !zext_ln203_240_fu_13029190_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3316_fu_13035800_p2.read()) + sc_biguint<15>(zext_ln203_240_fu_13029190_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3318_fu_13021839_p2() {
    add_ln703_3318_fu_13021839_p2 = (!zext_ln708_685_fu_12980953_p1.read().is_01() || !zext_ln708_705_fu_12982331_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_685_fu_12980953_p1.read()) + sc_biguint<11>(zext_ln708_705_fu_12982331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3319_fu_13021849_p2() {
    add_ln703_3319_fu_13021849_p2 = (!zext_ln703_433_fu_13021845_p1.read().is_01() || !sext_ln203_657_fu_12982413_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_433_fu_13021845_p1.read()) + sc_bigint<13>(sext_ln203_657_fu_12982413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3320_fu_13035815_p2() {
    add_ln703_3320_fu_13035815_p2 = (!sext_ln703_1904_fu_13035812_p1.read().is_01() || !add_ln703_3317_fu_13035806_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1904_fu_13035812_p1.read()) + sc_biguint<15>(add_ln703_3317_fu_13035806_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3321_fu_13021855_p2() {
    add_ln703_3321_fu_13021855_p2 = (!zext_ln708_548_fu_12970361_p1.read().is_01() || !zext_ln708_706_fu_12982389_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_548_fu_12970361_p1.read()) + sc_biguint<11>(zext_ln708_706_fu_12982389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3322_fu_13021865_p2() {
    add_ln703_3322_fu_13021865_p2 = (!sext_ln203_655_fu_12982311_p1.read().is_01() || !sext_ln203_656_fu_12982365_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_655_fu_12982311_p1.read()) + sc_bigint<11>(sext_ln203_656_fu_12982365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3323_fu_13021875_p2() {
    add_ln703_3323_fu_13021875_p2 = (!sext_ln703_1906_fu_13021871_p1.read().is_01() || !zext_ln203_239_fu_12981971_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1906_fu_13021871_p1.read()) + sc_biguint<12>(zext_ln203_239_fu_12981971_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3324_fu_13021885_p2() {
    add_ln703_3324_fu_13021885_p2 = (!sext_ln703_1907_fu_13021881_p1.read().is_01() || !zext_ln703_434_fu_13021861_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1907_fu_13021881_p1.read()) + sc_biguint<13>(zext_ln703_434_fu_13021861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3326_fu_13021891_p2() {
    add_ln703_3326_fu_13021891_p2 = (!trunc_ln203_36_fu_12982417_p4.read().is_01() || !ap_const_lv10_58.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_36_fu_12982417_p4.read()) + sc_biguint<10>(ap_const_lv10_58));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3327_fu_13021901_p2() {
    add_ln703_3327_fu_13021901_p2 = (!sext_ln203_658_fu_12982437_p1.read().is_01() || !zext_ln703_19_fu_13021897_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_658_fu_12982437_p1.read()) + sc_biguint<12>(zext_ln703_19_fu_13021897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3328_fu_13021911_p2() {
    add_ln703_3328_fu_13021911_p2 = (!zext_ln1118_1666_fu_12982455_p1.read().is_01() || !sext_ln708_148_fu_12982441_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1666_fu_12982455_p1.read()) + sc_bigint<12>(sext_ln708_148_fu_12982441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3329_fu_13021921_p2() {
    add_ln703_3329_fu_13021921_p2 = (!sext_ln703_1909_fu_13021917_p1.read().is_01() || !sext_ln703_961_fu_13021907_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1909_fu_13021917_p1.read()) + sc_bigint<13>(sext_ln703_961_fu_13021907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3330_fu_13035837_p2() {
    add_ln703_3330_fu_13035837_p2 = (!sext_ln703_962_fu_13035834_p1.read().is_01() || !sext_ln203_659_fu_13029193_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_962_fu_13035834_p1.read()) + sc_bigint<14>(sext_ln203_659_fu_13029193_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3331_fu_13021927_p2() {
    add_ln703_3331_fu_13021927_p2 = (!sext_ln1116_89_fu_12964139_p1.read().is_01() || !sext_ln1118_777_fu_12967090_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_89_fu_12964139_p1.read()) + sc_bigint<12>(sext_ln1118_777_fu_12967090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3332_fu_13021937_p2() {
    add_ln703_3332_fu_13021937_p2 = (!sext_ln703_1910_fu_13021933_p1.read().is_01() || !sext_ln1118_1005_fu_12982469_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1910_fu_13021933_p1.read()) + sc_bigint<13>(sext_ln1118_1005_fu_12982469_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3333_fu_13035846_p2() {
    add_ln703_3333_fu_13035846_p2 = (!sext_ln703_1911_fu_13035843_p1.read().is_01() || !add_ln703_3330_fu_13035837_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1911_fu_13035843_p1.read()) + sc_biguint<14>(add_ln703_3330_fu_13035837_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3334_fu_13035856_p2() {
    add_ln703_3334_fu_13035856_p2 = (!sext_ln703_963_fu_13035852_p1.read().is_01() || !sext_ln203_660_fu_13029196_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_963_fu_13035852_p1.read()) + sc_bigint<15>(sext_ln203_660_fu_13029196_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3335_fu_13021943_p2() {
    add_ln703_3335_fu_13021943_p2 = (!sext_ln1118_1008_fu_12982511_p1.read().is_01() || !sext_ln1118_1009_fu_12982525_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1008_fu_12982511_p1.read()) + sc_bigint<12>(sext_ln1118_1009_fu_12982525_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3336_fu_13021953_p2() {
    add_ln703_3336_fu_13021953_p2 = (!sext_ln703_1912_fu_13021949_p1.read().is_01() || !sext_ln1118_1007_fu_12982497_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1912_fu_13021949_p1.read()) + sc_bigint<13>(sext_ln1118_1007_fu_12982497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3337_fu_13035865_p2() {
    add_ln703_3337_fu_13035865_p2 = (!sext_ln703_1913_fu_13035862_p1.read().is_01() || !add_ln703_3334_fu_13035856_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1913_fu_13035862_p1.read()) + sc_biguint<15>(add_ln703_3334_fu_13035856_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3338_fu_13021959_p2() {
    add_ln703_3338_fu_13021959_p2 = (!zext_ln1118_1667_fu_12982569_p1.read().is_01() || !zext_ln1118_1668_fu_12982583_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1667_fu_12982569_p1.read()) + sc_biguint<10>(zext_ln1118_1668_fu_12982583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3339_fu_13021969_p2() {
    add_ln703_3339_fu_13021969_p2 = (!sext_ln1118_1006_fu_12982483_p1.read().is_01() || !sext_ln1118_1011_fu_12982549_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1006_fu_12982483_p1.read()) + sc_bigint<10>(sext_ln1118_1011_fu_12982549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3340_fu_13021979_p2() {
    add_ln703_3340_fu_13021979_p2 = (!sext_ln703_1914_fu_13021975_p1.read().is_01() || !sext_ln1118_1010_fu_12982545_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1914_fu_13021975_p1.read()) + sc_bigint<11>(sext_ln1118_1010_fu_12982545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3341_fu_13021989_p2() {
    add_ln703_3341_fu_13021989_p2 = (!sext_ln703_1915_fu_13021985_p1.read().is_01() || !zext_ln703_435_fu_13021965_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1915_fu_13021985_p1.read()) + sc_biguint<12>(zext_ln703_435_fu_13021965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3342_fu_13035874_p2() {
    add_ln703_3342_fu_13035874_p2 = (!sext_ln703_1916_fu_13035871_p1.read().is_01() || !add_ln703_3337_fu_13035865_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1916_fu_13035871_p1.read()) + sc_biguint<15>(add_ln703_3337_fu_13035865_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3343_fu_13035880_p2() {
    add_ln703_3343_fu_13035880_p2 = (!add_ln703_3342_fu_13035874_p2.read().is_01() || !sext_ln203_662_fu_13029199_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3342_fu_13035874_p2.read()) + sc_bigint<15>(sext_ln203_662_fu_13029199_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3344_fu_13021995_p2() {
    add_ln703_3344_fu_13021995_p2 = (!sext_ln203_616_fu_12979379_p1.read().is_01() || !sext_ln1118_837_fu_12971567_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_616_fu_12979379_p1.read()) + sc_bigint<12>(sext_ln1118_837_fu_12971567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3345_fu_13035889_p2() {
    add_ln703_3345_fu_13035889_p2 = (!sext_ln703_1917_fu_13035886_p1.read().is_01() || !add_ln703_3343_fu_13035880_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1917_fu_13035886_p1.read()) + sc_biguint<15>(add_ln703_3343_fu_13035880_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3346_fu_13022001_p2() {
    add_ln703_3346_fu_13022001_p2 = (!sext_ln203_663_fu_12982631_p1.read().is_01() || !sext_ln203_664_fu_12982677_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_663_fu_12982631_p1.read()) + sc_bigint<12>(sext_ln203_664_fu_12982677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3347_fu_13022011_p2() {
    add_ln703_3347_fu_13022011_p2 = (!sext_ln203_665_fu_12982691_p1.read().is_01() || !sext_ln203_666_fu_12982705_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_665_fu_12982691_p1.read()) + sc_bigint<12>(sext_ln203_666_fu_12982705_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3348_fu_13022021_p2() {
    add_ln703_3348_fu_13022021_p2 = (!sext_ln703_1920_fu_13022017_p1.read().is_01() || !sext_ln703_1919_fu_13022007_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1920_fu_13022017_p1.read()) + sc_bigint<13>(sext_ln703_1919_fu_13022007_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3349_fu_13035902_p2() {
    add_ln703_3349_fu_13035902_p2 = (!sext_ln703_1921_fu_13035899_p1.read().is_01() || !sext_ln703_1918_fu_13035895_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1921_fu_13035899_p1.read()) + sc_bigint<16>(sext_ln703_1918_fu_13035895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3350_fu_13022027_p2() {
    add_ln703_3350_fu_13022027_p2 = (!sext_ln203_667_fu_12982757_p1.read().is_01() || !sext_ln203_488_fu_12965193_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_667_fu_12982757_p1.read()) + sc_bigint<12>(sext_ln203_488_fu_12965193_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3351_fu_13022037_p2() {
    add_ln703_3351_fu_13022037_p2 = (!zext_ln708_707_fu_12982645_p1.read().is_01() || !zext_ln708_708_fu_12982719_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_707_fu_12982645_p1.read()) + sc_biguint<11>(zext_ln708_708_fu_12982719_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3352_fu_13022047_p2() {
    add_ln703_3352_fu_13022047_p2 = (!zext_ln703_436_fu_13022043_p1.read().is_01() || !sext_ln703_1922_fu_13022033_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_436_fu_13022043_p1.read()) + sc_bigint<13>(sext_ln703_1922_fu_13022033_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3353_fu_13022057_p2() {
    add_ln703_3353_fu_13022057_p2 = (!zext_ln203_241_fu_12982743_p1.read().is_01() || !zext_ln203_242_fu_12982771_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_241_fu_12982743_p1.read()) + sc_biguint<10>(zext_ln203_242_fu_12982771_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3354_fu_13022067_p2() {
    add_ln703_3354_fu_13022067_p2 = (!zext_ln203_243_fu_12982785_p1.read().is_01() || !sext_ln203_661_fu_12982607_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_243_fu_12982785_p1.read()) + sc_bigint<12>(sext_ln203_661_fu_12982607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3355_fu_13022073_p2() {
    add_ln703_3355_fu_13022073_p2 = (!add_ln703_3354_fu_13022067_p2.read().is_01() || !zext_ln703_437_fu_13022063_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3354_fu_13022067_p2.read()) + sc_biguint<12>(zext_ln703_437_fu_13022063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3356_fu_13022083_p2() {
    add_ln703_3356_fu_13022083_p2 = (!sext_ln703_1924_fu_13022079_p1.read().is_01() || !sext_ln703_1923_fu_13022053_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1924_fu_13022079_p1.read()) + sc_bigint<14>(sext_ln703_1923_fu_13022053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3358_fu_13022089_p2() {
    add_ln703_3358_fu_13022089_p2 = (!trunc_ln203_37_fu_12982803_p4.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln203_37_fu_12982803_p4.read()) + sc_bigint<8>(ap_const_lv8_A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3359_fu_13022099_p2() {
    add_ln703_3359_fu_13022099_p2 = (!sext_ln1118_1012_fu_12982823_p1.read().is_01() || !sext_ln703_1926_fu_13022095_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1012_fu_12982823_p1.read()) + sc_bigint<11>(sext_ln703_1926_fu_13022095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3360_fu_13022105_p2() {
    add_ln703_3360_fu_13022105_p2 = (!add_ln703_3359_fu_13022099_p2.read().is_01() || !zext_ln708_709_fu_12982861_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3359_fu_13022099_p2.read()) + sc_biguint<11>(zext_ln708_709_fu_12982861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3361_fu_13022115_p2() {
    add_ln703_3361_fu_13022115_p2 = (!sext_ln1118_1013_fu_12982847_p1.read().is_01() || !sext_ln1118_988_fu_12981185_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1013_fu_12982847_p1.read()) + sc_bigint<11>(sext_ln1118_988_fu_12981185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3362_fu_13022125_p2() {
    add_ln703_3362_fu_13022125_p2 = (!sext_ln703_1928_fu_13022121_p1.read().is_01() || !sext_ln703_1927_fu_13022111_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1928_fu_13022121_p1.read()) + sc_bigint<12>(sext_ln703_1927_fu_13022111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3363_fu_13022135_p2() {
    add_ln703_3363_fu_13022135_p2 = (!sext_ln703_1929_fu_13022131_p1.read().is_01() || !sext_ln1118_1015_fu_12982891_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1929_fu_13022131_p1.read()) + sc_bigint<13>(sext_ln1118_1015_fu_12982891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3364_fu_13022141_p2() {
    add_ln703_3364_fu_13022141_p2 = (!zext_ln1118_1675_fu_12982943_p1.read().is_01() || !zext_ln1118_1676_fu_12982983_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_1675_fu_12982943_p1.read()) + sc_biguint<8>(zext_ln1118_1676_fu_12982983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3365_fu_13022151_p2() {
    add_ln703_3365_fu_13022151_p2 = (!zext_ln703_438_fu_13022147_p1.read().is_01() || !add_ln703_3363_fu_13022135_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_438_fu_13022147_p1.read()) + sc_biguint<13>(add_ln703_3363_fu_13022135_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3366_fu_13022157_p2() {
    add_ln703_3366_fu_13022157_p2 = (!zext_ln708_678_fu_12980731_p1.read().is_01() || !sext_ln1118_1018_fu_12982963_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_678_fu_12980731_p1.read()) + sc_bigint<11>(sext_ln1118_1018_fu_12982963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3367_fu_13022167_p2() {
    add_ln703_3367_fu_13022167_p2 = (!sext_ln1118_1016_fu_12982905_p1.read().is_01() || !sext_ln1118_1017_fu_12982919_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1016_fu_12982905_p1.read()) + sc_bigint<10>(sext_ln1118_1017_fu_12982919_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3368_fu_13022177_p2() {
    add_ln703_3368_fu_13022177_p2 = (!sext_ln703_1932_fu_13022173_p1.read().is_01() || !sext_ln703_1931_fu_13022163_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1932_fu_13022173_p1.read()) + sc_bigint<12>(sext_ln703_1931_fu_13022163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3369_fu_13035923_p2() {
    add_ln703_3369_fu_13035923_p2 = (!sext_ln703_1933_fu_13035920_p1.read().is_01() || !sext_ln703_1930_fu_13035917_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1933_fu_13035920_p1.read()) + sc_bigint<14>(sext_ln703_1930_fu_13035917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3370_fu_13022183_p2() {
    add_ln703_3370_fu_13022183_p2 = (!sext_ln1118_1022_fu_12983035_p1.read().is_01() || !zext_ln1118_1678_fu_12983039_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1022_fu_12983035_p1.read()) + sc_biguint<12>(zext_ln1118_1678_fu_12983039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3371_fu_13035932_p2() {
    add_ln703_3371_fu_13035932_p2 = (!sext_ln703_1934_fu_13035929_p1.read().is_01() || !add_ln703_3369_fu_13035923_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1934_fu_13035929_p1.read()) + sc_biguint<14>(add_ln703_3369_fu_13035923_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3372_fu_13022189_p2() {
    add_ln703_3372_fu_13022189_p2 = (!sext_ln1118_1023_fu_12983063_p1.read().is_01() || !sext_ln708_149_fu_12983077_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1023_fu_12983063_p1.read()) + sc_bigint<10>(sext_ln708_149_fu_12983077_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3373_fu_13022199_p2() {
    add_ln703_3373_fu_13022199_p2 = (!sext_ln703_1935_fu_13022195_p1.read().is_01() || !sext_ln1118_1010_fu_12982545_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1935_fu_13022195_p1.read()) + sc_bigint<11>(sext_ln1118_1010_fu_12982545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3374_fu_13035941_p2() {
    add_ln703_3374_fu_13035941_p2 = (!sext_ln703_1936_fu_13035938_p1.read().is_01() || !add_ln703_3371_fu_13035932_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1936_fu_13035938_p1.read()) + sc_biguint<14>(add_ln703_3371_fu_13035932_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3375_fu_13022205_p2() {
    add_ln703_3375_fu_13022205_p2 = (!zext_ln1118_1164_fu_12964628_p1.read().is_01() || !zext_ln1118_1680_fu_12983091_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1164_fu_12964628_p1.read()) + sc_biguint<9>(zext_ln1118_1680_fu_12983091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3376_fu_13022211_p2() {
    add_ln703_3376_fu_13022211_p2 = (!add_ln703_3375_fu_13022205_p2.read().is_01() || !zext_ln1118_1475_fu_12974011_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_3375_fu_13022205_p2.read()) + sc_biguint<9>(zext_ln1118_1475_fu_12974011_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3377_fu_13022221_p2() {
    add_ln703_3377_fu_13022221_p2 = (!sext_ln1118_1020_fu_12983011_p1.read().is_01() || !sext_ln1118_1024_fu_12983111_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln1118_1020_fu_12983011_p1.read()) + sc_bigint<6>(sext_ln1118_1024_fu_12983111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3378_fu_13022231_p2() {
    add_ln703_3378_fu_13022231_p2 = (!sext_ln703_1937_fu_13022227_p1.read().is_01() || !sext_ln1118_1019_fu_12982987_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln703_1937_fu_13022227_p1.read()) + sc_bigint<7>(sext_ln1118_1019_fu_12982987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3379_fu_13022241_p2() {
    add_ln703_3379_fu_13022241_p2 = (!sext_ln703_1938_fu_13022237_p1.read().is_01() || !zext_ln703_439_fu_13022217_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1938_fu_13022237_p1.read()) + sc_biguint<10>(zext_ln703_439_fu_13022217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3380_fu_13035950_p2() {
    add_ln703_3380_fu_13035950_p2 = (!sext_ln703_1939_fu_13035947_p1.read().is_01() || !add_ln703_3374_fu_13035941_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1939_fu_13035947_p1.read()) + sc_biguint<14>(add_ln703_3374_fu_13035941_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3381_fu_13035956_p2() {
    add_ln703_3381_fu_13035956_p2 = (!add_ln703_3380_fu_13035950_p2.read().is_01() || !zext_ln203_244_fu_13029202_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3380_fu_13035950_p2.read()) + sc_biguint<14>(zext_ln203_244_fu_13029202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3382_fu_13022247_p2() {
    add_ln703_3382_fu_13022247_p2 = (!sext_ln203_556_fu_12973695_p1.read().is_01() || !sext_ln203_633_fu_12980041_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_556_fu_12973695_p1.read()) + sc_bigint<11>(sext_ln203_633_fu_12980041_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3383_fu_13022257_p2() {
    add_ln703_3383_fu_13022257_p2 = (!sext_ln703_1941_fu_13022253_p1.read().is_01() || !sext_ln203_669_fu_12983155_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1941_fu_13022253_p1.read()) + sc_bigint<12>(sext_ln203_669_fu_12983155_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3384_fu_13035969_p2() {
    add_ln703_3384_fu_13035969_p2 = (!sext_ln703_1942_fu_13035966_p1.read().is_01() || !sext_ln703_1940_fu_13035962_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1942_fu_13035966_p1.read()) + sc_bigint<15>(sext_ln703_1940_fu_13035962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3385_fu_13022263_p2() {
    add_ln703_3385_fu_13022263_p2 = (!sext_ln203_668_fu_12983125_p1.read().is_01() || !sext_ln203_670_fu_12983169_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_668_fu_12983125_p1.read()) + sc_bigint<10>(sext_ln203_670_fu_12983169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3386_fu_13022273_p2() {
    add_ln703_3386_fu_13022273_p2 = (!sext_ln203_593_fu_12977059_p1.read().is_01() || !zext_ln203_245_fu_12983183_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_593_fu_12977059_p1.read()) + sc_biguint<9>(zext_ln203_245_fu_12983183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3387_fu_13022283_p2() {
    add_ln703_3387_fu_13022283_p2 = (!sext_ln703_1944_fu_13022279_p1.read().is_01() || !sext_ln203_528_fu_12971022_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1944_fu_13022279_p1.read()) + sc_bigint<10>(sext_ln203_528_fu_12971022_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3388_fu_13022293_p2() {
    add_ln703_3388_fu_13022293_p2 = (!sext_ln703_1945_fu_13022289_p1.read().is_01() || !sext_ln703_1943_fu_13022269_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1945_fu_13022289_p1.read()) + sc_bigint<11>(sext_ln703_1943_fu_13022269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3390_fu_13022299_p2() {
    add_ln703_3390_fu_13022299_p2 = (!zext_ln708_712_fu_12983230_p1.read().is_01() || !ap_const_lv11_D8.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_712_fu_12983230_p1.read()) + sc_biguint<11>(ap_const_lv11_D8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3391_fu_13022309_p2() {
    add_ln703_3391_fu_13022309_p2 = (!sext_ln203_671_fu_12983327_p1.read().is_01() || !zext_ln703_20_fu_13022305_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_671_fu_12983327_p1.read()) + sc_biguint<13>(zext_ln703_20_fu_13022305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3392_fu_13022315_p2() {
    add_ln703_3392_fu_13022315_p2 = (!sext_ln1116_125_fu_12983268_p1.read().is_01() || !zext_ln1116_155_fu_12983379_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_125_fu_12983268_p1.read()) + sc_biguint<12>(zext_ln1116_155_fu_12983379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3393_fu_13022325_p2() {
    add_ln703_3393_fu_13022325_p2 = (!sext_ln703_1948_fu_13022321_p1.read().is_01() || !add_ln703_3391_fu_13022309_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1948_fu_13022321_p1.read()) + sc_biguint<13>(add_ln703_3391_fu_13022309_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3394_fu_13022335_p2() {
    add_ln703_3394_fu_13022335_p2 = (!sext_ln1116_126_fu_12983420_p1.read().is_01() || !sext_ln1116_127_fu_12983505_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_126_fu_12983420_p1.read()) + sc_bigint<12>(sext_ln1116_127_fu_12983505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3395_fu_13022345_p2() {
    add_ln703_3395_fu_13022345_p2 = (!sext_ln703_1949_fu_13022341_p1.read().is_01() || !sext_ln703_970_fu_13022331_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1949_fu_13022341_p1.read()) + sc_bigint<14>(sext_ln703_970_fu_13022331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3396_fu_13022351_p2() {
    add_ln703_3396_fu_13022351_p2 = (!zext_ln708_713_fu_12983549_p1.read().is_01() || !zext_ln708_715_fu_12983588_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_713_fu_12983549_p1.read()) + sc_biguint<11>(zext_ln708_715_fu_12983588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3397_fu_13022361_p2() {
    add_ln703_3397_fu_13022361_p2 = (!zext_ln703_440_fu_13022357_p1.read().is_01() || !zext_ln1116_158_fu_12983461_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_440_fu_13022357_p1.read()) + sc_biguint<12>(zext_ln1116_158_fu_12983461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3398_fu_13022371_p2() {
    add_ln703_3398_fu_13022371_p2 = (!zext_ln703_441_fu_13022367_p1.read().is_01() || !add_ln703_3395_fu_13022345_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_441_fu_13022367_p1.read()) + sc_biguint<14>(add_ln703_3395_fu_13022345_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3399_fu_13022377_p2() {
    add_ln703_3399_fu_13022377_p2 = (!sext_ln1116_129_fu_12983684_p1.read().is_01() || !sext_ln1118_1026_fu_12983766_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_129_fu_12983684_p1.read()) + sc_bigint<12>(sext_ln1118_1026_fu_12983766_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3400_fu_13035994_p2() {
    add_ln703_3400_fu_13035994_p2 = (!sext_ln703_1950_fu_13035991_p1.read().is_01() || !sext_ln703_971_fu_13035988_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1950_fu_13035991_p1.read()) + sc_bigint<15>(sext_ln703_971_fu_13035988_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3401_fu_13022383_p2() {
    add_ln703_3401_fu_13022383_p2 = (!sext_ln1116_131_fu_12983900_p1.read().is_01() || !zext_ln1116_167_fu_12983934_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_131_fu_12983900_p1.read()) + sc_biguint<12>(zext_ln1116_167_fu_12983934_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3402_fu_13022393_p2() {
    add_ln703_3402_fu_13022393_p2 = (!sext_ln703_1951_fu_13022389_p1.read().is_01() || !sext_ln1116_130_fu_12983847_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1951_fu_13022389_p1.read()) + sc_bigint<13>(sext_ln1116_130_fu_12983847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3403_fu_13036003_p2() {
    add_ln703_3403_fu_13036003_p2 = (!sext_ln703_1952_fu_13036000_p1.read().is_01() || !add_ln703_3400_fu_13035994_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1952_fu_13036000_p1.read()) + sc_biguint<15>(add_ln703_3400_fu_13035994_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3404_fu_13022399_p2() {
    add_ln703_3404_fu_13022399_p2 = (!zext_ln708_720_fu_12983977_p1.read().is_01() || !zext_ln708_721_fu_12984022_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_720_fu_12983977_p1.read()) + sc_biguint<11>(zext_ln708_721_fu_12984022_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3405_fu_13022409_p2() {
    add_ln703_3405_fu_13022409_p2 = (!zext_ln703_442_fu_13022405_p1.read().is_01() || !zext_ln1118_1720_fu_12983957_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_442_fu_13022405_p1.read()) + sc_biguint<12>(zext_ln1118_1720_fu_12983957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3406_fu_13022419_p2() {
    add_ln703_3406_fu_13022419_p2 = (!zext_ln1118_1725_fu_12984074_p1.read().is_01() || !sext_ln1116_128_fu_12983623_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1725_fu_12984074_p1.read()) + sc_bigint<12>(sext_ln1116_128_fu_12983623_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3407_fu_13022425_p2() {
    add_ln703_3407_fu_13022425_p2 = (!zext_ln1116_163_fu_12983741_p1.read().is_01() || !zext_ln1116_165_fu_12983798_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1116_163_fu_12983741_p1.read()) + sc_biguint<6>(zext_ln1116_165_fu_12983798_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3408_fu_13022435_p2() {
    add_ln703_3408_fu_13022435_p2 = (!zext_ln703_444_fu_13022431_p1.read().is_01() || !add_ln703_3406_fu_13022419_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_444_fu_13022431_p1.read()) + sc_biguint<12>(add_ln703_3406_fu_13022419_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3409_fu_13022445_p2() {
    add_ln703_3409_fu_13022445_p2 = (!sext_ln703_1953_fu_13022441_p1.read().is_01() || !zext_ln703_443_fu_13022415_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1953_fu_13022441_p1.read()) + sc_biguint<13>(zext_ln703_443_fu_13022415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3410_fu_13036012_p2() {
    add_ln703_3410_fu_13036012_p2 = (!sext_ln703_1954_fu_13036009_p1.read().is_01() || !add_ln703_3403_fu_13036003_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1954_fu_13036009_p1.read()) + sc_biguint<15>(add_ln703_3403_fu_13036003_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3411_fu_13022451_p2() {
    add_ln703_3411_fu_13022451_p2 = (!sext_ln203_674_fu_12984211_p1.read().is_01() || !sext_ln203_678_fu_12984455_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_674_fu_12984211_p1.read()) + sc_bigint<12>(sext_ln203_678_fu_12984455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3412_fu_13036025_p2() {
    add_ln703_3412_fu_13036025_p2 = (!sext_ln703_1955_fu_13036022_p1.read().is_01() || !sext_ln703_972_fu_13036018_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1955_fu_13036022_p1.read()) + sc_bigint<16>(sext_ln703_972_fu_13036018_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3413_fu_13022457_p2() {
    add_ln703_3413_fu_13022457_p2 = (!zext_ln203_246_fu_12984394_p1.read().is_01() || !trunc_ln203_38_fu_12984514_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_246_fu_12984394_p1.read()) + sc_biguint<9>(trunc_ln203_38_fu_12984514_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3414_fu_13022467_p2() {
    add_ln703_3414_fu_13022467_p2 = (!zext_ln703_445_fu_13022463_p1.read().is_01() || !sext_ln203_680_fu_12984559_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_445_fu_13022463_p1.read()) + sc_bigint<12>(sext_ln203_680_fu_12984559_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3415_fu_13036034_p2() {
    add_ln703_3415_fu_13036034_p2 = (!sext_ln703_1956_fu_13036031_p1.read().is_01() || !add_ln703_3412_fu_13036025_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1956_fu_13036031_p1.read()) + sc_biguint<16>(add_ln703_3412_fu_13036025_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3416_fu_13022473_p2() {
    add_ln703_3416_fu_13022473_p2 = (!sext_ln203_676_fu_12984341_p1.read().is_01() || !sext_ln203_677_fu_12984425_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_676_fu_12984341_p1.read()) + sc_bigint<11>(sext_ln203_677_fu_12984425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3417_fu_13022483_p2() {
    add_ln703_3417_fu_13022483_p2 = (!sext_ln703_1957_fu_13022479_p1.read().is_01() || !sext_ln203_672_fu_12984142_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1957_fu_13022479_p1.read()) + sc_bigint<12>(sext_ln203_672_fu_12984142_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3418_fu_13022489_p2() {
    add_ln703_3418_fu_13022489_p2 = (!sext_ln203_673_fu_12984174_p1.read().is_01() || !sext_ln203_679_fu_12984487_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_673_fu_12984174_p1.read()) + sc_bigint<8>(sext_ln203_679_fu_12984487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3419_fu_13022499_p2() {
    add_ln703_3419_fu_13022499_p2 = (!sext_ln703_1958_fu_13022495_p1.read().is_01() || !sext_ln203_675_fu_12984266_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_1958_fu_13022495_p1.read()) + sc_bigint<9>(sext_ln203_675_fu_12984266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3420_fu_13022509_p2() {
    add_ln703_3420_fu_13022509_p2 = (!sext_ln703_1959_fu_13022505_p1.read().is_01() || !add_ln703_3417_fu_13022483_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1959_fu_13022505_p1.read()) + sc_biguint<12>(add_ln703_3417_fu_13022483_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3422_fu_13022515_p2() {
    add_ln703_3422_fu_13022515_p2 = (!zext_ln708_727_fu_12984579_p1.read().is_01() || !ap_const_lv11_420.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_727_fu_12984579_p1.read()) + sc_bigint<11>(ap_const_lv11_420));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3423_fu_13022525_p2() {
    add_ln703_3423_fu_13022525_p2 = (!zext_ln203_247_fu_12984627_p1.read().is_01() || !sext_ln203_681_fu_12984593_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_247_fu_12984627_p1.read()) + sc_bigint<12>(sext_ln203_681_fu_12984593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3424_fu_13022531_p2() {
    add_ln703_3424_fu_13022531_p2 = (!add_ln703_3423_fu_13022525_p2.read().is_01() || !sext_ln703_973_fu_13022521_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3423_fu_13022525_p2.read()) + sc_bigint<12>(sext_ln703_973_fu_13022521_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3425_fu_13022537_p2() {
    add_ln703_3425_fu_13022537_p2 = (!add_ln703_3424_fu_13022531_p2.read().is_01() || !zext_ln1118_1756_fu_12984667_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3424_fu_13022531_p2.read()) + sc_biguint<12>(zext_ln1118_1756_fu_12984667_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3426_fu_13022547_p2() {
    add_ln703_3426_fu_13022547_p2 = (!sext_ln1118_1029_fu_12984681_p1.read().is_01() || !zext_ln1118_1757_fu_12984695_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1029_fu_12984681_p1.read()) + sc_biguint<12>(zext_ln1118_1757_fu_12984695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3427_fu_13022557_p2() {
    add_ln703_3427_fu_13022557_p2 = (!sext_ln703_1962_fu_13022553_p1.read().is_01() || !sext_ln703_1961_fu_13022543_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1962_fu_13022553_p1.read()) + sc_bigint<13>(sext_ln703_1961_fu_13022543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3428_fu_13022563_p2() {
    add_ln703_3428_fu_13022563_p2 = (!zext_ln1118_1697_fu_12983553_p1.read().is_01() || !sext_ln1118_1031_fu_12984781_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1697_fu_12983553_p1.read()) + sc_bigint<12>(sext_ln1118_1031_fu_12984781_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3429_fu_13036055_p2() {
    add_ln703_3429_fu_13036055_p2 = (!sext_ln703_1963_fu_13036052_p1.read().is_01() || !sext_ln703_975_fu_13036049_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1963_fu_13036052_p1.read()) + sc_bigint<14>(sext_ln703_975_fu_13036049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3430_fu_13022569_p2() {
    add_ln703_3430_fu_13022569_p2 = (!zext_ln708_729_fu_12984767_p1.read().is_01() || !sext_ln1118_1030_fu_12984709_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_729_fu_12984767_p1.read()) + sc_bigint<11>(sext_ln1118_1030_fu_12984709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3431_fu_13022579_p2() {
    add_ln703_3431_fu_13022579_p2 = (!sext_ln703_1964_fu_13022575_p1.read().is_01() || !zext_ln1118_1758_fu_12984723_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1964_fu_13022575_p1.read()) + sc_biguint<12>(zext_ln1118_1758_fu_12984723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3432_fu_13036064_p2() {
    add_ln703_3432_fu_13036064_p2 = (!sext_ln703_1965_fu_13036061_p1.read().is_01() || !add_ln703_3429_fu_13036055_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1965_fu_13036061_p1.read()) + sc_biguint<14>(add_ln703_3429_fu_13036055_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3433_fu_13022585_p2() {
    add_ln703_3433_fu_13022585_p2 = (!trunc_ln1118_53_fu_12984852_p4.read().is_01() || !zext_ln1118_1763_fu_12984877_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_53_fu_12984852_p4.read()) + sc_biguint<10>(zext_ln1118_1763_fu_12984877_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3434_fu_13036073_p2() {
    add_ln703_3434_fu_13036073_p2 = (!zext_ln703_446_fu_13036070_p1.read().is_01() || !add_ln703_3432_fu_13036064_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_446_fu_13036070_p1.read()) + sc_biguint<14>(add_ln703_3432_fu_13036064_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3435_fu_13022591_p2() {
    add_ln703_3435_fu_13022591_p2 = (!zext_ln708_733_fu_12985011_p1.read().is_01() || !zext_ln708_735_fu_12985041_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_733_fu_12985011_p1.read()) + sc_biguint<11>(zext_ln708_735_fu_12985041_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3436_fu_13022597_p2() {
    add_ln703_3436_fu_13022597_p2 = (!trunc_ln1118_54_fu_12985075_p4.read().is_01() || !zext_ln1118_1774_fu_12985130_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_54_fu_12985075_p4.read()) + sc_biguint<10>(zext_ln1118_1774_fu_12985130_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3437_fu_13022607_p2() {
    add_ln703_3437_fu_13022607_p2 = (!zext_ln703_447_fu_13022603_p1.read().is_01() || !add_ln703_3435_fu_13022591_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_447_fu_13022603_p1.read()) + sc_biguint<11>(add_ln703_3435_fu_13022591_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3438_fu_13036086_p2() {
    add_ln703_3438_fu_13036086_p2 = (!zext_ln703_448_fu_13036083_p1.read().is_01() || !sext_ln703_1966_fu_13036079_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_448_fu_13036083_p1.read()) + sc_bigint<15>(sext_ln703_1966_fu_13036079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3439_fu_13022613_p2() {
    add_ln703_3439_fu_13022613_p2 = (!zext_ln1118_1777_fu_12985160_p1.read().is_01() || !zext_ln1118_1779_fu_12985200_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1777_fu_12985160_p1.read()) + sc_biguint<10>(zext_ln1118_1779_fu_12985200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3440_fu_13022623_p2() {
    add_ln703_3440_fu_13022623_p2 = (!zext_ln708_739_fu_12985256_p1.read().is_01() || !sext_ln1118_1034_fu_12984931_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_739_fu_12985256_p1.read()) + sc_bigint<11>(sext_ln1118_1034_fu_12984931_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3441_fu_13022633_p2() {
    add_ln703_3441_fu_13022633_p2 = (!sext_ln703_1967_fu_13022629_p1.read().is_01() || !zext_ln703_449_fu_13022619_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1967_fu_13022629_p1.read()) + sc_biguint<12>(zext_ln703_449_fu_13022619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3442_fu_13022643_p2() {
    add_ln703_3442_fu_13022643_p2 = (!sext_ln1118_1038_fu_12985242_p1.read().is_01() || !zext_ln708_736_fu_12985053_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1038_fu_12985242_p1.read()) + sc_biguint<11>(zext_ln708_736_fu_12985053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3443_fu_13022649_p2() {
    add_ln703_3443_fu_13022649_p2 = (!sext_ln1118_1036_fu_12984985_p1.read().is_01() || !sext_ln1118_1032_fu_12984813_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1036_fu_12984985_p1.read()) + sc_bigint<9>(sext_ln1118_1032_fu_12984813_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3444_fu_13022659_p2() {
    add_ln703_3444_fu_13022659_p2 = (!sext_ln703_1969_fu_13022655_p1.read().is_01() || !add_ln703_3442_fu_13022643_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1969_fu_13022655_p1.read()) + sc_biguint<11>(add_ln703_3442_fu_13022643_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3445_fu_13022669_p2() {
    add_ln703_3445_fu_13022669_p2 = (!sext_ln703_1970_fu_13022665_p1.read().is_01() || !sext_ln703_1968_fu_13022639_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1970_fu_13022665_p1.read()) + sc_bigint<13>(sext_ln703_1968_fu_13022639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3446_fu_13036095_p2() {
    add_ln703_3446_fu_13036095_p2 = (!sext_ln703_1971_fu_13036092_p1.read().is_01() || !add_ln703_3438_fu_13036086_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1971_fu_13036092_p1.read()) + sc_biguint<15>(add_ln703_3438_fu_13036086_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3447_fu_13022675_p2() {
    add_ln703_3447_fu_13022675_p2 = (!zext_ln708_740_fu_12985345_p1.read().is_01() || !zext_ln708_742_fu_12985385_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_740_fu_12985345_p1.read()) + sc_biguint<11>(zext_ln708_742_fu_12985385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3448_fu_13036104_p2() {
    add_ln703_3448_fu_13036104_p2 = (!zext_ln703_450_fu_13036101_p1.read().is_01() || !add_ln703_3446_fu_13036095_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_450_fu_13036101_p1.read()) + sc_biguint<15>(add_ln703_3446_fu_13036095_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3449_fu_13022681_p2() {
    add_ln703_3449_fu_13022681_p2 = (!sext_ln203_683_fu_12985306_p1.read().is_01() || !sext_ln203_684_fu_12985320_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_683_fu_12985306_p1.read()) + sc_bigint<11>(sext_ln203_684_fu_12985320_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3450_fu_13022691_p2() {
    add_ln703_3450_fu_13022691_p2 = (!sext_ln203_685_fu_12985429_p1.read().is_01() || !sext_ln203_682_fu_12985292_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_685_fu_12985429_p1.read()) + sc_bigint<11>(sext_ln203_682_fu_12985292_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3451_fu_13022701_p2() {
    add_ln703_3451_fu_13022701_p2 = (!sext_ln703_1973_fu_13022697_p1.read().is_01() || !sext_ln703_1972_fu_13022687_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1973_fu_13022697_p1.read()) + sc_bigint<12>(sext_ln703_1972_fu_13022687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3453_fu_13022707_p2() {
    add_ln703_3453_fu_13022707_p2 = (!trunc_ln203_39_fu_12985463_p4.read().is_01() || !ap_const_lv10_220.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_39_fu_12985463_p4.read()) + sc_bigint<10>(ap_const_lv10_220));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3454_fu_13022717_p2() {
    add_ln703_3454_fu_13022717_p2 = (!sext_ln703_1976_fu_13022713_p1.read().is_01() || !sext_ln1118_1040_fu_12985511_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1976_fu_13022713_p1.read()) + sc_bigint<11>(sext_ln1118_1040_fu_12985511_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3455_fu_13022727_p2() {
    add_ln703_3455_fu_13022727_p2 = (!sext_ln703_1977_fu_13022723_p1.read().is_01() || !zext_ln203_248_fu_12985525_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1977_fu_13022723_p1.read()) + sc_biguint<12>(zext_ln203_248_fu_12985525_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3456_fu_13022733_p2() {
    add_ln703_3456_fu_13022733_p2 = (!add_ln703_3455_fu_13022727_p2.read().is_01() || !zext_ln1118_1790_fu_12985593_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3455_fu_13022727_p2.read()) + sc_biguint<12>(zext_ln1118_1790_fu_12985593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3457_fu_13022743_p2() {
    add_ln703_3457_fu_13022743_p2 = (!sext_ln1118_1042_fu_12985607_p1.read().is_01() || !sext_ln1118_1041_fu_12985561_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1042_fu_12985607_p1.read()) + sc_bigint<11>(sext_ln1118_1041_fu_12985561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3458_fu_13022753_p2() {
    add_ln703_3458_fu_13022753_p2 = (!sext_ln703_1979_fu_13022749_p1.read().is_01() || !sext_ln703_1978_fu_13022739_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1979_fu_13022749_p1.read()) + sc_bigint<13>(sext_ln703_1978_fu_13022739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3459_fu_13022759_p2() {
    add_ln703_3459_fu_13022759_p2 = (!zext_ln708_745_fu_12985653_p1.read().is_01() || !zext_ln708_748_fu_12985697_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_745_fu_12985653_p1.read()) + sc_biguint<11>(zext_ln708_748_fu_12985697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3460_fu_13022769_p2() {
    add_ln703_3460_fu_13022769_p2 = (!zext_ln703_451_fu_13022765_p1.read().is_01() || !add_ln703_3458_fu_13022753_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_451_fu_13022765_p1.read()) + sc_biguint<13>(add_ln703_3458_fu_13022753_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3461_fu_13022775_p2() {
    add_ln703_3461_fu_13022775_p2 = (!sext_ln708_150_fu_12985639_p1.read().is_01() || !sext_ln1118_1043_fu_12985773_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_150_fu_12985639_p1.read()) + sc_bigint<8>(sext_ln1118_1043_fu_12985773_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3462_fu_13022785_p2() {
    add_ln703_3462_fu_13022785_p2 = (!sext_ln703_1981_fu_13022781_p1.read().is_01() || !zext_ln708_751_fu_12985741_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1981_fu_13022781_p1.read()) + sc_biguint<11>(zext_ln708_751_fu_12985741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3463_fu_13036129_p2() {
    add_ln703_3463_fu_13036129_p2 = (!sext_ln703_1982_fu_13036126_p1.read().is_01() || !sext_ln703_1980_fu_13036123_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1982_fu_13036126_p1.read()) + sc_bigint<14>(sext_ln703_1980_fu_13036123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3464_fu_13036135_p2() {
    add_ln703_3464_fu_13036135_p2 = (!add_ln703_3463_fu_13036129_p2.read().is_01() || !zext_ln1118_1795_fu_13029205_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3463_fu_13036129_p2.read()) + sc_biguint<14>(zext_ln1118_1795_fu_13029205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3465_fu_13022791_p2() {
    add_ln703_3465_fu_13022791_p2 = (!zext_ln1118_1796_fu_12985851_p1.read().is_01() || !zext_ln708_753_fu_12985875_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1796_fu_12985851_p1.read()) + sc_biguint<10>(zext_ln708_753_fu_12985875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3466_fu_13036144_p2() {
    add_ln703_3466_fu_13036144_p2 = (!zext_ln703_452_fu_13036141_p1.read().is_01() || !add_ln703_3464_fu_13036135_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_452_fu_13036141_p1.read()) + sc_biguint<14>(add_ln703_3464_fu_13036135_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3467_fu_13022797_p2() {
    add_ln703_3467_fu_13022797_p2 = (!zext_ln1118_1801_fu_12985923_p1.read().is_01() || !zext_ln1118_1802_fu_12985937_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1801_fu_12985923_p1.read()) + sc_biguint<10>(zext_ln1118_1802_fu_12985937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3468_fu_13022807_p2() {
    add_ln703_3468_fu_13022807_p2 = (!zext_ln1118_1808_fu_12986017_p1.read().is_01() || !tmp_1044_fu_12986043_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_1808_fu_12986017_p1.read()) + sc_biguint<8>(tmp_1044_fu_12986043_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3469_fu_13022817_p2() {
    add_ln703_3469_fu_13022817_p2 = (!zext_ln703_454_fu_13022813_p1.read().is_01() || !zext_ln1118_1804_fu_12985969_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_454_fu_13022813_p1.read()) + sc_biguint<9>(zext_ln1118_1804_fu_12985969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3470_fu_13022827_p2() {
    add_ln703_3470_fu_13022827_p2 = (!zext_ln703_455_fu_13022823_p1.read().is_01() || !zext_ln703_453_fu_13022803_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_455_fu_13022823_p1.read()) + sc_biguint<11>(zext_ln703_453_fu_13022803_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3471_fu_13036153_p2() {
    add_ln703_3471_fu_13036153_p2 = (!zext_ln703_456_fu_13036150_p1.read().is_01() || !add_ln703_3466_fu_13036144_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_456_fu_13036150_p1.read()) + sc_biguint<14>(add_ln703_3466_fu_13036144_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3472_fu_13022833_p2() {
    add_ln703_3472_fu_13022833_p2 = (!zext_ln1118_1812_fu_12986067_p1.read().is_01() || !zext_ln1118_1814_fu_12986099_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1812_fu_12986067_p1.read()) + sc_biguint<10>(zext_ln1118_1814_fu_12986099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3473_fu_13022843_p2() {
    add_ln703_3473_fu_13022843_p2 = (!zext_ln1118_1815_fu_12986113_p1.read().is_01() || !zext_ln708_754_fu_12986134_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1815_fu_12986113_p1.read()) + sc_biguint<10>(zext_ln708_754_fu_12986134_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3474_fu_13022853_p2() {
    add_ln703_3474_fu_13022853_p2 = (!zext_ln703_458_fu_13022849_p1.read().is_01() || !zext_ln703_457_fu_13022839_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_458_fu_13022849_p1.read()) + sc_biguint<11>(zext_ln703_457_fu_13022839_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3475_fu_13022863_p2() {
    add_ln703_3475_fu_13022863_p2 = (!sext_ln708_151_fu_12985817_p1.read().is_01() || !sext_ln708_152_fu_12986180_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_151_fu_12985817_p1.read()) + sc_bigint<11>(sext_ln708_152_fu_12986180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3476_fu_13022873_p2() {
    add_ln703_3476_fu_13022873_p2 = (!zext_ln708_725_fu_12984374_p1.read().is_01() || !sext_ln1118_1044_fu_12986166_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_725_fu_12984374_p1.read()) + sc_bigint<11>(sext_ln1118_1044_fu_12986166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3477_fu_13022883_p2() {
    add_ln703_3477_fu_13022883_p2 = (!sext_ln703_1985_fu_13022879_p1.read().is_01() || !zext_ln1118_1798_fu_12985879_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1985_fu_13022879_p1.read()) + sc_biguint<12>(zext_ln1118_1798_fu_12985879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3478_fu_13022893_p2() {
    add_ln703_3478_fu_13022893_p2 = (!sext_ln703_1986_fu_13022889_p1.read().is_01() || !sext_ln703_1984_fu_13022869_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1986_fu_13022889_p1.read()) + sc_bigint<13>(sext_ln703_1984_fu_13022869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3479_fu_13022899_p2() {
    add_ln703_3479_fu_13022899_p2 = (!add_ln703_3478_fu_13022893_p2.read().is_01() || !zext_ln703_459_fu_13022859_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3478_fu_13022893_p2.read()) + sc_biguint<13>(zext_ln703_459_fu_13022859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3480_fu_13036166_p2() {
    add_ln703_3480_fu_13036166_p2 = (!sext_ln703_1987_fu_13036163_p1.read().is_01() || !sext_ln703_1983_fu_13036159_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1987_fu_13036163_p1.read()) + sc_bigint<15>(sext_ln703_1983_fu_13036159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3481_fu_13036172_p2() {
    add_ln703_3481_fu_13036172_p2 = (!add_ln703_3480_fu_13036166_p2.read().is_01() || !zext_ln203_249_fu_13029208_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3480_fu_13036166_p2.read()) + sc_biguint<15>(zext_ln203_249_fu_13029208_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3482_fu_13022905_p2() {
    add_ln703_3482_fu_13022905_p2 = (!zext_ln708_755_fu_12986234_p1.read().is_01() || !sext_ln203_686_fu_12986276_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_755_fu_12986234_p1.read()) + sc_bigint<11>(sext_ln203_686_fu_12986276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3484_fu_13022911_p2() {
    add_ln703_3484_fu_13022911_p2 = (!sext_ln203_687_fu_12986300_p1.read().is_01() || !ap_const_lv12_EC0.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()) + sc_bigint<12>(ap_const_lv12_EC0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3485_fu_13022921_p2() {
    add_ln703_3485_fu_13022921_p2 = (!sext_ln703_983_fu_13022917_p1.read().is_01() || !sext_ln203_688_fu_12986314_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_983_fu_13022917_p1.read()) + sc_bigint<13>(sext_ln203_688_fu_12986314_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3486_fu_13022927_p2() {
    add_ln703_3486_fu_13022927_p2 = (!sext_ln1118_1046_fu_12986372_p1.read().is_01() || !zext_ln1118_1824_fu_12986358_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1046_fu_12986372_p1.read()) + sc_biguint<12>(zext_ln1118_1824_fu_12986358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3487_fu_13022937_p2() {
    add_ln703_3487_fu_13022937_p2 = (!sext_ln703_1990_fu_13022933_p1.read().is_01() || !add_ln703_3485_fu_13022921_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1990_fu_13022933_p1.read()) + sc_biguint<13>(add_ln703_3485_fu_13022921_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3488_fu_13022947_p2() {
    add_ln703_3488_fu_13022947_p2 = (!sext_ln1118_1049_fu_12986432_p1.read().is_01() || !sext_ln1118_1050_fu_12986456_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1049_fu_12986432_p1.read()) + sc_bigint<12>(sext_ln1118_1050_fu_12986456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3489_fu_13022957_p2() {
    add_ln703_3489_fu_13022957_p2 = (!sext_ln703_1991_fu_13022953_p1.read().is_01() || !sext_ln703_984_fu_13022943_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1991_fu_13022953_p1.read()) + sc_bigint<14>(sext_ln703_984_fu_13022943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3490_fu_13022963_p2() {
    add_ln703_3490_fu_13022963_p2 = (!sext_ln1118_1048_fu_12986418_p1.read().is_01() || !sext_ln1118_1047_fu_12986404_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1048_fu_12986418_p1.read()) + sc_bigint<11>(sext_ln1118_1047_fu_12986404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3491_fu_13022969_p2() {
    add_ln703_3491_fu_13022969_p2 = (!add_ln703_3490_fu_13022963_p2.read().is_01() || !zext_ln708_756_fu_12986470_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3490_fu_13022963_p2.read()) + sc_biguint<11>(zext_ln708_756_fu_12986470_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3492_fu_13036194_p2() {
    add_ln703_3492_fu_13036194_p2 = (!sext_ln703_1992_fu_13036191_p1.read().is_01() || !add_ln703_3489_reg_13043110.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1992_fu_13036191_p1.read()) + sc_biguint<14>(add_ln703_3489_reg_13043110.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3493_fu_13036199_p2() {
    add_ln703_3493_fu_13036199_p2 = (!add_ln703_3492_fu_13036194_p2.read().is_01() || !sext_ln1118_1054_fu_13029211_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3492_fu_13036194_p2.read()) + sc_bigint<14>(sext_ln1118_1054_fu_13029211_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3494_fu_13022975_p2() {
    add_ln703_3494_fu_13022975_p2 = (!sext_ln708_153_fu_12986706_p1.read().is_01() || !zext_ln1118_1828_fu_12986522_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_153_fu_12986706_p1.read()) + sc_biguint<12>(zext_ln1118_1828_fu_12986522_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3495_fu_13022985_p2() {
    add_ln703_3495_fu_13022985_p2 = (!sext_ln703_1994_fu_13022981_p1.read().is_01() || !sext_ln1118_1055_fu_12986674_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1994_fu_13022981_p1.read()) + sc_bigint<13>(sext_ln1118_1055_fu_12986674_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3496_fu_13036212_p2() {
    add_ln703_3496_fu_13036212_p2 = (!sext_ln703_1995_fu_13036209_p1.read().is_01() || !sext_ln703_1993_fu_13036205_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1995_fu_13036209_p1.read()) + sc_bigint<15>(sext_ln703_1993_fu_13036205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3497_fu_13022991_p2() {
    add_ln703_3497_fu_13022991_p2 = (!zext_ln708_758_fu_12986572_p1.read().is_01() || !zext_ln708_759_fu_12986734_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_758_fu_12986572_p1.read()) + sc_biguint<11>(zext_ln708_759_fu_12986734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3498_fu_13022997_p2() {
    add_ln703_3498_fu_13022997_p2 = (!add_ln703_3497_fu_13022991_p2.read().is_01() || !zext_ln708_757_fu_12986536_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3497_fu_13022991_p2.read()) + sc_biguint<11>(zext_ln708_757_fu_12986536_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3499_fu_13023007_p2() {
    add_ln703_3499_fu_13023007_p2 = (!sext_ln1118_1053_fu_12986640_p1.read().is_01() || !sext_ln1118_1052_fu_12986596_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1053_fu_12986640_p1.read()) + sc_bigint<11>(sext_ln1118_1052_fu_12986596_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3500_fu_13023017_p2() {
    add_ln703_3500_fu_13023017_p2 = (!sext_ln703_1996_fu_13023013_p1.read().is_01() || !sext_ln1118_1051_fu_12986502_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1996_fu_13023013_p1.read()) + sc_bigint<12>(sext_ln1118_1051_fu_12986502_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3501_fu_13023027_p2() {
    add_ln703_3501_fu_13023027_p2 = (!sext_ln703_1997_fu_13023023_p1.read().is_01() || !zext_ln703_460_fu_13023003_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1997_fu_13023023_p1.read()) + sc_biguint<13>(zext_ln703_460_fu_13023003_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3502_fu_13036221_p2() {
    add_ln703_3502_fu_13036221_p2 = (!sext_ln703_1998_fu_13036218_p1.read().is_01() || !add_ln703_3496_fu_13036212_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1998_fu_13036218_p1.read()) + sc_biguint<15>(add_ln703_3496_fu_13036212_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3503_fu_13023033_p2() {
    add_ln703_3503_fu_13023033_p2 = (!sext_ln203_689_fu_12986748_p1.read().is_01() || !sext_ln203_692_fu_12986802_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_689_fu_12986748_p1.read()) + sc_bigint<12>(sext_ln203_692_fu_12986802_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3504_fu_13036230_p2() {
    add_ln703_3504_fu_13036230_p2 = (!sext_ln703_1999_fu_13036227_p1.read().is_01() || !add_ln703_3502_fu_13036221_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1999_fu_13036227_p1.read()) + sc_biguint<15>(add_ln703_3502_fu_13036221_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3505_fu_13023039_p2() {
    add_ln703_3505_fu_13023039_p2 = (!zext_ln708_760_fu_12986830_p1.read().is_01() || !zext_ln708_761_fu_12986844_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_760_fu_12986830_p1.read()) + sc_biguint<11>(zext_ln708_761_fu_12986844_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3506_fu_13023045_p2() {
    add_ln703_3506_fu_13023045_p2 = (!zext_ln203_250_fu_12986884_p1.read().is_01() || !trunc_ln203_40_fu_12986888_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_250_fu_12986884_p1.read()) + sc_biguint<9>(trunc_ln203_40_fu_12986888_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3507_fu_13023055_p2() {
    add_ln703_3507_fu_13023055_p2 = (!zext_ln703_461_fu_13023051_p1.read().is_01() || !add_ln703_3505_fu_13023039_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_461_fu_13023051_p1.read()) + sc_biguint<11>(add_ln703_3505_fu_13023039_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3508_fu_13036239_p2() {
    add_ln703_3508_fu_13036239_p2 = (!zext_ln703_462_fu_13036236_p1.read().is_01() || !add_ln703_3504_fu_13036230_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_462_fu_13036236_p1.read()) + sc_biguint<15>(add_ln703_3504_fu_13036230_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3509_fu_13023061_p2() {
    add_ln703_3509_fu_13023061_p2 = (!zext_ln203_252_fu_12986922_p1.read().is_01() || !sext_ln203_690_fu_12986768_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_252_fu_12986922_p1.read()) + sc_bigint<12>(sext_ln203_690_fu_12986768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3510_fu_13023067_p2() {
    add_ln703_3510_fu_13023067_p2 = (!add_ln703_3509_fu_13023061_p2.read().is_01() || !zext_ln203_251_fu_12986908_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3509_fu_13023061_p2.read()) + sc_biguint<12>(zext_ln203_251_fu_12986908_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3511_fu_13023077_p2() {
    add_ln703_3511_fu_13023077_p2 = (!sext_ln203_691_fu_12986788_p1.read().is_01() || !zext_ln203_253_fu_12986936_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_691_fu_12986788_p1.read()) + sc_biguint<11>(zext_ln203_253_fu_12986936_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3512_fu_13023083_p2() {
    add_ln703_3512_fu_13023083_p2 = (!sext_ln203_673_fu_12984174_p1.read().is_01() || !sext_ln203_693_fu_12986972_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_673_fu_12984174_p1.read()) + sc_bigint<8>(sext_ln203_693_fu_12986972_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3513_fu_13023093_p2() {
    add_ln703_3513_fu_13023093_p2 = (!sext_ln703_2002_fu_13023089_p1.read().is_01() || !add_ln703_3511_fu_13023077_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2002_fu_13023089_p1.read()) + sc_biguint<11>(add_ln703_3511_fu_13023077_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3514_fu_13023103_p2() {
    add_ln703_3514_fu_13023103_p2 = (!sext_ln703_2003_fu_13023099_p1.read().is_01() || !sext_ln703_2001_fu_13023073_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2003_fu_13023099_p1.read()) + sc_bigint<13>(sext_ln703_2001_fu_13023073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3516_fu_13023109_p2() {
    add_ln703_3516_fu_13023109_p2 = (!sext_ln1118_1056_fu_12986986_p1.read().is_01() || !ap_const_lv11_790.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1056_fu_12986986_p1.read()) + sc_bigint<11>(ap_const_lv11_790));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3517_fu_13023119_p2() {
    add_ln703_3517_fu_13023119_p2 = (!sext_ln1118_1058_fu_12987014_p1.read().is_01() || !sext_ln1118_1057_fu_12987000_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1058_fu_12987014_p1.read()) + sc_bigint<11>(sext_ln1118_1057_fu_12987000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3518_fu_13023129_p2() {
    add_ln703_3518_fu_13023129_p2 = (!sext_ln703_2006_fu_13023125_p1.read().is_01() || !sext_ln703_2005_fu_13023115_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2006_fu_13023125_p1.read()) + sc_bigint<12>(sext_ln703_2005_fu_13023115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3519_fu_13023135_p2() {
    add_ln703_3519_fu_13023135_p2 = (!zext_ln708_763_fu_12987088_p1.read().is_01() || !sext_ln1118_1059_fu_12987028_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_763_fu_12987088_p1.read()) + sc_bigint<11>(sext_ln1118_1059_fu_12987028_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3520_fu_13023145_p2() {
    add_ln703_3520_fu_13023145_p2 = (!sext_ln703_2007_fu_13023141_p1.read().is_01() || !add_ln703_3518_fu_13023129_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2007_fu_13023141_p1.read()) + sc_biguint<12>(add_ln703_3518_fu_13023129_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3521_fu_13023155_p2() {
    add_ln703_3521_fu_13023155_p2 = (!sext_ln1116_132_fu_12987151_p1.read().is_01() || !sext_ln1118_1062_fu_12987137_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_132_fu_12987151_p1.read()) + sc_bigint<11>(sext_ln1118_1062_fu_12987137_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3522_fu_13023165_p2() {
    add_ln703_3522_fu_13023165_p2 = (!sext_ln703_2009_fu_13023161_p1.read().is_01() || !sext_ln1118_1061_fu_12987074_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2009_fu_13023161_p1.read()) + sc_bigint<12>(sext_ln1118_1061_fu_12987074_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3523_fu_13023175_p2() {
    add_ln703_3523_fu_13023175_p2 = (!sext_ln703_2010_fu_13023171_p1.read().is_01() || !sext_ln703_2008_fu_13023151_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2010_fu_13023171_p1.read()) + sc_bigint<13>(sext_ln703_2008_fu_13023151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3524_fu_13023181_p2() {
    add_ln703_3524_fu_13023181_p2 = (!sext_ln1118_1066_fu_12987251_p1.read().is_01() || !zext_ln1118_1853_fu_12987347_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1066_fu_12987251_p1.read()) + sc_biguint<12>(zext_ln1118_1853_fu_12987347_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3525_fu_13036264_p2() {
    add_ln703_3525_fu_13036264_p2 = (!sext_ln703_2012_fu_13036261_p1.read().is_01() || !sext_ln703_2011_fu_13036258_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2012_fu_13036261_p1.read()) + sc_bigint<14>(sext_ln703_2011_fu_13036258_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3526_fu_13023187_p2() {
    add_ln703_3526_fu_13023187_p2 = (!zext_ln708_765_fu_12987434_p1.read().is_01() || !sext_ln1118_1070_fu_12987524_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_765_fu_12987434_p1.read()) + sc_bigint<11>(sext_ln1118_1070_fu_12987524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3527_fu_13023193_p2() {
    add_ln703_3527_fu_13023193_p2 = (!add_ln703_3526_fu_13023187_p2.read().is_01() || !zext_ln708_764_fu_12987411_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3526_fu_13023187_p2.read()) + sc_biguint<11>(zext_ln708_764_fu_12987411_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3528_fu_13036273_p2() {
    add_ln703_3528_fu_13036273_p2 = (!sext_ln703_2013_fu_13036270_p1.read().is_01() || !add_ln703_3525_fu_13036264_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2013_fu_13036270_p1.read()) + sc_biguint<14>(add_ln703_3525_fu_13036264_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3529_fu_13023199_p2() {
    add_ln703_3529_fu_13023199_p2 = (!sext_ln1118_1067_fu_12987265_p1.read().is_01() || !sext_ln1116_135_fu_12987543_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1067_fu_12987265_p1.read()) + sc_bigint<10>(sext_ln1116_135_fu_12987543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_352_fu_13002563_p2() {
    add_ln703_352_fu_13002563_p2 = (!sext_ln203_fu_12925229_p1.read().is_01() || !zext_ln703_fu_13002559_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_fu_12925229_p1.read()) + sc_biguint<13>(zext_ln703_fu_13002559_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3530_fu_13023209_p2() {
    add_ln703_3530_fu_13023209_p2 = (!sext_ln703_2014_fu_13023205_p1.read().is_01() || !sext_ln1118_1064_fu_12987209_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2014_fu_13023205_p1.read()) + sc_bigint<11>(sext_ln1118_1064_fu_12987209_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3531_fu_13023215_p2() {
    add_ln703_3531_fu_13023215_p2 = (!sext_ln1118_1068_fu_12987379_p1.read().is_01() || !sext_ln1116_134_fu_12987470_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_1068_fu_12987379_p1.read()) + sc_bigint<8>(sext_ln1116_134_fu_12987470_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3532_fu_13023225_p2() {
    add_ln703_3532_fu_13023225_p2 = (!sext_ln703_2015_fu_13023221_p1.read().is_01() || !sext_ln1116_133_fu_12987320_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_2015_fu_13023221_p1.read()) + sc_bigint<9>(sext_ln1116_133_fu_12987320_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3533_fu_13023235_p2() {
    add_ln703_3533_fu_13023235_p2 = (!sext_ln703_2016_fu_13023231_p1.read().is_01() || !add_ln703_3530_fu_13023209_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2016_fu_13023231_p1.read()) + sc_biguint<11>(add_ln703_3530_fu_13023209_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3534_fu_13036282_p2() {
    add_ln703_3534_fu_13036282_p2 = (!sext_ln703_2017_fu_13036279_p1.read().is_01() || !add_ln703_3528_fu_13036273_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2017_fu_13036279_p1.read()) + sc_biguint<14>(add_ln703_3528_fu_13036273_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3535_fu_13023241_p2() {
    add_ln703_3535_fu_13023241_p2 = (!sext_ln203_697_fu_12987668_p1.read().is_01() || !sext_ln203_704_fu_12987888_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_697_fu_12987668_p1.read()) + sc_bigint<12>(sext_ln203_704_fu_12987888_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3536_fu_13036295_p2() {
    add_ln703_3536_fu_13036295_p2 = (!sext_ln703_2019_fu_13036292_p1.read().is_01() || !sext_ln703_2018_fu_13036288_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2019_fu_13036292_p1.read()) + sc_bigint<15>(sext_ln703_2018_fu_13036288_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3537_fu_13023247_p2() {
    add_ln703_3537_fu_13023247_p2 = (!sext_ln203_699_fu_12987706_p1.read().is_01() || !sext_ln203_700_fu_12987730_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_699_fu_12987706_p1.read()) + sc_bigint<11>(sext_ln203_700_fu_12987730_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3538_fu_13023257_p2() {
    add_ln703_3538_fu_13023257_p2 = (!sext_ln703_2020_fu_13023253_p1.read().is_01() || !sext_ln203_695_fu_12987590_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2020_fu_13023253_p1.read()) + sc_bigint<12>(sext_ln203_695_fu_12987590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3539_fu_13036304_p2() {
    add_ln703_3539_fu_13036304_p2 = (!sext_ln703_2021_fu_13036301_p1.read().is_01() || !add_ln703_3536_fu_13036295_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2021_fu_13036301_p1.read()) + sc_biguint<15>(add_ln703_3536_fu_13036295_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_353_fu_13002569_p2() {
    add_ln703_353_fu_13002569_p2 = (!sext_ln1116_fu_12925170_p1.read().is_01() || !zext_ln1116_2_fu_12925281_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_fu_12925170_p1.read()) + sc_biguint<12>(zext_ln1116_2_fu_12925281_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3540_fu_13023263_p2() {
    add_ln703_3540_fu_13023263_p2 = (!sext_ln203_698_fu_12987692_p1.read().is_01() || !sext_ln203_701_fu_12987744_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_698_fu_12987692_p1.read()) + sc_bigint<10>(sext_ln203_701_fu_12987744_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3541_fu_13023273_p2() {
    add_ln703_3541_fu_13023273_p2 = (!sext_ln703_2022_fu_13023269_p1.read().is_01() || !sext_ln203_696_fu_12987626_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2022_fu_13023269_p1.read()) + sc_bigint<11>(sext_ln203_696_fu_12987626_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3542_fu_13023283_p2() {
    add_ln703_3542_fu_13023283_p2 = (!sext_ln203_703_fu_12987874_p1.read().is_01() || !sext_ln203_694_fu_12987576_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_703_fu_12987874_p1.read()) + sc_bigint<10>(sext_ln203_694_fu_12987576_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3543_fu_13023289_p2() {
    add_ln703_3543_fu_13023289_p2 = (!zext_ln708_769_fu_12987832_p1.read().is_01() || !sext_ln203_702_fu_12987807_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_769_fu_12987832_p1.read()) + sc_bigint<8>(sext_ln203_702_fu_12987807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3544_fu_13023299_p2() {
    add_ln703_3544_fu_13023299_p2 = (!sext_ln703_2024_fu_13023295_p1.read().is_01() || !add_ln703_3542_fu_13023283_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2024_fu_13023295_p1.read()) + sc_biguint<10>(add_ln703_3542_fu_13023283_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3545_fu_13023309_p2() {
    add_ln703_3545_fu_13023309_p2 = (!sext_ln703_2025_fu_13023305_p1.read().is_01() || !sext_ln703_2023_fu_13023279_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2025_fu_13023305_p1.read()) + sc_bigint<12>(sext_ln703_2023_fu_13023279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3547_fu_13023315_p2() {
    add_ln703_3547_fu_13023315_p2 = (!sext_ln1118_1073_fu_12987908_p1.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1073_fu_12987908_p1.read()) + sc_bigint<11>(ap_const_lv11_600));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3548_fu_13023325_p2() {
    add_ln703_3548_fu_13023325_p2 = (!sext_ln1118_1074_fu_12987922_p1.read().is_01() || !zext_ln708_770_fu_12987943_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1074_fu_12987922_p1.read()) + sc_biguint<12>(zext_ln708_770_fu_12987943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3549_fu_13023331_p2() {
    add_ln703_3549_fu_13023331_p2 = (!add_ln703_3548_fu_13023325_p2.read().is_01() || !sext_ln703_2028_fu_13023321_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3548_fu_13023325_p2.read()) + sc_bigint<12>(sext_ln703_2028_fu_13023321_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_354_fu_13002579_p2() {
    add_ln703_354_fu_13002579_p2 = (!sext_ln703_128_fu_13002575_p1.read().is_01() || !add_ln703_352_fu_13002563_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_128_fu_13002575_p1.read()) + sc_biguint<13>(add_ln703_352_fu_13002563_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3550_fu_13023341_p2() {
    add_ln703_3550_fu_13023341_p2 = (!zext_ln708_771_fu_12988015_p1.read().is_01() || !sext_ln1118_1076_fu_12987987_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_771_fu_12988015_p1.read()) + sc_bigint<11>(sext_ln1118_1076_fu_12987987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3551_fu_13023351_p2() {
    add_ln703_3551_fu_13023351_p2 = (!sext_ln703_2030_fu_13023347_p1.read().is_01() || !zext_ln1118_1876_fu_12987957_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2030_fu_13023347_p1.read()) + sc_biguint<12>(zext_ln1118_1876_fu_12987957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3552_fu_13023361_p2() {
    add_ln703_3552_fu_13023361_p2 = (!sext_ln703_2031_fu_13023357_p1.read().is_01() || !sext_ln703_2029_fu_13023337_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2031_fu_13023357_p1.read()) + sc_bigint<13>(sext_ln703_2029_fu_13023337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3553_fu_13023367_p2() {
    add_ln703_3553_fu_13023367_p2 = (!zext_ln1118_1877_fu_12988043_p1.read().is_01() || !sext_ln203_705_fu_12988075_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1877_fu_12988043_p1.read()) + sc_bigint<12>(sext_ln203_705_fu_12988075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3554_fu_13036329_p2() {
    add_ln703_3554_fu_13036329_p2 = (!sext_ln703_2032_fu_13036326_p1.read().is_01() || !sext_ln703_992_fu_13036323_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2032_fu_13036326_p1.read()) + sc_bigint<14>(sext_ln703_992_fu_13036323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3555_fu_13023373_p2() {
    add_ln703_3555_fu_13023373_p2 = (!zext_ln708_772_fu_12988089_p1.read().is_01() || !sext_ln1118_1064_fu_12987209_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_772_fu_12988089_p1.read()) + sc_bigint<11>(sext_ln1118_1064_fu_12987209_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3556_fu_13023383_p2() {
    add_ln703_3556_fu_13023383_p2 = (!zext_ln1116_172_fu_12987155_p1.read().is_01() || !zext_ln1118_1705_fu_12983652_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_172_fu_12987155_p1.read()) + sc_biguint<9>(zext_ln1118_1705_fu_12983652_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3557_fu_13023393_p2() {
    add_ln703_3557_fu_13023393_p2 = (!zext_ln703_463_fu_13023389_p1.read().is_01() || !sext_ln703_2033_fu_13023379_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_463_fu_13023389_p1.read()) + sc_bigint<12>(sext_ln703_2033_fu_13023379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3558_fu_13036338_p2() {
    add_ln703_3558_fu_13036338_p2 = (!sext_ln703_2034_fu_13036335_p1.read().is_01() || !add_ln703_3554_fu_13036329_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2034_fu_13036335_p1.read()) + sc_biguint<14>(add_ln703_3554_fu_13036329_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3559_fu_13023399_p2() {
    add_ln703_3559_fu_13023399_p2 = (!zext_ln1118_1880_fu_12988111_p1.read().is_01() || !sext_ln1118_1080_fu_12988263_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1880_fu_12988111_p1.read()) + sc_bigint<12>(sext_ln1118_1080_fu_12988263_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_355_fu_13002589_p2() {
    add_ln703_355_fu_13002589_p2 = (!sext_ln1116_12_fu_12925322_p1.read().is_01() || !sext_ln1116_13_fu_12925407_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_12_fu_12925322_p1.read()) + sc_bigint<12>(sext_ln1116_13_fu_12925407_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3560_fu_13036347_p2() {
    add_ln703_3560_fu_13036347_p2 = (!sext_ln703_2035_fu_13036344_p1.read().is_01() || !add_ln703_3558_fu_13036338_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2035_fu_13036344_p1.read()) + sc_biguint<14>(add_ln703_3558_fu_13036338_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3561_fu_13023405_p2() {
    add_ln703_3561_fu_13023405_p2 = (!zext_ln708_773_fu_12988167_p1.read().is_01() || !zext_ln708_774_fu_12988207_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_773_fu_12988167_p1.read()) + sc_biguint<11>(zext_ln708_774_fu_12988207_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3562_fu_13023415_p2() {
    add_ln703_3562_fu_13023415_p2 = (!zext_ln703_464_fu_13023411_p1.read().is_01() || !sext_ln1118_1081_fu_12988287_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_464_fu_13023411_p1.read()) + sc_bigint<13>(sext_ln1118_1081_fu_12988287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3563_fu_13036360_p2() {
    add_ln703_3563_fu_13036360_p2 = (!sext_ln703_2037_fu_13036357_p1.read().is_01() || !sext_ln703_2036_fu_13036353_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2037_fu_13036357_p1.read()) + sc_bigint<15>(sext_ln703_2036_fu_13036353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3564_fu_13023421_p2() {
    add_ln703_3564_fu_13023421_p2 = (!zext_ln1118_1811_fu_12986053_p1.read().is_01() || !trunc_ln1118_55_fu_12988325_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1811_fu_12986053_p1.read()) + sc_biguint<10>(trunc_ln1118_55_fu_12988325_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3565_fu_13023427_p2() {
    add_ln703_3565_fu_13023427_p2 = (!add_ln703_3564_fu_13023421_p2.read().is_01() || !zext_ln1118_1886_fu_12988311_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3564_fu_13023421_p2.read()) + sc_biguint<10>(zext_ln1118_1886_fu_12988311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3566_fu_13023437_p2() {
    add_ln703_3566_fu_13023437_p2 = (!zext_ln708_776_fu_12988363_p1.read().is_01() || !sext_ln708_154_fu_12988153_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_776_fu_12988363_p1.read()) + sc_bigint<11>(sext_ln708_154_fu_12988153_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3567_fu_13023447_p2() {
    add_ln703_3567_fu_13023447_p2 = (!sext_ln1118_1078_fu_12988139_p1.read().is_01() || !sext_ln1118_1079_fu_12988239_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1078_fu_12988139_p1.read()) + sc_bigint<10>(sext_ln1118_1079_fu_12988239_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3568_fu_13023457_p2() {
    add_ln703_3568_fu_13023457_p2 = (!sext_ln703_2039_fu_13023453_p1.read().is_01() || !sext_ln703_2038_fu_13023443_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2039_fu_13023453_p1.read()) + sc_bigint<12>(sext_ln703_2038_fu_13023443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3569_fu_13023467_p2() {
    add_ln703_3569_fu_13023467_p2 = (!sext_ln703_2040_fu_13023463_p1.read().is_01() || !zext_ln703_465_fu_13023433_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2040_fu_13023463_p1.read()) + sc_biguint<13>(zext_ln703_465_fu_13023433_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_356_fu_13002599_p2() {
    add_ln703_356_fu_13002599_p2 = (!sext_ln703_129_fu_13002595_p1.read().is_01() || !sext_ln703_fu_13002585_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_129_fu_13002595_p1.read()) + sc_bigint<14>(sext_ln703_fu_13002585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3570_fu_13036369_p2() {
    add_ln703_3570_fu_13036369_p2 = (!sext_ln703_2041_fu_13036366_p1.read().is_01() || !add_ln703_3563_fu_13036360_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2041_fu_13036366_p1.read()) + sc_biguint<15>(add_ln703_3563_fu_13036360_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3571_fu_13036375_p2() {
    add_ln703_3571_fu_13036375_p2 = (!add_ln703_3570_fu_13036369_p2.read().is_01() || !sext_ln203_707_fu_13029214_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3570_fu_13036369_p2.read()) + sc_bigint<15>(sext_ln203_707_fu_13029214_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3572_fu_13023473_p2() {
    add_ln703_3572_fu_13023473_p2 = (!sext_ln203_709_fu_12988513_p1.read().is_01() || !zext_ln203_254_fu_12988391_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_709_fu_12988513_p1.read()) + sc_biguint<12>(zext_ln203_254_fu_12988391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3573_fu_13036384_p2() {
    add_ln703_3573_fu_13036384_p2 = (!sext_ln703_2042_fu_13036381_p1.read().is_01() || !add_ln703_3571_fu_13036375_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2042_fu_13036381_p1.read()) + sc_biguint<15>(add_ln703_3571_fu_13036375_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3574_fu_13023479_p2() {
    add_ln703_3574_fu_13023479_p2 = (!zext_ln203_255_fu_12988415_p1.read().is_01() || !tmp_1049_fu_12986184_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_255_fu_12988415_p1.read()) + sc_biguint<10>(tmp_1049_fu_12986184_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3575_fu_13023489_p2() {
    add_ln703_3575_fu_13023489_p2 = (!sext_ln203_706_fu_12988377_p1.read().is_01() || !sext_ln203_708_fu_12988499_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_706_fu_12988377_p1.read()) + sc_bigint<11>(sext_ln203_708_fu_12988499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3576_fu_13023495_p2() {
    add_ln703_3576_fu_13023495_p2 = (!add_ln703_3575_fu_13023489_p2.read().is_01() || !zext_ln708_777_fu_12988527_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3575_fu_13023489_p2.read()) + sc_biguint<11>(zext_ln708_777_fu_12988527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3577_fu_13023505_p2() {
    add_ln703_3577_fu_13023505_p2 = (!sext_ln703_2044_fu_13023501_p1.read().is_01() || !zext_ln703_466_fu_13023485_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2044_fu_13023501_p1.read()) + sc_biguint<12>(zext_ln703_466_fu_13023485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3579_fu_13023511_p2() {
    add_ln703_3579_fu_13023511_p2 = (!sext_ln203_687_fu_12986300_p1.read().is_01() || !ap_const_lv12_CD8.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()) + sc_bigint<12>(ap_const_lv12_CD8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_357_fu_13002605_p2() {
    add_ln703_357_fu_13002605_p2 = (!zext_ln708_3_fu_12925451_p1.read().is_01() || !zext_ln708_5_fu_12925490_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_3_fu_12925451_p1.read()) + sc_biguint<11>(zext_ln708_5_fu_12925490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3580_fu_13023517_p2() {
    add_ln703_3580_fu_13023517_p2 = (!add_ln703_3579_fu_13023511_p2.read().is_01() || !zext_ln1118_1893_fu_12988555_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3579_fu_13023511_p2.read()) + sc_biguint<12>(zext_ln1118_1893_fu_12988555_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3581_fu_13023527_p2() {
    add_ln703_3581_fu_13023527_p2 = (!sext_ln708_155_fu_12988541_p1.read().is_01() || !sext_ln1118_1084_fu_12988599_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_155_fu_12988541_p1.read()) + sc_bigint<11>(sext_ln1118_1084_fu_12988599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3582_fu_13023537_p2() {
    add_ln703_3582_fu_13023537_p2 = (!sext_ln703_2047_fu_13023533_p1.read().is_01() || !sext_ln703_2046_fu_13023523_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2047_fu_13023533_p1.read()) + sc_bigint<13>(sext_ln703_2046_fu_13023523_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3583_fu_13023547_p2() {
    add_ln703_3583_fu_13023547_p2 = (!sext_ln1118_1085_fu_12988631_p1.read().is_01() || !sext_ln1118_1086_fu_12988645_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1085_fu_12988631_p1.read()) + sc_bigint<12>(sext_ln1118_1086_fu_12988645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3584_fu_13023557_p2() {
    add_ln703_3584_fu_13023557_p2 = (!sext_ln703_2048_fu_13023553_p1.read().is_01() || !sext_ln703_996_fu_13023543_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2048_fu_13023553_p1.read()) + sc_bigint<14>(sext_ln703_996_fu_13023543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3585_fu_13023563_p2() {
    add_ln703_3585_fu_13023563_p2 = (!zext_ln708_778_fu_12988665_p1.read().is_01() || !sext_ln1118_1087_fu_12988709_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_778_fu_12988665_p1.read()) + sc_bigint<11>(sext_ln1118_1087_fu_12988709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3586_fu_13023573_p2() {
    add_ln703_3586_fu_13023573_p2 = (!sext_ln703_2049_fu_13023569_p1.read().is_01() || !sext_ln708_156_fu_12988753_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2049_fu_13023569_p1.read()) + sc_bigint<12>(sext_ln708_156_fu_12988753_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3587_fu_13036406_p2() {
    add_ln703_3587_fu_13036406_p2 = (!sext_ln703_2050_fu_13036403_p1.read().is_01() || !add_ln703_3584_reg_13043220.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2050_fu_13036403_p1.read()) + sc_biguint<14>(add_ln703_3584_reg_13043220.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3588_fu_13036411_p2() {
    add_ln703_3588_fu_13036411_p2 = (!add_ln703_3587_fu_13036406_p2.read().is_01() || !zext_ln1118_1901_fu_13029217_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3587_fu_13036406_p2.read()) + sc_biguint<14>(zext_ln1118_1901_fu_13029217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3589_fu_13023579_p2() {
    add_ln703_3589_fu_13023579_p2 = (!sext_ln1118_1088_fu_12988859_p1.read().is_01() || !sext_ln708_153_fu_12986706_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1088_fu_12988859_p1.read()) + sc_bigint<12>(sext_ln708_153_fu_12986706_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_358_fu_13002615_p2() {
    add_ln703_358_fu_13002615_p2 = (!zext_ln703_1_fu_13002611_p1.read().is_01() || !zext_ln1116_5_fu_12925363_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_1_fu_13002611_p1.read()) + sc_biguint<12>(zext_ln1116_5_fu_12925363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3590_fu_13023589_p2() {
    add_ln703_3590_fu_13023589_p2 = (!sext_ln703_2052_fu_13023585_p1.read().is_01() || !sext_ln708_157_fu_12988791_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2052_fu_13023585_p1.read()) + sc_bigint<13>(sext_ln708_157_fu_12988791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3591_fu_13036424_p2() {
    add_ln703_3591_fu_13036424_p2 = (!sext_ln703_2053_fu_13036421_p1.read().is_01() || !sext_ln703_2051_fu_13036417_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2053_fu_13036421_p1.read()) + sc_bigint<15>(sext_ln703_2051_fu_13036417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3592_fu_13023595_p2() {
    add_ln703_3592_fu_13023595_p2 = (!zext_ln1118_1902_fu_12988827_p1.read().is_01() || !sext_ln1118_1089_fu_12988873_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1902_fu_12988827_p1.read()) + sc_bigint<12>(sext_ln1118_1089_fu_12988873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3593_fu_13023601_p2() {
    add_ln703_3593_fu_13023601_p2 = (!sext_ln1118_1090_fu_12988893_p1.read().is_01() || !zext_ln1118_1704_fu_12983648_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1090_fu_12988893_p1.read()) + sc_biguint<10>(zext_ln1118_1704_fu_12983648_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3594_fu_13023611_p2() {
    add_ln703_3594_fu_13023611_p2 = (!sext_ln703_2054_fu_13023607_p1.read().is_01() || !sext_ln1118_1091_fu_12988907_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2054_fu_13023607_p1.read()) + sc_bigint<11>(sext_ln1118_1091_fu_12988907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3595_fu_13023621_p2() {
    add_ln703_3595_fu_13023621_p2 = (!sext_ln703_2055_fu_13023617_p1.read().is_01() || !add_ln703_3592_fu_13023595_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2055_fu_13023617_p1.read()) + sc_biguint<12>(add_ln703_3592_fu_13023595_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3596_fu_13036433_p2() {
    add_ln703_3596_fu_13036433_p2 = (!sext_ln703_2056_fu_13036430_p1.read().is_01() || !add_ln703_3591_fu_13036424_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2056_fu_13036430_p1.read()) + sc_biguint<15>(add_ln703_3591_fu_13036424_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3597_fu_13023627_p2() {
    add_ln703_3597_fu_13023627_p2 = (!sext_ln203_710_fu_12988939_p1.read().is_01() || !sext_ln203_711_fu_12989003_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_710_fu_12988939_p1.read()) + sc_bigint<12>(sext_ln203_711_fu_12989003_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3598_fu_13036442_p2() {
    add_ln703_3598_fu_13036442_p2 = (!sext_ln703_2057_fu_13036439_p1.read().is_01() || !add_ln703_3596_fu_13036433_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2057_fu_13036439_p1.read()) + sc_biguint<15>(add_ln703_3596_fu_13036433_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3599_fu_13023633_p2() {
    add_ln703_3599_fu_13023633_p2 = (!sext_ln203_712_fu_12989193_p1.read().is_01() || !zext_ln203_256_fu_12988967_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_712_fu_12989193_p1.read()) + sc_biguint<12>(zext_ln203_256_fu_12988967_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_359_fu_13002625_p2() {
    add_ln703_359_fu_13002625_p2 = (!zext_ln703_2_fu_13002621_p1.read().is_01() || !add_ln703_356_fu_13002599_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_2_fu_13002621_p1.read()) + sc_biguint<14>(add_ln703_356_fu_13002599_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3600_fu_13023643_p2() {
    add_ln703_3600_fu_13023643_p2 = (!zext_ln708_781_fu_12989017_p1.read().is_01() || !zext_ln708_738_fu_12985156_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_781_fu_12989017_p1.read()) + sc_biguint<11>(zext_ln708_738_fu_12985156_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3601_fu_13023653_p2() {
    add_ln703_3601_fu_13023653_p2 = (!zext_ln703_467_fu_13023649_p1.read().is_01() || !sext_ln703_2059_fu_13023639_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_467_fu_13023649_p1.read()) + sc_bigint<13>(sext_ln703_2059_fu_13023639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3602_fu_13036455_p2() {
    add_ln703_3602_fu_13036455_p2 = (!sext_ln703_2060_fu_13036452_p1.read().is_01() || !sext_ln703_2058_fu_13036448_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2060_fu_13036452_p1.read()) + sc_bigint<16>(sext_ln703_2058_fu_13036448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3603_fu_13023659_p2() {
    add_ln703_3603_fu_13023659_p2 = (!zext_ln203_257_fu_12989031_p1.read().is_01() || !zext_ln1118_1815_fu_12986113_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_257_fu_12989031_p1.read()) + sc_biguint<10>(zext_ln1118_1815_fu_12986113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3604_fu_13023669_p2() {
    add_ln703_3604_fu_13023669_p2 = (!trunc_ln203_41_fu_12989035_p4.read().is_01() || !zext_ln203_258_fu_12989065_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_41_fu_12989035_p4.read()) + sc_biguint<10>(zext_ln203_258_fu_12989065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3605_fu_13023679_p2() {
    add_ln703_3605_fu_13023679_p2 = (!zext_ln703_469_fu_13023675_p1.read().is_01() || !zext_ln703_468_fu_13023665_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_469_fu_13023675_p1.read()) + sc_biguint<11>(zext_ln703_468_fu_13023665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3606_fu_13023689_p2() {
    add_ln703_3606_fu_13023689_p2 = (!trunc_ln203_42_fu_12989087_p4.read().is_01() || !zext_ln203_259_fu_12989129_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_42_fu_12989087_p4.read()) + sc_biguint<10>(zext_ln203_259_fu_12989129_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3607_fu_13023699_p2() {
    add_ln703_3607_fu_13023699_p2 = (!zext_ln203_260_fu_12989169_p1.read().is_01() || !zext_ln203_261_fu_12989225_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_260_fu_12989169_p1.read()) + sc_biguint<10>(zext_ln203_261_fu_12989225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3608_fu_13023709_p2() {
    add_ln703_3608_fu_13023709_p2 = (!zext_ln703_472_fu_13023705_p1.read().is_01() || !zext_ln703_471_fu_13023695_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_472_fu_13023705_p1.read()) + sc_biguint<11>(zext_ln703_471_fu_13023695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3609_fu_13023719_p2() {
    add_ln703_3609_fu_13023719_p2 = (!zext_ln703_473_fu_13023715_p1.read().is_01() || !zext_ln703_470_fu_13023685_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_473_fu_13023715_p1.read()) + sc_biguint<12>(zext_ln703_470_fu_13023685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_360_fu_13002631_p2() {
    add_ln703_360_fu_13002631_p2 = (!sext_ln1116_15_fu_12925586_p1.read().is_01() || !sext_ln1118_fu_12925668_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_15_fu_12925586_p1.read()) + sc_bigint<12>(sext_ln1118_fu_12925668_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3611_fu_13023725_p2() {
    add_ln703_3611_fu_13023725_p2 = (!sext_ln203_687_fu_12986300_p1.read().is_01() || !zext_ln203_262_fu_12989251_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()) + sc_biguint<12>(zext_ln203_262_fu_12989251_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3612_fu_13023731_p2() {
    add_ln703_3612_fu_13023731_p2 = (!zext_ln1118_1913_fu_12989237_p1.read().is_01() || !ap_const_lv10_260.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1913_fu_12989237_p1.read()) + sc_bigint<10>(ap_const_lv10_260));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3613_fu_13023741_p2() {
    add_ln703_3613_fu_13023741_p2 = (!sext_ln703_2061_fu_13023737_p1.read().is_01() || !add_ln703_3611_fu_13023725_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2061_fu_13023737_p1.read()) + sc_biguint<12>(add_ln703_3611_fu_13023725_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3614_fu_13023751_p2() {
    add_ln703_3614_fu_13023751_p2 = (!zext_ln1118_1914_fu_12989279_p1.read().is_01() || !sext_ln708_158_fu_12989303_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1914_fu_12989279_p1.read()) + sc_bigint<12>(sext_ln708_158_fu_12989303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3615_fu_13023761_p2() {
    add_ln703_3615_fu_13023761_p2 = (!sext_ln703_2062_fu_13023757_p1.read().is_01() || !sext_ln703_999_fu_13023747_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2062_fu_13023757_p1.read()) + sc_bigint<13>(sext_ln703_999_fu_13023747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3616_fu_13023771_p2() {
    add_ln703_3616_fu_13023771_p2 = (!sext_ln703_1000_fu_13023767_p1.read().is_01() || !zext_ln203_263_fu_12989331_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1000_fu_13023767_p1.read()) + sc_biguint<14>(zext_ln203_263_fu_12989331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3617_fu_13023777_p2() {
    add_ln703_3617_fu_13023777_p2 = (!sext_ln1118_1092_fu_12989359_p1.read().is_01() || !zext_ln1118_1920_fu_12989423_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1092_fu_12989359_p1.read()) + sc_biguint<12>(zext_ln1118_1920_fu_12989423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3618_fu_13023787_p2() {
    add_ln703_3618_fu_13023787_p2 = (!sext_ln703_2063_fu_13023783_p1.read().is_01() || !add_ln703_3616_fu_13023771_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2063_fu_13023783_p1.read()) + sc_biguint<14>(add_ln703_3616_fu_13023771_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3619_fu_13023793_p2() {
    add_ln703_3619_fu_13023793_p2 = (!zext_ln1118_1922_fu_12989455_p1.read().is_01() || !trunc_ln1118_56_fu_12989459_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1922_fu_12989455_p1.read()) + sc_biguint<9>(trunc_ln1118_56_fu_12989459_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_361_fu_13029319_p2() {
    add_ln703_361_fu_13029319_p2 = (!sext_ln703_131_fu_13029316_p1.read().is_01() || !sext_ln703_130_fu_13029313_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_131_fu_13029316_p1.read()) + sc_bigint<15>(sext_ln703_130_fu_13029313_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3620_fu_13023803_p2() {
    add_ln703_3620_fu_13023803_p2 = (!zext_ln1118_1916_fu_12989345_p1.read().is_01() || !zext_ln1118_1919_fu_12989409_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1118_1916_fu_12989345_p1.read()) + sc_biguint<6>(zext_ln1118_1919_fu_12989409_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3621_fu_13023813_p2() {
    add_ln703_3621_fu_13023813_p2 = (!zext_ln703_476_fu_13023809_p1.read().is_01() || !sext_ln708_159_fu_12989395_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_476_fu_13023809_p1.read()) + sc_bigint<9>(sext_ln708_159_fu_12989395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3622_fu_13023823_p2() {
    add_ln703_3622_fu_13023823_p2 = (!sext_ln703_2064_fu_13023819_p1.read().is_01() || !zext_ln703_475_fu_13023799_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2064_fu_13023819_p1.read()) + sc_biguint<11>(zext_ln703_475_fu_13023799_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3623_fu_13036473_p2() {
    add_ln703_3623_fu_13036473_p2 = (!sext_ln703_2065_fu_13036470_p1.read().is_01() || !add_ln703_3618_reg_13043255.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2065_fu_13036470_p1.read()) + sc_biguint<14>(add_ln703_3618_reg_13043255.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3624_fu_13036478_p2() {
    add_ln703_3624_fu_13036478_p2 = (!add_ln703_3623_fu_13036473_p2.read().is_01() || !sext_ln1118_1093_fu_13029220_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3623_fu_13036473_p2.read()) + sc_bigint<14>(sext_ln1118_1093_fu_13029220_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3625_fu_13023829_p2() {
    add_ln703_3625_fu_13023829_p2 = (!sext_ln1118_1080_fu_12988263_p1.read().is_01() || !sext_ln708_161_fu_12989631_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1080_fu_12988263_p1.read()) + sc_bigint<12>(sext_ln708_161_fu_12989631_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3626_fu_13036491_p2() {
    add_ln703_3626_fu_13036491_p2 = (!sext_ln703_2067_fu_13036488_p1.read().is_01() || !sext_ln703_2066_fu_13036484_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2067_fu_13036488_p1.read()) + sc_bigint<15>(sext_ln703_2066_fu_13036484_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3627_fu_13023835_p2() {
    add_ln703_3627_fu_13023835_p2 = (!trunc_ln1118_57_fu_12989501_p4.read().is_01() || !zext_ln1118_1807_fu_12986013_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_57_fu_12989501_p4.read()) + sc_biguint<9>(zext_ln1118_1807_fu_12986013_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3628_fu_13023845_p2() {
    add_ln703_3628_fu_13023845_p2 = (!trunc_ln1118_58_fu_12989571_p4.read().is_01() || !zext_ln1118_1779_fu_12985200_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_58_fu_12989571_p4.read()) + sc_biguint<10>(zext_ln1118_1779_fu_12985200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3629_fu_13023855_p2() {
    add_ln703_3629_fu_13023855_p2 = (!zext_ln703_478_fu_13023851_p1.read().is_01() || !zext_ln703_477_fu_13023841_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_478_fu_13023851_p1.read()) + sc_biguint<11>(zext_ln703_477_fu_13023841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_362_fu_13002637_p2() {
    add_ln703_362_fu_13002637_p2 = (!sext_ln1116_17_fu_12925802_p1.read().is_01() || !zext_ln1116_14_fu_12925836_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_17_fu_12925802_p1.read()) + sc_biguint<12>(zext_ln1116_14_fu_12925836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3630_fu_13036500_p2() {
    add_ln703_3630_fu_13036500_p2 = (!zext_ln703_479_fu_13036497_p1.read().is_01() || !add_ln703_3626_fu_13036491_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_479_fu_13036497_p1.read()) + sc_biguint<15>(add_ln703_3626_fu_13036491_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3631_fu_13023861_p2() {
    add_ln703_3631_fu_13023861_p2 = (!trunc_ln1118_59_fu_12989635_p4.read().is_01() || !zext_ln1118_1930_fu_12989685_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_59_fu_12989635_p4.read()) + sc_biguint<10>(zext_ln1118_1930_fu_12989685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3632_fu_13023871_p2() {
    add_ln703_3632_fu_13023871_p2 = (!zext_ln708_784_fu_12989699_p1.read().is_01() || !zext_ln708_785_fu_12989727_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_784_fu_12989699_p1.read()) + sc_biguint<11>(zext_ln708_785_fu_12989727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3633_fu_13023881_p2() {
    add_ln703_3633_fu_13023881_p2 = (!zext_ln703_481_fu_13023877_p1.read().is_01() || !zext_ln703_480_fu_13023867_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_481_fu_13023877_p1.read()) + sc_biguint<12>(zext_ln703_480_fu_13023867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3634_fu_13023891_p2() {
    add_ln703_3634_fu_13023891_p2 = (!sext_ln1118_1094_fu_12989521_p1.read().is_01() || !sext_ln708_160_fu_12989553_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1094_fu_12989521_p1.read()) + sc_bigint<11>(sext_ln708_160_fu_12989553_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3635_fu_13023901_p2() {
    add_ln703_3635_fu_13023901_p2 = (!zext_ln1118_1715_fu_12983868_p1.read().is_01() || !zext_ln708_783_fu_12989567_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1715_fu_12983868_p1.read()) + sc_biguint<9>(zext_ln708_783_fu_12989567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3636_fu_13023911_p2() {
    add_ln703_3636_fu_13023911_p2 = (!zext_ln703_483_fu_13023907_p1.read().is_01() || !sext_ln703_2068_fu_13023897_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_483_fu_13023907_p1.read()) + sc_bigint<12>(sext_ln703_2068_fu_13023897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3637_fu_13023921_p2() {
    add_ln703_3637_fu_13023921_p2 = (!sext_ln703_2069_fu_13023917_p1.read().is_01() || !zext_ln703_482_fu_13023887_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2069_fu_13023917_p1.read()) + sc_biguint<13>(zext_ln703_482_fu_13023887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3638_fu_13036509_p2() {
    add_ln703_3638_fu_13036509_p2 = (!sext_ln703_2070_fu_13036506_p1.read().is_01() || !add_ln703_3630_fu_13036500_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2070_fu_13036506_p1.read()) + sc_biguint<15>(add_ln703_3630_fu_13036500_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3639_fu_13036515_p2() {
    add_ln703_3639_fu_13036515_p2 = (!add_ln703_3638_fu_13036509_p2.read().is_01() || !sext_ln203_715_fu_13029223_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3638_fu_13036509_p2.read()) + sc_bigint<15>(sext_ln203_715_fu_13029223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_363_fu_13002647_p2() {
    add_ln703_363_fu_13002647_p2 = (!sext_ln703_132_fu_13002643_p1.read().is_01() || !sext_ln1116_16_fu_12925749_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_132_fu_13002643_p1.read()) + sc_bigint<13>(sext_ln1116_16_fu_12925749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3640_fu_13023927_p2() {
    add_ln703_3640_fu_13023927_p2 = (!sext_ln203_714_fu_12989779_p1.read().is_01() || !sext_ln203_713_fu_12989747_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_714_fu_12989779_p1.read()) + sc_bigint<10>(sext_ln203_713_fu_12989747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3641_fu_13023937_p2() {
    add_ln703_3641_fu_13023937_p2 = (!sext_ln703_2071_fu_13023933_p1.read().is_01() || !sext_ln203_686_fu_12986276_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2071_fu_13023933_p1.read()) + sc_bigint<11>(sext_ln203_686_fu_12986276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3643_fu_13023943_p2() {
    add_ln703_3643_fu_13023943_p2 = (!trunc_ln708_2543_fu_12989800_p4.read().is_01() || !ap_const_lv9_38.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln708_2543_fu_12989800_p4.read()) + sc_biguint<9>(ap_const_lv9_38));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3644_fu_13023953_p2() {
    add_ln703_3644_fu_13023953_p2 = (!zext_ln703_484_fu_13023949_p1.read().is_01() || !sext_ln203_687_fu_12986300_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_484_fu_13023949_p1.read()) + sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3645_fu_13023963_p2() {
    add_ln703_3645_fu_13023963_p2 = (!sext_ln1116_136_fu_12989844_p1.read().is_01() || !sext_ln1116_137_fu_12989858_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_136_fu_12989844_p1.read()) + sc_bigint<11>(sext_ln1116_137_fu_12989858_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3646_fu_13023973_p2() {
    add_ln703_3646_fu_13023973_p2 = (!sext_ln703_2074_fu_13023969_p1.read().is_01() || !sext_ln703_1003_fu_13023959_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2074_fu_13023969_p1.read()) + sc_bigint<13>(sext_ln703_1003_fu_13023959_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3647_fu_13023979_p2() {
    add_ln703_3647_fu_13023979_p2 = (!add_ln703_3646_fu_13023973_p2.read().is_01() || !sext_ln1116_138_fu_12989862_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3646_fu_13023973_p2.read()) + sc_bigint<13>(sext_ln1116_138_fu_12989862_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3648_fu_13023985_p2() {
    add_ln703_3648_fu_13023985_p2 = (!sext_ln708_162_fu_12990005_p1.read().is_01() || !zext_ln708_786_fu_12989908_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_162_fu_12990005_p1.read()) + sc_biguint<12>(zext_ln708_786_fu_12989908_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3649_fu_13036540_p2() {
    add_ln703_3649_fu_13036540_p2 = (!sext_ln703_2076_fu_13036537_p1.read().is_01() || !sext_ln703_2075_fu_13036534_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2076_fu_13036537_p1.read()) + sc_bigint<14>(sext_ln703_2075_fu_13036534_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_364_fu_13029328_p2() {
    add_ln703_364_fu_13029328_p2 = (!sext_ln703_133_fu_13029325_p1.read().is_01() || !add_ln703_361_fu_13029319_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_133_fu_13029325_p1.read()) + sc_biguint<15>(add_ln703_361_fu_13029319_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3650_fu_13023991_p2() {
    add_ln703_3650_fu_13023991_p2 = (!zext_ln708_787_fu_12989978_p1.read().is_01() || !sext_ln1118_1097_fu_12989959_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_787_fu_12989978_p1.read()) + sc_bigint<11>(sext_ln1118_1097_fu_12989959_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3651_fu_13024001_p2() {
    add_ln703_3651_fu_13024001_p2 = (!zext_ln1116_174_fu_12989912_p1.read().is_01() || !zext_ln1118_1705_fu_12983652_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_174_fu_12989912_p1.read()) + sc_biguint<9>(zext_ln1118_1705_fu_12983652_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3652_fu_13024011_p2() {
    add_ln703_3652_fu_13024011_p2 = (!zext_ln703_485_fu_13024007_p1.read().is_01() || !sext_ln703_2077_fu_13023997_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_485_fu_13024007_p1.read()) + sc_bigint<12>(sext_ln703_2077_fu_13023997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3653_fu_13036549_p2() {
    add_ln703_3653_fu_13036549_p2 = (!sext_ln703_2078_fu_13036546_p1.read().is_01() || !add_ln703_3649_fu_13036540_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2078_fu_13036546_p1.read()) + sc_biguint<14>(add_ln703_3649_fu_13036540_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3654_fu_13036555_p2() {
    add_ln703_3654_fu_13036555_p2 = (!add_ln703_3653_fu_13036549_p2.read().is_01() || !sext_ln1118_1098_fu_13029226_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3653_fu_13036549_p2.read()) + sc_bigint<14>(sext_ln1118_1098_fu_13029226_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3655_fu_13024017_p2() {
    add_ln703_3655_fu_13024017_p2 = (!sext_ln1116_140_fu_12990087_p1.read().is_01() || !sext_ln1116_141_fu_12990178_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_140_fu_12990087_p1.read()) + sc_bigint<12>(sext_ln1116_141_fu_12990178_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3656_fu_13024027_p2() {
    add_ln703_3656_fu_13024027_p2 = (!sext_ln703_2080_fu_13024023_p1.read().is_01() || !sext_ln1116_139_fu_12990068_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2080_fu_13024023_p1.read()) + sc_bigint<13>(sext_ln1116_139_fu_12990068_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3657_fu_13036568_p2() {
    add_ln703_3657_fu_13036568_p2 = (!sext_ln703_2081_fu_13036565_p1.read().is_01() || !sext_ln703_2079_fu_13036561_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2081_fu_13036565_p1.read()) + sc_bigint<15>(sext_ln703_2079_fu_13036561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3658_fu_13024033_p2() {
    add_ln703_3658_fu_13024033_p2 = (!zext_ln708_789_fu_12990060_p1.read().is_01() || !sext_ln1116_142_fu_12990250_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_789_fu_12990060_p1.read()) + sc_bigint<11>(sext_ln1116_142_fu_12990250_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3659_fu_13024043_p2() {
    add_ln703_3659_fu_13024043_p2 = (!sext_ln703_2082_fu_13024039_p1.read().is_01() || !sext_ln1116_143_fu_12990276_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2082_fu_13024039_p1.read()) + sc_bigint<12>(sext_ln1116_143_fu_12990276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_365_fu_13002653_p2() {
    add_ln703_365_fu_13002653_p2 = (!zext_ln708_9_fu_12925879_p1.read().is_01() || !zext_ln708_10_fu_12925924_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_9_fu_12925879_p1.read()) + sc_biguint<11>(zext_ln708_10_fu_12925924_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3660_fu_13024053_p2() {
    add_ln703_3660_fu_13024053_p2 = (!sext_ln708_163_fu_12990143_p1.read().is_01() || !zext_ln1116_179_fu_12990157_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_163_fu_12990143_p1.read()) + sc_biguint<9>(zext_ln1116_179_fu_12990157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3661_fu_13024063_p2() {
    add_ln703_3661_fu_13024063_p2 = (!sext_ln703_2084_fu_13024059_p1.read().is_01() || !sext_ln1118_1100_fu_12990210_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2084_fu_13024059_p1.read()) + sc_bigint<10>(sext_ln1118_1100_fu_12990210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3662_fu_13024073_p2() {
    add_ln703_3662_fu_13024073_p2 = (!sext_ln703_2085_fu_13024069_p1.read().is_01() || !sext_ln703_2083_fu_13024049_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2085_fu_13024069_p1.read()) + sc_bigint<13>(sext_ln703_2083_fu_13024049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3663_fu_13036577_p2() {
    add_ln703_3663_fu_13036577_p2 = (!sext_ln703_2086_fu_13036574_p1.read().is_01() || !add_ln703_3657_fu_13036568_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2086_fu_13036574_p1.read()) + sc_biguint<15>(add_ln703_3657_fu_13036568_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3664_fu_13024079_p2() {
    add_ln703_3664_fu_13024079_p2 = (!sext_ln203_717_fu_12990324_p1.read().is_01() || !sext_ln203_719_fu_12990368_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_717_fu_12990324_p1.read()) + sc_bigint<12>(sext_ln203_719_fu_12990368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3665_fu_13036586_p2() {
    add_ln703_3665_fu_13036586_p2 = (!sext_ln703_2087_fu_13036583_p1.read().is_01() || !add_ln703_3663_fu_13036577_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2087_fu_13036583_p1.read()) + sc_biguint<15>(add_ln703_3663_fu_13036577_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3666_fu_13024085_p2() {
    add_ln703_3666_fu_13024085_p2 = (!sext_ln203_712_fu_12989193_p1.read().is_01() || !zext_ln203_264_fu_12990310_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_712_fu_12989193_p1.read()) + sc_biguint<12>(zext_ln203_264_fu_12990310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3667_fu_13024095_p2() {
    add_ln703_3667_fu_13024095_p2 = (!sext_ln703_2089_fu_13024091_p1.read().is_01() || !sext_ln203_721_fu_12990409_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2089_fu_13024091_p1.read()) + sc_bigint<13>(sext_ln203_721_fu_12990409_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3668_fu_13036599_p2() {
    add_ln703_3668_fu_13036599_p2 = (!sext_ln703_2090_fu_13036596_p1.read().is_01() || !sext_ln703_2088_fu_13036592_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2090_fu_13036596_p1.read()) + sc_bigint<16>(sext_ln703_2088_fu_13036592_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3669_fu_13024101_p2() {
    add_ln703_3669_fu_13024101_p2 = (!zext_ln708_790_fu_12990489_p1.read().is_01() || !sext_ln203_716_fu_12990290_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_790_fu_12990489_p1.read()) + sc_bigint<11>(sext_ln203_716_fu_12990290_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_366_fu_13002663_p2() {
    add_ln703_366_fu_13002663_p2 = (!zext_ln703_3_fu_13002659_p1.read().is_01() || !zext_ln1118_43_fu_12925859_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_3_fu_13002659_p1.read()) + sc_biguint<12>(zext_ln1118_43_fu_12925859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3670_fu_13024111_p2() {
    add_ln703_3670_fu_13024111_p2 = (!sext_ln703_2091_fu_13024107_p1.read().is_01() || !zext_ln203_265_fu_12990455_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2091_fu_13024107_p1.read()) + sc_biguint<12>(zext_ln203_265_fu_12990455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3671_fu_13024121_p2() {
    add_ln703_3671_fu_13024121_p2 = (!sext_ln203_723_fu_12990475_p1.read().is_01() || !sext_ln203_720_fu_12990388_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_723_fu_12990475_p1.read()) + sc_bigint<10>(sext_ln203_720_fu_12990388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3672_fu_13024131_p2() {
    add_ln703_3672_fu_13024131_p2 = (!sext_ln703_2093_fu_13024127_p1.read().is_01() || !sext_ln203_722_fu_12990423_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2093_fu_13024127_p1.read()) + sc_bigint<11>(sext_ln203_722_fu_12990423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3673_fu_13024141_p2() {
    add_ln703_3673_fu_13024141_p2 = (!sext_ln703_2094_fu_13024137_p1.read().is_01() || !sext_ln703_2092_fu_13024117_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2094_fu_13024137_p1.read()) + sc_bigint<13>(sext_ln703_2092_fu_13024117_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3675_fu_13024147_p2() {
    add_ln703_3675_fu_13024147_p2 = (!trunc_ln203_43_fu_12990547_p4.read().is_01() || !ap_const_lv9_118.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_43_fu_12990547_p4.read()) + sc_bigint<9>(ap_const_lv9_118));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3676_fu_13024153_p2() {
    add_ln703_3676_fu_13024153_p2 = (!add_ln703_3675_fu_13024147_p2.read().is_01() || !zext_ln203_266_fu_12990521_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_3675_fu_13024147_p2.read()) + sc_biguint<9>(zext_ln203_266_fu_12990521_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3677_fu_13024163_p2() {
    add_ln703_3677_fu_13024163_p2 = (!zext_ln708_791_fu_12990585_p1.read().is_01() || !sext_ln703_1007_fu_13024159_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_791_fu_12990585_p1.read()) + sc_bigint<11>(sext_ln703_1007_fu_13024159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3678_fu_13024173_p2() {
    add_ln703_3678_fu_13024173_p2 = (!sext_ln703_1008_fu_13024169_p1.read().is_01() || !zext_ln203_267_fu_12990599_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1008_fu_13024169_p1.read()) + sc_biguint<12>(zext_ln203_267_fu_12990599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3679_fu_13024183_p2() {
    add_ln703_3679_fu_13024183_p2 = (!sext_ln703_1009_fu_13024179_p1.read().is_01() || !sext_ln203_724_fu_12990637_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1009_fu_13024179_p1.read()) + sc_bigint<13>(sext_ln203_724_fu_12990637_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_367_fu_13002673_p2() {
    add_ln703_367_fu_13002673_p2 = (!zext_ln1118_48_fu_12925976_p1.read().is_01() || !sext_ln1116_14_fu_12925525_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_48_fu_12925976_p1.read()) + sc_bigint<12>(sext_ln1116_14_fu_12925525_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3680_fu_13024189_p2() {
    add_ln703_3680_fu_13024189_p2 = (!zext_ln708_792_fu_12990669_p1.read().is_01() || !trunc_ln1118_60_fu_12990673_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_792_fu_12990669_p1.read()) + sc_biguint<10>(trunc_ln1118_60_fu_12990673_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3681_fu_13024199_p2() {
    add_ln703_3681_fu_13024199_p2 = (!zext_ln703_486_fu_13024195_p1.read().is_01() || !sext_ln1118_1102_fu_12990693_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_486_fu_13024195_p1.read()) + sc_bigint<12>(sext_ln1118_1102_fu_12990693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3682_fu_13024209_p2() {
    add_ln703_3682_fu_13024209_p2 = (!sext_ln703_2096_fu_13024205_p1.read().is_01() || !add_ln703_3679_fu_13024183_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2096_fu_13024205_p1.read()) + sc_biguint<13>(add_ln703_3679_fu_13024183_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3683_fu_13036617_p2() {
    add_ln703_3683_fu_13036617_p2 = (!sext_ln703_1010_fu_13036614_p1.read().is_01() || !sext_ln203_725_fu_13029229_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1010_fu_13036614_p1.read()) + sc_bigint<14>(sext_ln203_725_fu_13029229_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3684_fu_13024215_p2() {
    add_ln703_3684_fu_13024215_p2 = (!sext_ln1118_1105_fu_12990769_p1.read().is_01() || !sext_ln1118_1103_fu_12990713_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1105_fu_12990769_p1.read()) + sc_bigint<11>(sext_ln1118_1103_fu_12990713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3685_fu_13024225_p2() {
    add_ln703_3685_fu_13024225_p2 = (!sext_ln703_2097_fu_13024221_p1.read().is_01() || !sext_ln1118_1106_fu_12990783_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2097_fu_13024221_p1.read()) + sc_bigint<12>(sext_ln1118_1106_fu_12990783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3686_fu_13036626_p2() {
    add_ln703_3686_fu_13036626_p2 = (!sext_ln703_2098_fu_13036623_p1.read().is_01() || !add_ln703_3683_fu_13036617_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2098_fu_13036623_p1.read()) + sc_biguint<14>(add_ln703_3683_fu_13036617_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3687_fu_13036632_p2() {
    add_ln703_3687_fu_13036632_p2 = (!add_ln703_3686_fu_13036626_p2.read().is_01() || !zext_ln1118_1962_fu_13029232_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3686_fu_13036626_p2.read()) + sc_biguint<14>(zext_ln1118_1962_fu_13029232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3688_fu_13024231_p2() {
    add_ln703_3688_fu_13024231_p2 = (!sext_ln1118_1110_fu_12990933_p1.read().is_01() || !zext_ln1118_1964_fu_12990839_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1110_fu_12990933_p1.read()) + sc_biguint<12>(zext_ln1118_1964_fu_12990839_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3689_fu_13024241_p2() {
    add_ln703_3689_fu_13024241_p2 = (!sext_ln703_2100_fu_13024237_p1.read().is_01() || !sext_ln1116_130_fu_12983847_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2100_fu_13024237_p1.read()) + sc_bigint<13>(sext_ln1116_130_fu_12983847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_368_fu_13002679_p2() {
    add_ln703_368_fu_13002679_p2 = (!zext_ln1116_10_fu_12925643_p1.read().is_01() || !zext_ln1116_12_fu_12925700_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1116_10_fu_12925643_p1.read()) + sc_biguint<6>(zext_ln1116_12_fu_12925700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3690_fu_13036645_p2() {
    add_ln703_3690_fu_13036645_p2 = (!sext_ln703_2101_fu_13036642_p1.read().is_01() || !sext_ln703_2099_fu_13036638_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2101_fu_13036642_p1.read()) + sc_bigint<15>(sext_ln703_2099_fu_13036638_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3691_fu_13024247_p2() {
    add_ln703_3691_fu_13024247_p2 = (!zext_ln1118_1965_fu_12990873_p1.read().is_01() || !zext_ln1118_1968_fu_12990947_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1965_fu_12990873_p1.read()) + sc_biguint<10>(zext_ln1118_1968_fu_12990947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3692_fu_13024257_p2() {
    add_ln703_3692_fu_13024257_p2 = (!zext_ln703_487_fu_13024253_p1.read().is_01() || !zext_ln708_793_fu_12990853_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_487_fu_13024253_p1.read()) + sc_biguint<11>(zext_ln708_793_fu_12990853_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3693_fu_13024267_p2() {
    add_ln703_3693_fu_13024267_p2 = (!sext_ln1118_1109_fu_12990919_p1.read().is_01() || !sext_ln1118_1052_fu_12986596_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1109_fu_12990919_p1.read()) + sc_bigint<11>(sext_ln1118_1052_fu_12986596_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3694_fu_13024277_p2() {
    add_ln703_3694_fu_13024277_p2 = (!sext_ln703_2102_fu_13024273_p1.read().is_01() || !sext_ln1118_1107_fu_12990825_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2102_fu_13024273_p1.read()) + sc_bigint<12>(sext_ln1118_1107_fu_12990825_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3695_fu_13024287_p2() {
    add_ln703_3695_fu_13024287_p2 = (!sext_ln703_2103_fu_13024283_p1.read().is_01() || !zext_ln703_488_fu_13024263_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2103_fu_13024283_p1.read()) + sc_biguint<13>(zext_ln703_488_fu_13024263_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3696_fu_13036654_p2() {
    add_ln703_3696_fu_13036654_p2 = (!sext_ln703_2104_fu_13036651_p1.read().is_01() || !add_ln703_3690_fu_13036645_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2104_fu_13036651_p1.read()) + sc_biguint<15>(add_ln703_3690_fu_13036645_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3697_fu_13036660_p2() {
    add_ln703_3697_fu_13036660_p2 = (!add_ln703_3696_fu_13036654_p2.read().is_01() || !sext_ln203_726_fu_13029235_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3696_fu_13036654_p2.read()) + sc_bigint<15>(sext_ln203_726_fu_13029235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3698_fu_13024293_p2() {
    add_ln703_3698_fu_13024293_p2 = (!zext_ln203_268_fu_12991047_p1.read().is_01() || !trunc_ln203_44_fu_12991171_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_268_fu_12991047_p1.read()) + sc_biguint<10>(trunc_ln203_44_fu_12991171_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3699_fu_13024303_p2() {
    add_ln703_3699_fu_13024303_p2 = (!zext_ln703_489_fu_13024299_p1.read().is_01() || !sext_ln203_732_fu_12991145_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_489_fu_13024299_p1.read()) + sc_bigint<12>(sext_ln203_732_fu_12991145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_369_fu_13002689_p2() {
    add_ln703_369_fu_13002689_p2 = (!zext_ln703_5_fu_13002685_p1.read().is_01() || !add_ln703_367_fu_13002673_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_5_fu_13002685_p1.read()) + sc_biguint<12>(add_ln703_367_fu_13002673_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3700_fu_13036669_p2() {
    add_ln703_3700_fu_13036669_p2 = (!sext_ln703_2105_fu_13036666_p1.read().is_01() || !add_ln703_3697_fu_13036660_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2105_fu_13036666_p1.read()) + sc_biguint<15>(add_ln703_3697_fu_13036660_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3701_fu_13024309_p2() {
    add_ln703_3701_fu_13024309_p2 = (!sext_ln203_729_fu_12991081_p1.read().is_01() || !sext_ln203_731_fu_12991099_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_729_fu_12991081_p1.read()) + sc_bigint<11>(sext_ln203_731_fu_12991099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3702_fu_13024319_p2() {
    add_ln703_3702_fu_13024319_p2 = (!sext_ln703_2107_fu_13024315_p1.read().is_01() || !zext_ln203_269_fu_12991243_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2107_fu_13024315_p1.read()) + sc_biguint<12>(zext_ln203_269_fu_12991243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3703_fu_13024325_p2() {
    add_ln703_3703_fu_13024325_p2 = (!sext_ln203_727_fu_12990991_p1.read().is_01() || !sext_ln203_728_fu_12991023_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_727_fu_12990991_p1.read()) + sc_bigint<9>(sext_ln203_728_fu_12991023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3704_fu_13024335_p2() {
    add_ln703_3704_fu_13024335_p2 = (!sext_ln703_2108_fu_13024331_p1.read().is_01() || !sext_ln203_733_fu_12991221_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_2108_fu_13024331_p1.read()) + sc_bigint<10>(sext_ln203_733_fu_12991221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3705_fu_13024345_p2() {
    add_ln703_3705_fu_13024345_p2 = (!sext_ln703_2109_fu_13024341_p1.read().is_01() || !add_ln703_3702_fu_13024319_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2109_fu_13024341_p1.read()) + sc_biguint<12>(add_ln703_3702_fu_13024319_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3707_fu_13024351_p2() {
    add_ln703_3707_fu_13024351_p2 = (!trunc_ln1118_61_fu_12991269_p4.read().is_01() || !ap_const_lv10_2B0.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_61_fu_12991269_p4.read()) + sc_bigint<10>(ap_const_lv10_2B0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3708_fu_13024361_p2() {
    add_ln703_3708_fu_13024361_p2 = (!sext_ln703_2111_fu_13024357_p1.read().is_01() || !sext_ln203_687_fu_12986300_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2111_fu_13024357_p1.read()) + sc_bigint<12>(sext_ln203_687_fu_12986300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3709_fu_13024371_p2() {
    add_ln703_3709_fu_13024371_p2 = (!sext_ln1118_1116_fu_12991349_p1.read().is_01() || !sext_ln1118_1115_fu_12991321_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1116_fu_12991349_p1.read()) + sc_bigint<12>(sext_ln1118_1115_fu_12991321_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_370_fu_13002699_p2() {
    add_ln703_370_fu_13002699_p2 = (!sext_ln703_134_fu_13002695_p1.read().is_01() || !zext_ln703_4_fu_13002669_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_134_fu_13002695_p1.read()) + sc_biguint<13>(zext_ln703_4_fu_13002669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3710_fu_13024381_p2() {
    add_ln703_3710_fu_13024381_p2 = (!sext_ln703_2112_fu_13024377_p1.read().is_01() || !sext_ln703_1013_fu_13024367_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2112_fu_13024377_p1.read()) + sc_bigint<13>(sext_ln703_1013_fu_13024367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3711_fu_13024391_p2() {
    add_ln703_3711_fu_13024391_p2 = (!sext_ln1118_1117_fu_12991363_p1.read().is_01() || !sext_ln1118_1118_fu_12991387_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1117_fu_12991363_p1.read()) + sc_bigint<12>(sext_ln1118_1118_fu_12991387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3712_fu_13024401_p2() {
    add_ln703_3712_fu_13024401_p2 = (!sext_ln703_2113_fu_13024397_p1.read().is_01() || !sext_ln703_1014_fu_13024387_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2113_fu_13024397_p1.read()) + sc_bigint<14>(sext_ln703_1014_fu_13024387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3713_fu_13024407_p2() {
    add_ln703_3713_fu_13024407_p2 = (!sext_ln1118_1050_fu_12986456_p1.read().is_01() || !zext_ln1118_1983_fu_12991401_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1050_fu_12986456_p1.read()) + sc_biguint<12>(zext_ln1118_1983_fu_12991401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3714_fu_13024417_p2() {
    add_ln703_3714_fu_13024417_p2 = (!zext_ln708_798_fu_12991415_p1.read().is_01() || !sext_ln708_164_fu_12991439_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_798_fu_12991415_p1.read()) + sc_bigint<11>(sext_ln708_164_fu_12991439_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3715_fu_13024427_p2() {
    add_ln703_3715_fu_13024427_p2 = (!sext_ln703_2115_fu_13024423_p1.read().is_01() || !sext_ln703_2114_fu_13024413_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2115_fu_13024423_p1.read()) + sc_bigint<13>(sext_ln703_2114_fu_13024413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3716_fu_13024437_p2() {
    add_ln703_3716_fu_13024437_p2 = (!sext_ln703_2116_fu_13024433_p1.read().is_01() || !add_ln703_3712_fu_13024401_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2116_fu_13024433_p1.read()) + sc_biguint<14>(add_ln703_3712_fu_13024401_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3717_fu_13024443_p2() {
    add_ln703_3717_fu_13024443_p2 = (!zext_ln1118_1985_fu_12991453_p1.read().is_01() || !sext_ln1118_1119_fu_12991547_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1985_fu_12991453_p1.read()) + sc_bigint<12>(sext_ln1118_1119_fu_12991547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3718_fu_13036694_p2() {
    add_ln703_3718_fu_13036694_p2 = (!sext_ln703_2117_fu_13036691_p1.read().is_01() || !sext_ln703_1015_fu_13036688_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2117_fu_13036691_p1.read()) + sc_bigint<15>(sext_ln703_1015_fu_13036688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3719_fu_13024449_p2() {
    add_ln703_3719_fu_13024449_p2 = (!sext_ln1118_1124_fu_12991697_p1.read().is_01() || !zext_ln1118_1986_fu_12991467_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1124_fu_12991697_p1.read()) + sc_biguint<12>(zext_ln1118_1986_fu_12991467_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_371_fu_13029337_p2() {
    add_ln703_371_fu_13029337_p2 = (!sext_ln703_135_fu_13029334_p1.read().is_01() || !add_ln703_364_fu_13029328_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_135_fu_13029334_p1.read()) + sc_biguint<15>(add_ln703_364_fu_13029328_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3720_fu_13024459_p2() {
    add_ln703_3720_fu_13024459_p2 = (!sext_ln703_2118_fu_13024455_p1.read().is_01() || !sext_ln1118_1120_fu_12991585_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2118_fu_13024455_p1.read()) + sc_bigint<13>(sext_ln1118_1120_fu_12991585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3721_fu_13036703_p2() {
    add_ln703_3721_fu_13036703_p2 = (!sext_ln703_2119_fu_13036700_p1.read().is_01() || !add_ln703_3718_fu_13036694_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2119_fu_13036700_p1.read()) + sc_biguint<15>(add_ln703_3718_fu_13036694_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3722_fu_13024465_p2() {
    add_ln703_3722_fu_13024465_p2 = (!zext_ln1118_1989_fu_12991519_p1.read().is_01() || !zext_ln1118_1990_fu_12991533_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1989_fu_12991519_p1.read()) + sc_biguint<9>(zext_ln1118_1990_fu_12991533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3723_fu_13024475_p2() {
    add_ln703_3723_fu_13024475_p2 = (!zext_ln703_490_fu_13024471_p1.read().is_01() || !zext_ln1118_1988_fu_12991491_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_490_fu_13024471_p1.read()) + sc_biguint<10>(zext_ln1118_1988_fu_12991491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3724_fu_13024485_p2() {
    add_ln703_3724_fu_13024485_p2 = (!zext_ln1118_1991_fu_12991571_p1.read().is_01() || !zext_ln1118_1994_fu_12991665_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1991_fu_12991571_p1.read()) + sc_biguint<10>(zext_ln1118_1994_fu_12991665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3725_fu_13024495_p2() {
    add_ln703_3725_fu_13024495_p2 = (!sext_ln1118_1121_fu_12991599_p1.read().is_01() || !sext_ln1118_1123_fu_12991641_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1121_fu_12991599_p1.read()) + sc_bigint<11>(sext_ln1118_1123_fu_12991641_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3726_fu_13024505_p2() {
    add_ln703_3726_fu_13024505_p2 = (!sext_ln703_2120_fu_13024501_p1.read().is_01() || !zext_ln703_492_fu_13024491_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2120_fu_13024501_p1.read()) + sc_biguint<12>(zext_ln703_492_fu_13024491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3727_fu_13024515_p2() {
    add_ln703_3727_fu_13024515_p2 = (!sext_ln703_2121_fu_13024511_p1.read().is_01() || !zext_ln703_491_fu_13024481_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2121_fu_13024511_p1.read()) + sc_biguint<13>(zext_ln703_491_fu_13024481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3728_fu_13036712_p2() {
    add_ln703_3728_fu_13036712_p2 = (!sext_ln703_2122_fu_13036709_p1.read().is_01() || !add_ln703_3721_fu_13036703_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2122_fu_13036709_p1.read()) + sc_biguint<15>(add_ln703_3721_fu_13036703_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3729_fu_13036718_p2() {
    add_ln703_3729_fu_13036718_p2 = (!add_ln703_3728_fu_13036712_p2.read().is_01() || !sext_ln203_734_fu_13029238_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3728_fu_13036712_p2.read()) + sc_bigint<15>(sext_ln203_734_fu_13029238_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_372_fu_13002705_p2() {
    add_ln703_372_fu_13002705_p2 = (!sext_ln203_98_fu_12926113_p1.read().is_01() || !sext_ln203_102_fu_12926357_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_98_fu_12926113_p1.read()) + sc_bigint<12>(sext_ln203_102_fu_12926357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3730_fu_13024521_p2() {
    add_ln703_3730_fu_13024521_p2 = (!sext_ln203_739_fu_12991861_p1.read().is_01() || !zext_ln203_270_fu_12991711_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_739_fu_12991861_p1.read()) + sc_biguint<12>(zext_ln203_270_fu_12991711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3731_fu_13024531_p2() {
    add_ln703_3731_fu_13024531_p2 = (!sext_ln703_2124_fu_13024527_p1.read().is_01() || !sext_ln203_735_fu_12991725_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2124_fu_13024527_p1.read()) + sc_bigint<13>(sext_ln203_735_fu_12991725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3732_fu_13036731_p2() {
    add_ln703_3732_fu_13036731_p2 = (!sext_ln703_2125_fu_13036728_p1.read().is_01() || !sext_ln703_2123_fu_13036724_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_2125_fu_13036728_p1.read()) + sc_bigint<16>(sext_ln703_2123_fu_13036724_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3733_fu_13024537_p2() {
    add_ln703_3733_fu_13024537_p2 = (!zext_ln708_801_fu_12991777_p1.read().is_01() || !zext_ln708_802_fu_12991881_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_801_fu_12991777_p1.read()) + sc_biguint<11>(zext_ln708_802_fu_12991881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3734_fu_13024543_p2() {
    add_ln703_3734_fu_13024543_p2 = (!add_ln703_3733_fu_13024537_p2.read().is_01() || !zext_ln708_800_fu_12991763_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3733_fu_13024537_p2.read()) + sc_biguint<11>(zext_ln708_800_fu_12991763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3735_fu_13024553_p2() {
    add_ln703_3735_fu_13024553_p2 = (!sext_ln203_736_fu_12991749_p1.read().is_01() || !sext_ln203_737_fu_12991801_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_736_fu_12991749_p1.read()) + sc_bigint<8>(sext_ln203_737_fu_12991801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3736_fu_13024563_p2() {
    add_ln703_3736_fu_13024563_p2 = (!sext_ln703_2126_fu_13024559_p1.read().is_01() || !sext_ln203_738_fu_12991847_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_2126_fu_13024559_p1.read()) + sc_bigint<9>(sext_ln203_738_fu_12991847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3737_fu_13024573_p2() {
    add_ln703_3737_fu_13024573_p2 = (!sext_ln703_2127_fu_13024569_p1.read().is_01() || !zext_ln703_493_fu_13024549_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2127_fu_13024569_p1.read()) + sc_biguint<12>(zext_ln703_493_fu_13024549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3739_fu_13024579_p2() {
    add_ln703_3739_fu_13024579_p2 = (!sext_ln203_740_fu_12991905_p1.read().is_01() || !zext_ln203_271_fu_12991919_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_740_fu_12991905_p1.read()) + sc_biguint<12>(zext_ln203_271_fu_12991919_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_373_fu_13029350_p2() {
    add_ln703_373_fu_13029350_p2 = (!sext_ln703_137_fu_13029347_p1.read().is_01() || !sext_ln703_136_fu_13029343_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_137_fu_13029347_p1.read()) + sc_bigint<16>(sext_ln703_136_fu_13029343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3740_fu_13024585_p2() {
    add_ln703_3740_fu_13024585_p2 = (!zext_ln708_803_fu_12991939_p1.read().is_01() || !ap_const_lv11_760.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_803_fu_12991939_p1.read()) + sc_bigint<11>(ap_const_lv11_760));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3741_fu_13024595_p2() {
    add_ln703_3741_fu_13024595_p2 = (!sext_ln703_2129_fu_13024591_p1.read().is_01() || !add_ln703_3739_fu_13024579_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2129_fu_13024591_p1.read()) + sc_biguint<12>(add_ln703_3739_fu_13024579_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3742_fu_13024605_p2() {
    add_ln703_3742_fu_13024605_p2 = (!zext_ln1118_2001_fu_12991953_p1.read().is_01() || !sext_ln708_165_fu_12991973_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2001_fu_12991953_p1.read()) + sc_bigint<12>(sext_ln708_165_fu_12991973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3743_fu_13024615_p2() {
    add_ln703_3743_fu_13024615_p2 = (!sext_ln703_2130_fu_13024611_p1.read().is_01() || !sext_ln703_1017_fu_13024601_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2130_fu_13024611_p1.read()) + sc_bigint<13>(sext_ln703_1017_fu_13024601_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3744_fu_13024625_p2() {
    add_ln703_3744_fu_13024625_p2 = (!sext_ln1118_1118_fu_12991387_p1.read().is_01() || !sext_ln1118_1050_fu_12986456_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1118_fu_12991387_p1.read()) + sc_bigint<12>(sext_ln1118_1050_fu_12986456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3745_fu_13024635_p2() {
    add_ln703_3745_fu_13024635_p2 = (!sext_ln703_2131_fu_13024631_p1.read().is_01() || !sext_ln703_1018_fu_13024621_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2131_fu_13024631_p1.read()) + sc_bigint<14>(sext_ln703_1018_fu_13024621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3746_fu_13024641_p2() {
    add_ln703_3746_fu_13024641_p2 = (!zext_ln708_804_fu_12992073_p1.read().is_01() || !sext_ln1118_1127_fu_12992041_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_804_fu_12992073_p1.read()) + sc_bigint<11>(sext_ln1118_1127_fu_12992041_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3747_fu_13024647_p2() {
    add_ln703_3747_fu_13024647_p2 = (!sext_ln1118_1128_fu_12992093_p1.read().is_01() || !zext_ln1118_2002_fu_12991987_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1128_fu_12992093_p1.read()) + sc_biguint<9>(zext_ln1118_2002_fu_12991987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3748_fu_13024657_p2() {
    add_ln703_3748_fu_13024657_p2 = (!sext_ln703_2132_fu_13024653_p1.read().is_01() || !add_ln703_3746_fu_13024641_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2132_fu_13024653_p1.read()) + sc_biguint<11>(add_ln703_3746_fu_13024641_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3749_fu_13036749_p2() {
    add_ln703_3749_fu_13036749_p2 = (!sext_ln703_2133_fu_13036746_p1.read().is_01() || !add_ln703_3745_reg_13043385.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2133_fu_13036746_p1.read()) + sc_biguint<14>(add_ln703_3745_reg_13043385.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_374_fu_13002711_p2() {
    add_ln703_374_fu_13002711_p2 = (!zext_ln203_1_fu_12926296_p1.read().is_01() || !trunc_ln203_s_fu_12926416_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_1_fu_12926296_p1.read()) + sc_biguint<9>(trunc_ln203_s_fu_12926416_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3750_fu_13036754_p2() {
    add_ln703_3750_fu_13036754_p2 = (!add_ln703_3749_fu_13036749_p2.read().is_01() || !sext_ln203_741_fu_13029241_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3749_fu_13036749_p2.read()) + sc_bigint<14>(sext_ln203_741_fu_13029241_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3751_fu_13024663_p2() {
    add_ln703_3751_fu_13024663_p2 = (!sext_ln1118_1132_fu_12992215_p1.read().is_01() || !zext_ln708_805_fu_12992141_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1132_fu_12992215_p1.read()) + sc_biguint<12>(zext_ln708_805_fu_12992141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3752_fu_13024673_p2() {
    add_ln703_3752_fu_13024673_p2 = (!sext_ln703_2135_fu_13024669_p1.read().is_01() || !sext_ln1118_1131_fu_12992201_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2135_fu_13024669_p1.read()) + sc_bigint<13>(sext_ln1118_1131_fu_12992201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3753_fu_13036767_p2() {
    add_ln703_3753_fu_13036767_p2 = (!sext_ln703_2136_fu_13036764_p1.read().is_01() || !sext_ln703_2134_fu_13036760_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2136_fu_13036764_p1.read()) + sc_bigint<15>(sext_ln703_2134_fu_13036760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3754_fu_13024679_p2() {
    add_ln703_3754_fu_13024679_p2 = (!zext_ln708_808_fu_12992239_p1.read().is_01() || !sext_ln1118_1129_fu_12992123_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_808_fu_12992239_p1.read()) + sc_bigint<11>(sext_ln1118_1129_fu_12992123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3755_fu_13024689_p2() {
    add_ln703_3755_fu_13024689_p2 = (!sext_ln703_2137_fu_13024685_p1.read().is_01() || !zext_ln1118_2006_fu_12992177_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2137_fu_13024685_p1.read()) + sc_biguint<12>(zext_ln1118_2006_fu_12992177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3756_fu_13024699_p2() {
    add_ln703_3756_fu_13024699_p2 = (!sext_ln1118_1133_fu_12992263_p1.read().is_01() || !zext_ln1118_1849_fu_12987276_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1133_fu_12992263_p1.read()) + sc_biguint<11>(zext_ln1118_1849_fu_12987276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3757_fu_13024709_p2() {
    add_ln703_3757_fu_13024709_p2 = (!sext_ln703_2139_fu_13024705_p1.read().is_01() || !sext_ln1118_1130_fu_12992127_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2139_fu_13024705_p1.read()) + sc_bigint<12>(sext_ln1118_1130_fu_12992127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3758_fu_13024719_p2() {
    add_ln703_3758_fu_13024719_p2 = (!sext_ln703_2140_fu_13024715_p1.read().is_01() || !sext_ln703_2138_fu_13024695_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2140_fu_13024715_p1.read()) + sc_bigint<13>(sext_ln703_2138_fu_13024695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3759_fu_13036776_p2() {
    add_ln703_3759_fu_13036776_p2 = (!sext_ln703_2141_fu_13036773_p1.read().is_01() || !add_ln703_3753_fu_13036767_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2141_fu_13036773_p1.read()) + sc_biguint<15>(add_ln703_3753_fu_13036767_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_375_fu_13002721_p2() {
    add_ln703_375_fu_13002721_p2 = (!zext_ln703_6_fu_13002717_p1.read().is_01() || !sext_ln203_104_fu_12926461_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_6_fu_13002717_p1.read()) + sc_bigint<12>(sext_ln203_104_fu_12926461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3760_fu_13024725_p2() {
    add_ln703_3760_fu_13024725_p2 = (!sext_ln203_743_fu_12992411_p1.read().is_01() || !zext_ln203_264_fu_12990310_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_743_fu_12992411_p1.read()) + sc_biguint<12>(zext_ln203_264_fu_12990310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3761_fu_13036785_p2() {
    add_ln703_3761_fu_13036785_p2 = (!sext_ln703_2142_fu_13036782_p1.read().is_01() || !add_ln703_3759_fu_13036776_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2142_fu_13036782_p1.read()) + sc_biguint<15>(add_ln703_3759_fu_13036776_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3762_fu_13024731_p2() {
    add_ln703_3762_fu_13024731_p2 = (!zext_ln203_272_fu_12992323_p1.read().is_01() || !zext_ln203_273_fu_12992337_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_272_fu_12992323_p1.read()) + sc_biguint<10>(zext_ln203_273_fu_12992337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3763_fu_13024741_p2() {
    add_ln703_3763_fu_13024741_p2 = (!zext_ln703_494_fu_13024737_p1.read().is_01() || !zext_ln708_809_fu_12992309_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_494_fu_13024737_p1.read()) + sc_biguint<11>(zext_ln708_809_fu_12992309_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3764_fu_13036794_p2() {
    add_ln703_3764_fu_13036794_p2 = (!zext_ln703_495_fu_13036791_p1.read().is_01() || !add_ln703_3761_fu_13036785_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_495_fu_13036791_p1.read()) + sc_biguint<15>(add_ln703_3761_fu_13036785_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3765_fu_13024747_p2() {
    add_ln703_3765_fu_13024747_p2 = (!zext_ln708_811_fu_12992383_p1.read().is_01() || !zext_ln708_812_fu_12992397_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_811_fu_12992383_p1.read()) + sc_biguint<11>(zext_ln708_812_fu_12992397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3766_fu_13024753_p2() {
    add_ln703_3766_fu_13024753_p2 = (!add_ln703_3765_fu_13024747_p2.read().is_01() || !zext_ln708_810_fu_12992369_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3765_fu_13024747_p2.read()) + sc_biguint<11>(zext_ln708_810_fu_12992369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3767_fu_13024763_p2() {
    add_ln703_3767_fu_13024763_p2 = (!sext_ln203_742_fu_12992277_p1.read().is_01() || !sext_ln203_727_fu_12990991_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_742_fu_12992277_p1.read()) + sc_bigint<9>(sext_ln203_727_fu_12990991_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3768_fu_13024773_p2() {
    add_ln703_3768_fu_13024773_p2 = (!sext_ln703_2144_fu_13024769_p1.read().is_01() || !zext_ln203_274_fu_12992425_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2144_fu_13024769_p1.read()) + sc_biguint<12>(zext_ln203_274_fu_12992425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3769_fu_13024783_p2() {
    add_ln703_3769_fu_13024783_p2 = (!sext_ln703_2145_fu_13024779_p1.read().is_01() || !zext_ln703_496_fu_13024759_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2145_fu_13024779_p1.read()) + sc_biguint<13>(zext_ln703_496_fu_13024759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_376_fu_13029359_p2() {
    add_ln703_376_fu_13029359_p2 = (!sext_ln703_138_fu_13029356_p1.read().is_01() || !add_ln703_373_fu_13029350_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_138_fu_13029356_p1.read()) + sc_biguint<16>(add_ln703_373_fu_13029350_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3771_fu_13024789_p2() {
    add_ln703_3771_fu_13024789_p2 = (!zext_ln708_814_fu_12992457_p1.read().is_01() || !ap_const_lv11_70.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_814_fu_12992457_p1.read()) + sc_biguint<11>(ap_const_lv11_70));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3772_fu_13024799_p2() {
    add_ln703_3772_fu_13024799_p2 = (!sext_ln1118_1135_fu_12992517_p1.read().is_01() || !sext_ln1116_144_fu_12992503_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1135_fu_12992517_p1.read()) + sc_bigint<10>(sext_ln1116_144_fu_12992503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3773_fu_13024809_p2() {
    add_ln703_3773_fu_13024809_p2 = (!sext_ln703_2147_fu_13024805_p1.read().is_01() || !zext_ln703_497_fu_13024795_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2147_fu_13024805_p1.read()) + sc_biguint<12>(zext_ln703_497_fu_13024795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3774_fu_13024819_p2() {
    add_ln703_3774_fu_13024819_p2 = (!sext_ln1116_145_fu_12992559_p1.read().is_01() || !sext_ln708_166_fu_12992591_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_145_fu_12992559_p1.read()) + sc_bigint<12>(sext_ln708_166_fu_12992591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3775_fu_13024829_p2() {
    add_ln703_3775_fu_13024829_p2 = (!sext_ln703_2149_fu_13024825_p1.read().is_01() || !sext_ln703_2148_fu_13024815_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2149_fu_13024825_p1.read()) + sc_bigint<13>(sext_ln703_2148_fu_13024815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3776_fu_13024835_p2() {
    add_ln703_3776_fu_13024835_p2 = (!zext_ln1118_1697_fu_12983553_p1.read().is_01() || !sext_ln1118_1136_fu_12992531_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1697_fu_12983553_p1.read()) + sc_bigint<12>(sext_ln1118_1136_fu_12992531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3777_fu_13024845_p2() {
    add_ln703_3777_fu_13024845_p2 = (!sext_ln703_2151_fu_13024841_p1.read().is_01() || !zext_ln1118_2014_fu_12992545_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2151_fu_13024841_p1.read()) + sc_biguint<13>(zext_ln1118_2014_fu_12992545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3778_fu_13036819_p2() {
    add_ln703_3778_fu_13036819_p2 = (!sext_ln703_2152_fu_13036816_p1.read().is_01() || !sext_ln703_2150_fu_13036813_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2152_fu_13036816_p1.read()) + sc_bigint<14>(sext_ln703_2150_fu_13036813_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3779_fu_13024851_p2() {
    add_ln703_3779_fu_13024851_p2 = (!zext_ln708_815_fu_12992618_p1.read().is_01() || !sext_ln1118_1137_fu_12992662_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_815_fu_12992618_p1.read()) + sc_bigint<12>(sext_ln1118_1137_fu_12992662_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_377_fu_13002727_p2() {
    add_ln703_377_fu_13002727_p2 = (!sext_ln203_100_fu_12926243_p1.read().is_01() || !sext_ln203_101_fu_12926327_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_100_fu_12926243_p1.read()) + sc_bigint<11>(sext_ln203_101_fu_12926327_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3780_fu_13036828_p2() {
    add_ln703_3780_fu_13036828_p2 = (!sext_ln703_2153_fu_13036825_p1.read().is_01() || !add_ln703_3778_fu_13036819_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2153_fu_13036825_p1.read()) + sc_biguint<14>(add_ln703_3778_fu_13036819_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3781_fu_13024857_p2() {
    add_ln703_3781_fu_13024857_p2 = (!trunc_ln1116_9_fu_12992632_p4.read().is_01() || !zext_ln708_817_fu_12992706_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1116_9_fu_12992632_p4.read()) + sc_biguint<10>(zext_ln708_817_fu_12992706_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3782_fu_13024867_p2() {
    add_ln703_3782_fu_13024867_p2 = (!zext_ln1118_2022_fu_12992780_p1.read().is_01() || !zext_ln1116_187_fu_12992794_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2022_fu_12992780_p1.read()) + sc_biguint<10>(zext_ln1116_187_fu_12992794_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3783_fu_13024877_p2() {
    add_ln703_3783_fu_13024877_p2 = (!zext_ln703_499_fu_13024873_p1.read().is_01() || !zext_ln703_498_fu_13024863_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_499_fu_13024873_p1.read()) + sc_biguint<11>(zext_ln703_498_fu_13024863_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3784_fu_13036841_p2() {
    add_ln703_3784_fu_13036841_p2 = (!zext_ln703_500_fu_13036838_p1.read().is_01() || !sext_ln703_2154_fu_13036834_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_500_fu_13036838_p1.read()) + sc_bigint<15>(sext_ln703_2154_fu_13036834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3785_fu_13024883_p2() {
    add_ln703_3785_fu_13024883_p2 = (!zext_ln708_820_fu_12992842_p1.read().is_01() || !zext_ln708_821_fu_12992876_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_820_fu_12992842_p1.read()) + sc_biguint<11>(zext_ln708_821_fu_12992876_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3786_fu_13024889_p2() {
    add_ln703_3786_fu_13024889_p2 = (!add_ln703_3785_fu_13024883_p2.read().is_01() || !zext_ln708_819_fu_12992828_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3785_fu_13024883_p2.read()) + sc_biguint<11>(zext_ln708_819_fu_12992828_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3787_fu_13024899_p2() {
    add_ln703_3787_fu_13024899_p2 = (!sext_ln1118_1139_fu_12992766_p1.read().is_01() || !sext_ln1118_1141_fu_12992862_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1139_fu_12992766_p1.read()) + sc_bigint<11>(sext_ln1118_1141_fu_12992862_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3788_fu_13024909_p2() {
    add_ln703_3788_fu_13024909_p2 = (!zext_ln708_818_fu_12992720_p1.read().is_01() || !sext_ln1118_1140_fu_12992814_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_818_fu_12992720_p1.read()) + sc_bigint<8>(sext_ln1118_1140_fu_12992814_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3789_fu_13024919_p2() {
    add_ln703_3789_fu_13024919_p2 = (!sext_ln703_2156_fu_13024915_p1.read().is_01() || !sext_ln703_2155_fu_13024905_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2156_fu_13024915_p1.read()) + sc_bigint<12>(sext_ln703_2155_fu_13024905_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_378_fu_13002737_p2() {
    add_ln703_378_fu_13002737_p2 = (!sext_ln703_139_fu_13002733_p1.read().is_01() || !sext_ln203_96_fu_12926044_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_139_fu_13002733_p1.read()) + sc_bigint<12>(sext_ln203_96_fu_12926044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3790_fu_13024929_p2() {
    add_ln703_3790_fu_13024929_p2 = (!sext_ln703_2157_fu_13024925_p1.read().is_01() || !zext_ln703_501_fu_13024895_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2157_fu_13024925_p1.read()) + sc_biguint<13>(zext_ln703_501_fu_13024895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3791_fu_13036850_p2() {
    add_ln703_3791_fu_13036850_p2 = (!sext_ln703_2158_fu_13036847_p1.read().is_01() || !add_ln703_3784_fu_13036841_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2158_fu_13036847_p1.read()) + sc_biguint<15>(add_ln703_3784_fu_13036841_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3792_fu_13024935_p2() {
    add_ln703_3792_fu_13024935_p2 = (!sext_ln1118_1124_fu_12991697_p1.read().is_01() || !sext_ln203_744_fu_12992912_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1124_fu_12991697_p1.read()) + sc_bigint<12>(sext_ln203_744_fu_12992912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3793_fu_13036859_p2() {
    add_ln703_3793_fu_13036859_p2 = (!sext_ln703_2159_fu_13036856_p1.read().is_01() || !add_ln703_3791_fu_13036850_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2159_fu_13036856_p1.read()) + sc_biguint<15>(add_ln703_3791_fu_13036850_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3794_fu_13024941_p2() {
    add_ln703_3794_fu_13024941_p2 = (!sext_ln203_749_fu_12993085_p1.read().is_01() || !zext_ln203_275_fu_12992926_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_749_fu_12993085_p1.read()) + sc_biguint<12>(zext_ln203_275_fu_12992926_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3795_fu_13024951_p2() {
    add_ln703_3795_fu_13024951_p2 = (!sext_ln703_2160_fu_13024947_p1.read().is_01() || !sext_ln203_747_fu_12993021_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2160_fu_13024947_p1.read()) + sc_bigint<13>(sext_ln203_747_fu_12993021_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3796_fu_13036868_p2() {
    add_ln703_3796_fu_13036868_p2 = (!sext_ln703_2161_fu_13036865_p1.read().is_01() || !add_ln703_3793_fu_13036859_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2161_fu_13036865_p1.read()) + sc_biguint<15>(add_ln703_3793_fu_13036859_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3797_fu_13024957_p2() {
    add_ln703_3797_fu_13024957_p2 = (!zext_ln203_277_fu_12993041_p1.read().is_01() || !trunc_ln203_45_fu_12993065_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_277_fu_12993041_p1.read()) + sc_biguint<10>(trunc_ln203_45_fu_12993065_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3798_fu_13024963_p2() {
    add_ln703_3798_fu_13024963_p2 = (!add_ln703_3797_fu_13024957_p2.read().is_01() || !zext_ln203_276_fu_12992998_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3797_fu_13024957_p2.read()) + sc_biguint<10>(zext_ln203_276_fu_12992998_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3799_fu_13024973_p2() {
    add_ln703_3799_fu_13024973_p2 = (!sext_ln203_745_fu_12992954_p1.read().is_01() || !sext_ln203_746_fu_12992978_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_745_fu_12992954_p1.read()) + sc_bigint<10>(sext_ln203_746_fu_12992978_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_379_fu_13002743_p2() {
    add_ln703_379_fu_13002743_p2 = (!sext_ln203_97_fu_12926076_p1.read().is_01() || !sext_ln203_103_fu_12926389_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_97_fu_12926076_p1.read()) + sc_bigint<8>(sext_ln203_103_fu_12926389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3800_fu_13024983_p2() {
    add_ln703_3800_fu_13024983_p2 = (!sext_ln703_2163_fu_13024979_p1.read().is_01() || !sext_ln203_748_fu_12993061_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2163_fu_13024979_p1.read()) + sc_bigint<11>(sext_ln203_748_fu_12993061_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3801_fu_13024993_p2() {
    add_ln703_3801_fu_13024993_p2 = (!sext_ln703_2164_fu_13024989_p1.read().is_01() || !zext_ln703_502_fu_13024969_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2164_fu_13024989_p1.read()) + sc_biguint<12>(zext_ln703_502_fu_13024969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3803_fu_13024999_p2() {
    add_ln703_3803_fu_13024999_p2 = (!sext_ln1118_1073_fu_12987908_p1.read().is_01() || !ap_const_lv11_7A0.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1073_fu_12987908_p1.read()) + sc_bigint<11>(ap_const_lv11_7A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3804_fu_13025009_p2() {
    add_ln703_3804_fu_13025009_p2 = (!sext_ln703_2166_fu_13025005_p1.read().is_01() || !zext_ln203_278_fu_12993099_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2166_fu_13025005_p1.read()) + sc_biguint<12>(zext_ln203_278_fu_12993099_p1.read()));
}

}

