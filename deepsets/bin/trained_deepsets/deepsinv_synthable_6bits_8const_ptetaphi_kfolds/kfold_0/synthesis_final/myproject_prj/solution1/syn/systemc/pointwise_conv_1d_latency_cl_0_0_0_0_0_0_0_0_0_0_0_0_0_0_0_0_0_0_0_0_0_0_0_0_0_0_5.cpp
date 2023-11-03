#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2610_fu_5071269_p2() {
    add_ln703_2610_fu_5071269_p2 = (!sext_ln1118_729_fu_5030571_p1.read().is_01() || !sext_ln708_210_fu_5033522_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_729_fu_5030571_p1.read()) + sc_bigint<8>(sext_ln708_210_fu_5033522_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2611_fu_5071279_p2() {
    add_ln703_2611_fu_5071279_p2 = (!zext_ln708_775_fu_5025242_p1.read().is_01() || !sext_ln703_1518_fu_5071275_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_775_fu_5025242_p1.read()) + sc_bigint<10>(sext_ln703_1518_fu_5071275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2612_fu_5071289_p2() {
    add_ln703_2612_fu_5071289_p2 = (!sext_ln703_1517_fu_5071265_p1.read().is_01() || !sext_ln703_1519_fu_5071285_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1517_fu_5071265_p1.read()) + sc_bigint<11>(sext_ln703_1519_fu_5071285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2613_fu_5086112_p2() {
    add_ln703_2613_fu_5086112_p2 = (!add_ln703_2607_fu_5086103_p2.read().is_01() || !sext_ln703_1520_fu_5086109_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2607_fu_5086103_p2.read()) + sc_bigint<15>(sext_ln703_1520_fu_5086109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2614_fu_5086118_p2() {
    add_ln703_2614_fu_5086118_p2 = (!zext_ln203_165_fu_5080553_p1.read().is_01() || !add_ln703_2613_fu_5086112_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_165_fu_5080553_p1.read()) + sc_biguint<15>(add_ln703_2613_fu_5086112_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2615_fu_5071295_p2() {
    add_ln703_2615_fu_5071295_p2 = (!zext_ln203_628_fu_5033625_p1.read().is_01() || !zext_ln203_627_fu_5033587_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_628_fu_5033625_p1.read()) + sc_biguint<9>(zext_ln203_627_fu_5033587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2616_fu_5086127_p2() {
    add_ln703_2616_fu_5086127_p2 = (!add_ln703_2614_fu_5086118_p2.read().is_01() || !zext_ln703_452_fu_5086124_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2614_fu_5086118_p2.read()) + sc_biguint<15>(zext_ln703_452_fu_5086124_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2617_fu_5071301_p2() {
    add_ln703_2617_fu_5071301_p2 = (!tmp_1507_fu_5030241_p4.read().is_01() || !zext_ln203_629_fu_5033645_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1507_fu_5030241_p4.read()) + sc_biguint<10>(zext_ln203_629_fu_5033645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2618_fu_5071311_p2() {
    add_ln703_2618_fu_5071311_p2 = (!sext_ln203_454_fu_5033553_p1.read().is_01() || !sext_ln203_455_fu_5033583_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_454_fu_5033553_p1.read()) + sc_bigint<10>(sext_ln203_455_fu_5033583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2619_fu_5071321_p2() {
    add_ln703_2619_fu_5071321_p2 = (!sext_ln203_456_fu_5033601_p1.read().is_01() || !sext_ln703_1521_fu_5071317_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_456_fu_5033601_p1.read()) + sc_bigint<11>(sext_ln703_1521_fu_5071317_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_261_fu_5055413_p2() {
    add_ln703_261_fu_5055413_p2 = (!zext_ln703_59_fu_5055399_p1.read().is_01() || !zext_ln703_60_fu_5055409_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_59_fu_5055399_p1.read()) + sc_biguint<11>(zext_ln703_60_fu_5055409_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2620_fu_5071331_p2() {
    add_ln703_2620_fu_5071331_p2 = (!zext_ln703_453_fu_5071307_p1.read().is_01() || !sext_ln703_1522_fu_5071327_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_453_fu_5071307_p1.read()) + sc_bigint<12>(sext_ln703_1522_fu_5071327_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2622_fu_5071337_p2() {
    add_ln703_2622_fu_5071337_p2 = (!trunc_ln203_23_fu_5033659_p4.read().is_01() || !ap_const_lv9_120.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_23_fu_5033659_p4.read()) + sc_bigint<9>(ap_const_lv9_120));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2623_fu_5071347_p2() {
    add_ln703_2623_fu_5071347_p2 = (!zext_ln203_167_fu_5033683_p1.read().is_01() || !sext_ln703_338_fu_5071343_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_167_fu_5033683_p1.read()) + sc_bigint<10>(sext_ln703_338_fu_5071343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2624_fu_5071353_p2() {
    add_ln703_2624_fu_5071353_p2 = (!zext_ln203_630_fu_5033707_p1.read().is_01() || !add_ln703_2623_fu_5071347_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_630_fu_5033707_p1.read()) + sc_biguint<10>(add_ln703_2623_fu_5071347_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2625_fu_5071363_p2() {
    add_ln703_2625_fu_5071363_p2 = (!sext_ln1118_791_fu_5033721_p1.read().is_01() || !sext_ln703_1525_fu_5071359_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_791_fu_5033721_p1.read()) + sc_bigint<11>(sext_ln703_1525_fu_5071359_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2626_fu_5071373_p2() {
    add_ln703_2626_fu_5071373_p2 = (!zext_ln1118_2523_fu_5033739_p1.read().is_01() || !sext_ln703_1526_fu_5071369_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2523_fu_5033739_p1.read()) + sc_bigint<12>(sext_ln703_1526_fu_5071369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2627_fu_5071379_p2() {
    add_ln703_2627_fu_5071379_p2 = (!zext_ln1118_2522_fu_5033725_p1.read().is_01() || !sext_ln708_160_fu_5021256_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2522_fu_5033725_p1.read()) + sc_bigint<9>(sext_ln708_160_fu_5021256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2628_fu_5071389_p2() {
    add_ln703_2628_fu_5071389_p2 = (!sext_ln1118_693_fu_5028602_p1.read().is_01() || !sext_ln703_1528_fu_5071385_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_693_fu_5028602_p1.read()) + sc_bigint<11>(sext_ln703_1528_fu_5071385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2629_fu_5086152_p2() {
    add_ln703_2629_fu_5086152_p2 = (!sext_ln703_1527_fu_5086146_p1.read().is_01() || !sext_ln703_1529_fu_5086149_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1527_fu_5086146_p1.read()) + sc_bigint<13>(sext_ln703_1529_fu_5086149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_262_fu_5055423_p2() {
    add_ln703_262_fu_5055423_p2 = (!add_ln703_258_fu_5055387_p2.read().is_01() || !zext_ln703_61_fu_5055419_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_258_fu_5055387_p2.read()) + sc_biguint<12>(zext_ln703_61_fu_5055419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2630_fu_5086158_p2() {
    add_ln703_2630_fu_5086158_p2 = (!zext_ln203_168_fu_5080556_p1.read().is_01() || !add_ln703_2629_fu_5086152_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln203_168_fu_5080556_p1.read()) + sc_biguint<13>(add_ln703_2629_fu_5086152_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2631_fu_5071395_p2() {
    add_ln703_2631_fu_5071395_p2 = (!zext_ln1118_2525_fu_5033767_p1.read().is_01() || !zext_ln708_1468_fu_5033763_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2525_fu_5033767_p1.read()) + sc_biguint<10>(zext_ln708_1468_fu_5033763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2632_fu_5071405_p2() {
    add_ln703_2632_fu_5071405_p2 = (!sext_ln708_174_fu_5025820_p1.read().is_01() || !zext_ln703_454_fu_5071401_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_174_fu_5025820_p1.read()) + sc_biguint<12>(zext_ln703_454_fu_5071401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2633_fu_5086171_p2() {
    add_ln703_2633_fu_5086171_p2 = (!sext_ln703_1530_fu_5086164_p1.read().is_01() || !sext_ln703_1531_fu_5086168_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1530_fu_5086164_p1.read()) + sc_bigint<14>(sext_ln703_1531_fu_5086168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2634_fu_5071411_p2() {
    add_ln703_2634_fu_5071411_p2 = (!trunc_ln1118_33_fu_5033799_p4.read().is_01() || !zext_ln708_1469_fu_5033791_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_33_fu_5033799_p4.read()) + sc_biguint<10>(zext_ln708_1469_fu_5033791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2635_fu_5071421_p2() {
    add_ln703_2635_fu_5071421_p2 = (!sext_ln1118_793_fu_5033829_p1.read().is_01() || !zext_ln1118_2526_fu_5033795_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_793_fu_5033829_p1.read()) + sc_biguint<9>(zext_ln1118_2526_fu_5033795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2636_fu_5071431_p2() {
    add_ln703_2636_fu_5071431_p2 = (!zext_ln708_677_fu_5031692_p1.read().is_01() || !sext_ln703_1532_fu_5071427_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_677_fu_5031692_p1.read()) + sc_bigint<10>(sext_ln703_1532_fu_5071427_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2637_fu_5071441_p2() {
    add_ln703_2637_fu_5071441_p2 = (!zext_ln703_455_fu_5071417_p1.read().is_01() || !sext_ln703_1533_fu_5071437_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_455_fu_5071417_p1.read()) + sc_bigint<12>(sext_ln703_1533_fu_5071437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2638_fu_5086180_p2() {
    add_ln703_2638_fu_5086180_p2 = (!add_ln703_2633_fu_5086171_p2.read().is_01() || !sext_ln703_1534_fu_5086177_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2633_fu_5086171_p2.read()) + sc_bigint<14>(sext_ln703_1534_fu_5086177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2639_fu_5071447_p2() {
    add_ln703_2639_fu_5071447_p2 = (!sext_ln1118_798_fu_5033971_p1.read().is_01() || !sext_ln1118_796_fu_5033909_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_798_fu_5033971_p1.read()) + sc_bigint<12>(sext_ln1118_796_fu_5033909_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_263_fu_5081304_p2() {
    add_ln703_263_fu_5081304_p2 = (!add_ln703_255_reg_5090799.read().is_01() || !zext_ln703_62_fu_5081301_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_255_reg_5090799.read()) + sc_biguint<16>(zext_ln703_62_fu_5081301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2640_fu_5086189_p2() {
    add_ln703_2640_fu_5086189_p2 = (!add_ln703_2638_fu_5086180_p2.read().is_01() || !sext_ln703_1535_fu_5086186_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2638_fu_5086180_p2.read()) + sc_bigint<14>(sext_ln703_1535_fu_5086186_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2641_fu_5071453_p2() {
    add_ln703_2641_fu_5071453_p2 = (!zext_ln1118_2529_fu_5033895_p1.read().is_01() || !zext_ln1118_2528_fu_5033875_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2529_fu_5033895_p1.read()) + sc_biguint<10>(zext_ln1118_2528_fu_5033875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2642_fu_5071463_p2() {
    add_ln703_2642_fu_5071463_p2 = (!zext_ln708_1470_fu_5033857_p1.read().is_01() || !zext_ln703_456_fu_5071459_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1470_fu_5033857_p1.read()) + sc_biguint<11>(zext_ln703_456_fu_5071459_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2643_fu_5086202_p2() {
    add_ln703_2643_fu_5086202_p2 = (!sext_ln703_1536_fu_5086195_p1.read().is_01() || !zext_ln703_457_fu_5086199_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1536_fu_5086195_p1.read()) + sc_biguint<15>(zext_ln703_457_fu_5086199_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2644_fu_5071469_p2() {
    add_ln703_2644_fu_5071469_p2 = (!sext_ln708_213_fu_5033843_p1.read().is_01() || !zext_ln708_1471_fu_5033933_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_213_fu_5033843_p1.read()) + sc_biguint<11>(zext_ln708_1471_fu_5033933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2645_fu_5071479_p2() {
    add_ln703_2645_fu_5071479_p2 = (!zext_ln1118_2530_fu_5033929_p1.read().is_01() || !sext_ln703_1537_fu_5071475_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2530_fu_5033929_p1.read()) + sc_bigint<12>(sext_ln703_1537_fu_5071475_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2646_fu_5071485_p2() {
    add_ln703_2646_fu_5071485_p2 = (!sext_ln1118_795_fu_5033861_p1.read().is_01() || !zext_ln708_1464_fu_5032834_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_795_fu_5033861_p1.read()) + sc_biguint<10>(zext_ln708_1464_fu_5032834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2647_fu_5071491_p2() {
    add_ln703_2647_fu_5071491_p2 = (!sext_ln1118_799_fu_5033995_p1.read().is_01() || !zext_ln708_1472_fu_5033947_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_799_fu_5033995_p1.read()) + sc_biguint<8>(zext_ln708_1472_fu_5033947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2648_fu_5071501_p2() {
    add_ln703_2648_fu_5071501_p2 = (!add_ln703_2646_fu_5071485_p2.read().is_01() || !sext_ln703_1538_fu_5071497_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2646_fu_5071485_p2.read()) + sc_bigint<10>(sext_ln703_1538_fu_5071497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2649_fu_5071511_p2() {
    add_ln703_2649_fu_5071511_p2 = (!add_ln703_2645_fu_5071479_p2.read().is_01() || !sext_ln703_1539_fu_5071507_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2645_fu_5071479_p2.read()) + sc_bigint<12>(sext_ln703_1539_fu_5071507_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_264_fu_5055429_p2() {
    add_ln703_264_fu_5055429_p2 = (!zext_ln203_517_fu_4995056_p1.read().is_01() || !zext_ln203_516_fu_4995032_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_517_fu_4995056_p1.read()) + sc_biguint<10>(zext_ln203_516_fu_4995032_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2650_fu_5086211_p2() {
    add_ln703_2650_fu_5086211_p2 = (!add_ln703_2643_fu_5086202_p2.read().is_01() || !sext_ln703_1540_fu_5086208_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2643_fu_5086202_p2.read()) + sc_bigint<15>(sext_ln703_1540_fu_5086208_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2651_fu_5071517_p2() {
    add_ln703_2651_fu_5071517_p2 = (!zext_ln203_169_fu_5034033_p1.read().is_01() || !sext_ln203_457_fu_5034009_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_169_fu_5034033_p1.read()) + sc_bigint<12>(sext_ln203_457_fu_5034009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2653_fu_5071523_p2() {
    add_ln703_2653_fu_5071523_p2 = (!trunc_ln203_25_fu_5034047_p4.read().is_01() || !ap_const_lv10_300.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_25_fu_5034047_p4.read()) + sc_bigint<10>(ap_const_lv10_300));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2654_fu_5071529_p2() {
    add_ln703_2654_fu_5071529_p2 = (!zext_ln1118_2533_fu_5034075_p1.read().is_01() || !zext_ln708_1473_fu_5034057_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1118_2533_fu_5034075_p1.read()) + sc_biguint<6>(zext_ln708_1473_fu_5034057_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2655_fu_5071539_p2() {
    add_ln703_2655_fu_5071539_p2 = (!add_ln703_2653_fu_5071523_p2.read().is_01() || !zext_ln703_458_fu_5071535_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2653_fu_5071523_p2.read()) + sc_biguint<10>(zext_ln703_458_fu_5071535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2656_fu_5071549_p2() {
    add_ln703_2656_fu_5071549_p2 = (!sext_ln703_344_fu_5071545_p1.read().is_01() || !sext_ln203_458_fu_5034099_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_344_fu_5071545_p1.read()) + sc_bigint<12>(sext_ln203_458_fu_5034099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2657_fu_5071555_p2() {
    add_ln703_2657_fu_5071555_p2 = (!zext_ln1118_2500_fu_5032582_p1.read().is_01() || !add_ln703_2656_fu_5071549_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2500_fu_5032582_p1.read()) + sc_biguint<12>(add_ln703_2656_fu_5071549_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2658_fu_5071565_p2() {
    add_ln703_2658_fu_5071565_p2 = (!sext_ln1118_801_fu_5034133_p1.read().is_01() || !sext_ln1118_800_fu_5034119_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_801_fu_5034133_p1.read()) + sc_bigint<9>(sext_ln1118_800_fu_5034119_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2659_fu_5071575_p2() {
    add_ln703_2659_fu_5071575_p2 = (!sext_ln703_1543_fu_5071561_p1.read().is_01() || !sext_ln703_1544_fu_5071571_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1543_fu_5071561_p1.read()) + sc_bigint<13>(sext_ln703_1544_fu_5071571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_265_fu_5055439_p2() {
    add_ln703_265_fu_5055439_p2 = (!zext_ln708_1049_fu_4995140_p1.read().is_01() || !zext_ln708_1044_fu_4995070_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1049_fu_4995140_p1.read()) + sc_biguint<11>(zext_ln708_1044_fu_4995070_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2660_fu_5071581_p2() {
    add_ln703_2660_fu_5071581_p2 = (!zext_ln708_893_fu_5032216_p1.read().is_01() || !sext_ln1118_803_fu_5034179_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_893_fu_5032216_p1.read()) + sc_bigint<12>(sext_ln1118_803_fu_5034179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2661_fu_5071591_p2() {
    add_ln703_2661_fu_5071591_p2 = (!add_ln703_2659_fu_5071575_p2.read().is_01() || !sext_ln703_1545_fu_5071587_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2659_fu_5071575_p2.read()) + sc_bigint<13>(sext_ln703_1545_fu_5071587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2662_fu_5071601_p2() {
    add_ln703_2662_fu_5071601_p2 = (!zext_ln708_1469_fu_5033791_p1.read().is_01() || !zext_ln1116_224_fu_5021424_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1469_fu_5033791_p1.read()) + sc_biguint<10>(zext_ln1116_224_fu_5021424_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2663_fu_5071611_p2() {
    add_ln703_2663_fu_5071611_p2 = (!sext_ln1118_804_fu_5034203_p1.read().is_01() || !sext_ln1118_805_fu_5034217_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_804_fu_5034203_p1.read()) + sc_bigint<11>(sext_ln1118_805_fu_5034217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2664_fu_5071621_p2() {
    add_ln703_2664_fu_5071621_p2 = (!zext_ln703_459_fu_5071607_p1.read().is_01() || !sext_ln703_1547_fu_5071617_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_459_fu_5071607_p1.read()) + sc_bigint<12>(sext_ln703_1547_fu_5071617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2665_fu_5071631_p2() {
    add_ln703_2665_fu_5071631_p2 = (!sext_ln703_1546_fu_5071597_p1.read().is_01() || !sext_ln703_1548_fu_5071627_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1546_fu_5071597_p1.read()) + sc_bigint<14>(sext_ln703_1548_fu_5071627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2666_fu_5086230_p2() {
    add_ln703_2666_fu_5086230_p2 = (!sext_ln1118_806_fu_5080559_p1.read().is_01() || !add_ln703_2665_reg_5093104.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_806_fu_5080559_p1.read()) + sc_biguint<14>(add_ln703_2665_reg_5093104.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2667_fu_5071637_p2() {
    add_ln703_2667_fu_5071637_p2 = (!sext_ln708_214_fu_5034301_p1.read().is_01() || !sext_ln203_422_fu_5030879_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_214_fu_5034301_p1.read()) + sc_bigint<12>(sext_ln203_422_fu_5030879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2668_fu_5086238_p2() {
    add_ln703_2668_fu_5086238_p2 = (!add_ln703_2666_fu_5086230_p2.read().is_01() || !sext_ln703_1549_fu_5086235_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2666_fu_5086230_p2.read()) + sc_bigint<14>(sext_ln703_1549_fu_5086235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2669_fu_5071643_p2() {
    add_ln703_2669_fu_5071643_p2 = (!zext_ln1118_2539_fu_5034257_p1.read().is_01() || !zext_ln203_608_fu_5027748_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2539_fu_5034257_p1.read()) + sc_biguint<10>(zext_ln203_608_fu_5027748_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_266_fu_5055445_p2() {
    add_ln703_266_fu_5055445_p2 = (!zext_ln703_63_fu_5055435_p1.read().is_01() || !add_ln703_265_fu_5055439_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_63_fu_5055435_p1.read()) + sc_biguint<11>(add_ln703_265_fu_5055439_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2670_fu_5071653_p2() {
    add_ln703_2670_fu_5071653_p2 = (!zext_ln708_1475_fu_5034325_p1.read().is_01() || !zext_ln1118_2540_fu_5034277_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1475_fu_5034325_p1.read()) + sc_biguint<10>(zext_ln1118_2540_fu_5034277_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2671_fu_5071663_p2() {
    add_ln703_2671_fu_5071663_p2 = (!zext_ln703_460_fu_5071649_p1.read().is_01() || !zext_ln703_461_fu_5071659_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_460_fu_5071649_p1.read()) + sc_biguint<11>(zext_ln703_461_fu_5071659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2672_fu_5086251_p2() {
    add_ln703_2672_fu_5086251_p2 = (!sext_ln703_1550_fu_5086244_p1.read().is_01() || !zext_ln703_462_fu_5086248_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1550_fu_5086244_p1.read()) + sc_biguint<15>(zext_ln703_462_fu_5086248_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2673_fu_5071669_p2() {
    add_ln703_2673_fu_5071669_p2 = (!zext_ln1118_2496_fu_5032324_p1.read().is_01() || !sext_ln708_215_fu_5034373_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_2496_fu_5032324_p1.read()) + sc_bigint<11>(sext_ln708_215_fu_5034373_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2674_fu_5071675_p2() {
    add_ln703_2674_fu_5071675_p2 = (!zext_ln708_1476_fu_5034345_p1.read().is_01() || !zext_ln1118_2542_fu_5034305_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1476_fu_5034345_p1.read()) + sc_biguint<8>(zext_ln1118_2542_fu_5034305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2675_fu_5071685_p2() {
    add_ln703_2675_fu_5071685_p2 = (!add_ln703_2673_fu_5071669_p2.read().is_01() || !zext_ln703_463_fu_5071681_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2673_fu_5071669_p2.read()) + sc_biguint<11>(zext_ln703_463_fu_5071681_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2676_fu_5071695_p2() {
    add_ln703_2676_fu_5071695_p2 = (!zext_ln203_632_fu_5034387_p1.read().is_01() || !zext_ln1118_2543_fu_5034359_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln203_632_fu_5034387_p1.read()) + sc_biguint<6>(zext_ln1118_2543_fu_5034359_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2677_fu_5071705_p2() {
    add_ln703_2677_fu_5071705_p2 = (!sext_ln1118_682_fu_5027092_p1.read().is_01() || !sext_ln1118_749_fu_5031810_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_682_fu_5027092_p1.read()) + sc_bigint<8>(sext_ln1118_749_fu_5031810_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2678_fu_5071715_p2() {
    add_ln703_2678_fu_5071715_p2 = (!zext_ln1118_2454_fu_5030187_p1.read().is_01() || !sext_ln703_1552_fu_5071711_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2454_fu_5030187_p1.read()) + sc_bigint<10>(sext_ln703_1552_fu_5071711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2679_fu_5071721_p2() {
    add_ln703_2679_fu_5071721_p2 = (!zext_ln703_464_fu_5071701_p1.read().is_01() || !add_ln703_2678_fu_5071715_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_464_fu_5071701_p1.read()) + sc_biguint<10>(add_ln703_2678_fu_5071715_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_267_fu_5055455_p2() {
    add_ln703_267_fu_5055455_p2 = (!zext_ln708_1069_fu_4995174_p1.read().is_01() || !zext_ln708_1053_fu_4995154_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1069_fu_4995174_p1.read()) + sc_biguint<11>(zext_ln708_1053_fu_4995154_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2680_fu_5071731_p2() {
    add_ln703_2680_fu_5071731_p2 = (!sext_ln703_1551_fu_5071691_p1.read().is_01() || !sext_ln703_1553_fu_5071727_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1551_fu_5071691_p1.read()) + sc_bigint<12>(sext_ln703_1553_fu_5071727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2681_fu_5086260_p2() {
    add_ln703_2681_fu_5086260_p2 = (!add_ln703_2672_fu_5086251_p2.read().is_01() || !sext_ln703_1554_fu_5086257_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2672_fu_5086251_p2.read()) + sc_bigint<15>(sext_ln703_1554_fu_5086257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2682_fu_5086266_p2() {
    add_ln703_2682_fu_5086266_p2 = (!zext_ln203_153_reg_5090269.read().is_01() || !sext_ln203_459_fu_5080562_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_153_reg_5090269.read()) + sc_bigint<12>(sext_ln203_459_fu_5080562_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2684_fu_5071737_p2() {
    add_ln703_2684_fu_5071737_p2 = (!tmp_1542_fu_5032492_p4.read().is_01() || !ap_const_lv9_140.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1542_fu_5032492_p4.read()) + sc_bigint<9>(ap_const_lv9_140));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2685_fu_5071747_p2() {
    add_ln703_2685_fu_5071747_p2 = (!sext_ln1118_663_fu_5026134_p1.read().is_01() || !sext_ln703_1557_fu_5071743_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_663_fu_5026134_p1.read()) + sc_bigint<10>(sext_ln703_1557_fu_5071743_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2686_fu_5071757_p2() {
    add_ln703_2686_fu_5071757_p2 = (!sext_ln1118_810_fu_5034391_p1.read().is_01() || !sext_ln708_172_fu_5025614_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_810_fu_5034391_p1.read()) + sc_bigint<11>(sext_ln708_172_fu_5025614_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2687_fu_5071767_p2() {
    add_ln703_2687_fu_5071767_p2 = (!sext_ln703_1558_fu_5071753_p1.read().is_01() || !sext_ln703_1559_fu_5071763_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1558_fu_5071753_p1.read()) + sc_bigint<12>(sext_ln703_1559_fu_5071763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2688_fu_5071777_p2() {
    add_ln703_2688_fu_5071777_p2 = (!sext_ln1118_814_fu_5034429_p1.read().is_01() || !sext_ln703_1560_fu_5071773_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_814_fu_5034429_p1.read()) + sc_bigint<13>(sext_ln703_1560_fu_5071773_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2689_fu_5071783_p2() {
    add_ln703_2689_fu_5071783_p2 = (!sext_ln203_402_fu_5029735_p1.read().is_01() || !sext_ln1118_614_fu_5022509_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_402_fu_5029735_p1.read()) + sc_bigint<8>(sext_ln1118_614_fu_5022509_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_268_fu_5055465_p2() {
    add_ln703_268_fu_5055465_p2 = (!trunc_ln203_59_fu_4995262_p4.read().is_01() || !zext_ln203_518_fu_4995244_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_59_fu_4995262_p4.read()) + sc_biguint<10>(zext_ln203_518_fu_4995244_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2690_fu_5071793_p2() {
    add_ln703_2690_fu_5071793_p2 = (!sext_ln1118_812_fu_5034405_p1.read().is_01() || !sext_ln703_1561_fu_5071789_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_812_fu_5034405_p1.read()) + sc_bigint<10>(sext_ln703_1561_fu_5071789_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2691_fu_5086288_p2() {
    add_ln703_2691_fu_5086288_p2 = (!add_ln703_2688_reg_5093124.read().is_01() || !sext_ln703_1562_fu_5086285_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2688_reg_5093124.read()) + sc_bigint<13>(sext_ln703_1562_fu_5086285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2692_fu_5086293_p2() {
    add_ln703_2692_fu_5086293_p2 = (!sext_ln708_216_fu_5080565_p1.read().is_01() || !add_ln703_2691_fu_5086288_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln708_216_fu_5080565_p1.read()) + sc_biguint<13>(add_ln703_2691_fu_5086288_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2693_fu_5071799_p2() {
    add_ln703_2693_fu_5071799_p2 = (!sext_ln1118_818_fu_5034503_p1.read().is_01() || !sext_ln203_422_fu_5030879_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_818_fu_5034503_p1.read()) + sc_bigint<12>(sext_ln203_422_fu_5030879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2694_fu_5086306_p2() {
    add_ln703_2694_fu_5086306_p2 = (!sext_ln703_1563_fu_5086299_p1.read().is_01() || !sext_ln703_1564_fu_5086303_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1563_fu_5086299_p1.read()) + sc_bigint<14>(sext_ln703_1564_fu_5086303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2695_fu_5071805_p2() {
    add_ln703_2695_fu_5071805_p2 = (!zext_ln1118_2360_fu_5026288_p1.read().is_01() || !sext_ln1118_820_fu_5034549_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2360_fu_5026288_p1.read()) + sc_bigint<12>(sext_ln1118_820_fu_5034549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2696_fu_5071815_p2() {
    add_ln703_2696_fu_5071815_p2 = (!zext_ln1118_2548_fu_5034563_p1.read().is_01() || !zext_ln1118_2504_fu_5032768_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2548_fu_5034563_p1.read()) + sc_biguint<10>(zext_ln1118_2504_fu_5032768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2697_fu_5071825_p2() {
    add_ln703_2697_fu_5071825_p2 = (!zext_ln708_1477_fu_5034469_p1.read().is_01() || !zext_ln703_465_fu_5071821_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1477_fu_5034469_p1.read()) + sc_biguint<11>(zext_ln703_465_fu_5071821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2698_fu_5071835_p2() {
    add_ln703_2698_fu_5071835_p2 = (!sext_ln703_1566_fu_5071811_p1.read().is_01() || !zext_ln703_466_fu_5071831_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1566_fu_5071811_p1.read()) + sc_biguint<13>(zext_ln703_466_fu_5071831_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2699_fu_5086319_p2() {
    add_ln703_2699_fu_5086319_p2 = (!sext_ln703_1565_fu_5086312_p1.read().is_01() || !sext_ln703_1567_fu_5086316_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1565_fu_5086312_p1.read()) + sc_bigint<15>(sext_ln703_1567_fu_5086316_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_269_fu_5055475_p2() {
    add_ln703_269_fu_5055475_p2 = (!zext_ln703_65_fu_5055461_p1.read().is_01() || !zext_ln703_66_fu_5055471_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_65_fu_5055461_p1.read()) + sc_biguint<12>(zext_ln703_66_fu_5055471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_26_fu_5080798_p2() {
    add_ln703_26_fu_5080798_p2 = (!add_ln703_24_fu_5080789_p2.read().is_01() || !sext_ln703_24_fu_5080795_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_24_fu_5080789_p2.read()) + sc_bigint<15>(sext_ln703_24_fu_5080795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2700_fu_5071841_p2() {
    add_ln703_2700_fu_5071841_p2 = (!zext_ln708_1366_fu_5022029_p1.read().is_01() || !zext_ln708_1479_fu_5034583_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1366_fu_5022029_p1.read()) + sc_biguint<11>(zext_ln708_1479_fu_5034583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2701_fu_5071847_p2() {
    add_ln703_2701_fu_5071847_p2 = (!zext_ln708_1384_fu_5024375_p1.read().is_01() || !zext_ln1118_2545_fu_5034449_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1384_fu_5024375_p1.read()) + sc_biguint<8>(zext_ln1118_2545_fu_5034449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2702_fu_5071857_p2() {
    add_ln703_2702_fu_5071857_p2 = (!add_ln703_2700_fu_5071841_p2.read().is_01() || !zext_ln703_467_fu_5071853_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2700_fu_5071841_p2.read()) + sc_biguint<11>(zext_ln703_467_fu_5071853_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2703_fu_5071867_p2() {
    add_ln703_2703_fu_5071867_p2 = (!zext_ln708_1365_fu_5021913_p1.read().is_01() || !zext_ln708_1478_fu_5034483_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1365_fu_5021913_p1.read()) + sc_biguint<8>(zext_ln708_1478_fu_5034483_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2704_fu_5071877_p2() {
    add_ln703_2704_fu_5071877_p2 = (!sext_ln708_217_fu_5034607_p1.read().is_01() || !sext_ln1118_604_fu_5021346_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_217_fu_5034607_p1.read()) + sc_bigint<8>(sext_ln1118_604_fu_5021346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2705_fu_5071887_p2() {
    add_ln703_2705_fu_5071887_p2 = (!zext_ln708_961_fu_5034621_p1.read().is_01() || !sext_ln703_1568_fu_5071883_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_961_fu_5034621_p1.read()) + sc_bigint<9>(sext_ln703_1568_fu_5071883_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2706_fu_5071897_p2() {
    add_ln703_2706_fu_5071897_p2 = (!zext_ln703_469_fu_5071873_p1.read().is_01() || !sext_ln703_1569_fu_5071893_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_469_fu_5071873_p1.read()) + sc_bigint<10>(sext_ln703_1569_fu_5071893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2707_fu_5071907_p2() {
    add_ln703_2707_fu_5071907_p2 = (!zext_ln703_468_fu_5071863_p1.read().is_01() || !sext_ln703_1570_fu_5071903_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_468_fu_5071863_p1.read()) + sc_bigint<12>(sext_ln703_1570_fu_5071903_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2708_fu_5086328_p2() {
    add_ln703_2708_fu_5086328_p2 = (!add_ln703_2699_fu_5086319_p2.read().is_01() || !sext_ln703_1571_fu_5086325_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2699_fu_5086319_p2.read()) + sc_bigint<15>(sext_ln703_1571_fu_5086325_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2709_fu_5086334_p2() {
    add_ln703_2709_fu_5086334_p2 = (!sext_ln203_460_fu_5080568_p1.read().is_01() || !add_ln703_2708_fu_5086328_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_460_fu_5080568_p1.read()) + sc_biguint<15>(add_ln703_2708_fu_5086328_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_270_fu_5055481_p2() {
    add_ln703_270_fu_5055481_p2 = (!zext_ln703_64_fu_5055451_p1.read().is_01() || !add_ln703_269_fu_5055475_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_64_fu_5055451_p1.read()) + sc_biguint<12>(add_ln703_269_fu_5055475_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2710_fu_5071913_p2() {
    add_ln703_2710_fu_5071913_p2 = (!sext_ln203_462_fu_5034669_p1.read().is_01() || !sext_ln1118_770_fu_5032896_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_462_fu_5034669_p1.read()) + sc_bigint<12>(sext_ln1118_770_fu_5032896_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2711_fu_5086343_p2() {
    add_ln703_2711_fu_5086343_p2 = (!add_ln703_2709_fu_5086334_p2.read().is_01() || !sext_ln703_1572_fu_5086340_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2709_fu_5086334_p2.read()) + sc_bigint<15>(sext_ln703_1572_fu_5086340_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2712_fu_5071919_p2() {
    add_ln703_2712_fu_5071919_p2 = (!zext_ln203_631_fu_5034029_p1.read().is_01() || !zext_ln203_633_fu_5034655_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_631_fu_5034029_p1.read()) + sc_biguint<10>(zext_ln203_633_fu_5034655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2713_fu_5071929_p2() {
    add_ln703_2713_fu_5071929_p2 = (!zext_ln203_170_fu_5034635_p1.read().is_01() || !sext_ln203_430_fu_5031485_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_170_fu_5034635_p1.read()) + sc_bigint<9>(sext_ln203_430_fu_5031485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2714_fu_5071939_p2() {
    add_ln703_2714_fu_5071939_p2 = (!zext_ln703_470_fu_5071925_p1.read().is_01() || !sext_ln703_1573_fu_5071935_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_470_fu_5071925_p1.read()) + sc_bigint<11>(sext_ln703_1573_fu_5071935_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2716_fu_5071945_p2() {
    add_ln703_2716_fu_5071945_p2 = (!sext_ln1118_821_fu_5034683_p1.read().is_01() || !ap_const_lv11_700.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_821_fu_5034683_p1.read()) + sc_bigint<11>(ap_const_lv11_700));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2717_fu_5071951_p2() {
    add_ln703_2717_fu_5071951_p2 = (!zext_ln708_1480_fu_5034707_p1.read().is_01() || !add_ln703_2716_fu_5071945_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1480_fu_5034707_p1.read()) + sc_biguint<11>(add_ln703_2716_fu_5071945_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2718_fu_5071961_p2() {
    add_ln703_2718_fu_5071961_p2 = (!sext_ln1118_773_fu_5032972_p1.read().is_01() || !sext_ln1116_63_fu_5034731_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_773_fu_5032972_p1.read()) + sc_bigint<12>(sext_ln1116_63_fu_5034731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2719_fu_5071967_p2() {
    add_ln703_2719_fu_5071967_p2 = (!sext_ln703_1576_fu_5071957_p1.read().is_01() || !add_ln703_2718_fu_5071961_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1576_fu_5071957_p1.read()) + sc_biguint<12>(add_ln703_2718_fu_5071961_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_271_fu_5055491_p2() {
    add_ln703_271_fu_5055491_p2 = (!sext_ln203_35_fu_4994678_p1.read().is_01() || !sext_ln203_34_fu_4994658_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_35_fu_4994678_p1.read()) + sc_bigint<11>(sext_ln203_34_fu_4994658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2720_fu_5071977_p2() {
    add_ln703_2720_fu_5071977_p2 = (!zext_ln708_973_fu_5034789_p1.read().is_01() || !sext_ln703_1577_fu_5071973_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_973_fu_5034789_p1.read()) + sc_bigint<13>(sext_ln703_1577_fu_5071973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2721_fu_5071983_p2() {
    add_ln703_2721_fu_5071983_p2 = (!sext_ln1118_824_fu_5034745_p1.read().is_01() || !zext_ln708_1383_fu_5024289_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_824_fu_5034745_p1.read()) + sc_biguint<11>(zext_ln708_1383_fu_5024289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2722_fu_5086365_p2() {
    add_ln703_2722_fu_5086365_p2 = (!add_ln703_2720_reg_5093159.read().is_01() || !sext_ln703_1578_fu_5086362_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2720_reg_5093159.read()) + sc_bigint<13>(sext_ln703_1578_fu_5086362_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2723_fu_5071989_p2() {
    add_ln703_2723_fu_5071989_p2 = (!sext_ln203_374_fu_5027534_p1.read().is_01() || !zext_ln708_1372_fu_5023327_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_374_fu_5027534_p1.read()) + sc_biguint<10>(zext_ln708_1372_fu_5023327_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2724_fu_5071999_p2() {
    add_ln703_2724_fu_5071999_p2 = (!sext_ln1116_64_fu_5034765_p1.read().is_01() || !sext_ln1118_825_fu_5034793_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_64_fu_5034765_p1.read()) + sc_bigint<9>(sext_ln1118_825_fu_5034793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2725_fu_5072009_p2() {
    add_ln703_2725_fu_5072009_p2 = (!sext_ln703_1579_fu_5071995_p1.read().is_01() || !sext_ln703_1580_fu_5072005_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1579_fu_5071995_p1.read()) + sc_bigint<11>(sext_ln703_1580_fu_5072005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2726_fu_5086373_p2() {
    add_ln703_2726_fu_5086373_p2 = (!add_ln703_2722_fu_5086365_p2.read().is_01() || !sext_ln703_1581_fu_5086370_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2722_fu_5086365_p2.read()) + sc_bigint<13>(sext_ln703_1581_fu_5086370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2727_fu_5072015_p2() {
    add_ln703_2727_fu_5072015_p2 = (!zext_ln1116_226_fu_5029877_p1.read().is_01() || !zext_ln1118_2553_fu_5034871_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_226_fu_5029877_p1.read()) + sc_biguint<10>(zext_ln1118_2553_fu_5034871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2728_fu_5086386_p2() {
    add_ln703_2728_fu_5086386_p2 = (!sext_ln703_1582_fu_5086379_p1.read().is_01() || !zext_ln703_471_fu_5086383_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1582_fu_5086379_p1.read()) + sc_biguint<14>(zext_ln703_471_fu_5086383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2729_fu_5072021_p2() {
    add_ln703_2729_fu_5072021_p2 = (!sext_ln1118_827_fu_5034851_p1.read().is_01() || !sext_ln1118_826_fu_5034813_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_827_fu_5034851_p1.read()) + sc_bigint<11>(sext_ln1118_826_fu_5034813_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_272_fu_5055501_p2() {
    add_ln703_272_fu_5055501_p2 = (!sext_ln203_38_fu_4994908_p1.read().is_01() || !sext_ln203_36_fu_4994818_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_38_fu_4994908_p1.read()) + sc_bigint<10>(sext_ln203_36_fu_4994818_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2730_fu_5072031_p2() {
    add_ln703_2730_fu_5072031_p2 = (!zext_ln1118_2554_fu_5034915_p1.read().is_01() || !sext_ln703_1583_fu_5072027_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2554_fu_5034915_p1.read()) + sc_bigint<12>(sext_ln703_1583_fu_5072027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2731_fu_5086395_p2() {
    add_ln703_2731_fu_5086395_p2 = (!add_ln703_2728_fu_5086386_p2.read().is_01() || !sext_ln703_1584_fu_5086392_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2728_fu_5086386_p2.read()) + sc_bigint<14>(sext_ln703_1584_fu_5086392_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2732_fu_5072037_p2() {
    add_ln703_2732_fu_5072037_p2 = (!sext_ln1118_654_fu_5025215_p1.read().is_01() || !sext_ln1118_831_fu_5034959_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_654_fu_5025215_p1.read()) + sc_bigint<11>(sext_ln1118_831_fu_5034959_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2733_fu_5072047_p2() {
    add_ln703_2733_fu_5072047_p2 = (!sext_ln1118_830_fu_5034945_p1.read().is_01() || !sext_ln703_1585_fu_5072043_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_830_fu_5034945_p1.read()) + sc_bigint<12>(sext_ln703_1585_fu_5072043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2734_fu_5072053_p2() {
    add_ln703_2734_fu_5072053_p2 = (!zext_ln1118_2435_fu_5029428_p1.read().is_01() || !sext_ln1118_828_fu_5034891_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2435_fu_5029428_p1.read()) + sc_bigint<9>(sext_ln1118_828_fu_5034891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2735_fu_5072063_p2() {
    add_ln703_2735_fu_5072063_p2 = (!sext_ln1116_65_fu_5034827_p1.read().is_01() || !sext_ln703_1586_fu_5072059_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_65_fu_5034827_p1.read()) + sc_bigint<10>(sext_ln703_1586_fu_5072059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2736_fu_5072073_p2() {
    add_ln703_2736_fu_5072073_p2 = (!add_ln703_2733_fu_5072047_p2.read().is_01() || !sext_ln703_1587_fu_5072069_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2733_fu_5072047_p2.read()) + sc_bigint<12>(sext_ln703_1587_fu_5072069_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2737_fu_5086404_p2() {
    add_ln703_2737_fu_5086404_p2 = (!add_ln703_2731_fu_5086395_p2.read().is_01() || !sext_ln703_1588_fu_5086401_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2731_fu_5086395_p2.read()) + sc_bigint<14>(sext_ln703_1588_fu_5086401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2738_fu_5086410_p2() {
    add_ln703_2738_fu_5086410_p2 = (!sext_ln203_466_fu_5080571_p1.read().is_01() || !add_ln703_2737_fu_5086404_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_466_fu_5080571_p1.read()) + sc_biguint<14>(add_ln703_2737_fu_5086404_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2739_fu_5072079_p2() {
    add_ln703_2739_fu_5072079_p2 = (!sext_ln203_432_fu_5031908_p1.read().is_01() || !sext_ln203_471_fu_5035081_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_432_fu_5031908_p1.read()) + sc_bigint<11>(sext_ln203_471_fu_5035081_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_273_fu_5055511_p2() {
    add_ln703_273_fu_5055511_p2 = (!sext_ln703_179_fu_5055497_p1.read().is_01() || !sext_ln703_180_fu_5055507_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_179_fu_5055497_p1.read()) + sc_bigint<12>(sext_ln703_180_fu_5055507_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2740_fu_5072089_p2() {
    add_ln703_2740_fu_5072089_p2 = (!sext_ln203_467_fu_5035007_p1.read().is_01() || !sext_ln703_1590_fu_5072085_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_467_fu_5035007_p1.read()) + sc_bigint<12>(sext_ln703_1590_fu_5072085_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2741_fu_5086423_p2() {
    add_ln703_2741_fu_5086423_p2 = (!sext_ln703_1589_fu_5086416_p1.read().is_01() || !sext_ln703_1591_fu_5086420_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1589_fu_5086416_p1.read()) + sc_bigint<15>(sext_ln703_1591_fu_5086420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2742_fu_5072095_p2() {
    add_ln703_2742_fu_5072095_p2 = (!sext_ln203_344_fu_5023039_p1.read().is_01() || !sext_ln203_465_fu_5034983_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_344_fu_5023039_p1.read()) + sc_bigint<10>(sext_ln203_465_fu_5034983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2743_fu_5072105_p2() {
    add_ln703_2743_fu_5072105_p2 = (!zext_ln203_171_fu_5035041_p1.read().is_01() || !sext_ln203_469_fu_5035027_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_171_fu_5035041_p1.read()) + sc_bigint<9>(sext_ln203_469_fu_5035027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2744_fu_5072115_p2() {
    add_ln703_2744_fu_5072115_p2 = (!sext_ln203_470_fu_5035061_p1.read().is_01() || !sext_ln703_1593_fu_5072111_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_470_fu_5035061_p1.read()) + sc_bigint<10>(sext_ln703_1593_fu_5072111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2745_fu_5072125_p2() {
    add_ln703_2745_fu_5072125_p2 = (!sext_ln703_1592_fu_5072101_p1.read().is_01() || !sext_ln703_1594_fu_5072121_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1592_fu_5072101_p1.read()) + sc_bigint<11>(sext_ln703_1594_fu_5072121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2747_fu_5072131_p2() {
    add_ln703_2747_fu_5072131_p2 = (!zext_ln708_1481_fu_5035101_p1.read().is_01() || !ap_const_lv11_4A0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1481_fu_5035101_p1.read()) + sc_bigint<11>(ap_const_lv11_4A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2748_fu_5072137_p2() {
    add_ln703_2748_fu_5072137_p2 = (!zext_ln1118_2556_fu_5035109_p1.read().is_01() || !trunc_ln1118_34_fu_5035119_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2556_fu_5035109_p1.read()) + sc_biguint<10>(trunc_ln1118_34_fu_5035119_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2749_fu_5072143_p2() {
    add_ln703_2749_fu_5072143_p2 = (!zext_ln708_1482_fu_5035105_p1.read().is_01() || !add_ln703_2748_fu_5072137_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1482_fu_5035105_p1.read()) + sc_biguint<10>(add_ln703_2748_fu_5072137_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_274_fu_5055517_p2() {
    add_ln703_274_fu_5055517_p2 = (!zext_ln1118_113_fu_4988921_p1.read().is_01() || !sext_ln203_39_fu_4994988_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_113_fu_4988921_p1.read()) + sc_bigint<10>(sext_ln203_39_fu_4994988_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2750_fu_5072153_p2() {
    add_ln703_2750_fu_5072153_p2 = (!add_ln703_2747_fu_5072131_p2.read().is_01() || !zext_ln703_472_fu_5072149_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2747_fu_5072131_p2.read()) + sc_biguint<11>(zext_ln703_472_fu_5072149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2751_fu_5072163_p2() {
    add_ln703_2751_fu_5072163_p2 = (!zext_ln1118_2489_fu_5032136_p1.read().is_01() || !sext_ln203_472_fu_5035157_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2489_fu_5032136_p1.read()) + sc_bigint<12>(sext_ln203_472_fu_5035157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2752_fu_5072169_p2() {
    add_ln703_2752_fu_5072169_p2 = (!sext_ln703_358_fu_5072159_p1.read().is_01() || !add_ln703_2751_fu_5072163_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_358_fu_5072159_p1.read()) + sc_biguint<12>(add_ln703_2751_fu_5072163_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2753_fu_5072179_p2() {
    add_ln703_2753_fu_5072179_p2 = (!sext_ln203_473_fu_5035181_p1.read().is_01() || !sext_ln703_359_fu_5072175_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_473_fu_5035181_p1.read()) + sc_bigint<13>(sext_ln703_359_fu_5072175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2754_fu_5072185_p2() {
    add_ln703_2754_fu_5072185_p2 = (!zext_ln1118_2558_fu_5035195_p1.read().is_01() || !sext_ln708_160_fu_5021256_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2558_fu_5035195_p1.read()) + sc_bigint<9>(sext_ln708_160_fu_5021256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2755_fu_5072195_p2() {
    add_ln703_2755_fu_5072195_p2 = (!zext_ln708_1483_fu_5035177_p1.read().is_01() || !sext_ln703_1597_fu_5072191_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1483_fu_5035177_p1.read()) + sc_bigint<10>(sext_ln703_1597_fu_5072191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2756_fu_5072205_p2() {
    add_ln703_2756_fu_5072205_p2 = (!add_ln703_2753_fu_5072179_p2.read().is_01() || !sext_ln703_1598_fu_5072201_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2753_fu_5072179_p2.read()) + sc_bigint<13>(sext_ln703_1598_fu_5072201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2757_fu_5072211_p2() {
    add_ln703_2757_fu_5072211_p2 = (!sext_ln1118_838_fu_5035215_p1.read().is_01() || !sext_ln708_161_fu_5021451_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_838_fu_5035215_p1.read()) + sc_bigint<12>(sext_ln708_161_fu_5021451_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2758_fu_5086448_p2() {
    add_ln703_2758_fu_5086448_p2 = (!sext_ln703_360_fu_5086442_p1.read().is_01() || !sext_ln703_1599_fu_5086445_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_360_fu_5086442_p1.read()) + sc_bigint<14>(sext_ln703_1599_fu_5086445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2759_fu_5072217_p2() {
    add_ln703_2759_fu_5072217_p2 = (!sext_ln1116_58_fu_5033480_p1.read().is_01() || !sext_ln1118_618_fu_5022657_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_58_fu_5033480_p1.read()) + sc_bigint<11>(sext_ln1118_618_fu_5022657_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_275_fu_5055527_p2() {
    add_ln703_275_fu_5055527_p2 = (!sext_ln203_37_fu_4994822_p1.read().is_01() || !zext_ln203_17_fu_4995092_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_37_fu_4994822_p1.read()) + sc_biguint<9>(zext_ln203_17_fu_4995092_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2760_fu_5072227_p2() {
    add_ln703_2760_fu_5072227_p2 = (!zext_ln1118_2559_fu_5035229_p1.read().is_01() || !sext_ln703_1600_fu_5072223_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2559_fu_5035229_p1.read()) + sc_bigint<12>(sext_ln703_1600_fu_5072223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2761_fu_5086457_p2() {
    add_ln703_2761_fu_5086457_p2 = (!add_ln703_2758_fu_5086448_p2.read().is_01() || !sext_ln703_1601_fu_5086454_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2758_fu_5086448_p2.read()) + sc_bigint<14>(sext_ln703_1601_fu_5086454_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2762_fu_5072233_p2() {
    add_ln703_2762_fu_5072233_p2 = (!zext_ln1118_2561_fu_5035271_p1.read().is_01() || !zext_ln1118_2560_fu_5035247_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2561_fu_5035271_p1.read()) + sc_biguint<10>(zext_ln1118_2560_fu_5035247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2763_fu_5086466_p2() {
    add_ln703_2763_fu_5086466_p2 = (!add_ln703_2761_fu_5086457_p2.read().is_01() || !zext_ln703_473_fu_5086463_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2761_fu_5086457_p2.read()) + sc_biguint<14>(zext_ln703_473_fu_5086463_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2764_fu_5072239_p2() {
    add_ln703_2764_fu_5072239_p2 = (!zext_ln1118_2563_fu_5035355_p1.read().is_01() || !trunc_ln1118_35_fu_5035329_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2563_fu_5035355_p1.read()) + sc_biguint<9>(trunc_ln1118_35_fu_5035329_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2765_fu_5072249_p2() {
    add_ln703_2765_fu_5072249_p2 = (!zext_ln708_1364_fu_5021785_p1.read().is_01() || !zext_ln703_474_fu_5072245_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1364_fu_5021785_p1.read()) + sc_biguint<11>(zext_ln703_474_fu_5072245_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2766_fu_5086475_p2() {
    add_ln703_2766_fu_5086475_p2 = (!add_ln703_2763_fu_5086466_p2.read().is_01() || !zext_ln703_475_fu_5086472_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2763_fu_5086466_p2.read()) + sc_biguint<14>(zext_ln703_475_fu_5086472_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2767_fu_5072255_p2() {
    add_ln703_2767_fu_5072255_p2 = (!sext_ln1118_839_fu_5035243_p1.read().is_01() || !zext_ln1118_2565_fu_5035377_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_839_fu_5035243_p1.read()) + sc_biguint<12>(zext_ln1118_2565_fu_5035377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2768_fu_5072265_p2() {
    add_ln703_2768_fu_5072265_p2 = (!zext_ln1118_2564_fu_5035359_p1.read().is_01() || !sext_ln703_1603_fu_5072261_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln1118_2564_fu_5035359_p1.read()) + sc_bigint<13>(sext_ln703_1603_fu_5072261_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2769_fu_5072271_p2() {
    add_ln703_2769_fu_5072271_p2 = (!sext_ln708_222_fu_5035373_p1.read().is_01() || !sext_ln1118_840_fu_5035285_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_222_fu_5035373_p1.read()) + sc_bigint<11>(sext_ln1118_840_fu_5035285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_276_fu_5055537_p2() {
    add_ln703_276_fu_5055537_p2 = (!sext_ln703_181_fu_5055523_p1.read().is_01() || !sext_ln703_182_fu_5055533_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_181_fu_5055523_p1.read()) + sc_bigint<11>(sext_ln703_182_fu_5055533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2770_fu_5072281_p2() {
    add_ln703_2770_fu_5072281_p2 = (!sext_ln708_221_fu_5035305_p1.read().is_01() || !zext_ln1118_2562_fu_5035319_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_221_fu_5035305_p1.read()) + sc_biguint<9>(zext_ln1118_2562_fu_5035319_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2771_fu_5072291_p2() {
    add_ln703_2771_fu_5072291_p2 = (!sext_ln703_1604_fu_5072277_p1.read().is_01() || !sext_ln703_1605_fu_5072287_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1604_fu_5072277_p1.read()) + sc_bigint<12>(sext_ln703_1605_fu_5072287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2772_fu_5072301_p2() {
    add_ln703_2772_fu_5072301_p2 = (!add_ln703_2768_fu_5072265_p2.read().is_01() || !sext_ln703_1606_fu_5072297_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2768_fu_5072265_p2.read()) + sc_bigint<13>(sext_ln703_1606_fu_5072297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2773_fu_5086488_p2() {
    add_ln703_2773_fu_5086488_p2 = (!sext_ln703_1602_fu_5086481_p1.read().is_01() || !sext_ln703_1607_fu_5086485_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1602_fu_5086481_p1.read()) + sc_bigint<15>(sext_ln703_1607_fu_5086485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2774_fu_5072307_p2() {
    add_ln703_2774_fu_5072307_p2 = (!sext_ln203_477_fu_5035449_p1.read().is_01() || !sext_ln203_476_fu_5035429_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_477_fu_5035449_p1.read()) + sc_bigint<12>(sext_ln203_476_fu_5035429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2775_fu_5086497_p2() {
    add_ln703_2775_fu_5086497_p2 = (!add_ln703_2773_fu_5086488_p2.read().is_01() || !sext_ln703_1608_fu_5086494_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2773_fu_5086488_p2.read()) + sc_bigint<15>(sext_ln703_1608_fu_5086494_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2776_fu_5072313_p2() {
    add_ln703_2776_fu_5072313_p2 = (!zext_ln203_173_fu_5035453_p1.read().is_01() || !sext_ln203_475_fu_5035415_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_173_fu_5035453_p1.read()) + sc_bigint<10>(sext_ln203_475_fu_5035415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2777_fu_5072323_p2() {
    add_ln703_2777_fu_5072323_p2 = (!zext_ln203_174_fu_5035467_p1.read().is_01() || !sext_ln703_1609_fu_5072319_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_174_fu_5035467_p1.read()) + sc_bigint<12>(sext_ln703_1609_fu_5072319_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2779_fu_5072339_p2() {
    add_ln703_2779_fu_5072339_p2 = (!zext_ln708_1467_fu_5033679_p1.read().is_01() || !zext_ln703_476_fu_5072335_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1467_fu_5033679_p1.read()) + sc_biguint<8>(zext_ln703_476_fu_5072335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_277_fu_5055547_p2() {
    add_ln703_277_fu_5055547_p2 = (!add_ln703_273_fu_5055511_p2.read().is_01() || !sext_ln703_183_fu_5055543_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_273_fu_5055511_p2.read()) + sc_bigint<12>(sext_ln703_183_fu_5055543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2780_fu_5072349_p2() {
    add_ln703_2780_fu_5072349_p2 = (!sext_ln1118_844_fu_5035499_p1.read().is_01() || !sext_ln1118_846_fu_5035503_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_844_fu_5035499_p1.read()) + sc_bigint<10>(sext_ln1118_846_fu_5035503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2781_fu_5072359_p2() {
    add_ln703_2781_fu_5072359_p2 = (!zext_ln703_477_fu_5072345_p1.read().is_01() || !sext_ln703_1612_fu_5072355_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_477_fu_5072345_p1.read()) + sc_bigint<11>(sext_ln703_1612_fu_5072355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2782_fu_5072369_p2() {
    add_ln703_2782_fu_5072369_p2 = (!sext_ln203_478_fu_5035517_p1.read().is_01() || !sext_ln703_1613_fu_5072365_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_478_fu_5035517_p1.read()) + sc_bigint<12>(sext_ln703_1613_fu_5072365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2783_fu_5086519_p2() {
    add_ln703_2783_fu_5086519_p2 = (!sext_ln1118_847_fu_5080574_p1.read().is_01() || !sext_ln1118_708_fu_5080511_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_847_fu_5080574_p1.read()) + sc_bigint<12>(sext_ln1118_708_fu_5080511_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2784_fu_5086529_p2() {
    add_ln703_2784_fu_5086529_p2 = (!sext_ln703_1614_fu_5086516_p1.read().is_01() || !sext_ln703_1615_fu_5086525_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1614_fu_5086516_p1.read()) + sc_bigint<13>(sext_ln703_1615_fu_5086525_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2785_fu_5072375_p2() {
    add_ln703_2785_fu_5072375_p2 = (!zext_ln1118_2567_fu_5035571_p1.read().is_01() || !trunc_ln1118_36_fu_5035545_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2567_fu_5035571_p1.read()) + sc_biguint<10>(trunc_ln1118_36_fu_5035545_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2786_fu_5072385_p2() {
    add_ln703_2786_fu_5072385_p2 = (!zext_ln708_1004_fu_5035531_p1.read().is_01() || !zext_ln708_703_fu_5021180_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1004_fu_5035531_p1.read()) + sc_biguint<9>(zext_ln708_703_fu_5021180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2787_fu_5072395_p2() {
    add_ln703_2787_fu_5072395_p2 = (!zext_ln703_478_fu_5072381_p1.read().is_01() || !zext_ln703_479_fu_5072391_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_478_fu_5072381_p1.read()) + sc_biguint<11>(zext_ln703_479_fu_5072391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2788_fu_5086542_p2() {
    add_ln703_2788_fu_5086542_p2 = (!sext_ln703_1616_fu_5086535_p1.read().is_01() || !zext_ln703_480_fu_5086539_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1616_fu_5086535_p1.read()) + sc_biguint<14>(zext_ln703_480_fu_5086539_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2789_fu_5072401_p2() {
    add_ln703_2789_fu_5072401_p2 = (!zext_ln708_1485_fu_5035663_p1.read().is_01() || !zext_ln708_1484_fu_5035643_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1485_fu_5035663_p1.read()) + sc_biguint<11>(zext_ln708_1484_fu_5035643_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_278_fu_5055557_p2() {
    add_ln703_278_fu_5055557_p2 = (!zext_ln703_67_fu_5055487_p1.read().is_01() || !sext_ln703_184_fu_5055553_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_67_fu_5055487_p1.read()) + sc_bigint<14>(sext_ln703_184_fu_5055553_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2790_fu_5086551_p2() {
    add_ln703_2790_fu_5086551_p2 = (!add_ln703_2788_fu_5086542_p2.read().is_01() || !zext_ln703_481_fu_5086548_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2788_fu_5086542_p2.read()) + sc_biguint<14>(zext_ln703_481_fu_5086548_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2791_fu_5072407_p2() {
    add_ln703_2791_fu_5072407_p2 = (!sext_ln1118_805_fu_5034217_p1.read().is_01() || !zext_ln708_1486_fu_5035727_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_805_fu_5034217_p1.read()) + sc_biguint<11>(zext_ln708_1486_fu_5035727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2792_fu_5072417_p2() {
    add_ln703_2792_fu_5072417_p2 = (!zext_ln1118_2569_fu_5035707_p1.read().is_01() || !sext_ln703_1617_fu_5072413_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2569_fu_5035707_p1.read()) + sc_bigint<12>(sext_ln703_1617_fu_5072413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2793_fu_5086560_p2() {
    add_ln703_2793_fu_5086560_p2 = (!add_ln703_2790_fu_5086551_p2.read().is_01() || !sext_ln703_1618_fu_5086557_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2790_fu_5086551_p2.read()) + sc_bigint<14>(sext_ln703_1618_fu_5086557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2794_fu_5072423_p2() {
    add_ln703_2794_fu_5072423_p2 = (!sext_ln1118_850_fu_5035603_p1.read().is_01() || !sext_ln1118_759_fu_5032358_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_850_fu_5035603_p1.read()) + sc_bigint<11>(sext_ln1118_759_fu_5032358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2795_fu_5072433_p2() {
    add_ln703_2795_fu_5072433_p2 = (!sext_ln203_479_fu_5035585_p1.read().is_01() || !sext_ln703_1620_fu_5072429_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_479_fu_5035585_p1.read()) + sc_bigint<12>(sext_ln703_1620_fu_5072429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2796_fu_5072443_p2() {
    add_ln703_2796_fu_5072443_p2 = (!sext_ln708_227_fu_5035687_p1.read().is_01() || !sext_ln708_225_fu_5035623_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_227_fu_5035687_p1.read()) + sc_bigint<10>(sext_ln708_225_fu_5035623_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2797_fu_5072453_p2() {
    add_ln703_2797_fu_5072453_p2 = (!zext_ln1118_2568_fu_5035667_p1.read().is_01() || !zext_ln1118_2395_fu_5027628_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2568_fu_5035667_p1.read()) + sc_biguint<9>(zext_ln1118_2395_fu_5027628_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2798_fu_5072463_p2() {
    add_ln703_2798_fu_5072463_p2 = (!sext_ln703_1622_fu_5072449_p1.read().is_01() || !zext_ln703_482_fu_5072459_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1622_fu_5072449_p1.read()) + sc_biguint<11>(zext_ln703_482_fu_5072459_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2799_fu_5072473_p2() {
    add_ln703_2799_fu_5072473_p2 = (!sext_ln703_1621_fu_5072439_p1.read().is_01() || !sext_ln703_1623_fu_5072469_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1621_fu_5072439_p1.read()) + sc_bigint<13>(sext_ln703_1623_fu_5072469_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_27_fu_5053833_p2() {
    add_ln703_27_fu_5053833_p2 = (!zext_ln203_501_fu_4989441_p1.read().is_01() || !zext_ln203_500_fu_4989413_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_501_fu_4989441_p1.read()) + sc_biguint<10>(zext_ln203_500_fu_4989413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2800_fu_5086573_p2() {
    add_ln703_2800_fu_5086573_p2 = (!sext_ln703_1619_fu_5086566_p1.read().is_01() || !sext_ln703_1624_fu_5086570_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1619_fu_5086566_p1.read()) + sc_bigint<15>(sext_ln703_1624_fu_5086570_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2801_fu_5086579_p2() {
    add_ln703_2801_fu_5086579_p2 = (!sext_ln203_481_fu_5080577_p1.read().is_01() || !add_ln703_2800_fu_5086573_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_481_fu_5080577_p1.read()) + sc_biguint<15>(add_ln703_2800_fu_5086573_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2802_fu_5072479_p2() {
    add_ln703_2802_fu_5072479_p2 = (!zext_ln203_175_fu_5035765_p1.read().is_01() || !sext_ln203_482_fu_5035779_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_175_fu_5035765_p1.read()) + sc_bigint<12>(sext_ln203_482_fu_5035779_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2803_fu_5086588_p2() {
    add_ln703_2803_fu_5086588_p2 = (!add_ln703_2801_fu_5086579_p2.read().is_01() || !sext_ln703_1625_fu_5086585_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2801_fu_5086579_p2.read()) + sc_bigint<15>(sext_ln703_1625_fu_5086585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2804_fu_5072485_p2() {
    add_ln703_2804_fu_5072485_p2 = (!zext_ln203_634_fu_5035783_p1.read().is_01() || !zext_ln1118_2439_fu_5029548_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_634_fu_5035783_p1.read()) + sc_biguint<10>(zext_ln1118_2439_fu_5029548_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2805_fu_5072495_p2() {
    add_ln703_2805_fu_5072495_p2 = (!zext_ln203_176_fu_5035797_p1.read().is_01() || !sext_ln203_480_fu_5035751_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_176_fu_5035797_p1.read()) + sc_bigint<9>(sext_ln203_480_fu_5035751_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2806_fu_5072505_p2() {
    add_ln703_2806_fu_5072505_p2 = (!zext_ln703_483_fu_5072491_p1.read().is_01() || !sext_ln703_1626_fu_5072501_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_483_fu_5072491_p1.read()) + sc_bigint<11>(sext_ln703_1626_fu_5072501_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2808_fu_5072511_p2() {
    add_ln703_2808_fu_5072511_p2 = (!sext_ln1118_851_fu_5035817_p1.read().is_01() || !ap_const_lv10_20.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_851_fu_5035817_p1.read()) + sc_biguint<10>(ap_const_lv10_20));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2809_fu_5072521_p2() {
    add_ln703_2809_fu_5072521_p2 = (!sext_ln1118_626_fu_5023193_p1.read().is_01() || !sext_ln703_1629_fu_5072517_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_626_fu_5023193_p1.read()) + sc_bigint<11>(sext_ln703_1629_fu_5072517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_280_fu_5055571_p2() {
    add_ln703_280_fu_5055571_p2 = (!sext_ln203_50_fu_4995594_p1.read().is_01() || !sext_ln203_45_fu_4995310_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_50_fu_4995594_p1.read()) + sc_bigint<12>(sext_ln203_45_fu_4995310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2810_fu_5072531_p2() {
    add_ln703_2810_fu_5072531_p2 = (!zext_ln708_1474_fu_5034071_p1.read().is_01() || !zext_ln1118_2571_fu_5035821_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1474_fu_5034071_p1.read()) + sc_biguint<8>(zext_ln1118_2571_fu_5035821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2811_fu_5072541_p2() {
    add_ln703_2811_fu_5072541_p2 = (!sext_ln1118_693_fu_5028602_p1.read().is_01() || !zext_ln703_484_fu_5072537_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_693_fu_5028602_p1.read()) + sc_biguint<11>(zext_ln703_484_fu_5072537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2812_fu_5072551_p2() {
    add_ln703_2812_fu_5072551_p2 = (!sext_ln703_1630_fu_5072527_p1.read().is_01() || !sext_ln703_1631_fu_5072547_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1630_fu_5072527_p1.read()) + sc_bigint<12>(sext_ln703_1631_fu_5072547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2813_fu_5072561_p2() {
    add_ln703_2813_fu_5072561_p2 = (!sext_ln708_228_fu_5035859_p1.read().is_01() || !sext_ln1118_855_fu_5035845_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_228_fu_5035859_p1.read()) + sc_bigint<11>(sext_ln1118_855_fu_5035845_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2814_fu_5072571_p2() {
    add_ln703_2814_fu_5072571_p2 = (!sext_ln703_1632_fu_5072557_p1.read().is_01() || !sext_ln703_1633_fu_5072567_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1632_fu_5072557_p1.read()) + sc_bigint<13>(sext_ln703_1633_fu_5072567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2815_fu_5072577_p2() {
    add_ln703_2815_fu_5072577_p2 = (!zext_ln1118_2551_fu_5034769_p1.read().is_01() || !sext_ln708_229_fu_5035877_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_2551_fu_5034769_p1.read()) + sc_bigint<11>(sext_ln708_229_fu_5035877_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2816_fu_5072583_p2() {
    add_ln703_2816_fu_5072583_p2 = (!zext_ln1118_2573_fu_5035873_p1.read().is_01() || !sext_ln1118_715_fu_5029686_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2573_fu_5035873_p1.read()) + sc_bigint<10>(sext_ln1118_715_fu_5029686_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2817_fu_5072593_p2() {
    add_ln703_2817_fu_5072593_p2 = (!add_ln703_2815_fu_5072577_p2.read().is_01() || !sext_ln703_1634_fu_5072589_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2815_fu_5072577_p2.read()) + sc_bigint<11>(sext_ln703_1634_fu_5072589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2818_fu_5072603_p2() {
    add_ln703_2818_fu_5072603_p2 = (!add_ln703_2814_fu_5072571_p2.read().is_01() || !sext_ln703_1635_fu_5072599_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2814_fu_5072571_p2.read()) + sc_bigint<13>(sext_ln703_1635_fu_5072599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2819_fu_5072609_p2() {
    add_ln703_2819_fu_5072609_p2 = (!zext_ln708_1488_fu_5035965_p1.read().is_01() || !zext_ln708_1487_fu_5035897_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1488_fu_5035965_p1.read()) + sc_biguint<11>(zext_ln708_1487_fu_5035897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_281_fu_5055581_p2() {
    add_ln703_281_fu_5055581_p2 = (!or_ln703_1_fu_5055563_p3.read().is_01() || !sext_ln703_186_fu_5055577_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_1_fu_5055563_p3.read()) + sc_bigint<16>(sext_ln703_186_fu_5055577_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2820_fu_5086613_p2() {
    add_ln703_2820_fu_5086613_p2 = (!sext_ln703_1636_fu_5086607_p1.read().is_01() || !zext_ln703_485_fu_5086610_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1636_fu_5086607_p1.read()) + sc_biguint<14>(zext_ln703_485_fu_5086610_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2821_fu_5072615_p2() {
    add_ln703_2821_fu_5072615_p2 = (!zext_ln708_1374_fu_5023765_p1.read().is_01() || !zext_ln708_1490_fu_5036009_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1374_fu_5023765_p1.read()) + sc_biguint<11>(zext_ln708_1490_fu_5036009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2822_fu_5072621_p2() {
    add_ln703_2822_fu_5072621_p2 = (!zext_ln708_1489_fu_5035985_p1.read().is_01() || !add_ln703_2821_fu_5072615_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1489_fu_5035985_p1.read()) + sc_biguint<11>(add_ln703_2821_fu_5072615_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2823_fu_5086622_p2() {
    add_ln703_2823_fu_5086622_p2 = (!add_ln703_2820_fu_5086613_p2.read().is_01() || !zext_ln703_486_fu_5086619_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2820_fu_5086613_p2.read()) + sc_biguint<14>(zext_ln703_486_fu_5086619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2824_fu_5072627_p2() {
    add_ln703_2824_fu_5072627_p2 = (!sext_ln708_231_fu_5035945_p1.read().is_01() || !sext_ln1118_759_fu_5032358_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_231_fu_5035945_p1.read()) + sc_bigint<11>(sext_ln1118_759_fu_5032358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2825_fu_5072637_p2() {
    add_ln703_2825_fu_5072637_p2 = (!sext_ln1118_857_fu_5035931_p1.read().is_01() || !sext_ln703_1637_fu_5072633_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_857_fu_5035931_p1.read()) + sc_bigint<12>(sext_ln703_1637_fu_5072633_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2826_fu_5072643_p2() {
    add_ln703_2826_fu_5072643_p2 = (!sext_ln708_230_fu_5035917_p1.read().is_01() || !zext_ln708_1396_fu_5025792_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_230_fu_5035917_p1.read()) + sc_biguint<8>(zext_ln708_1396_fu_5025792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2827_fu_5072653_p2() {
    add_ln703_2827_fu_5072653_p2 = (!sext_ln1118_828_fu_5034891_p1.read().is_01() || !sext_ln703_1638_fu_5072649_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_828_fu_5034891_p1.read()) + sc_bigint<9>(sext_ln703_1638_fu_5072649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2828_fu_5072663_p2() {
    add_ln703_2828_fu_5072663_p2 = (!add_ln703_2825_fu_5072637_p2.read().is_01() || !sext_ln703_1639_fu_5072659_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2825_fu_5072637_p2.read()) + sc_bigint<12>(sext_ln703_1639_fu_5072659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2829_fu_5086631_p2() {
    add_ln703_2829_fu_5086631_p2 = (!add_ln703_2823_fu_5086622_p2.read().is_01() || !sext_ln703_1640_fu_5086628_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2823_fu_5086622_p2.read()) + sc_bigint<14>(sext_ln703_1640_fu_5086628_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_282_fu_5055587_p2() {
    add_ln703_282_fu_5055587_p2 = (!zext_ln203_18_fu_4995330_p1.read().is_01() || !sext_ln203_53_fu_4995748_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_18_fu_4995330_p1.read()) + sc_bigint<12>(sext_ln203_53_fu_4995748_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2830_fu_5086641_p2() {
    add_ln703_2830_fu_5086641_p2 = (!sext_ln203_486_fu_5080580_p1.read().is_01() || !sext_ln703_1641_fu_5086637_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_486_fu_5080580_p1.read()) + sc_bigint<15>(sext_ln703_1641_fu_5086637_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2831_fu_5072669_p2() {
    add_ln703_2831_fu_5072669_p2 = (!zext_ln203_178_fu_5036041_p1.read().is_01() || !sext_ln203_380_fu_5027930_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_178_fu_5036041_p1.read()) + sc_bigint<12>(sext_ln203_380_fu_5027930_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2832_fu_5072679_p2() {
    add_ln703_2832_fu_5072679_p2 = (!sext_ln203_487_fu_5036037_p1.read().is_01() || !sext_ln703_1642_fu_5072675_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_487_fu_5036037_p1.read()) + sc_bigint<13>(sext_ln703_1642_fu_5072675_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2833_fu_5086650_p2() {
    add_ln703_2833_fu_5086650_p2 = (!add_ln703_2830_fu_5086641_p2.read().is_01() || !sext_ln703_1643_fu_5086647_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2830_fu_5086641_p2.read()) + sc_bigint<15>(sext_ln703_1643_fu_5086647_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2834_fu_5072685_p2() {
    add_ln703_2834_fu_5072685_p2 = (!zext_ln203_631_fu_5034029_p1.read().is_01() || !zext_ln203_635_fu_5036061_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_631_fu_5034029_p1.read()) + sc_biguint<10>(zext_ln203_635_fu_5036061_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2835_fu_5072691_p2() {
    add_ln703_2835_fu_5072691_p2 = (!zext_ln203_626_fu_5031465_p1.read().is_01() || !add_ln703_2834_fu_5072685_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_626_fu_5031465_p1.read()) + sc_biguint<10>(add_ln703_2834_fu_5072685_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2836_fu_5072701_p2() {
    add_ln703_2836_fu_5072701_p2 = (!sext_ln203_484_fu_5036013_p1.read().is_01() || !zext_ln1118_2438_fu_5029528_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_484_fu_5036013_p1.read()) + sc_biguint<9>(zext_ln1118_2438_fu_5029528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2837_fu_5072711_p2() {
    add_ln703_2837_fu_5072711_p2 = (!sext_ln203_353_fu_5024621_p1.read().is_01() || !sext_ln703_1644_fu_5072707_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_353_fu_5024621_p1.read()) + sc_bigint<10>(sext_ln703_1644_fu_5072707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2838_fu_5072721_p2() {
    add_ln703_2838_fu_5072721_p2 = (!zext_ln703_487_fu_5072697_p1.read().is_01() || !sext_ln703_1645_fu_5072717_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_487_fu_5072697_p1.read()) + sc_bigint<12>(sext_ln703_1645_fu_5072717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_283_fu_5055597_p2() {
    add_ln703_283_fu_5055597_p2 = (!trunc_ln203_62_fu_4995424_p4.read().is_01() || !zext_ln708_1013_fu_4993036_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_62_fu_4995424_p4.read()) + sc_biguint<10>(zext_ln708_1013_fu_4993036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2840_fu_5072727_p2() {
    add_ln703_2840_fu_5072727_p2 = (!sext_ln1118_859_fu_5036081_p1.read().is_01() || !ap_const_lv10_360.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_859_fu_5036081_p1.read()) + sc_bigint<10>(ap_const_lv10_360));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2841_fu_5072733_p2() {
    add_ln703_2841_fu_5072733_p2 = (!zext_ln1118_2550_fu_5034711_p1.read().is_01() || !add_ln703_2840_fu_5072727_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2550_fu_5034711_p1.read()) + sc_biguint<10>(add_ln703_2840_fu_5072727_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2842_fu_5072743_p2() {
    add_ln703_2842_fu_5072743_p2 = (!sext_ln1118_843_fu_5035495_p1.read().is_01() || !sext_ln1118_860_fu_5036085_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_843_fu_5035495_p1.read()) + sc_bigint<9>(sext_ln1118_860_fu_5036085_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2843_fu_5072753_p2() {
    add_ln703_2843_fu_5072753_p2 = (!sext_ln703_1648_fu_5072739_p1.read().is_01() || !sext_ln703_1649_fu_5072749_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1648_fu_5072739_p1.read()) + sc_bigint<11>(sext_ln703_1649_fu_5072749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2844_fu_5072763_p2() {
    add_ln703_2844_fu_5072763_p2 = (!sext_ln1118_864_fu_5036143_p1.read().is_01() || !sext_ln1118_862_fu_5036109_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_864_fu_5036143_p1.read()) + sc_bigint<11>(sext_ln1118_862_fu_5036109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2845_fu_5072773_p2() {
    add_ln703_2845_fu_5072773_p2 = (!sext_ln703_1650_fu_5072759_p1.read().is_01() || !sext_ln703_1651_fu_5072769_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1650_fu_5072759_p1.read()) + sc_bigint<12>(sext_ln703_1651_fu_5072769_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2846_fu_5072783_p2() {
    add_ln703_2846_fu_5072783_p2 = (!zext_ln1118_2575_fu_5036147_p1.read().is_01() || !sext_ln1118_863_fu_5036129_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_2575_fu_5036147_p1.read()) + sc_bigint<11>(sext_ln1118_863_fu_5036129_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2847_fu_5072789_p2() {
    add_ln703_2847_fu_5072789_p2 = (!sext_ln708_204_fu_5032996_p1.read().is_01() || !add_ln703_2846_fu_5072783_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_204_fu_5032996_p1.read()) + sc_biguint<11>(add_ln703_2846_fu_5072783_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2848_fu_5072799_p2() {
    add_ln703_2848_fu_5072799_p2 = (!sext_ln703_1652_fu_5072779_p1.read().is_01() || !sext_ln703_1653_fu_5072795_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1652_fu_5072779_p1.read()) + sc_bigint<13>(sext_ln703_1653_fu_5072795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2849_fu_5072805_p2() {
    add_ln703_2849_fu_5072805_p2 = (!sext_ln1116_67_fu_5036199_p1.read().is_01() || !zext_ln708_1491_fu_5036151_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_67_fu_5036199_p1.read()) + sc_biguint<11>(zext_ln708_1491_fu_5036151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_284_fu_5055607_p2() {
    add_ln703_284_fu_5055607_p2 = (!sext_ln703_187_fu_5055593_p1.read().is_01() || !zext_ln703_68_fu_5055603_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_187_fu_5055593_p1.read()) + sc_biguint<13>(zext_ln703_68_fu_5055603_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2850_fu_5072815_p2() {
    add_ln703_2850_fu_5072815_p2 = (!add_ln703_2848_fu_5072799_p2.read().is_01() || !sext_ln703_1654_fu_5072811_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2848_fu_5072799_p2.read()) + sc_bigint<13>(sext_ln703_1654_fu_5072811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2851_fu_5072821_p2() {
    add_ln703_2851_fu_5072821_p2 = (!sext_ln708_232_fu_5036257_p1.read().is_01() || !sext_ln1118_849_fu_5035599_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_232_fu_5036257_p1.read()) + sc_bigint<10>(sext_ln1118_849_fu_5035599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2852_fu_5072831_p2() {
    add_ln703_2852_fu_5072831_p2 = (!sext_ln1118_866_fu_5036233_p1.read().is_01() || !sext_ln703_1656_fu_5072827_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_866_fu_5036233_p1.read()) + sc_bigint<11>(sext_ln703_1656_fu_5072827_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2853_fu_5086675_p2() {
    add_ln703_2853_fu_5086675_p2 = (!sext_ln703_1655_fu_5086669_p1.read().is_01() || !sext_ln703_1657_fu_5086672_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1655_fu_5086669_p1.read()) + sc_bigint<14>(sext_ln703_1657_fu_5086672_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2854_fu_5072837_p2() {
    add_ln703_2854_fu_5072837_p2 = (!zext_ln708_1014_fu_5036165_p1.read().is_01() || !sext_ln1118_867_fu_5036237_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1014_fu_5036165_p1.read()) + sc_bigint<9>(sext_ln1118_867_fu_5036237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2855_fu_5072847_p2() {
    add_ln703_2855_fu_5072847_p2 = (!sext_ln1116_68_fu_5036219_p1.read().is_01() || !sext_ln703_1658_fu_5072843_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_68_fu_5036219_p1.read()) + sc_bigint<10>(sext_ln703_1658_fu_5072843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2856_fu_5072853_p2() {
    add_ln703_2856_fu_5072853_p2 = (!sext_ln1118_638_fu_5024257_p1.read().is_01() || !zext_ln708_1492_fu_5036271_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_638_fu_5024257_p1.read()) + sc_biguint<8>(zext_ln708_1492_fu_5036271_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2857_fu_5072863_p2() {
    add_ln703_2857_fu_5072863_p2 = (!zext_ln1118_2576_fu_5036169_p1.read().is_01() || !sext_ln703_1659_fu_5072859_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2576_fu_5036169_p1.read()) + sc_bigint<9>(sext_ln703_1659_fu_5072859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2858_fu_5072873_p2() {
    add_ln703_2858_fu_5072873_p2 = (!add_ln703_2855_fu_5072847_p2.read().is_01() || !sext_ln703_1660_fu_5072869_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2855_fu_5072847_p2.read()) + sc_bigint<10>(sext_ln703_1660_fu_5072869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2859_fu_5086684_p2() {
    add_ln703_2859_fu_5086684_p2 = (!add_ln703_2853_fu_5086675_p2.read().is_01() || !sext_ln703_1661_fu_5086681_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2853_fu_5086675_p2.read()) + sc_bigint<14>(sext_ln703_1661_fu_5086681_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_285_fu_5055617_p2() {
    add_ln703_285_fu_5055617_p2 = (!add_ln703_281_fu_5055581_p2.read().is_01() || !sext_ln703_188_fu_5055613_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_281_fu_5055581_p2.read()) + sc_bigint<16>(sext_ln703_188_fu_5055613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2860_fu_5072879_p2() {
    add_ln703_2860_fu_5072879_p2 = (!zext_ln203_179_fu_5036291_p1.read().is_01() || !sext_ln203_492_fu_5036335_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_179_fu_5036291_p1.read()) + sc_bigint<12>(sext_ln203_492_fu_5036335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2861_fu_5086693_p2() {
    add_ln703_2861_fu_5086693_p2 = (!add_ln703_2859_fu_5086684_p2.read().is_01() || !sext_ln703_1662_fu_5086690_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2859_fu_5086684_p2.read()) + sc_bigint<14>(sext_ln703_1662_fu_5086690_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2862_fu_5072885_p2() {
    add_ln703_2862_fu_5072885_p2 = (!sext_ln203_494_fu_5036383_p1.read().is_01() || !sext_ln203_493_fu_5036363_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_494_fu_5036383_p1.read()) + sc_bigint<11>(sext_ln203_493_fu_5036363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2863_fu_5072895_p2() {
    add_ln703_2863_fu_5072895_p2 = (!sext_ln203_403_fu_5030068_p1.read().is_01() || !sext_ln703_1663_fu_5072891_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_403_fu_5030068_p1.read()) + sc_bigint<12>(sext_ln703_1663_fu_5072891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2864_fu_5086702_p2() {
    add_ln703_2864_fu_5086702_p2 = (!add_ln703_2861_fu_5086693_p2.read().is_01() || !sext_ln703_1664_fu_5086699_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2861_fu_5086693_p2.read()) + sc_bigint<14>(sext_ln703_1664_fu_5086699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2865_fu_5072901_p2() {
    add_ln703_2865_fu_5072901_p2 = (!sext_ln203_491_fu_5036315_p1.read().is_01() || !sext_ln1118_795_fu_5033861_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_491_fu_5036315_p1.read()) + sc_bigint<10>(sext_ln1118_795_fu_5033861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2866_fu_5072911_p2() {
    add_ln703_2866_fu_5072911_p2 = (!sext_ln203_497_fu_5036421_p1.read().is_01() || !sext_ln703_1666_fu_5072907_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_497_fu_5036421_p1.read()) + sc_bigint<11>(sext_ln703_1666_fu_5072907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2867_fu_5072921_p2() {
    add_ln703_2867_fu_5072921_p2 = (!zext_ln708_1015_fu_5036295_p1.read().is_01() || !sext_ln203_496_fu_5036407_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1015_fu_5036295_p1.read()) + sc_bigint<10>(sext_ln203_496_fu_5036407_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2868_fu_5072931_p2() {
    add_ln703_2868_fu_5072931_p2 = (!sext_ln203_495_fu_5036387_p1.read().is_01() || !zext_ln708_760_fu_5024713_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_495_fu_5036387_p1.read()) + sc_biguint<10>(zext_ln708_760_fu_5024713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2869_fu_5072941_p2() {
    add_ln703_2869_fu_5072941_p2 = (!sext_ln703_1668_fu_5072927_p1.read().is_01() || !sext_ln703_1669_fu_5072937_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1668_fu_5072927_p1.read()) + sc_bigint<11>(sext_ln703_1669_fu_5072937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_286_fu_5055623_p2() {
    add_ln703_286_fu_5055623_p2 = (!zext_ln203_522_fu_4995560_p1.read().is_01() || !zext_ln203_521_fu_4995528_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_522_fu_4995560_p1.read()) + sc_biguint<10>(zext_ln203_521_fu_4995528_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2870_fu_5072951_p2() {
    add_ln703_2870_fu_5072951_p2 = (!sext_ln703_1667_fu_5072917_p1.read().is_01() || !sext_ln703_1670_fu_5072947_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1667_fu_5072917_p1.read()) + sc_bigint<12>(sext_ln703_1670_fu_5072947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2872_fu_5072957_p2() {
    add_ln703_2872_fu_5072957_p2 = (!zext_ln708_1481_fu_5035101_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1481_fu_5035101_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2873_fu_5072967_p2() {
    add_ln703_2873_fu_5072967_p2 = (!sext_ln203_498_fu_5036425_p1.read().is_01() || !sext_ln703_375_fu_5072963_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_498_fu_5036425_p1.read()) + sc_bigint<12>(sext_ln703_375_fu_5072963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2874_fu_5072977_p2() {
    add_ln703_2874_fu_5072977_p2 = (!sext_ln1118_842_fu_5035491_p1.read().is_01() || !sext_ln1118_629_fu_5023249_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_842_fu_5035491_p1.read()) + sc_bigint<12>(sext_ln1118_629_fu_5023249_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2875_fu_5072987_p2() {
    add_ln703_2875_fu_5072987_p2 = (!sext_ln703_376_fu_5072973_p1.read().is_01() || !sext_ln703_1673_fu_5072983_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_376_fu_5072973_p1.read()) + sc_bigint<13>(sext_ln703_1673_fu_5072983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2876_fu_5072993_p2() {
    add_ln703_2876_fu_5072993_p2 = (!zext_ln1118_2478_fu_5031660_p1.read().is_01() || !sext_ln1118_872_fu_5036439_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2478_fu_5031660_p1.read()) + sc_bigint<12>(sext_ln1118_872_fu_5036439_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2877_fu_5073003_p2() {
    add_ln703_2877_fu_5073003_p2 = (!add_ln703_2875_fu_5072987_p2.read().is_01() || !sext_ln703_1674_fu_5072999_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2875_fu_5072987_p2.read()) + sc_bigint<13>(sext_ln703_1674_fu_5072999_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2878_fu_5073009_p2() {
    add_ln703_2878_fu_5073009_p2 = (!sext_ln1118_875_fu_5036463_p1.read().is_01() || !zext_ln708_1493_fu_5036483_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_875_fu_5036463_p1.read()) + sc_biguint<11>(zext_ln708_1493_fu_5036483_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_287_fu_5055633_p2() {
    add_ln703_287_fu_5055633_p2 = (!zext_ln203_524_fu_4995632_p1.read().is_01() || !zext_ln203_523_fu_4995608_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_524_fu_4995632_p1.read()) + sc_biguint<10>(zext_ln203_523_fu_4995608_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2880_fu_5073023_p2() {
    add_ln703_2880_fu_5073023_p2 = (!sext_ln703_1675_fu_5073015_p1.read().is_01() || !sext_ln703_1676_fu_5073019_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1675_fu_5073015_p1.read()) + sc_bigint<12>(sext_ln703_1676_fu_5073019_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2881_fu_5073033_p2() {
    add_ln703_2881_fu_5073033_p2 = (!add_ln703_2877_fu_5073003_p2.read().is_01() || !sext_ln703_1677_fu_5073029_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2877_fu_5073003_p2.read()) + sc_bigint<13>(sext_ln703_1677_fu_5073029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2882_fu_5073039_p2() {
    add_ln703_2882_fu_5073039_p2 = (!sext_ln1118_880_fu_5036645_p1.read().is_01() || !sext_ln708_233_fu_5036625_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_880_fu_5036645_p1.read()) + sc_bigint<12>(sext_ln708_233_fu_5036625_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2883_fu_5086731_p2() {
    add_ln703_2883_fu_5086731_p2 = (!sext_ln703_1678_fu_5086725_p1.read().is_01() || !sext_ln703_1679_fu_5086728_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1678_fu_5086725_p1.read()) + sc_bigint<14>(sext_ln703_1679_fu_5086728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2884_fu_5073045_p2() {
    add_ln703_2884_fu_5073045_p2 = (!zext_ln708_1495_fu_5036577_p1.read().is_01() || !zext_ln708_1494_fu_5036505_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1495_fu_5036577_p1.read()) + sc_biguint<10>(zext_ln708_1494_fu_5036505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2885_fu_5073055_p2() {
    add_ln703_2885_fu_5073055_p2 = (!zext_ln708_1497_fu_5036605_p1.read().is_01() || !zext_ln708_1496_fu_5036591_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1497_fu_5036605_p1.read()) + sc_biguint<11>(zext_ln708_1496_fu_5036591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2886_fu_5073065_p2() {
    add_ln703_2886_fu_5073065_p2 = (!zext_ln703_488_fu_5073051_p1.read().is_01() || !zext_ln703_489_fu_5073061_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_488_fu_5073051_p1.read()) + sc_biguint<12>(zext_ln703_489_fu_5073061_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2887_fu_5086740_p2() {
    add_ln703_2887_fu_5086740_p2 = (!add_ln703_2883_fu_5086731_p2.read().is_01() || !zext_ln703_490_fu_5086737_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2883_fu_5086731_p2.read()) + sc_biguint<14>(zext_ln703_490_fu_5086737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2888_fu_5073071_p2() {
    add_ln703_2888_fu_5073071_p2 = (!zext_ln708_1370_fu_5022941_p1.read().is_01() || !zext_ln708_1443_fu_5030927_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1370_fu_5022941_p1.read()) + sc_biguint<11>(zext_ln708_1443_fu_5030927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2889_fu_5073081_p2() {
    add_ln703_2889_fu_5073081_p2 = (!zext_ln708_1017_fu_5036509_p1.read().is_01() || !sext_ln1118_878_fu_5036533_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1017_fu_5036509_p1.read()) + sc_bigint<11>(sext_ln1118_878_fu_5036533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_288_fu_5055643_p2() {
    add_ln703_288_fu_5055643_p2 = (!zext_ln703_69_fu_5055629_p1.read().is_01() || !zext_ln703_70_fu_5055639_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_69_fu_5055629_p1.read()) + sc_biguint<11>(zext_ln703_70_fu_5055639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2890_fu_5073091_p2() {
    add_ln703_2890_fu_5073091_p2 = (!zext_ln703_491_fu_5073077_p1.read().is_01() || !sext_ln703_1681_fu_5073087_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_491_fu_5073077_p1.read()) + sc_bigint<13>(sext_ln703_1681_fu_5073087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2891_fu_5073097_p2() {
    add_ln703_2891_fu_5073097_p2 = (!zext_ln708_1417_fu_5027804_p1.read().is_01() || !zext_ln708_1384_fu_5024375_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1417_fu_5027804_p1.read()) + sc_biguint<8>(zext_ln708_1384_fu_5024375_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2892_fu_5073107_p2() {
    add_ln703_2892_fu_5073107_p2 = (!sext_ln1118_879_fu_5036553_p1.read().is_01() || !sext_ln1118_877_fu_5036491_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_879_fu_5036553_p1.read()) + sc_bigint<7>(sext_ln1118_877_fu_5036491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2893_fu_5073117_p2() {
    add_ln703_2893_fu_5073117_p2 = (!zext_ln703_492_fu_5073103_p1.read().is_01() || !sext_ln703_1682_fu_5073113_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_492_fu_5073103_p1.read()) + sc_bigint<10>(sext_ln703_1682_fu_5073113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2894_fu_5073127_p2() {
    add_ln703_2894_fu_5073127_p2 = (!add_ln703_2890_fu_5073091_p2.read().is_01() || !sext_ln703_1683_fu_5073123_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2890_fu_5073091_p2.read()) + sc_bigint<13>(sext_ln703_1683_fu_5073123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2895_fu_5086753_p2() {
    add_ln703_2895_fu_5086753_p2 = (!sext_ln703_1680_fu_5086746_p1.read().is_01() || !sext_ln703_1684_fu_5086750_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1680_fu_5086746_p1.read()) + sc_bigint<15>(sext_ln703_1684_fu_5086750_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2896_fu_5086759_p2() {
    add_ln703_2896_fu_5086759_p2 = (!zext_ln203_183_fu_5080583_p1.read().is_01() || !add_ln703_2895_fu_5086753_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_183_fu_5080583_p1.read()) + sc_biguint<15>(add_ln703_2895_fu_5086753_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2897_fu_5073133_p2() {
    add_ln703_2897_fu_5073133_p2 = (!zext_ln203_636_fu_5036675_p1.read().is_01() || !zext_ln203_592_fu_5022129_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_636_fu_5036675_p1.read()) + sc_biguint<10>(zext_ln203_592_fu_5022129_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2898_fu_5086768_p2() {
    add_ln703_2898_fu_5086768_p2 = (!add_ln703_2896_fu_5086759_p2.read().is_01() || !zext_ln703_493_fu_5086765_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2896_fu_5086759_p2.read()) + sc_biguint<15>(zext_ln703_493_fu_5086765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2899_fu_5073139_p2() {
    add_ln703_2899_fu_5073139_p2 = (!sext_ln203_499_fu_5036679_p1.read().is_01() || !zext_ln203_184_fu_5036723_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_499_fu_5036679_p1.read()) + sc_biguint<12>(zext_ln203_184_fu_5036723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_289_fu_5055653_p2() {
    add_ln703_289_fu_5055653_p2 = (!zext_ln708_1085_fu_4995724_p1.read().is_01() || !zext_ln708_1081_fu_4995656_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1085_fu_4995724_p1.read()) + sc_biguint<11>(zext_ln708_1081_fu_4995656_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_28_fu_5053843_p2() {
    add_ln703_28_fu_5053843_p2 = (!zext_ln203_1_fu_4989563_p1.read().is_01() || !trunc_ln203_38_fu_4989621_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_1_fu_4989563_p1.read()) + sc_biguint<10>(trunc_ln203_38_fu_4989621_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2900_fu_5073145_p2() {
    add_ln703_2900_fu_5073145_p2 = (!sext_ln203_500_fu_5036699_p1.read().is_01() || !zext_ln203_637_fu_5036719_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_500_fu_5036699_p1.read()) + sc_biguint<9>(zext_ln203_637_fu_5036719_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2901_fu_5073155_p2() {
    add_ln703_2901_fu_5073155_p2 = (!add_ln703_2899_fu_5073139_p2.read().is_01() || !sext_ln703_1685_fu_5073151_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2899_fu_5073139_p2.read()) + sc_bigint<12>(sext_ln703_1685_fu_5073151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2903_fu_5073161_p2() {
    add_ln703_2903_fu_5073161_p2 = (!zext_ln203_185_fu_5036727_p1.read().is_01() || !ap_const_lv10_3C0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_185_fu_5036727_p1.read()) + sc_bigint<10>(ap_const_lv10_3C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2904_fu_5073171_p2() {
    add_ln703_2904_fu_5073171_p2 = (!sext_ln203_372_fu_5027374_p1.read().is_01() || !sext_ln703_1688_fu_5073167_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_372_fu_5027374_p1.read()) + sc_bigint<11>(sext_ln703_1688_fu_5073167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2905_fu_5073181_p2() {
    add_ln703_2905_fu_5073181_p2 = (!zext_ln203_186_fu_5036763_p1.read().is_01() || !sext_ln703_1689_fu_5073177_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_186_fu_5036763_p1.read()) + sc_bigint<12>(sext_ln703_1689_fu_5073177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2906_fu_5073191_p2() {
    add_ln703_2906_fu_5073191_p2 = (!sext_ln1118_824_fu_5034745_p1.read().is_01() || !zext_ln708_1498_fu_5036787_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_824_fu_5034745_p1.read()) + sc_biguint<11>(zext_ln708_1498_fu_5036787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2907_fu_5073201_p2() {
    add_ln703_2907_fu_5073201_p2 = (!sext_ln703_381_fu_5073187_p1.read().is_01() || !sext_ln703_1690_fu_5073197_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_381_fu_5073187_p1.read()) + sc_bigint<13>(sext_ln703_1690_fu_5073197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2908_fu_5073211_p2() {
    add_ln703_2908_fu_5073211_p2 = (!sext_ln708_236_fu_5036877_p1.read().is_01() || !sext_ln1118_882_fu_5036819_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_236_fu_5036877_p1.read()) + sc_bigint<12>(sext_ln1118_882_fu_5036819_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2909_fu_5073221_p2() {
    add_ln703_2909_fu_5073221_p2 = (!sext_ln703_382_fu_5073207_p1.read().is_01() || !sext_ln703_1691_fu_5073217_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_382_fu_5073207_p1.read()) + sc_bigint<14>(sext_ln703_1691_fu_5073217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_290_fu_5055663_p2() {
    add_ln703_290_fu_5055663_p2 = (!zext_ln203_525_fu_4995784_p1.read().is_01() || !zext_ln203_503_fu_4990363_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_525_fu_4995784_p1.read()) + sc_biguint<10>(zext_ln203_503_fu_4990363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2910_fu_5073227_p2() {
    add_ln703_2910_fu_5073227_p2 = (!zext_ln1118_2579_fu_5036487_p1.read().is_01() || !sext_ln708_161_fu_5021451_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2579_fu_5036487_p1.read()) + sc_bigint<12>(sext_ln708_161_fu_5021451_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2911_fu_5073233_p2() {
    add_ln703_2911_fu_5073233_p2 = (!zext_ln1118_2583_fu_5036853_p1.read().is_01() || !sext_ln708_235_fu_5036839_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2583_fu_5036853_p1.read()) + sc_bigint<9>(sext_ln708_235_fu_5036839_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2912_fu_5073243_p2() {
    add_ln703_2912_fu_5073243_p2 = (!add_ln703_2910_fu_5073227_p2.read().is_01() || !sext_ln703_1692_fu_5073239_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2910_fu_5073227_p2.read()) + sc_bigint<12>(sext_ln703_1692_fu_5073239_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2913_fu_5086790_p2() {
    add_ln703_2913_fu_5086790_p2 = (!add_ln703_2909_reg_5093364.read().is_01() || !sext_ln703_1693_fu_5086787_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2909_reg_5093364.read()) + sc_bigint<14>(sext_ln703_1693_fu_5086787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2914_fu_5086795_p2() {
    add_ln703_2914_fu_5086795_p2 = (!zext_ln1118_2584_fu_5080586_p1.read().is_01() || !add_ln703_2913_fu_5086790_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln1118_2584_fu_5080586_p1.read()) + sc_biguint<14>(add_ln703_2913_fu_5086790_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2915_fu_5073249_p2() {
    add_ln703_2915_fu_5073249_p2 = (!zext_ln1118_2586_fu_5036935_p1.read().is_01() || !sext_ln1118_890_fu_5036967_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2586_fu_5036935_p1.read()) + sc_bigint<12>(sext_ln1118_890_fu_5036967_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2916_fu_5073259_p2() {
    add_ln703_2916_fu_5073259_p2 = (!sext_ln1118_886_fu_5036911_p1.read().is_01() || !sext_ln703_1695_fu_5073255_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_886_fu_5036911_p1.read()) + sc_bigint<13>(sext_ln703_1695_fu_5073255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2917_fu_5086808_p2() {
    add_ln703_2917_fu_5086808_p2 = (!sext_ln703_1694_fu_5086801_p1.read().is_01() || !sext_ln703_1696_fu_5086805_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1694_fu_5086801_p1.read()) + sc_bigint<15>(sext_ln703_1696_fu_5086805_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2918_fu_5073265_p2() {
    add_ln703_2918_fu_5073265_p2 = (!sext_ln1118_887_fu_5036931_p1.read().is_01() || !sext_ln1118_668_fu_5026370_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_887_fu_5036931_p1.read()) + sc_bigint<11>(sext_ln1118_668_fu_5026370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2919_fu_5073275_p2() {
    add_ln703_2919_fu_5073275_p2 = (!zext_ln1118_2588_fu_5036971_p1.read().is_01() || !sext_ln703_1697_fu_5073271_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2588_fu_5036971_p1.read()) + sc_bigint<12>(sext_ln703_1697_fu_5073271_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_291_fu_5055673_p2() {
    add_ln703_291_fu_5055673_p2 = (!zext_ln703_72_fu_5055659_p1.read().is_01() || !zext_ln703_73_fu_5055669_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_72_fu_5055659_p1.read()) + sc_biguint<12>(zext_ln703_73_fu_5055669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2920_fu_5073281_p2() {
    add_ln703_2920_fu_5073281_p2 = (!sext_ln708_237_fu_5036939_p1.read().is_01() || !zext_ln1118_2587_fu_5036953_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_237_fu_5036939_p1.read()) + sc_biguint<9>(zext_ln1118_2587_fu_5036953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2921_fu_5073291_p2() {
    add_ln703_2921_fu_5073291_p2 = (!sext_ln708_162_fu_5021684_p1.read().is_01() || !sext_ln703_1698_fu_5073287_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_162_fu_5021684_p1.read()) + sc_bigint<11>(sext_ln703_1698_fu_5073287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2922_fu_5073301_p2() {
    add_ln703_2922_fu_5073301_p2 = (!add_ln703_2919_fu_5073275_p2.read().is_01() || !sext_ln703_1699_fu_5073297_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2919_fu_5073275_p2.read()) + sc_bigint<12>(sext_ln703_1699_fu_5073297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2923_fu_5086817_p2() {
    add_ln703_2923_fu_5086817_p2 = (!add_ln703_2917_fu_5086808_p2.read().is_01() || !sext_ln703_1700_fu_5086814_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2917_fu_5086808_p2.read()) + sc_bigint<15>(sext_ln703_1700_fu_5086814_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2924_fu_5086823_p2() {
    add_ln703_2924_fu_5086823_p2 = (!sext_ln203_501_fu_5080589_p1.read().is_01() || !add_ln703_2923_fu_5086817_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_501_fu_5080589_p1.read()) + sc_biguint<15>(add_ln703_2923_fu_5086817_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2925_fu_5073307_p2() {
    add_ln703_2925_fu_5073307_p2 = (!zext_ln708_1500_fu_5037049_p1.read().is_01() || !zext_ln708_1499_fu_5037035_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1500_fu_5037049_p1.read()) + sc_biguint<11>(zext_ln708_1499_fu_5037035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2926_fu_5073317_p2() {
    add_ln703_2926_fu_5073317_p2 = (!sext_ln203_502_fu_5037015_p1.read().is_01() || !zext_ln703_494_fu_5073313_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_502_fu_5037015_p1.read()) + sc_biguint<13>(zext_ln703_494_fu_5073313_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2927_fu_5086832_p2() {
    add_ln703_2927_fu_5086832_p2 = (!add_ln703_2924_fu_5086823_p2.read().is_01() || !sext_ln703_1701_fu_5086829_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2924_fu_5086823_p2.read()) + sc_bigint<15>(sext_ln703_1701_fu_5086829_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2928_fu_5073323_p2() {
    add_ln703_2928_fu_5073323_p2 = (!sext_ln203_503_fu_5037069_p1.read().is_01() || !zext_ln708_1445_fu_5031103_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_503_fu_5037069_p1.read()) + sc_biguint<11>(zext_ln708_1445_fu_5031103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2929_fu_5073333_p2() {
    add_ln703_2929_fu_5073333_p2 = (!zext_ln203_187_fu_5037073_p1.read().is_01() || !sext_ln703_1703_fu_5073329_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_187_fu_5037073_p1.read()) + sc_bigint<12>(sext_ln703_1703_fu_5073329_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_292_fu_5055679_p2() {
    add_ln703_292_fu_5055679_p2 = (!zext_ln703_71_fu_5055649_p1.read().is_01() || !add_ln703_291_fu_5055673_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_71_fu_5055649_p1.read()) + sc_biguint<12>(add_ln703_291_fu_5055673_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2930_fu_5073339_p2() {
    add_ln703_2930_fu_5073339_p2 = (!zext_ln203_171_fu_5035041_p1.read().is_01() || !zext_ln1118_921_fu_5022167_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_171_fu_5035041_p1.read()) + sc_biguint<9>(zext_ln1118_921_fu_5022167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2931_fu_5073349_p2() {
    add_ln703_2931_fu_5073349_p2 = (!sext_ln203_474_fu_5035411_p1.read().is_01() || !zext_ln703_495_fu_5073345_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_474_fu_5035411_p1.read()) + sc_biguint<11>(zext_ln703_495_fu_5073345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2932_fu_5073359_p2() {
    add_ln703_2932_fu_5073359_p2 = (!add_ln703_2929_fu_5073333_p2.read().is_01() || !sext_ln703_1704_fu_5073355_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2929_fu_5073333_p2.read()) + sc_bigint<12>(sext_ln703_1704_fu_5073355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2934_fu_5073365_p2() {
    add_ln703_2934_fu_5073365_p2 = (!sext_ln1118_611_fu_5022417_p1.read().is_01() || !zext_ln1118_2591_fu_5037113_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_611_fu_5022417_p1.read()) + sc_biguint<10>(zext_ln1118_2591_fu_5037113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2935_fu_5073375_p2() {
    add_ln703_2935_fu_5073375_p2 = (!zext_ln708_1501_fu_5037093_p1.read().is_01() || !sext_ln703_1706_fu_5073371_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1501_fu_5037093_p1.read()) + sc_bigint<11>(sext_ln703_1706_fu_5073371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2936_fu_5073385_p2() {
    add_ln703_2936_fu_5073385_p2 = (!zext_ln1118_2592_fu_5037131_p1.read().is_01() || !sext_ln703_1707_fu_5073381_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2592_fu_5037131_p1.read()) + sc_bigint<12>(sext_ln703_1707_fu_5073381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2937_fu_5073391_p2() {
    add_ln703_2937_fu_5073391_p2 = (!zext_ln708_1371_fu_5023299_p1.read().is_01() || !zext_ln708_1502_fu_5037127_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1371_fu_5023299_p1.read()) + sc_biguint<8>(zext_ln708_1502_fu_5037127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2938_fu_5073401_p2() {
    add_ln703_2938_fu_5073401_p2 = (!sext_ln1118_791_fu_5033721_p1.read().is_01() || !zext_ln703_496_fu_5073397_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_791_fu_5033721_p1.read()) + sc_biguint<11>(zext_ln703_496_fu_5073397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2939_fu_5073411_p2() {
    add_ln703_2939_fu_5073411_p2 = (!add_ln703_2936_fu_5073385_p2.read().is_01() || !sext_ln703_1708_fu_5073407_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2936_fu_5073385_p2.read()) + sc_bigint<12>(sext_ln703_1708_fu_5073407_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_293_fu_5081321_p2() {
    add_ln703_293_fu_5081321_p2 = (!add_ln703_285_reg_5090814.read().is_01() || !zext_ln703_74_fu_5081318_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_285_reg_5090814.read()) + sc_biguint<16>(zext_ln703_74_fu_5081318_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2940_fu_5073421_p2() {
    add_ln703_2940_fu_5073421_p2 = (!zext_ln708_1031_fu_5037171_p1.read().is_01() || !sext_ln703_1709_fu_5073417_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_1031_fu_5037171_p1.read()) + sc_bigint<13>(sext_ln703_1709_fu_5073417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2941_fu_5073427_p2() {
    add_ln703_2941_fu_5073427_p2 = (!zext_ln1118_2594_fu_5037199_p1.read().is_01() || !zext_ln1118_2593_fu_5037191_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2594_fu_5037199_p1.read()) + sc_biguint<9>(zext_ln1118_2593_fu_5037191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2942_fu_5086854_p2() {
    add_ln703_2942_fu_5086854_p2 = (!add_ln703_2940_reg_5093394.read().is_01() || !zext_ln703_497_fu_5086851_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2940_reg_5093394.read()) + sc_biguint<13>(zext_ln703_497_fu_5086851_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2943_fu_5073433_p2() {
    add_ln703_2943_fu_5073433_p2 = (!sext_ln1118_892_fu_5037151_p1.read().is_01() || !zext_ln708_1406_fu_5026918_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_892_fu_5037151_p1.read()) + sc_biguint<10>(zext_ln708_1406_fu_5026918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2944_fu_5073443_p2() {
    add_ln703_2944_fu_5073443_p2 = (!sext_ln1118_893_fu_5037195_p1.read().is_01() || !sext_ln1118_778_fu_5033098_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_893_fu_5037195_p1.read()) + sc_bigint<10>(sext_ln1118_778_fu_5033098_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2945_fu_5073453_p2() {
    add_ln703_2945_fu_5073453_p2 = (!sext_ln703_1710_fu_5073439_p1.read().is_01() || !sext_ln703_1711_fu_5073449_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1710_fu_5073439_p1.read()) + sc_bigint<11>(sext_ln703_1711_fu_5073449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2946_fu_5086862_p2() {
    add_ln703_2946_fu_5086862_p2 = (!add_ln703_2942_fu_5086854_p2.read().is_01() || !sext_ln703_1712_fu_5086859_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2942_fu_5086854_p2.read()) + sc_bigint<13>(sext_ln703_1712_fu_5086859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2947_fu_5073459_p2() {
    add_ln703_2947_fu_5073459_p2 = (!zext_ln1118_2595_fu_5037227_p1.read().is_01() || !sext_ln1118_895_fu_5037213_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2595_fu_5037227_p1.read()) + sc_bigint<12>(sext_ln1118_895_fu_5037213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2948_fu_5086875_p2() {
    add_ln703_2948_fu_5086875_p2 = (!sext_ln703_1713_fu_5086868_p1.read().is_01() || !sext_ln703_1714_fu_5086872_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1713_fu_5086868_p1.read()) + sc_bigint<14>(sext_ln703_1714_fu_5086872_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2949_fu_5073465_p2() {
    add_ln703_2949_fu_5073465_p2 = (!zext_ln1118_2596_fu_5037247_p1.read().is_01() || !tmp_1584_fu_5035633_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2596_fu_5037247_p1.read()) + sc_biguint<10>(tmp_1584_fu_5035633_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_294_fu_5055685_p2() {
    add_ln703_294_fu_5055685_p2 = (!sext_ln203_48_fu_4995420_p1.read().is_01() || !sext_ln1118_fu_4988456_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_48_fu_4995420_p1.read()) + sc_bigint<11>(sext_ln1118_fu_4988456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2950_fu_5073475_p2() {
    add_ln703_2950_fu_5073475_p2 = (!zext_ln1118_2597_fu_5037251_p1.read().is_01() || !zext_ln1116_227_fu_5030036_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2597_fu_5037251_p1.read()) + sc_biguint<10>(zext_ln1116_227_fu_5030036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2951_fu_5073485_p2() {
    add_ln703_2951_fu_5073485_p2 = (!zext_ln703_498_fu_5073471_p1.read().is_01() || !zext_ln703_499_fu_5073481_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_498_fu_5073471_p1.read()) + sc_biguint<11>(zext_ln703_499_fu_5073481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2952_fu_5086884_p2() {
    add_ln703_2952_fu_5086884_p2 = (!add_ln703_2948_fu_5086875_p2.read().is_01() || !zext_ln703_500_fu_5086881_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2948_fu_5086875_p2.read()) + sc_biguint<14>(zext_ln703_500_fu_5086881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2953_fu_5073491_p2() {
    add_ln703_2953_fu_5073491_p2 = (!sext_ln708_239_fu_5037283_p1.read().is_01() || !zext_ln1118_2600_fu_5037297_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_239_fu_5037283_p1.read()) + sc_biguint<12>(zext_ln1118_2600_fu_5037297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2954_fu_5073497_p2() {
    add_ln703_2954_fu_5073497_p2 = (!zext_ln1118_2598_fu_5037255_p1.read().is_01() || !add_ln703_2953_fu_5073491_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2598_fu_5037255_p1.read()) + sc_biguint<12>(add_ln703_2953_fu_5073491_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2955_fu_5073507_p2() {
    add_ln703_2955_fu_5073507_p2 = (!sext_ln1116_52_fu_5029988_p1.read().is_01() || !sext_ln708_184_fu_5029476_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_52_fu_5029988_p1.read()) + sc_bigint<10>(sext_ln708_184_fu_5029476_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2956_fu_5073513_p2() {
    add_ln703_2956_fu_5073513_p2 = (!sext_ln708_217_fu_5034607_p1.read().is_01() || !sext_ln1118_749_fu_5031810_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_217_fu_5034607_p1.read()) + sc_bigint<8>(sext_ln1118_749_fu_5031810_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2957_fu_5073523_p2() {
    add_ln703_2957_fu_5073523_p2 = (!add_ln703_2955_fu_5073507_p2.read().is_01() || !sext_ln703_1717_fu_5073519_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2955_fu_5073507_p2.read()) + sc_bigint<10>(sext_ln703_1717_fu_5073519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2958_fu_5073533_p2() {
    add_ln703_2958_fu_5073533_p2 = (!sext_ln703_1716_fu_5073503_p1.read().is_01() || !sext_ln703_1718_fu_5073529_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1716_fu_5073503_p1.read()) + sc_bigint<13>(sext_ln703_1718_fu_5073529_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2959_fu_5086897_p2() {
    add_ln703_2959_fu_5086897_p2 = (!sext_ln703_1715_fu_5086890_p1.read().is_01() || !sext_ln703_1719_fu_5086894_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1715_fu_5086890_p1.read()) + sc_bigint<15>(sext_ln703_1719_fu_5086894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_295_fu_5055695_p2() {
    add_ln703_295_fu_5055695_p2 = (!zext_ln203_21_fu_4995804_p1.read().is_01() || !sext_ln703_189_fu_5055691_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_21_fu_4995804_p1.read()) + sc_bigint<12>(sext_ln703_189_fu_5055691_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2960_fu_5086903_p2() {
    add_ln703_2960_fu_5086903_p2 = (!sext_ln203_505_fu_5080592_p1.read().is_01() || !add_ln703_2959_fu_5086897_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_505_fu_5080592_p1.read()) + sc_biguint<15>(add_ln703_2959_fu_5086897_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2961_fu_5073539_p2() {
    add_ln703_2961_fu_5073539_p2 = (!zext_ln203_188_fu_5037315_p1.read().is_01() || !sext_ln203_346_fu_5023179_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_188_fu_5037315_p1.read()) + sc_bigint<11>(sext_ln203_346_fu_5023179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2962_fu_5073549_p2() {
    add_ln703_2962_fu_5073549_p2 = (!sext_ln203_504_fu_5037311_p1.read().is_01() || !sext_ln703_1720_fu_5073545_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_504_fu_5037311_p1.read()) + sc_bigint<12>(sext_ln703_1720_fu_5073545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2964_fu_5073555_p2() {
    add_ln703_2964_fu_5073555_p2 = (!zext_ln708_1504_fu_5037404_p1.read().is_01() || !ap_const_lv11_4A0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1504_fu_5037404_p1.read()) + sc_bigint<11>(ap_const_lv11_4A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2965_fu_5073561_p2() {
    add_ln703_2965_fu_5073561_p2 = (!zext_ln708_1503_fu_5037371_p1.read().is_01() || !add_ln703_2964_fu_5073555_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1503_fu_5037371_p1.read()) + sc_biguint<11>(add_ln703_2964_fu_5073555_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2966_fu_5073571_p2() {
    add_ln703_2966_fu_5073571_p2 = (!sext_ln203_507_fu_5037456_p1.read().is_01() || !sext_ln703_389_fu_5073567_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_507_fu_5037456_p1.read()) + sc_bigint<12>(sext_ln703_389_fu_5073567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2967_fu_5073577_p2() {
    add_ln703_2967_fu_5073577_p2 = (!zext_ln1118_2615_fu_5037664_p1.read().is_01() || !add_ln703_2966_fu_5073571_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2615_fu_5037664_p1.read()) + sc_biguint<12>(add_ln703_2966_fu_5073571_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2968_fu_5073583_p2() {
    add_ln703_2968_fu_5073583_p2 = (!sext_ln708_240_fu_5037614_p1.read().is_01() || !zext_ln1116_230_fu_5037566_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_240_fu_5037614_p1.read()) + sc_biguint<9>(zext_ln1116_230_fu_5037566_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2969_fu_5073593_p2() {
    add_ln703_2969_fu_5073593_p2 = (!sext_ln1118_903_fu_5037530_p1.read().is_01() || !sext_ln703_1723_fu_5073589_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_903_fu_5037530_p1.read()) + sc_bigint<11>(sext_ln703_1723_fu_5073589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_296_fu_5055705_p2() {
    add_ln703_296_fu_5055705_p2 = (!sext_ln203_47_fu_4995368_p1.read().is_01() || !zext_ln708_1075_fu_4995450_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_47_fu_4995368_p1.read()) + sc_biguint<10>(zext_ln708_1075_fu_4995450_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2970_fu_5073603_p2() {
    add_ln703_2970_fu_5073603_p2 = (!add_ln703_2967_fu_5073577_p2.read().is_01() || !sext_ln703_1724_fu_5073599_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2967_fu_5073577_p2.read()) + sc_bigint<12>(sext_ln703_1724_fu_5073599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2971_fu_5073609_p2() {
    add_ln703_2971_fu_5073609_p2 = (!sext_ln1116_69_fu_5037864_p1.read().is_01() || !sext_ln708_241_fu_5037809_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_69_fu_5037864_p1.read()) + sc_bigint<12>(sext_ln708_241_fu_5037809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2972_fu_5086928_p2() {
    add_ln703_2972_fu_5086928_p2 = (!sext_ln703_1725_fu_5086922_p1.read().is_01() || !sext_ln703_1726_fu_5086925_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1725_fu_5086922_p1.read()) + sc_bigint<13>(sext_ln703_1726_fu_5086925_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2973_fu_5073615_p2() {
    add_ln703_2973_fu_5073615_p2 = (!zext_ln1116_194_fu_5037720_p1.read().is_01() || !zext_ln1116_231_fu_5037782_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_194_fu_5037720_p1.read()) + sc_biguint<10>(zext_ln1116_231_fu_5037782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2974_fu_5073625_p2() {
    add_ln703_2974_fu_5073625_p2 = (!sext_ln1118_905_fu_5037704_p1.read().is_01() || !zext_ln708_1505_fu_5037842_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_905_fu_5037704_p1.read()) + sc_biguint<8>(zext_ln708_1505_fu_5037842_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2975_fu_5073635_p2() {
    add_ln703_2975_fu_5073635_p2 = (!zext_ln703_501_fu_5073621_p1.read().is_01() || !sext_ln703_1728_fu_5073631_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_501_fu_5073621_p1.read()) + sc_bigint<12>(sext_ln703_1728_fu_5073631_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2976_fu_5086941_p2() {
    add_ln703_2976_fu_5086941_p2 = (!sext_ln703_1727_fu_5086934_p1.read().is_01() || !sext_ln703_1729_fu_5086938_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1727_fu_5086934_p1.read()) + sc_bigint<14>(sext_ln703_1729_fu_5086938_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2977_fu_5073641_p2() {
    add_ln703_2977_fu_5073641_p2 = (!sext_ln1116_71_fu_5038206_p1.read().is_01() || !sext_ln1118_907_fu_5037981_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_71_fu_5038206_p1.read()) + sc_bigint<12>(sext_ln1118_907_fu_5037981_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2978_fu_5086950_p2() {
    add_ln703_2978_fu_5086950_p2 = (!add_ln703_2976_fu_5086941_p2.read().is_01() || !sext_ln703_1730_fu_5086947_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2976_fu_5086941_p2.read()) + sc_bigint<14>(sext_ln703_1730_fu_5086947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2979_fu_5073647_p2() {
    add_ln703_2979_fu_5073647_p2 = (!zext_ln708_1507_fu_5038143_p1.read().is_01() || !zext_ln708_1506_fu_5038112_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1507_fu_5038143_p1.read()) + sc_biguint<11>(zext_ln708_1506_fu_5038112_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_297_fu_5055715_p2() {
    add_ln703_297_fu_5055715_p2 = (!sext_ln203_52_fu_4995696_p1.read().is_01() || !sext_ln203_49_fu_4995480_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_52_fu_4995696_p1.read()) + sc_bigint<10>(sext_ln203_49_fu_4995480_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2980_fu_5073657_p2() {
    add_ln703_2980_fu_5073657_p2 = (!sext_ln708_244_fu_5038241_p1.read().is_01() || !zext_ln703_502_fu_5073653_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln708_244_fu_5038241_p1.read()) + sc_biguint<13>(zext_ln703_502_fu_5073653_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2981_fu_5086963_p2() {
    add_ln703_2981_fu_5086963_p2 = (!sext_ln703_1731_fu_5086956_p1.read().is_01() || !sext_ln703_1732_fu_5086960_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1731_fu_5086956_p1.read()) + sc_bigint<15>(sext_ln703_1732_fu_5086960_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2982_fu_5073663_p2() {
    add_ln703_2982_fu_5073663_p2 = (!sext_ln708_243_fu_5038046_p1.read().is_01() || !zext_ln1116_201_fu_5038391_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_243_fu_5038046_p1.read()) + sc_biguint<12>(zext_ln1116_201_fu_5038391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2983_fu_5073669_p2() {
    add_ln703_2983_fu_5073669_p2 = (!zext_ln1118_2652_fu_5038327_p1.read().is_01() || !add_ln703_2982_fu_5073663_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2652_fu_5038327_p1.read()) + sc_biguint<12>(add_ln703_2982_fu_5073663_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2984_fu_5073679_p2() {
    add_ln703_2984_fu_5073679_p2 = (!sext_ln1118_909_fu_5038089_p1.read().is_01() || !zext_ln1118_2647_fu_5038275_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_909_fu_5038089_p1.read()) + sc_biguint<9>(zext_ln1118_2647_fu_5038275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2985_fu_5073689_p2() {
    add_ln703_2985_fu_5073689_p2 = (!sext_ln1116_70_fu_5037908_p1.read().is_01() || !sext_ln703_1734_fu_5073685_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_70_fu_5037908_p1.read()) + sc_bigint<10>(sext_ln703_1734_fu_5073685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2986_fu_5073699_p2() {
    add_ln703_2986_fu_5073699_p2 = (!sext_ln703_1733_fu_5073675_p1.read().is_01() || !sext_ln703_1735_fu_5073695_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1733_fu_5073675_p1.read()) + sc_bigint<13>(sext_ln703_1735_fu_5073695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2987_fu_5086972_p2() {
    add_ln703_2987_fu_5086972_p2 = (!add_ln703_2981_fu_5086963_p2.read().is_01() || !sext_ln703_1736_fu_5086969_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2981_fu_5086963_p2.read()) + sc_bigint<15>(sext_ln703_1736_fu_5086969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2988_fu_5086978_p2() {
    add_ln703_2988_fu_5086978_p2 = (!zext_ln203_189_fu_5080595_p1.read().is_01() || !add_ln703_2987_fu_5086972_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_189_fu_5080595_p1.read()) + sc_biguint<15>(add_ln703_2987_fu_5086972_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2989_fu_5073705_p2() {
    add_ln703_2989_fu_5073705_p2 = (!sext_ln203_509_fu_5038611_p1.read().is_01() || !sext_ln203_508_fu_5038565_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_509_fu_5038611_p1.read()) + sc_bigint<12>(sext_ln203_508_fu_5038565_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_298_fu_5055725_p2() {
    add_ln703_298_fu_5055725_p2 = (!sext_ln703_191_fu_5055711_p1.read().is_01() || !sext_ln703_195_fu_5055721_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_191_fu_5055711_p1.read()) + sc_bigint<11>(sext_ln703_195_fu_5055721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2990_fu_5086987_p2() {
    add_ln703_2990_fu_5086987_p2 = (!add_ln703_2988_fu_5086978_p2.read().is_01() || !sext_ln703_1737_fu_5086984_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2988_fu_5086978_p2.read()) + sc_bigint<15>(sext_ln703_1737_fu_5086984_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2991_fu_5073711_p2() {
    add_ln703_2991_fu_5073711_p2 = (!zext_ln203_639_fu_5038515_p1.read().is_01() || !zext_ln203_638_fu_5038487_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_639_fu_5038515_p1.read()) + sc_biguint<10>(zext_ln203_638_fu_5038487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2992_fu_5073721_p2() {
    add_ln703_2992_fu_5073721_p2 = (!zext_ln203_190_fu_5038637_p1.read().is_01() || !trunc_ln203_95_fu_5038695_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_190_fu_5038637_p1.read()) + sc_biguint<10>(trunc_ln203_95_fu_5038695_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2993_fu_5073731_p2() {
    add_ln703_2993_fu_5073731_p2 = (!zext_ln703_503_fu_5073717_p1.read().is_01() || !zext_ln703_504_fu_5073727_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_503_fu_5073717_p1.read()) + sc_biguint<11>(zext_ln703_504_fu_5073727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2995_fu_5073737_p2() {
    add_ln703_2995_fu_5073737_p2 = (!sext_ln1118_911_fu_5038743_p1.read().is_01() || !ap_const_lv10_140.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_911_fu_5038743_p1.read()) + sc_biguint<10>(ap_const_lv10_140));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2996_fu_5073743_p2() {
    add_ln703_2996_fu_5073743_p2 = (!zext_ln1118_2668_fu_5038789_p1.read().is_01() || !add_ln703_2995_fu_5073737_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2668_fu_5038789_p1.read()) + sc_biguint<10>(add_ln703_2995_fu_5073737_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2997_fu_5073753_p2() {
    add_ln703_2997_fu_5073753_p2 = (!sext_ln1118_912_fu_5038775_p1.read().is_01() || !sext_ln1118_914_fu_5038835_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_912_fu_5038775_p1.read()) + sc_bigint<10>(sext_ln1118_914_fu_5038835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2998_fu_5073763_p2() {
    add_ln703_2998_fu_5073763_p2 = (!zext_ln703_506_fu_5073749_p1.read().is_01() || !sext_ln703_1739_fu_5073759_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_506_fu_5073749_p1.read()) + sc_bigint<12>(sext_ln703_1739_fu_5073759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2999_fu_5073773_p2() {
    add_ln703_2999_fu_5073773_p2 = (!zext_ln1118_2672_fu_5038899_p1.read().is_01() || !sext_ln708_245_fu_5038885_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2672_fu_5038899_p1.read()) + sc_bigint<12>(sext_ln708_245_fu_5038885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_299_fu_5055735_p2() {
    add_ln703_299_fu_5055735_p2 = (!sext_ln703_190_fu_5055701_p1.read().is_01() || !sext_ln703_196_fu_5055731_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_190_fu_5055701_p1.read()) + sc_bigint<13>(sext_ln703_196_fu_5055731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_29_fu_5053853_p2() {
    add_ln703_29_fu_5053853_p2 = (!zext_ln703_5_fu_5053839_p1.read().is_01() || !zext_ln703_9_fu_5053849_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_5_fu_5053839_p1.read()) + sc_biguint<11>(zext_ln703_9_fu_5053849_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2_fu_5053693_p2() {
    add_ln703_2_fu_5053693_p2 = (!sext_ln203_fu_4988382_p1.read().is_01() || !sext_ln703_fu_5053689_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_fu_4988382_p1.read()) + sc_bigint<12>(sext_ln703_fu_5053689_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3000_fu_5073783_p2() {
    add_ln703_3000_fu_5073783_p2 = (!sext_ln703_1740_fu_5073769_p1.read().is_01() || !sext_ln703_1741_fu_5073779_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1740_fu_5073769_p1.read()) + sc_bigint<13>(sext_ln703_1741_fu_5073779_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3001_fu_5073789_p2() {
    add_ln703_3001_fu_5073789_p2 = (!sext_ln1118_917_fu_5038955_p1.read().is_01() || !zext_ln708_1510_fu_5038931_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_917_fu_5038955_p1.read()) + sc_biguint<11>(zext_ln708_1510_fu_5038931_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3002_fu_5073799_p2() {
    add_ln703_3002_fu_5073799_p2 = (!sext_ln1118_916_fu_5038871_p1.read().is_01() || !zext_ln1118_1340_fu_5037708_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_916_fu_5038871_p1.read()) + sc_biguint<10>(zext_ln1118_1340_fu_5037708_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3003_fu_5073809_p2() {
    add_ln703_3003_fu_5073809_p2 = (!sext_ln703_1743_fu_5073795_p1.read().is_01() || !sext_ln703_1744_fu_5073805_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1743_fu_5073795_p1.read()) + sc_bigint<12>(sext_ln703_1744_fu_5073805_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3004_fu_5087012_p2() {
    add_ln703_3004_fu_5087012_p2 = (!sext_ln703_1742_fu_5087006_p1.read().is_01() || !sext_ln703_1745_fu_5087009_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1742_fu_5087006_p1.read()) + sc_bigint<14>(sext_ln703_1745_fu_5087009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3005_fu_5087018_p2() {
    add_ln703_3005_fu_5087018_p2 = (!sext_ln1118_918_fu_5080598_p1.read().is_01() || !add_ln703_3004_fu_5087012_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_918_fu_5080598_p1.read()) + sc_biguint<14>(add_ln703_3004_fu_5087012_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3006_fu_5073815_p2() {
    add_ln703_3006_fu_5073815_p2 = (!sext_ln1118_921_fu_5039089_p1.read().is_01() || !sext_ln1118_920_fu_5039029_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_921_fu_5039089_p1.read()) + sc_bigint<12>(sext_ln1118_920_fu_5039029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3007_fu_5087027_p2() {
    add_ln703_3007_fu_5087027_p2 = (!add_ln703_3005_fu_5087018_p2.read().is_01() || !sext_ln703_1746_fu_5087024_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3005_fu_5087018_p2.read()) + sc_bigint<14>(sext_ln703_1746_fu_5087024_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3008_fu_5073821_p2() {
    add_ln703_3008_fu_5073821_p2 = (!sext_ln1118_919_fu_5039015_p1.read().is_01() || !zext_ln708_1511_fu_5039057_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_919_fu_5039015_p1.read()) + sc_biguint<11>(zext_ln708_1511_fu_5039057_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3009_fu_5073831_p2() {
    add_ln703_3009_fu_5073831_p2 = (!sext_ln1118_922_fu_5039121_p1.read().is_01() || !sext_ln1118_925_fu_5039195_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_922_fu_5039121_p1.read()) + sc_bigint<10>(sext_ln1118_925_fu_5039195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_300_fu_5055741_p2() {
    add_ln703_300_fu_5055741_p2 = (!zext_ln203_19_fu_4995344_p1.read().is_01() || !sext_ln1118_40_fu_4992099_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_19_fu_4995344_p1.read()) + sc_bigint<9>(sext_ln1118_40_fu_4992099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3010_fu_5073841_p2() {
    add_ln703_3010_fu_5073841_p2 = (!sext_ln1118_924_fu_5039163_p1.read().is_01() || !sext_ln703_1749_fu_5073837_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_924_fu_5039163_p1.read()) + sc_bigint<11>(sext_ln703_1749_fu_5073837_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3011_fu_5073851_p2() {
    add_ln703_3011_fu_5073851_p2 = (!sext_ln703_1748_fu_5073827_p1.read().is_01() || !sext_ln703_1750_fu_5073847_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1748_fu_5073827_p1.read()) + sc_bigint<12>(sext_ln703_1750_fu_5073847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3012_fu_5087040_p2() {
    add_ln703_3012_fu_5087040_p2 = (!sext_ln703_1747_fu_5087033_p1.read().is_01() || !sext_ln703_1751_fu_5087037_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1747_fu_5087033_p1.read()) + sc_bigint<15>(sext_ln703_1751_fu_5087037_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3013_fu_5073857_p2() {
    add_ln703_3013_fu_5073857_p2 = (!zext_ln203_191_fu_5039245_p1.read().is_01() || !sext_ln203_512_fu_5039333_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_191_fu_5039245_p1.read()) + sc_bigint<12>(sext_ln203_512_fu_5039333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3014_fu_5087049_p2() {
    add_ln703_3014_fu_5087049_p2 = (!add_ln703_3012_fu_5087040_p2.read().is_01() || !sext_ln703_1752_fu_5087046_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3012_fu_5087040_p2.read()) + sc_bigint<15>(sext_ln703_1752_fu_5087046_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3015_fu_5073863_p2() {
    add_ln703_3015_fu_5073863_p2 = (!zext_ln708_1509_fu_5038387_p1.read().is_01() || !zext_ln708_1513_fu_5039299_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1509_fu_5038387_p1.read()) + sc_biguint<11>(zext_ln708_1513_fu_5039299_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3016_fu_5073873_p2() {
    add_ln703_3016_fu_5073873_p2 = (!zext_ln203_641_fu_5039437_p1.read().is_01() || !zext_ln203_640_fu_5039353_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_641_fu_5039437_p1.read()) + sc_biguint<10>(zext_ln203_640_fu_5039353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3017_fu_5073883_p2() {
    add_ln703_3017_fu_5073883_p2 = (!zext_ln703_507_fu_5073869_p1.read().is_01() || !zext_ln703_508_fu_5073879_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_507_fu_5073869_p1.read()) + sc_biguint<12>(zext_ln703_508_fu_5073879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3018_fu_5087058_p2() {
    add_ln703_3018_fu_5087058_p2 = (!add_ln703_3014_fu_5087049_p2.read().is_01() || !zext_ln703_509_fu_5087055_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3014_fu_5087049_p2.read()) + sc_biguint<15>(zext_ln703_509_fu_5087055_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3019_fu_5073889_p2() {
    add_ln703_3019_fu_5073889_p2 = (!sext_ln203_515_fu_5039537_p1.read().is_01() || !sext_ln203_510_fu_5039209_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_515_fu_5039537_p1.read()) + sc_bigint<11>(sext_ln203_510_fu_5039209_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_301_fu_5055751_p2() {
    add_ln703_301_fu_5055751_p2 = (!zext_ln203_520_fu_4995386_p1.read().is_01() || !zext_ln203_519_fu_4995372_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln203_520_fu_4995386_p1.read()) + sc_biguint<7>(zext_ln203_519_fu_4995372_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3020_fu_5073899_p2() {
    add_ln703_3020_fu_5073899_p2 = (!zext_ln203_192_fu_5039495_p1.read().is_01() || !sext_ln703_1753_fu_5073895_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_192_fu_5039495_p1.read()) + sc_bigint<12>(sext_ln703_1753_fu_5073895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3021_fu_5073909_p2() {
    add_ln703_3021_fu_5073909_p2 = (!sext_ln203_514_fu_5039481_p1.read().is_01() || !sext_ln203_513_fu_5039397_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_514_fu_5039481_p1.read()) + sc_bigint<10>(sext_ln203_513_fu_5039397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3022_fu_5073919_p2() {
    add_ln703_3022_fu_5073919_p2 = (!sext_ln203_511_fu_5039319_p1.read().is_01() || !zext_ln708_1512_fu_5039259_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_511_fu_5039319_p1.read()) + sc_biguint<8>(zext_ln708_1512_fu_5039259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3023_fu_5073929_p2() {
    add_ln703_3023_fu_5073929_p2 = (!sext_ln703_1755_fu_5073915_p1.read().is_01() || !sext_ln703_1756_fu_5073925_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1755_fu_5073915_p1.read()) + sc_bigint<11>(sext_ln703_1756_fu_5073925_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3024_fu_5073939_p2() {
    add_ln703_3024_fu_5073939_p2 = (!sext_ln703_1754_fu_5073905_p1.read().is_01() || !sext_ln703_1757_fu_5073935_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1754_fu_5073905_p1.read()) + sc_bigint<13>(sext_ln703_1757_fu_5073935_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3026_fu_5073945_p2() {
    add_ln703_3026_fu_5073945_p2 = (!sext_ln1118_927_fu_5039551_p1.read().is_01() || !ap_const_lv11_7E0.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_927_fu_5039551_p1.read()) + sc_bigint<11>(ap_const_lv11_7E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3027_fu_5073955_p2() {
    add_ln703_3027_fu_5073955_p2 = (!zext_ln708_1067_fu_5039643_p1.read().is_01() || !sext_ln1118_930_fu_5039607_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_1067_fu_5039643_p1.read()) + sc_bigint<12>(sext_ln1118_930_fu_5039607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3028_fu_5073961_p2() {
    add_ln703_3028_fu_5073961_p2 = (!sext_ln703_1760_fu_5073951_p1.read().is_01() || !add_ln703_3027_fu_5073955_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1760_fu_5073951_p1.read()) + sc_biguint<12>(add_ln703_3027_fu_5073955_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3029_fu_5073971_p2() {
    add_ln703_3029_fu_5073971_p2 = (!zext_ln708_1068_fu_5039661_p1.read().is_01() || !sext_ln1118_929_fu_5039593_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1068_fu_5039661_p1.read()) + sc_bigint<10>(sext_ln1118_929_fu_5039593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_302_fu_5055761_p2() {
    add_ln703_302_fu_5055761_p2 = (!sext_ln703_199_fu_5055747_p1.read().is_01() || !zext_ln703_75_fu_5055757_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_199_fu_5055747_p1.read()) + sc_biguint<10>(zext_ln703_75_fu_5055757_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3030_fu_5073977_p2() {
    add_ln703_3030_fu_5073977_p2 = (!zext_ln708_1515_fu_5039685_p1.read().is_01() || !add_ln703_3029_fu_5073971_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1515_fu_5039685_p1.read()) + sc_biguint<10>(add_ln703_3029_fu_5073971_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3031_fu_5073987_p2() {
    add_ln703_3031_fu_5073987_p2 = (!sext_ln703_1761_fu_5073967_p1.read().is_01() || !sext_ln703_1762_fu_5073983_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1761_fu_5073967_p1.read()) + sc_bigint<13>(sext_ln703_1762_fu_5073983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3032_fu_5087077_p2() {
    add_ln703_3032_fu_5087077_p2 = (!sext_ln1118_931_fu_5080604_p1.read().is_01() || !add_ln703_3031_reg_5093504.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_931_fu_5080604_p1.read()) + sc_biguint<13>(add_ln703_3031_reg_5093504.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3033_fu_5087082_p2() {
    add_ln703_3033_fu_5087082_p2 = (!zext_ln1118_2694_fu_5080607_p1.read().is_01() || !zext_ln1118_2693_fu_5080601_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2694_fu_5080607_p1.read()) + sc_biguint<9>(zext_ln1118_2693_fu_5080601_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3034_fu_5087092_p2() {
    add_ln703_3034_fu_5087092_p2 = (!add_ln703_3032_fu_5087077_p2.read().is_01() || !zext_ln703_510_fu_5087088_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3032_fu_5087077_p2.read()) + sc_biguint<13>(zext_ln703_510_fu_5087088_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3035_fu_5073993_p2() {
    add_ln703_3035_fu_5073993_p2 = (!sext_ln708_246_fu_5039717_p1.read().is_01() || !zext_ln708_1516_fu_5039889_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_246_fu_5039717_p1.read()) + sc_biguint<11>(zext_ln708_1516_fu_5039889_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3036_fu_5073999_p2() {
    add_ln703_3036_fu_5073999_p2 = (!zext_ln1118_2691_fu_5039731_p1.read().is_01() || !sext_ln1118_932_fu_5039849_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2691_fu_5039731_p1.read()) + sc_bigint<10>(sext_ln1118_932_fu_5039849_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3037_fu_5074009_p2() {
    add_ln703_3037_fu_5074009_p2 = (!add_ln703_3035_fu_5073993_p2.read().is_01() || !sext_ln703_1764_fu_5074005_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3035_fu_5073993_p2.read()) + sc_bigint<11>(sext_ln703_1764_fu_5074005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3038_fu_5087105_p2() {
    add_ln703_3038_fu_5087105_p2 = (!sext_ln703_1763_fu_5087098_p1.read().is_01() || !sext_ln703_1765_fu_5087102_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1763_fu_5087098_p1.read()) + sc_bigint<14>(sext_ln703_1765_fu_5087102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3039_fu_5074015_p2() {
    add_ln703_3039_fu_5074015_p2 = (!zext_ln1118_2698_fu_5039941_p1.read().is_01() || !sext_ln708_247_fu_5039921_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2698_fu_5039941_p1.read()) + sc_bigint<12>(sext_ln708_247_fu_5039921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_303_fu_5055771_p2() {
    add_ln703_303_fu_5055771_p2 = (!zext_ln708_1077_fu_4995508_p1.read().is_01() || !zext_ln708_1076_fu_4995494_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1077_fu_4995508_p1.read()) + sc_biguint<8>(zext_ln708_1076_fu_4995494_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3040_fu_5087114_p2() {
    add_ln703_3040_fu_5087114_p2 = (!add_ln703_3038_fu_5087105_p2.read().is_01() || !sext_ln703_1766_fu_5087111_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3038_fu_5087105_p2.read()) + sc_bigint<14>(sext_ln703_1766_fu_5087111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3041_fu_5074021_p2() {
    add_ln703_3041_fu_5074021_p2 = (!zext_ln708_1518_fu_5040137_p1.read().is_01() || !zext_ln708_1517_fu_5040123_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1518_fu_5040137_p1.read()) + sc_biguint<11>(zext_ln708_1517_fu_5040123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3042_fu_5074031_p2() {
    add_ln703_3042_fu_5074031_p2 = (!zext_ln708_1521_fu_5040261_p1.read().is_01() || !zext_ln708_1520_fu_5040221_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1521_fu_5040261_p1.read()) + sc_biguint<11>(zext_ln708_1520_fu_5040221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3043_fu_5074041_p2() {
    add_ln703_3043_fu_5074041_p2 = (!zext_ln703_511_fu_5074027_p1.read().is_01() || !zext_ln703_512_fu_5074037_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_511_fu_5074027_p1.read()) + sc_biguint<12>(zext_ln703_512_fu_5074037_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3044_fu_5087127_p2() {
    add_ln703_3044_fu_5087127_p2 = (!sext_ln703_1767_fu_5087120_p1.read().is_01() || !zext_ln703_513_fu_5087124_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1767_fu_5087120_p1.read()) + sc_biguint<15>(zext_ln703_513_fu_5087124_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3045_fu_5074047_p2() {
    add_ln703_3045_fu_5074047_p2 = (!zext_ln708_1073_fu_5040169_p1.read().is_01() || !sext_ln1118_933_fu_5039985_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1073_fu_5040169_p1.read()) + sc_bigint<11>(sext_ln1118_933_fu_5039985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3046_fu_5074053_p2() {
    add_ln703_3046_fu_5074053_p2 = (!sext_ln1118_934_fu_5040017_p1.read().is_01() || !zext_ln708_1519_fu_5040189_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_934_fu_5040017_p1.read()) + sc_biguint<10>(zext_ln708_1519_fu_5040189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3047_fu_5074063_p2() {
    add_ln703_3047_fu_5074063_p2 = (!add_ln703_3045_fu_5074047_p2.read().is_01() || !sext_ln703_1768_fu_5074059_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3045_fu_5074047_p2.read()) + sc_bigint<11>(sext_ln703_1768_fu_5074059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3048_fu_5074073_p2() {
    add_ln703_3048_fu_5074073_p2 = (!zext_ln203_193_fu_5040075_p1.read().is_01() || !sext_ln708_249_fu_5040063_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_193_fu_5040075_p1.read()) + sc_bigint<11>(sext_ln708_249_fu_5040063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3049_fu_5074083_p2() {
    add_ln703_3049_fu_5074083_p2 = (!zext_ln1118_2639_fu_5038157_p1.read().is_01() || !zext_ln1118_2707_fu_5040265_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2639_fu_5038157_p1.read()) + sc_biguint<10>(zext_ln1118_2707_fu_5040265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_304_fu_5055781_p2() {
    add_ln703_304_fu_5055781_p2 = (!sext_ln203_51_fu_4995676_p1.read().is_01() || !zext_ln708_21_fu_4991067_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_51_fu_4995676_p1.read()) + sc_biguint<10>(zext_ln708_21_fu_4991067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3050_fu_5074093_p2() {
    add_ln703_3050_fu_5074093_p2 = (!sext_ln703_1770_fu_5074079_p1.read().is_01() || !zext_ln703_514_fu_5074089_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1770_fu_5074079_p1.read()) + sc_biguint<12>(zext_ln703_514_fu_5074089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3051_fu_5074103_p2() {
    add_ln703_3051_fu_5074103_p2 = (!sext_ln703_1769_fu_5074069_p1.read().is_01() || !sext_ln703_1771_fu_5074099_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1769_fu_5074069_p1.read()) + sc_bigint<13>(sext_ln703_1771_fu_5074099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3052_fu_5087136_p2() {
    add_ln703_3052_fu_5087136_p2 = (!add_ln703_3044_fu_5087127_p2.read().is_01() || !sext_ln703_1772_fu_5087133_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3044_fu_5087127_p2.read()) + sc_bigint<15>(sext_ln703_1772_fu_5087133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3053_fu_5087142_p2() {
    add_ln703_3053_fu_5087142_p2 = (!sext_ln203_517_fu_5080610_p1.read().is_01() || !add_ln703_3052_fu_5087136_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_517_fu_5080610_p1.read()) + sc_biguint<15>(add_ln703_3052_fu_5087136_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3054_fu_5074109_p2() {
    add_ln703_3054_fu_5074109_p2 = (!sext_ln203_516_fu_5040285_p1.read().is_01() || !sext_ln203_518_fu_5040365_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_516_fu_5040285_p1.read()) + sc_bigint<11>(sext_ln203_518_fu_5040365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3055_fu_5074119_p2() {
    add_ln703_3055_fu_5074119_p2 = (!zext_ln203_194_fu_5040305_p1.read().is_01() || !sext_ln703_1773_fu_5074115_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_194_fu_5040305_p1.read()) + sc_bigint<12>(sext_ln703_1773_fu_5074115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3057_fu_5074125_p2() {
    add_ln703_3057_fu_5074125_p2 = (!zext_ln1118_2713_fu_5040437_p1.read().is_01() || !ap_const_lv9_120.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2713_fu_5040437_p1.read()) + sc_bigint<9>(ap_const_lv9_120));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3058_fu_5074135_p2() {
    add_ln703_3058_fu_5074135_p2 = (!sext_ln203_519_fu_5040409_p1.read().is_01() || !zext_ln703_515_fu_5074131_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_519_fu_5040409_p1.read()) + sc_biguint<12>(zext_ln703_515_fu_5074131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3059_fu_5074145_p2() {
    add_ln703_3059_fu_5074145_p2 = (!sext_ln203_520_fu_5040481_p1.read().is_01() || !sext_ln703_402_fu_5074141_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_520_fu_5040481_p1.read()) + sc_bigint<13>(sext_ln703_402_fu_5074141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_305_fu_5055787_p2() {
    add_ln703_305_fu_5055787_p2 = (!zext_ln703_76_fu_5055777_p1.read().is_01() || !add_ln703_304_fu_5055781_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_76_fu_5055777_p1.read()) + sc_biguint<10>(add_ln703_304_fu_5055781_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3060_fu_5074151_p2() {
    add_ln703_3060_fu_5074151_p2 = (!sext_ln1118_937_fu_5040523_p1.read().is_01() || !zext_ln708_1523_fu_5040543_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_937_fu_5040523_p1.read()) + sc_biguint<11>(zext_ln708_1523_fu_5040543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3061_fu_5074161_p2() {
    add_ln703_3061_fu_5074161_p2 = (!add_ln703_3059_fu_5074145_p2.read().is_01() || !sext_ln703_1776_fu_5074157_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3059_fu_5074145_p2.read()) + sc_bigint<13>(sext_ln703_1776_fu_5074157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3062_fu_5074167_p2() {
    add_ln703_3062_fu_5074167_p2 = (!zext_ln1118_2718_fu_5040651_p1.read().is_01() || !zext_ln708_1524_fu_5040577_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2718_fu_5040651_p1.read()) + sc_biguint<10>(zext_ln708_1524_fu_5040577_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3063_fu_5074177_p2() {
    add_ln703_3063_fu_5074177_p2 = (!add_ln703_3061_fu_5074161_p2.read().is_01() || !zext_ln703_516_fu_5074173_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3061_fu_5074161_p2.read()) + sc_biguint<13>(zext_ln703_516_fu_5074173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3064_fu_5074183_p2() {
    add_ln703_3064_fu_5074183_p2 = (!zext_ln1118_2717_fu_5040595_p1.read().is_01() || !sext_ln1118_938_fu_5040557_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_2717_fu_5040595_p1.read()) + sc_bigint<11>(sext_ln1118_938_fu_5040557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3065_fu_5074189_p2() {
    add_ln703_3065_fu_5074189_p2 = (!sext_ln1118_939_fu_5040615_p1.read().is_01() || !sext_ln1118_915_fu_5038867_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_939_fu_5040615_p1.read()) + sc_bigint<8>(sext_ln1118_915_fu_5038867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3066_fu_5074199_p2() {
    add_ln703_3066_fu_5074199_p2 = (!add_ln703_3064_fu_5074183_p2.read().is_01() || !sext_ln703_1778_fu_5074195_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3064_fu_5074183_p2.read()) + sc_bigint<11>(sext_ln703_1778_fu_5074195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3067_fu_5087167_p2() {
    add_ln703_3067_fu_5087167_p2 = (!sext_ln703_1777_fu_5087161_p1.read().is_01() || !sext_ln703_1779_fu_5087164_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1777_fu_5087161_p1.read()) + sc_bigint<14>(sext_ln703_1779_fu_5087164_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3068_fu_5087173_p2() {
    add_ln703_3068_fu_5087173_p2 = (!sext_ln708_250_fu_5080613_p1.read().is_01() || !add_ln703_3067_fu_5087167_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln708_250_fu_5080613_p1.read()) + sc_biguint<14>(add_ln703_3067_fu_5087167_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3069_fu_5074205_p2() {
    add_ln703_3069_fu_5074205_p2 = (!zext_ln708_1529_fu_5040835_p1.read().is_01() || !zext_ln708_1528_fu_5040765_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1529_fu_5040835_p1.read()) + sc_biguint<11>(zext_ln708_1528_fu_5040765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_306_fu_5055797_p2() {
    add_ln703_306_fu_5055797_p2 = (!sext_ln703_200_fu_5055767_p1.read().is_01() || !sext_ln703_201_fu_5055793_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_200_fu_5055767_p1.read()) + sc_bigint<11>(sext_ln703_201_fu_5055793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3070_fu_5074215_p2() {
    add_ln703_3070_fu_5074215_p2 = (!zext_ln708_1080_fu_5040719_p1.read().is_01() || !zext_ln703_517_fu_5074211_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_1080_fu_5040719_p1.read()) + sc_biguint<12>(zext_ln703_517_fu_5074211_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3071_fu_5087182_p2() {
    add_ln703_3071_fu_5087182_p2 = (!add_ln703_3068_fu_5087173_p2.read().is_01() || !zext_ln703_518_fu_5087179_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3068_fu_5087173_p2.read()) + sc_biguint<14>(zext_ln703_518_fu_5087179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3072_fu_5074221_p2() {
    add_ln703_3072_fu_5074221_p2 = (!sext_ln1118_942_fu_5040899_p1.read().is_01() || !sext_ln708_251_fu_5040821_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_942_fu_5040899_p1.read()) + sc_bigint<11>(sext_ln708_251_fu_5040821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3073_fu_5074231_p2() {
    add_ln703_3073_fu_5074231_p2 = (!sext_ln1118_940_fu_5040797_p1.read().is_01() || !sext_ln703_1781_fu_5074227_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_940_fu_5040797_p1.read()) + sc_bigint<12>(sext_ln703_1781_fu_5074227_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3074_fu_5074237_p2() {
    add_ln703_3074_fu_5074237_p2 = (!sext_ln1118_941_fu_5040855_p1.read().is_01() || !zext_ln1118_2720_fu_5040737_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_941_fu_5040855_p1.read()) + sc_biguint<9>(zext_ln1118_2720_fu_5040737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3075_fu_5074247_p2() {
    add_ln703_3075_fu_5074247_p2 = (!sext_ln708_248_fu_5040059_p1.read().is_01() || !sext_ln703_1782_fu_5074243_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_248_fu_5040059_p1.read()) + sc_bigint<10>(sext_ln703_1782_fu_5074243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3076_fu_5074257_p2() {
    add_ln703_3076_fu_5074257_p2 = (!add_ln703_3073_fu_5074231_p2.read().is_01() || !sext_ln703_1783_fu_5074253_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3073_fu_5074231_p2.read()) + sc_bigint<12>(sext_ln703_1783_fu_5074253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3077_fu_5087195_p2() {
    add_ln703_3077_fu_5087195_p2 = (!sext_ln703_1780_fu_5087188_p1.read().is_01() || !sext_ln703_1784_fu_5087192_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1780_fu_5087188_p1.read()) + sc_bigint<15>(sext_ln703_1784_fu_5087192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3078_fu_5087201_p2() {
    add_ln703_3078_fu_5087201_p2 = (!zext_ln203_195_fu_5080616_p1.read().is_01() || !sext_ln203_523_fu_5080619_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_195_fu_5080616_p1.read()) + sc_bigint<12>(sext_ln203_523_fu_5080619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3079_fu_5087211_p2() {
    add_ln703_3079_fu_5087211_p2 = (!add_ln703_3077_fu_5087195_p2.read().is_01() || !sext_ln703_1785_fu_5087207_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3077_fu_5087195_p2.read()) + sc_bigint<15>(sext_ln703_1785_fu_5087207_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_307_fu_5055807_p2() {
    add_ln703_307_fu_5055807_p2 = (!add_ln703_299_fu_5055735_p2.read().is_01() || !sext_ln703_203_fu_5055803_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_299_fu_5055735_p2.read()) + sc_bigint<13>(sext_ln703_203_fu_5055803_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3080_fu_5074263_p2() {
    add_ln703_3080_fu_5074263_p2 = (!sext_ln203_521_fu_5040931_p1.read().is_01() || !zext_ln708_1531_fu_5041103_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_521_fu_5040931_p1.read()) + sc_biguint<11>(zext_ln708_1531_fu_5041103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3081_fu_5074273_p2() {
    add_ln703_3081_fu_5074273_p2 = (!zext_ln203_196_fu_5040993_p1.read().is_01() || !sext_ln703_1786_fu_5074269_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_196_fu_5040993_p1.read()) + sc_bigint<12>(sext_ln703_1786_fu_5074269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3082_fu_5087220_p2() {
    add_ln703_3082_fu_5087220_p2 = (!add_ln703_3079_fu_5087211_p2.read().is_01() || !sext_ln703_1787_fu_5087217_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3079_fu_5087211_p2.read()) + sc_bigint<15>(sext_ln703_1787_fu_5087217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3083_fu_5074279_p2() {
    add_ln703_3083_fu_5074279_p2 = (!sext_ln203_524_fu_5041127_p1.read().is_01() || !sext_ln203_522_fu_5040979_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_524_fu_5041127_p1.read()) + sc_bigint<10>(sext_ln203_522_fu_5040979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3084_fu_5074289_p2() {
    add_ln703_3084_fu_5074289_p2 = (!zext_ln203_197_fu_5041053_p1.read().is_01() || !sext_ln703_1788_fu_5074285_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_197_fu_5041053_p1.read()) + sc_bigint<11>(sext_ln703_1788_fu_5074285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3085_fu_5074299_p2() {
    add_ln703_3085_fu_5074299_p2 = (!zext_ln708_1532_fu_5041141_p1.read().is_01() || !zext_ln708_1530_fu_5041067_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1532_fu_5041141_p1.read()) + sc_biguint<8>(zext_ln708_1530_fu_5041067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3086_fu_5074309_p2() {
    add_ln703_3086_fu_5074309_p2 = (!zext_ln203_199_fu_5041145_p1.read().is_01() || !zext_ln703_519_fu_5074305_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_199_fu_5041145_p1.read()) + sc_biguint<10>(zext_ln703_519_fu_5074305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3087_fu_5074319_p2() {
    add_ln703_3087_fu_5074319_p2 = (!sext_ln703_1789_fu_5074295_p1.read().is_01() || !zext_ln703_520_fu_5074315_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1789_fu_5074295_p1.read()) + sc_biguint<12>(zext_ln703_520_fu_5074315_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3089_fu_5074325_p2() {
    add_ln703_3089_fu_5074325_p2 = (!zext_ln1118_2712_fu_5040433_p1.read().is_01() || !ap_const_lv8_20.is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_2712_fu_5040433_p1.read()) + sc_biguint<8>(ap_const_lv8_20));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3090_fu_5074335_p2() {
    add_ln703_3090_fu_5074335_p2 = (!sext_ln203_525_fu_5041159_p1.read().is_01() || !zext_ln703_521_fu_5074331_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_525_fu_5041159_p1.read()) + sc_biguint<12>(zext_ln703_521_fu_5074331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3091_fu_5074341_p2() {
    add_ln703_3091_fu_5074341_p2 = (!sext_ln1116_72_fu_5041230_p1.read().is_01() || !add_ln703_3090_fu_5074335_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_72_fu_5041230_p1.read()) + sc_biguint<12>(add_ln703_3090_fu_5074335_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3092_fu_5074347_p2() {
    add_ln703_3092_fu_5074347_p2 = (!sext_ln1118_943_fu_5041173_p1.read().is_01() || !zext_ln1118_2728_fu_5041200_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_943_fu_5041173_p1.read()) + sc_biguint<9>(zext_ln1118_2728_fu_5041200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3093_fu_5074357_p2() {
    add_ln703_3093_fu_5074357_p2 = (!add_ln703_3091_fu_5074341_p2.read().is_01() || !sext_ln703_1792_fu_5074353_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3091_fu_5074341_p2.read()) + sc_bigint<12>(sext_ln703_1792_fu_5074353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3094_fu_5074367_p2() {
    add_ln703_3094_fu_5074367_p2 = (!sext_ln1118_949_fu_5041378_p1.read().is_01() || !sext_ln1118_946_fu_5041286_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_949_fu_5041378_p1.read()) + sc_bigint<12>(sext_ln1118_946_fu_5041286_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3095_fu_5074377_p2() {
    add_ln703_3095_fu_5074377_p2 = (!sext_ln703_1793_fu_5074363_p1.read().is_01() || !sext_ln703_1794_fu_5074373_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1793_fu_5074363_p1.read()) + sc_bigint<13>(sext_ln703_1794_fu_5074373_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3096_fu_5074383_p2() {
    add_ln703_3096_fu_5074383_p2 = (!sext_ln1118_948_fu_5041354_p1.read().is_01() || !sext_ln1116_73_fu_5041310_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_948_fu_5041354_p1.read()) + sc_bigint<7>(sext_ln1116_73_fu_5041310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3097_fu_5074393_p2() {
    add_ln703_3097_fu_5074393_p2 = (!zext_ln708_1533_fu_5041324_p1.read().is_01() || !sext_ln703_1795_fu_5074389_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1533_fu_5041324_p1.read()) + sc_bigint<8>(sext_ln703_1795_fu_5074389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3098_fu_5074403_p2() {
    add_ln703_3098_fu_5074403_p2 = (!add_ln703_3095_fu_5074377_p2.read().is_01() || !sext_ln703_1796_fu_5074399_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3095_fu_5074377_p2.read()) + sc_bigint<13>(sext_ln703_1796_fu_5074399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3099_fu_5087242_p2() {
    add_ln703_3099_fu_5087242_p2 = (!sext_ln1118_951_fu_5080625_p1.read().is_01() || !sext_ln703_1797_fu_5087239_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_951_fu_5080625_p1.read()) + sc_bigint<14>(sext_ln703_1797_fu_5087239_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_309_fu_5055813_p2() {
    add_ln703_309_fu_5055813_p2 = (!zext_ln203_526_fu_4995824_p1.read().is_01() || !ap_const_lv9_C0.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_526_fu_4995824_p1.read()) + sc_biguint<9>(ap_const_lv9_C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3100_fu_5074409_p2() {
    add_ln703_3100_fu_5074409_p2 = (!zext_ln1118_2738_fu_5041503_p1.read().is_01() || !sext_ln1118_954_fu_5041517_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2738_fu_5041503_p1.read()) + sc_bigint<12>(sext_ln1118_954_fu_5041517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3101_fu_5074419_p2() {
    add_ln703_3101_fu_5074419_p2 = (!sext_ln1118_953_fu_5041467_p1.read().is_01() || !sext_ln703_1798_fu_5074415_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_953_fu_5041467_p1.read()) + sc_bigint<13>(sext_ln703_1798_fu_5074415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3102_fu_5087251_p2() {
    add_ln703_3102_fu_5087251_p2 = (!add_ln703_3099_fu_5087242_p2.read().is_01() || !sext_ln703_1799_fu_5087248_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3099_fu_5087242_p2.read()) + sc_bigint<14>(sext_ln703_1799_fu_5087248_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3103_fu_5074425_p2() {
    add_ln703_3103_fu_5074425_p2 = (!sext_ln1118_955_fu_5041573_p1.read().is_01() || !sext_ln1118_950_fu_5041398_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_955_fu_5041573_p1.read()) + sc_bigint<11>(sext_ln1118_950_fu_5041398_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3104_fu_5074435_p2() {
    add_ln703_3104_fu_5074435_p2 = (!sext_ln1118_956_fu_5041591_p1.read().is_01() || !sext_ln1116_74_fu_5041541_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_956_fu_5041591_p1.read()) + sc_bigint<9>(sext_ln1116_74_fu_5041541_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3105_fu_5074445_p2() {
    add_ln703_3105_fu_5074445_p2 = (!sext_ln1118_952_fu_5041442_p1.read().is_01() || !sext_ln703_1801_fu_5074441_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_952_fu_5041442_p1.read()) + sc_bigint<10>(sext_ln703_1801_fu_5074441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3106_fu_5074455_p2() {
    add_ln703_3106_fu_5074455_p2 = (!sext_ln703_1800_fu_5074431_p1.read().is_01() || !sext_ln703_1802_fu_5074451_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1800_fu_5074431_p1.read()) + sc_bigint<12>(sext_ln703_1802_fu_5074451_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3107_fu_5087260_p2() {
    add_ln703_3107_fu_5087260_p2 = (!add_ln703_3102_fu_5087251_p2.read().is_01() || !sext_ln703_1803_fu_5087257_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3102_fu_5087251_p2.read()) + sc_bigint<14>(sext_ln703_1803_fu_5087257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3108_fu_5074461_p2() {
    add_ln703_3108_fu_5074461_p2 = (!sext_ln203_526_fu_5041660_p1.read().is_01() || !zext_ln203_200_fu_5041632_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_526_fu_5041660_p1.read()) + sc_biguint<12>(zext_ln203_200_fu_5041632_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3109_fu_5087273_p2() {
    add_ln703_3109_fu_5087273_p2 = (!sext_ln703_1804_fu_5087266_p1.read().is_01() || !sext_ln703_1805_fu_5087270_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1804_fu_5087266_p1.read()) + sc_bigint<15>(sext_ln703_1805_fu_5087270_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_310_fu_5055823_p2() {
    add_ln703_310_fu_5055823_p2 = (!zext_ln1118_1680_fu_4995862_p1.read().is_01() || !trunc_ln203_69_fu_4995852_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1680_fu_4995862_p1.read()) + sc_biguint<9>(trunc_ln203_69_fu_4995852_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3110_fu_5074467_p2() {
    add_ln703_3110_fu_5074467_p2 = (!zext_ln203_644_fu_5041680_p1.read().is_01() || !zext_ln203_643_fu_5041646_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_644_fu_5041680_p1.read()) + sc_biguint<10>(zext_ln203_643_fu_5041646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3111_fu_5074477_p2() {
    add_ln703_3111_fu_5074477_p2 = (!zext_ln708_1535_fu_5041772_p1.read().is_01() || !zext_ln708_1534_fu_5041740_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1535_fu_5041772_p1.read()) + sc_biguint<11>(zext_ln708_1534_fu_5041740_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3112_fu_5074487_p2() {
    add_ln703_3112_fu_5074487_p2 = (!zext_ln703_522_fu_5074473_p1.read().is_01() || !zext_ln703_523_fu_5074483_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_522_fu_5074473_p1.read()) + sc_biguint<12>(zext_ln703_523_fu_5074483_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3113_fu_5087282_p2() {
    add_ln703_3113_fu_5087282_p2 = (!add_ln703_3109_fu_5087273_p2.read().is_01() || !zext_ln703_524_fu_5087279_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3109_fu_5087273_p2.read()) + sc_biguint<15>(zext_ln703_524_fu_5087279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3114_fu_5074493_p2() {
    add_ln703_3114_fu_5074493_p2 = (!trunc_ln203_96_fu_5041908_p4.read().is_01() || !zext_ln203_645_fu_5041904_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_96_fu_5041908_p4.read()) + sc_biguint<10>(zext_ln203_645_fu_5041904_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3115_fu_5074503_p2() {
    add_ln703_3115_fu_5074503_p2 = (!zext_ln708_1536_fu_5041844_p1.read().is_01() || !zext_ln703_525_fu_5074499_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1536_fu_5041844_p1.read()) + sc_biguint<11>(zext_ln703_525_fu_5074499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3116_fu_5074513_p2() {
    add_ln703_3116_fu_5074513_p2 = (!sext_ln203_528_fu_5041816_p1.read().is_01() || !sext_ln203_527_fu_5041720_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_528_fu_5041816_p1.read()) + sc_bigint<11>(sext_ln203_527_fu_5041720_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3117_fu_5074523_p2() {
    add_ln703_3117_fu_5074523_p2 = (!zext_ln203_201_fu_5041744_p1.read().is_01() || !sext_ln203_529_fu_5041872_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_201_fu_5041744_p1.read()) + sc_bigint<11>(sext_ln203_529_fu_5041872_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3118_fu_5074533_p2() {
    add_ln703_3118_fu_5074533_p2 = (!sext_ln703_1806_fu_5074519_p1.read().is_01() || !sext_ln703_1807_fu_5074529_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1806_fu_5074519_p1.read()) + sc_bigint<12>(sext_ln703_1807_fu_5074529_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3119_fu_5074543_p2() {
    add_ln703_3119_fu_5074543_p2 = (!zext_ln703_526_fu_5074509_p1.read().is_01() || !sext_ln703_1808_fu_5074539_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_526_fu_5074509_p1.read()) + sc_bigint<13>(sext_ln703_1808_fu_5074539_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_311_fu_5055833_p2() {
    add_ln703_311_fu_5055833_p2 = (!sext_ln1118_90_fu_4995848_p1.read().is_01() || !zext_ln703_77_fu_5055819_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_90_fu_4995848_p1.read()) + sc_biguint<11>(zext_ln703_77_fu_5055819_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3121_fu_5074557_p2() {
    add_ln703_3121_fu_5074557_p2 = (!trunc_ln203_27_fu_5041928_p4.read().is_01() || !or_ln703_19_fu_5074549_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_27_fu_5041928_p4.read()) + sc_biguint<9>(or_ln703_19_fu_5074549_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3122_fu_5074567_p2() {
    add_ln703_3122_fu_5074567_p2 = (!sext_ln703_410_fu_5074563_p1.read().is_01() || !sext_ln203_530_fu_5041958_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_410_fu_5074563_p1.read()) + sc_bigint<12>(sext_ln203_530_fu_5041958_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3123_fu_5074573_p2() {
    add_ln703_3123_fu_5074573_p2 = (!zext_ln1118_2746_fu_5042000_p1.read().is_01() || !add_ln703_3122_fu_5074567_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2746_fu_5042000_p1.read()) + sc_biguint<12>(add_ln703_3122_fu_5074567_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3124_fu_5074583_p2() {
    add_ln703_3124_fu_5074583_p2 = (!zext_ln1118_2745_fu_5041986_p1.read().is_01() || !sext_ln708_253_fu_5042044_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2745_fu_5041986_p1.read()) + sc_bigint<10>(sext_ln708_253_fu_5042044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3125_fu_5074593_p2() {
    add_ln703_3125_fu_5074593_p2 = (!sext_ln708_252_fu_5041972_p1.read().is_01() || !sext_ln703_1812_fu_5074589_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_252_fu_5041972_p1.read()) + sc_bigint<11>(sext_ln703_1812_fu_5074589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3126_fu_5074603_p2() {
    add_ln703_3126_fu_5074603_p2 = (!sext_ln703_1811_fu_5074579_p1.read().is_01() || !sext_ln703_1813_fu_5074599_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1811_fu_5074579_p1.read()) + sc_bigint<13>(sext_ln703_1813_fu_5074599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3127_fu_5074609_p2() {
    add_ln703_3127_fu_5074609_p2 = (!zext_ln1118_2749_fu_5042068_p1.read().is_01() || !add_ln703_3126_fu_5074603_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln1118_2749_fu_5042068_p1.read()) + sc_biguint<13>(add_ln703_3126_fu_5074603_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3128_fu_5074619_p2() {
    add_ln703_3128_fu_5074619_p2 = (!zext_ln1118_2692_fu_5039767_p1.read().is_01() || !zext_ln1118_2750_fu_5042082_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2692_fu_5039767_p1.read()) + sc_biguint<10>(zext_ln1118_2750_fu_5042082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3129_fu_5074629_p2() {
    add_ln703_3129_fu_5074629_p2 = (!sext_ln708_254_fu_5042178_p1.read().is_01() || !zext_ln703_527_fu_5074625_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_254_fu_5042178_p1.read()) + sc_biguint<12>(zext_ln703_527_fu_5074625_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_312_fu_5055843_p2() {
    add_ln703_312_fu_5055843_p2 = (!zext_ln703_78_fu_5055829_p1.read().is_01() || !sext_ln703_205_fu_5055839_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_78_fu_5055829_p1.read()) + sc_bigint<12>(sext_ln703_205_fu_5055839_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3130_fu_5074639_p2() {
    add_ln703_3130_fu_5074639_p2 = (!sext_ln703_1814_fu_5074615_p1.read().is_01() || !sext_ln703_1815_fu_5074635_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1814_fu_5074615_p1.read()) + sc_bigint<14>(sext_ln703_1815_fu_5074635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3131_fu_5074645_p2() {
    add_ln703_3131_fu_5074645_p2 = (!trunc_ln708_2644_fu_5042114_p4.read().is_01() || !zext_ln708_1538_fu_5042110_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln708_2644_fu_5042114_p4.read()) + sc_biguint<10>(zext_ln708_1538_fu_5042110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3132_fu_5074655_p2() {
    add_ln703_3132_fu_5074655_p2 = (!zext_ln708_1540_fu_5042164_p1.read().is_01() || !zext_ln708_1539_fu_5042150_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1540_fu_5042164_p1.read()) + sc_biguint<8>(zext_ln708_1539_fu_5042150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3133_fu_5074665_p2() {
    add_ln703_3133_fu_5074665_p2 = (!trunc_ln708_2645_fu_5042130_p4.read().is_01() || !zext_ln703_529_fu_5074661_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln708_2645_fu_5042130_p4.read()) + sc_biguint<10>(zext_ln703_529_fu_5074661_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3134_fu_5074675_p2() {
    add_ln703_3134_fu_5074675_p2 = (!zext_ln703_528_fu_5074651_p1.read().is_01() || !zext_ln703_530_fu_5074671_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_528_fu_5074651_p1.read()) + sc_biguint<11>(zext_ln703_530_fu_5074671_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3135_fu_5087304_p2() {
    add_ln703_3135_fu_5087304_p2 = (!add_ln703_3130_reg_5093594.read().is_01() || !zext_ln703_531_fu_5087301_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3130_reg_5093594.read()) + sc_biguint<14>(zext_ln703_531_fu_5087301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3136_fu_5074681_p2() {
    add_ln703_3136_fu_5074681_p2 = (!zext_ln1118_2754_fu_5042250_p1.read().is_01() || !sext_ln203_532_fu_5042436_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2754_fu_5042250_p1.read()) + sc_bigint<12>(sext_ln203_532_fu_5042436_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3137_fu_5087312_p2() {
    add_ln703_3137_fu_5087312_p2 = (!add_ln703_3135_fu_5087304_p2.read().is_01() || !sext_ln703_1816_fu_5087309_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3135_fu_5087304_p2.read()) + sc_bigint<14>(sext_ln703_1816_fu_5087309_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3138_fu_5074687_p2() {
    add_ln703_3138_fu_5074687_p2 = (!zext_ln1118_2760_fu_5042408_p1.read().is_01() || !trunc_ln1118_37_fu_5042378_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2760_fu_5042408_p1.read()) + sc_biguint<9>(trunc_ln1118_37_fu_5042378_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3139_fu_5074697_p2() {
    add_ln703_3139_fu_5074697_p2 = (!sext_ln1118_962_fu_5042364_p1.read().is_01() || !sext_ln708_242_fu_5038042_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_962_fu_5042364_p1.read()) + sc_bigint<11>(sext_ln708_242_fu_5038042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_313_fu_5055849_p2() {
    add_ln703_313_fu_5055849_p2 = (!sext_ln1118_93_fu_4995910_p1.read().is_01() || !sext_ln1118_91_fu_4995886_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_93_fu_4995910_p1.read()) + sc_bigint<11>(sext_ln1118_91_fu_4995886_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3140_fu_5074707_p2() {
    add_ln703_3140_fu_5074707_p2 = (!zext_ln703_532_fu_5074693_p1.read().is_01() || !sext_ln703_1818_fu_5074703_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_532_fu_5074693_p1.read()) + sc_bigint<12>(sext_ln703_1818_fu_5074703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3141_fu_5087325_p2() {
    add_ln703_3141_fu_5087325_p2 = (!sext_ln703_1817_fu_5087318_p1.read().is_01() || !sext_ln703_1819_fu_5087322_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1817_fu_5087318_p1.read()) + sc_bigint<15>(sext_ln703_1819_fu_5087322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3142_fu_5074713_p2() {
    add_ln703_3142_fu_5074713_p2 = (!zext_ln708_1073_fu_5040169_p1.read().is_01() || !sext_ln1118_963_fu_5042422_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1073_fu_5040169_p1.read()) + sc_bigint<11>(sext_ln1118_963_fu_5042422_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3143_fu_5074719_p2() {
    add_ln703_3143_fu_5074719_p2 = (!sext_ln1118_960_fu_5042318_p1.read().is_01() || !sext_ln203_531_fu_5042274_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_960_fu_5042318_p1.read()) + sc_bigint<10>(sext_ln203_531_fu_5042274_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3144_fu_5074729_p2() {
    add_ln703_3144_fu_5074729_p2 = (!add_ln703_3142_fu_5074713_p2.read().is_01() || !sext_ln703_1820_fu_5074725_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3142_fu_5074713_p2.read()) + sc_bigint<11>(sext_ln703_1820_fu_5074725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3145_fu_5074739_p2() {
    add_ln703_3145_fu_5074739_p2 = (!zext_ln708_1542_fu_5042206_p1.read().is_01() || !zext_ln708_1541_fu_5042192_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1542_fu_5042206_p1.read()) + sc_biguint<8>(zext_ln708_1541_fu_5042192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3146_fu_5074749_p2() {
    add_ln703_3146_fu_5074749_p2 = (!sext_ln1118_959_fu_5042294_p1.read().is_01() || !zext_ln708_1512_fu_5039259_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_959_fu_5042294_p1.read()) + sc_biguint<8>(zext_ln708_1512_fu_5039259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3147_fu_5074759_p2() {
    add_ln703_3147_fu_5074759_p2 = (!zext_ln703_533_fu_5074745_p1.read().is_01() || !sext_ln703_1822_fu_5074755_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_533_fu_5074745_p1.read()) + sc_bigint<9>(sext_ln703_1822_fu_5074755_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3148_fu_5074769_p2() {
    add_ln703_3148_fu_5074769_p2 = (!sext_ln703_1821_fu_5074735_p1.read().is_01() || !sext_ln703_1823_fu_5074765_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1821_fu_5074735_p1.read()) + sc_bigint<12>(sext_ln703_1823_fu_5074765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3149_fu_5087334_p2() {
    add_ln703_3149_fu_5087334_p2 = (!add_ln703_3141_fu_5087325_p2.read().is_01() || !sext_ln703_1824_fu_5087331_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3141_fu_5087325_p2.read()) + sc_bigint<15>(sext_ln703_1824_fu_5087331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_314_fu_5055859_p2() {
    add_ln703_314_fu_5055859_p2 = (!add_ln703_312_fu_5055843_p2.read().is_01() || !sext_ln703_206_fu_5055855_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_312_fu_5055843_p2.read()) + sc_bigint<12>(sext_ln703_206_fu_5055855_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3151_fu_5074775_p2() {
    add_ln703_3151_fu_5074775_p2 = (!zext_ln203_646_fu_5042460_p1.read().is_01() || !ap_const_lv9_140.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_646_fu_5042460_p1.read()) + sc_bigint<9>(ap_const_lv9_140));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3152_fu_5074785_p2() {
    add_ln703_3152_fu_5074785_p2 = (!zext_ln1118_2762_fu_5042550_p1.read().is_01() || !trunc_ln1118_38_fu_5042496_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2762_fu_5042550_p1.read()) + sc_biguint<10>(trunc_ln1118_38_fu_5042496_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3153_fu_5074795_p2() {
    add_ln703_3153_fu_5074795_p2 = (!sext_ln1118_964_fu_5042492_p1.read().is_01() || !sext_ln703_1826_fu_5074781_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_964_fu_5042492_p1.read()) + sc_bigint<10>(sext_ln703_1826_fu_5074781_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3154_fu_5074805_p2() {
    add_ln703_3154_fu_5074805_p2 = (!zext_ln703_534_fu_5074791_p1.read().is_01() || !sext_ln703_1827_fu_5074801_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_534_fu_5074791_p1.read()) + sc_bigint<12>(sext_ln703_1827_fu_5074801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3155_fu_5074811_p2() {
    add_ln703_3155_fu_5074811_p2 = (!sext_ln1116_72_fu_5041230_p1.read().is_01() || !add_ln703_3154_fu_5074805_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_72_fu_5041230_p1.read()) + sc_biguint<12>(add_ln703_3154_fu_5074805_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3156_fu_5074817_p2() {
    add_ln703_3156_fu_5074817_p2 = (!zext_ln1118_2764_fu_5042588_p1.read().is_01() || !sext_ln708_255_fu_5042574_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2764_fu_5042588_p1.read()) + sc_bigint<9>(sext_ln708_255_fu_5042574_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3157_fu_5074827_p2() {
    add_ln703_3157_fu_5074827_p2 = (!add_ln703_3155_fu_5074811_p2.read().is_01() || !sext_ln703_1828_fu_5074823_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3155_fu_5074811_p2.read()) + sc_bigint<12>(sext_ln703_1828_fu_5074823_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3158_fu_5074833_p2() {
    add_ln703_3158_fu_5074833_p2 = (!zext_ln1118_2767_fu_5042646_p1.read().is_01() || !sext_ln1118_966_fu_5042622_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2767_fu_5042646_p1.read()) + sc_bigint<12>(sext_ln1118_966_fu_5042622_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3159_fu_5087356_p2() {
    add_ln703_3159_fu_5087356_p2 = (!sext_ln703_1829_fu_5087350_p1.read().is_01() || !sext_ln703_1830_fu_5087353_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1829_fu_5087350_p1.read()) + sc_bigint<13>(sext_ln703_1830_fu_5087353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_315_fu_5055869_p2() {
    add_ln703_315_fu_5055869_p2 = (!sext_ln1118_95_fu_4996030_p1.read().is_01() || !sext_ln1118_94_fu_4995946_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_95_fu_4996030_p1.read()) + sc_bigint<12>(sext_ln1118_94_fu_4995946_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3160_fu_5074839_p2() {
    add_ln703_3160_fu_5074839_p2 = (!sext_ln1118_947_fu_5041350_p1.read().is_01() || !sext_ln1118_967_fu_5042690_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_947_fu_5041350_p1.read()) + sc_bigint<11>(sext_ln1118_967_fu_5042690_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3161_fu_5074845_p2() {
    add_ln703_3161_fu_5074845_p2 = (!zext_ln708_1537_fu_5042106_p1.read().is_01() || !add_ln703_3160_fu_5074839_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1537_fu_5042106_p1.read()) + sc_biguint<11>(add_ln703_3160_fu_5074839_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3162_fu_5087369_p2() {
    add_ln703_3162_fu_5087369_p2 = (!sext_ln703_1831_fu_5087362_p1.read().is_01() || !sext_ln703_1832_fu_5087366_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1831_fu_5087362_p1.read()) + sc_bigint<14>(sext_ln703_1832_fu_5087366_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3163_fu_5087375_p2() {
    add_ln703_3163_fu_5087375_p2 = (!sext_ln203_533_fu_5080628_p1.read().is_01() || !add_ln703_3162_fu_5087369_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_533_fu_5080628_p1.read()) + sc_biguint<14>(add_ln703_3162_fu_5087369_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3164_fu_5074851_p2() {
    add_ln703_3164_fu_5074851_p2 = (!zext_ln708_1544_fu_5042888_p1.read().is_01() || !zext_ln708_1543_fu_5042860_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1544_fu_5042888_p1.read()) + sc_biguint<11>(zext_ln708_1543_fu_5042860_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3165_fu_5074861_p2() {
    add_ln703_3165_fu_5074861_p2 = (!sext_ln1118_971_fu_5042794_p1.read().is_01() || !zext_ln703_535_fu_5074857_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_971_fu_5042794_p1.read()) + sc_biguint<13>(zext_ln703_535_fu_5074857_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3166_fu_5087384_p2() {
    add_ln703_3166_fu_5087384_p2 = (!add_ln703_3163_fu_5087375_p2.read().is_01() || !sext_ln703_1833_fu_5087381_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3163_fu_5087375_p2.read()) + sc_bigint<14>(sext_ln703_1833_fu_5087381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3167_fu_5074867_p2() {
    add_ln703_3167_fu_5074867_p2 = (!sext_ln1118_970_fu_5042748_p1.read().is_01() || !sext_ln1118_969_fu_5042728_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_970_fu_5042748_p1.read()) + sc_bigint<11>(sext_ln1118_969_fu_5042728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3168_fu_5074877_p2() {
    add_ln703_3168_fu_5074877_p2 = (!zext_ln1118_2775_fu_5042892_p1.read().is_01() || !sext_ln703_1835_fu_5074873_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2775_fu_5042892_p1.read()) + sc_bigint<12>(sext_ln703_1835_fu_5074873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3169_fu_5074887_p2() {
    add_ln703_3169_fu_5074887_p2 = (!sext_ln1118_968_fu_5042714_p1.read().is_01() || !zext_ln1118_2628_fu_5037995_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_968_fu_5042714_p1.read()) + sc_biguint<10>(zext_ln1118_2628_fu_5037995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_316_fu_5055879_p2() {
    add_ln703_316_fu_5055879_p2 = (!sext_ln703_208_fu_5055865_p1.read().is_01() || !sext_ln703_209_fu_5055875_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_208_fu_5055865_p1.read()) + sc_bigint<13>(sext_ln703_209_fu_5055875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3170_fu_5074897_p2() {
    add_ln703_3170_fu_5074897_p2 = (!sext_ln1118_973_fu_5042836_p1.read().is_01() || !sext_ln703_1837_fu_5074893_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_973_fu_5042836_p1.read()) + sc_bigint<11>(sext_ln703_1837_fu_5074893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3171_fu_5074907_p2() {
    add_ln703_3171_fu_5074907_p2 = (!sext_ln703_1836_fu_5074883_p1.read().is_01() || !sext_ln703_1838_fu_5074903_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1836_fu_5074883_p1.read()) + sc_bigint<13>(sext_ln703_1838_fu_5074903_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3172_fu_5087397_p2() {
    add_ln703_3172_fu_5087397_p2 = (!sext_ln703_1834_fu_5087390_p1.read().is_01() || !sext_ln703_1839_fu_5087394_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1834_fu_5087390_p1.read()) + sc_bigint<15>(sext_ln703_1839_fu_5087394_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3173_fu_5087403_p2() {
    add_ln703_3173_fu_5087403_p2 = (!sext_ln203_537_fu_5080631_p1.read().is_01() || !add_ln703_3172_fu_5087397_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_537_fu_5080631_p1.read()) + sc_biguint<15>(add_ln703_3172_fu_5087397_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3174_fu_5074913_p2() {
    add_ln703_3174_fu_5074913_p2 = (!zext_ln203_639_fu_5038515_p1.read().is_01() || !zext_ln203_647_fu_5043000_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_639_fu_5038515_p1.read()) + sc_biguint<10>(zext_ln203_647_fu_5043000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3175_fu_5074923_p2() {
    add_ln703_3175_fu_5074923_p2 = (!zext_ln708_1545_fu_5042980_p1.read().is_01() || !zext_ln703_536_fu_5074919_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1545_fu_5042980_p1.read()) + sc_biguint<11>(zext_ln703_536_fu_5074919_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3176_fu_5087412_p2() {
    add_ln703_3176_fu_5087412_p2 = (!add_ln703_3173_fu_5087403_p2.read().is_01() || !zext_ln703_537_fu_5087409_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3173_fu_5087403_p2.read()) + sc_biguint<15>(zext_ln703_537_fu_5087409_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3177_fu_5074929_p2() {
    add_ln703_3177_fu_5074929_p2 = (!sext_ln203_534_fu_5042906_p1.read().is_01() || !zext_ln203_203_fu_5043076_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_534_fu_5042906_p1.read()) + sc_biguint<12>(zext_ln203_203_fu_5043076_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3178_fu_5074939_p2() {
    add_ln703_3178_fu_5074939_p2 = (!sext_ln203_514_fu_5039481_p1.read().is_01() || !sext_ln203_536_fu_5043024_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_514_fu_5039481_p1.read()) + sc_bigint<10>(sext_ln203_536_fu_5043024_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3179_fu_5074949_p2() {
    add_ln703_3179_fu_5074949_p2 = (!sext_ln203_535_fu_5042960_p1.read().is_01() || !sext_ln703_1841_fu_5074945_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_535_fu_5042960_p1.read()) + sc_bigint<11>(sext_ln703_1841_fu_5074945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_317_fu_5055885_p2() {
    add_ln703_317_fu_5055885_p2 = (!zext_ln1118_968_fu_4995966_p1.read().is_01() || !sext_ln1118_96_fu_4996034_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_968_fu_4995966_p1.read()) + sc_bigint<12>(sext_ln1118_96_fu_4996034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3180_fu_5074959_p2() {
    add_ln703_3180_fu_5074959_p2 = (!sext_ln703_1840_fu_5074935_p1.read().is_01() || !sext_ln703_1842_fu_5074955_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1840_fu_5074935_p1.read()) + sc_bigint<13>(sext_ln703_1842_fu_5074955_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3182_fu_5074965_p2() {
    add_ln703_3182_fu_5074965_p2 = (!zext_ln708_1548_fu_5043134_p1.read().is_01() || !zext_ln708_1547_fu_5043114_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1548_fu_5043134_p1.read()) + sc_biguint<9>(zext_ln708_1547_fu_5043114_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3183_fu_5074975_p2() {
    add_ln703_3183_fu_5074975_p2 = (!sext_ln708_256_fu_5043090_p1.read().is_01() || !ap_const_lv9_120.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_256_fu_5043090_p1.read()) + sc_bigint<9>(ap_const_lv9_120));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3184_fu_5074985_p2() {
    add_ln703_3184_fu_5074985_p2 = (!zext_ln1118_2780_fu_5043154_p1.read().is_01() || !zext_ln703_539_fu_5074981_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2780_fu_5043154_p1.read()) + sc_biguint<10>(zext_ln703_539_fu_5074981_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3185_fu_5074991_p2() {
    add_ln703_3185_fu_5074991_p2 = (!zext_ln703_538_fu_5074971_p1.read().is_01() || !add_ln703_3184_fu_5074985_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_538_fu_5074971_p1.read()) + sc_biguint<10>(add_ln703_3184_fu_5074985_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3186_fu_5075001_p2() {
    add_ln703_3186_fu_5075001_p2 = (!sext_ln1118_976_fu_5043178_p1.read().is_01() || !sext_ln1118_977_fu_5043192_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_976_fu_5043178_p1.read()) + sc_bigint<11>(sext_ln1118_977_fu_5043192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3187_fu_5075011_p2() {
    add_ln703_3187_fu_5075011_p2 = (!zext_ln703_540_fu_5074997_p1.read().is_01() || !sext_ln703_1845_fu_5075007_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_540_fu_5074997_p1.read()) + sc_bigint<12>(sext_ln703_1845_fu_5075007_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3188_fu_5075021_p2() {
    add_ln703_3188_fu_5075021_p2 = (!sext_ln1118_979_fu_5043308_p1.read().is_01() || !sext_ln708_257_fu_5043248_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_979_fu_5043308_p1.read()) + sc_bigint<12>(sext_ln708_257_fu_5043248_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3189_fu_5075031_p2() {
    add_ln703_3189_fu_5075031_p2 = (!sext_ln703_1846_fu_5075017_p1.read().is_01() || !sext_ln703_1847_fu_5075027_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1846_fu_5075017_p1.read()) + sc_bigint<13>(sext_ln703_1847_fu_5075027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_318_fu_5055895_p2() {
    add_ln703_318_fu_5055895_p2 = (!zext_ln1118_1682_fu_4996016_p1.read().is_01() || !zext_ln1118_1681_fu_4996002_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1682_fu_4996016_p1.read()) + sc_biguint<10>(zext_ln1118_1681_fu_4996002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3190_fu_5075037_p2() {
    add_ln703_3190_fu_5075037_p2 = (!sext_ln1118_904_fu_5037700_p1.read().is_01() || !sext_ln1118_978_fu_5043212_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_904_fu_5037700_p1.read()) + sc_bigint<10>(sext_ln1118_978_fu_5043212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3191_fu_5075043_p2() {
    add_ln703_3191_fu_5075043_p2 = (!zext_ln708_1549_fu_5043276_p1.read().is_01() || !add_ln703_3190_fu_5075037_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1549_fu_5043276_p1.read()) + sc_biguint<10>(add_ln703_3190_fu_5075037_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3192_fu_5075053_p2() {
    add_ln703_3192_fu_5075053_p2 = (!add_ln703_3189_fu_5075031_p2.read().is_01() || !sext_ln703_1848_fu_5075049_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3189_fu_5075031_p2.read()) + sc_bigint<13>(sext_ln703_1848_fu_5075049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3193_fu_5087434_p2() {
    add_ln703_3193_fu_5087434_p2 = (!zext_ln1118_2785_fu_5080634_p1.read().is_01() || !sext_ln703_1849_fu_5087431_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln1118_2785_fu_5080634_p1.read()) + sc_bigint<14>(sext_ln703_1849_fu_5087431_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3194_fu_5075059_p2() {
    add_ln703_3194_fu_5075059_p2 = (!zext_ln708_1552_fu_5043504_p1.read().is_01() || !zext_ln708_1551_fu_5043382_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1552_fu_5043504_p1.read()) + sc_biguint<11>(zext_ln708_1551_fu_5043382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3195_fu_5075069_p2() {
    add_ln703_3195_fu_5075069_p2 = (!sext_ln1118_987_fu_5043540_p1.read().is_01() || !zext_ln703_541_fu_5075065_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_987_fu_5043540_p1.read()) + sc_biguint<13>(zext_ln703_541_fu_5075065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3196_fu_5087443_p2() {
    add_ln703_3196_fu_5087443_p2 = (!add_ln703_3193_fu_5087434_p2.read().is_01() || !sext_ln703_1850_fu_5087440_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3193_fu_5087434_p2.read()) + sc_bigint<14>(sext_ln703_1850_fu_5087440_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3197_fu_5075075_p2() {
    add_ln703_3197_fu_5075075_p2 = (!sext_ln1118_985_fu_5043480_p1.read().is_01() || !sext_ln1118_982_fu_5043430_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_985_fu_5043480_p1.read()) + sc_bigint<11>(sext_ln1118_982_fu_5043430_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3198_fu_5075085_p2() {
    add_ln703_3198_fu_5075085_p2 = (!sext_ln708_258_fu_5043354_p1.read().is_01() || !sext_ln703_1851_fu_5075081_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_258_fu_5043354_p1.read()) + sc_bigint<12>(sext_ln703_1851_fu_5075081_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3199_fu_5075091_p2() {
    add_ln703_3199_fu_5075091_p2 = (!sext_ln1118_983_fu_5043450_p1.read().is_01() || !zext_ln708_1550_fu_5043368_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_983_fu_5043450_p1.read()) + sc_biguint<8>(zext_ln708_1550_fu_5043368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_319_fu_5055905_p2() {
    add_ln703_319_fu_5055905_p2 = (!sext_ln703_212_fu_5055891_p1.read().is_01() || !zext_ln703_79_fu_5055901_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_212_fu_5055891_p1.read()) + sc_biguint<13>(zext_ln703_79_fu_5055901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_31_fu_5053859_p2() {
    add_ln703_31_fu_5053859_p2 = (!sext_ln1118_8_fu_4989669_p1.read().is_01() || !ap_const_lv10_140.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_8_fu_4989669_p1.read()) + sc_biguint<10>(ap_const_lv10_140));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3200_fu_5075101_p2() {
    add_ln703_3200_fu_5075101_p2 = (!sext_ln1118_980_fu_5043402_p1.read().is_01() || !sext_ln703_1852_fu_5075097_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_980_fu_5043402_p1.read()) + sc_bigint<9>(sext_ln703_1852_fu_5075097_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3201_fu_5075111_p2() {
    add_ln703_3201_fu_5075111_p2 = (!add_ln703_3198_fu_5075085_p2.read().is_01() || !sext_ln703_1853_fu_5075107_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3198_fu_5075085_p2.read()) + sc_bigint<12>(sext_ln703_1853_fu_5075107_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3202_fu_5087452_p2() {
    add_ln703_3202_fu_5087452_p2 = (!add_ln703_3196_fu_5087443_p2.read().is_01() || !sext_ln703_1854_fu_5087449_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3196_fu_5087443_p2.read()) + sc_bigint<14>(sext_ln703_1854_fu_5087449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3203_fu_5087462_p2() {
    add_ln703_3203_fu_5087462_p2 = (!sext_ln203_539_fu_5080637_p1.read().is_01() || !sext_ln703_1855_fu_5087458_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_539_fu_5080637_p1.read()) + sc_bigint<15>(sext_ln703_1855_fu_5087458_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3204_fu_5075117_p2() {
    add_ln703_3204_fu_5075117_p2 = (!zext_ln708_1553_fu_5043598_p1.read().is_01() || !zext_ln708_1534_fu_5041740_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1553_fu_5043598_p1.read()) + sc_biguint<11>(zext_ln708_1534_fu_5041740_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3205_fu_5075127_p2() {
    add_ln703_3205_fu_5075127_p2 = (!sext_ln203_540_fu_5043612_p1.read().is_01() || !zext_ln703_542_fu_5075123_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_540_fu_5043612_p1.read()) + sc_biguint<13>(zext_ln703_542_fu_5075123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3206_fu_5087471_p2() {
    add_ln703_3206_fu_5087471_p2 = (!add_ln703_3203_fu_5087462_p2.read().is_01() || !sext_ln703_1856_fu_5087468_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3203_fu_5087462_p2.read()) + sc_bigint<15>(sext_ln703_1856_fu_5087468_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3207_fu_5075133_p2() {
    add_ln703_3207_fu_5075133_p2 = (!trunc_ln203_97_fu_5043640_p4.read().is_01() || !zext_ln203_642_fu_5041107_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_97_fu_5043640_p4.read()) + sc_biguint<10>(zext_ln203_642_fu_5041107_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3208_fu_5075143_p2() {
    add_ln703_3208_fu_5075143_p2 = (!zext_ln708_1554_fu_5043636_p1.read().is_01() || !zext_ln703_543_fu_5075139_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1554_fu_5043636_p1.read()) + sc_biguint<11>(zext_ln703_543_fu_5075139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3209_fu_5075153_p2() {
    add_ln703_3209_fu_5075153_p2 = (!sext_ln203_538_fu_5043568_p1.read().is_01() || !zext_ln708_1555_fu_5043674_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_538_fu_5043568_p1.read()) + sc_biguint<11>(zext_ln708_1555_fu_5043674_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_320_fu_5081341_p2() {
    add_ln703_320_fu_5081341_p2 = (!sext_ln703_211_fu_5081335_p1.read().is_01() || !sext_ln703_213_fu_5081338_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_211_fu_5081335_p1.read()) + sc_bigint<14>(sext_ln703_213_fu_5081338_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3210_fu_5075163_p2() {
    add_ln703_3210_fu_5075163_p2 = (!zext_ln203_204_fu_5043660_p1.read().is_01() || !sext_ln703_1857_fu_5075159_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_204_fu_5043660_p1.read()) + sc_bigint<12>(sext_ln703_1857_fu_5075159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3211_fu_5075173_p2() {
    add_ln703_3211_fu_5075173_p2 = (!zext_ln703_544_fu_5075149_p1.read().is_01() || !sext_ln703_1858_fu_5075169_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_544_fu_5075149_p1.read()) + sc_bigint<13>(sext_ln703_1858_fu_5075169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3213_fu_5075187_p2() {
    add_ln703_3213_fu_5075187_p2 = (!mult_3331_V_fu_5043788_p1.read().is_01() || !or_ln703_12_fu_5075179_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3331_V_fu_5043788_p1.read()) + sc_biguint<16>(or_ln703_12_fu_5075179_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3214_fu_5075193_p2() {
    add_ln703_3214_fu_5075193_p2 = (!sext_ln203_548_fu_5044196_p1.read().is_01() || !sext_ln203_547_fu_5044126_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_548_fu_5044196_p1.read()) + sc_bigint<12>(sext_ln203_547_fu_5044126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3215_fu_5075203_p2() {
    add_ln703_3215_fu_5075203_p2 = (!add_ln703_3213_fu_5075187_p2.read().is_01() || !sext_ln703_1861_fu_5075199_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3213_fu_5075187_p2.read()) + sc_bigint<16>(sext_ln703_1861_fu_5075199_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3216_fu_5075209_p2() {
    add_ln703_3216_fu_5075209_p2 = (!sext_ln203_550_fu_5044332_p1.read().is_01() || !sext_ln203_549_fu_5044288_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_550_fu_5044332_p1.read()) + sc_bigint<12>(sext_ln203_549_fu_5044288_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3217_fu_5075219_p2() {
    add_ln703_3217_fu_5075219_p2 = (!zext_ln203_649_fu_5043850_p1.read().is_01() || !zext_ln203_648_fu_5043810_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_649_fu_5043850_p1.read()) + sc_biguint<10>(zext_ln203_648_fu_5043810_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3218_fu_5075229_p2() {
    add_ln703_3218_fu_5075229_p2 = (!sext_ln703_1862_fu_5075215_p1.read().is_01() || !zext_ln703_545_fu_5075225_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1862_fu_5075215_p1.read()) + sc_biguint<13>(zext_ln703_545_fu_5075225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3219_fu_5075239_p2() {
    add_ln703_3219_fu_5075239_p2 = (!add_ln703_3215_fu_5075203_p2.read().is_01() || !sext_ln703_1863_fu_5075235_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3215_fu_5075203_p2.read()) + sc_bigint<16>(sext_ln703_1863_fu_5075235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_321_fu_5081347_p2() {
    add_ln703_321_fu_5081347_p2 = (!sext_ln1118_98_fu_5080226_p1.read().is_01() || !add_ln703_320_fu_5081341_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_98_fu_5080226_p1.read()) + sc_biguint<14>(add_ln703_320_fu_5081341_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3220_fu_5075245_p2() {
    add_ln703_3220_fu_5075245_p2 = (!zext_ln708_1558_fu_5043922_p1.read().is_01() || !zext_ln708_1557_fu_5043864_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1558_fu_5043922_p1.read()) + sc_biguint<11>(zext_ln708_1557_fu_5043864_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3221_fu_5075255_p2() {
    add_ln703_3221_fu_5075255_p2 = (!trunc_ln203_98_fu_5043926_p4.read().is_01() || !zext_ln708_1538_fu_5042110_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_98_fu_5043926_p4.read()) + sc_biguint<10>(zext_ln708_1538_fu_5042110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3222_fu_5075265_p2() {
    add_ln703_3222_fu_5075265_p2 = (!zext_ln703_546_fu_5075251_p1.read().is_01() || !zext_ln703_547_fu_5075261_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_546_fu_5075251_p1.read()) + sc_biguint<12>(zext_ln703_547_fu_5075261_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3223_fu_5075271_p2() {
    add_ln703_3223_fu_5075271_p2 = (!zext_ln203_651_fu_5044018_p1.read().is_01() || !zext_ln203_650_fu_5043952_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_651_fu_5044018_p1.read()) + sc_biguint<10>(zext_ln203_650_fu_5043952_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3224_fu_5075281_p2() {
    add_ln703_3224_fu_5075281_p2 = (!zext_ln203_653_fu_5044086_p1.read().is_01() || !zext_ln203_652_fu_5044042_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_653_fu_5044086_p1.read()) + sc_biguint<10>(zext_ln203_652_fu_5044042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3225_fu_5075291_p2() {
    add_ln703_3225_fu_5075291_p2 = (!zext_ln703_548_fu_5075277_p1.read().is_01() || !zext_ln703_549_fu_5075287_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_548_fu_5075277_p1.read()) + sc_biguint<11>(zext_ln703_549_fu_5075287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3226_fu_5075301_p2() {
    add_ln703_3226_fu_5075301_p2 = (!add_ln703_3222_fu_5075265_p2.read().is_01() || !zext_ln703_550_fu_5075297_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3222_fu_5075265_p2.read()) + sc_biguint<12>(zext_ln703_550_fu_5075297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3227_fu_5087493_p2() {
    add_ln703_3227_fu_5087493_p2 = (!add_ln703_3219_reg_5093679.read().is_01() || !zext_ln703_551_fu_5087490_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3219_reg_5093679.read()) + sc_biguint<16>(zext_ln703_551_fu_5087490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3228_fu_5075307_p2() {
    add_ln703_3228_fu_5075307_p2 = (!zext_ln203_655_fu_5044130_p1.read().is_01() || !zext_ln203_654_fu_5044106_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_655_fu_5044130_p1.read()) + sc_biguint<10>(zext_ln203_654_fu_5044106_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3229_fu_5075317_p2() {
    add_ln703_3229_fu_5075317_p2 = (!zext_ln708_1561_fu_5044214_p1.read().is_01() || !zext_ln708_1559_fu_5044144_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1561_fu_5044214_p1.read()) + sc_biguint<11>(zext_ln708_1559_fu_5044144_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_322_fu_5055911_p2() {
    add_ln703_322_fu_5055911_p2 = (!sext_ln1118_102_fu_4996170_p1.read().is_01() || !zext_ln708_1086_fu_4996122_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_102_fu_4996170_p1.read()) + sc_biguint<11>(zext_ln708_1086_fu_4996122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3230_fu_5075323_p2() {
    add_ln703_3230_fu_5075323_p2 = (!zext_ln703_552_fu_5075313_p1.read().is_01() || !add_ln703_3229_fu_5075317_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_552_fu_5075313_p1.read()) + sc_biguint<11>(add_ln703_3229_fu_5075317_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3231_fu_5075333_p2() {
    add_ln703_3231_fu_5075333_p2 = (!zext_ln708_1563_fu_5044248_p1.read().is_01() || !zext_ln708_1562_fu_5044228_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1563_fu_5044248_p1.read()) + sc_biguint<11>(zext_ln708_1562_fu_5044228_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3232_fu_5075343_p2() {
    add_ln703_3232_fu_5075343_p2 = (!trunc_ln203_99_fu_5044336_p4.read().is_01() || !zext_ln203_656_fu_5044318_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_99_fu_5044336_p4.read()) + sc_biguint<10>(zext_ln203_656_fu_5044318_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3233_fu_5075353_p2() {
    add_ln703_3233_fu_5075353_p2 = (!zext_ln703_554_fu_5075339_p1.read().is_01() || !zext_ln703_555_fu_5075349_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_554_fu_5075339_p1.read()) + sc_biguint<12>(zext_ln703_555_fu_5075349_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3234_fu_5075359_p2() {
    add_ln703_3234_fu_5075359_p2 = (!zext_ln703_553_fu_5075329_p1.read().is_01() || !add_ln703_3233_fu_5075353_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_553_fu_5075329_p1.read()) + sc_biguint<12>(add_ln703_3233_fu_5075353_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3235_fu_5075369_p2() {
    add_ln703_3235_fu_5075369_p2 = (!sext_ln203_542_fu_5043752_p1.read().is_01() || !sext_ln203_541_fu_5043732_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_542_fu_5043752_p1.read()) + sc_bigint<11>(sext_ln203_541_fu_5043732_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3236_fu_5075379_p2() {
    add_ln703_3236_fu_5075379_p2 = (!sext_ln203_545_fu_5043982_p1.read().is_01() || !sext_ln203_543_fu_5043892_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_545_fu_5043982_p1.read()) + sc_bigint<10>(sext_ln203_543_fu_5043892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3237_fu_5075389_p2() {
    add_ln703_3237_fu_5075389_p2 = (!sext_ln703_1864_fu_5075375_p1.read().is_01() || !sext_ln703_1865_fu_5075385_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1864_fu_5075375_p1.read()) + sc_bigint<12>(sext_ln703_1865_fu_5075385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3238_fu_5075395_p2() {
    add_ln703_3238_fu_5075395_p2 = (!zext_ln1118_2628_fu_5037995_p1.read().is_01() || !sext_ln203_546_fu_5044062_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2628_fu_5037995_p1.read()) + sc_bigint<10>(sext_ln203_546_fu_5044062_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3239_fu_5075405_p2() {
    add_ln703_3239_fu_5075405_p2 = (!sext_ln203_544_fu_5043896_p1.read().is_01() || !zext_ln203_206_fu_5044166_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_544_fu_5043896_p1.read()) + sc_biguint<9>(zext_ln203_206_fu_5044166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_323_fu_5055921_p2() {
    add_ln703_323_fu_5055921_p2 = (!sext_ln1118_99_fu_4996102_p1.read().is_01() || !sext_ln703_215_fu_5055917_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_99_fu_4996102_p1.read()) + sc_bigint<12>(sext_ln703_215_fu_5055917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3240_fu_5075415_p2() {
    add_ln703_3240_fu_5075415_p2 = (!sext_ln703_1866_fu_5075401_p1.read().is_01() || !sext_ln703_1867_fu_5075411_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1866_fu_5075401_p1.read()) + sc_bigint<11>(sext_ln703_1867_fu_5075411_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3241_fu_5075425_p2() {
    add_ln703_3241_fu_5075425_p2 = (!add_ln703_3237_fu_5075389_p2.read().is_01() || !sext_ln703_1868_fu_5075421_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3237_fu_5075389_p2.read()) + sc_bigint<12>(sext_ln703_1868_fu_5075421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3242_fu_5075435_p2() {
    add_ln703_3242_fu_5075435_p2 = (!zext_ln703_556_fu_5075365_p1.read().is_01() || !sext_ln703_1869_fu_5075431_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_556_fu_5075365_p1.read()) + sc_bigint<14>(sext_ln703_1869_fu_5075431_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3244_fu_5075449_p2() {
    add_ln703_3244_fu_5075449_p2 = (!sext_ln203_557_fu_5044668_p1.read().is_01() || !sext_ln203_552_fu_5044384_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_557_fu_5044668_p1.read()) + sc_bigint<12>(sext_ln203_552_fu_5044384_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3245_fu_5075459_p2() {
    add_ln703_3245_fu_5075459_p2 = (!or_ln703_13_fu_5075441_p3.read().is_01() || !sext_ln703_1871_fu_5075455_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_13_fu_5075441_p3.read()) + sc_bigint<16>(sext_ln703_1871_fu_5075455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3246_fu_5075465_p2() {
    add_ln703_3246_fu_5075465_p2 = (!zext_ln203_207_fu_5044404_p1.read().is_01() || !sext_ln203_560_fu_5044822_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_207_fu_5044404_p1.read()) + sc_bigint<12>(sext_ln203_560_fu_5044822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3247_fu_5075475_p2() {
    add_ln703_3247_fu_5075475_p2 = (!trunc_ln203_100_fu_5044498_p4.read().is_01() || !zext_ln708_1538_fu_5042110_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_100_fu_5044498_p4.read()) + sc_biguint<10>(zext_ln708_1538_fu_5042110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3248_fu_5075485_p2() {
    add_ln703_3248_fu_5075485_p2 = (!sext_ln703_1872_fu_5075471_p1.read().is_01() || !zext_ln703_557_fu_5075481_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1872_fu_5075471_p1.read()) + sc_biguint<13>(zext_ln703_557_fu_5075481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3249_fu_5075495_p2() {
    add_ln703_3249_fu_5075495_p2 = (!add_ln703_3245_fu_5075459_p2.read().is_01() || !sext_ln703_1873_fu_5075491_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3245_fu_5075459_p2.read()) + sc_bigint<16>(sext_ln703_1873_fu_5075491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_324_fu_5081360_p2() {
    add_ln703_324_fu_5081360_p2 = (!sext_ln703_214_fu_5081353_p1.read().is_01() || !sext_ln703_217_fu_5081357_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_214_fu_5081353_p1.read()) + sc_bigint<15>(sext_ln703_217_fu_5081357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3250_fu_5075501_p2() {
    add_ln703_3250_fu_5075501_p2 = (!zext_ln203_660_fu_5044634_p1.read().is_01() || !zext_ln203_659_fu_5044602_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_660_fu_5044634_p1.read()) + sc_biguint<10>(zext_ln203_659_fu_5044602_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3251_fu_5075511_p2() {
    add_ln703_3251_fu_5075511_p2 = (!zext_ln203_662_fu_5044706_p1.read().is_01() || !zext_ln203_661_fu_5044682_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_662_fu_5044706_p1.read()) + sc_biguint<10>(zext_ln203_661_fu_5044682_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3252_fu_5075521_p2() {
    add_ln703_3252_fu_5075521_p2 = (!zext_ln703_558_fu_5075507_p1.read().is_01() || !zext_ln703_559_fu_5075517_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_558_fu_5075507_p1.read()) + sc_biguint<11>(zext_ln703_559_fu_5075517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3253_fu_5075531_p2() {
    add_ln703_3253_fu_5075531_p2 = (!zext_ln708_1568_fu_5044798_p1.read().is_01() || !zext_ln708_1567_fu_5044730_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1568_fu_5044798_p1.read()) + sc_biguint<11>(zext_ln708_1567_fu_5044730_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3254_fu_5075541_p2() {
    add_ln703_3254_fu_5075541_p2 = (!zext_ln203_663_fu_5044858_p1.read().is_01() || !zext_ln203_641_fu_5039437_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_663_fu_5044858_p1.read()) + sc_biguint<10>(zext_ln203_641_fu_5039437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3255_fu_5075551_p2() {
    add_ln703_3255_fu_5075551_p2 = (!zext_ln703_561_fu_5075537_p1.read().is_01() || !zext_ln703_562_fu_5075547_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_561_fu_5075537_p1.read()) + sc_biguint<12>(zext_ln703_562_fu_5075547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3256_fu_5075557_p2() {
    add_ln703_3256_fu_5075557_p2 = (!zext_ln703_560_fu_5075527_p1.read().is_01() || !add_ln703_3255_fu_5075551_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_560_fu_5075527_p1.read()) + sc_biguint<12>(add_ln703_3255_fu_5075551_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3257_fu_5087510_p2() {
    add_ln703_3257_fu_5087510_p2 = (!add_ln703_3249_reg_5093694.read().is_01() || !zext_ln703_563_fu_5087507_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3249_reg_5093694.read()) + sc_biguint<16>(zext_ln703_563_fu_5087507_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3258_fu_5075563_p2() {
    add_ln703_3258_fu_5075563_p2 = (!sext_ln203_555_fu_5044494_p1.read().is_01() || !sext_ln1118_903_fu_5037530_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_555_fu_5044494_p1.read()) + sc_bigint<11>(sext_ln1118_903_fu_5037530_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3259_fu_5075573_p2() {
    add_ln703_3259_fu_5075573_p2 = (!zext_ln203_210_fu_5044878_p1.read().is_01() || !sext_ln703_1874_fu_5075569_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_210_fu_5044878_p1.read()) + sc_bigint<12>(sext_ln703_1874_fu_5075569_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_325_fu_5055927_p2() {
    add_ln703_325_fu_5055927_p2 = (!sext_ln1118_103_fu_4996194_p1.read().is_01() || !sext_ln1118_77_fu_4994328_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_103_fu_4996194_p1.read()) + sc_bigint<9>(sext_ln1118_77_fu_4994328_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3260_fu_5075583_p2() {
    add_ln703_3260_fu_5075583_p2 = (!sext_ln203_554_fu_5044442_p1.read().is_01() || !zext_ln708_1564_fu_5044524_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_554_fu_5044442_p1.read()) + sc_biguint<10>(zext_ln708_1564_fu_5044524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3261_fu_5075593_p2() {
    add_ln703_3261_fu_5075593_p2 = (!sext_ln203_559_fu_5044770_p1.read().is_01() || !sext_ln203_556_fu_5044554_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_559_fu_5044770_p1.read()) + sc_bigint<10>(sext_ln203_556_fu_5044554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3262_fu_5075603_p2() {
    add_ln703_3262_fu_5075603_p2 = (!sext_ln703_1876_fu_5075589_p1.read().is_01() || !sext_ln703_1877_fu_5075599_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1876_fu_5075589_p1.read()) + sc_bigint<11>(sext_ln703_1877_fu_5075599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3263_fu_5075613_p2() {
    add_ln703_3263_fu_5075613_p2 = (!sext_ln703_1875_fu_5075579_p1.read().is_01() || !sext_ln703_1878_fu_5075609_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1875_fu_5075579_p1.read()) + sc_bigint<13>(sext_ln703_1878_fu_5075609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3264_fu_5075619_p2() {
    add_ln703_3264_fu_5075619_p2 = (!zext_ln203_208_fu_5044418_p1.read().is_01() || !sext_ln1118_943_fu_5041173_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_208_fu_5044418_p1.read()) + sc_bigint<9>(sext_ln1118_943_fu_5041173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3265_fu_5075629_p2() {
    add_ln703_3265_fu_5075629_p2 = (!zext_ln203_658_fu_5044460_p1.read().is_01() || !zext_ln203_657_fu_5044446_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln203_658_fu_5044460_p1.read()) + sc_biguint<7>(zext_ln203_657_fu_5044446_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3266_fu_5075639_p2() {
    add_ln703_3266_fu_5075639_p2 = (!sext_ln703_1879_fu_5075625_p1.read().is_01() || !zext_ln703_564_fu_5075635_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1879_fu_5075625_p1.read()) + sc_biguint<10>(zext_ln703_564_fu_5075635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3267_fu_5075649_p2() {
    add_ln703_3267_fu_5075649_p2 = (!zext_ln708_1566_fu_5044582_p1.read().is_01() || !zext_ln708_1565_fu_5044568_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1566_fu_5044582_p1.read()) + sc_biguint<8>(zext_ln708_1565_fu_5044568_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3268_fu_5075659_p2() {
    add_ln703_3268_fu_5075659_p2 = (!sext_ln203_558_fu_5044750_p1.read().is_01() || !zext_ln708_786_fu_5040141_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_558_fu_5044750_p1.read()) + sc_biguint<10>(zext_ln708_786_fu_5040141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3269_fu_5075665_p2() {
    add_ln703_3269_fu_5075665_p2 = (!zext_ln703_565_fu_5075655_p1.read().is_01() || !add_ln703_3268_fu_5075659_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_565_fu_5075655_p1.read()) + sc_biguint<10>(add_ln703_3268_fu_5075659_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_326_fu_5055937_p2() {
    add_ln703_326_fu_5055937_p2 = (!sext_ln708_20_fu_4996078_p1.read().is_01() || !sext_ln703_218_fu_5055933_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_20_fu_4996078_p1.read()) + sc_bigint<10>(sext_ln703_218_fu_5055933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3270_fu_5075675_p2() {
    add_ln703_3270_fu_5075675_p2 = (!sext_ln703_1880_fu_5075645_p1.read().is_01() || !sext_ln703_1881_fu_5075671_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1880_fu_5075645_p1.read()) + sc_bigint<11>(sext_ln703_1881_fu_5075671_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3271_fu_5075685_p2() {
    add_ln703_3271_fu_5075685_p2 = (!add_ln703_3263_fu_5075613_p2.read().is_01() || !sext_ln703_1882_fu_5075681_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3263_fu_5075613_p2.read()) + sc_bigint<13>(sext_ln703_1882_fu_5075681_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3273_fu_5075691_p2() {
    add_ln703_3273_fu_5075691_p2 = (!zext_ln203_664_fu_5044898_p1.read().is_01() || !ap_const_lv9_C0.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_664_fu_5044898_p1.read()) + sc_biguint<9>(ap_const_lv9_C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3274_fu_5075701_p2() {
    add_ln703_3274_fu_5075701_p2 = (!zext_ln1118_2817_fu_5044936_p1.read().is_01() || !trunc_ln203_101_fu_5044926_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2817_fu_5044936_p1.read()) + sc_biguint<9>(trunc_ln203_101_fu_5044926_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3275_fu_5075711_p2() {
    add_ln703_3275_fu_5075711_p2 = (!sext_ln1118_993_fu_5044922_p1.read().is_01() || !zext_ln703_566_fu_5075697_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_993_fu_5044922_p1.read()) + sc_biguint<11>(zext_ln703_566_fu_5075697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3276_fu_5075721_p2() {
    add_ln703_3276_fu_5075721_p2 = (!zext_ln703_567_fu_5075707_p1.read().is_01() || !sext_ln703_1884_fu_5075717_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_567_fu_5075707_p1.read()) + sc_bigint<12>(sext_ln703_1884_fu_5075717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3277_fu_5075727_p2() {
    add_ln703_3277_fu_5075727_p2 = (!sext_ln1118_996_fu_5044984_p1.read().is_01() || !sext_ln1118_994_fu_5044960_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_996_fu_5044984_p1.read()) + sc_bigint<11>(sext_ln1118_994_fu_5044960_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3278_fu_5075737_p2() {
    add_ln703_3278_fu_5075737_p2 = (!add_ln703_3276_fu_5075721_p2.read().is_01() || !sext_ln703_1885_fu_5075733_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3276_fu_5075721_p2.read()) + sc_bigint<12>(sext_ln703_1885_fu_5075733_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3279_fu_5075747_p2() {
    add_ln703_3279_fu_5075747_p2 = (!sext_ln1118_998_fu_5045104_p1.read().is_01() || !sext_ln1118_997_fu_5045020_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_998_fu_5045104_p1.read()) + sc_bigint<12>(sext_ln1118_997_fu_5045020_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_327_fu_5055947_p2() {
    add_ln703_327_fu_5055947_p2 = (!sext_ln1118_80_fu_4994376_p1.read().is_01() || !zext_ln708_1087_fu_4996136_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_80_fu_4994376_p1.read()) + sc_biguint<8>(zext_ln708_1087_fu_4996136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3280_fu_5075757_p2() {
    add_ln703_3280_fu_5075757_p2 = (!sext_ln703_1886_fu_5075743_p1.read().is_01() || !sext_ln703_1887_fu_5075753_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1886_fu_5075743_p1.read()) + sc_bigint<13>(sext_ln703_1887_fu_5075753_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3281_fu_5075763_p2() {
    add_ln703_3281_fu_5075763_p2 = (!zext_ln1118_2821_fu_5045040_p1.read().is_01() || !sext_ln1118_999_fu_5045108_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2821_fu_5045040_p1.read()) + sc_bigint<12>(sext_ln1118_999_fu_5045108_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3282_fu_5075773_p2() {
    add_ln703_3282_fu_5075773_p2 = (!zext_ln1118_2823_fu_5045090_p1.read().is_01() || !zext_ln1118_2822_fu_5045076_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2823_fu_5045090_p1.read()) + sc_biguint<10>(zext_ln1118_2822_fu_5045076_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3283_fu_5075783_p2() {
    add_ln703_3283_fu_5075783_p2 = (!sext_ln703_1889_fu_5075769_p1.read().is_01() || !zext_ln703_568_fu_5075779_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1889_fu_5075769_p1.read()) + sc_biguint<13>(zext_ln703_568_fu_5075779_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3284_fu_5087530_p2() {
    add_ln703_3284_fu_5087530_p2 = (!sext_ln703_1888_fu_5087524_p1.read().is_01() || !sext_ln703_1890_fu_5087527_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1888_fu_5087524_p1.read()) + sc_bigint<14>(sext_ln703_1890_fu_5087527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3285_fu_5087536_p2() {
    add_ln703_3285_fu_5087536_p2 = (!sext_ln1118_1001_fu_5080640_p1.read().is_01() || !add_ln703_3284_fu_5087530_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1001_fu_5080640_p1.read()) + sc_biguint<14>(add_ln703_3284_fu_5087530_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3286_fu_5075789_p2() {
    add_ln703_3286_fu_5075789_p2 = (!sext_ln1118_1004_fu_5045244_p1.read().is_01() || !zext_ln708_1569_fu_5045196_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1004_fu_5045244_p1.read()) + sc_biguint<11>(zext_ln708_1569_fu_5045196_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3287_fu_5075799_p2() {
    add_ln703_3287_fu_5075799_p2 = (!sext_ln1118_1002_fu_5045176_p1.read().is_01() || !sext_ln703_1892_fu_5075795_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1002_fu_5045176_p1.read()) + sc_bigint<12>(sext_ln703_1892_fu_5075795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3288_fu_5087549_p2() {
    add_ln703_3288_fu_5087549_p2 = (!sext_ln703_1891_fu_5087542_p1.read().is_01() || !sext_ln703_1893_fu_5087546_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1891_fu_5087542_p1.read()) + sc_bigint<15>(sext_ln703_1893_fu_5087546_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3289_fu_5075805_p2() {
    add_ln703_3289_fu_5075805_p2 = (!sext_ln1118_1005_fu_5045268_p1.read().is_01() || !sext_ln1118_980_fu_5043402_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1005_fu_5045268_p1.read()) + sc_bigint<9>(sext_ln1118_980_fu_5043402_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_328_fu_5055957_p2() {
    add_ln703_328_fu_5055957_p2 = (!zext_ln1118_976_fu_4996082_p1.read().is_01() || !sext_ln703_220_fu_5055953_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_976_fu_4996082_p1.read()) + sc_bigint<9>(sext_ln703_220_fu_5055953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3290_fu_5075815_p2() {
    add_ln703_3290_fu_5075815_p2 = (!sext_ln708_260_fu_5045152_p1.read().is_01() || !sext_ln703_1894_fu_5075811_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_260_fu_5045152_p1.read()) + sc_bigint<10>(sext_ln703_1894_fu_5075811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3291_fu_5075825_p2() {
    add_ln703_3291_fu_5075825_p2 = (!sext_ln1118_983_fu_5043450_p1.read().is_01() || !zext_ln708_1570_fu_5045210_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_983_fu_5043450_p1.read()) + sc_biguint<8>(zext_ln708_1570_fu_5045210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3292_fu_5075835_p2() {
    add_ln703_3292_fu_5075835_p2 = (!zext_ln1118_2825_fu_5045156_p1.read().is_01() || !sext_ln703_1896_fu_5075831_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2825_fu_5045156_p1.read()) + sc_bigint<9>(sext_ln703_1896_fu_5075831_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3293_fu_5075845_p2() {
    add_ln703_3293_fu_5075845_p2 = (!sext_ln703_1895_fu_5075821_p1.read().is_01() || !sext_ln703_1897_fu_5075841_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1895_fu_5075821_p1.read()) + sc_bigint<11>(sext_ln703_1897_fu_5075841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3294_fu_5087558_p2() {
    add_ln703_3294_fu_5087558_p2 = (!add_ln703_3288_fu_5087549_p2.read().is_01() || !sext_ln703_1898_fu_5087555_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3288_fu_5087549_p2.read()) + sc_bigint<15>(sext_ln703_1898_fu_5087555_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3295_fu_5087564_p2() {
    add_ln703_3295_fu_5087564_p2 = (!sext_ln203_563_fu_5080643_p1.read().is_01() || !add_ln703_3294_fu_5087558_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_563_fu_5080643_p1.read()) + sc_biguint<15>(add_ln703_3294_fu_5087558_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3296_fu_5075851_p2() {
    add_ln703_3296_fu_5075851_p2 = (!sext_ln203_566_fu_5045424_p1.read().is_01() || !sext_ln203_565_fu_5045382_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_566_fu_5045424_p1.read()) + sc_bigint<12>(sext_ln203_565_fu_5045382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3297_fu_5075861_p2() {
    add_ln703_3297_fu_5075861_p2 = (!sext_ln203_564_fu_5045354_p1.read().is_01() || !sext_ln703_1899_fu_5075857_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_564_fu_5045354_p1.read()) + sc_bigint<13>(sext_ln703_1899_fu_5075857_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3298_fu_5087573_p2() {
    add_ln703_3298_fu_5087573_p2 = (!add_ln703_3295_fu_5087564_p2.read().is_01() || !sext_ln703_1900_fu_5087570_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3295_fu_5087564_p2.read()) + sc_bigint<15>(sext_ln703_1900_fu_5087570_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3299_fu_5075867_p2() {
    add_ln703_3299_fu_5075867_p2 = (!sext_ln203_561_fu_5045288_p1.read().is_01() || !zext_ln708_1571_fu_5045358_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_561_fu_5045288_p1.read()) + sc_biguint<11>(zext_ln708_1571_fu_5045358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_329_fu_5055967_p2() {
    add_ln703_329_fu_5055967_p2 = (!sext_ln703_219_fu_5055943_p1.read().is_01() || !sext_ln703_221_fu_5055963_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_219_fu_5055943_p1.read()) + sc_bigint<11>(sext_ln703_221_fu_5055963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_32_fu_5053865_p2() {
    add_ln703_32_fu_5053865_p2 = (!zext_ln1118_1655_fu_4989715_p1.read().is_01() || !add_ln703_31_fu_5053859_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1655_fu_4989715_p1.read()) + sc_biguint<10>(add_ln703_31_fu_5053859_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3300_fu_5075877_p2() {
    add_ln703_3300_fu_5075877_p2 = (!zext_ln203_211_fu_5045302_p1.read().is_01() || !sext_ln703_1901_fu_5075873_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_211_fu_5045302_p1.read()) + sc_bigint<12>(sext_ln703_1901_fu_5075873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3301_fu_5075887_p2() {
    add_ln703_3301_fu_5075887_p2 = (!sext_ln203_567_fu_5045448_p1.read().is_01() || !zext_ln203_212_fu_5045462_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_567_fu_5045448_p1.read()) + sc_biguint<9>(zext_ln203_212_fu_5045462_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3302_fu_5075897_p2() {
    add_ln703_3302_fu_5075897_p2 = (!sext_ln203_522_fu_5040979_p1.read().is_01() || !sext_ln703_1903_fu_5075893_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_522_fu_5040979_p1.read()) + sc_bigint<10>(sext_ln703_1903_fu_5075893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3303_fu_5075907_p2() {
    add_ln703_3303_fu_5075907_p2 = (!sext_ln703_1902_fu_5075883_p1.read().is_01() || !sext_ln703_1904_fu_5075903_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1902_fu_5075883_p1.read()) + sc_bigint<13>(sext_ln703_1904_fu_5075903_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3305_fu_5075913_p2() {
    add_ln703_3305_fu_5075913_p2 = (!trunc_ln203_101_fu_5044926_p4.read().is_01() || !zext_ln708_1547_fu_5043114_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_101_fu_5044926_p4.read()) + sc_biguint<9>(zext_ln708_1547_fu_5043114_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3306_fu_5075923_p2() {
    add_ln703_3306_fu_5075923_p2 = (!zext_ln708_1101_fu_5042440_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1101_fu_5042440_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3307_fu_5075929_p2() {
    add_ln703_3307_fu_5075929_p2 = (!zext_ln708_1572_fu_5045490_p1.read().is_01() || !add_ln703_3306_fu_5075923_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1572_fu_5045490_p1.read()) + sc_biguint<11>(add_ln703_3306_fu_5075923_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3308_fu_5075935_p2() {
    add_ln703_3308_fu_5075935_p2 = (!zext_ln703_569_fu_5075919_p1.read().is_01() || !add_ln703_3307_fu_5075929_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_569_fu_5075919_p1.read()) + sc_biguint<11>(add_ln703_3307_fu_5075929_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3309_fu_5075945_p2() {
    add_ln703_3309_fu_5075945_p2 = (!sext_ln203_568_fu_5045504_p1.read().is_01() || !sext_ln703_428_fu_5075941_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_568_fu_5045504_p1.read()) + sc_bigint<12>(sext_ln703_428_fu_5075941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_330_fu_5081369_p2() {
    add_ln703_330_fu_5081369_p2 = (!add_ln703_324_fu_5081360_p2.read().is_01() || !sext_ln703_222_fu_5081366_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_324_fu_5081360_p2.read()) + sc_bigint<15>(sext_ln703_222_fu_5081366_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3310_fu_5087595_p2() {
    add_ln703_3310_fu_5087595_p2 = (!sext_ln1118_1008_fu_5080649_p1.read().is_01() || !zext_ln1118_2832_fu_5080646_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1008_fu_5080649_p1.read()) + sc_biguint<12>(zext_ln1118_2832_fu_5080646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3311_fu_5087605_p2() {
    add_ln703_3311_fu_5087605_p2 = (!sext_ln703_429_fu_5087592_p1.read().is_01() || !sext_ln703_1907_fu_5087601_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_429_fu_5087592_p1.read()) + sc_bigint<13>(sext_ln703_1907_fu_5087601_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3312_fu_5075951_p2() {
    add_ln703_3312_fu_5075951_p2 = (!sext_ln1118_1011_fu_5045692_p1.read().is_01() || !sext_ln1118_999_fu_5045108_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1011_fu_5045692_p1.read()) + sc_bigint<12>(sext_ln1118_999_fu_5045108_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3313_fu_5087618_p2() {
    add_ln703_3313_fu_5087618_p2 = (!sext_ln703_430_fu_5087611_p1.read().is_01() || !sext_ln703_1908_fu_5087615_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_430_fu_5087611_p1.read()) + sc_bigint<14>(sext_ln703_1908_fu_5087615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3314_fu_5075957_p2() {
    add_ln703_3314_fu_5075957_p2 = (!sext_ln1118_1010_fu_5045586_p1.read().is_01() || !zext_ln1118_2835_fu_5045610_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1010_fu_5045586_p1.read()) + sc_biguint<10>(zext_ln1118_2835_fu_5045610_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3315_fu_5075967_p2() {
    add_ln703_3315_fu_5075967_p2 = (!zext_ln1118_2837_fu_5045656_p1.read().is_01() || !sext_ln708_262_fu_5045642_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2837_fu_5045656_p1.read()) + sc_bigint<9>(sext_ln708_262_fu_5045642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3316_fu_5075977_p2() {
    add_ln703_3316_fu_5075977_p2 = (!sext_ln703_1909_fu_5075963_p1.read().is_01() || !sext_ln703_1910_fu_5075973_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1909_fu_5075963_p1.read()) + sc_bigint<11>(sext_ln703_1910_fu_5075973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3317_fu_5087627_p2() {
    add_ln703_3317_fu_5087627_p2 = (!add_ln703_3313_fu_5087618_p2.read().is_01() || !sext_ln703_1911_fu_5087624_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3313_fu_5087618_p2.read()) + sc_bigint<14>(sext_ln703_1911_fu_5087624_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3318_fu_5087633_p2() {
    add_ln703_3318_fu_5087633_p2 = (!sext_ln1118_1014_fu_5080652_p1.read().is_01() || !add_ln703_3317_fu_5087627_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1014_fu_5080652_p1.read()) + sc_biguint<14>(add_ln703_3317_fu_5087627_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3319_fu_5075983_p2() {
    add_ln703_3319_fu_5075983_p2 = (!zext_ln708_1576_fu_5045772_p1.read().is_01() || !zext_ln708_1574_fu_5045748_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1576_fu_5045772_p1.read()) + sc_biguint<10>(zext_ln708_1574_fu_5045748_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_331_fu_5081375_p2() {
    add_ln703_331_fu_5081375_p2 = (!sext_ln203_56_fu_5080229_p1.read().is_01() || !add_ln703_330_fu_5081369_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_56_fu_5080229_p1.read()) + sc_biguint<15>(add_ln703_330_fu_5081369_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3320_fu_5087642_p2() {
    add_ln703_3320_fu_5087642_p2 = (!add_ln703_3318_fu_5087633_p2.read().is_01() || !zext_ln703_570_fu_5087639_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3318_fu_5087633_p2.read()) + sc_biguint<14>(zext_ln703_570_fu_5087639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3321_fu_5075989_p2() {
    add_ln703_3321_fu_5075989_p2 = (!trunc_ln1118_39_fu_5045838_p4.read().is_01() || !zext_ln203_662_fu_5044706_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_39_fu_5045838_p4.read()) + sc_biguint<10>(zext_ln203_662_fu_5044706_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3322_fu_5075999_p2() {
    add_ln703_3322_fu_5075999_p2 = (!zext_ln1118_2846_fu_5045906_p1.read().is_01() || !zext_ln708_1577_fu_5045868_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2846_fu_5045906_p1.read()) + sc_biguint<10>(zext_ln708_1577_fu_5045868_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3323_fu_5076009_p2() {
    add_ln703_3323_fu_5076009_p2 = (!zext_ln703_571_fu_5075995_p1.read().is_01() || !zext_ln703_572_fu_5076005_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_571_fu_5075995_p1.read()) + sc_biguint<11>(zext_ln703_572_fu_5076005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3324_fu_5087655_p2() {
    add_ln703_3324_fu_5087655_p2 = (!sext_ln703_1912_fu_5087648_p1.read().is_01() || !zext_ln703_573_fu_5087652_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1912_fu_5087648_p1.read()) + sc_biguint<15>(zext_ln703_573_fu_5087652_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3325_fu_5076015_p2() {
    add_ln703_3325_fu_5076015_p2 = (!sext_ln708_265_fu_5045942_p1.read().is_01() || !sext_ln203_569_fu_5045800_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_265_fu_5045942_p1.read()) + sc_bigint<11>(sext_ln203_569_fu_5045800_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3326_fu_5076025_p2() {
    add_ln703_3326_fu_5076025_p2 = (!sext_ln708_263_fu_5045716_p1.read().is_01() || !zext_ln708_1575_fu_5045768_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_263_fu_5045716_p1.read()) + sc_biguint<10>(zext_ln708_1575_fu_5045768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3327_fu_5076035_p2() {
    add_ln703_3327_fu_5076035_p2 = (!sext_ln703_1913_fu_5076021_p1.read().is_01() || !sext_ln703_1914_fu_5076031_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1913_fu_5076021_p1.read()) + sc_bigint<12>(sext_ln703_1914_fu_5076031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3328_fu_5076041_p2() {
    add_ln703_3328_fu_5076041_p2 = (!zext_ln1118_2841_fu_5045730_p1.read().is_01() || !sext_ln708_264_fu_5045834_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2841_fu_5045730_p1.read()) + sc_bigint<10>(sext_ln708_264_fu_5045834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3329_fu_5076051_p2() {
    add_ln703_3329_fu_5076051_p2 = (!sext_ln1118_1012_fu_5045734_p1.read().is_01() || !zext_ln1118_2845_fu_5045886_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1012_fu_5045734_p1.read()) + sc_biguint<9>(zext_ln1118_2845_fu_5045886_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_332_fu_5055973_p2() {
    add_ln703_332_fu_5055973_p2 = (!sext_ln203_59_fu_4996350_p1.read().is_01() || !sext_ln203_58_fu_4996308_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_59_fu_4996350_p1.read()) + sc_bigint<12>(sext_ln203_58_fu_4996308_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3330_fu_5076057_p2() {
    add_ln703_3330_fu_5076057_p2 = (!zext_ln1118_2842_fu_5045786_p1.read().is_01() || !add_ln703_3329_fu_5076051_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2842_fu_5045786_p1.read()) + sc_biguint<9>(add_ln703_3329_fu_5076051_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3331_fu_5076067_p2() {
    add_ln703_3331_fu_5076067_p2 = (!sext_ln703_1915_fu_5076047_p1.read().is_01() || !sext_ln703_1916_fu_5076063_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1915_fu_5076047_p1.read()) + sc_bigint<11>(sext_ln703_1916_fu_5076063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3332_fu_5076077_p2() {
    add_ln703_3332_fu_5076077_p2 = (!add_ln703_3327_fu_5076035_p2.read().is_01() || !sext_ln703_1917_fu_5076073_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3327_fu_5076035_p2.read()) + sc_bigint<12>(sext_ln703_1917_fu_5076073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3333_fu_5087664_p2() {
    add_ln703_3333_fu_5087664_p2 = (!add_ln703_3324_fu_5087655_p2.read().is_01() || !sext_ln703_1918_fu_5087661_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3324_fu_5087655_p2.read()) + sc_bigint<15>(sext_ln703_1918_fu_5087661_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3335_fu_5076083_p2() {
    add_ln703_3335_fu_5076083_p2 = (!zext_ln708_1579_fu_5045984_p1.read().is_01() || !ap_const_lv11_C0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1579_fu_5045984_p1.read()) + sc_biguint<11>(ap_const_lv11_C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3336_fu_5076093_p2() {
    add_ln703_3336_fu_5076093_p2 = (!zext_ln703_16_fu_5076089_p1.read().is_01() || !sext_ln203_570_fu_5046036_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_16_fu_5076089_p1.read()) + sc_bigint<13>(sext_ln203_570_fu_5046036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3337_fu_5076099_p2() {
    add_ln703_3337_fu_5076099_p2 = (!sext_ln708_266_fu_5045998_p1.read().is_01() || !zext_ln1118_2847_fu_5046022_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_266_fu_5045998_p1.read()) + sc_biguint<12>(zext_ln1118_2847_fu_5046022_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3338_fu_5076109_p2() {
    add_ln703_3338_fu_5076109_p2 = (!add_ln703_3336_fu_5076093_p2.read().is_01() || !sext_ln703_1920_fu_5076105_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3336_fu_5076093_p2.read()) + sc_bigint<13>(sext_ln703_1920_fu_5076105_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3339_fu_5076119_p2() {
    add_ln703_3339_fu_5076119_p2 = (!zext_ln1116_232_fu_5046063_p1.read().is_01() || !zext_ln1118_2848_fu_5046040_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_232_fu_5046063_p1.read()) + sc_biguint<10>(zext_ln1118_2848_fu_5046040_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_333_fu_5055983_p2() {
    add_ln703_333_fu_5055983_p2 = (!sext_ln203_57_fu_4996280_p1.read().is_01() || !sext_ln703_223_fu_5055979_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_57_fu_4996280_p1.read()) + sc_bigint<13>(sext_ln703_223_fu_5055979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3340_fu_5076129_p2() {
    add_ln703_3340_fu_5076129_p2 = (!sext_ln703_433_fu_5076115_p1.read().is_01() || !zext_ln703_574_fu_5076125_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_433_fu_5076115_p1.read()) + sc_biguint<14>(zext_ln703_574_fu_5076125_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3341_fu_5076135_p2() {
    add_ln703_3341_fu_5076135_p2 = (!sext_ln1118_1016_fu_5046113_p1.read().is_01() || !sext_ln1118_1015_fu_5046044_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1016_fu_5046113_p1.read()) + sc_bigint<10>(sext_ln1118_1015_fu_5046044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3342_fu_5076141_p2() {
    add_ln703_3342_fu_5076141_p2 = (!sext_ln203_571_fu_5046093_p1.read().is_01() || !zext_ln708_1525_fu_5040591_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_571_fu_5046093_p1.read()) + sc_biguint<8>(zext_ln708_1525_fu_5040591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3343_fu_5076151_p2() {
    add_ln703_3343_fu_5076151_p2 = (!add_ln703_3341_fu_5076135_p2.read().is_01() || !sext_ln703_1921_fu_5076147_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3341_fu_5076135_p2.read()) + sc_bigint<10>(sext_ln703_1921_fu_5076147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3344_fu_5076161_p2() {
    add_ln703_3344_fu_5076161_p2 = (!add_ln703_3340_fu_5076129_p2.read().is_01() || !sext_ln703_1922_fu_5076157_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3340_fu_5076129_p2.read()) + sc_bigint<14>(sext_ln703_1922_fu_5076157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3345_fu_5076167_p2() {
    add_ln703_3345_fu_5076167_p2 = (!sext_ln708_268_fu_5046285_p1.read().is_01() || !sext_ln1118_1018_fu_5046175_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_268_fu_5046285_p1.read()) + sc_bigint<12>(sext_ln1118_1018_fu_5046175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3346_fu_5087683_p2() {
    add_ln703_3346_fu_5087683_p2 = (!add_ln703_3344_reg_5093769.read().is_01() || !sext_ln703_1923_fu_5087680_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3344_reg_5093769.read()) + sc_bigint<14>(sext_ln703_1923_fu_5087680_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3347_fu_5076173_p2() {
    add_ln703_3347_fu_5076173_p2 = (!zext_ln708_1581_fu_5046312_p1.read().is_01() || !zext_ln1116_233_fu_5046235_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1581_fu_5046312_p1.read()) + sc_biguint<10>(zext_ln1116_233_fu_5046235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3348_fu_5076183_p2() {
    add_ln703_3348_fu_5076183_p2 = (!zext_ln708_1580_fu_5046157_p1.read().is_01() || !zext_ln703_575_fu_5076179_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1580_fu_5046157_p1.read()) + sc_biguint<11>(zext_ln703_575_fu_5076179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3349_fu_5087691_p2() {
    add_ln703_3349_fu_5087691_p2 = (!add_ln703_3346_fu_5087683_p2.read().is_01() || !zext_ln703_576_fu_5087688_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3346_fu_5087683_p2.read()) + sc_biguint<14>(zext_ln703_576_fu_5087688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_334_fu_5081384_p2() {
    add_ln703_334_fu_5081384_p2 = (!add_ln703_331_fu_5081375_p2.read().is_01() || !sext_ln703_224_fu_5081381_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_331_fu_5081375_p2.read()) + sc_bigint<15>(sext_ln703_224_fu_5081381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3350_fu_5076189_p2() {
    add_ln703_3350_fu_5076189_p2 = (!zext_ln1116_234_fu_5046394_p1.read().is_01() || !trunc_ln1118_40_fu_5046364_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_234_fu_5046394_p1.read()) + sc_biguint<10>(trunc_ln1118_40_fu_5046364_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3351_fu_5076199_p2() {
    add_ln703_3351_fu_5076199_p2 = (!zext_ln708_1582_fu_5046326_p1.read().is_01() || !zext_ln703_577_fu_5076195_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1582_fu_5046326_p1.read()) + sc_biguint<11>(zext_ln703_577_fu_5076195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3352_fu_5076209_p2() {
    add_ln703_3352_fu_5076209_p2 = (!sext_ln1116_76_fu_5046350_p1.read().is_01() || !sext_ln708_267_fu_5046221_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_76_fu_5046350_p1.read()) + sc_bigint<11>(sext_ln708_267_fu_5046221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3353_fu_5076215_p2() {
    add_ln703_3353_fu_5076215_p2 = (!sext_ln1118_1017_fu_5046133_p1.read().is_01() || !zext_ln708_1071_fu_5039857_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1017_fu_5046133_p1.read()) + sc_biguint<10>(zext_ln708_1071_fu_5039857_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3354_fu_5076225_p2() {
    add_ln703_3354_fu_5076225_p2 = (!add_ln703_3352_fu_5076209_p2.read().is_01() || !sext_ln703_1925_fu_5076221_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3352_fu_5076209_p2.read()) + sc_bigint<11>(sext_ln703_1925_fu_5076221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3355_fu_5076235_p2() {
    add_ln703_3355_fu_5076235_p2 = (!zext_ln703_578_fu_5076205_p1.read().is_01() || !sext_ln703_1926_fu_5076231_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_578_fu_5076205_p1.read()) + sc_bigint<13>(sext_ln703_1926_fu_5076231_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3356_fu_5087704_p2() {
    add_ln703_3356_fu_5087704_p2 = (!sext_ln703_1924_fu_5087697_p1.read().is_01() || !sext_ln703_1927_fu_5087701_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1924_fu_5087697_p1.read()) + sc_bigint<15>(sext_ln703_1927_fu_5087701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3357_fu_5087710_p2() {
    add_ln703_3357_fu_5087710_p2 = (!sext_ln203_574_fu_5080658_p1.read().is_01() || !add_ln703_3356_fu_5087704_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_574_fu_5080658_p1.read()) + sc_biguint<15>(add_ln703_3356_fu_5087704_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3358_fu_5076241_p2() {
    add_ln703_3358_fu_5076241_p2 = (!zext_ln203_215_fu_5046541_p1.read().is_01() || !sext_ln203_577_fu_5046589_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_215_fu_5046541_p1.read()) + sc_bigint<12>(sext_ln203_577_fu_5046589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3359_fu_5087719_p2() {
    add_ln703_3359_fu_5087719_p2 = (!add_ln703_3357_fu_5087710_p2.read().is_01() || !sext_ln703_1928_fu_5087716_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3357_fu_5087710_p2.read()) + sc_bigint<15>(sext_ln703_1928_fu_5087716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_335_fu_5055989_p2() {
    add_ln703_335_fu_5055989_p2 = (!sext_ln203_54_fu_4996214_p1.read().is_01() || !zext_ln708_1088_fu_4996284_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_54_fu_4996214_p1.read()) + sc_biguint<11>(zext_ln708_1088_fu_4996284_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3360_fu_5076247_p2() {
    add_ln703_3360_fu_5076247_p2 = (!sext_ln203_572_fu_5046426_p1.read().is_01() || !zext_ln203_216_fu_5046609_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_572_fu_5046426_p1.read()) + sc_biguint<12>(zext_ln203_216_fu_5046609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3361_fu_5076257_p2() {
    add_ln703_3361_fu_5076257_p2 = (!sext_ln203_576_fu_5046565_p1.read().is_01() || !sext_ln203_575_fu_5046512_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_576_fu_5046565_p1.read()) + sc_bigint<10>(sext_ln203_575_fu_5046512_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3362_fu_5076267_p2() {
    add_ln703_3362_fu_5076267_p2 = (!sext_ln203_573_fu_5046458_p1.read().is_01() || !sext_ln703_1930_fu_5076263_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_573_fu_5046458_p1.read()) + sc_bigint<11>(sext_ln703_1930_fu_5076263_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3363_fu_5076277_p2() {
    add_ln703_3363_fu_5076277_p2 = (!sext_ln703_1929_fu_5076253_p1.read().is_01() || !sext_ln703_1931_fu_5076273_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1929_fu_5076253_p1.read()) + sc_bigint<13>(sext_ln703_1931_fu_5076273_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3366_fu_5076287_p2() {
    add_ln703_3366_fu_5076287_p2 = (!zext_ln703_17_fu_5076283_p1.read().is_01() || !zext_ln708_1522_fu_5040429_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_17_fu_5076283_p1.read()) + sc_biguint<10>(zext_ln708_1522_fu_5040429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3367_fu_5076297_p2() {
    add_ln703_3367_fu_5076297_p2 = (!sext_ln203_578_fu_5046623_p1.read().is_01() || !zext_ln703_18_fu_5076293_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_578_fu_5046623_p1.read()) + sc_biguint<12>(zext_ln703_18_fu_5076293_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3368_fu_5076303_p2() {
    add_ln703_3368_fu_5076303_p2 = (!zext_ln1118_2863_fu_5046647_p1.read().is_01() || !add_ln703_3367_fu_5076297_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2863_fu_5046647_p1.read()) + sc_biguint<12>(add_ln703_3367_fu_5076297_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3369_fu_5076313_p2() {
    add_ln703_3369_fu_5076313_p2 = (!sext_ln203_579_fu_5046643_p1.read().is_01() || !zext_ln708_1583_fu_5046667_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_579_fu_5046643_p1.read()) + sc_biguint<11>(zext_ln708_1583_fu_5046667_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_336_fu_5055999_p2() {
    add_ln703_336_fu_5055999_p2 = (!zext_ln203_22_fu_4996228_p1.read().is_01() || !sext_ln703_225_fu_5055995_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_22_fu_4996228_p1.read()) + sc_bigint<12>(sext_ln703_225_fu_5055995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3370_fu_5076323_p2() {
    add_ln703_3370_fu_5076323_p2 = (!sext_ln703_1934_fu_5076309_p1.read().is_01() || !sext_ln703_1935_fu_5076319_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1934_fu_5076309_p1.read()) + sc_bigint<13>(sext_ln703_1935_fu_5076319_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3371_fu_5076329_p2() {
    add_ln703_3371_fu_5076329_p2 = (!zext_ln1118_2866_fu_5046733_p1.read().is_01() || !sext_ln1118_1023_fu_5046757_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2866_fu_5046733_p1.read()) + sc_bigint<12>(sext_ln1118_1023_fu_5046757_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3372_fu_5076339_p2() {
    add_ln703_3372_fu_5076339_p2 = (!add_ln703_3370_fu_5076323_p2.read().is_01() || !sext_ln703_1936_fu_5076335_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3370_fu_5076323_p2.read()) + sc_bigint<13>(sext_ln703_1936_fu_5076335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3373_fu_5076345_p2() {
    add_ln703_3373_fu_5076345_p2 = (!sext_ln1118_1022_fu_5046701_p1.read().is_01() || !sext_ln1118_978_fu_5043212_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1022_fu_5046701_p1.read()) + sc_bigint<10>(sext_ln1118_978_fu_5043212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3374_fu_5076355_p2() {
    add_ln703_3374_fu_5076355_p2 = (!zext_ln1118_2864_fu_5046681_p1.read().is_01() || !sext_ln708_262_fu_5045642_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2864_fu_5046681_p1.read()) + sc_bigint<9>(sext_ln708_262_fu_5045642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3375_fu_5076365_p2() {
    add_ln703_3375_fu_5076365_p2 = (!sext_ln703_1938_fu_5076351_p1.read().is_01() || !sext_ln703_1939_fu_5076361_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1938_fu_5076351_p1.read()) + sc_bigint<11>(sext_ln703_1939_fu_5076361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3376_fu_5087744_p2() {
    add_ln703_3376_fu_5087744_p2 = (!sext_ln703_1937_fu_5087738_p1.read().is_01() || !sext_ln703_1940_fu_5087741_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1937_fu_5087738_p1.read()) + sc_bigint<14>(sext_ln703_1940_fu_5087741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3377_fu_5087750_p2() {
    add_ln703_3377_fu_5087750_p2 = (!sext_ln1118_1026_fu_5080664_p1.read().is_01() || !zext_ln1118_2868_fu_5080661_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1026_fu_5080664_p1.read()) + sc_biguint<12>(zext_ln1118_2868_fu_5080661_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3378_fu_5087760_p2() {
    add_ln703_3378_fu_5087760_p2 = (!add_ln703_3376_fu_5087744_p2.read().is_01() || !sext_ln703_1941_fu_5087756_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3376_fu_5087744_p2.read()) + sc_bigint<14>(sext_ln703_1941_fu_5087756_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3379_fu_5076371_p2() {
    add_ln703_3379_fu_5076371_p2 = (!zext_ln1118_2870_fu_5046837_p1.read().is_01() || !sext_ln1118_1027_fu_5046905_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2870_fu_5046837_p1.read()) + sc_bigint<12>(sext_ln1118_1027_fu_5046905_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_337_fu_5056009_p2() {
    add_ln703_337_fu_5056009_p2 = (!sext_ln203_60_fu_4996374_p1.read().is_01() || !zext_ln203_23_fu_4996388_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_60_fu_4996374_p1.read()) + sc_biguint<9>(zext_ln203_23_fu_4996388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3380_fu_5076381_p2() {
    add_ln703_3380_fu_5076381_p2 = (!sext_ln203_580_fu_5046857_p1.read().is_01() || !sext_ln703_1942_fu_5076377_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_580_fu_5046857_p1.read()) + sc_bigint<13>(sext_ln703_1942_fu_5076377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3381_fu_5087769_p2() {
    add_ln703_3381_fu_5087769_p2 = (!add_ln703_3378_fu_5087760_p2.read().is_01() || !sext_ln703_1943_fu_5087766_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3378_fu_5087760_p2.read()) + sc_bigint<14>(sext_ln703_1943_fu_5087766_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3382_fu_5076387_p2() {
    add_ln703_3382_fu_5076387_p2 = (!zext_ln1118_2634_fu_5038098_p1.read().is_01() || !sext_ln1116_75_fu_5046346_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2634_fu_5038098_p1.read()) + sc_bigint<10>(sext_ln1116_75_fu_5046346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3383_fu_5076393_p2() {
    add_ln703_3383_fu_5076393_p2 = (!zext_ln708_1584_fu_5046877_p1.read().is_01() || !add_ln703_3382_fu_5076387_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1584_fu_5046877_p1.read()) + sc_biguint<10>(add_ln703_3382_fu_5076387_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3384_fu_5076403_p2() {
    add_ln703_3384_fu_5076403_p2 = (!sext_ln1118_1025_fu_5046813_p1.read().is_01() || !sext_ln1118_1024_fu_5046793_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_1025_fu_5046813_p1.read()) + sc_bigint<7>(sext_ln1118_1024_fu_5046793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3385_fu_5076413_p2() {
    add_ln703_3385_fu_5076413_p2 = (!sext_ln1118_1028_fu_5046929_p1.read().is_01() || !sext_ln703_1946_fu_5076409_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_1028_fu_5046929_p1.read()) + sc_bigint<8>(sext_ln703_1946_fu_5076409_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3386_fu_5076423_p2() {
    add_ln703_3386_fu_5076423_p2 = (!sext_ln703_1945_fu_5076399_p1.read().is_01() || !sext_ln703_1947_fu_5076419_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1945_fu_5076399_p1.read()) + sc_bigint<11>(sext_ln703_1947_fu_5076419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3387_fu_5087782_p2() {
    add_ln703_3387_fu_5087782_p2 = (!sext_ln703_1944_fu_5087775_p1.read().is_01() || !sext_ln703_1948_fu_5087779_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1944_fu_5087775_p1.read()) + sc_bigint<15>(sext_ln703_1948_fu_5087779_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3388_fu_5087788_p2() {
    add_ln703_3388_fu_5087788_p2 = (!zext_ln203_217_fu_5080667_p1.read().is_01() || !add_ln703_3387_fu_5087782_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_217_fu_5080667_p1.read()) + sc_biguint<15>(add_ln703_3387_fu_5087782_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3389_fu_5076429_p2() {
    add_ln703_3389_fu_5076429_p2 = (!zext_ln203_218_fu_5046953_p1.read().is_01() || !sext_ln203_582_fu_5047013_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_218_fu_5046953_p1.read()) + sc_bigint<12>(sext_ln203_582_fu_5047013_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_338_fu_5056019_p2() {
    add_ln703_338_fu_5056019_p2 = (!sext_ln203_15_fu_4991905_p1.read().is_01() || !sext_ln703_227_fu_5056015_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_15_fu_4991905_p1.read()) + sc_bigint<10>(sext_ln703_227_fu_5056015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3390_fu_5076439_p2() {
    add_ln703_3390_fu_5076439_p2 = (!sext_ln203_581_fu_5046999_p1.read().is_01() || !sext_ln703_1949_fu_5076435_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_581_fu_5046999_p1.read()) + sc_bigint<13>(sext_ln703_1949_fu_5076435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3391_fu_5087797_p2() {
    add_ln703_3391_fu_5087797_p2 = (!add_ln703_3388_fu_5087788_p2.read().is_01() || !sext_ln703_1950_fu_5087794_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3388_fu_5087788_p2.read()) + sc_bigint<15>(sext_ln703_1950_fu_5087794_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3392_fu_5076445_p2() {
    add_ln703_3392_fu_5076445_p2 = (!zext_ln203_665_fu_5047089_p1.read().is_01() || !trunc_ln203_102_fu_5046957_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_665_fu_5047089_p1.read()) + sc_biguint<10>(trunc_ln203_102_fu_5046957_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3393_fu_5076455_p2() {
    add_ln703_3393_fu_5076455_p2 = (!sext_ln203_583_fu_5047017_p1.read().is_01() || !sext_ln203_584_fu_5047049_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_583_fu_5047017_p1.read()) + sc_bigint<9>(sext_ln203_584_fu_5047049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3394_fu_5076465_p2() {
    add_ln703_3394_fu_5076465_p2 = (!sext_ln203_585_fu_5047069_p1.read().is_01() || !sext_ln703_1951_fu_5076461_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_585_fu_5047069_p1.read()) + sc_bigint<11>(sext_ln703_1951_fu_5076461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3395_fu_5076475_p2() {
    add_ln703_3395_fu_5076475_p2 = (!zext_ln703_579_fu_5076451_p1.read().is_01() || !sext_ln703_1952_fu_5076471_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_579_fu_5076451_p1.read()) + sc_bigint<12>(sext_ln703_1952_fu_5076471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3397_fu_5076489_p2() {
    add_ln703_3397_fu_5076489_p2 = (!sext_ln203_589_fu_5047165_p1.read().is_01() || !sext_ln203_586_fu_5047147_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_589_fu_5047165_p1.read()) + sc_bigint<12>(sext_ln203_586_fu_5047147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3398_fu_5076499_p2() {
    add_ln703_3398_fu_5076499_p2 = (!or_ln703_14_fu_5076481_p3.read().is_01() || !sext_ln703_1955_fu_5076495_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_14_fu_5076481_p3.read()) + sc_bigint<16>(sext_ln703_1955_fu_5076495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3399_fu_5076505_p2() {
    add_ln703_3399_fu_5076505_p2 = (!sext_ln203_591_fu_5047237_p1.read().is_01() || !sext_ln203_590_fu_5047217_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_591_fu_5047237_p1.read()) + sc_bigint<12>(sext_ln203_590_fu_5047217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_339_fu_5056029_p2() {
    add_ln703_339_fu_5056029_p2 = (!sext_ln703_226_fu_5056005_p1.read().is_01() || !sext_ln703_228_fu_5056025_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_226_fu_5056005_p1.read()) + sc_bigint<13>(sext_ln703_228_fu_5056025_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_33_fu_5053875_p2() {
    add_ln703_33_fu_5053875_p2 = (!sext_ln1118_9_fu_4989701_p1.read().is_01() || !sext_ln1118_11_fu_4989761_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_9_fu_4989701_p1.read()) + sc_bigint<10>(sext_ln1118_11_fu_4989761_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3400_fu_5076515_p2() {
    add_ln703_3400_fu_5076515_p2 = (!zext_ln203_220_fu_5047117_p1.read().is_01() || !sext_ln203_592_fu_5047335_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_220_fu_5047117_p1.read()) + sc_bigint<12>(sext_ln203_592_fu_5047335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3401_fu_5076525_p2() {
    add_ln703_3401_fu_5076525_p2 = (!sext_ln703_1956_fu_5076511_p1.read().is_01() || !sext_ln703_1957_fu_5076521_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1956_fu_5076511_p1.read()) + sc_bigint<13>(sext_ln703_1957_fu_5076521_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3402_fu_5076535_p2() {
    add_ln703_3402_fu_5076535_p2 = (!add_ln703_3398_fu_5076499_p2.read().is_01() || !sext_ln703_1958_fu_5076531_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3398_fu_5076499_p2.read()) + sc_bigint<16>(sext_ln703_1958_fu_5076531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3403_fu_5076541_p2() {
    add_ln703_3403_fu_5076541_p2 = (!zext_ln1118_2718_fu_5040651_p1.read().is_01() || !zext_ln1118_2823_fu_5045090_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2718_fu_5040651_p1.read()) + sc_biguint<10>(zext_ln1118_2823_fu_5045090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3404_fu_5076551_p2() {
    add_ln703_3404_fu_5076551_p2 = (!zext_ln203_660_fu_5044634_p1.read().is_01() || !zext_ln1116_233_fu_5046235_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_660_fu_5044634_p1.read()) + sc_biguint<10>(zext_ln1116_233_fu_5046235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3405_fu_5076561_p2() {
    add_ln703_3405_fu_5076561_p2 = (!zext_ln703_580_fu_5076547_p1.read().is_01() || !zext_ln703_581_fu_5076557_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_580_fu_5076547_p1.read()) + sc_biguint<11>(zext_ln703_581_fu_5076557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3406_fu_5076571_p2() {
    add_ln703_3406_fu_5076571_p2 = (!zext_ln708_1586_fu_5047285_p1.read().is_01() || !zext_ln708_1543_fu_5042860_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1586_fu_5047285_p1.read()) + sc_biguint<11>(zext_ln708_1543_fu_5042860_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3407_fu_5076581_p2() {
    add_ln703_3407_fu_5076581_p2 = (!zext_ln708_1562_fu_5044228_p1.read().is_01() || !zext_ln708_1587_fu_5047375_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1562_fu_5044228_p1.read()) + sc_biguint<11>(zext_ln708_1587_fu_5047375_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3408_fu_5076591_p2() {
    add_ln703_3408_fu_5076591_p2 = (!zext_ln703_583_fu_5076577_p1.read().is_01() || !zext_ln703_584_fu_5076587_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_583_fu_5076577_p1.read()) + sc_biguint<12>(zext_ln703_584_fu_5076587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3409_fu_5076597_p2() {
    add_ln703_3409_fu_5076597_p2 = (!zext_ln703_582_fu_5076567_p1.read().is_01() || !add_ln703_3408_fu_5076591_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_582_fu_5076567_p1.read()) + sc_biguint<12>(add_ln703_3408_fu_5076591_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3410_fu_5087819_p2() {
    add_ln703_3410_fu_5087819_p2 = (!add_ln703_3402_reg_5093829.read().is_01() || !zext_ln703_585_fu_5087816_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3402_reg_5093829.read()) + sc_biguint<16>(zext_ln703_585_fu_5087816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3411_fu_5076603_p2() {
    add_ln703_3411_fu_5076603_p2 = (!sext_ln203_594_fu_5047403_p1.read().is_01() || !zext_ln708_1588_fu_5047461_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_594_fu_5047403_p1.read()) + sc_biguint<11>(zext_ln708_1588_fu_5047461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3412_fu_5076613_p2() {
    add_ln703_3412_fu_5076613_p2 = (!zext_ln203_222_fu_5047379_p1.read().is_01() || !sext_ln703_1959_fu_5076609_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_222_fu_5047379_p1.read()) + sc_bigint<12>(sext_ln703_1959_fu_5076609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3413_fu_5076623_p2() {
    add_ln703_3413_fu_5076623_p2 = (!zext_ln203_221_fu_5047185_p1.read().is_01() || !sext_ln203_595_fu_5047437_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_221_fu_5047185_p1.read()) + sc_bigint<11>(sext_ln203_595_fu_5047437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3414_fu_5076633_p2() {
    add_ln703_3414_fu_5076633_p2 = (!zext_ln203_223_fu_5047383_p1.read().is_01() || !zext_ln708_1585_fu_5047257_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_223_fu_5047383_p1.read()) + sc_biguint<10>(zext_ln708_1585_fu_5047257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3415_fu_5076643_p2() {
    add_ln703_3415_fu_5076643_p2 = (!sext_ln703_1961_fu_5076629_p1.read().is_01() || !zext_ln703_586_fu_5076639_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1961_fu_5076629_p1.read()) + sc_biguint<12>(zext_ln703_586_fu_5076639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3416_fu_5076653_p2() {
    add_ln703_3416_fu_5076653_p2 = (!sext_ln703_1960_fu_5076619_p1.read().is_01() || !sext_ln703_1962_fu_5076649_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1960_fu_5076619_p1.read()) + sc_bigint<13>(sext_ln703_1962_fu_5076649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3417_fu_5076659_p2() {
    add_ln703_3417_fu_5076659_p2 = (!sext_ln203_593_fu_5047355_p1.read().is_01() || !zext_ln203_219_fu_5047113_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_593_fu_5047355_p1.read()) + sc_biguint<9>(zext_ln203_219_fu_5047113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3418_fu_5076669_p2() {
    add_ln703_3418_fu_5076669_p2 = (!zext_ln203_667_fu_5047203_p1.read().is_01() || !zext_ln203_666_fu_5047189_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln203_667_fu_5047203_p1.read()) + sc_biguint<6>(zext_ln203_666_fu_5047189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3419_fu_5076679_p2() {
    add_ln703_3419_fu_5076679_p2 = (!sext_ln703_1963_fu_5076665_p1.read().is_01() || !zext_ln703_587_fu_5076675_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1963_fu_5076665_p1.read()) + sc_biguint<10>(zext_ln703_587_fu_5076675_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_341_fu_5056035_p2() {
    add_ln703_341_fu_5056035_p2 = (!trunc_ln203_69_fu_4995852_p4.read().is_01() || !zext_ln708_1028_fu_4994040_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_69_fu_4995852_p4.read()) + sc_biguint<9>(zext_ln708_1028_fu_4994040_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3420_fu_5076685_p2() {
    add_ln703_3420_fu_5076685_p2 = (!zext_ln203_669_fu_5047299_p1.read().is_01() || !zext_ln203_668_fu_5047261_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln203_669_fu_5047299_p1.read()) + sc_biguint<7>(zext_ln203_668_fu_5047261_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3421_fu_5076695_p2() {
    add_ln703_3421_fu_5076695_p2 = (!sext_ln203_588_fu_5047151_p1.read().is_01() || !sext_ln1118_915_fu_5038867_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_588_fu_5047151_p1.read()) + sc_bigint<8>(sext_ln1118_915_fu_5038867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3422_fu_5076705_p2() {
    add_ln703_3422_fu_5076705_p2 = (!zext_ln703_588_fu_5076691_p1.read().is_01() || !sext_ln703_1964_fu_5076701_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_588_fu_5076691_p1.read()) + sc_bigint<9>(sext_ln703_1964_fu_5076701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3423_fu_5076715_p2() {
    add_ln703_3423_fu_5076715_p2 = (!add_ln703_3419_fu_5076679_p2.read().is_01() || !sext_ln703_1965_fu_5076711_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3419_fu_5076679_p2.read()) + sc_bigint<10>(sext_ln703_1965_fu_5076711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3424_fu_5076725_p2() {
    add_ln703_3424_fu_5076725_p2 = (!add_ln703_3416_fu_5076653_p2.read().is_01() || !sext_ln703_1966_fu_5076721_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3416_fu_5076653_p2.read()) + sc_bigint<13>(sext_ln703_1966_fu_5076721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3426_fu_5076743_p2() {
    add_ln703_3426_fu_5076743_p2 = (!zext_ln703_589_fu_5076739_p1.read().is_01() || !sext_ln1118_964_fu_5042492_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_589_fu_5076739_p1.read()) + sc_bigint<10>(sext_ln1118_964_fu_5042492_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3427_fu_5076753_p2() {
    add_ln703_3427_fu_5076753_p2 = (!sext_ln1118_1032_fu_5047495_p1.read().is_01() || !sext_ln703_1968_fu_5076749_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1032_fu_5047495_p1.read()) + sc_bigint<12>(sext_ln703_1968_fu_5076749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3428_fu_5076763_p2() {
    add_ln703_3428_fu_5076763_p2 = (!sext_ln1118_1033_fu_5047499_p1.read().is_01() || !zext_ln708_1573_fu_5045524_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1033_fu_5047499_p1.read()) + sc_biguint<11>(zext_ln708_1573_fu_5045524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3429_fu_5076773_p2() {
    add_ln703_3429_fu_5076773_p2 = (!sext_ln703_1969_fu_5076759_p1.read().is_01() || !sext_ln703_1970_fu_5076769_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1969_fu_5076759_p1.read()) + sc_bigint<13>(sext_ln703_1970_fu_5076769_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_342_fu_5056045_p2() {
    add_ln703_342_fu_5056045_p2 = (!zext_ln708_80_fu_4993366_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_80_fu_4993366_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3430_fu_5076779_p2() {
    add_ln703_3430_fu_5076779_p2 = (!sext_ln1118_1035_fu_5047543_p1.read().is_01() || !sext_ln708_270_fu_5047513_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1035_fu_5047543_p1.read()) + sc_bigint<12>(sext_ln708_270_fu_5047513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3431_fu_5076789_p2() {
    add_ln703_3431_fu_5076789_p2 = (!add_ln703_3429_fu_5076773_p2.read().is_01() || !sext_ln703_1971_fu_5076785_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3429_fu_5076773_p2.read()) + sc_bigint<13>(sext_ln703_1971_fu_5076785_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3432_fu_5076799_p2() {
    add_ln703_3432_fu_5076799_p2 = (!sext_ln1118_1022_fu_5046701_p1.read().is_01() || !sext_ln1118_1010_fu_5045586_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1022_fu_5046701_p1.read()) + sc_bigint<10>(sext_ln1118_1010_fu_5045586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3433_fu_5076805_p2() {
    add_ln703_3433_fu_5076805_p2 = (!zext_ln708_1549_fu_5043276_p1.read().is_01() || !add_ln703_3432_fu_5076799_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1549_fu_5043276_p1.read()) + sc_biguint<10>(add_ln703_3432_fu_5076799_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3434_fu_5076815_p2() {
    add_ln703_3434_fu_5076815_p2 = (!sext_ln703_1972_fu_5076795_p1.read().is_01() || !sext_ln703_1973_fu_5076811_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1972_fu_5076795_p1.read()) + sc_bigint<14>(sext_ln703_1973_fu_5076811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3435_fu_5076821_p2() {
    add_ln703_3435_fu_5076821_p2 = (!sext_ln708_271_fu_5047677_p1.read().is_01() || !sext_ln203_596_fu_5047601_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_271_fu_5047677_p1.read()) + sc_bigint<12>(sext_ln203_596_fu_5047601_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3436_fu_5076831_p2() {
    add_ln703_3436_fu_5076831_p2 = (!add_ln703_3434_fu_5076815_p2.read().is_01() || !sext_ln703_1974_fu_5076827_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3434_fu_5076815_p2.read()) + sc_bigint<14>(sext_ln703_1974_fu_5076827_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3437_fu_5076837_p2() {
    add_ln703_3437_fu_5076837_p2 = (!zext_ln708_1589_fu_5047625_p1.read().is_01() || !zext_ln1118_2883_fu_5047587_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1589_fu_5047625_p1.read()) + sc_biguint<9>(zext_ln1118_2883_fu_5047587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3438_fu_5076847_p2() {
    add_ln703_3438_fu_5076847_p2 = (!zext_ln708_1591_fu_5047709_p1.read().is_01() || !zext_ln708_1590_fu_5047657_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1591_fu_5047709_p1.read()) + sc_biguint<11>(zext_ln708_1590_fu_5047657_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3439_fu_5076857_p2() {
    add_ln703_3439_fu_5076857_p2 = (!zext_ln703_590_fu_5076843_p1.read().is_01() || !zext_ln703_591_fu_5076853_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_590_fu_5076843_p1.read()) + sc_biguint<12>(zext_ln703_591_fu_5076853_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_343_fu_5056051_p2() {
    add_ln703_343_fu_5056051_p2 = (!zext_ln708_1089_fu_4996416_p1.read().is_01() || !add_ln703_342_fu_5056045_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1089_fu_4996416_p1.read()) + sc_biguint<11>(add_ln703_342_fu_5056045_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3440_fu_5087839_p2() {
    add_ln703_3440_fu_5087839_p2 = (!sext_ln703_1975_fu_5087833_p1.read().is_01() || !zext_ln703_592_fu_5087836_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1975_fu_5087833_p1.read()) + sc_biguint<15>(zext_ln703_592_fu_5087836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3441_fu_5076863_p2() {
    add_ln703_3441_fu_5076863_p2 = (!zext_ln708_1593_fu_5047737_p1.read().is_01() || !zext_ln708_1592_fu_5047723_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1593_fu_5047737_p1.read()) + sc_biguint<11>(zext_ln708_1592_fu_5047723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3442_fu_5076873_p2() {
    add_ln703_3442_fu_5076873_p2 = (!sext_ln1118_1036_fu_5047567_p1.read().is_01() || !zext_ln203_224_fu_5047769_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1036_fu_5047567_p1.read()) + sc_biguint<12>(zext_ln203_224_fu_5047769_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3443_fu_5076883_p2() {
    add_ln703_3443_fu_5076883_p2 = (!zext_ln703_593_fu_5076869_p1.read().is_01() || !sext_ln703_1976_fu_5076879_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_593_fu_5076869_p1.read()) + sc_bigint<13>(sext_ln703_1976_fu_5076879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3444_fu_5076889_p2() {
    add_ln703_3444_fu_5076889_p2 = (!zext_ln708_1133_fu_5044710_p1.read().is_01() || !sext_ln1118_973_fu_5042836_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1133_fu_5044710_p1.read()) + sc_bigint<11>(sext_ln1118_973_fu_5042836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3445_fu_5076899_p2() {
    add_ln703_3445_fu_5076899_p2 = (!zext_ln203_206_fu_5044166_p1.read().is_01() || !zext_ln1118_2802_fu_5043986_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_206_fu_5044166_p1.read()) + sc_biguint<9>(zext_ln1118_2802_fu_5043986_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3446_fu_5076909_p2() {
    add_ln703_3446_fu_5076909_p2 = (!sext_ln703_1977_fu_5076895_p1.read().is_01() || !zext_ln703_594_fu_5076905_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1977_fu_5076895_p1.read()) + sc_biguint<12>(zext_ln703_594_fu_5076905_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3447_fu_5076919_p2() {
    add_ln703_3447_fu_5076919_p2 = (!add_ln703_3443_fu_5076883_p2.read().is_01() || !sext_ln703_1978_fu_5076915_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3443_fu_5076883_p2.read()) + sc_bigint<13>(sext_ln703_1978_fu_5076915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3448_fu_5087848_p2() {
    add_ln703_3448_fu_5087848_p2 = (!add_ln703_3440_fu_5087839_p2.read().is_01() || !sext_ln703_1979_fu_5087845_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3440_fu_5087839_p2.read()) + sc_bigint<15>(sext_ln703_1979_fu_5087845_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3449_fu_5087854_p2() {
    add_ln703_3449_fu_5087854_p2 = (!sext_ln203_597_fu_5080670_p1.read().is_01() || !add_ln703_3448_fu_5087848_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_597_fu_5080670_p1.read()) + sc_biguint<15>(add_ln703_3448_fu_5087848_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_344_fu_5056057_p2() {
    add_ln703_344_fu_5056057_p2 = (!zext_ln703_80_fu_5056041_p1.read().is_01() || !add_ln703_343_fu_5056051_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_80_fu_5056041_p1.read()) + sc_biguint<11>(add_ln703_343_fu_5056051_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3450_fu_5076925_p2() {
    add_ln703_3450_fu_5076925_p2 = (!zext_ln203_672_fu_5047823_p1.read().is_01() || !zext_ln203_670_fu_5047783_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_672_fu_5047823_p1.read()) + sc_biguint<10>(zext_ln203_670_fu_5047783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3451_fu_5087863_p2() {
    add_ln703_3451_fu_5087863_p2 = (!add_ln703_3449_fu_5087854_p2.read().is_01() || !zext_ln703_595_fu_5087860_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3449_fu_5087854_p2.read()) + sc_biguint<15>(zext_ln703_595_fu_5087860_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3452_fu_5076931_p2() {
    add_ln703_3452_fu_5076931_p2 = (!sext_ln203_528_fu_5041816_p1.read().is_01() || !zext_ln708_1594_fu_5047867_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_528_fu_5041816_p1.read()) + sc_biguint<11>(zext_ln708_1594_fu_5047867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3453_fu_5076941_p2() {
    add_ln703_3453_fu_5076941_p2 = (!sext_ln203_599_fu_5047843_p1.read().is_01() || !zext_ln203_671_fu_5047803_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_599_fu_5047843_p1.read()) + sc_biguint<9>(zext_ln203_671_fu_5047803_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3454_fu_5076951_p2() {
    add_ln703_3454_fu_5076951_p2 = (!sext_ln703_1980_fu_5076937_p1.read().is_01() || !sext_ln703_1981_fu_5076947_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1980_fu_5076937_p1.read()) + sc_bigint<12>(sext_ln703_1981_fu_5076947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3456_fu_5076957_p2() {
    add_ln703_3456_fu_5076957_p2 = (!sext_ln1118_1038_fu_5047897_p1.read().is_01() || !ap_const_lv10_340.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1038_fu_5047897_p1.read()) + sc_bigint<10>(ap_const_lv10_340));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3457_fu_5076967_p2() {
    add_ln703_3457_fu_5076967_p2 = (!sext_ln1116_78_fu_5047935_p1.read().is_01() || !sext_ln1116_77_fu_5047921_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_78_fu_5047935_p1.read()) + sc_bigint<11>(sext_ln1116_77_fu_5047921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3458_fu_5076977_p2() {
    add_ln703_3458_fu_5076977_p2 = (!sext_ln703_1984_fu_5076963_p1.read().is_01() || !sext_ln703_1985_fu_5076973_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1984_fu_5076963_p1.read()) + sc_bigint<12>(sext_ln703_1985_fu_5076973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3459_fu_5076987_p2() {
    add_ln703_3459_fu_5076987_p2 = (!zext_ln1118_2885_fu_5048018_p1.read().is_01() || !sext_ln1118_1043_fu_5048009_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2885_fu_5048018_p1.read()) + sc_bigint<12>(sext_ln1118_1043_fu_5048009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_345_fu_5056067_p2() {
    add_ln703_345_fu_5056067_p2 = (!sext_ln203_61_fu_4996430_p1.read().is_01() || !sext_ln703_44_fu_5056063_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_61_fu_4996430_p1.read()) + sc_bigint<12>(sext_ln703_44_fu_5056063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3460_fu_5076997_p2() {
    add_ln703_3460_fu_5076997_p2 = (!sext_ln703_1986_fu_5076983_p1.read().is_01() || !sext_ln703_1987_fu_5076993_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1986_fu_5076983_p1.read()) + sc_bigint<13>(sext_ln703_1987_fu_5076993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3461_fu_5077003_p2() {
    add_ln703_3461_fu_5077003_p2 = (!sext_ln1118_1040_fu_5047955_p1.read().is_01() || !sext_ln1118_978_fu_5043212_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1040_fu_5047955_p1.read()) + sc_bigint<10>(sext_ln1118_978_fu_5043212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3462_fu_5077013_p2() {
    add_ln703_3462_fu_5077013_p2 = (!sext_ln1118_1042_fu_5047985_p1.read().is_01() || !sext_ln703_1988_fu_5077009_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1042_fu_5047985_p1.read()) + sc_bigint<11>(sext_ln703_1988_fu_5077009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3463_fu_5087885_p2() {
    add_ln703_3463_fu_5087885_p2 = (!add_ln703_3460_reg_5093869.read().is_01() || !sext_ln703_1989_fu_5087882_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3460_reg_5093869.read()) + sc_bigint<13>(sext_ln703_1989_fu_5087882_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3464_fu_5077019_p2() {
    add_ln703_3464_fu_5077019_p2 = (!zext_ln1116_235_fu_5048164_p1.read().is_01() || !zext_ln708_1596_fu_5048108_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_235_fu_5048164_p1.read()) + sc_biguint<10>(zext_ln708_1596_fu_5048108_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3465_fu_5087893_p2() {
    add_ln703_3465_fu_5087893_p2 = (!add_ln703_3463_fu_5087885_p2.read().is_01() || !zext_ln703_596_fu_5087890_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3463_fu_5087885_p2.read()) + sc_biguint<13>(zext_ln703_596_fu_5087890_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3466_fu_5077025_p2() {
    add_ln703_3466_fu_5077025_p2 = (!zext_ln708_1597_fu_5048176_p1.read().is_01() || !zext_ln708_1589_fu_5047625_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1597_fu_5048176_p1.read()) + sc_biguint<9>(zext_ln708_1589_fu_5047625_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3467_fu_5077035_p2() {
    add_ln703_3467_fu_5077035_p2 = (!sext_ln708_273_fu_5048046_p1.read().is_01() || !zext_ln708_1599_fu_5048210_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_273_fu_5048046_p1.read()) + sc_biguint<11>(zext_ln708_1599_fu_5048210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3468_fu_5077041_p2() {
    add_ln703_3468_fu_5077041_p2 = (!zext_ln703_597_fu_5077031_p1.read().is_01() || !add_ln703_3467_fu_5077035_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_597_fu_5077031_p1.read()) + sc_biguint<11>(add_ln703_3467_fu_5077035_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3469_fu_5087906_p2() {
    add_ln703_3469_fu_5087906_p2 = (!sext_ln703_1990_fu_5087899_p1.read().is_01() || !sext_ln703_1991_fu_5087903_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1990_fu_5087899_p1.read()) + sc_bigint<14>(sext_ln703_1991_fu_5087903_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_346_fu_5081406_p2() {
    add_ln703_346_fu_5081406_p2 = (!sext_ln1118_106_fu_5080235_p1.read().is_01() || !zext_ln1118_1052_fu_5080232_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_106_fu_5080235_p1.read()) + sc_biguint<12>(zext_ln1118_1052_fu_5080232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3470_fu_5077047_p2() {
    add_ln703_3470_fu_5077047_p2 = (!sext_ln1116_80_fu_5048140_p1.read().is_01() || !sext_ln203_510_fu_5039209_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_80_fu_5048140_p1.read()) + sc_bigint<11>(sext_ln203_510_fu_5039209_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3471_fu_5077053_p2() {
    add_ln703_3471_fu_5077053_p2 = (!sext_ln708_275_fu_5048246_p1.read().is_01() || !sext_ln708_274_fu_5048088_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_275_fu_5048246_p1.read()) + sc_bigint<9>(sext_ln708_274_fu_5048088_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3472_fu_5077063_p2() {
    add_ln703_3472_fu_5077063_p2 = (!add_ln703_3470_fu_5077047_p2.read().is_01() || !sext_ln703_1992_fu_5077059_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3470_fu_5077047_p2.read()) + sc_bigint<11>(sext_ln703_1992_fu_5077059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3473_fu_5077073_p2() {
    add_ln703_3473_fu_5077073_p2 = (!zext_ln708_1598_fu_5048190_p1.read().is_01() || !zext_ln708_1595_fu_5048064_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1598_fu_5048190_p1.read()) + sc_biguint<8>(zext_ln708_1595_fu_5048064_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3474_fu_5077083_p2() {
    add_ln703_3474_fu_5077083_p2 = (!sext_ln1118_1045_fu_5048172_p1.read().is_01() || !sext_ln1118_1044_fu_5048168_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_1045_fu_5048172_p1.read()) + sc_bigint<8>(sext_ln1118_1044_fu_5048168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3475_fu_5077093_p2() {
    add_ln703_3475_fu_5077093_p2 = (!zext_ln703_598_fu_5077079_p1.read().is_01() || !sext_ln703_1994_fu_5077089_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_598_fu_5077079_p1.read()) + sc_bigint<9>(sext_ln703_1994_fu_5077089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3476_fu_5077103_p2() {
    add_ln703_3476_fu_5077103_p2 = (!sext_ln703_1993_fu_5077069_p1.read().is_01() || !sext_ln703_1995_fu_5077099_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1993_fu_5077069_p1.read()) + sc_bigint<12>(sext_ln703_1995_fu_5077099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3477_fu_5087915_p2() {
    add_ln703_3477_fu_5087915_p2 = (!add_ln703_3469_fu_5087906_p2.read().is_01() || !sext_ln703_1996_fu_5087912_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3469_fu_5087906_p2.read()) + sc_bigint<14>(sext_ln703_1996_fu_5087912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3478_fu_5087921_p2() {
    add_ln703_3478_fu_5087921_p2 = (!zext_ln203_225_fu_5080673_p1.read().is_01() || !add_ln703_3477_fu_5087915_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln203_225_fu_5080673_p1.read()) + sc_biguint<14>(add_ln703_3477_fu_5087915_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3479_fu_5077109_p2() {
    add_ln703_3479_fu_5077109_p2 = (!sext_ln203_607_fu_5048402_p1.read().is_01() || !sext_ln203_605_fu_5048368_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_607_fu_5048402_p1.read()) + sc_bigint<11>(sext_ln203_605_fu_5048368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_347_fu_5081416_p2() {
    add_ln703_347_fu_5081416_p2 = (!sext_ln703_45_fu_5081403_p1.read().is_01() || !sext_ln703_234_fu_5081412_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_45_fu_5081403_p1.read()) + sc_bigint<13>(sext_ln703_234_fu_5081412_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3480_fu_5077119_p2() {
    add_ln703_3480_fu_5077119_p2 = (!sext_ln203_603_fu_5048314_p1.read().is_01() || !sext_ln703_1997_fu_5077115_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_603_fu_5048314_p1.read()) + sc_bigint<12>(sext_ln703_1997_fu_5077115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3481_fu_5087930_p2() {
    add_ln703_3481_fu_5087930_p2 = (!add_ln703_3478_fu_5087921_p2.read().is_01() || !sext_ln703_1998_fu_5087927_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3478_fu_5087921_p2.read()) + sc_bigint<14>(sext_ln703_1998_fu_5087927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3482_fu_5077125_p2() {
    add_ln703_3482_fu_5077125_p2 = (!sext_ln203_601_fu_5048266_p1.read().is_01() || !sext_ln203_608_fu_5048442_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_601_fu_5048266_p1.read()) + sc_bigint<11>(sext_ln203_608_fu_5048442_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3483_fu_5077135_p2() {
    add_ln703_3483_fu_5077135_p2 = (!sext_ln203_606_fu_5048388_p1.read().is_01() || !sext_ln203_604_fu_5048338_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_606_fu_5048388_p1.read()) + sc_bigint<10>(sext_ln203_604_fu_5048338_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3484_fu_5077145_p2() {
    add_ln703_3484_fu_5077145_p2 = (!sext_ln203_602_fu_5048290_p1.read().is_01() || !sext_ln703_2001_fu_5077141_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_602_fu_5048290_p1.read()) + sc_bigint<11>(sext_ln703_2001_fu_5077141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3485_fu_5077155_p2() {
    add_ln703_3485_fu_5077155_p2 = (!sext_ln703_2000_fu_5077131_p1.read().is_01() || !sext_ln703_2002_fu_5077151_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2000_fu_5077131_p1.read()) + sc_bigint<12>(sext_ln703_2002_fu_5077151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3487_fu_5077161_p2() {
    add_ln703_3487_fu_5077161_p2 = (!zext_ln708_942_fu_5048456_p1.read().is_01() || !ap_const_lv11_420.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_942_fu_5048456_p1.read()) + sc_bigint<11>(ap_const_lv11_420));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3488_fu_5077167_p2() {
    add_ln703_3488_fu_5077167_p2 = (!zext_ln708_1546_fu_5043110_p1.read().is_01() || !add_ln703_3487_fu_5077161_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1546_fu_5043110_p1.read()) + sc_biguint<11>(add_ln703_3487_fu_5077161_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3489_fu_5077177_p2() {
    add_ln703_3489_fu_5077177_p2 = (!sext_ln203_609_fu_5048460_p1.read().is_01() || !sext_ln703_448_fu_5077173_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_609_fu_5048460_p1.read()) + sc_bigint<12>(sext_ln703_448_fu_5077173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_348_fu_5056073_p2() {
    add_ln703_348_fu_5056073_p2 = (!sext_ln1118_109_fu_4996618_p1.read().is_01() || !sext_ln1118_96_fu_4996034_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_109_fu_4996618_p1.read()) + sc_bigint<12>(sext_ln1118_96_fu_4996034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3490_fu_5077187_p2() {
    add_ln703_3490_fu_5077187_p2 = (!sext_ln203_610_fu_5048480_p1.read().is_01() || !sext_ln703_449_fu_5077183_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_610_fu_5048480_p1.read()) + sc_bigint<13>(sext_ln703_449_fu_5077183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3491_fu_5077193_p2() {
    add_ln703_3491_fu_5077193_p2 = (!zext_ln1118_2896_fu_5048494_p1.read().is_01() || !sext_ln203_586_fu_5047147_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2896_fu_5048494_p1.read()) + sc_bigint<12>(sext_ln203_586_fu_5047147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3492_fu_5077203_p2() {
    add_ln703_3492_fu_5077203_p2 = (!add_ln703_3490_fu_5077187_p2.read().is_01() || !sext_ln703_2005_fu_5077199_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3490_fu_5077187_p2.read()) + sc_bigint<13>(sext_ln703_2005_fu_5077199_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3493_fu_5077213_p2() {
    add_ln703_3493_fu_5077213_p2 = (!sext_ln203_600_fu_5048005_p1.read().is_01() || !sext_ln703_450_fu_5077209_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_600_fu_5048005_p1.read()) + sc_bigint<14>(sext_ln703_450_fu_5077209_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3494_fu_5077219_p2() {
    add_ln703_3494_fu_5077219_p2 = (!zext_ln1118_2901_fu_5048618_p1.read().is_01() || !zext_ln708_1600_fu_5048578_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2901_fu_5048618_p1.read()) + sc_biguint<10>(zext_ln708_1600_fu_5048578_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3495_fu_5077229_p2() {
    add_ln703_3495_fu_5077229_p2 = (!add_ln703_3493_fu_5077213_p2.read().is_01() || !zext_ln703_599_fu_5077225_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3493_fu_5077213_p2.read()) + sc_biguint<14>(zext_ln703_599_fu_5077225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3496_fu_5077235_p2() {
    add_ln703_3496_fu_5077235_p2 = (!zext_ln1118_2900_fu_5048598_p1.read().is_01() || !sext_ln1118_1048_fu_5048526_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_2900_fu_5048598_p1.read()) + sc_bigint<11>(sext_ln1118_1048_fu_5048526_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3497_fu_5077241_p2() {
    add_ln703_3497_fu_5077241_p2 = (!sext_ln1118_1050_fu_5048650_p1.read().is_01() || !sext_ln1118_1049_fu_5048554_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1050_fu_5048650_p1.read()) + sc_bigint<10>(sext_ln1118_1049_fu_5048554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3498_fu_5077251_p2() {
    add_ln703_3498_fu_5077251_p2 = (!add_ln703_3496_fu_5077235_p2.read().is_01() || !sext_ln703_2006_fu_5077247_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3496_fu_5077235_p2.read()) + sc_bigint<11>(sext_ln703_2006_fu_5077247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3499_fu_5087956_p2() {
    add_ln703_3499_fu_5087956_p2 = (!add_ln703_3495_reg_5093904.read().is_01() || !sext_ln703_2007_fu_5087953_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3495_reg_5093904.read()) + sc_bigint<14>(sext_ln703_2007_fu_5087953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_349_fu_5081429_p2() {
    add_ln703_349_fu_5081429_p2 = (!sext_ln703_46_fu_5081422_p1.read().is_01() || !sext_ln703_235_fu_5081426_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_46_fu_5081422_p1.read()) + sc_bigint<14>(sext_ln703_235_fu_5081426_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_34_fu_5053885_p2() {
    add_ln703_34_fu_5053885_p2 = (!zext_ln703_14_fu_5053871_p1.read().is_01() || !sext_ln703_27_fu_5053881_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_14_fu_5053871_p1.read()) + sc_bigint<12>(sext_ln703_27_fu_5053881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3500_fu_5077257_p2() {
    add_ln703_3500_fu_5077257_p2 = (!zext_ln1118_2904_fu_5048702_p1.read().is_01() || !sext_ln1118_1051_fu_5048664_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2904_fu_5048702_p1.read()) + sc_bigint<12>(sext_ln1118_1051_fu_5048664_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3501_fu_5087964_p2() {
    add_ln703_3501_fu_5087964_p2 = (!add_ln703_3499_fu_5087956_p2.read().is_01() || !sext_ln703_2008_fu_5087961_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3499_fu_5087956_p2.read()) + sc_bigint<14>(sext_ln703_2008_fu_5087961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3502_fu_5077263_p2() {
    add_ln703_3502_fu_5077263_p2 = (!trunc_ln1118_39_fu_5045838_p4.read().is_01() || !zext_ln203_655_fu_5044130_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_39_fu_5045838_p4.read()) + sc_biguint<10>(zext_ln203_655_fu_5044130_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3503_fu_5077273_p2() {
    add_ln703_3503_fu_5077273_p2 = (!zext_ln708_1602_fu_5048758_p1.read().is_01() || !zext_ln708_1587_fu_5047375_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1602_fu_5048758_p1.read()) + sc_biguint<11>(zext_ln708_1587_fu_5047375_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3504_fu_5077283_p2() {
    add_ln703_3504_fu_5077283_p2 = (!zext_ln703_600_fu_5077269_p1.read().is_01() || !zext_ln703_601_fu_5077279_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_600_fu_5077269_p1.read()) + sc_biguint<12>(zext_ln703_601_fu_5077279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3505_fu_5087977_p2() {
    add_ln703_3505_fu_5087977_p2 = (!sext_ln703_2009_fu_5087970_p1.read().is_01() || !zext_ln703_602_fu_5087974_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2009_fu_5087970_p1.read()) + sc_biguint<15>(zext_ln703_602_fu_5087974_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3506_fu_5077289_p2() {
    add_ln703_3506_fu_5077289_p2 = (!sext_ln1118_1052_fu_5048716_p1.read().is_01() || !sext_ln708_276_fu_5048678_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1052_fu_5048716_p1.read()) + sc_bigint<11>(sext_ln708_276_fu_5048678_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3507_fu_5077299_p2() {
    add_ln703_3507_fu_5077299_p2 = (!zext_ln1118_2905_fu_5048782_p1.read().is_01() || !sext_ln703_2010_fu_5077295_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2905_fu_5048782_p1.read()) + sc_bigint<12>(sext_ln703_2010_fu_5077295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3508_fu_5077305_p2() {
    add_ln703_3508_fu_5077305_p2 = (!sext_ln708_248_fu_5040059_p1.read().is_01() || !zext_ln708_1585_fu_5047257_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_248_fu_5040059_p1.read()) + sc_biguint<10>(zext_ln708_1585_fu_5047257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3509_fu_5077311_p2() {
    add_ln703_3509_fu_5077311_p2 = (!sext_ln708_277_fu_5048720_p1.read().is_01() || !zext_ln708_1601_fu_5048734_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln708_277_fu_5048720_p1.read()) + sc_biguint<7>(zext_ln708_1601_fu_5048734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_350_fu_5056079_p2() {
    add_ln703_350_fu_5056079_p2 = (!sext_ln1118_108_fu_4996512_p1.read().is_01() || !zext_ln1118_1683_fu_4996536_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_108_fu_4996512_p1.read()) + sc_biguint<10>(zext_ln1118_1683_fu_4996536_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3510_fu_5077321_p2() {
    add_ln703_3510_fu_5077321_p2 = (!add_ln703_3508_fu_5077305_p2.read().is_01() || !sext_ln703_2011_fu_5077317_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3508_fu_5077305_p2.read()) + sc_bigint<10>(sext_ln703_2011_fu_5077317_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3511_fu_5077331_p2() {
    add_ln703_3511_fu_5077331_p2 = (!add_ln703_3507_fu_5077299_p2.read().is_01() || !sext_ln703_2012_fu_5077327_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3507_fu_5077299_p2.read()) + sc_bigint<12>(sext_ln703_2012_fu_5077327_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3512_fu_5087986_p2() {
    add_ln703_3512_fu_5087986_p2 = (!add_ln703_3505_fu_5087977_p2.read().is_01() || !sext_ln703_2013_fu_5087983_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3505_fu_5087977_p2.read()) + sc_bigint<15>(sext_ln703_2013_fu_5087983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3513_fu_5087992_p2() {
    add_ln703_3513_fu_5087992_p2 = (!sext_ln203_611_fu_5080676_p1.read().is_01() || !add_ln703_3512_fu_5087986_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_611_fu_5080676_p1.read()) + sc_biguint<15>(add_ln703_3512_fu_5087986_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3514_fu_5077337_p2() {
    add_ln703_3514_fu_5077337_p2 = (!sext_ln203_612_fu_5048812_p1.read().is_01() || !zext_ln708_1603_fu_5048840_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_612_fu_5048812_p1.read()) + sc_biguint<11>(zext_ln708_1603_fu_5048840_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3515_fu_5077347_p2() {
    add_ln703_3515_fu_5077347_p2 = (!sext_ln203_613_fu_5048826_p1.read().is_01() || !sext_ln703_2014_fu_5077343_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_613_fu_5048826_p1.read()) + sc_bigint<12>(sext_ln703_2014_fu_5077343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3517_fu_5077353_p2() {
    add_ln703_3517_fu_5077353_p2 = (!zext_ln708_1604_fu_5048860_p1.read().is_01() || !ap_const_lv11_4A0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1604_fu_5048860_p1.read()) + sc_bigint<11>(ap_const_lv11_4A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3518_fu_5077363_p2() {
    add_ln703_3518_fu_5077363_p2 = (!sext_ln203_614_fu_5048864_p1.read().is_01() || !sext_ln703_453_fu_5077359_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_614_fu_5048864_p1.read()) + sc_bigint<12>(sext_ln703_453_fu_5077359_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3519_fu_5077373_p2() {
    add_ln703_3519_fu_5077373_p2 = (!zext_ln708_1191_fu_5048902_p1.read().is_01() || !sext_ln1118_1054_fu_5048954_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_1191_fu_5048902_p1.read()) + sc_bigint<12>(sext_ln1118_1054_fu_5048954_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_351_fu_5056089_p2() {
    add_ln703_351_fu_5056089_p2 = (!zext_ln1118_1055_fu_4996582_p1.read().is_01() || !sext_ln708_22_fu_4996568_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1055_fu_4996582_p1.read()) + sc_bigint<9>(sext_ln708_22_fu_4996568_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3520_fu_5077383_p2() {
    add_ln703_3520_fu_5077383_p2 = (!sext_ln703_454_fu_5077369_p1.read().is_01() || !sext_ln703_2017_fu_5077379_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_454_fu_5077369_p1.read()) + sc_bigint<13>(sext_ln703_2017_fu_5077379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3521_fu_5077389_p2() {
    add_ln703_3521_fu_5077389_p2 = (!zext_ln708_1192_fu_5048906_p1.read().is_01() || !tmp_1768_fu_5048930_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1192_fu_5048906_p1.read()) + sc_biguint<9>(tmp_1768_fu_5048930_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3522_fu_5077399_p2() {
    add_ln703_3522_fu_5077399_p2 = (!sext_ln1118_1053_fu_5048888_p1.read().is_01() || !zext_ln708_1605_fu_5048920_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_1053_fu_5048888_p1.read()) + sc_biguint<8>(zext_ln708_1605_fu_5048920_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3523_fu_5077409_p2() {
    add_ln703_3523_fu_5077409_p2 = (!zext_ln703_603_fu_5077395_p1.read().is_01() || !sext_ln703_2018_fu_5077405_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_603_fu_5077395_p1.read()) + sc_bigint<10>(sext_ln703_2018_fu_5077405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3524_fu_5077419_p2() {
    add_ln703_3524_fu_5077419_p2 = (!add_ln703_3520_fu_5077383_p2.read().is_01() || !sext_ln703_2019_fu_5077415_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3520_fu_5077383_p2.read()) + sc_bigint<13>(sext_ln703_2019_fu_5077415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3525_fu_5077425_p2() {
    add_ln703_3525_fu_5077425_p2 = (!trunc_ln708_2801_fu_5049056_p4.read().is_01() || !zext_ln708_1606_fu_5049042_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln708_2801_fu_5049056_p4.read()) + sc_biguint<10>(zext_ln708_1606_fu_5049042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3526_fu_5077435_p2() {
    add_ln703_3526_fu_5077435_p2 = (!add_ln703_3524_fu_5077419_p2.read().is_01() || !zext_ln703_604_fu_5077431_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3524_fu_5077419_p2.read()) + sc_biguint<13>(zext_ln703_604_fu_5077431_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3527_fu_5077441_p2() {
    add_ln703_3527_fu_5077441_p2 = (!sext_ln1118_1056_fu_5048984_p1.read().is_01() || !zext_ln1118_2910_fu_5049076_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1056_fu_5048984_p1.read()) + sc_biguint<12>(zext_ln1118_2910_fu_5049076_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3528_fu_5077447_p2() {
    add_ln703_3528_fu_5077447_p2 = (!zext_ln1118_2908_fu_5049018_p1.read().is_01() || !sext_ln708_278_fu_5049004_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2908_fu_5049018_p1.read()) + sc_bigint<10>(sext_ln708_278_fu_5049004_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3529_fu_5077457_p2() {
    add_ln703_3529_fu_5077457_p2 = (!add_ln703_3527_fu_5077441_p2.read().is_01() || !sext_ln703_2021_fu_5077453_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3527_fu_5077441_p2.read()) + sc_bigint<12>(sext_ln703_2021_fu_5077453_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_352_fu_5056099_p2() {
    add_ln703_352_fu_5056099_p2 = (!sext_ln703_236_fu_5056085_p1.read().is_01() || !sext_ln703_237_fu_5056095_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_236_fu_5056085_p1.read()) + sc_bigint<11>(sext_ln703_237_fu_5056095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3530_fu_5088017_p2() {
    add_ln703_3530_fu_5088017_p2 = (!sext_ln703_2020_fu_5088011_p1.read().is_01() || !sext_ln703_2022_fu_5088014_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2020_fu_5088011_p1.read()) + sc_bigint<14>(sext_ln703_2022_fu_5088014_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3531_fu_5077463_p2() {
    add_ln703_3531_fu_5077463_p2 = (!sext_ln203_591_fu_5047237_p1.read().is_01() || !sext_ln1118_1058_fu_5049106_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_591_fu_5047237_p1.read()) + sc_bigint<12>(sext_ln1118_1058_fu_5049106_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3532_fu_5088026_p2() {
    add_ln703_3532_fu_5088026_p2 = (!add_ln703_3530_fu_5088017_p2.read().is_01() || !sext_ln703_2023_fu_5088023_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3530_fu_5088017_p2.read()) + sc_bigint<14>(sext_ln703_2023_fu_5088023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3533_fu_5077469_p2() {
    add_ln703_3533_fu_5077469_p2 = (!zext_ln1118_2912_fu_5049130_p1.read().is_01() || !sext_ln1118_1060_fu_5049254_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2912_fu_5049130_p1.read()) + sc_bigint<12>(sext_ln1118_1060_fu_5049254_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3534_fu_5077475_p2() {
    add_ln703_3534_fu_5077475_p2 = (!trunc_ln708_2803_fu_5049166_p4.read().is_01() || !zext_ln1118_2914_fu_5049154_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln708_2803_fu_5049166_p4.read()) + sc_biguint<10>(zext_ln1118_2914_fu_5049154_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3535_fu_5077485_p2() {
    add_ln703_3535_fu_5077485_p2 = (!add_ln703_3533_fu_5077469_p2.read().is_01() || !zext_ln703_605_fu_5077481_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3533_fu_5077469_p2.read()) + sc_biguint<12>(zext_ln703_605_fu_5077481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3536_fu_5088039_p2() {
    add_ln703_3536_fu_5088039_p2 = (!sext_ln703_2024_fu_5088032_p1.read().is_01() || !sext_ln703_2025_fu_5088036_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2024_fu_5088032_p1.read()) + sc_bigint<15>(sext_ln703_2025_fu_5088036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3537_fu_5077491_p2() {
    add_ln703_3537_fu_5077491_p2 = (!sext_ln1118_1059_fu_5049214_p1.read().is_01() || !zext_ln708_1608_fu_5049200_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1059_fu_5049214_p1.read()) + sc_biguint<11>(zext_ln708_1608_fu_5049200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3538_fu_5077501_p2() {
    add_ln703_3538_fu_5077501_p2 = (!zext_ln1118_2915_fu_5049196_p1.read().is_01() || !sext_ln708_280_fu_5049234_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_2915_fu_5049196_p1.read()) + sc_bigint<11>(sext_ln708_280_fu_5049234_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3539_fu_5077511_p2() {
    add_ln703_3539_fu_5077511_p2 = (!sext_ln703_2026_fu_5077497_p1.read().is_01() || !sext_ln703_2027_fu_5077507_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2026_fu_5077497_p1.read()) + sc_bigint<12>(sext_ln703_2027_fu_5077507_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_353_fu_5081438_p2() {
    add_ln703_353_fu_5081438_p2 = (!add_ln703_349_fu_5081429_p2.read().is_01() || !sext_ln703_238_fu_5081435_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_349_fu_5081429_p2.read()) + sc_bigint<14>(sext_ln703_238_fu_5081435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3540_fu_5077517_p2() {
    add_ln703_3540_fu_5077517_p2 = (!sext_ln708_279_fu_5049158_p1.read().is_01() || !sext_ln203_522_fu_5040979_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_279_fu_5049158_p1.read()) + sc_bigint<10>(sext_ln203_522_fu_5040979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3541_fu_5077527_p2() {
    add_ln703_3541_fu_5077527_p2 = (!zext_ln708_1578_fu_5045882_p1.read().is_01() || !zext_ln708_1570_fu_5045210_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1578_fu_5045882_p1.read()) + sc_biguint<8>(zext_ln708_1570_fu_5045210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3542_fu_5077537_p2() {
    add_ln703_3542_fu_5077537_p2 = (!sext_ln703_2028_fu_5077523_p1.read().is_01() || !zext_ln703_606_fu_5077533_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2028_fu_5077523_p1.read()) + sc_biguint<11>(zext_ln703_606_fu_5077533_p1.read()));
}

}

