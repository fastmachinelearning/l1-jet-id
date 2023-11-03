#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_752_fu_12482513_p2() {
    add_ln703_752_fu_12482513_p2 = (!sext_ln703_573_fu_12482509_p1.read().is_01() || !sext_ln703_571_fu_12482489_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_573_fu_12482509_p1.read()) + sc_bigint<12>(sext_ln703_571_fu_12482489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_754_fu_12482519_p2() {
    add_ln703_754_fu_12482519_p2 = (!zext_ln1116_222_fu_12416174_p1.read().is_01() || !trunc_ln1118_73_fu_12416184_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_222_fu_12416174_p1.read()) + sc_biguint<10>(trunc_ln1118_73_fu_12416184_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_755_fu_12482529_p2() {
    add_ln703_755_fu_12482529_p2 = (!zext_ln703_123_fu_12482525_p1.read().is_01() || !ap_const_lv11_560.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_123_fu_12482525_p1.read()) + sc_bigint<11>(ap_const_lv11_560));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_756_fu_12482539_p2() {
    add_ln703_756_fu_12482539_p2 = (!zext_ln1116_224_fu_12416208_p1.read().is_01() || !sext_ln1116_24_fu_12416154_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_224_fu_12416208_p1.read()) + sc_bigint<10>(sext_ln1116_24_fu_12416154_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_757_fu_12482549_p2() {
    add_ln703_757_fu_12482549_p2 = (!sext_ln703_577_fu_12482545_p1.read().is_01() || !zext_ln708_1081_fu_12416204_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_577_fu_12482545_p1.read()) + sc_biguint<11>(zext_ln708_1081_fu_12416204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_758_fu_12482559_p2() {
    add_ln703_758_fu_12482559_p2 = (!sext_ln703_578_fu_12482555_p1.read().is_01() || !sext_ln703_576_fu_12482535_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_578_fu_12482555_p1.read()) + sc_bigint<12>(sext_ln703_576_fu_12482535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_759_fu_12482565_p2() {
    add_ln703_759_fu_12482565_p2 = (!add_ln703_758_fu_12482559_p2.read().is_01() || !zext_ln708_180_fu_12416212_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_758_fu_12482559_p2.read()) + sc_biguint<12>(zext_ln708_180_fu_12416212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_75_fu_12478279_p2() {
    add_ln703_75_fu_12478279_p2 = (!add_ln703_74_fu_12478273_p2.read().is_01() || !zext_ln1118_2249_fu_12402955_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln703_74_fu_12478273_p2.read()) + sc_biguint<8>(zext_ln1118_2249_fu_12402955_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_760_fu_12482571_p2() {
    add_ln703_760_fu_12482571_p2 = (!zext_ln1118_2415_fu_12413026_p1.read().is_01() || !zext_ln1116_225_fu_12416232_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2415_fu_12413026_p1.read()) + sc_biguint<10>(zext_ln1116_225_fu_12416232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_761_fu_12505248_p2() {
    add_ln703_761_fu_12505248_p2 = (!zext_ln703_124_fu_12505245_p1.read().is_01() || !sext_ln703_579_fu_12505242_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_124_fu_12505245_p1.read()) + sc_bigint<13>(sext_ln703_579_fu_12505242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_762_fu_12505254_p2() {
    add_ln703_762_fu_12505254_p2 = (!add_ln703_761_fu_12505248_p2.read().is_01() || !zext_ln1118_1974_fu_12502921_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_761_fu_12505248_p2.read()) + sc_biguint<13>(zext_ln1118_1974_fu_12502921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_763_fu_12482577_p2() {
    add_ln703_763_fu_12482577_p2 = (!zext_ln708_1082_fu_12416304_p1.read().is_01() || !sext_ln1118_248_fu_12416262_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1082_fu_12416304_p1.read()) + sc_bigint<11>(sext_ln1118_248_fu_12416262_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_764_fu_12505263_p2() {
    add_ln703_764_fu_12505263_p2 = (!sext_ln703_580_fu_12505260_p1.read().is_01() || !add_ln703_762_fu_12505254_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_580_fu_12505260_p1.read()) + sc_biguint<13>(add_ln703_762_fu_12505254_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_765_fu_12482583_p2() {
    add_ln703_765_fu_12482583_p2 = (!sext_ln708_47_fu_12416290_p1.read().is_01() || !zext_ln708_182_fu_12416276_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_47_fu_12416290_p1.read()) + sc_biguint<11>(zext_ln708_182_fu_12416276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_766_fu_12482589_p2() {
    add_ln703_766_fu_12482589_p2 = (!sext_ln1116_25_fu_12416318_p1.read().is_01() || !zext_ln1118_116_fu_12400863_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_25_fu_12416318_p1.read()) + sc_biguint<10>(zext_ln1118_116_fu_12400863_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_767_fu_12482599_p2() {
    add_ln703_767_fu_12482599_p2 = (!sext_ln703_582_fu_12482595_p1.read().is_01() || !add_ln703_765_fu_12482583_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_582_fu_12482595_p1.read()) + sc_biguint<11>(add_ln703_765_fu_12482583_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_768_fu_12505276_p2() {
    add_ln703_768_fu_12505276_p2 = (!sext_ln703_583_fu_12505273_p1.read().is_01() || !sext_ln703_581_fu_12505269_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_583_fu_12505273_p1.read()) + sc_bigint<14>(sext_ln703_581_fu_12505269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_769_fu_12505282_p2() {
    add_ln703_769_fu_12505282_p2 = (!sext_ln1118_91_fu_12502843_p1.read().is_01() || !sext_ln1116_28_fu_12502924_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_91_fu_12502843_p1.read()) + sc_bigint<12>(sext_ln1116_28_fu_12502924_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_76_fu_12478289_p2() {
    add_ln703_76_fu_12478289_p2 = (!sext_ln703_56_fu_12478285_p1.read().is_01() || !zext_ln703_23_fu_12478269_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_56_fu_12478285_p1.read()) + sc_biguint<12>(zext_ln703_23_fu_12478269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_770_fu_12505292_p2() {
    add_ln703_770_fu_12505292_p2 = (!sext_ln703_584_fu_12505288_p1.read().is_01() || !add_ln703_768_fu_12505276_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_584_fu_12505288_p1.read()) + sc_biguint<14>(add_ln703_768_fu_12505276_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_771_fu_12482605_p2() {
    add_ln703_771_fu_12482605_p2 = (!sext_ln1118_252_fu_12416424_p1.read().is_01() || !zext_ln708_187_fu_12416322_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_252_fu_12416424_p1.read()) + sc_biguint<12>(zext_ln708_187_fu_12416322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_772_fu_12482611_p2() {
    add_ln703_772_fu_12482611_p2 = (!zext_ln1116_226_fu_12416360_p1.read().is_01() || !zext_ln1116_227_fu_12416443_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_226_fu_12416360_p1.read()) + sc_biguint<10>(zext_ln1116_227_fu_12416443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_773_fu_12482621_p2() {
    add_ln703_773_fu_12482621_p2 = (!zext_ln703_125_fu_12482617_p1.read().is_01() || !add_ln703_771_fu_12482605_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_125_fu_12482617_p1.read()) + sc_biguint<12>(add_ln703_771_fu_12482605_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_774_fu_12505305_p2() {
    add_ln703_774_fu_12505305_p2 = (!sext_ln703_586_fu_12505302_p1.read().is_01() || !sext_ln703_585_fu_12505298_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_586_fu_12505302_p1.read()) + sc_bigint<15>(sext_ln703_585_fu_12505298_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_775_fu_12482627_p2() {
    add_ln703_775_fu_12482627_p2 = (!zext_ln1116_228_fu_12416467_p1.read().is_01() || !trunc_ln1118_74_fu_12416482_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_228_fu_12416467_p1.read()) + sc_biguint<9>(trunc_ln1118_74_fu_12416482_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_776_fu_12482637_p2() {
    add_ln703_776_fu_12482637_p2 = (!zext_ln708_994_fu_12407683_p1.read().is_01() || !sext_ln1118_250_fu_12416346_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_994_fu_12407683_p1.read()) + sc_bigint<11>(sext_ln1118_250_fu_12416346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_777_fu_12482647_p2() {
    add_ln703_777_fu_12482647_p2 = (!sext_ln703_587_fu_12482643_p1.read().is_01() || !zext_ln703_126_fu_12482633_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_587_fu_12482643_p1.read()) + sc_biguint<12>(zext_ln703_126_fu_12482633_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_778_fu_12482653_p2() {
    add_ln703_778_fu_12482653_p2 = (!sext_ln1118_201_fu_12414300_p1.read().is_01() || !sext_ln1116_27_fu_12416394_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_201_fu_12414300_p1.read()) + sc_bigint<9>(sext_ln1116_27_fu_12416394_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_779_fu_12482663_p2() {
    add_ln703_779_fu_12482663_p2 = (!zext_ln203_11_fu_12405571_p1.read().is_01() || !zext_ln1118_223_fu_12401599_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_11_fu_12405571_p1.read()) + sc_biguint<9>(zext_ln1118_223_fu_12401599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_77_fu_12503591_p2() {
    add_ln703_77_fu_12503591_p2 = (!sext_ln703_60_fu_12503588_p1.read().is_01() || !add_ln703_72_fu_12503582_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_60_fu_12503588_p1.read()) + sc_biguint<14>(add_ln703_72_fu_12503582_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_780_fu_12482673_p2() {
    add_ln703_780_fu_12482673_p2 = (!zext_ln703_127_fu_12482669_p1.read().is_01() || !sext_ln703_588_fu_12482659_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_127_fu_12482669_p1.read()) + sc_bigint<11>(sext_ln703_588_fu_12482659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_781_fu_12482683_p2() {
    add_ln703_781_fu_12482683_p2 = (!sext_ln703_589_fu_12482679_p1.read().is_01() || !add_ln703_777_fu_12482647_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_589_fu_12482679_p1.read()) + sc_biguint<12>(add_ln703_777_fu_12482647_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_782_fu_12505314_p2() {
    add_ln703_782_fu_12505314_p2 = (!sext_ln703_590_fu_12505311_p1.read().is_01() || !add_ln703_774_fu_12505305_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_590_fu_12505311_p1.read()) + sc_biguint<15>(add_ln703_774_fu_12505305_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_783_fu_12482689_p2() {
    add_ln703_783_fu_12482689_p2 = (!sext_ln203_115_fu_12416502_p1.read().is_01() || !sext_ln203_116_fu_12416506_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_115_fu_12416502_p1.read()) + sc_bigint<12>(sext_ln203_116_fu_12416506_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_785_fu_12482695_p2() {
    add_ln703_785_fu_12482695_p2 = (!sext_ln203_117_fu_12416520_p1.read().is_01() || !ap_const_lv12_D60.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_117_fu_12416520_p1.read()) + sc_bigint<12>(ap_const_lv12_D60));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_786_fu_12482705_p2() {
    add_ln703_786_fu_12482705_p2 = (!sext_ln703_116_fu_12482701_p1.read().is_01() || !sext_ln203_30_fu_12405741_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_116_fu_12482701_p1.read()) + sc_bigint<13>(sext_ln203_30_fu_12405741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_787_fu_12482711_p2() {
    add_ln703_787_fu_12482711_p2 = (!sext_ln1118_253_fu_12416548_p1.read().is_01() || !zext_ln1118_2050_fu_12416572_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_253_fu_12416548_p1.read()) + sc_biguint<12>(zext_ln1118_2050_fu_12416572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_788_fu_12482721_p2() {
    add_ln703_788_fu_12482721_p2 = (!sext_ln703_593_fu_12482717_p1.read().is_01() || !add_ln703_786_fu_12482705_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_593_fu_12482717_p1.read()) + sc_biguint<13>(add_ln703_786_fu_12482705_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_789_fu_12482731_p2() {
    add_ln703_789_fu_12482731_p2 = (!sext_ln703_117_fu_12482727_p1.read().is_01() || !sext_ln203_119_fu_12416600_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_117_fu_12482727_p1.read()) + sc_bigint<14>(sext_ln203_119_fu_12416600_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_78_fu_12478295_p2() {
    add_ln703_78_fu_12478295_p2 = (!sext_ln1118_18_fu_12403103_p1.read().is_01() || !sext_ln1118_21_fu_12403241_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_18_fu_12403103_p1.read()) + sc_bigint<12>(sext_ln1118_21_fu_12403241_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_790_fu_12482737_p2() {
    add_ln703_790_fu_12482737_p2 = (!zext_ln1118_2480_fu_12416614_p1.read().is_01() || !trunc_ln1118_75_fu_12416628_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2480_fu_12416614_p1.read()) + sc_biguint<10>(trunc_ln1118_75_fu_12416628_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_791_fu_12482747_p2() {
    add_ln703_791_fu_12482747_p2 = (!zext_ln703_128_fu_12482743_p1.read().is_01() || !zext_ln708_1083_fu_12416586_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_128_fu_12482743_p1.read()) + sc_biguint<11>(zext_ln708_1083_fu_12416586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_792_fu_12505336_p2() {
    add_ln703_792_fu_12505336_p2 = (!zext_ln703_129_fu_12505333_p1.read().is_01() || !add_ln703_789_reg_12515827.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_129_fu_12505333_p1.read()) + sc_biguint<14>(add_ln703_789_reg_12515827.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_793_fu_12482753_p2() {
    add_ln703_793_fu_12482753_p2 = (!trunc_ln1118_76_fu_12416660_p4.read().is_01() || !zext_ln708_1084_fu_12416670_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_76_fu_12416660_p4.read()) + sc_biguint<10>(zext_ln708_1084_fu_12416670_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_794_fu_12482763_p2() {
    add_ln703_794_fu_12482763_p2 = (!zext_ln703_130_fu_12482759_p1.read().is_01() || !zext_ln708_961_fu_12403004_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_130_fu_12482759_p1.read()) + sc_biguint<11>(zext_ln708_961_fu_12403004_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_795_fu_12482773_p2() {
    add_ln703_795_fu_12482773_p2 = (!zext_ln1118_83_fu_12400615_p1.read().is_01() || !zext_ln708_89_fu_12407894_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_83_fu_12400615_p1.read()) + sc_biguint<9>(zext_ln708_89_fu_12407894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_796_fu_12482783_p2() {
    add_ln703_796_fu_12482783_p2 = (!zext_ln703_132_fu_12482779_p1.read().is_01() || !sext_ln1118_30_fu_12403659_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_132_fu_12482779_p1.read()) + sc_bigint<11>(sext_ln1118_30_fu_12403659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_797_fu_12482793_p2() {
    add_ln703_797_fu_12482793_p2 = (!sext_ln703_594_fu_12482789_p1.read().is_01() || !zext_ln703_131_fu_12482769_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_594_fu_12482789_p1.read()) + sc_biguint<12>(zext_ln703_131_fu_12482769_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_798_fu_12505344_p2() {
    add_ln703_798_fu_12505344_p2 = (!sext_ln703_595_fu_12505341_p1.read().is_01() || !add_ln703_792_fu_12505336_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_595_fu_12505341_p1.read()) + sc_biguint<14>(add_ln703_792_fu_12505336_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_799_fu_12505354_p2() {
    add_ln703_799_fu_12505354_p2 = (!sext_ln1118_91_fu_12502843_p1.read().is_01() || !sext_ln1118_256_fu_12502927_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_91_fu_12502843_p1.read()) + sc_bigint<12>(sext_ln1118_256_fu_12502927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_79_fu_12503600_p2() {
    add_ln703_79_fu_12503600_p2 = (!sext_ln703_62_fu_12503597_p1.read().is_01() || !add_ln703_77_fu_12503591_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_62_fu_12503597_p1.read()) + sc_biguint<14>(add_ln703_77_fu_12503591_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_7_fu_12477847_p2() {
    add_ln703_7_fu_12477847_p2 = (!zext_ln1116_204_fu_12400755_p1.read().is_01() || !zext_ln1116_205_fu_12400905_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_204_fu_12400755_p1.read()) + sc_biguint<9>(zext_ln1116_205_fu_12400905_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_800_fu_12505364_p2() {
    add_ln703_800_fu_12505364_p2 = (!sext_ln703_596_fu_12505360_p1.read().is_01() || !sext_ln703_118_fu_12505350_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_596_fu_12505360_p1.read()) + sc_bigint<15>(sext_ln703_118_fu_12505350_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_801_fu_12482799_p2() {
    add_ln703_801_fu_12482799_p2 = (!zext_ln708_1085_fu_12416694_p1.read().is_01() || !zext_ln708_1024_fu_12410417_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1085_fu_12416694_p1.read()) + sc_biguint<11>(zext_ln708_1024_fu_12410417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_802_fu_12482809_p2() {
    add_ln703_802_fu_12482809_p2 = (!zext_ln703_133_fu_12482805_p1.read().is_01() || !sext_ln1118_257_fu_12416794_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_133_fu_12482805_p1.read()) + sc_bigint<13>(sext_ln1118_257_fu_12416794_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_803_fu_12505373_p2() {
    add_ln703_803_fu_12505373_p2 = (!sext_ln703_597_fu_12505370_p1.read().is_01() || !add_ln703_800_fu_12505364_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_597_fu_12505370_p1.read()) + sc_biguint<15>(add_ln703_800_fu_12505364_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_804_fu_12482815_p2() {
    add_ln703_804_fu_12482815_p2 = (!zext_ln708_1087_fu_12416736_p1.read().is_01() || !zext_ln708_1088_fu_12416808_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1087_fu_12416736_p1.read()) + sc_biguint<11>(zext_ln708_1088_fu_12416808_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_805_fu_12482821_p2() {
    add_ln703_805_fu_12482821_p2 = (!add_ln703_804_fu_12482815_p2.read().is_01() || !zext_ln708_1086_fu_12416722_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_804_fu_12482815_p2.read()) + sc_biguint<11>(zext_ln708_1086_fu_12416722_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_806_fu_12482831_p2() {
    add_ln703_806_fu_12482831_p2 = (!zext_ln708_212_fu_12416674_p1.read().is_01() || !sext_ln1118_255_fu_12416770_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_212_fu_12416674_p1.read()) + sc_bigint<11>(sext_ln1118_255_fu_12416770_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_807_fu_12482837_p2() {
    add_ln703_807_fu_12482837_p2 = (!add_ln703_806_fu_12482831_p2.read().is_01() || !zext_ln1118_181_fu_12401116_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_806_fu_12482831_p2.read()) + sc_biguint<11>(zext_ln1118_181_fu_12401116_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_808_fu_12482847_p2() {
    add_ln703_808_fu_12482847_p2 = (!sext_ln703_598_fu_12482843_p1.read().is_01() || !zext_ln703_134_fu_12482827_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_598_fu_12482843_p1.read()) + sc_biguint<13>(zext_ln703_134_fu_12482827_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_809_fu_12505382_p2() {
    add_ln703_809_fu_12505382_p2 = (!sext_ln703_599_fu_12505379_p1.read().is_01() || !add_ln703_803_fu_12505373_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_599_fu_12505379_p1.read()) + sc_biguint<15>(add_ln703_803_fu_12505373_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_80_fu_12478301_p2() {
    add_ln703_80_fu_12478301_p2 = (!sext_ln1118_24_fu_12403385_p1.read().is_01() || !sext_ln1118_25_fu_12403399_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_24_fu_12403385_p1.read()) + sc_bigint<12>(sext_ln1118_25_fu_12403399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_810_fu_12482853_p2() {
    add_ln703_810_fu_12482853_p2 = (!zext_ln708_1089_fu_12416862_p1.read().is_01() || !zext_ln708_1090_fu_12416904_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1089_fu_12416862_p1.read()) + sc_biguint<11>(zext_ln708_1090_fu_12416904_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_811_fu_12505391_p2() {
    add_ln703_811_fu_12505391_p2 = (!zext_ln703_135_fu_12505388_p1.read().is_01() || !add_ln703_809_fu_12505382_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_135_fu_12505388_p1.read()) + sc_biguint<15>(add_ln703_809_fu_12505382_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_812_fu_12482859_p2() {
    add_ln703_812_fu_12482859_p2 = (!sext_ln203_121_fu_12416842_p1.read().is_01() || !sext_ln203_122_fu_12416876_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_121_fu_12416842_p1.read()) + sc_bigint<11>(sext_ln203_122_fu_12416876_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_813_fu_12482869_p2() {
    add_ln703_813_fu_12482869_p2 = (!sext_ln203_120_fu_12416828_p1.read().is_01() || !zext_ln203_41_fu_12416890_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_120_fu_12416828_p1.read()) + sc_biguint<10>(zext_ln203_41_fu_12416890_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_814_fu_12482879_p2() {
    add_ln703_814_fu_12482879_p2 = (!sext_ln703_601_fu_12482875_p1.read().is_01() || !sext_ln703_600_fu_12482865_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_601_fu_12482875_p1.read()) + sc_bigint<12>(sext_ln703_600_fu_12482865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_816_fu_12482885_p2() {
    add_ln703_816_fu_12482885_p2 = (!trunc_ln1118_77_fu_12416908_p4.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln1118_77_fu_12416908_p4.read()) + sc_bigint<8>(ap_const_lv8_A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_817_fu_12482895_p2() {
    add_ln703_817_fu_12482895_p2 = (!sext_ln703_604_fu_12482891_p1.read().is_01() || !sext_ln203_20_fu_12404347_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_604_fu_12482891_p1.read()) + sc_bigint<12>(sext_ln203_20_fu_12404347_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_818_fu_12482905_p2() {
    add_ln703_818_fu_12482905_p2 = (!sext_ln703_120_fu_12482901_p1.read().is_01() || !sext_ln203_124_fu_12417040_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_120_fu_12482901_p1.read()) + sc_bigint<13>(sext_ln203_124_fu_12417040_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_819_fu_12482911_p2() {
    add_ln703_819_fu_12482911_p2 = (!zext_ln708_1091_fu_12416942_p1.read().is_01() || !zext_ln708_1092_fu_12416980_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1091_fu_12416942_p1.read()) + sc_biguint<9>(zext_ln708_1092_fu_12416980_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_81_fu_12478311_p2() {
    add_ln703_81_fu_12478311_p2 = (!sext_ln703_64_fu_12478307_p1.read().is_01() || !sext_ln1118_23_fu_12403341_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_64_fu_12478307_p1.read()) + sc_bigint<13>(sext_ln1118_23_fu_12403341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_820_fu_12505413_p2() {
    add_ln703_820_fu_12505413_p2 = (!zext_ln703_136_fu_12505410_p1.read().is_01() || !add_ln703_818_reg_12515862.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_136_fu_12505410_p1.read()) + sc_biguint<13>(add_ln703_818_reg_12515862.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_821_fu_12482917_p2() {
    add_ln703_821_fu_12482917_p2 = (!zext_ln708_1093_fu_12417008_p1.read().is_01() || !sext_ln1118_258_fu_12416928_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1093_fu_12417008_p1.read()) + sc_bigint<11>(sext_ln1118_258_fu_12416928_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_822_fu_12482923_p2() {
    add_ln703_822_fu_12482923_p2 = (!zext_ln1118_2482_fu_12416994_p1.read().is_01() || !zext_ln708_1094_fu_12417054_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln1118_2482_fu_12416994_p1.read()) + sc_biguint<7>(zext_ln708_1094_fu_12417054_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_823_fu_12482929_p2() {
    add_ln703_823_fu_12482929_p2 = (!add_ln703_822_fu_12482923_p2.read().is_01() || !zext_ln1118_2481_fu_12416956_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln703_822_fu_12482923_p2.read()) + sc_biguint<7>(zext_ln1118_2481_fu_12416956_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_824_fu_12482939_p2() {
    add_ln703_824_fu_12482939_p2 = (!zext_ln703_137_fu_12482935_p1.read().is_01() || !add_ln703_821_fu_12482917_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_137_fu_12482935_p1.read()) + sc_biguint<11>(add_ln703_821_fu_12482917_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_825_fu_12505421_p2() {
    add_ln703_825_fu_12505421_p2 = (!sext_ln703_605_fu_12505418_p1.read().is_01() || !add_ln703_820_fu_12505413_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_605_fu_12505418_p1.read()) + sc_biguint<13>(add_ln703_820_fu_12505413_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_826_fu_12505431_p2() {
    add_ln703_826_fu_12505431_p2 = (!sext_ln703_121_fu_12505427_p1.read().is_01() || !zext_ln203_42_fu_12502930_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_121_fu_12505427_p1.read()) + sc_biguint<14>(zext_ln203_42_fu_12502930_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_827_fu_12482945_p2() {
    add_ln703_827_fu_12482945_p2 = (!zext_ln708_1006_fu_12408542_p1.read().is_01() || !zext_ln1118_2483_fu_12417092_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1006_fu_12408542_p1.read()) + sc_biguint<10>(zext_ln1118_2483_fu_12417092_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_828_fu_12505440_p2() {
    add_ln703_828_fu_12505440_p2 = (!zext_ln703_138_fu_12505437_p1.read().is_01() || !add_ln703_826_fu_12505431_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_138_fu_12505437_p1.read()) + sc_biguint<14>(add_ln703_826_fu_12505431_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_829_fu_12482951_p2() {
    add_ln703_829_fu_12482951_p2 = (!zext_ln1118_2484_fu_12417106_p1.read().is_01() || !zext_ln1118_2485_fu_12417120_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2484_fu_12417106_p1.read()) + sc_biguint<9>(zext_ln1118_2485_fu_12417120_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_82_fu_12503613_p2() {
    add_ln703_82_fu_12503613_p2 = (!sext_ln703_65_fu_12503610_p1.read().is_01() || !sext_ln703_63_fu_12503606_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_65_fu_12503610_p1.read()) + sc_bigint<15>(sext_ln703_63_fu_12503606_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_830_fu_12482961_p2() {
    add_ln703_830_fu_12482961_p2 = (!zext_ln708_1095_fu_12417140_p1.read().is_01() || !sext_ln1118_259_fu_12417078_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1095_fu_12417140_p1.read()) + sc_bigint<11>(sext_ln1118_259_fu_12417078_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_831_fu_12482971_p2() {
    add_ln703_831_fu_12482971_p2 = (!sext_ln703_606_fu_12482967_p1.read().is_01() || !zext_ln703_139_fu_12482957_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_606_fu_12482967_p1.read()) + sc_biguint<12>(zext_ln703_139_fu_12482957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_832_fu_12505449_p2() {
    add_ln703_832_fu_12505449_p2 = (!sext_ln703_607_fu_12505446_p1.read().is_01() || !add_ln703_828_fu_12505440_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_607_fu_12505446_p1.read()) + sc_biguint<14>(add_ln703_828_fu_12505440_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_833_fu_12482977_p2() {
    add_ln703_833_fu_12482977_p2 = (!sext_ln203_13_fu_12404049_p1.read().is_01() || !sext_ln1118_265_fu_12417292_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_13_fu_12404049_p1.read()) + sc_bigint<12>(sext_ln1118_265_fu_12417292_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_834_fu_12505462_p2() {
    add_ln703_834_fu_12505462_p2 = (!sext_ln703_608_fu_12505459_p1.read().is_01() || !sext_ln703_122_fu_12505455_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_608_fu_12505459_p1.read()) + sc_bigint<15>(sext_ln703_122_fu_12505455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_835_fu_12482983_p2() {
    add_ln703_835_fu_12482983_p2 = (!zext_ln1118_2486_fu_12417188_p1.read().is_01() || !trunc_ln1118_78_fu_12417206_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2486_fu_12417188_p1.read()) + sc_biguint<10>(trunc_ln1118_78_fu_12417206_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_836_fu_12482993_p2() {
    add_ln703_836_fu_12482993_p2 = (!zext_ln703_140_fu_12482989_p1.read().is_01() || !sext_ln1118_266_fu_12417306_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_140_fu_12482989_p1.read()) + sc_bigint<12>(sext_ln1118_266_fu_12417306_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_837_fu_12505471_p2() {
    add_ln703_837_fu_12505471_p2 = (!sext_ln703_609_fu_12505468_p1.read().is_01() || !add_ln703_834_fu_12505462_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_609_fu_12505468_p1.read()) + sc_biguint<15>(add_ln703_834_fu_12505462_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_838_fu_12482999_p2() {
    add_ln703_838_fu_12482999_p2 = (!zext_ln1118_2487_fu_12417250_p1.read().is_01() || !zext_ln1118_2489_fu_12417330_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2487_fu_12417250_p1.read()) + sc_biguint<10>(zext_ln1118_2489_fu_12417330_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_839_fu_12483009_p2() {
    add_ln703_839_fu_12483009_p2 = (!zext_ln703_141_fu_12483005_p1.read().is_01() || !zext_ln708_1096_fu_12417226_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_141_fu_12483005_p1.read()) + sc_biguint<11>(zext_ln708_1096_fu_12417226_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_83_fu_12478317_p2() {
    add_ln703_83_fu_12478317_p2 = (!zext_ln1118_2253_fu_12403255_p1.read().is_01() || !zext_ln708_963_fu_12403291_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2253_fu_12403255_p1.read()) + sc_biguint<10>(zext_ln708_963_fu_12403291_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_840_fu_12483019_p2() {
    add_ln703_840_fu_12483019_p2 = (!sext_ln1118_261_fu_12417164_p1.read().is_01() || !sext_ln708_49_fu_12417202_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_261_fu_12417164_p1.read()) + sc_bigint<9>(sext_ln708_49_fu_12417202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_841_fu_12483029_p2() {
    add_ln703_841_fu_12483029_p2 = (!sext_ln703_610_fu_12483025_p1.read().is_01() || !sext_ln1118_263_fu_12417264_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_610_fu_12483025_p1.read()) + sc_bigint<10>(sext_ln1118_263_fu_12417264_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_842_fu_12483039_p2() {
    add_ln703_842_fu_12483039_p2 = (!sext_ln703_611_fu_12483035_p1.read().is_01() || !zext_ln703_142_fu_12483015_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_611_fu_12483035_p1.read()) + sc_biguint<12>(zext_ln703_142_fu_12483015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_843_fu_12505480_p2() {
    add_ln703_843_fu_12505480_p2 = (!sext_ln703_612_fu_12505477_p1.read().is_01() || !add_ln703_837_fu_12505471_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_612_fu_12505477_p1.read()) + sc_biguint<15>(add_ln703_837_fu_12505471_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_844_fu_12505486_p2() {
    add_ln703_844_fu_12505486_p2 = (!add_ln703_843_fu_12505480_p2.read().is_01() || !sext_ln203_126_fu_12502933_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_843_fu_12505480_p2.read()) + sc_bigint<15>(sext_ln203_126_fu_12502933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_845_fu_12483045_p2() {
    add_ln703_845_fu_12483045_p2 = (!zext_ln708_1097_fu_12417402_p1.read().is_01() || !sext_ln203_125_fu_12417344_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1097_fu_12417402_p1.read()) + sc_bigint<11>(sext_ln203_125_fu_12417344_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_846_fu_12483055_p2() {
    add_ln703_846_fu_12483055_p2 = (!sext_ln703_613_fu_12483051_p1.read().is_01() || !zext_ln203_43_fu_12417372_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_613_fu_12483051_p1.read()) + sc_biguint<12>(zext_ln203_43_fu_12417372_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_848_fu_12483061_p2() {
    add_ln703_848_fu_12483061_p2 = (!sext_ln203_127_fu_12417416_p1.read().is_01() || !ap_const_lv12_FD8.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_127_fu_12417416_p1.read()) + sc_bigint<12>(ap_const_lv12_FD8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_849_fu_12483071_p2() {
    add_ln703_849_fu_12483071_p2 = (!sext_ln703_124_fu_12483067_p1.read().is_01() || !sext_ln203_128_fu_12417430_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_124_fu_12483067_p1.read()) + sc_bigint<13>(sext_ln203_128_fu_12417430_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_84_fu_12478323_p2() {
    add_ln703_84_fu_12478323_p2 = (!add_ln703_83_fu_12478317_p2.read().is_01() || !zext_ln1118_2252_fu_12403197_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_83_fu_12478317_p2.read()) + sc_biguint<10>(zext_ln1118_2252_fu_12403197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_850_fu_12483077_p2() {
    add_ln703_850_fu_12483077_p2 = (!zext_ln1118_2085_fu_12417468_p1.read().is_01() || !sext_ln708_50_fu_12417454_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2085_fu_12417468_p1.read()) + sc_bigint<12>(sext_ln708_50_fu_12417454_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_851_fu_12483087_p2() {
    add_ln703_851_fu_12483087_p2 = (!sext_ln703_616_fu_12483083_p1.read().is_01() || !add_ln703_849_fu_12483071_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_616_fu_12483083_p1.read()) + sc_biguint<13>(add_ln703_849_fu_12483071_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_852_fu_12483097_p2() {
    add_ln703_852_fu_12483097_p2 = (!sext_ln1118_269_fu_12417496_p1.read().is_01() || !zext_ln1118_2088_fu_12417510_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_269_fu_12417496_p1.read()) + sc_biguint<12>(zext_ln1118_2088_fu_12417510_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_853_fu_12483107_p2() {
    add_ln703_853_fu_12483107_p2 = (!sext_ln703_617_fu_12483103_p1.read().is_01() || !sext_ln703_125_fu_12483093_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_617_fu_12483103_p1.read()) + sc_bigint<14>(sext_ln703_125_fu_12483093_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_854_fu_12483113_p2() {
    add_ln703_854_fu_12483113_p2 = (!sext_ln1118_273_fu_12417574_p1.read().is_01() || !sext_ln1118_268_fu_12417472_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_273_fu_12417574_p1.read()) + sc_bigint<9>(sext_ln1118_268_fu_12417472_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_855_fu_12483123_p2() {
    add_ln703_855_fu_12483123_p2 = (!sext_ln703_618_fu_12483119_p1.read().is_01() || !sext_ln1118_271_fu_12417534_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_618_fu_12483119_p1.read()) + sc_bigint<10>(sext_ln1118_271_fu_12417534_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_856_fu_12483133_p2() {
    add_ln703_856_fu_12483133_p2 = (!sext_ln703_619_fu_12483129_p1.read().is_01() || !add_ln703_853_fu_12483107_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_619_fu_12483129_p1.read()) + sc_biguint<14>(add_ln703_853_fu_12483107_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_857_fu_12483139_p2() {
    add_ln703_857_fu_12483139_p2 = (!zext_ln1118_2093_fu_12417588_p1.read().is_01() || !sext_ln1118_62_fu_12405991_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2093_fu_12417588_p1.read()) + sc_bigint<12>(sext_ln1118_62_fu_12405991_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_858_fu_12505508_p2() {
    add_ln703_858_fu_12505508_p2 = (!sext_ln703_620_fu_12505505_p1.read().is_01() || !add_ln703_856_reg_12515907.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_620_fu_12505505_p1.read()) + sc_biguint<14>(add_ln703_856_reg_12515907.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_859_fu_12483145_p2() {
    add_ln703_859_fu_12483145_p2 = (!zext_ln1118_2490_fu_12417602_p1.read().is_01() || !zext_ln1118_2491_fu_12417626_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2490_fu_12417602_p1.read()) + sc_biguint<10>(zext_ln1118_2491_fu_12417626_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_85_fu_12478333_p2() {
    add_ln703_85_fu_12478333_p2 = (!zext_ln708_964_fu_12403431_p1.read().is_01() || !sext_ln1118_20_fu_12403149_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_964_fu_12403431_p1.read()) + sc_bigint<11>(sext_ln1118_20_fu_12403149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_860_fu_12483155_p2() {
    add_ln703_860_fu_12483155_p2 = (!zext_ln703_143_fu_12483151_p1.read().is_01() || !sext_ln1118_12_fu_12402380_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_143_fu_12483151_p1.read()) + sc_bigint<12>(sext_ln1118_12_fu_12402380_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_861_fu_12505516_p2() {
    add_ln703_861_fu_12505516_p2 = (!sext_ln703_621_fu_12505513_p1.read().is_01() || !add_ln703_858_fu_12505508_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_621_fu_12505513_p1.read()) + sc_biguint<14>(add_ln703_858_fu_12505508_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_862_fu_12483161_p2() {
    add_ln703_862_fu_12483161_p2 = (!zext_ln708_1098_fu_12417654_p1.read().is_01() || !sext_ln1118_275_fu_12417688_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1098_fu_12417654_p1.read()) + sc_bigint<11>(sext_ln1118_275_fu_12417688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_863_fu_12483171_p2() {
    add_ln703_863_fu_12483171_p2 = (!sext_ln703_623_fu_12483167_p1.read().is_01() || !zext_ln708_215_fu_12417640_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_623_fu_12483167_p1.read()) + sc_biguint<12>(zext_ln708_215_fu_12417640_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_864_fu_12483177_p2() {
    add_ln703_864_fu_12483177_p2 = (!sext_ln1118_276_fu_12417720_p1.read().is_01() || !sext_ln1118_278_fu_12417748_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_276_fu_12417720_p1.read()) + sc_bigint<10>(sext_ln1118_278_fu_12417748_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_865_fu_12483187_p2() {
    add_ln703_865_fu_12483187_p2 = (!zext_ln708_998_fu_12408102_p1.read().is_01() || !sext_ln1118_277_fu_12417744_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_998_fu_12408102_p1.read()) + sc_bigint<8>(sext_ln1118_277_fu_12417744_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_866_fu_12483197_p2() {
    add_ln703_866_fu_12483197_p2 = (!sext_ln703_625_fu_12483193_p1.read().is_01() || !sext_ln703_624_fu_12483183_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_625_fu_12483193_p1.read()) + sc_bigint<11>(sext_ln703_624_fu_12483183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_867_fu_12483207_p2() {
    add_ln703_867_fu_12483207_p2 = (!sext_ln703_626_fu_12483203_p1.read().is_01() || !add_ln703_863_fu_12483171_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_626_fu_12483203_p1.read()) + sc_biguint<12>(add_ln703_863_fu_12483171_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_868_fu_12505529_p2() {
    add_ln703_868_fu_12505529_p2 = (!sext_ln703_627_fu_12505526_p1.read().is_01() || !sext_ln703_622_fu_12505522_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_627_fu_12505526_p1.read()) + sc_bigint<15>(sext_ln703_622_fu_12505522_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_869_fu_12483213_p2() {
    add_ln703_869_fu_12483213_p2 = (!sext_ln203_129_fu_12417762_p1.read().is_01() || !sext_ln1118_22_fu_12403337_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_129_fu_12417762_p1.read()) + sc_bigint<12>(sext_ln1118_22_fu_12403337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_86_fu_12478343_p2() {
    add_ln703_86_fu_12478343_p2 = (!sext_ln708_5_fu_12403445_p1.read().is_01() || !zext_ln1118_360_fu_12403305_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_5_fu_12403445_p1.read()) + sc_biguint<11>(zext_ln1118_360_fu_12403305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_870_fu_12505538_p2() {
    add_ln703_870_fu_12505538_p2 = (!sext_ln703_628_fu_12505535_p1.read().is_01() || !add_ln703_868_fu_12505529_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_628_fu_12505535_p1.read()) + sc_biguint<15>(add_ln703_868_fu_12505529_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_871_fu_12483219_p2() {
    add_ln703_871_fu_12483219_p2 = (!zext_ln203_350_fu_12417776_p1.read().is_01() || !trunc_ln203_s_fu_12417826_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_350_fu_12417776_p1.read()) + sc_biguint<10>(trunc_ln203_s_fu_12417826_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_872_fu_12505547_p2() {
    add_ln703_872_fu_12505547_p2 = (!zext_ln703_144_fu_12505544_p1.read().is_01() || !sext_ln203_132_fu_12502936_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_144_fu_12505544_p1.read()) + sc_bigint<12>(sext_ln203_132_fu_12502936_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_873_fu_12505557_p2() {
    add_ln703_873_fu_12505557_p2 = (!sext_ln703_629_fu_12505553_p1.read().is_01() || !add_ln703_870_fu_12505538_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_629_fu_12505553_p1.read()) + sc_biguint<15>(add_ln703_870_fu_12505538_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_874_fu_12483225_p2() {
    add_ln703_874_fu_12483225_p2 = (!zext_ln203_351_fu_12417890_p1.read().is_01() || !sext_ln203_133_fu_12417866_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_351_fu_12417890_p1.read()) + sc_bigint<9>(sext_ln203_133_fu_12417866_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_875_fu_12483235_p2() {
    add_ln703_875_fu_12483235_p2 = (!sext_ln703_630_fu_12483231_p1.read().is_01() || !zext_ln203_43_fu_12417372_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_630_fu_12483231_p1.read()) + sc_biguint<12>(zext_ln203_43_fu_12417372_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_876_fu_12483241_p2() {
    add_ln703_876_fu_12483241_p2 = (!sext_ln203_131_fu_12417822_p1.read().is_01() || !sext_ln203_134_fu_12417910_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln203_131_fu_12417822_p1.read()) + sc_bigint<6>(sext_ln203_134_fu_12417910_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_877_fu_12483251_p2() {
    add_ln703_877_fu_12483251_p2 = (!sext_ln703_631_fu_12483247_p1.read().is_01() || !zext_ln203_44_fu_12417790_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_631_fu_12483247_p1.read()) + sc_biguint<9>(zext_ln203_44_fu_12417790_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_878_fu_12483261_p2() {
    add_ln703_878_fu_12483261_p2 = (!sext_ln703_632_fu_12483257_p1.read().is_01() || !add_ln703_875_fu_12483235_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_632_fu_12483257_p1.read()) + sc_biguint<12>(add_ln703_875_fu_12483235_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_87_fu_12478353_p2() {
    add_ln703_87_fu_12478353_p2 = (!sext_ln703_70_fu_12478349_p1.read().is_01() || !sext_ln703_69_fu_12478339_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_70_fu_12478349_p1.read()) + sc_bigint<12>(sext_ln703_69_fu_12478339_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_880_fu_12483267_p2() {
    add_ln703_880_fu_12483267_p2 = (!zext_ln1118_2492_fu_12417934_p1.read().is_01() || !zext_ln1118_2493_fu_12417948_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2492_fu_12417934_p1.read()) + sc_biguint<10>(zext_ln1118_2493_fu_12417948_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_881_fu_12483277_p2() {
    add_ln703_881_fu_12483277_p2 = (!zext_ln703_145_fu_12483273_p1.read().is_01() || !zext_ln708_1099_fu_12417914_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_145_fu_12483273_p1.read()) + sc_biguint<11>(zext_ln708_1099_fu_12417914_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_882_fu_12483287_p2() {
    add_ln703_882_fu_12483287_p2 = (!sext_ln1116_24_fu_12416154_p1.read().is_01() || !ap_const_lv10_2E0.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_24_fu_12416154_p1.read()) + sc_bigint<10>(ap_const_lv10_2E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_883_fu_12483293_p2() {
    add_ln703_883_fu_12483293_p2 = (!add_ln703_882_fu_12483287_p2.read().is_01() || !zext_ln708_1100_fu_12417962_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_882_fu_12483287_p2.read()) + sc_biguint<10>(zext_ln708_1100_fu_12417962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_884_fu_12483303_p2() {
    add_ln703_884_fu_12483303_p2 = (!sext_ln703_635_fu_12483299_p1.read().is_01() || !zext_ln703_146_fu_12483283_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_635_fu_12483299_p1.read()) + sc_biguint<12>(zext_ln703_146_fu_12483283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_885_fu_12483309_p2() {
    add_ln703_885_fu_12483309_p2 = (!add_ln703_884_fu_12483303_p2.read().is_01() || !zext_ln1116_80_fu_12417994_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_884_fu_12483303_p2.read()) + sc_biguint<12>(zext_ln1116_80_fu_12417994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_886_fu_12483315_p2() {
    add_ln703_886_fu_12483315_p2 = (!sext_ln708_52_fu_12418013_p1.read().is_01() || !zext_ln1118_2115_fu_12418037_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_52_fu_12418013_p1.read()) + sc_biguint<12>(zext_ln1118_2115_fu_12418037_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_887_fu_12505582_p2() {
    add_ln703_887_fu_12505582_p2 = (!sext_ln703_637_fu_12505579_p1.read().is_01() || !sext_ln703_636_fu_12505576_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_637_fu_12505579_p1.read()) + sc_bigint<13>(sext_ln703_636_fu_12505576_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_888_fu_12505588_p2() {
    add_ln703_888_fu_12505588_p2 = (!add_ln703_887_fu_12505582_p2.read().is_01() || !zext_ln708_221_fu_12502939_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_887_fu_12505582_p2.read()) + sc_biguint<13>(zext_ln708_221_fu_12502939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_889_fu_12483321_p2() {
    add_ln703_889_fu_12483321_p2 = (!zext_ln1118_2494_fu_12418099_p1.read().is_01() || !zext_ln1116_229_fu_12418137_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2494_fu_12418099_p1.read()) + sc_biguint<10>(zext_ln1116_229_fu_12418137_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_88_fu_12478363_p2() {
    add_ln703_88_fu_12478363_p2 = (!sext_ln703_71_fu_12478359_p1.read().is_01() || !zext_ln703_24_fu_12478329_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_71_fu_12478359_p1.read()) + sc_biguint<13>(zext_ln703_24_fu_12478329_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_890_fu_12505597_p2() {
    add_ln703_890_fu_12505597_p2 = (!zext_ln703_147_fu_12505594_p1.read().is_01() || !add_ln703_888_fu_12505588_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_147_fu_12505594_p1.read()) + sc_biguint<13>(add_ln703_888_fu_12505588_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_891_fu_12483327_p2() {
    add_ln703_891_fu_12483327_p2 = (!zext_ln1118_2126_fu_12418141_p1.read().is_01() || !zext_ln1118_2120_fu_12418075_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2126_fu_12418141_p1.read()) + sc_biguint<10>(zext_ln1118_2120_fu_12418075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_892_fu_12483337_p2() {
    add_ln703_892_fu_12483337_p2 = (!sext_ln1118_281_fu_12418061_p1.read().is_01() || !sext_ln1116_29_fu_12418133_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_281_fu_12418061_p1.read()) + sc_bigint<8>(sext_ln1116_29_fu_12418133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_893_fu_12483347_p2() {
    add_ln703_893_fu_12483347_p2 = (!sext_ln703_639_fu_12483343_p1.read().is_01() || !zext_ln703_148_fu_12483333_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_639_fu_12483343_p1.read()) + sc_biguint<11>(zext_ln703_148_fu_12483333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_894_fu_12505610_p2() {
    add_ln703_894_fu_12505610_p2 = (!sext_ln703_640_fu_12505607_p1.read().is_01() || !sext_ln703_638_fu_12505603_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_640_fu_12505607_p1.read()) + sc_bigint<14>(sext_ln703_638_fu_12505603_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_895_fu_12483353_p2() {
    add_ln703_895_fu_12483353_p2 = (!sext_ln1118_283_fu_12418155_p1.read().is_01() || !sext_ln1118_284_fu_12418211_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_283_fu_12418155_p1.read()) + sc_bigint<12>(sext_ln1118_284_fu_12418211_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_896_fu_12505619_p2() {
    add_ln703_896_fu_12505619_p2 = (!sext_ln703_641_fu_12505616_p1.read().is_01() || !add_ln703_894_fu_12505610_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_641_fu_12505616_p1.read()) + sc_biguint<14>(add_ln703_894_fu_12505610_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_897_fu_12483359_p2() {
    add_ln703_897_fu_12483359_p2 = (!sext_ln1118_285_fu_12418225_p1.read().is_01() || !sext_ln1118_287_fu_12418255_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_285_fu_12418225_p1.read()) + sc_bigint<12>(sext_ln1118_287_fu_12418255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_898_fu_12483369_p2() {
    add_ln703_898_fu_12483369_p2 = (!zext_ln1116_230_fu_12418169_p1.read().is_01() || !zext_ln708_1101_fu_12418183_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_230_fu_12418169_p1.read()) + sc_biguint<10>(zext_ln708_1101_fu_12418183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_899_fu_12483379_p2() {
    add_ln703_899_fu_12483379_p2 = (!zext_ln703_149_fu_12483375_p1.read().is_01() || !sext_ln703_643_fu_12483365_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_149_fu_12483375_p1.read()) + sc_bigint<13>(sext_ln703_643_fu_12483365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_89_fu_12503622_p2() {
    add_ln703_89_fu_12503622_p2 = (!sext_ln703_72_fu_12503619_p1.read().is_01() || !add_ln703_82_fu_12503613_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_72_fu_12503619_p1.read()) + sc_biguint<15>(add_ln703_82_fu_12503613_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_8_fu_12477857_p2() {
    add_ln703_8_fu_12477857_p2 = (!sext_ln708_fu_12400600_p1.read().is_01() || !sext_ln708_1_fu_12400845_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_fu_12400600_p1.read()) + sc_bigint<10>(sext_ln708_1_fu_12400845_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_900_fu_12505632_p2() {
    add_ln703_900_fu_12505632_p2 = (!sext_ln703_644_fu_12505629_p1.read().is_01() || !sext_ln703_642_fu_12505625_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_644_fu_12505629_p1.read()) + sc_bigint<15>(sext_ln703_642_fu_12505625_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_901_fu_12483385_p2() {
    add_ln703_901_fu_12483385_p2 = (!zext_ln1118_2495_fu_12418315_p1.read().is_01() || !zext_ln1118_2496_fu_12418367_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2495_fu_12418315_p1.read()) + sc_biguint<10>(zext_ln1118_2496_fu_12418367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_902_fu_12483395_p2() {
    add_ln703_902_fu_12483395_p2 = (!zext_ln703_150_fu_12483391_p1.read().is_01() || !zext_ln708_1102_fu_12418287_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_150_fu_12483391_p1.read()) + sc_biguint<11>(zext_ln708_1102_fu_12418287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_903_fu_12483405_p2() {
    add_ln703_903_fu_12483405_p2 = (!sext_ln1118_201_fu_12414300_p1.read().is_01() || !sext_ln1118_153_fu_12411645_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_201_fu_12414300_p1.read()) + sc_bigint<9>(sext_ln1118_153_fu_12411645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_904_fu_12483415_p2() {
    add_ln703_904_fu_12483415_p2 = (!zext_ln1118_2132_fu_12418197_p1.read().is_01() || !sext_ln1118_288_fu_12418335_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2132_fu_12418197_p1.read()) + sc_bigint<9>(sext_ln1118_288_fu_12418335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_905_fu_12483425_p2() {
    add_ln703_905_fu_12483425_p2 = (!sext_ln703_646_fu_12483421_p1.read().is_01() || !sext_ln703_645_fu_12483411_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_646_fu_12483421_p1.read()) + sc_bigint<10>(sext_ln703_645_fu_12483411_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_906_fu_12483435_p2() {
    add_ln703_906_fu_12483435_p2 = (!sext_ln703_647_fu_12483431_p1.read().is_01() || !zext_ln703_151_fu_12483401_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_647_fu_12483431_p1.read()) + sc_biguint<12>(zext_ln703_151_fu_12483401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_907_fu_12505641_p2() {
    add_ln703_907_fu_12505641_p2 = (!sext_ln703_648_fu_12505638_p1.read().is_01() || !add_ln703_900_fu_12505632_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_648_fu_12505638_p1.read()) + sc_biguint<15>(add_ln703_900_fu_12505632_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_908_fu_12505647_p2() {
    add_ln703_908_fu_12505647_p2 = (!add_ln703_907_fu_12505641_p2.read().is_01() || !zext_ln203_45_fu_12502942_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_907_fu_12505641_p2.read()) + sc_biguint<15>(zext_ln203_45_fu_12502942_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_909_fu_12483441_p2() {
    add_ln703_909_fu_12483441_p2 = (!sext_ln203_135_fu_12418411_p1.read().is_01() || !sext_ln203_136_fu_12418425_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_135_fu_12418411_p1.read()) + sc_bigint<11>(sext_ln203_136_fu_12418425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_90_fu_12478369_p2() {
    add_ln703_90_fu_12478369_p2 = (!zext_ln203_4_fu_12403459_p1.read().is_01() || !sext_ln203_10_fu_12403535_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_4_fu_12403459_p1.read()) + sc_bigint<12>(sext_ln203_10_fu_12403535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_910_fu_12483447_p2() {
    add_ln703_910_fu_12483447_p2 = (!add_ln703_909_fu_12483441_p2.read().is_01() || !zext_ln708_1103_fu_12418445_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_909_fu_12483441_p2.read()) + sc_biguint<11>(zext_ln708_1103_fu_12418445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_912_fu_12483453_p2() {
    add_ln703_912_fu_12483453_p2 = (!trunc_ln203_9_fu_12418449_p4.read().is_01() || !ap_const_lv10_C0.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_9_fu_12418449_p4.read()) + sc_biguint<10>(ap_const_lv10_C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_913_fu_12483463_p2() {
    add_ln703_913_fu_12483463_p2 = (!sext_ln203_103_fu_12415122_p1.read().is_01() || !zext_ln703_2_fu_12483459_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_103_fu_12415122_p1.read()) + sc_biguint<12>(zext_ln703_2_fu_12483459_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_914_fu_12483473_p2() {
    add_ln703_914_fu_12483473_p2 = (!sext_ln703_132_fu_12483469_p1.read().is_01() || !sext_ln203_138_fu_12418475_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_132_fu_12483469_p1.read()) + sc_bigint<13>(sext_ln203_138_fu_12418475_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_915_fu_12483479_p2() {
    add_ln703_915_fu_12483479_p2 = (!sext_ln708_53_fu_12418495_p1.read().is_01() || !zext_ln708_222_fu_12418509_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_53_fu_12418495_p1.read()) + sc_biguint<11>(zext_ln708_222_fu_12418509_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_916_fu_12483489_p2() {
    add_ln703_916_fu_12483489_p2 = (!sext_ln703_651_fu_12483485_p1.read().is_01() || !add_ln703_914_fu_12483473_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_651_fu_12483485_p1.read()) + sc_biguint<13>(add_ln703_914_fu_12483473_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_917_fu_12483495_p2() {
    add_ln703_917_fu_12483495_p2 = (!zext_ln708_1104_fu_12418523_p1.read().is_01() || !zext_ln708_1046_fu_12412474_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1104_fu_12418523_p1.read()) + sc_biguint<11>(zext_ln708_1046_fu_12412474_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_918_fu_12505672_p2() {
    add_ln703_918_fu_12505672_p2 = (!zext_ln703_152_fu_12505669_p1.read().is_01() || !sext_ln703_133_fu_12505666_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_152_fu_12505669_p1.read()) + sc_bigint<14>(sext_ln703_133_fu_12505666_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_919_fu_12483501_p2() {
    add_ln703_919_fu_12483501_p2 = (!sext_ln1118_290_fu_12418547_p1.read().is_01() || !sext_ln1118_291_fu_12418571_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_290_fu_12418547_p1.read()) + sc_bigint<7>(sext_ln1118_291_fu_12418571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_91_fu_12503631_p2() {
    add_ln703_91_fu_12503631_p2 = (!sext_ln703_73_fu_12503628_p1.read().is_01() || !add_ln703_89_fu_12503622_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_73_fu_12503628_p1.read()) + sc_biguint<15>(add_ln703_89_fu_12503622_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_920_fu_12483511_p2() {
    add_ln703_920_fu_12483511_p2 = (!sext_ln703_652_fu_12483507_p1.read().is_01() || !zext_ln1118_2497_fu_12418551_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_652_fu_12483507_p1.read()) + sc_biguint<10>(zext_ln1118_2497_fu_12418551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_921_fu_12505681_p2() {
    add_ln703_921_fu_12505681_p2 = (!sext_ln703_653_fu_12505678_p1.read().is_01() || !add_ln703_918_fu_12505672_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_653_fu_12505678_p1.read()) + sc_biguint<14>(add_ln703_918_fu_12505672_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_922_fu_12505687_p2() {
    add_ln703_922_fu_12505687_p2 = (!add_ln703_921_fu_12505681_p2.read().is_01() || !zext_ln708_223_fu_12502945_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_921_fu_12505681_p2.read()) + sc_biguint<14>(zext_ln708_223_fu_12502945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_923_fu_12483517_p2() {
    add_ln703_923_fu_12483517_p2 = (!sext_ln1118_62_fu_12405991_p1.read().is_01() || !sext_ln1118_296_fu_12418667_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_62_fu_12405991_p1.read()) + sc_bigint<12>(sext_ln1118_296_fu_12418667_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_924_fu_12483527_p2() {
    add_ln703_924_fu_12483527_p2 = (!sext_ln703_655_fu_12483523_p1.read().is_01() || !sext_ln1118_293_fu_12418613_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_655_fu_12483523_p1.read()) + sc_bigint<13>(sext_ln1118_293_fu_12418613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_925_fu_12505700_p2() {
    add_ln703_925_fu_12505700_p2 = (!sext_ln703_656_fu_12505697_p1.read().is_01() || !sext_ln703_654_fu_12505693_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_656_fu_12505697_p1.read()) + sc_bigint<15>(sext_ln703_654_fu_12505693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_926_fu_12483533_p2() {
    add_ln703_926_fu_12483533_p2 = (!zext_ln1118_2499_fu_12418653_p1.read().is_01() || !trunc_ln1118_79_fu_12418713_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2499_fu_12418653_p1.read()) + sc_biguint<10>(trunc_ln1118_79_fu_12418713_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_927_fu_12483543_p2() {
    add_ln703_927_fu_12483543_p2 = (!zext_ln703_153_fu_12483539_p1.read().is_01() || !sext_ln708_54_fu_12418699_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_153_fu_12483539_p1.read()) + sc_bigint<12>(sext_ln708_54_fu_12418699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_928_fu_12483553_p2() {
    add_ln703_928_fu_12483553_p2 = (!sext_ln1118_295_fu_12418633_p1.read().is_01() || !zext_ln1118_2159_fu_12418585_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_295_fu_12418633_p1.read()) + sc_biguint<10>(zext_ln1118_2159_fu_12418585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_929_fu_12483563_p2() {
    add_ln703_929_fu_12483563_p2 = (!sext_ln703_658_fu_12483559_p1.read().is_01() || !sext_ln1118_292_fu_12418599_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_658_fu_12483559_p1.read()) + sc_bigint<11>(sext_ln1118_292_fu_12418599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_92_fu_12478375_p2() {
    add_ln703_92_fu_12478375_p2 = (!zext_ln203_5_fu_12403471_p1.read().is_01() || !sext_ln203_9_fu_12403521_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_5_fu_12403471_p1.read()) + sc_bigint<11>(sext_ln203_9_fu_12403521_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_930_fu_12483573_p2() {
    add_ln703_930_fu_12483573_p2 = (!sext_ln703_659_fu_12483569_p1.read().is_01() || !sext_ln703_657_fu_12483549_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_659_fu_12483569_p1.read()) + sc_bigint<13>(sext_ln703_657_fu_12483549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_931_fu_12505709_p2() {
    add_ln703_931_fu_12505709_p2 = (!sext_ln703_660_fu_12505706_p1.read().is_01() || !add_ln703_925_fu_12505700_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_660_fu_12505706_p1.read()) + sc_biguint<15>(add_ln703_925_fu_12505700_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_932_fu_12483579_p2() {
    add_ln703_932_fu_12483579_p2 = (!sext_ln203_139_fu_12418733_p1.read().is_01() || !sext_ln203_140_fu_12418747_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_139_fu_12418733_p1.read()) + sc_bigint<12>(sext_ln203_140_fu_12418747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_933_fu_12505718_p2() {
    add_ln703_933_fu_12505718_p2 = (!sext_ln703_661_fu_12505715_p1.read().is_01() || !add_ln703_931_fu_12505709_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_661_fu_12505715_p1.read()) + sc_biguint<15>(add_ln703_931_fu_12505709_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_934_fu_12483585_p2() {
    add_ln703_934_fu_12483585_p2 = (!sext_ln203_142_fu_12418865_p1.read().is_01() || !zext_ln203_46_fu_12418761_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_142_fu_12418865_p1.read()) + sc_biguint<12>(zext_ln203_46_fu_12418761_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_935_fu_12483595_p2() {
    add_ln703_935_fu_12483595_p2 = (!sext_ln703_662_fu_12483591_p1.read().is_01() || !sext_ln203_141_fu_12418785_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_662_fu_12483591_p1.read()) + sc_bigint<13>(sext_ln203_141_fu_12418785_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_936_fu_12505727_p2() {
    add_ln703_936_fu_12505727_p2 = (!sext_ln703_663_fu_12505724_p1.read().is_01() || !add_ln703_933_fu_12505718_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_663_fu_12505724_p1.read()) + sc_biguint<15>(add_ln703_933_fu_12505718_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_937_fu_12483601_p2() {
    add_ln703_937_fu_12483601_p2 = (!zext_ln203_353_fu_12418809_p1.read().is_01() || !zext_ln203_354_fu_12418823_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_353_fu_12418809_p1.read()) + sc_biguint<10>(zext_ln203_354_fu_12418823_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_938_fu_12483607_p2() {
    add_ln703_938_fu_12483607_p2 = (!add_ln703_937_fu_12483601_p2.read().is_01() || !zext_ln203_352_fu_12418765_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_937_fu_12483601_p2.read()) + sc_biguint<10>(zext_ln203_352_fu_12418765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_939_fu_12483617_p2() {
    add_ln703_939_fu_12483617_p2 = (!zext_ln708_1105_fu_12418851_p1.read().is_01() || !sext_ln203_143_fu_12418869_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1105_fu_12418851_p1.read()) + sc_bigint<11>(sext_ln203_143_fu_12418869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_93_fu_12478381_p2() {
    add_ln703_93_fu_12478381_p2 = (!add_ln703_92_fu_12478375_p2.read().is_01() || !sext_ln203_8_fu_12403485_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_92_fu_12478375_p2.read()) + sc_bigint<11>(sext_ln203_8_fu_12403485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_940_fu_12483627_p2() {
    add_ln703_940_fu_12483627_p2 = (!sext_ln703_665_fu_12483623_p1.read().is_01() || !zext_ln203_47_fu_12418837_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_665_fu_12483623_p1.read()) + sc_biguint<12>(zext_ln203_47_fu_12418837_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_941_fu_12483633_p2() {
    add_ln703_941_fu_12483633_p2 = (!add_ln703_940_fu_12483627_p2.read().is_01() || !zext_ln703_154_fu_12483613_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_940_fu_12483627_p2.read()) + sc_biguint<12>(zext_ln703_154_fu_12483613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_943_fu_12483639_p2() {
    add_ln703_943_fu_12483639_p2 = (!sext_ln1118_297_fu_12418889_p1.read().is_01() || !ap_const_lv9_98.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_297_fu_12418889_p1.read()) + sc_biguint<9>(ap_const_lv9_98));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_944_fu_12483645_p2() {
    add_ln703_944_fu_12483645_p2 = (!add_ln703_943_fu_12483639_p2.read().is_01() || !zext_ln1118_2500_fu_12418907_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_943_fu_12483639_p2.read()) + sc_biguint<9>(zext_ln1118_2500_fu_12418907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_945_fu_12483655_p2() {
    add_ln703_945_fu_12483655_p2 = (!sext_ln1118_299_fu_12418921_p1.read().is_01() || !sext_ln1118_298_fu_12418893_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_299_fu_12418921_p1.read()) + sc_bigint<11>(sext_ln1118_298_fu_12418893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_946_fu_12483665_p2() {
    add_ln703_946_fu_12483665_p2 = (!sext_ln703_667_fu_12483661_p1.read().is_01() || !zext_ln703_155_fu_12483651_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_667_fu_12483661_p1.read()) + sc_biguint<12>(zext_ln703_155_fu_12483651_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_947_fu_12483671_p2() {
    add_ln703_947_fu_12483671_p2 = (!add_ln703_946_fu_12483665_p2.read().is_01() || !zext_ln708_226_fu_12418949_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_946_fu_12483665_p2.read()) + sc_biguint<12>(zext_ln708_226_fu_12418949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_948_fu_12483677_p2() {
    add_ln703_948_fu_12483677_p2 = (!zext_ln1118_2501_fu_12419001_p1.read().is_01() || !zext_ln1118_2404_fu_12412540_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2501_fu_12419001_p1.read()) + sc_biguint<10>(zext_ln1118_2404_fu_12412540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_949_fu_12483687_p2() {
    add_ln703_949_fu_12483687_p2 = (!zext_ln703_156_fu_12483683_p1.read().is_01() || !add_ln703_947_fu_12483671_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_156_fu_12483683_p1.read()) + sc_biguint<12>(add_ln703_947_fu_12483671_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_950_fu_12483693_p2() {
    add_ln703_950_fu_12483693_p2 = (!sext_ln1118_302_fu_12418977_p1.read().is_01() || !sext_ln1118_301_fu_12418925_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_302_fu_12418977_p1.read()) + sc_bigint<11>(sext_ln1118_301_fu_12418925_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_951_fu_12483703_p2() {
    add_ln703_951_fu_12483703_p2 = (!sext_ln1118_106_fu_12408528_p1.read().is_01() || !zext_ln1118_2169_fu_12418963_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_106_fu_12408528_p1.read()) + sc_biguint<10>(zext_ln1118_2169_fu_12418963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_952_fu_12483713_p2() {
    add_ln703_952_fu_12483713_p2 = (!sext_ln703_670_fu_12483709_p1.read().is_01() || !sext_ln1118_303_fu_12419015_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_670_fu_12483709_p1.read()) + sc_bigint<11>(sext_ln1118_303_fu_12419015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_953_fu_12483723_p2() {
    add_ln703_953_fu_12483723_p2 = (!sext_ln703_671_fu_12483719_p1.read().is_01() || !sext_ln703_669_fu_12483699_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_671_fu_12483719_p1.read()) + sc_bigint<12>(sext_ln703_669_fu_12483699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_954_fu_12505752_p2() {
    add_ln703_954_fu_12505752_p2 = (!sext_ln703_672_fu_12505749_p1.read().is_01() || !sext_ln703_668_fu_12505746_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_672_fu_12505749_p1.read()) + sc_bigint<13>(sext_ln703_668_fu_12505746_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_955_fu_12505762_p2() {
    add_ln703_955_fu_12505762_p2 = (!sext_ln703_673_fu_12505758_p1.read().is_01() || !sext_ln1118_307_fu_12502948_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_673_fu_12505758_p1.read()) + sc_bigint<14>(sext_ln1118_307_fu_12502948_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_956_fu_12483729_p2() {
    add_ln703_956_fu_12483729_p2 = (!sext_ln1118_311_fu_12419155_p1.read().is_01() || !zext_ln1118_2176_fu_12419071_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_311_fu_12419155_p1.read()) + sc_biguint<12>(zext_ln1118_2176_fu_12419071_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_957_fu_12483739_p2() {
    add_ln703_957_fu_12483739_p2 = (!sext_ln703_674_fu_12483735_p1.read().is_01() || !sext_ln708_55_fu_12419085_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_674_fu_12483735_p1.read()) + sc_bigint<13>(sext_ln708_55_fu_12419085_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_958_fu_12505771_p2() {
    add_ln703_958_fu_12505771_p2 = (!sext_ln703_675_fu_12505768_p1.read().is_01() || !add_ln703_955_fu_12505762_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_675_fu_12505768_p1.read()) + sc_biguint<14>(add_ln703_955_fu_12505762_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_959_fu_12483745_p2() {
    add_ln703_959_fu_12483745_p2 = (!sext_ln708_47_fu_12416290_p1.read().is_01() || !sext_ln1118_310_fu_12419131_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_47_fu_12416290_p1.read()) + sc_bigint<11>(sext_ln1118_310_fu_12419131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_95_fu_12478387_p2() {
    add_ln703_95_fu_12478387_p2 = (!sext_ln1118_26_fu_12403567_p1.read().is_01() || !ap_const_lv9_1B0.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_26_fu_12403567_p1.read()) + sc_bigint<9>(ap_const_lv9_1B0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_960_fu_12483755_p2() {
    add_ln703_960_fu_12483755_p2 = (!sext_ln1118_309_fu_12419117_p1.read().is_01() || !zext_ln1118_2177_fu_12419089_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_309_fu_12419117_p1.read()) + sc_biguint<10>(zext_ln1118_2177_fu_12419089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_961_fu_12483765_p2() {
    add_ln703_961_fu_12483765_p2 = (!sext_ln703_678_fu_12483761_p1.read().is_01() || !sext_ln1118_308_fu_12419103_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_678_fu_12483761_p1.read()) + sc_bigint<11>(sext_ln1118_308_fu_12419103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_962_fu_12483775_p2() {
    add_ln703_962_fu_12483775_p2 = (!sext_ln703_679_fu_12483771_p1.read().is_01() || !sext_ln703_677_fu_12483751_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_679_fu_12483771_p1.read()) + sc_bigint<12>(sext_ln703_677_fu_12483751_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_963_fu_12505784_p2() {
    add_ln703_963_fu_12505784_p2 = (!sext_ln703_680_fu_12505781_p1.read().is_01() || !sext_ln703_676_fu_12505777_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_680_fu_12505781_p1.read()) + sc_bigint<15>(sext_ln703_676_fu_12505777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_964_fu_12483781_p2() {
    add_ln703_964_fu_12483781_p2 = (!zext_ln203_48_fu_12419159_p1.read().is_01() || !sext_ln1118_22_fu_12403337_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_48_fu_12419159_p1.read()) + sc_bigint<12>(sext_ln1118_22_fu_12403337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_965_fu_12505793_p2() {
    add_ln703_965_fu_12505793_p2 = (!sext_ln703_681_fu_12505790_p1.read().is_01() || !add_ln703_963_fu_12505784_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_681_fu_12505790_p1.read()) + sc_biguint<15>(add_ln703_963_fu_12505784_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_966_fu_12483787_p2() {
    add_ln703_966_fu_12483787_p2 = (!zext_ln203_355_fu_12419187_p1.read().is_01() || !zext_ln203_356_fu_12419201_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_355_fu_12419187_p1.read()) + sc_biguint<10>(zext_ln203_356_fu_12419201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_967_fu_12483797_p2() {
    add_ln703_967_fu_12483797_p2 = (!zext_ln703_157_fu_12483793_p1.read().is_01() || !sext_ln203_146_fu_12419279_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_157_fu_12483793_p1.read()) + sc_bigint<12>(sext_ln203_146_fu_12419279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_968_fu_12505802_p2() {
    add_ln703_968_fu_12505802_p2 = (!sext_ln703_682_fu_12505799_p1.read().is_01() || !add_ln703_965_fu_12505793_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_682_fu_12505799_p1.read()) + sc_biguint<15>(add_ln703_965_fu_12505793_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_969_fu_12483803_p2() {
    add_ln703_969_fu_12483803_p2 = (!trunc_ln708_958_fu_12406179_p4.read().is_01() || !zext_ln203_357_fu_12419299_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln708_958_fu_12406179_p4.read()) + sc_biguint<10>(zext_ln203_357_fu_12419299_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_96_fu_12478397_p2() {
    add_ln703_96_fu_12478397_p2 = (!sext_ln1118_28_fu_12403613_p1.read().is_01() || !sext_ln1118_27_fu_12403599_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_28_fu_12403613_p1.read()) + sc_bigint<11>(sext_ln1118_27_fu_12403599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_970_fu_12483813_p2() {
    add_ln703_970_fu_12483813_p2 = (!zext_ln703_158_fu_12483809_p1.read().is_01() || !zext_ln708_1106_fu_12419225_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_158_fu_12483809_p1.read()) + sc_biguint<11>(zext_ln708_1106_fu_12419225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_971_fu_12483823_p2() {
    add_ln703_971_fu_12483823_p2 = (!zext_ln1118_210_fu_12401451_p1.read().is_01() || !sext_ln203_144_fu_12419183_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_210_fu_12401451_p1.read()) + sc_bigint<10>(sext_ln203_144_fu_12419183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_972_fu_12483833_p2() {
    add_ln703_972_fu_12483833_p2 = (!sext_ln703_683_fu_12483829_p1.read().is_01() || !sext_ln203_145_fu_12419255_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_683_fu_12483829_p1.read()) + sc_bigint<11>(sext_ln203_145_fu_12419255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_973_fu_12483843_p2() {
    add_ln703_973_fu_12483843_p2 = (!sext_ln703_684_fu_12483839_p1.read().is_01() || !zext_ln703_159_fu_12483819_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_684_fu_12483839_p1.read()) + sc_biguint<12>(zext_ln703_159_fu_12483819_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_975_fu_12483849_p2() {
    add_ln703_975_fu_12483849_p2 = (!zext_ln203_358_fu_12419319_p1.read().is_01() || !ap_const_lv10_3F0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_358_fu_12419319_p1.read()) + sc_bigint<10>(ap_const_lv10_3F0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_976_fu_12483859_p2() {
    add_ln703_976_fu_12483859_p2 = (!zext_ln708_1107_fu_12419347_p1.read().is_01() || !sext_ln703_140_fu_12483855_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1107_fu_12419347_p1.read()) + sc_bigint<11>(sext_ln703_140_fu_12483855_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_977_fu_12483869_p2() {
    add_ln703_977_fu_12483869_p2 = (!zext_ln1118_2502_fu_12419361_p1.read().is_01() || !zext_ln203_359_fu_12419365_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2502_fu_12419361_p1.read()) + sc_biguint<10>(zext_ln203_359_fu_12419365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_978_fu_12483879_p2() {
    add_ln703_978_fu_12483879_p2 = (!zext_ln703_160_fu_12483875_p1.read().is_01() || !sext_ln703_141_fu_12483865_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_160_fu_12483875_p1.read()) + sc_bigint<12>(sext_ln703_141_fu_12483865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_979_fu_12483885_p2() {
    add_ln703_979_fu_12483885_p2 = (!add_ln703_978_fu_12483879_p2.read().is_01() || !zext_ln1118_2192_fu_12419397_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_978_fu_12483879_p2.read()) + sc_biguint<12>(zext_ln1118_2192_fu_12419397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_97_fu_12478407_p2() {
    add_ln703_97_fu_12478407_p2 = (!sext_ln703_76_fu_12478403_p1.read().is_01() || !zext_ln703_25_fu_12478393_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_76_fu_12478403_p1.read()) + sc_biguint<12>(zext_ln703_25_fu_12478393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_980_fu_12483895_p2() {
    add_ln703_980_fu_12483895_p2 = (!sext_ln1118_315_fu_12419369_p1.read().is_01() || !sext_ln1118_96_fu_12407852_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_315_fu_12419369_p1.read()) + sc_bigint<11>(sext_ln1118_96_fu_12407852_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_981_fu_12483901_p2() {
    add_ln703_981_fu_12483901_p2 = (!add_ln703_980_fu_12483895_p2.read().is_01() || !zext_ln708_1108_fu_12419411_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_980_fu_12483895_p2.read()) + sc_biguint<11>(zext_ln708_1108_fu_12419411_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_982_fu_12483911_p2() {
    add_ln703_982_fu_12483911_p2 = (!sext_ln703_688_fu_12483907_p1.read().is_01() || !sext_ln703_687_fu_12483891_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_688_fu_12483907_p1.read()) + sc_bigint<13>(sext_ln703_687_fu_12483891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_983_fu_12483917_p2() {
    add_ln703_983_fu_12483917_p2 = (!zext_ln1118_2503_fu_12419435_p1.read().is_01() || !zext_ln1118_2504_fu_12419449_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2503_fu_12419435_p1.read()) + sc_biguint<10>(zext_ln1118_2504_fu_12419449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_984_fu_12483927_p2() {
    add_ln703_984_fu_12483927_p2 = (!zext_ln703_161_fu_12483923_p1.read().is_01() || !add_ln703_982_fu_12483911_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_161_fu_12483923_p1.read()) + sc_biguint<13>(add_ln703_982_fu_12483911_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_985_fu_12483933_p2() {
    add_ln703_985_fu_12483933_p2 = (!sext_ln1118_222_fu_12415250_p1.read().is_01() || !sext_ln1118_318_fu_12419463_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_222_fu_12415250_p1.read()) + sc_bigint<11>(sext_ln1118_318_fu_12419463_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_986_fu_12483943_p2() {
    add_ln703_986_fu_12483943_p2 = (!sext_ln1118_272_fu_12417570_p1.read().is_01() || !zext_ln708_14_fu_12402224_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_272_fu_12417570_p1.read()) + sc_biguint<10>(zext_ln708_14_fu_12402224_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_987_fu_12483953_p2() {
    add_ln703_987_fu_12483953_p2 = (!sext_ln703_691_fu_12483949_p1.read().is_01() || !sext_ln703_690_fu_12483939_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_691_fu_12483949_p1.read()) + sc_bigint<12>(sext_ln703_690_fu_12483939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_988_fu_12505827_p2() {
    add_ln703_988_fu_12505827_p2 = (!sext_ln703_692_fu_12505824_p1.read().is_01() || !sext_ln703_689_fu_12505821_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_692_fu_12505824_p1.read()) + sc_bigint<14>(sext_ln703_689_fu_12505821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_989_fu_12483959_p2() {
    add_ln703_989_fu_12483959_p2 = (!sext_ln1118_283_fu_12418155_p1.read().is_01() || !sext_ln1118_320_fu_12419585_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_283_fu_12418155_p1.read()) + sc_bigint<12>(sext_ln1118_320_fu_12419585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_98_fu_12478417_p2() {
    add_ln703_98_fu_12478417_p2 = (!sext_ln703_77_fu_12478413_p1.read().is_01() || !sext_ln1118_29_fu_12403645_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_77_fu_12478413_p1.read()) + sc_bigint<13>(sext_ln1118_29_fu_12403645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_990_fu_12505836_p2() {
    add_ln703_990_fu_12505836_p2 = (!sext_ln703_693_fu_12505833_p1.read().is_01() || !add_ln703_988_fu_12505827_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_693_fu_12505833_p1.read()) + sc_biguint<14>(add_ln703_988_fu_12505827_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_991_fu_12483965_p2() {
    add_ln703_991_fu_12483965_p2 = (!zext_ln708_1111_fu_12419509_p1.read().is_01() || !zext_ln708_1112_fu_12419523_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1111_fu_12419509_p1.read()) + sc_biguint<11>(zext_ln708_1112_fu_12419523_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_992_fu_12483971_p2() {
    add_ln703_992_fu_12483971_p2 = (!add_ln703_991_fu_12483965_p2.read().is_01() || !zext_ln708_1110_fu_12419505_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_991_fu_12483965_p2.read()) + sc_biguint<11>(zext_ln708_1110_fu_12419505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_993_fu_12505849_p2() {
    add_ln703_993_fu_12505849_p2 = (!zext_ln703_162_fu_12505846_p1.read().is_01() || !sext_ln703_694_fu_12505842_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_162_fu_12505846_p1.read()) + sc_bigint<15>(sext_ln703_694_fu_12505842_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_994_fu_12483977_p2() {
    add_ln703_994_fu_12483977_p2 = (!trunc_ln1118_80_fu_12419603_p4.read().is_01() || !zext_ln1118_2505_fu_12419629_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_80_fu_12419603_p4.read()) + sc_biguint<10>(zext_ln1118_2505_fu_12419629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_995_fu_12483987_p2() {
    add_ln703_995_fu_12483987_p2 = (!zext_ln703_163_fu_12483983_p1.read().is_01() || !zext_ln708_1113_fu_12419571_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_163_fu_12483983_p1.read()) + sc_biguint<11>(zext_ln708_1113_fu_12419571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_996_fu_12483997_p2() {
    add_ln703_996_fu_12483997_p2 = (!sext_ln708_57_fu_12419599_p1.read().is_01() || !sext_ln708_56_fu_12419477_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_57_fu_12419599_p1.read()) + sc_bigint<11>(sext_ln708_56_fu_12419477_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_997_fu_12484003_p2() {
    add_ln703_997_fu_12484003_p2 = (!zext_ln708_1109_fu_12419491_p1.read().is_01() || !sext_ln1118_319_fu_12419547_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1109_fu_12419491_p1.read()) + sc_bigint<8>(sext_ln1118_319_fu_12419547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_998_fu_12484013_p2() {
    add_ln703_998_fu_12484013_p2 = (!sext_ln703_695_fu_12484009_p1.read().is_01() || !add_ln703_996_fu_12483997_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_695_fu_12484009_p1.read()) + sc_biguint<11>(add_ln703_996_fu_12483997_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_999_fu_12484023_p2() {
    add_ln703_999_fu_12484023_p2 = (!sext_ln703_696_fu_12484019_p1.read().is_01() || !zext_ln703_164_fu_12483993_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_696_fu_12484019_p1.read()) + sc_biguint<12>(zext_ln703_164_fu_12483993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_99_fu_12478423_p2() {
    add_ln703_99_fu_12478423_p2 = (!sext_ln1118_31_fu_12403695_p1.read().is_01() || !sext_ln1118_30_fu_12403659_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_31_fu_12403695_p1.read()) + sc_bigint<11>(sext_ln1118_30_fu_12403659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_9_fu_12477867_p2() {
    add_ln703_9_fu_12477867_p2 = (!sext_ln703_13_fu_12477863_p1.read().is_01() || !zext_ln703_13_fu_12477853_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_13_fu_12477863_p1.read()) + sc_biguint<11>(zext_ln703_13_fu_12477853_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_fu_12477803_p2() {
    add_ln703_fu_12477803_p2 = (!sext_ln203_fu_12400405_p1.read().is_01() || !ap_const_lv12_C40.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_fu_12400405_p1.read()) + sc_bigint<12>(ap_const_lv12_C40));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_10_fu_12411821_p2() {
    add_ln708_10_fu_12411821_p2 = (!zext_ln708_123_fu_12411813_p1.read().is_01() || !zext_ln708_124_fu_12411817_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_123_fu_12411813_p1.read()) + sc_biguint<15>(zext_ln708_124_fu_12411817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_11_fu_12413980_p2() {
    add_ln708_11_fu_12413980_p2 = (!zext_ln1118_13_fu_12400373_p1.read().is_01() || !zext_ln708_166_fu_12413976_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_13_fu_12400373_p1.read()) + sc_biguint<15>(zext_ln708_166_fu_12413976_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_12_fu_12414448_p2() {
    add_ln708_12_fu_12414448_p2 = (!zext_ln1118_308_fu_12402460_p1.read().is_01() || !zext_ln708_37_fu_12404115_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_308_fu_12402460_p1.read()) + sc_biguint<15>(zext_ln708_37_fu_12404115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_13_fu_12416178_p2() {
    add_ln708_13_fu_12416178_p2 = (!zext_ln1118_1557_fu_12412900_p1.read().is_01() || !zext_ln1118_584_fu_12406323_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1557_fu_12412900_p1.read()) + sc_biguint<15>(zext_ln1118_584_fu_12406323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_15_fu_12416622_p2() {
    add_ln708_15_fu_12416622_p2 = (!zext_ln708_53_fu_12407266_p1.read().is_01() || !zext_ln708_209_fu_12416618_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_53_fu_12407266_p1.read()) + sc_biguint<15>(zext_ln708_209_fu_12416618_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_16_fu_12416654_p2() {
    add_ln708_16_fu_12416654_p2 = (!zext_ln708_210_fu_12416646_p1.read().is_01() || !zext_ln708_211_fu_12416650_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_210_fu_12416646_p1.read()) + sc_biguint<15>(zext_ln708_211_fu_12416650_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_17_fu_12418021_p2() {
    add_ln708_17_fu_12418021_p2 = (!zext_ln1118_589_fu_12406463_p1.read().is_01() || !zext_ln708_220_fu_12418017_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_589_fu_12406463_p1.read()) + sc_biguint<15>(zext_ln708_220_fu_12418017_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_18_fu_12418707_p2() {
    add_ln708_18_fu_12418707_p2 = (!zext_ln1118_480_fu_12404804_p1.read().is_01() || !zext_ln708_225_fu_12418703_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_480_fu_12404804_p1.read()) + sc_biguint<15>(zext_ln708_225_fu_12418703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_1_fu_12402120_p2() {
    add_ln708_1_fu_12402120_p2 = (!zext_ln708_26_fu_12402104_p1.read().is_01() || !zext_ln708_27_fu_12402116_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_26_fu_12402104_p1.read()) + sc_biguint<15>(zext_ln708_27_fu_12402116_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_20_fu_12421112_p2() {
    add_ln708_20_fu_12421112_p2 = (!zext_ln708_241_fu_12421096_p1.read().is_01() || !zext_ln708_242_fu_12421108_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_241_fu_12421096_p1.read()) + sc_biguint<15>(zext_ln708_242_fu_12421108_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_21_fu_12421486_p2() {
    add_ln708_21_fu_12421486_p2 = (!zext_ln708_256_fu_12421470_p1.read().is_01() || !zext_ln708_257_fu_12421482_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_256_fu_12421470_p1.read()) + sc_biguint<15>(zext_ln708_257_fu_12421482_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_22_fu_12424515_p2() {
    add_ln708_22_fu_12424515_p2 = (!zext_ln1118_2374_fu_12423029_p1.read().is_01() || !zext_ln708_277_fu_12424511_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2374_fu_12423029_p1.read()) + sc_biguint<15>(zext_ln708_277_fu_12424511_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_23_fu_12425539_p2() {
    add_ln708_23_fu_12425539_p2 = (!zext_ln708_279_fu_12425531_p1.read().is_01() || !zext_ln708_280_fu_12425535_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_279_fu_12425531_p1.read()) + sc_biguint<15>(zext_ln708_280_fu_12425535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_24_fu_12426640_p2() {
    add_ln708_24_fu_12426640_p2 = (!zext_ln708_291_fu_12426632_p1.read().is_01() || !zext_ln708_292_fu_12426636_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_291_fu_12426632_p1.read()) + sc_biguint<15>(zext_ln708_292_fu_12426636_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_25_fu_12427033_p2() {
    add_ln708_25_fu_12427033_p2 = (!zext_ln708_241_fu_12421096_p1.read().is_01() || !zext_ln708_315_fu_12427029_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_241_fu_12421096_p1.read()) + sc_biguint<15>(zext_ln708_315_fu_12427029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_26_fu_12427300_p2() {
    add_ln708_26_fu_12427300_p2 = (!zext_ln708_256_fu_12421470_p1.read().is_01() || !zext_ln708_334_fu_12427296_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_256_fu_12421470_p1.read()) + sc_biguint<15>(zext_ln708_334_fu_12427296_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_27_fu_12429067_p2() {
    add_ln708_27_fu_12429067_p2 = (!zext_ln708_291_fu_12426632_p1.read().is_01() || !zext_ln708_339_fu_12429063_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_291_fu_12426632_p1.read()) + sc_biguint<15>(zext_ln708_339_fu_12429063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_28_fu_12430023_p2() {
    add_ln708_28_fu_12430023_p2 = (!zext_ln1118_2575_fu_12428304_p1.read().is_01() || !zext_ln1118_2576_fu_12428316_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2575_fu_12428304_p1.read()) + sc_biguint<15>(zext_ln1118_2576_fu_12428316_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_29_fu_12430737_p2() {
    add_ln708_29_fu_12430737_p2 = (!zext_ln1118_2376_fu_12423073_p1.read().is_01() || !zext_ln708_353_fu_12430733_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2376_fu_12423073_p1.read()) + sc_biguint<15>(zext_ln708_353_fu_12430733_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_2_fu_12405149_p2() {
    add_ln708_2_fu_12405149_p2 = (!zext_ln1118_383_fu_12403663_p1.read().is_01() || !zext_ln708_41_fu_12405145_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_383_fu_12403663_p1.read()) + sc_biguint<15>(zext_ln708_41_fu_12405145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_30_fu_12431187_p2() {
    add_ln708_30_fu_12431187_p2 = (!zext_ln708_355_fu_12431179_p1.read().is_01() || !zext_ln708_356_fu_12431183_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_355_fu_12431179_p1.read()) + sc_biguint<15>(zext_ln708_356_fu_12431183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_31_fu_12433346_p2() {
    add_ln708_31_fu_12433346_p2 = (!zext_ln1118_2207_fu_12419739_p1.read().is_01() || !zext_ln708_395_fu_12433342_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2207_fu_12419739_p1.read()) + sc_biguint<15>(zext_ln708_395_fu_12433342_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_32_fu_12433814_p2() {
    add_ln708_32_fu_12433814_p2 = (!zext_ln1118_2326_fu_12421826_p1.read().is_01() || !zext_ln708_271_fu_12423481_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2326_fu_12421826_p1.read()) + sc_biguint<15>(zext_ln708_271_fu_12423481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_33_fu_12435544_p2() {
    add_ln708_33_fu_12435544_p2 = (!zext_ln1118_2688_fu_12432266_p1.read().is_01() || !zext_ln1118_2457_fu_12425689_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2688_fu_12432266_p1.read()) + sc_biguint<15>(zext_ln1118_2457_fu_12425689_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_35_fu_12435988_p2() {
    add_ln708_35_fu_12435988_p2 = (!zext_ln708_291_fu_12426632_p1.read().is_01() || !zext_ln708_439_fu_12435984_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_291_fu_12426632_p1.read()) + sc_biguint<15>(zext_ln708_439_fu_12435984_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_36_fu_12436020_p2() {
    add_ln708_36_fu_12436020_p2 = (!zext_ln708_440_fu_12436012_p1.read().is_01() || !zext_ln708_442_fu_12436016_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_440_fu_12436012_p1.read()) + sc_biguint<15>(zext_ln708_442_fu_12436016_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_37_fu_12437387_p2() {
    add_ln708_37_fu_12437387_p2 = (!zext_ln1118_2461_fu_12425829_p1.read().is_01() || !zext_ln708_454_fu_12437383_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2461_fu_12425829_p1.read()) + sc_biguint<15>(zext_ln708_454_fu_12437383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_38_fu_12438073_p2() {
    add_ln708_38_fu_12438073_p2 = (!zext_ln1118_2419_fu_12424170_p1.read().is_01() || !zext_ln708_461_fu_12438069_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2419_fu_12424170_p1.read()) + sc_biguint<15>(zext_ln708_461_fu_12438069_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_3_fu_12406173_p2() {
    add_ln708_3_fu_12406173_p2 = (!zext_ln708_46_fu_12406165_p1.read().is_01() || !zext_ln708_47_fu_12406169_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_46_fu_12406165_p1.read()) + sc_biguint<15>(zext_ln708_47_fu_12406169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_40_fu_12440478_p2() {
    add_ln708_40_fu_12440478_p2 = (!zext_ln708_480_fu_12440462_p1.read().is_01() || !zext_ln708_481_fu_12440474_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_480_fu_12440462_p1.read()) + sc_biguint<15>(zext_ln708_481_fu_12440474_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_41_fu_12440852_p2() {
    add_ln708_41_fu_12440852_p2 = (!zext_ln708_489_fu_12440836_p1.read().is_01() || !zext_ln708_490_fu_12440848_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_489_fu_12440836_p1.read()) + sc_biguint<15>(zext_ln708_490_fu_12440848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_42_fu_12443881_p2() {
    add_ln708_42_fu_12443881_p2 = (!zext_ln1118_2987_fu_12442395_p1.read().is_01() || !zext_ln708_505_fu_12443877_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2987_fu_12442395_p1.read()) + sc_biguint<15>(zext_ln708_505_fu_12443877_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_43_fu_12444905_p2() {
    add_ln708_43_fu_12444905_p2 = (!zext_ln708_517_fu_12444897_p1.read().is_01() || !zext_ln708_518_fu_12444901_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_517_fu_12444897_p1.read()) + sc_biguint<15>(zext_ln708_518_fu_12444901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_44_fu_12446006_p2() {
    add_ln708_44_fu_12446006_p2 = (!zext_ln708_523_fu_12445998_p1.read().is_01() || !zext_ln708_524_fu_12446002_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_523_fu_12445998_p1.read()) + sc_biguint<15>(zext_ln708_524_fu_12446002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_45_fu_12446399_p2() {
    add_ln708_45_fu_12446399_p2 = (!zext_ln708_480_fu_12440462_p1.read().is_01() || !zext_ln708_547_fu_12446395_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_480_fu_12440462_p1.read()) + sc_biguint<15>(zext_ln708_547_fu_12446395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_46_fu_12446666_p2() {
    add_ln708_46_fu_12446666_p2 = (!zext_ln708_489_fu_12440836_p1.read().is_01() || !zext_ln708_564_fu_12446662_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_489_fu_12440836_p1.read()) + sc_biguint<15>(zext_ln708_564_fu_12446662_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_47_fu_12448433_p2() {
    add_ln708_47_fu_12448433_p2 = (!zext_ln708_523_fu_12445998_p1.read().is_01() || !zext_ln708_569_fu_12448429_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_523_fu_12445998_p1.read()) + sc_biguint<15>(zext_ln708_569_fu_12448429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_48_fu_12449389_p2() {
    add_ln708_48_fu_12449389_p2 = (!zext_ln1118_3131_fu_12447670_p1.read().is_01() || !zext_ln1118_3132_fu_12447682_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3131_fu_12447670_p1.read()) + sc_biguint<15>(zext_ln1118_3132_fu_12447682_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_49_fu_12450103_p2() {
    add_ln708_49_fu_12450103_p2 = (!zext_ln1118_2989_fu_12442439_p1.read().is_01() || !zext_ln708_582_fu_12450099_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2989_fu_12442439_p1.read()) + sc_biguint<15>(zext_ln708_582_fu_12450099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_4_fu_12407274_p2() {
    add_ln708_4_fu_12407274_p2 = (!zext_ln708_53_fu_12407266_p1.read().is_01() || !zext_ln708_54_fu_12407270_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_53_fu_12407266_p1.read()) + sc_biguint<15>(zext_ln708_54_fu_12407270_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_50_fu_12450553_p2() {
    add_ln708_50_fu_12450553_p2 = (!zext_ln708_584_fu_12450545_p1.read().is_01() || !zext_ln708_585_fu_12450549_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_584_fu_12450545_p1.read()) + sc_biguint<15>(zext_ln708_585_fu_12450549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_51_fu_12452712_p2() {
    add_ln708_51_fu_12452712_p2 = (!zext_ln1118_2869_fu_12439105_p1.read().is_01() || !zext_ln708_626_fu_12452708_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2869_fu_12439105_p1.read()) + sc_biguint<15>(zext_ln708_626_fu_12452708_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_52_fu_12453180_p2() {
    add_ln708_52_fu_12453180_p2 = (!zext_ln1118_2945_fu_12441192_p1.read().is_01() || !zext_ln708_500_fu_12442847_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2945_fu_12441192_p1.read()) + sc_biguint<15>(zext_ln708_500_fu_12442847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_53_fu_12454910_p2() {
    add_ln708_53_fu_12454910_p2 = (!zext_ln1118_3244_fu_12451632_p1.read().is_01() || !zext_ln1118_3061_fu_12445055_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3244_fu_12451632_p1.read()) + sc_biguint<15>(zext_ln1118_3061_fu_12445055_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_55_fu_12455354_p2() {
    add_ln708_55_fu_12455354_p2 = (!zext_ln708_523_fu_12445998_p1.read().is_01() || !zext_ln708_672_fu_12455350_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_523_fu_12445998_p1.read()) + sc_biguint<15>(zext_ln708_672_fu_12455350_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_56_fu_12455386_p2() {
    add_ln708_56_fu_12455386_p2 = (!zext_ln708_673_fu_12455378_p1.read().is_01() || !zext_ln708_674_fu_12455382_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_673_fu_12455378_p1.read()) + sc_biguint<15>(zext_ln708_674_fu_12455382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_57_fu_12456753_p2() {
    add_ln708_57_fu_12456753_p2 = (!zext_ln1118_3065_fu_12445195_p1.read().is_01() || !zext_ln708_683_fu_12456749_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3065_fu_12445195_p1.read()) + sc_biguint<15>(zext_ln708_683_fu_12456749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_58_fu_12457439_p2() {
    add_ln708_58_fu_12457439_p2 = (!zext_ln1118_3020_fu_12443536_p1.read().is_01() || !zext_ln708_699_fu_12457435_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3020_fu_12443536_p1.read()) + sc_biguint<15>(zext_ln708_699_fu_12457435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_5_fu_12407667_p2() {
    add_ln708_5_fu_12407667_p2 = (!zext_ln708_18_fu_12401730_p1.read().is_01() || !zext_ln708_86_fu_12407663_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_18_fu_12401730_p1.read()) + sc_biguint<15>(zext_ln708_86_fu_12407663_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_60_fu_12459844_p2() {
    add_ln708_60_fu_12459844_p2 = (!zext_ln708_715_fu_12459828_p1.read().is_01() || !zext_ln708_716_fu_12459840_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_715_fu_12459828_p1.read()) + sc_biguint<15>(zext_ln708_716_fu_12459840_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_61_fu_12460218_p2() {
    add_ln708_61_fu_12460218_p2 = (!zext_ln708_721_fu_12460202_p1.read().is_01() || !zext_ln708_722_fu_12460214_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_721_fu_12460202_p1.read()) + sc_biguint<15>(zext_ln708_722_fu_12460214_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_62_fu_12463247_p2() {
    add_ln708_62_fu_12463247_p2 = (!zext_ln1118_3543_fu_12461761_p1.read().is_01() || !zext_ln708_736_fu_12463243_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3543_fu_12461761_p1.read()) + sc_biguint<15>(zext_ln708_736_fu_12463243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_63_fu_12464271_p2() {
    add_ln708_63_fu_12464271_p2 = (!zext_ln708_738_fu_12464263_p1.read().is_01() || !zext_ln708_739_fu_12464267_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_738_fu_12464263_p1.read()) + sc_biguint<15>(zext_ln708_739_fu_12464267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_64_fu_12465372_p2() {
    add_ln708_64_fu_12465372_p2 = (!zext_ln708_744_fu_12465364_p1.read().is_01() || !zext_ln708_745_fu_12465368_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_744_fu_12465364_p1.read()) + sc_biguint<15>(zext_ln708_745_fu_12465368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_65_fu_12465765_p2() {
    add_ln708_65_fu_12465765_p2 = (!zext_ln708_715_fu_12459828_p1.read().is_01() || !zext_ln708_765_fu_12465761_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_715_fu_12459828_p1.read()) + sc_biguint<15>(zext_ln708_765_fu_12465761_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_66_fu_12466032_p2() {
    add_ln708_66_fu_12466032_p2 = (!zext_ln708_721_fu_12460202_p1.read().is_01() || !zext_ln708_773_fu_12466028_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_721_fu_12460202_p1.read()) + sc_biguint<15>(zext_ln708_773_fu_12466028_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_67_fu_12467799_p2() {
    add_ln708_67_fu_12467799_p2 = (!zext_ln708_744_fu_12465364_p1.read().is_01() || !zext_ln708_778_fu_12467795_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_744_fu_12465364_p1.read()) + sc_biguint<15>(zext_ln708_778_fu_12467795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_68_fu_12468755_p2() {
    add_ln708_68_fu_12468755_p2 = (!zext_ln1118_3687_fu_12467036_p1.read().is_01() || !zext_ln1118_3688_fu_12467048_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3687_fu_12467036_p1.read()) + sc_biguint<15>(zext_ln1118_3688_fu_12467048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_69_fu_12469469_p2() {
    add_ln708_69_fu_12469469_p2 = (!zext_ln1118_3545_fu_12461805_p1.read().is_01() || !zext_ln708_789_fu_12469465_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3545_fu_12461805_p1.read()) + sc_biguint<15>(zext_ln708_789_fu_12469465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_6_fu_12407934_p2() {
    add_ln708_6_fu_12407934_p2 = (!zext_ln708_26_fu_12402104_p1.read().is_01() || !zext_ln708_96_fu_12407930_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_26_fu_12402104_p1.read()) + sc_biguint<15>(zext_ln708_96_fu_12407930_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_70_fu_12469919_p2() {
    add_ln708_70_fu_12469919_p2 = (!zext_ln708_791_fu_12469911_p1.read().is_01() || !zext_ln708_792_fu_12469915_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_791_fu_12469911_p1.read()) + sc_biguint<15>(zext_ln708_792_fu_12469915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_71_fu_12472078_p2() {
    add_ln708_71_fu_12472078_p2 = (!zext_ln1118_3425_fu_12458471_p1.read().is_01() || !zext_ln708_820_fu_12472074_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3425_fu_12458471_p1.read()) + sc_biguint<15>(zext_ln708_820_fu_12472074_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_72_fu_12472546_p2() {
    add_ln708_72_fu_12472546_p2 = (!zext_ln1118_3501_fu_12460558_p1.read().is_01() || !zext_ln708_732_fu_12462213_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3501_fu_12460558_p1.read()) + sc_biguint<15>(zext_ln708_732_fu_12462213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_73_fu_12474276_p2() {
    add_ln708_73_fu_12474276_p2 = (!zext_ln1118_3800_fu_12470998_p1.read().is_01() || !zext_ln1118_3617_fu_12464421_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3800_fu_12470998_p1.read()) + sc_biguint<15>(zext_ln1118_3617_fu_12464421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_75_fu_12474720_p2() {
    add_ln708_75_fu_12474720_p2 = (!zext_ln708_744_fu_12465364_p1.read().is_01() || !zext_ln708_852_fu_12474716_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_744_fu_12465364_p1.read()) + sc_biguint<15>(zext_ln708_852_fu_12474716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_76_fu_12474752_p2() {
    add_ln708_76_fu_12474752_p2 = (!zext_ln708_853_fu_12474744_p1.read().is_01() || !zext_ln708_854_fu_12474748_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_853_fu_12474744_p1.read()) + sc_biguint<15>(zext_ln708_854_fu_12474748_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_77_fu_12476119_p2() {
    add_ln708_77_fu_12476119_p2 = (!zext_ln1118_3621_fu_12464561_p1.read().is_01() || !zext_ln708_863_fu_12476115_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3621_fu_12464561_p1.read()) + sc_biguint<15>(zext_ln708_863_fu_12476115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_78_fu_12476805_p2() {
    add_ln708_78_fu_12476805_p2 = (!zext_ln1118_3576_fu_12462902_p1.read().is_01() || !zext_ln708_868_fu_12476801_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_3576_fu_12462902_p1.read()) + sc_biguint<15>(zext_ln708_868_fu_12476801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_7_fu_12409701_p2() {
    add_ln708_7_fu_12409701_p2 = (!zext_ln708_53_fu_12407266_p1.read().is_01() || !zext_ln708_107_fu_12409697_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_53_fu_12407266_p1.read()) + sc_biguint<15>(zext_ln708_107_fu_12409697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_8_fu_12410657_p2() {
    add_ln708_8_fu_12410657_p2 = (!zext_ln1118_950_fu_12408938_p1.read().is_01() || !zext_ln1118_953_fu_12408950_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_950_fu_12408938_p1.read()) + sc_biguint<15>(zext_ln1118_953_fu_12408950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_9_fu_12411371_p2() {
    add_ln708_9_fu_12411371_p2 = (!zext_ln1118_394_fu_12403707_p1.read().is_01() || !zext_ln708_121_fu_12411367_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_394_fu_12403707_p1.read()) + sc_biguint<15>(zext_ln708_121_fu_12411367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln708_fu_12401746_p2() {
    add_ln708_fu_12401746_p2 = (!zext_ln708_18_fu_12401730_p1.read().is_01() || !zext_ln708_19_fu_12401742_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_18_fu_12401730_p1.read()) + sc_biguint<15>(zext_ln708_19_fu_12401742_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_0() {
    ap_return_0 = sext_ln703_28_fu_12503495_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_1() {
    ap_return_1 = acc_0_1_V_fu_12503570_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_10() {
    ap_return_10 = sext_ln703_269_fu_12504274_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_100() {
    ap_return_100 = sext_ln703_1836_fu_12511202_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_101() {
    ap_return_101 = sext_ln703_1849_fu_12511270_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_102() {
    ap_return_102 = sext_ln703_1861_fu_12511347_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_103() {
    ap_return_103 = sext_ln703_1882_fu_12511410_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_104() {
    ap_return_104 = sext_ln703_1900_fu_12511495_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_105() {
    ap_return_105 = sext_ln703_1916_fu_12511600_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_106() {
    ap_return_106 = sext_ln703_1932_fu_12511675_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_107() {
    ap_return_107 = sext_ln703_1952_fu_12511740_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_108() {
    ap_return_108 = acc_3_12_V_fu_12511818_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_109() {
    ap_return_109 = acc_3_13_V_fu_12511898_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_11() {
    ap_return_11 = sext_ln703_297_fu_12504339_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_110() {
    ap_return_110 = acc_3_14_V_fu_12511956_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_111() {
    ap_return_111 = sext_ln703_2013_fu_12512049_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_112() {
    ap_return_112 = sext_ln703_2033_fu_12512118_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_113() {
    ap_return_113 = sext_ln703_2050_fu_12512179_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_114() {
    ap_return_114 = sext_ln703_2066_fu_12512243_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_115() {
    ap_return_115 = sext_ln703_2084_fu_12512336_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_116() {
    ap_return_116 = sext_ln703_2100_fu_12512404_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_117() {
    ap_return_117 = sext_ln703_2114_fu_12512481_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_118() {
    ap_return_118 = acc_3_22_V_fu_12512550_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_119() {
    ap_return_119 = sext_ln703_2150_fu_12512639_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_12() {
    ap_return_12 = acc_0_12_V_fu_12504417_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_120() {
    ap_return_120 = sext_ln703_2167_fu_12512730_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_121() {
    ap_return_121 = sext_ln703_2178_fu_12512807_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_122() {
    ap_return_122 = sext_ln703_2190_fu_12512902_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_123() {
    ap_return_123 = sext_ln703_2209_fu_12512973_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_124() {
    ap_return_124 = sext_ln703_2225_fu_12513063_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_125() {
    ap_return_125 = acc_3_29_V_fu_12513141_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_126() {
    ap_return_126 = sext_ln703_2261_fu_12513218_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_127() {
    ap_return_127 = sext_ln703_2275_fu_12513283_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_13() {
    ap_return_13 = acc_0_13_V_fu_12504497_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_14() {
    ap_return_14 = acc_0_14_V_fu_12504555_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_15() {
    ap_return_15 = sext_ln703_377_fu_12504648_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_16() {
    ap_return_16 = sext_ln703_412_fu_12504717_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_17() {
    ap_return_17 = sext_ln703_436_fu_12504778_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_18() {
    ap_return_18 = sext_ln703_457_fu_12504842_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_19() {
    ap_return_19 = sext_ln703_478_fu_12504935_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_2() {
    ap_return_2 = acc_0_2_V_fu_12503644_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_20() {
    ap_return_20 = sext_ln703_501_fu_12505003_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_21() {
    ap_return_21 = sext_ln703_524_fu_12505080_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_22() {
    ap_return_22 = acc_0_22_V_fu_12505149_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_23() {
    ap_return_23 = sext_ln703_575_fu_12505238_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_24() {
    ap_return_24 = sext_ln703_592_fu_12505329_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_25() {
    ap_return_25 = sext_ln703_603_fu_12505406_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_26() {
    ap_return_26 = sext_ln703_615_fu_12505501_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_27() {
    ap_return_27 = sext_ln703_634_fu_12505572_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_28() {
    ap_return_28 = sext_ln703_650_fu_12505662_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_29() {
    ap_return_29 = acc_0_29_V_fu_12505740_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_3() {
    ap_return_3 = acc_0_3_V_fu_12503722_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_30() {
    ap_return_30 = sext_ln703_686_fu_12505817_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_31() {
    ap_return_31 = sext_ln703_700_fu_12505882_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_32() {
    ap_return_32 = sext_ln703_716_fu_12505962_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_33() {
    ap_return_33 = acc_1_1_V_fu_12506037_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_34() {
    ap_return_34 = acc_1_2_V_fu_12506111_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_35() {
    ap_return_35 = acc_1_3_V_fu_12506189_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_36() {
    ap_return_36 = sext_ln703_786_fu_12506268_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_37() {
    ap_return_37 = sext_ln703_799_fu_12506336_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_38() {
    ap_return_38 = sext_ln703_811_fu_12506413_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_39() {
    ap_return_39 = sext_ln703_832_fu_12506476_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_4() {
    ap_return_4 = sext_ln703_131_fu_12503801_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_40() {
    ap_return_40 = sext_ln703_850_fu_12506561_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_41() {
    ap_return_41 = sext_ln703_866_fu_12506666_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_42() {
    ap_return_42 = sext_ln703_882_fu_12506741_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_43() {
    ap_return_43 = sext_ln703_902_fu_12506806_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_44() {
    ap_return_44 = acc_1_12_V_fu_12506884_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_45() {
    ap_return_45 = acc_1_13_V_fu_12506964_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_46() {
    ap_return_46 = acc_1_14_V_fu_12507022_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_47() {
    ap_return_47 = sext_ln703_963_fu_12507115_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_48() {
    ap_return_48 = sext_ln703_983_fu_12507184_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_49() {
    ap_return_49 = sext_ln703_1000_fu_12507245_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_5() {
    ap_return_5 = sext_ln703_148_fu_12503869_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_50() {
    ap_return_50 = sext_ln703_1016_fu_12507309_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_51() {
    ap_return_51 = sext_ln703_1034_fu_12507402_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_52() {
    ap_return_52 = sext_ln703_1050_fu_12507470_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_53() {
    ap_return_53 = sext_ln703_1064_fu_12507547_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_54() {
    ap_return_54 = acc_1_22_V_fu_12507616_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_55() {
    ap_return_55 = sext_ln703_1100_fu_12507705_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_56() {
    ap_return_56 = sext_ln703_1117_fu_12507796_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_57() {
    ap_return_57 = sext_ln703_1128_fu_12507873_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_58() {
    ap_return_58 = sext_ln703_1140_fu_12507968_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_59() {
    ap_return_59 = sext_ln703_1159_fu_12508039_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_6() {
    ap_return_6 = sext_ln703_165_fu_12503946_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_60() {
    ap_return_60 = sext_ln703_1175_fu_12508129_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_61() {
    ap_return_61 = acc_1_29_V_fu_12508207_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_62() {
    ap_return_62 = sext_ln703_1211_fu_12508284_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_63() {
    ap_return_63 = sext_ln703_1225_fu_12508349_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_64() {
    ap_return_64 = sext_ln703_1241_fu_12508429_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_65() {
    ap_return_65 = acc_2_1_V_fu_12508504_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_66() {
    ap_return_66 = acc_2_2_V_fu_12508578_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_67() {
    ap_return_67 = acc_2_3_V_fu_12508656_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_68() {
    ap_return_68 = sext_ln703_1311_fu_12508735_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_69() {
    ap_return_69 = sext_ln703_1324_fu_12508803_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_7() {
    ap_return_7 = sext_ln703_192_fu_12504009_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_70() {
    ap_return_70 = sext_ln703_1336_fu_12508880_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_71() {
    ap_return_71 = sext_ln703_1357_fu_12508943_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_72() {
    ap_return_72 = sext_ln703_1375_fu_12509028_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_73() {
    ap_return_73 = sext_ln703_1391_fu_12509133_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_74() {
    ap_return_74 = sext_ln703_1407_fu_12509208_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_75() {
    ap_return_75 = sext_ln703_1427_fu_12509273_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_76() {
    ap_return_76 = acc_2_12_V_fu_12509351_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_77() {
    ap_return_77 = acc_2_13_V_fu_12509431_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_78() {
    ap_return_78 = acc_2_14_V_fu_12509489_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_79() {
    ap_return_79 = sext_ln703_1488_fu_12509582_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_8() {
    ap_return_8 = sext_ln703_217_fu_12504094_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_80() {
    ap_return_80 = sext_ln703_1508_fu_12509651_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_81() {
    ap_return_81 = sext_ln703_1525_fu_12509712_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_82() {
    ap_return_82 = sext_ln703_1541_fu_12509776_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_83() {
    ap_return_83 = sext_ln703_1559_fu_12509869_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_84() {
    ap_return_84 = sext_ln703_1575_fu_12509937_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_85() {
    ap_return_85 = sext_ln703_1589_fu_12510014_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_86() {
    ap_return_86 = acc_2_22_V_fu_12510083_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_87() {
    ap_return_87 = sext_ln703_1625_fu_12510172_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_88() {
    ap_return_88 = sext_ln703_1642_fu_12510263_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_89() {
    ap_return_89 = sext_ln703_1653_fu_12510340_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_9() {
    ap_return_9 = sext_ln703_242_fu_12504199_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_90() {
    ap_return_90 = sext_ln703_1665_fu_12510435_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_91() {
    ap_return_91 = sext_ln703_1684_fu_12510506_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_92() {
    ap_return_92 = sext_ln703_1700_fu_12510596_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_93() {
    ap_return_93 = acc_2_29_V_fu_12510674_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_94() {
    ap_return_94 = sext_ln703_1736_fu_12510751_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_95() {
    ap_return_95 = sext_ln703_1750_fu_12510816_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_96() {
    ap_return_96 = sext_ln703_1766_fu_12510896_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_97() {
    ap_return_97 = acc_3_1_V_fu_12510971_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_98() {
    ap_return_98 = acc_3_2_V_fu_12511045_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_ap_return_99() {
    ap_return_99 = acc_3_3_V_fu_12511123_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_124_fu_12401840_p4() {
    lshr_ln708_124_fu_12401840_p4 = p_read31.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_125_fu_12402140_p4() {
    lshr_ln708_125_fu_12402140_p4 = p_read9.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_126_fu_12402242_p4() {
    lshr_ln708_126_fu_12402242_p4 = sub_ln708_3_fu_12402236_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_127_fu_12403012_p4() {
    lshr_ln708_127_fu_12403012_p4 = p_read12.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_128_fu_12403295_p4() {
    lshr_ln708_128_fu_12403295_p4 = p_read21.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_129_fu_12404407_p4() {
    lshr_ln708_129_fu_12404407_p4 = p_read4.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_130_fu_12404857_p4() {
    lshr_ln708_130_fu_12404857_p4 = p_read23.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_131_fu_12405079_p4() {
    lshr_ln708_131_fu_12405079_p4 = p_read.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_132_fu_12405319_p4() {
    lshr_ln708_132_fu_12405319_p4 = sub_ln708_9_fu_12405313_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_133_fu_12405561_p4() {
    lshr_ln708_133_fu_12405561_p4 = p_read26.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_134_fu_12405879_p4() {
    lshr_ln708_134_fu_12405879_p4 = p_read9.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_135_fu_12406015_p4() {
    lshr_ln708_135_fu_12406015_p4 = sub_ln708_10_fu_12406009_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_136_fu_12407322_p4() {
    lshr_ln708_136_fu_12407322_p4 = p_read12.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_137_fu_12407916_p4() {
    lshr_ln708_137_fu_12407916_p4 = sub_ln708_13_fu_12407910_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_138_fu_12408092_p4() {
    lshr_ln708_138_fu_12408092_p4 = p_read17.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_139_fu_12408268_p4() {
    lshr_ln708_139_fu_12408268_p4 = p_read26.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_140_fu_12408358_p4() {
    lshr_ln708_140_fu_12408358_p4 = p_read31.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_141_fu_12408458_p4() {
    lshr_ln708_141_fu_12408458_p4 = p_read7.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_142_fu_12408472_p4() {
    lshr_ln708_142_fu_12408472_p4 = p_read8.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_143_fu_12408608_p4() {
    lshr_ln708_143_fu_12408608_p4 = p_read16.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_144_fu_12408726_p4() {
    lshr_ln708_144_fu_12408726_p4 = p_read21.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_145_fu_12409220_p4() {
    lshr_ln708_145_fu_12409220_p4 = p_read18.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_146_fu_12409272_p4() {
    lshr_ln708_146_fu_12409272_p4 = p_read20.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_147_fu_12409306_p4() {
    lshr_ln708_147_fu_12409306_p4 = p_read22.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_148_fu_12409340_p4() {
    lshr_ln708_148_fu_12409340_p4 = sub_ln708_17_fu_12409334_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_149_fu_12409428_p4() {
    lshr_ln708_149_fu_12409428_p4 = sub_ln708_18_fu_12409422_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_150_fu_12409442_p4() {
    lshr_ln708_150_fu_12409442_p4 = p_read29.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_151_fu_12410231_p4() {
    lshr_ln708_151_fu_12410231_p4 = p_read7.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_152_fu_12410387_p4() {
    lshr_ln708_152_fu_12410387_p4 = sub_ln708_21_fu_12410381_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_153_fu_12410735_p4() {
    lshr_ln708_153_fu_12410735_p4 = sub_ln708_25_fu_12410729_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_154_fu_12410791_p4() {
    lshr_ln708_154_fu_12410791_p4 = p_read8.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_155_fu_12410973_p4() {
    lshr_ln708_155_fu_12410973_p4 = p_read18.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_156_fu_12411353_p4() {
    lshr_ln708_156_fu_12411353_p4 = p_read5.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_157_fu_12412414_p4() {
    lshr_ln708_157_fu_12412414_p4 = p_read30.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_158_fu_12413698_p4() {
    lshr_ln708_158_fu_12413698_p4 = p_read11.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_159_fu_12416002_p4() {
    lshr_ln708_159_fu_12416002_p4 = p_read26.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_160_fu_12416880_p4() {
    lshr_ln708_160_fu_12416880_p4 = p_read30.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_161_fu_12417780_p4() {
    lshr_ln708_161_fu_12417780_p4 = p_read24.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_162_fu_12418065_p4() {
    lshr_ln708_162_fu_12418065_p4 = p_read10.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_163_fu_12418187_p4() {
    lshr_ln708_163_fu_12418187_p4 = p_read20.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_164_fu_12418499_p4() {
    lshr_ln708_164_fu_12418499_p4 = p_read4.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_165_fu_12418953_p4() {
    lshr_ln708_165_fu_12418953_p4 = p_read6.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_166_fu_12419481_p4() {
    lshr_ln708_166_fu_12419481_p4 = p_read17.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_167_fu_12420472_p4() {
    lshr_ln708_167_fu_12420472_p4 = sub_ln708_44_fu_12420466_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_168_fu_12421206_p4() {
    lshr_ln708_168_fu_12421206_p4 = p_read63.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_169_fu_12421506_p4() {
    lshr_ln708_169_fu_12421506_p4 = p_read41.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_170_fu_12421608_p4() {
    lshr_ln708_170_fu_12421608_p4 = sub_ln708_45_fu_12421602_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_171_fu_12422378_p4() {
    lshr_ln708_171_fu_12422378_p4 = p_read44.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_172_fu_12422661_p4() {
    lshr_ln708_172_fu_12422661_p4 = p_read53.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_173_fu_12423773_p4() {
    lshr_ln708_173_fu_12423773_p4 = p_read36.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_174_fu_12424223_p4() {
    lshr_ln708_174_fu_12424223_p4 = p_read55.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_175_fu_12424445_p4() {
    lshr_ln708_175_fu_12424445_p4 = p_read32.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_176_fu_12424685_p4() {
    lshr_ln708_176_fu_12424685_p4 = sub_ln708_51_fu_12424679_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_177_fu_12424927_p4() {
    lshr_ln708_177_fu_12424927_p4 = p_read58.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_178_fu_12425245_p4() {
    lshr_ln708_178_fu_12425245_p4 = p_read41.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_179_fu_12425381_p4() {
    lshr_ln708_179_fu_12425381_p4 = sub_ln708_52_fu_12425375_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_180_fu_12426688_p4() {
    lshr_ln708_180_fu_12426688_p4 = p_read44.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_181_fu_12427282_p4() {
    lshr_ln708_181_fu_12427282_p4 = sub_ln708_55_fu_12427276_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_182_fu_12427458_p4() {
    lshr_ln708_182_fu_12427458_p4 = p_read49.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_183_fu_12427634_p4() {
    lshr_ln708_183_fu_12427634_p4 = p_read58.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_184_fu_12427724_p4() {
    lshr_ln708_184_fu_12427724_p4 = p_read63.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_185_fu_12427824_p4() {
    lshr_ln708_185_fu_12427824_p4 = p_read39.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_186_fu_12427838_p4() {
    lshr_ln708_186_fu_12427838_p4 = p_read40.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_187_fu_12427974_p4() {
    lshr_ln708_187_fu_12427974_p4 = p_read48.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_188_fu_12428092_p4() {
    lshr_ln708_188_fu_12428092_p4 = p_read53.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_189_fu_12428586_p4() {
    lshr_ln708_189_fu_12428586_p4 = p_read50.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_190_fu_12428638_p4() {
    lshr_ln708_190_fu_12428638_p4 = p_read52.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_191_fu_12428672_p4() {
    lshr_ln708_191_fu_12428672_p4 = p_read54.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_192_fu_12428706_p4() {
    lshr_ln708_192_fu_12428706_p4 = sub_ln708_59_fu_12428700_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_193_fu_12428794_p4() {
    lshr_ln708_193_fu_12428794_p4 = sub_ln708_60_fu_12428788_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_194_fu_12428808_p4() {
    lshr_ln708_194_fu_12428808_p4 = p_read61.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_195_fu_12429597_p4() {
    lshr_ln708_195_fu_12429597_p4 = p_read39.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_196_fu_12429753_p4() {
    lshr_ln708_196_fu_12429753_p4 = sub_ln708_63_fu_12429747_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_197_fu_12430101_p4() {
    lshr_ln708_197_fu_12430101_p4 = sub_ln708_67_fu_12430095_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_198_fu_12430157_p4() {
    lshr_ln708_198_fu_12430157_p4 = p_read40.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_199_fu_12430339_p4() {
    lshr_ln708_199_fu_12430339_p4 = p_read50.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_200_fu_12430719_p4() {
    lshr_ln708_200_fu_12430719_p4 = p_read37.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_201_fu_12431780_p4() {
    lshr_ln708_201_fu_12431780_p4 = p_read62.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_202_fu_12433064_p4() {
    lshr_ln708_202_fu_12433064_p4 = p_read43.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_203_fu_12435368_p4() {
    lshr_ln708_203_fu_12435368_p4 = p_read58.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_204_fu_12436246_p4() {
    lshr_ln708_204_fu_12436246_p4 = p_read62.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_205_fu_12437146_p4() {
    lshr_ln708_205_fu_12437146_p4 = p_read56.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_206_fu_12437431_p4() {
    lshr_ln708_206_fu_12437431_p4 = p_read42.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_207_fu_12437553_p4() {
    lshr_ln708_207_fu_12437553_p4 = p_read52.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_208_fu_12437865_p4() {
    lshr_ln708_208_fu_12437865_p4 = p_read36.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_209_fu_12438319_p4() {
    lshr_ln708_209_fu_12438319_p4 = p_read38.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_210_fu_12438847_p4() {
    lshr_ln708_210_fu_12438847_p4 = p_read49.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_211_fu_12439838_p4() {
    lshr_ln708_211_fu_12439838_p4 = sub_ln708_86_fu_12439832_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_212_fu_12440572_p4() {
    lshr_ln708_212_fu_12440572_p4 = p_read95.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_213_fu_12440872_p4() {
    lshr_ln708_213_fu_12440872_p4 = p_read73.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_214_fu_12440974_p4() {
    lshr_ln708_214_fu_12440974_p4 = sub_ln708_87_fu_12440968_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_215_fu_12441744_p4() {
    lshr_ln708_215_fu_12441744_p4 = p_read76.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_216_fu_12442027_p4() {
    lshr_ln708_216_fu_12442027_p4 = p_read85.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_217_fu_12443139_p4() {
    lshr_ln708_217_fu_12443139_p4 = p_read68.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_218_fu_12443589_p4() {
    lshr_ln708_218_fu_12443589_p4 = p_read87.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_219_fu_12443811_p4() {
    lshr_ln708_219_fu_12443811_p4 = p_read64.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_220_fu_12444051_p4() {
    lshr_ln708_220_fu_12444051_p4 = sub_ln708_93_fu_12444045_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_221_fu_12444293_p4() {
    lshr_ln708_221_fu_12444293_p4 = p_read90.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_222_fu_12444611_p4() {
    lshr_ln708_222_fu_12444611_p4 = p_read73.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_223_fu_12444747_p4() {
    lshr_ln708_223_fu_12444747_p4 = sub_ln708_94_fu_12444741_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_224_fu_12446054_p4() {
    lshr_ln708_224_fu_12446054_p4 = p_read76.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_225_fu_12446648_p4() {
    lshr_ln708_225_fu_12446648_p4 = sub_ln708_97_fu_12446642_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_226_fu_12446824_p4() {
    lshr_ln708_226_fu_12446824_p4 = p_read81.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_227_fu_12447000_p4() {
    lshr_ln708_227_fu_12447000_p4 = p_read90.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_228_fu_12447090_p4() {
    lshr_ln708_228_fu_12447090_p4 = p_read95.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_229_fu_12447190_p4() {
    lshr_ln708_229_fu_12447190_p4 = p_read71.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_230_fu_12447204_p4() {
    lshr_ln708_230_fu_12447204_p4 = p_read72.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_231_fu_12447340_p4() {
    lshr_ln708_231_fu_12447340_p4 = p_read80.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_232_fu_12447458_p4() {
    lshr_ln708_232_fu_12447458_p4 = p_read85.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_233_fu_12447952_p4() {
    lshr_ln708_233_fu_12447952_p4 = p_read82.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_234_fu_12448004_p4() {
    lshr_ln708_234_fu_12448004_p4 = p_read84.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_235_fu_12448038_p4() {
    lshr_ln708_235_fu_12448038_p4 = p_read86.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_236_fu_12448072_p4() {
    lshr_ln708_236_fu_12448072_p4 = sub_ln708_101_fu_12448066_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_237_fu_12448160_p4() {
    lshr_ln708_237_fu_12448160_p4 = sub_ln708_102_fu_12448154_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_238_fu_12448174_p4() {
    lshr_ln708_238_fu_12448174_p4 = p_read93.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_239_fu_12448963_p4() {
    lshr_ln708_239_fu_12448963_p4 = p_read71.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_240_fu_12449119_p4() {
    lshr_ln708_240_fu_12449119_p4 = sub_ln708_105_fu_12449113_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_241_fu_12449467_p4() {
    lshr_ln708_241_fu_12449467_p4 = sub_ln708_109_fu_12449461_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_242_fu_12449523_p4() {
    lshr_ln708_242_fu_12449523_p4 = p_read72.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_243_fu_12449705_p4() {
    lshr_ln708_243_fu_12449705_p4 = p_read82.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_244_fu_12450085_p4() {
    lshr_ln708_244_fu_12450085_p4 = p_read69.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_245_fu_12451146_p4() {
    lshr_ln708_245_fu_12451146_p4 = p_read94.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_246_fu_12452430_p4() {
    lshr_ln708_246_fu_12452430_p4 = p_read75.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_247_fu_12454734_p4() {
    lshr_ln708_247_fu_12454734_p4 = p_read90.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_248_fu_12455612_p4() {
    lshr_ln708_248_fu_12455612_p4 = p_read94.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_249_fu_12456512_p4() {
    lshr_ln708_249_fu_12456512_p4 = p_read88.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_250_fu_12456797_p4() {
    lshr_ln708_250_fu_12456797_p4 = p_read74.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_251_fu_12456919_p4() {
    lshr_ln708_251_fu_12456919_p4 = p_read84.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_252_fu_12457231_p4() {
    lshr_ln708_252_fu_12457231_p4 = p_read68.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_253_fu_12457685_p4() {
    lshr_ln708_253_fu_12457685_p4 = p_read70.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_254_fu_12458213_p4() {
    lshr_ln708_254_fu_12458213_p4 = p_read81.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_255_fu_12459204_p4() {
    lshr_ln708_255_fu_12459204_p4 = sub_ln708_128_fu_12459198_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_256_fu_12459938_p4() {
    lshr_ln708_256_fu_12459938_p4 = p_read127.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_257_fu_12460238_p4() {
    lshr_ln708_257_fu_12460238_p4 = p_read105.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_258_fu_12460340_p4() {
    lshr_ln708_258_fu_12460340_p4 = sub_ln708_129_fu_12460334_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_259_fu_12461110_p4() {
    lshr_ln708_259_fu_12461110_p4 = p_read108.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_260_fu_12461393_p4() {
    lshr_ln708_260_fu_12461393_p4 = p_read117.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_261_fu_12462505_p4() {
    lshr_ln708_261_fu_12462505_p4 = p_read100.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_262_fu_12462955_p4() {
    lshr_ln708_262_fu_12462955_p4 = p_read119.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_263_fu_12463177_p4() {
    lshr_ln708_263_fu_12463177_p4 = p_read96.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_264_fu_12463417_p4() {
    lshr_ln708_264_fu_12463417_p4 = sub_ln708_135_fu_12463411_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_265_fu_12463659_p4() {
    lshr_ln708_265_fu_12463659_p4 = p_read122.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_266_fu_12463977_p4() {
    lshr_ln708_266_fu_12463977_p4 = p_read105.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_267_fu_12464113_p4() {
    lshr_ln708_267_fu_12464113_p4 = sub_ln708_136_fu_12464107_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_268_fu_12465420_p4() {
    lshr_ln708_268_fu_12465420_p4 = p_read108.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_269_fu_12466014_p4() {
    lshr_ln708_269_fu_12466014_p4 = sub_ln708_139_fu_12466008_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_270_fu_12466190_p4() {
    lshr_ln708_270_fu_12466190_p4 = p_read113.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_271_fu_12466366_p4() {
    lshr_ln708_271_fu_12466366_p4 = p_read122.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_272_fu_12466456_p4() {
    lshr_ln708_272_fu_12466456_p4 = p_read127.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_273_fu_12466556_p4() {
    lshr_ln708_273_fu_12466556_p4 = p_read103.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_274_fu_12466570_p4() {
    lshr_ln708_274_fu_12466570_p4 = p_read104.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_275_fu_12466706_p4() {
    lshr_ln708_275_fu_12466706_p4 = p_read112.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_276_fu_12466824_p4() {
    lshr_ln708_276_fu_12466824_p4 = p_read117.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_277_fu_12467318_p4() {
    lshr_ln708_277_fu_12467318_p4 = p_read114.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_278_fu_12467370_p4() {
    lshr_ln708_278_fu_12467370_p4 = p_read116.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_279_fu_12467404_p4() {
    lshr_ln708_279_fu_12467404_p4 = p_read118.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_280_fu_12467438_p4() {
    lshr_ln708_280_fu_12467438_p4 = sub_ln708_143_fu_12467432_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_281_fu_12467526_p4() {
    lshr_ln708_281_fu_12467526_p4 = sub_ln708_144_fu_12467520_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_282_fu_12467540_p4() {
    lshr_ln708_282_fu_12467540_p4 = p_read125.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_283_fu_12468329_p4() {
    lshr_ln708_283_fu_12468329_p4 = p_read103.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_284_fu_12468485_p4() {
    lshr_ln708_284_fu_12468485_p4 = sub_ln708_147_fu_12468479_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_285_fu_12468833_p4() {
    lshr_ln708_285_fu_12468833_p4 = sub_ln708_151_fu_12468827_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_286_fu_12468889_p4() {
    lshr_ln708_286_fu_12468889_p4 = p_read104.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_287_fu_12469071_p4() {
    lshr_ln708_287_fu_12469071_p4 = p_read114.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_288_fu_12469451_p4() {
    lshr_ln708_288_fu_12469451_p4 = p_read101.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_289_fu_12470512_p4() {
    lshr_ln708_289_fu_12470512_p4 = p_read126.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_290_fu_12471796_p4() {
    lshr_ln708_290_fu_12471796_p4 = p_read107.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_291_fu_12474100_p4() {
    lshr_ln708_291_fu_12474100_p4 = p_read122.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_292_fu_12474978_p4() {
    lshr_ln708_292_fu_12474978_p4 = p_read126.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_293_fu_12475878_p4() {
    lshr_ln708_293_fu_12475878_p4 = p_read120.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_294_fu_12476163_p4() {
    lshr_ln708_294_fu_12476163_p4 = p_read106.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_295_fu_12476285_p4() {
    lshr_ln708_295_fu_12476285_p4 = p_read116.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_296_fu_12476597_p4() {
    lshr_ln708_296_fu_12476597_p4 = p_read100.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_297_fu_12477051_p4() {
    lshr_ln708_297_fu_12477051_p4 = p_read102.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_298_fu_12477579_p4() {
    lshr_ln708_298_fu_12477579_p4 = p_read113.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_lshr_ln708_s_fu_12401106_p4() {
    lshr_ln708_s_fu_12401106_p4 = sub_ln708_2_fu_12401100_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1000_fu_3245_p0() {
    mul_ln1118_1000_fu_3245_p0 =  (sc_lv<8>) (zext_ln708_720_fu_12460185_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1000_fu_3245_p2() {
    mul_ln1118_1000_fu_3245_p2 = (!mul_ln1118_1000_fu_3245_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1000_fu_3245_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1001_fu_3246_p0() {
    mul_ln1118_1001_fu_3246_p0 =  (sc_lv<8>) (zext_ln1118_1528_fu_12462653_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1001_fu_3246_p2() {
    mul_ln1118_1001_fu_3246_p2 = (!mul_ln1118_1001_fu_3246_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1001_fu_3246_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1002_fu_2625_p0() {
    mul_ln1118_1002_fu_2625_p0 =  (sc_lv<8>) (mul_ln1118_1002_fu_2625_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1002_fu_2625_p00() {
    mul_ln1118_1002_fu_2625_p00 = esl_zext<16,8>(p_read107.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1002_fu_2625_p2() {
    mul_ln1118_1002_fu_2625_p2 = (!mul_ln1118_1002_fu_2625_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1002_fu_2625_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1003_fu_1823_p0() {
    mul_ln1118_1003_fu_1823_p0 =  (sc_lv<8>) (mul_ln1118_1003_fu_1823_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1003_fu_1823_p00() {
    mul_ln1118_1003_fu_1823_p00 = esl_zext<16,8>(p_read113.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1003_fu_1823_p2() {
    mul_ln1118_1003_fu_1823_p2 = (!mul_ln1118_1003_fu_1823_p0.read().is_01() || !ap_const_lv16_FFB3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1003_fu_1823_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1004_fu_2629_p0() {
    mul_ln1118_1004_fu_2629_p0 =  (sc_lv<8>) (zext_ln1118_1487_fu_12459369_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1004_fu_2629_p2() {
    mul_ln1118_1004_fu_2629_p2 = (!mul_ln1118_1004_fu_2629_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1004_fu_2629_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1005_fu_2008_p0() {
    mul_ln1118_1005_fu_2008_p0 =  (sc_lv<8>) (zext_ln1118_1545_fu_12462930_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1005_fu_2008_p2() {
    mul_ln1118_1005_fu_2008_p2 = (!mul_ln1118_1005_fu_2008_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1005_fu_2008_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1006_fu_3255_p0() {
    mul_ln1118_1006_fu_3255_p0 =  (sc_lv<8>) (mul_ln1118_1006_fu_3255_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1006_fu_3255_p00() {
    mul_ln1118_1006_fu_3255_p00 = esl_zext<13,8>(p_read127.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1006_fu_3255_p2() {
    mul_ln1118_1006_fu_3255_p2 = (!mul_ln1118_1006_fu_3255_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1006_fu_3255_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1007_fu_2012_p0() {
    mul_ln1118_1007_fu_2012_p0 =  (sc_lv<8>) (zext_ln1118_1529_fu_12462700_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1007_fu_2012_p2() {
    mul_ln1118_1007_fu_2012_p2 = (!mul_ln1118_1007_fu_2012_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1007_fu_2012_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1008_fu_2635_p0() {
    mul_ln1118_1008_fu_2635_p0 =  (sc_lv<8>) (zext_ln1118_1475_fu_12459025_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1008_fu_2635_p2() {
    mul_ln1118_1008_fu_2635_p2 = (!mul_ln1118_1008_fu_2635_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1008_fu_2635_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1009_fu_1831_p0() {
    mul_ln1118_1009_fu_1831_p0 =  (sc_lv<8>) (zext_ln1116_271_fu_12462801_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1009_fu_1831_p2() {
    mul_ln1118_1009_fu_1831_p2 = (!mul_ln1118_1009_fu_1831_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1009_fu_1831_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_100_fu_2906_p0() {
    mul_ln1118_100_fu_2906_p0 =  (sc_lv<8>) (zext_ln1118_76_fu_12404555_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_100_fu_2906_p2() {
    mul_ln1118_100_fu_2906_p2 = (!mul_ln1118_100_fu_2906_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_100_fu_2906_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1010_fu_2133_p0() {
    mul_ln1118_1010_fu_2133_p0 =  (sc_lv<8>) (zext_ln1118_1484_fu_12459223_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1010_fu_2133_p2() {
    mul_ln1118_1010_fu_2133_p2 = (!mul_ln1118_1010_fu_2133_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1010_fu_2133_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1011_fu_2134_p0() {
    mul_ln1118_1011_fu_2134_p0 =  (sc_lv<8>) (zext_ln1118_1538_fu_12462855_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1011_fu_2134_p2() {
    mul_ln1118_1011_fu_2134_p2 = (!mul_ln1118_1011_fu_2134_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1011_fu_2134_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1012_fu_1452_p0() {
    mul_ln1118_1012_fu_1452_p0 =  (sc_lv<8>) (zext_ln1118_1486_fu_12459310_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1012_fu_1452_p2() {
    mul_ln1118_1012_fu_1452_p2 = (!mul_ln1118_1012_fu_1452_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1012_fu_1452_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1013_fu_2819_p0() {
    mul_ln1118_1013_fu_2819_p0 =  (sc_lv<8>) (zext_ln1118_3463_fu_12459436_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1013_fu_2819_p2() {
    mul_ln1118_1013_fu_2819_p2 = (!mul_ln1118_1013_fu_2819_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1013_fu_2819_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1014_fu_2548_p0() {
    mul_ln1118_1014_fu_2548_p0 =  (sc_lv<8>) (zext_ln1116_273_fu_12462983_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1014_fu_2548_p2() {
    mul_ln1118_1014_fu_2548_p2 = (!mul_ln1118_1014_fu_2548_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1014_fu_2548_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1015_fu_2821_p0() {
    mul_ln1118_1015_fu_2821_p0 =  (sc_lv<8>) (mul_ln1118_1015_fu_2821_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1015_fu_2821_p00() {
    mul_ln1118_1015_fu_2821_p00 = esl_zext<14,8>(p_read123.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1015_fu_2821_p2() {
    mul_ln1118_1015_fu_2821_p2 = (!mul_ln1118_1015_fu_2821_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1015_fu_2821_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1016_fu_2177_p0() {
    mul_ln1118_1016_fu_2177_p0 =  (sc_lv<8>) (zext_ln1118_1495_fu_12459773_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1016_fu_2177_p2() {
    mul_ln1118_1016_fu_2177_p2 = (!mul_ln1118_1016_fu_2177_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1016_fu_2177_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1017_fu_2846_p0() {
    mul_ln1118_1017_fu_2846_p0 =  (sc_lv<8>) (zext_ln1118_3438_fu_12458752_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1017_fu_2846_p2() {
    mul_ln1118_1017_fu_2846_p2 = (!mul_ln1118_1017_fu_2846_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1017_fu_2846_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1019_fu_2255_p0() {
    mul_ln1118_1019_fu_2255_p0 =  (sc_lv<8>) (zext_ln1118_1589_fu_12465341_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1019_fu_2255_p2() {
    mul_ln1118_1019_fu_2255_p2 = (!mul_ln1118_1019_fu_2255_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1019_fu_2255_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1020_fu_3317_p0() {
    mul_ln1118_1020_fu_3317_p0 =  (sc_lv<8>) (zext_ln1118_1600_fu_12465526_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1020_fu_3317_p2() {
    mul_ln1118_1020_fu_3317_p2 = (!mul_ln1118_1020_fu_3317_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1020_fu_3317_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1021_fu_2191_p0() {
    mul_ln1118_1021_fu_2191_p0 =  (sc_lv<8>) (zext_ln1118_1604_fu_12465556_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1021_fu_2191_p2() {
    mul_ln1118_1021_fu_2191_p2 = (!mul_ln1118_1021_fu_2191_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1021_fu_2191_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1022_fu_2662_p0() {
    mul_ln1118_1022_fu_2662_p0 =  (sc_lv<8>) (zext_ln1116_266_fu_12459457_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1022_fu_2662_p2() {
    mul_ln1118_1022_fu_2662_p2 = (!mul_ln1118_1022_fu_2662_p0.read().is_01() || !ap_const_lv16_FF92.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1022_fu_2662_p0.read()) * sc_bigint<16>(ap_const_lv16_FF92);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1023_fu_2071_p0() {
    mul_ln1118_1023_fu_2071_p0 =  (sc_lv<8>) (zext_ln1118_3466_fu_12459502_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1023_fu_2071_p2() {
    mul_ln1118_1023_fu_2071_p2 = (!mul_ln1118_1023_fu_2071_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1023_fu_2071_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1024_fu_3013_p0() {
    mul_ln1118_1024_fu_3013_p0 =  (sc_lv<8>) (zext_ln1118_1622_fu_12465803_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1024_fu_3013_p2() {
    mul_ln1118_1024_fu_3013_p2 = (!mul_ln1118_1024_fu_3013_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1024_fu_3013_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1025_fu_2478_p0() {
    mul_ln1118_1025_fu_2478_p0 =  (sc_lv<8>) (zext_ln1118_3424_fu_12458456_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1025_fu_2478_p2() {
    mul_ln1118_1025_fu_2478_p2 = (!mul_ln1118_1025_fu_2478_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1025_fu_2478_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1026_fu_1971_p0() {
    mul_ln1118_1026_fu_1971_p0 =  (sc_lv<8>) (zext_ln1118_3437_fu_12458717_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1026_fu_1971_p2() {
    mul_ln1118_1026_fu_1971_p2 = (!mul_ln1118_1026_fu_1971_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1026_fu_1971_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1027_fu_2949_p0() {
    mul_ln1118_1027_fu_2949_p0 =  (sc_lv<8>) (zext_ln1118_1528_fu_12462653_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1027_fu_2949_p2() {
    mul_ln1118_1027_fu_2949_p2 = (!mul_ln1118_1027_fu_2949_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1027_fu_2949_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1030_fu_2386_p0() {
    mul_ln1118_1030_fu_2386_p0 =  (sc_lv<8>) (zext_ln1116_263_fu_12459303_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1030_fu_2386_p2() {
    mul_ln1118_1030_fu_2386_p2 = (!mul_ln1118_1030_fu_2386_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1030_fu_2386_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1031_fu_2829_p0() {
    mul_ln1118_1031_fu_2829_p0 =  (sc_lv<8>) (zext_ln708_711_fu_12459516_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1031_fu_2829_p2() {
    mul_ln1118_1031_fu_2829_p2 = (!mul_ln1118_1031_fu_2829_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1031_fu_2829_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1033_fu_2266_p0() {
    mul_ln1118_1033_fu_2266_p0 =  (sc_lv<8>) (zext_ln1116_254_fu_12458571_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1033_fu_2266_p2() {
    mul_ln1118_1033_fu_2266_p2 = (!mul_ln1118_1033_fu_2266_p0.read().is_01() || !ap_const_lv16_FFA8.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1033_fu_2266_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA8);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1034_fu_2737_p0() {
    mul_ln1118_1034_fu_2737_p0 =  (sc_lv<8>) (zext_ln1118_3438_fu_12458752_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1034_fu_2737_p2() {
    mul_ln1118_1034_fu_2737_p2 = (!mul_ln1118_1034_fu_2737_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1034_fu_2737_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1035_fu_2174_p0() {
    mul_ln1118_1035_fu_2174_p0 =  (sc_lv<8>) (zext_ln1118_1589_fu_12465341_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1035_fu_2174_p2() {
    mul_ln1118_1035_fu_2174_p2 = (!mul_ln1118_1035_fu_2174_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1035_fu_2174_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1036_fu_1667_p0() {
    mul_ln1118_1036_fu_1667_p0 =  (sc_lv<8>) (zext_ln1118_1473_fu_12458965_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1036_fu_1667_p2() {
    mul_ln1118_1036_fu_1667_p2 = (!mul_ln1118_1036_fu_1667_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1036_fu_1667_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1037_fu_2082_p0() {
    mul_ln1118_1037_fu_2082_p0 =  (sc_lv<8>) (zext_ln1118_3465_fu_12459482_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1037_fu_2082_p2() {
    mul_ln1118_1037_fu_2082_p2 = (!mul_ln1118_1037_fu_2082_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1037_fu_2082_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1038_fu_2525_p0() {
    mul_ln1118_1038_fu_2525_p0 =  (sc_lv<8>) (zext_ln1118_1553_fu_12463005_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1038_fu_2525_p2() {
    mul_ln1118_1038_fu_2525_p2 = (!mul_ln1118_1038_fu_2525_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1038_fu_2525_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1039_fu_3300_p0() {
    mul_ln1118_1039_fu_3300_p0 =  (sc_lv<8>) (zext_ln708_555_fu_12459673_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1039_fu_3300_p2() {
    mul_ln1118_1039_fu_3300_p2 = (!mul_ln1118_1039_fu_3300_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1039_fu_3300_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_103_fu_2102_p0() {
    mul_ln1118_103_fu_2102_p0 =  (sc_lv<8>) (zext_ln1116_11_fu_12401205_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_103_fu_2102_p2() {
    mul_ln1118_103_fu_2102_p2 = (!mul_ln1118_103_fu_2102_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_103_fu_2102_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1040_fu_2496_p0() {
    mul_ln1118_1040_fu_2496_p0 =  (sc_lv<8>) (zext_ln1118_1498_fu_12459810_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1040_fu_2496_p2() {
    mul_ln1118_1040_fu_2496_p2 = (!mul_ln1118_1040_fu_2496_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1040_fu_2496_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1041_fu_3302_p0() {
    mul_ln1118_1041_fu_3302_p0 =  (sc_lv<8>) (zext_ln1116_252_fu_12458437_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1041_fu_3302_p2() {
    mul_ln1118_1041_fu_3302_p2 = (!mul_ln1118_1041_fu_3302_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1041_fu_3302_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1042_fu_1876_p0() {
    mul_ln1118_1042_fu_1876_p0 =  (sc_lv<8>) (zext_ln1118_3431_fu_12458589_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1042_fu_1876_p2() {
    mul_ln1118_1042_fu_1876_p2 = (!mul_ln1118_1042_fu_1876_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1042_fu_1876_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1043_fu_2499_p0() {
    mul_ln1118_1043_fu_2499_p0 =  (sc_lv<8>) (zext_ln1118_3437_fu_12458717_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1043_fu_2499_p2() {
    mul_ln1118_1043_fu_2499_p2 = (!mul_ln1118_1043_fu_2499_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1043_fu_2499_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1044_fu_3305_p0() {
    mul_ln1118_1044_fu_3305_p0 =  (sc_lv<8>) (mul_ln1118_1044_fu_3305_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1044_fu_3305_p00() {
    mul_ln1118_1044_fu_3305_p00 = esl_zext<16,8>(p_read103.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1044_fu_3305_p2() {
    mul_ln1118_1044_fu_3305_p2 = (!mul_ln1118_1044_fu_3305_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1044_fu_3305_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1045_fu_2501_p0() {
    mul_ln1118_1045_fu_2501_p0 =  (sc_lv<8>) (zext_ln1116_257_fu_12458857_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1045_fu_2501_p2() {
    mul_ln1118_1045_fu_2501_p2 = (!mul_ln1118_1045_fu_2501_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1045_fu_2501_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1046_fu_1880_p0() {
    mul_ln1118_1046_fu_1880_p0 =  (sc_lv<8>) (zext_ln1116_258_fu_12458955_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1046_fu_1880_p2() {
    mul_ln1118_1046_fu_1880_p2 = (!mul_ln1118_1046_fu_1880_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1046_fu_1880_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1047_fu_3428_p0() {
    mul_ln1118_1047_fu_3428_p0 =  (sc_lv<8>) (zext_ln1118_1529_fu_12462700_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1047_fu_3428_p2() {
    mul_ln1118_1047_fu_3428_p2 = (!mul_ln1118_1047_fu_3428_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1047_fu_3428_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1048_fu_2504_p0() {
    mul_ln1118_1048_fu_2504_p0 =  (sc_lv<8>) (zext_ln1118_1479_fu_12459136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1048_fu_2504_p2() {
    mul_ln1118_1048_fu_2504_p2 = (!mul_ln1118_1048_fu_2504_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1048_fu_2504_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1049_fu_1883_p0() {
    mul_ln1118_1049_fu_1883_p0 =  (sc_lv<8>) (zext_ln1116_273_fu_12462983_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1049_fu_1883_p2() {
    mul_ln1118_1049_fu_1883_p2 = (!mul_ln1118_1049_fu_1883_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1049_fu_1883_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_104_fu_1665_p0() {
    mul_ln1118_104_fu_1665_p0 =  (sc_lv<8>) (zext_ln708_13_fu_12401418_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_104_fu_1665_p2() {
    mul_ln1118_104_fu_1665_p2 = (!mul_ln1118_104_fu_1665_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_104_fu_1665_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1050_fu_3311_p0() {
    mul_ln1118_1050_fu_3311_p0 =  (sc_lv<8>) (zext_ln708_559_fu_12459860_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1050_fu_3311_p2() {
    mul_ln1118_1050_fu_3311_p2 = (!mul_ln1118_1050_fu_3311_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1050_fu_3311_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1051_fu_2507_p0() {
    mul_ln1118_1051_fu_2507_p0 =  (sc_lv<8>) (mul_ln1118_1051_fu_2507_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1051_fu_2507_p00() {
    mul_ln1118_1051_fu_2507_p00 = esl_zext<13,8>(p_read96.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1051_fu_2507_p2() {
    mul_ln1118_1051_fu_2507_p2 = (!mul_ln1118_1051_fu_2507_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1051_fu_2507_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1052_fu_2508_p0() {
    mul_ln1118_1052_fu_2508_p0 =  (sc_lv<8>) (zext_ln1116_253_fu_12458507_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1052_fu_2508_p2() {
    mul_ln1118_1052_fu_2508_p2 = (!mul_ln1118_1052_fu_2508_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1052_fu_2508_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1053_fu_1887_p0() {
    mul_ln1118_1053_fu_1887_p0 =  (sc_lv<8>) (zext_ln1116_254_fu_12458571_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1053_fu_1887_p2() {
    mul_ln1118_1053_fu_1887_p2 = (!mul_ln1118_1053_fu_1887_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1053_fu_1887_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1054_fu_2693_p0() {
    mul_ln1118_1054_fu_2693_p0 =  (sc_lv<8>) (mul_ln1118_1054_fu_2693_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1054_fu_2693_p00() {
    mul_ln1118_1054_fu_2693_p00 = esl_zext<16,8>(p_read100.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1054_fu_2693_p2() {
    mul_ln1118_1054_fu_2693_p2 = (!mul_ln1118_1054_fu_2693_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1054_fu_2693_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1055_fu_1889_p0() {
    mul_ln1118_1055_fu_1889_p0 =  (sc_lv<8>) (zext_ln1116_294_fu_12467683_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1055_fu_1889_p2() {
    mul_ln1118_1055_fu_1889_p2 = (!mul_ln1118_1055_fu_1889_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1055_fu_1889_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1056_fu_1890_p0() {
    mul_ln1118_1056_fu_1890_p0 =  (sc_lv<8>) (zext_ln1118_3438_fu_12458752_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1056_fu_1890_p2() {
    mul_ln1118_1056_fu_1890_p2 = (!mul_ln1118_1056_fu_1890_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1056_fu_1890_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1057_fu_1891_p0() {
    mul_ln1118_1057_fu_1891_p0 =  (sc_lv<8>) (zext_ln1116_260_fu_12459007_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1057_fu_1891_p2() {
    mul_ln1118_1057_fu_1891_p2 = (!mul_ln1118_1057_fu_1891_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1057_fu_1891_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1058_fu_3269_p0() {
    mul_ln1118_1058_fu_3269_p0 =  (sc_lv<8>) (zext_ln1116_297_fu_12467889_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1058_fu_3269_p2() {
    mul_ln1118_1058_fu_3269_p2 = (!mul_ln1118_1058_fu_3269_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1058_fu_3269_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1059_fu_3271_p0() {
    mul_ln1118_1059_fu_3271_p0 =  (sc_lv<8>) (zext_ln1118_1484_fu_12459223_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1059_fu_3271_p2() {
    mul_ln1118_1059_fu_3271_p2 = (!mul_ln1118_1059_fu_3271_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1059_fu_3271_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1060_fu_1944_p0() {
    mul_ln1118_1060_fu_1944_p0 =  (sc_lv<8>) (zext_ln1118_1487_fu_12459369_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1060_fu_1944_p2() {
    mul_ln1118_1060_fu_1944_p2 = (!mul_ln1118_1060_fu_1944_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1060_fu_1944_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1061_fu_2628_p0() {
    mul_ln1118_1061_fu_2628_p0 =  (sc_lv<8>) (mul_ln1118_1061_fu_2628_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1061_fu_2628_p00() {
    mul_ln1118_1061_fu_2628_p00 = esl_zext<12,8>(p_read118.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1061_fu_2628_p2() {
    mul_ln1118_1061_fu_2628_p2 = (!mul_ln1118_1061_fu_2628_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_1061_fu_2628_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1062_fu_3312_p0() {
    mul_ln1118_1062_fu_3312_p0 =  (sc_lv<8>) (zext_ln1116_267_fu_12459533_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1062_fu_3312_p2() {
    mul_ln1118_1062_fu_3312_p2 = (!mul_ln1118_1062_fu_3312_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1062_fu_3312_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1063_fu_2594_p0() {
    mul_ln1118_1063_fu_2594_p0 =  (sc_lv<8>) (zext_ln1116_299_fu_12468138_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1063_fu_2594_p2() {
    mul_ln1118_1063_fu_2594_p2 = (!mul_ln1118_1063_fu_2594_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1063_fu_2594_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1064_fu_2106_p0() {
    mul_ln1118_1064_fu_2106_p0 =  (sc_lv<8>) (zext_ln1118_3424_fu_12458456_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1064_fu_2106_p2() {
    mul_ln1118_1064_fu_2106_p2 = (!mul_ln1118_1064_fu_2106_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1064_fu_2106_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1065_fu_2549_p0() {
    mul_ln1118_1065_fu_2549_p0 =  (sc_lv<8>) (zext_ln1116_295_fu_12467789_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1065_fu_2549_p2() {
    mul_ln1118_1065_fu_2549_p2 = (!mul_ln1118_1065_fu_2549_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1065_fu_2549_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1067_fu_1479_p0() {
    mul_ln1118_1067_fu_1479_p0 =  (sc_lv<8>) (zext_ln1118_1487_fu_12459369_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1067_fu_1479_p2() {
    mul_ln1118_1067_fu_1479_p2 = (!mul_ln1118_1067_fu_1479_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1067_fu_1479_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1068_fu_2485_p0() {
    mul_ln1118_1068_fu_2485_p0 =  (sc_lv<8>) (zext_ln1118_3464_fu_12459469_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1068_fu_2485_p2() {
    mul_ln1118_1068_fu_2485_p2 = (!mul_ln1118_1068_fu_2485_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1068_fu_2485_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1069_fu_2900_p0() {
    mul_ln1118_1069_fu_2900_p0 =  (sc_lv<8>) (zext_ln1116_294_fu_12467683_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1069_fu_2900_p2() {
    mul_ln1118_1069_fu_2900_p2 = (!mul_ln1118_1069_fu_2900_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1069_fu_2900_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_106_fu_1925_p0() {
    mul_ln1118_106_fu_1925_p0 =  (sc_lv<8>) (zext_ln1116_2_fu_12400473_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_106_fu_1925_p2() {
    mul_ln1118_106_fu_1925_p2 = (!mul_ln1118_106_fu_1925_p0.read().is_01() || !ap_const_lv16_FFA8.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_106_fu_1925_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA8);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1070_fu_1858_p0() {
    mul_ln1118_1070_fu_1858_p0 =  (sc_lv<8>) (zext_ln708_550_fu_12458792_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1070_fu_1858_p2() {
    mul_ln1118_1070_fu_1858_p2 = (!mul_ln1118_1070_fu_1858_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1070_fu_1858_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1071_fu_1794_p0() {
    mul_ln1118_1071_fu_1794_p0 =  (sc_lv<8>) (zext_ln1118_1476_fu_12459068_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1071_fu_1794_p2() {
    mul_ln1118_1071_fu_1794_p2 = (!mul_ln1118_1071_fu_1794_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1071_fu_1794_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1072_fu_2209_p0() {
    mul_ln1118_1072_fu_2209_p0 =  (sc_lv<8>) (zext_ln1116_262_fu_12459127_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1072_fu_2209_p2() {
    mul_ln1118_1072_fu_2209_p2 = (!mul_ln1118_1072_fu_2209_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1072_fu_2209_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1073_fu_3187_p0() {
    mul_ln1118_1073_fu_3187_p0 =  (sc_lv<8>) (zext_ln1118_1482_fu_12459181_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1073_fu_3187_p2() {
    mul_ln1118_1073_fu_3187_p2 = (!mul_ln1118_1073_fu_3187_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1073_fu_3187_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1074_fu_2117_p0() {
    mul_ln1118_1074_fu_2117_p0 =  (sc_lv<8>) (zext_ln1118_3466_fu_12459502_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1074_fu_2117_p2() {
    mul_ln1118_1074_fu_2117_p2 = (!mul_ln1118_1074_fu_2117_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1074_fu_2117_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1075_fu_1610_p0() {
    mul_ln1118_1075_fu_1610_p0 =  (sc_lv<8>) (zext_ln1116_267_fu_12459533_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1075_fu_1610_p2() {
    mul_ln1118_1075_fu_1610_p2 = (!mul_ln1118_1075_fu_1610_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1075_fu_1610_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1076_fu_2588_p0() {
    mul_ln1118_1076_fu_2588_p0 =  (sc_lv<8>) (zext_ln1118_1491_fu_12459590_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1076_fu_2588_p2() {
    mul_ln1118_1076_fu_2588_p2 = (!mul_ln1118_1076_fu_2588_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1076_fu_2588_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1077_fu_2025_p0() {
    mul_ln1118_1077_fu_2025_p0 =  (sc_lv<8>) (zext_ln1118_3422_fu_12458446_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1077_fu_2025_p2() {
    mul_ln1118_1077_fu_2025_p2 = (!mul_ln1118_1077_fu_2025_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1077_fu_2025_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1078_fu_3031_p0() {
    mul_ln1118_1078_fu_3031_p0 =  (sc_lv<8>) (zext_ln1118_1573_fu_12465163_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1078_fu_3031_p2() {
    mul_ln1118_1078_fu_3031_p2 = (!mul_ln1118_1078_fu_3031_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1078_fu_3031_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1079_fu_2468_p0() {
    mul_ln1118_1079_fu_2468_p0 =  (sc_lv<8>) (zext_ln1118_3439_fu_12458799_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1079_fu_2468_p2() {
    mul_ln1118_1079_fu_2468_p2 = (!mul_ln1118_1079_fu_2468_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1079_fu_2468_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_107_fu_3293_p0() {
    mul_ln1118_107_fu_3293_p0 =  (sc_lv<8>) (zext_ln1118_87_fu_12400654_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_107_fu_3293_p2() {
    mul_ln1118_107_fu_3293_p2 = (!mul_ln1118_107_fu_3293_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_107_fu_3293_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1080_fu_1905_p0() {
    mul_ln1118_1080_fu_1905_p0 =  (sc_lv<8>) (zext_ln1118_1528_fu_12462653_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1080_fu_1905_p2() {
    mul_ln1118_1080_fu_1905_p2 = (!mul_ln1118_1080_fu_1905_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1080_fu_1905_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1081_fu_1426_p0() {
    mul_ln1118_1081_fu_1426_p0 =  (sc_lv<8>) (zext_ln1118_1473_fu_12458965_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1081_fu_1426_p2() {
    mul_ln1118_1081_fu_1426_p2 = (!mul_ln1118_1081_fu_1426_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1081_fu_1426_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1082_fu_2376_p0() {
    mul_ln1118_1082_fu_2376_p0 =  (sc_lv<8>) (zext_ln1118_1479_fu_12459136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1082_fu_2376_p2() {
    mul_ln1118_1082_fu_2376_p2 = (!mul_ln1118_1082_fu_2376_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1082_fu_2376_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1083_fu_3366_p0() {
    mul_ln1118_1083_fu_3366_p0 =  (sc_lv<8>) (zext_ln1116_275_fu_12463117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1083_fu_3366_p2() {
    mul_ln1118_1083_fu_3366_p2 = (!mul_ln1118_1083_fu_3366_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1083_fu_3366_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1085_fu_1757_p0() {
    mul_ln1118_1085_fu_1757_p0 =  (sc_lv<8>) (zext_ln1118_1577_fu_12465201_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1085_fu_1757_p2() {
    mul_ln1118_1085_fu_1757_p2 = (!mul_ln1118_1085_fu_1757_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1085_fu_1757_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1086_fu_1758_p0() {
    mul_ln1118_1086_fu_1758_p0 =  (sc_lv<8>) (mul_ln1118_1086_fu_1758_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1086_fu_1758_p00() {
    mul_ln1118_1086_fu_1758_p00 = esl_zext<15,8>(p_read100.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1086_fu_1758_p2() {
    mul_ln1118_1086_fu_1758_p2 = (!mul_ln1118_1086_fu_1758_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1086_fu_1758_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1087_fu_3186_p0() {
    mul_ln1118_1087_fu_3186_p0 =  (sc_lv<8>) (zext_ln1118_3437_fu_12458717_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1087_fu_3186_p2() {
    mul_ln1118_1087_fu_3186_p2 = (!mul_ln1118_1087_fu_3186_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1087_fu_3186_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1088_fu_1760_p0() {
    mul_ln1118_1088_fu_1760_p0 =  (sc_lv<8>) (mul_ln1118_1088_fu_1760_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1088_fu_1760_p00() {
    mul_ln1118_1088_fu_1760_p00 = esl_zext<13,8>(p_read102.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1088_fu_1760_p2() {
    mul_ln1118_1088_fu_1760_p2 = (!mul_ln1118_1088_fu_1760_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1088_fu_1760_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1089_fu_2220_p0() {
    mul_ln1118_1089_fu_2220_p0 =  (sc_lv<8>) (zext_ln1118_3439_fu_12458799_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1089_fu_2220_p2() {
    mul_ln1118_1089_fu_2220_p2 = (!mul_ln1118_1089_fu_2220_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1089_fu_2220_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_108_fu_2573_p0() {
    mul_ln1118_108_fu_2573_p0 =  (sc_lv<8>) (zext_ln1118_137_fu_12407243_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_108_fu_2573_p2() {
    mul_ln1118_108_fu_2573_p2 = (!mul_ln1118_108_fu_2573_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_108_fu_2573_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1090_fu_1762_p0() {
    mul_ln1118_1090_fu_1762_p0 =  (sc_lv<8>) (zext_ln708_551_fu_12458947_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1090_fu_1762_p2() {
    mul_ln1118_1090_fu_1762_p2 = (!mul_ln1118_1090_fu_1762_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1090_fu_1762_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1091_fu_2568_p0() {
    mul_ln1118_1091_fu_2568_p0 =  (sc_lv<8>) (zext_ln1116_260_fu_12459007_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1091_fu_2568_p2() {
    mul_ln1118_1091_fu_2568_p2 = (!mul_ln1118_1091_fu_2568_p0.read().is_01() || !ap_const_lv16_FF9F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1091_fu_2568_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1092_fu_3191_p0() {
    mul_ln1118_1092_fu_3191_p0 =  (sc_lv<8>) (zext_ln1118_3452_fu_12459175_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1092_fu_3191_p2() {
    mul_ln1118_1092_fu_3191_p2 = (!mul_ln1118_1092_fu_3191_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1092_fu_3191_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1093_fu_1765_p0() {
    mul_ln1118_1093_fu_1765_p0 =  (sc_lv<8>) (zext_ln1118_1487_fu_12459369_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1093_fu_1765_p2() {
    mul_ln1118_1093_fu_1765_p2 = (!mul_ln1118_1093_fu_1765_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1093_fu_1765_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1094_fu_3193_p0() {
    mul_ln1118_1094_fu_3193_p0 =  (sc_lv<8>) (mul_ln1118_1094_fu_3193_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1094_fu_3193_p00() {
    mul_ln1118_1094_fu_3193_p00 = esl_zext<14,8>(p_read117.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1094_fu_3193_p2() {
    mul_ln1118_1094_fu_3193_p2 = (!mul_ln1118_1094_fu_3193_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1094_fu_3193_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1095_fu_1767_p0() {
    mul_ln1118_1095_fu_1767_p0 =  (sc_lv<8>) (zext_ln1116_307_fu_12470386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1095_fu_1767_p2() {
    mul_ln1118_1095_fu_1767_p2 = (!mul_ln1118_1095_fu_1767_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1095_fu_1767_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1096_fu_2390_p0() {
    mul_ln1118_1096_fu_2390_p0 =  (sc_lv<8>) (zext_ln1118_1492_fu_12459616_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1096_fu_2390_p2() {
    mul_ln1118_1096_fu_2390_p2 = (!mul_ln1118_1096_fu_2390_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1096_fu_2390_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1097_fu_3196_p0() {
    mul_ln1118_1097_fu_3196_p0 =  (sc_lv<8>) (zext_ln708_555_fu_12459673_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1097_fu_3196_p2() {
    mul_ln1118_1097_fu_3196_p2 = (!mul_ln1118_1097_fu_3196_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1097_fu_3196_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1098_fu_3197_p0() {
    mul_ln1118_1098_fu_3197_p0 =  (sc_lv<8>) (zext_ln1118_3480_fu_12459764_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1098_fu_3197_p2() {
    mul_ln1118_1098_fu_3197_p2 = (!mul_ln1118_1098_fu_3197_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1098_fu_3197_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1099_fu_3003_p0() {
    mul_ln1118_1099_fu_3003_p0 =  (sc_lv<8>) (zext_ln1116_253_fu_12458507_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1099_fu_3003_p2() {
    mul_ln1118_1099_fu_3003_p2 = (!mul_ln1118_1099_fu_3003_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1099_fu_3003_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_109_fu_2574_p0() {
    mul_ln1118_109_fu_2574_p0 =  (sc_lv<8>) (zext_ln1118_21_fu_12400867_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_109_fu_2574_p2() {
    mul_ln1118_109_fu_2574_p2 = (!mul_ln1118_109_fu_2574_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_109_fu_2574_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_10_fu_2961_p0() {
    mul_ln1118_10_fu_2961_p0 =  (sc_lv<8>) (zext_ln1116_13_fu_12401325_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_10_fu_2961_p2() {
    mul_ln1118_10_fu_2961_p2 = (!mul_ln1118_10_fu_2961_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_10_fu_2961_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1100_fu_1638_p0() {
    mul_ln1118_1100_fu_1638_p0 =  (sc_lv<8>) (zext_ln1118_1577_fu_12465201_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1100_fu_1638_p2() {
    mul_ln1118_1100_fu_1638_p2 = (!mul_ln1118_1100_fu_1638_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1100_fu_1638_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1101_fu_3006_p0() {
    mul_ln1118_1101_fu_3006_p0 =  (sc_lv<8>) (zext_ln1118_3439_fu_12458799_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1101_fu_3006_p2() {
    mul_ln1118_1101_fu_3006_p2 = (!mul_ln1118_1101_fu_3006_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1101_fu_3006_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1102_fu_2324_p0() {
    mul_ln1118_1102_fu_2324_p0 =  (sc_lv<8>) (zext_ln1118_3642_fu_12465335_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1102_fu_2324_p2() {
    mul_ln1118_1102_fu_2324_p2 = (!mul_ln1118_1102_fu_2324_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1102_fu_2324_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1103_fu_1642_p0() {
    mul_ln1118_1103_fu_1642_p0 =  (sc_lv<8>) (zext_ln1118_1473_fu_12458965_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1103_fu_1642_p2() {
    mul_ln1118_1103_fu_1642_p2 = (!mul_ln1118_1103_fu_1642_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1103_fu_1642_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1104_fu_2327_p0() {
    mul_ln1118_1104_fu_2327_p0 =  (sc_lv<8>) (zext_ln1118_1487_fu_12459369_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1104_fu_2327_p2() {
    mul_ln1118_1104_fu_2327_p2 = (!mul_ln1118_1104_fu_2327_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1104_fu_2327_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1105_fu_2492_p0() {
    mul_ln1118_1105_fu_2492_p0 =  (sc_lv<8>) (zext_ln1118_3464_fu_12459469_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1105_fu_2492_p2() {
    mul_ln1118_1105_fu_2492_p2 = (!mul_ln1118_1105_fu_2492_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1105_fu_2492_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1106_fu_2013_p0() {
    mul_ln1118_1106_fu_2013_p0 =  (sc_lv<8>) (zext_ln1116_307_fu_12470386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1106_fu_2013_p2() {
    mul_ln1118_1106_fu_2013_p2 = (!mul_ln1118_1106_fu_2013_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1106_fu_2013_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1107_fu_2991_p0() {
    mul_ln1118_1107_fu_2991_p0 =  (sc_lv<8>) (zext_ln1116_267_fu_12459533_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1107_fu_2991_p2() {
    mul_ln1118_1107_fu_2991_p2 = (!mul_ln1118_1107_fu_2991_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1107_fu_2991_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1108_fu_3434_p0() {
    mul_ln1118_1108_fu_3434_p0 =  (sc_lv<8>) (zext_ln1118_1553_fu_12463005_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1108_fu_3434_p2() {
    mul_ln1118_1108_fu_3434_p2 = (!mul_ln1118_1108_fu_3434_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1108_fu_3434_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1109_fu_1414_p0() {
    mul_ln1118_1109_fu_1414_p0 =  (sc_lv<8>) (zext_ln1116_274_fu_12463028_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1109_fu_1414_p2() {
    mul_ln1118_1109_fu_1414_p2 = (!mul_ln1118_1109_fu_1414_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1109_fu_1414_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_110_fu_1893_p0() {
    mul_ln1118_110_fu_1893_p0 =  (sc_lv<8>) (zext_ln1118_206_fu_12401384_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_110_fu_1893_p2() {
    mul_ln1118_110_fu_1893_p2 = (!mul_ln1118_110_fu_1893_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_110_fu_1893_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1110_fu_1829_p0() {
    mul_ln1118_1110_fu_1829_p0 =  (sc_lv<8>) (mul_ln1118_1110_fu_1829_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1110_fu_1829_p00() {
    mul_ln1118_1110_fu_1829_p00 = esl_zext<13,8>(p_read126.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1110_fu_1829_p2() {
    mul_ln1118_1110_fu_1829_p2 = (!mul_ln1118_1110_fu_1829_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1110_fu_1829_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1111_fu_2807_p0() {
    mul_ln1118_1111_fu_2807_p0 =  (sc_lv<8>) (zext_ln1116_269_fu_12459920_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1111_fu_2807_p2() {
    mul_ln1118_1111_fu_2807_p2 = (!mul_ln1118_1111_fu_2807_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1111_fu_2807_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1112_fu_3278_p0() {
    mul_ln1118_1112_fu_3278_p0 =  (sc_lv<8>) (zext_ln1116_295_fu_12467789_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1112_fu_3278_p2() {
    mul_ln1118_1112_fu_3278_p2 = (!mul_ln1118_1112_fu_3278_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1112_fu_3278_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1113_fu_2180_p0() {
    mul_ln1118_1113_fu_2180_p0 =  (sc_lv<8>) (zext_ln1116_268_fu_12459796_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1113_fu_2180_p2() {
    mul_ln1118_1113_fu_2180_p2 = (!mul_ln1118_1113_fu_2180_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1113_fu_2180_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1114_fu_2651_p0() {
    mul_ln1118_1114_fu_2651_p0 =  (sc_lv<8>) (zext_ln708_720_fu_12460185_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1114_fu_2651_p2() {
    mul_ln1118_1114_fu_2651_p2 = (!mul_ln1118_1114_fu_2651_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1114_fu_2651_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1115_fu_2060_p0() {
    mul_ln1118_1115_fu_2060_p0 =  (sc_lv<8>) (zext_ln1118_3447_fu_12459014_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1115_fu_2060_p2() {
    mul_ln1118_1115_fu_2060_p2 = (!mul_ln1118_1115_fu_2060_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1115_fu_2060_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1116_fu_1525_p0() {
    mul_ln1118_1116_fu_1525_p0 =  (sc_lv<8>) (zext_ln1118_1511_fu_12461124_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1116_fu_1525_p2() {
    mul_ln1118_1116_fu_1525_p2 = (!mul_ln1118_1116_fu_1525_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1116_fu_1525_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1117_fu_2475_p0() {
    mul_ln1118_1117_fu_2475_p0 =  (sc_lv<8>) (zext_ln1116_297_fu_12467889_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1117_fu_2475_p2() {
    mul_ln1118_1117_fu_2475_p2 = (!mul_ln1118_1117_fu_2475_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1117_fu_2475_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1118_fu_1996_p0() {
    mul_ln1118_1118_fu_1996_p0 =  (sc_lv<8>) (zext_ln1118_1479_fu_12459136_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1118_fu_1996_p2() {
    mul_ln1118_1118_fu_1996_p2 = (!mul_ln1118_1118_fu_1996_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1118_fu_1996_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1119_fu_1461_p0() {
    mul_ln1118_1119_fu_1461_p0 =  (sc_lv<8>) (zext_ln1118_1600_fu_12465526_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1119_fu_1461_p2() {
    mul_ln1118_1119_fu_1461_p2 = (!mul_ln1118_1119_fu_1461_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1119_fu_1461_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_111_fu_2289_p0() {
    mul_ln1118_111_fu_2289_p0 =  (sc_lv<8>) (zext_ln1118_101_fu_12404907_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_111_fu_2289_p2() {
    mul_ln1118_111_fu_2289_p2 = (!mul_ln1118_111_fu_2289_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_111_fu_2289_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1120_fu_2439_p0() {
    mul_ln1118_1120_fu_2439_p0 =  (sc_lv<8>) (zext_ln1118_1485_fu_12459281_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1120_fu_2439_p2() {
    mul_ln1118_1120_fu_2439_p2 = (!mul_ln1118_1120_fu_2439_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1120_fu_2439_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1122_fu_2854_p0() {
    mul_ln1118_1122_fu_2854_p0 =  (sc_lv<8>) (zext_ln1118_1497_fu_12459802_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1122_fu_2854_p2() {
    mul_ln1118_1122_fu_2854_p2 = (!mul_ln1118_1122_fu_2854_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1122_fu_2854_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1123_fu_2347_p0() {
    mul_ln1118_1123_fu_2347_p0 =  (sc_lv<8>) (zext_ln1118_1622_fu_12465803_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1123_fu_2347_p2() {
    mul_ln1118_1123_fu_2347_p2 = (!mul_ln1118_1123_fu_2347_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1123_fu_2347_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1124_fu_2734_p0() {
    mul_ln1118_1124_fu_2734_p0 =  (sc_lv<8>) (zext_ln708_720_fu_12460185_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1124_fu_2734_p2() {
    mul_ln1118_1124_fu_2734_p2 = (!mul_ln1118_1124_fu_2734_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1124_fu_2734_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1125_fu_2171_p0() {
    mul_ln1118_1125_fu_2171_p0 =  (sc_lv<8>) (zext_ln1118_1528_fu_12462653_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1125_fu_2171_p2() {
    mul_ln1118_1125_fu_2171_p2 = (!mul_ln1118_1125_fu_2171_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1125_fu_2171_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1126_fu_3261_p0() {
    mul_ln1118_1126_fu_3261_p0 =  (sc_lv<8>) (zext_ln1118_1487_fu_12459369_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1126_fu_3261_p2() {
    mul_ln1118_1126_fu_3261_p2 = (!mul_ln1118_1126_fu_3261_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1126_fu_3261_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1127_fu_2435_p0() {
    mul_ln1118_1127_fu_2435_p0 =  (sc_lv<8>) (zext_ln1116_266_fu_12459457_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1127_fu_2435_p2() {
    mul_ln1118_1127_fu_2435_p2 = (!mul_ln1118_1127_fu_2435_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1127_fu_2435_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1128_fu_2436_p0() {
    mul_ln1118_1128_fu_2436_p0 =  (sc_lv<8>) (zext_ln1118_1506_fu_12460630_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1128_fu_2436_p2() {
    mul_ln1118_1128_fu_2436_p2 = (!mul_ln1118_1128_fu_2436_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1128_fu_2436_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1129_fu_2437_p0() {
    mul_ln1118_1129_fu_2437_p0 =  (sc_lv<8>) (zext_ln1118_1553_fu_12463005_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1129_fu_2437_p2() {
    mul_ln1118_1129_fu_2437_p2 = (!mul_ln1118_1129_fu_2437_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1129_fu_2437_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_112_fu_3267_p0() {
    mul_ln1118_112_fu_3267_p0 =  (sc_lv<8>) (zext_ln708_6_fu_12401575_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_112_fu_3267_p2() {
    mul_ln1118_112_fu_3267_p2 = (!mul_ln1118_112_fu_3267_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_112_fu_3267_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1130_fu_2438_p0() {
    mul_ln1118_1130_fu_2438_p0 =  (sc_lv<8>) (zext_ln708_561_fu_12459926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1130_fu_2438_p2() {
    mul_ln1118_1130_fu_2438_p2 = (!mul_ln1118_1130_fu_2438_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1130_fu_2438_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1131_fu_1818_p0() {
    mul_ln1118_1131_fu_1818_p0 =  (sc_lv<8>) (mul_ln1118_1131_fu_1818_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1131_fu_1818_p00() {
    mul_ln1118_1131_fu_1818_p00 = esl_zext<12,8>(p_read100.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1131_fu_1818_p2() {
    mul_ln1118_1131_fu_1818_p2 = (!mul_ln1118_1131_fu_1818_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_1131_fu_1818_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1132_fu_3065_p0() {
    mul_ln1118_1132_fu_3065_p0 =  (sc_lv<8>) (zext_ln1118_3439_fu_12458799_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1132_fu_3065_p2() {
    mul_ln1118_1132_fu_3065_p2 = (!mul_ln1118_1132_fu_3065_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1132_fu_3065_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1133_fu_3066_p0() {
    mul_ln1118_1133_fu_3066_p0 =  (sc_lv<8>) (zext_ln1118_3642_fu_12465335_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1133_fu_3066_p2() {
    mul_ln1118_1133_fu_3066_p2 = (!mul_ln1118_1133_fu_3066_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1133_fu_3066_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1134_fu_1640_p0() {
    mul_ln1118_1134_fu_1640_p0 =  (sc_lv<8>) (zext_ln1118_1528_fu_12462653_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1134_fu_1640_p2() {
    mul_ln1118_1134_fu_1640_p2 = (!mul_ln1118_1134_fu_1640_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1134_fu_1640_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1135_fu_3069_p0() {
    mul_ln1118_1135_fu_3069_p0 =  (sc_lv<8>) (zext_ln1118_1477_fu_12459091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1135_fu_3069_p2() {
    mul_ln1118_1135_fu_3069_p2 = (!mul_ln1118_1135_fu_3069_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1135_fu_3069_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1136_fu_3070_p0() {
    mul_ln1118_1136_fu_3070_p0 =  (sc_lv<8>) (zext_ln1118_3452_fu_12459175_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1136_fu_3070_p2() {
    mul_ln1118_1136_fu_3070_p2 = (!mul_ln1118_1136_fu_3070_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1136_fu_3070_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1137_fu_2632_p0() {
    mul_ln1118_1137_fu_2632_p0 =  (sc_lv<8>) (zext_ln1118_3454_fu_12459231_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1137_fu_2632_p2() {
    mul_ln1118_1137_fu_2632_p2 = (!mul_ln1118_1137_fu_2632_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1137_fu_2632_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1138_fu_3072_p0() {
    mul_ln1118_1138_fu_3072_p0 =  (sc_lv<8>) (zext_ln1118_1788_fu_12472458_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1138_fu_3072_p2() {
    mul_ln1118_1138_fu_3072_p2 = (!mul_ln1118_1138_fu_3072_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1138_fu_3072_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1139_fu_3257_p0() {
    mul_ln1118_1139_fu_3257_p0 =  (sc_lv<8>) (zext_ln1118_3467_fu_12459508_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1139_fu_3257_p2() {
    mul_ln1118_1139_fu_3257_p2 = (!mul_ln1118_1139_fu_3257_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1139_fu_3257_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_113_fu_2704_p0() {
    mul_ln1118_113_fu_2704_p0 =  (sc_lv<8>) (zext_ln1118_46_fu_12401712_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_113_fu_2704_p2() {
    mul_ln1118_113_fu_2704_p2 = (!mul_ln1118_113_fu_2704_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_113_fu_2704_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1140_fu_1649_p0() {
    mul_ln1118_1140_fu_1649_p0 =  (sc_lv<8>) (zext_ln1118_3480_fu_12459764_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1140_fu_1649_p2() {
    mul_ln1118_1140_fu_1649_p2 = (!mul_ln1118_1140_fu_1649_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1140_fu_1649_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1141_fu_2813_p0() {
    mul_ln1118_1141_fu_2813_p0 =  (sc_lv<8>) (zext_ln708_720_fu_12460185_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1141_fu_2813_p2() {
    mul_ln1118_1141_fu_2813_p2 = (!mul_ln1118_1141_fu_2813_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1141_fu_2813_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1142_fu_1410_p0() {
    mul_ln1118_1142_fu_1410_p0 =  (sc_lv<8>) (mul_ln1118_1142_fu_1410_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1142_fu_1410_p00() {
    mul_ln1118_1142_fu_1410_p00 = esl_zext<13,8>(p_read107.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1142_fu_1410_p2() {
    mul_ln1118_1142_fu_1410_p2 = (!mul_ln1118_1142_fu_1410_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1142_fu_1410_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1143_fu_2094_p0() {
    mul_ln1118_1143_fu_2094_p0 =  (sc_lv<8>) (zext_ln1116_262_fu_12459127_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1143_fu_2094_p2() {
    mul_ln1118_1143_fu_2094_p2 = (!mul_ln1118_1143_fu_2094_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1143_fu_2094_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1144_fu_1412_p0() {
    mul_ln1118_1144_fu_1412_p0 =  (sc_lv<8>) (zext_ln1116_271_fu_12462801_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1144_fu_1412_p2() {
    mul_ln1118_1144_fu_1412_p2 = (!mul_ln1118_1144_fu_1412_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1144_fu_1412_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1145_fu_1413_p0() {
    mul_ln1118_1145_fu_1413_p0 =  (sc_lv<8>) (zext_ln1116_318_fu_12472422_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1145_fu_1413_p2() {
    mul_ln1118_1145_fu_1413_p2 = (!mul_ln1118_1145_fu_1413_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1145_fu_1413_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1146_fu_2780_p0() {
    mul_ln1118_1146_fu_2780_p0 =  (sc_lv<8>) (zext_ln1118_1541_fu_12462875_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1146_fu_2780_p2() {
    mul_ln1118_1146_fu_2780_p2 = (!mul_ln1118_1146_fu_2780_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_1146_fu_2780_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1147_fu_2399_p0() {
    mul_ln1118_1147_fu_2399_p0 =  (sc_lv<8>) (mul_ln1118_1147_fu_2399_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1147_fu_2399_p00() {
    mul_ln1118_1147_fu_2399_p00 = esl_zext<13,8>(p_read120.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1147_fu_2399_p2() {
    mul_ln1118_1147_fu_2399_p2 = (!mul_ln1118_1147_fu_2399_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1147_fu_2399_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1148_fu_1864_p0() {
    mul_ln1118_1148_fu_1864_p0 =  (sc_lv<8>) (zext_ln1118_1506_fu_12460630_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1148_fu_1864_p2() {
    mul_ln1118_1148_fu_1864_p2 = (!mul_ln1118_1148_fu_1864_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1148_fu_1864_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1149_fu_2338_p0() {
    mul_ln1118_1149_fu_2338_p0 =  (sc_lv<8>) (zext_ln1118_1553_fu_12463005_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1149_fu_2338_p2() {
    mul_ln1118_1149_fu_2338_p2 = (!mul_ln1118_1149_fu_2338_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1149_fu_2338_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_114_fu_2197_p0() {
    mul_ln1118_114_fu_2197_p0 =  (sc_lv<8>) (zext_ln1116_fu_12400339_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_114_fu_2197_p2() {
    mul_ln1118_114_fu_2197_p2 = (!mul_ln1118_114_fu_2197_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_114_fu_2197_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1150_fu_2307_p0() {
    mul_ln1118_1150_fu_2307_p0 =  (sc_lv<8>) (zext_ln1116_274_fu_12463028_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1150_fu_2307_p2() {
    mul_ln1118_1150_fu_2307_p2 = (!mul_ln1118_1150_fu_2307_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1150_fu_2307_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1151_fu_1744_p0() {
    mul_ln1118_1151_fu_1744_p0 =  (sc_lv<8>) (zext_ln1118_1622_fu_12465803_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1151_fu_1744_p2() {
    mul_ln1118_1151_fu_1744_p2 = (!mul_ln1118_1151_fu_1744_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1151_fu_1744_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1152_fu_2722_p0() {
    mul_ln1118_1152_fu_2722_p0 =  (sc_lv<8>) (zext_ln1116_252_fu_12458437_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1152_fu_2722_p2() {
    mul_ln1118_1152_fu_2722_p2 = (!mul_ln1118_1152_fu_2722_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1152_fu_2722_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1153_fu_2159_p0() {
    mul_ln1118_1153_fu_2159_p0 =  (sc_lv<8>) (zext_ln1118_1573_fu_12465163_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1153_fu_2159_p2() {
    mul_ln1118_1153_fu_2159_p2 = (!mul_ln1118_1153_fu_2159_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1153_fu_2159_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1154_fu_2630_p0() {
    mul_ln1118_1154_fu_2630_p0 =  (sc_lv<8>) (zext_ln1118_1482_fu_12459181_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1154_fu_2630_p2() {
    mul_ln1118_1154_fu_2630_p2 = (!mul_ln1118_1154_fu_2630_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1154_fu_2630_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1155_fu_2123_p0() {
    mul_ln1118_1155_fu_2123_p0 =  (sc_lv<8>) (zext_ln1118_3457_fu_12459272_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1155_fu_2123_p2() {
    mul_ln1118_1155_fu_2123_p2 = (!mul_ln1118_1155_fu_2123_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1155_fu_2123_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1156_fu_2538_p0() {
    mul_ln1118_1156_fu_2538_p0 =  (sc_lv<8>) (zext_ln1116_307_fu_12470386_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1156_fu_2538_p2() {
    mul_ln1118_1156_fu_2538_p2 = (!mul_ln1118_1156_fu_2538_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1156_fu_2538_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1157_fu_2981_p0() {
    mul_ln1118_1157_fu_2981_p0 =  (sc_lv<8>) (zext_ln708_561_fu_12459926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1157_fu_2981_p2() {
    mul_ln1118_1157_fu_2981_p2 = (!mul_ln1118_1157_fu_2981_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1157_fu_2981_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1158_fu_3368_p0() {
    mul_ln1118_1158_fu_3368_p0 =  (sc_lv<8>) (zext_ln1118_1589_fu_12465341_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1158_fu_3368_p2() {
    mul_ln1118_1158_fu_3368_p2 = (!mul_ln1118_1158_fu_3368_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1158_fu_3368_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1159_fu_1404_p0() {
    mul_ln1118_1159_fu_1404_p0 =  (sc_lv<8>) (zext_ln1118_3447_fu_12459014_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1159_fu_1404_p2() {
    mul_ln1118_1159_fu_1404_p2 = (!mul_ln1118_1159_fu_1404_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1159_fu_1404_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_115_fu_3175_p0() {
    mul_ln1118_115_fu_3175_p0 =  (sc_lv<8>) (zext_ln1118_62_fu_12400491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_115_fu_3175_p2() {
    mul_ln1118_115_fu_3175_p2 = (!mul_ln1118_115_fu_3175_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_115_fu_3175_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1160_fu_2419_p0() {
    mul_ln1118_1160_fu_2419_p0 =  (sc_lv<8>) (zext_ln1118_1476_fu_12459068_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_mul_ln1118_1160_fu_2419_p2() {
    mul_ln1118_1160_fu_2419_p2 = (!mul_ln1118_1160_fu_2419_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1160_fu_2419_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

}

