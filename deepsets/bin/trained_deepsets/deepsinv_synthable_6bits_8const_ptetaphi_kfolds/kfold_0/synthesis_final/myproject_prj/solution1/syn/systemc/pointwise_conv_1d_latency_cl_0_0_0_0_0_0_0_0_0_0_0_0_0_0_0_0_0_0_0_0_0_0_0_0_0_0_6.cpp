#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3543_fu_5077547_p2() {
    add_ln703_3543_fu_5077547_p2 = (!add_ln703_3539_fu_5077511_p2.read().is_01() || !sext_ln703_2029_fu_5077543_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3539_fu_5077511_p2.read()) + sc_bigint<12>(sext_ln703_2029_fu_5077543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3544_fu_5088048_p2() {
    add_ln703_3544_fu_5088048_p2 = (!add_ln703_3536_fu_5088039_p2.read().is_01() || !sext_ln703_2030_fu_5088045_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3536_fu_5088039_p2.read()) + sc_bigint<15>(sext_ln703_2030_fu_5088045_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3545_fu_5088054_p2() {
    add_ln703_3545_fu_5088054_p2 = (!zext_ln203_226_fu_5080679_p1.read().is_01() || !add_ln703_3544_fu_5088048_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_226_fu_5080679_p1.read()) + sc_biguint<15>(add_ln703_3544_fu_5088048_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3546_fu_5077553_p2() {
    add_ln703_3546_fu_5077553_p2 = (!sext_ln203_616_fu_5049282_p1.read().is_01() || !sext_ln203_615_fu_5049278_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_616_fu_5049282_p1.read()) + sc_bigint<11>(sext_ln203_615_fu_5049278_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3548_fu_5077559_p2() {
    add_ln703_3548_fu_5077559_p2 = (!sext_ln203_617_fu_5049326_p1.read().is_01() || !ap_const_lv12_F40.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_617_fu_5049326_p1.read()) + sc_bigint<12>(ap_const_lv12_F40));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3549_fu_5077569_p2() {
    add_ln703_3549_fu_5077569_p2 = (!sext_ln1118_1062_fu_5049330_p1.read().is_01() || !sext_ln1118_1063_fu_5049334_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1062_fu_5049330_p1.read()) + sc_bigint<12>(sext_ln1118_1063_fu_5049334_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_354_fu_5081444_p2() {
    add_ln703_354_fu_5081444_p2 = (!sext_ln1118_112_fu_5080238_p1.read().is_01() || !add_ln703_353_fu_5081438_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_112_fu_5080238_p1.read()) + sc_biguint<14>(add_ln703_353_fu_5081438_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3550_fu_5077579_p2() {
    add_ln703_3550_fu_5077579_p2 = (!sext_ln703_458_fu_5077565_p1.read().is_01() || !sext_ln703_2033_fu_5077575_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_458_fu_5077565_p1.read()) + sc_bigint<13>(sext_ln703_2033_fu_5077575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3551_fu_5077585_p2() {
    add_ln703_3551_fu_5077585_p2 = (!zext_ln708_1204_fu_5049362_p1.read().is_01() || !add_ln703_3550_fu_5077579_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_1204_fu_5049362_p1.read()) + sc_biguint<13>(add_ln703_3550_fu_5077579_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3552_fu_5077591_p2() {
    add_ln703_3552_fu_5077591_p2 = (!zext_ln708_1515_fu_5039685_p1.read().is_01() || !zext_ln708_1600_fu_5048578_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1515_fu_5039685_p1.read()) + sc_biguint<10>(zext_ln708_1600_fu_5048578_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3553_fu_5077601_p2() {
    add_ln703_3553_fu_5077601_p2 = (!add_ln703_3551_fu_5077585_p2.read().is_01() || !zext_ln703_607_fu_5077597_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3551_fu_5077585_p2.read()) + sc_biguint<13>(zext_ln703_607_fu_5077597_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3554_fu_5077607_p2() {
    add_ln703_3554_fu_5077607_p2 = (!zext_ln708_1200_fu_5049358_p1.read().is_01() || !sext_ln708_281_fu_5049354_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1200_fu_5049358_p1.read()) + sc_bigint<11>(sext_ln708_281_fu_5049354_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3555_fu_5077613_p2() {
    add_ln703_3555_fu_5077613_p2 = (!sext_ln1118_1064_fu_5049386_p1.read().is_01() || !zext_ln708_1525_fu_5040591_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_1064_fu_5049386_p1.read()) + sc_biguint<8>(zext_ln708_1525_fu_5040591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3556_fu_5077623_p2() {
    add_ln703_3556_fu_5077623_p2 = (!sext_ln1118_1065_fu_5049406_p1.read().is_01() || !sext_ln703_2034_fu_5077619_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1065_fu_5049406_p1.read()) + sc_bigint<9>(sext_ln703_2034_fu_5077619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3557_fu_5077633_p2() {
    add_ln703_3557_fu_5077633_p2 = (!add_ln703_3554_fu_5077607_p2.read().is_01() || !sext_ln703_2035_fu_5077629_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3554_fu_5077607_p2.read()) + sc_bigint<11>(sext_ln703_2035_fu_5077629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3558_fu_5077643_p2() {
    add_ln703_3558_fu_5077643_p2 = (!add_ln703_3553_fu_5077601_p2.read().is_01() || !sext_ln703_2036_fu_5077639_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3553_fu_5077601_p2.read()) + sc_bigint<13>(sext_ln703_2036_fu_5077639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3559_fu_5088076_p2() {
    add_ln703_3559_fu_5088076_p2 = (!sext_ln203_618_fu_5080682_p1.read().is_01() || !sext_ln703_2037_fu_5088073_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_618_fu_5080682_p1.read()) + sc_bigint<14>(sext_ln703_2037_fu_5088073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_355_fu_5056105_p2() {
    add_ln703_355_fu_5056105_p2 = (!zext_ln708_1098_fu_4996698_p1.read().is_01() || !zext_ln708_1094_fu_4996674_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1098_fu_4996698_p1.read()) + sc_biguint<10>(zext_ln708_1094_fu_4996674_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3560_fu_5077649_p2() {
    add_ln703_3560_fu_5077649_p2 = (!zext_ln1118_2913_fu_5049150_p1.read().is_01() || !zext_ln1118_2920_fu_5049494_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2913_fu_5049150_p1.read()) + sc_biguint<9>(zext_ln1118_2920_fu_5049494_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3561_fu_5088085_p2() {
    add_ln703_3561_fu_5088085_p2 = (!add_ln703_3559_fu_5088076_p2.read().is_01() || !zext_ln703_608_fu_5088082_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3559_fu_5088076_p2.read()) + sc_biguint<14>(zext_ln703_608_fu_5088082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3562_fu_5077655_p2() {
    add_ln703_3562_fu_5077655_p2 = (!zext_ln1118_2891_fu_5048214_p1.read().is_01() || !zext_ln1118_2921_fu_5049514_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2891_fu_5048214_p1.read()) + sc_biguint<10>(zext_ln1118_2921_fu_5049514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3563_fu_5077665_p2() {
    add_ln703_3563_fu_5077665_p2 = (!sext_ln708_283_fu_5049470_p1.read().is_01() || !zext_ln1118_2922_fu_5049568_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_283_fu_5049470_p1.read()) + sc_biguint<12>(zext_ln1118_2922_fu_5049568_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3564_fu_5077671_p2() {
    add_ln703_3564_fu_5077671_p2 = (!zext_ln703_609_fu_5077661_p1.read().is_01() || !add_ln703_3563_fu_5077665_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_609_fu_5077661_p1.read()) + sc_biguint<12>(add_ln703_3563_fu_5077665_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3565_fu_5088094_p2() {
    add_ln703_3565_fu_5088094_p2 = (!add_ln703_3561_fu_5088085_p2.read().is_01() || !sext_ln703_2038_fu_5088091_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3561_fu_5088085_p2.read()) + sc_bigint<14>(sext_ln703_2038_fu_5088091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3566_fu_5077677_p2() {
    add_ln703_3566_fu_5077677_p2 = (!sext_ln708_282_fu_5049436_p1.read().is_01() || !sext_ln1118_1068_fu_5049588_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_282_fu_5049436_p1.read()) + sc_bigint<11>(sext_ln1118_1068_fu_5049588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3567_fu_5077687_p2() {
    add_ln703_3567_fu_5077687_p2 = (!sext_ln708_284_fu_5049534_p1.read().is_01() || !sext_ln1118_1067_fu_5049456_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_284_fu_5049534_p1.read()) + sc_bigint<10>(sext_ln1118_1067_fu_5049456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3568_fu_5077697_p2() {
    add_ln703_3568_fu_5077697_p2 = (!sext_ln703_2040_fu_5077683_p1.read().is_01() || !sext_ln703_2041_fu_5077693_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2040_fu_5077683_p1.read()) + sc_bigint<12>(sext_ln703_2041_fu_5077693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3569_fu_5077707_p2() {
    add_ln703_3569_fu_5077707_p2 = (!zext_ln708_1198_fu_5049162_p1.read().is_01() || !zext_ln1118_2902_fu_5048630_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1198_fu_5049162_p1.read()) + sc_biguint<10>(zext_ln1118_2902_fu_5048630_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_356_fu_5081453_p2() {
    add_ln703_356_fu_5081453_p2 = (!add_ln703_354_fu_5081444_p2.read().is_01() || !zext_ln703_81_fu_5081450_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_354_fu_5081444_p2.read()) + sc_biguint<14>(zext_ln703_81_fu_5081450_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3570_fu_5077713_p2() {
    add_ln703_3570_fu_5077713_p2 = (!zext_ln708_1055_fu_5038447_p1.read().is_01() || !zext_ln708_1206_fu_5049548_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1055_fu_5038447_p1.read()) + sc_biguint<9>(zext_ln708_1206_fu_5049548_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3571_fu_5077723_p2() {
    add_ln703_3571_fu_5077723_p2 = (!add_ln703_3569_fu_5077707_p2.read().is_01() || !zext_ln703_610_fu_5077719_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3569_fu_5077707_p2.read()) + sc_biguint<10>(zext_ln703_610_fu_5077719_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3572_fu_5077733_p2() {
    add_ln703_3572_fu_5077733_p2 = (!sext_ln703_2042_fu_5077703_p1.read().is_01() || !zext_ln703_611_fu_5077729_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2042_fu_5077703_p1.read()) + sc_biguint<13>(zext_ln703_611_fu_5077729_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3573_fu_5088107_p2() {
    add_ln703_3573_fu_5088107_p2 = (!sext_ln703_2039_fu_5088100_p1.read().is_01() || !sext_ln703_2043_fu_5088104_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2039_fu_5088100_p1.read()) + sc_bigint<15>(sext_ln703_2043_fu_5088104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3574_fu_5088113_p2() {
    add_ln703_3574_fu_5088113_p2 = (!sext_ln203_621_fu_5080688_p1.read().is_01() || !sext_ln203_620_fu_5080685_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_621_fu_5080688_p1.read()) + sc_bigint<12>(sext_ln203_620_fu_5080685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3575_fu_5088123_p2() {
    add_ln703_3575_fu_5088123_p2 = (!add_ln703_3573_fu_5088107_p2.read().is_01() || !sext_ln703_2044_fu_5088119_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3573_fu_5088107_p2.read()) + sc_bigint<15>(sext_ln703_2044_fu_5088119_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3576_fu_5077739_p2() {
    add_ln703_3576_fu_5077739_p2 = (!sext_ln203_622_fu_5049652_p1.read().is_01() || !sext_ln203_619_fu_5049608_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln203_622_fu_5049652_p1.read()) + sc_bigint<7>(sext_ln203_619_fu_5049608_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3577_fu_5077749_p2() {
    add_ln703_3577_fu_5077749_p2 = (!zext_ln203_227_fu_5049632_p1.read().is_01() || !sext_ln703_2045_fu_5077745_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_227_fu_5049632_p1.read()) + sc_bigint<9>(sext_ln703_2045_fu_5077745_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3579_fu_5077755_p2() {
    add_ln703_3579_fu_5077755_p2 = (!sext_ln1118_1069_fu_5049676_p1.read().is_01() || !ap_const_lv11_700.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1069_fu_5049676_p1.read()) + sc_bigint<11>(ap_const_lv11_700));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_357_fu_5056111_p2() {
    add_ln703_357_fu_5056111_p2 = (!trunc_ln1118_s_fu_4996764_p4.read().is_01() || !zext_ln203_524_fu_4995632_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_s_fu_4996764_p4.read()) + sc_biguint<10>(zext_ln203_524_fu_4995632_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3580_fu_5077765_p2() {
    add_ln703_3580_fu_5077765_p2 = (!zext_ln1118_2925_fu_5049710_p1.read().is_01() || !sext_ln708_285_fu_5049724_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2925_fu_5049710_p1.read()) + sc_bigint<12>(sext_ln708_285_fu_5049724_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3581_fu_5077771_p2() {
    add_ln703_3581_fu_5077771_p2 = (!sext_ln703_2048_fu_5077761_p1.read().is_01() || !add_ln703_3580_fu_5077765_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2048_fu_5077761_p1.read()) + sc_biguint<12>(add_ln703_3580_fu_5077765_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3582_fu_5077781_p2() {
    add_ln703_3582_fu_5077781_p2 = (!zext_ln708_1039_fu_5037538_p1.read().is_01() || !zext_ln708_1102_fu_5042510_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1039_fu_5037538_p1.read()) + sc_biguint<9>(zext_ln708_1102_fu_5042510_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3583_fu_5077791_p2() {
    add_ln703_3583_fu_5077791_p2 = (!sext_ln1118_1071_fu_5049706_p1.read().is_01() || !zext_ln703_612_fu_5077787_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1071_fu_5049706_p1.read()) + sc_biguint<11>(zext_ln703_612_fu_5077787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3584_fu_5077801_p2() {
    add_ln703_3584_fu_5077801_p2 = (!sext_ln703_2049_fu_5077777_p1.read().is_01() || !sext_ln703_2050_fu_5077797_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2049_fu_5077777_p1.read()) + sc_bigint<13>(sext_ln703_2050_fu_5077797_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3585_fu_5077811_p2() {
    add_ln703_3585_fu_5077811_p2 = (!sext_ln1118_1075_fu_5049852_p1.read().is_01() || !sext_ln1118_1073_fu_5049754_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1075_fu_5049852_p1.read()) + sc_bigint<12>(sext_ln1118_1073_fu_5049754_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3586_fu_5077821_p2() {
    add_ln703_3586_fu_5077821_p2 = (!sext_ln703_463_fu_5077807_p1.read().is_01() || !sext_ln703_2051_fu_5077817_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_463_fu_5077807_p1.read()) + sc_bigint<14>(sext_ln703_2051_fu_5077817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3587_fu_5077827_p2() {
    add_ln703_3587_fu_5077827_p2 = (!zext_ln1118_2926_fu_5049794_p1.read().is_01() || !zext_ln1116_236_fu_5049774_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2926_fu_5049794_p1.read()) + sc_biguint<10>(zext_ln1116_236_fu_5049774_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3588_fu_5077837_p2() {
    add_ln703_3588_fu_5077837_p2 = (!sext_ln1116_81_fu_5049838_p1.read().is_01() || !zext_ln708_1609_fu_5049808_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_81_fu_5049838_p1.read()) + sc_biguint<11>(zext_ln708_1609_fu_5049808_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3589_fu_5077847_p2() {
    add_ln703_3589_fu_5077847_p2 = (!zext_ln703_613_fu_5077833_p1.read().is_01() || !sext_ln703_2052_fu_5077843_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_613_fu_5077833_p1.read()) + sc_bigint<12>(sext_ln703_2052_fu_5077843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_358_fu_5056121_p2() {
    add_ln703_358_fu_5056121_p2 = (!zext_ln1118_1685_fu_4996832_p1.read().is_01() || !zext_ln708_1099_fu_4996794_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1685_fu_4996832_p1.read()) + sc_biguint<10>(zext_ln708_1099_fu_4996794_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3590_fu_5088145_p2() {
    add_ln703_3590_fu_5088145_p2 = (!add_ln703_3586_reg_5093989.read().is_01() || !sext_ln703_2053_fu_5088142_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3586_reg_5093989.read()) + sc_bigint<14>(sext_ln703_2053_fu_5088142_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3591_fu_5077853_p2() {
    add_ln703_3591_fu_5077853_p2 = (!sext_ln1118_1076_fu_5049903_p1.read().is_01() || !sext_ln1118_920_fu_5039029_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1076_fu_5049903_p1.read()) + sc_bigint<12>(sext_ln1118_920_fu_5039029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3592_fu_5088153_p2() {
    add_ln703_3592_fu_5088153_p2 = (!add_ln703_3590_fu_5088145_p2.read().is_01() || !sext_ln703_2054_fu_5088150_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3590_fu_5088145_p2.read()) + sc_bigint<14>(sext_ln703_2054_fu_5088150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3593_fu_5077859_p2() {
    add_ln703_3593_fu_5077859_p2 = (!zext_ln203_643_fu_5041646_p1.read().is_01() || !zext_ln1118_2919_fu_5049490_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_643_fu_5041646_p1.read()) + sc_biguint<10>(zext_ln1118_2919_fu_5049490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3594_fu_5077869_p2() {
    add_ln703_3594_fu_5077869_p2 = (!sext_ln1116_84_fu_5049907_p1.read().is_01() || !zext_ln703_614_fu_5077865_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_84_fu_5049907_p1.read()) + sc_biguint<12>(zext_ln703_614_fu_5077865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3595_fu_5088166_p2() {
    add_ln703_3595_fu_5088166_p2 = (!sext_ln703_2055_fu_5088159_p1.read().is_01() || !sext_ln703_2056_fu_5088163_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2055_fu_5088159_p1.read()) + sc_bigint<15>(sext_ln703_2056_fu_5088163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3596_fu_5077875_p2() {
    add_ln703_3596_fu_5077875_p2 = (!zext_ln1118_2825_fu_5045156_p1.read().is_01() || !sext_ln1116_82_fu_5049856_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2825_fu_5045156_p1.read()) + sc_bigint<9>(sext_ln1116_82_fu_5049856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3597_fu_5077885_p2() {
    add_ln703_3597_fu_5077885_p2 = (!sext_ln1116_83_fu_5049884_p1.read().is_01() || !sext_ln703_2057_fu_5077881_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_83_fu_5049884_p1.read()) + sc_bigint<10>(sext_ln703_2057_fu_5077881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3598_fu_5077895_p2() {
    add_ln703_3598_fu_5077895_p2 = (!sext_ln1118_1028_fu_5046929_p1.read().is_01() || !sext_ln708_286_fu_5049880_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_1028_fu_5046929_p1.read()) + sc_bigint<8>(sext_ln708_286_fu_5049880_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3599_fu_5077905_p2() {
    add_ln703_3599_fu_5077905_p2 = (!zext_ln708_1091_fu_5041600_p1.read().is_01() || !sext_ln703_2059_fu_5077901_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1091_fu_5041600_p1.read()) + sc_bigint<10>(sext_ln703_2059_fu_5077901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_359_fu_5056131_p2() {
    add_ln703_359_fu_5056131_p2 = (!zext_ln703_82_fu_5056117_p1.read().is_01() || !zext_ln703_83_fu_5056127_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_82_fu_5056117_p1.read()) + sc_biguint<11>(zext_ln703_83_fu_5056127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_35_fu_5053895_p2() {
    add_ln703_35_fu_5053895_p2 = (!zext_ln1118_275_fu_4989825_p1.read().is_01() || !sext_ln708_5_fu_4989811_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_275_fu_4989825_p1.read()) + sc_bigint<12>(sext_ln708_5_fu_4989811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3600_fu_5077915_p2() {
    add_ln703_3600_fu_5077915_p2 = (!sext_ln703_2058_fu_5077891_p1.read().is_01() || !sext_ln703_2060_fu_5077911_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2058_fu_5077891_p1.read()) + sc_bigint<11>(sext_ln703_2060_fu_5077911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3601_fu_5088175_p2() {
    add_ln703_3601_fu_5088175_p2 = (!add_ln703_3595_fu_5088166_p2.read().is_01() || !sext_ln703_2061_fu_5088172_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3595_fu_5088166_p2.read()) + sc_bigint<15>(sext_ln703_2061_fu_5088172_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3602_fu_5088181_p2() {
    add_ln703_3602_fu_5088181_p2 = (!zext_ln203_228_fu_5080691_p1.read().is_01() || !add_ln703_3601_fu_5088175_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_228_fu_5080691_p1.read()) + sc_biguint<15>(add_ln703_3601_fu_5088175_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3603_fu_5077921_p2() {
    add_ln703_3603_fu_5077921_p2 = (!zext_ln203_674_fu_5049983_p1.read().is_01() || !zext_ln203_673_fu_5049945_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_674_fu_5049983_p1.read()) + sc_biguint<9>(zext_ln203_673_fu_5049945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3604_fu_5088190_p2() {
    add_ln703_3604_fu_5088190_p2 = (!add_ln703_3602_fu_5088181_p2.read().is_01() || !zext_ln703_615_fu_5088187_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3602_fu_5088181_p2.read()) + sc_biguint<15>(zext_ln703_615_fu_5088187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3605_fu_5077927_p2() {
    add_ln703_3605_fu_5077927_p2 = (!tmp_1731_fu_5046599_p4.read().is_01() || !zext_ln203_675_fu_5050003_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1731_fu_5046599_p4.read()) + sc_biguint<10>(zext_ln203_675_fu_5050003_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3606_fu_5077937_p2() {
    add_ln703_3606_fu_5077937_p2 = (!sext_ln203_623_fu_5049911_p1.read().is_01() || !sext_ln203_624_fu_5049941_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_623_fu_5049911_p1.read()) + sc_bigint<10>(sext_ln203_624_fu_5049941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3607_fu_5077947_p2() {
    add_ln703_3607_fu_5077947_p2 = (!sext_ln203_625_fu_5049959_p1.read().is_01() || !sext_ln703_2062_fu_5077943_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_625_fu_5049959_p1.read()) + sc_bigint<11>(sext_ln703_2062_fu_5077943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3608_fu_5077957_p2() {
    add_ln703_3608_fu_5077957_p2 = (!zext_ln703_616_fu_5077933_p1.read().is_01() || !sext_ln703_2063_fu_5077953_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_616_fu_5077933_p1.read()) + sc_bigint<12>(sext_ln703_2063_fu_5077953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_360_fu_5081466_p2() {
    add_ln703_360_fu_5081466_p2 = (!sext_ln703_239_fu_5081459_p1.read().is_01() || !zext_ln703_84_fu_5081463_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_239_fu_5081459_p1.read()) + sc_biguint<15>(zext_ln703_84_fu_5081463_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3610_fu_5077963_p2() {
    add_ln703_3610_fu_5077963_p2 = (!trunc_ln203_32_fu_5050017_p4.read().is_01() || !ap_const_lv9_120.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_32_fu_5050017_p4.read()) + sc_bigint<9>(ap_const_lv9_120));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3611_fu_5077973_p2() {
    add_ln703_3611_fu_5077973_p2 = (!zext_ln203_230_fu_5050041_p1.read().is_01() || !sext_ln703_466_fu_5077969_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_230_fu_5050041_p1.read()) + sc_bigint<10>(sext_ln703_466_fu_5077969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3612_fu_5077979_p2() {
    add_ln703_3612_fu_5077979_p2 = (!zext_ln203_676_fu_5050065_p1.read().is_01() || !add_ln703_3611_fu_5077973_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_676_fu_5050065_p1.read()) + sc_biguint<10>(add_ln703_3611_fu_5077973_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3613_fu_5077989_p2() {
    add_ln703_3613_fu_5077989_p2 = (!sext_ln1118_1077_fu_5050079_p1.read().is_01() || !sext_ln703_2066_fu_5077985_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1077_fu_5050079_p1.read()) + sc_bigint<11>(sext_ln703_2066_fu_5077985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3614_fu_5077999_p2() {
    add_ln703_3614_fu_5077999_p2 = (!zext_ln1118_2930_fu_5050097_p1.read().is_01() || !sext_ln703_2067_fu_5077995_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2930_fu_5050097_p1.read()) + sc_bigint<12>(sext_ln703_2067_fu_5077995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3615_fu_5078005_p2() {
    add_ln703_3615_fu_5078005_p2 = (!zext_ln1118_2929_fu_5050083_p1.read().is_01() || !sext_ln708_240_fu_5037614_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2929_fu_5050083_p1.read()) + sc_bigint<9>(sext_ln708_240_fu_5037614_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3616_fu_5078015_p2() {
    add_ln703_3616_fu_5078015_p2 = (!sext_ln1118_994_fu_5044960_p1.read().is_01() || !sext_ln703_2069_fu_5078011_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_994_fu_5044960_p1.read()) + sc_bigint<11>(sext_ln703_2069_fu_5078011_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3617_fu_5088215_p2() {
    add_ln703_3617_fu_5088215_p2 = (!sext_ln703_2068_fu_5088209_p1.read().is_01() || !sext_ln703_2070_fu_5088212_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2068_fu_5088209_p1.read()) + sc_bigint<13>(sext_ln703_2070_fu_5088212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3618_fu_5088221_p2() {
    add_ln703_3618_fu_5088221_p2 = (!zext_ln203_231_fu_5080694_p1.read().is_01() || !add_ln703_3617_fu_5088215_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln203_231_fu_5080694_p1.read()) + sc_biguint<13>(add_ln703_3617_fu_5088215_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3619_fu_5078021_p2() {
    add_ln703_3619_fu_5078021_p2 = (!zext_ln1118_2932_fu_5050125_p1.read().is_01() || !zext_ln708_1611_fu_5050121_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2932_fu_5050125_p1.read()) + sc_biguint<10>(zext_ln708_1611_fu_5050121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_361_fu_5056137_p2() {
    add_ln703_361_fu_5056137_p2 = (!sext_ln708_25_fu_4996868_p1.read().is_01() || !sext_ln203_62_fu_4996726_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_25_fu_4996868_p1.read()) + sc_bigint<11>(sext_ln203_62_fu_4996726_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3620_fu_5078031_p2() {
    add_ln703_3620_fu_5078031_p2 = (!sext_ln708_254_fu_5042178_p1.read().is_01() || !zext_ln703_617_fu_5078027_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_254_fu_5042178_p1.read()) + sc_biguint<12>(zext_ln703_617_fu_5078027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3621_fu_5088234_p2() {
    add_ln703_3621_fu_5088234_p2 = (!sext_ln703_2071_fu_5088227_p1.read().is_01() || !sext_ln703_2072_fu_5088231_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2071_fu_5088227_p1.read()) + sc_bigint<14>(sext_ln703_2072_fu_5088231_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3622_fu_5078037_p2() {
    add_ln703_3622_fu_5078037_p2 = (!trunc_ln1118_41_fu_5050157_p4.read().is_01() || !zext_ln708_1612_fu_5050149_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_41_fu_5050157_p4.read()) + sc_biguint<10>(zext_ln708_1612_fu_5050149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3623_fu_5078047_p2() {
    add_ln703_3623_fu_5078047_p2 = (!sext_ln1118_1078_fu_5050187_p1.read().is_01() || !zext_ln1118_2933_fu_5050153_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1078_fu_5050187_p1.read()) + sc_biguint<9>(zext_ln1118_2933_fu_5050153_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3624_fu_5078057_p2() {
    add_ln703_3624_fu_5078057_p2 = (!zext_ln708_932_fu_5048050_p1.read().is_01() || !sext_ln703_2073_fu_5078053_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_932_fu_5048050_p1.read()) + sc_bigint<10>(sext_ln703_2073_fu_5078053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3625_fu_5078067_p2() {
    add_ln703_3625_fu_5078067_p2 = (!zext_ln703_618_fu_5078043_p1.read().is_01() || !sext_ln703_2074_fu_5078063_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_618_fu_5078043_p1.read()) + sc_bigint<12>(sext_ln703_2074_fu_5078063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3626_fu_5088243_p2() {
    add_ln703_3626_fu_5088243_p2 = (!add_ln703_3621_fu_5088234_p2.read().is_01() || !sext_ln703_2075_fu_5088240_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3621_fu_5088234_p2.read()) + sc_bigint<14>(sext_ln703_2075_fu_5088240_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3627_fu_5078073_p2() {
    add_ln703_3627_fu_5078073_p2 = (!sext_ln1118_1081_fu_5050329_p1.read().is_01() || !sext_ln1118_1080_fu_5050267_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1081_fu_5050329_p1.read()) + sc_bigint<12>(sext_ln1118_1080_fu_5050267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3628_fu_5088252_p2() {
    add_ln703_3628_fu_5088252_p2 = (!add_ln703_3626_fu_5088243_p2.read().is_01() || !sext_ln703_2076_fu_5088249_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3626_fu_5088243_p2.read()) + sc_bigint<14>(sext_ln703_2076_fu_5088249_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3629_fu_5078079_p2() {
    add_ln703_3629_fu_5078079_p2 = (!zext_ln1118_2936_fu_5050253_p1.read().is_01() || !zext_ln1118_2935_fu_5050233_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2936_fu_5050253_p1.read()) + sc_biguint<10>(zext_ln1118_2935_fu_5050233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_362_fu_5056147_p2() {
    add_ln703_362_fu_5056147_p2 = (!sext_ln708_23_fu_4996642_p1.read().is_01() || !zext_ln708_1096_fu_4996694_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_23_fu_4996642_p1.read()) + sc_biguint<10>(zext_ln708_1096_fu_4996694_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3630_fu_5078089_p2() {
    add_ln703_3630_fu_5078089_p2 = (!zext_ln708_1613_fu_5050215_p1.read().is_01() || !zext_ln703_619_fu_5078085_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1613_fu_5050215_p1.read()) + sc_biguint<11>(zext_ln703_619_fu_5078085_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3631_fu_5088265_p2() {
    add_ln703_3631_fu_5088265_p2 = (!sext_ln703_2077_fu_5088258_p1.read().is_01() || !zext_ln703_620_fu_5088262_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2077_fu_5088258_p1.read()) + sc_biguint<15>(zext_ln703_620_fu_5088262_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3632_fu_5078095_p2() {
    add_ln703_3632_fu_5078095_p2 = (!sext_ln708_287_fu_5050201_p1.read().is_01() || !zext_ln708_1614_fu_5050291_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_287_fu_5050201_p1.read()) + sc_biguint<11>(zext_ln708_1614_fu_5050291_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3633_fu_5078105_p2() {
    add_ln703_3633_fu_5078105_p2 = (!zext_ln1118_2937_fu_5050287_p1.read().is_01() || !sext_ln703_2078_fu_5078101_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2937_fu_5050287_p1.read()) + sc_bigint<12>(sext_ln703_2078_fu_5078101_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3634_fu_5078111_p2() {
    add_ln703_3634_fu_5078111_p2 = (!sext_ln1118_1079_fu_5050219_p1.read().is_01() || !zext_ln708_1607_fu_5049192_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1079_fu_5050219_p1.read()) + sc_biguint<10>(zext_ln708_1607_fu_5049192_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3635_fu_5078117_p2() {
    add_ln703_3635_fu_5078117_p2 = (!sext_ln1118_1082_fu_5050353_p1.read().is_01() || !zext_ln708_1615_fu_5050305_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_1082_fu_5050353_p1.read()) + sc_biguint<8>(zext_ln708_1615_fu_5050305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3636_fu_5078127_p2() {
    add_ln703_3636_fu_5078127_p2 = (!add_ln703_3634_fu_5078111_p2.read().is_01() || !sext_ln703_2079_fu_5078123_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3634_fu_5078111_p2.read()) + sc_bigint<10>(sext_ln703_2079_fu_5078123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3637_fu_5078137_p2() {
    add_ln703_3637_fu_5078137_p2 = (!add_ln703_3633_fu_5078105_p2.read().is_01() || !sext_ln703_2080_fu_5078133_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3633_fu_5078105_p2.read()) + sc_bigint<12>(sext_ln703_2080_fu_5078133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3638_fu_5088274_p2() {
    add_ln703_3638_fu_5088274_p2 = (!add_ln703_3631_fu_5088265_p2.read().is_01() || !sext_ln703_2081_fu_5088271_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3631_fu_5088265_p2.read()) + sc_bigint<15>(sext_ln703_2081_fu_5088271_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3639_fu_5078143_p2() {
    add_ln703_3639_fu_5078143_p2 = (!zext_ln203_232_fu_5050391_p1.read().is_01() || !sext_ln203_626_fu_5050367_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_232_fu_5050391_p1.read()) + sc_bigint<12>(sext_ln203_626_fu_5050367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_363_fu_5056157_p2() {
    add_ln703_363_fu_5056157_p2 = (!sext_ln703_240_fu_5056143_p1.read().is_01() || !sext_ln703_241_fu_5056153_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_240_fu_5056143_p1.read()) + sc_bigint<12>(sext_ln703_241_fu_5056153_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3641_fu_5078149_p2() {
    add_ln703_3641_fu_5078149_p2 = (!trunc_ln203_34_fu_5050405_p4.read().is_01() || !ap_const_lv10_300.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_34_fu_5050405_p4.read()) + sc_bigint<10>(ap_const_lv10_300));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3642_fu_5078155_p2() {
    add_ln703_3642_fu_5078155_p2 = (!zext_ln1118_2940_fu_5050433_p1.read().is_01() || !zext_ln708_1616_fu_5050415_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1118_2940_fu_5050433_p1.read()) + sc_biguint<6>(zext_ln708_1616_fu_5050415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3643_fu_5078165_p2() {
    add_ln703_3643_fu_5078165_p2 = (!add_ln703_3641_fu_5078149_p2.read().is_01() || !zext_ln703_621_fu_5078161_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3641_fu_5078149_p2.read()) + sc_biguint<10>(zext_ln703_621_fu_5078161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3644_fu_5078175_p2() {
    add_ln703_3644_fu_5078175_p2 = (!sext_ln703_472_fu_5078171_p1.read().is_01() || !sext_ln203_627_fu_5050457_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_472_fu_5078171_p1.read()) + sc_bigint<12>(sext_ln203_627_fu_5050457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3645_fu_5078181_p2() {
    add_ln703_3645_fu_5078181_p2 = (!zext_ln1118_2907_fu_5048940_p1.read().is_01() || !add_ln703_3644_fu_5078175_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2907_fu_5048940_p1.read()) + sc_biguint<12>(add_ln703_3644_fu_5078175_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3646_fu_5078191_p2() {
    add_ln703_3646_fu_5078191_p2 = (!sext_ln1118_1084_fu_5050491_p1.read().is_01() || !sext_ln1118_1083_fu_5050477_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1084_fu_5050491_p1.read()) + sc_bigint<9>(sext_ln1118_1083_fu_5050477_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3647_fu_5078201_p2() {
    add_ln703_3647_fu_5078201_p2 = (!sext_ln703_2084_fu_5078187_p1.read().is_01() || !sext_ln703_2085_fu_5078197_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2084_fu_5078187_p1.read()) + sc_bigint<13>(sext_ln703_2085_fu_5078197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3648_fu_5078207_p2() {
    add_ln703_3648_fu_5078207_p2 = (!zext_ln708_1184_fu_5048574_p1.read().is_01() || !sext_ln1118_1086_fu_5050537_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_1184_fu_5048574_p1.read()) + sc_bigint<12>(sext_ln1118_1086_fu_5050537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3649_fu_5078217_p2() {
    add_ln703_3649_fu_5078217_p2 = (!add_ln703_3647_fu_5078201_p2.read().is_01() || !sext_ln703_2086_fu_5078213_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3647_fu_5078201_p2.read()) + sc_bigint<13>(sext_ln703_2086_fu_5078213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_364_fu_5056163_p2() {
    add_ln703_364_fu_5056163_p2 = (!zext_ln1118_1062_fu_4996656_p1.read().is_01() || !sext_ln708_24_fu_4996760_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1062_fu_4996656_p1.read()) + sc_bigint<10>(sext_ln708_24_fu_4996760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3650_fu_5078227_p2() {
    add_ln703_3650_fu_5078227_p2 = (!zext_ln708_1612_fu_5050149_p1.read().is_01() || !zext_ln1116_231_fu_5037782_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1612_fu_5050149_p1.read()) + sc_biguint<10>(zext_ln1116_231_fu_5037782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3651_fu_5078237_p2() {
    add_ln703_3651_fu_5078237_p2 = (!sext_ln1118_1087_fu_5050561_p1.read().is_01() || !sext_ln1118_1088_fu_5050575_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1087_fu_5050561_p1.read()) + sc_bigint<11>(sext_ln1118_1088_fu_5050575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3652_fu_5078247_p2() {
    add_ln703_3652_fu_5078247_p2 = (!zext_ln703_622_fu_5078233_p1.read().is_01() || !sext_ln703_2088_fu_5078243_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_622_fu_5078233_p1.read()) + sc_bigint<12>(sext_ln703_2088_fu_5078243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3653_fu_5078257_p2() {
    add_ln703_3653_fu_5078257_p2 = (!sext_ln703_2087_fu_5078223_p1.read().is_01() || !sext_ln703_2089_fu_5078253_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2087_fu_5078223_p1.read()) + sc_bigint<14>(sext_ln703_2089_fu_5078253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3654_fu_5088293_p2() {
    add_ln703_3654_fu_5088293_p2 = (!sext_ln1118_1089_fu_5080697_p1.read().is_01() || !add_ln703_3653_reg_5094064.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_1089_fu_5080697_p1.read()) + sc_biguint<14>(add_ln703_3653_reg_5094064.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3655_fu_5078263_p2() {
    add_ln703_3655_fu_5078263_p2 = (!sext_ln708_288_fu_5050659_p1.read().is_01() || !sext_ln203_591_fu_5047237_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_288_fu_5050659_p1.read()) + sc_bigint<12>(sext_ln203_591_fu_5047237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3656_fu_5088301_p2() {
    add_ln703_3656_fu_5088301_p2 = (!add_ln703_3654_fu_5088293_p2.read().is_01() || !sext_ln703_2090_fu_5088298_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3654_fu_5088293_p2.read()) + sc_bigint<14>(sext_ln703_2090_fu_5088298_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3657_fu_5078269_p2() {
    add_ln703_3657_fu_5078269_p2 = (!zext_ln1118_2946_fu_5050615_p1.read().is_01() || !zext_ln203_654_fu_5044106_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2946_fu_5050615_p1.read()) + sc_biguint<10>(zext_ln203_654_fu_5044106_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3658_fu_5078279_p2() {
    add_ln703_3658_fu_5078279_p2 = (!zext_ln708_1618_fu_5050683_p1.read().is_01() || !zext_ln1118_2947_fu_5050635_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1618_fu_5050683_p1.read()) + sc_biguint<10>(zext_ln1118_2947_fu_5050635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3659_fu_5078289_p2() {
    add_ln703_3659_fu_5078289_p2 = (!zext_ln703_623_fu_5078275_p1.read().is_01() || !zext_ln703_624_fu_5078285_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_623_fu_5078275_p1.read()) + sc_biguint<11>(zext_ln703_624_fu_5078285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_365_fu_5056173_p2() {
    add_ln703_365_fu_5056173_p2 = (!sext_ln1118_110_fu_4996660_p1.read().is_01() || !zext_ln1118_1073_fu_4996812_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_110_fu_4996660_p1.read()) + sc_biguint<9>(zext_ln1118_1073_fu_4996812_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3660_fu_5088314_p2() {
    add_ln703_3660_fu_5088314_p2 = (!sext_ln703_2091_fu_5088307_p1.read().is_01() || !zext_ln703_625_fu_5088311_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2091_fu_5088307_p1.read()) + sc_biguint<15>(zext_ln703_625_fu_5088311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3661_fu_5078295_p2() {
    add_ln703_3661_fu_5078295_p2 = (!zext_ln1118_2903_fu_5048682_p1.read().is_01() || !sext_ln708_289_fu_5050731_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_2903_fu_5048682_p1.read()) + sc_bigint<11>(sext_ln708_289_fu_5050731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3662_fu_5078301_p2() {
    add_ln703_3662_fu_5078301_p2 = (!zext_ln708_1619_fu_5050703_p1.read().is_01() || !zext_ln1118_2949_fu_5050663_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1619_fu_5050703_p1.read()) + sc_biguint<8>(zext_ln1118_2949_fu_5050663_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3663_fu_5078311_p2() {
    add_ln703_3663_fu_5078311_p2 = (!add_ln703_3661_fu_5078295_p2.read().is_01() || !zext_ln703_626_fu_5078307_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3661_fu_5078295_p2.read()) + sc_biguint<11>(zext_ln703_626_fu_5078307_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3664_fu_5078321_p2() {
    add_ln703_3664_fu_5078321_p2 = (!zext_ln203_678_fu_5050745_p1.read().is_01() || !zext_ln1118_2950_fu_5050717_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln203_678_fu_5050745_p1.read()) + sc_biguint<6>(zext_ln1118_2950_fu_5050717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3665_fu_5078331_p2() {
    add_ln703_3665_fu_5078331_p2 = (!sext_ln1118_983_fu_5043450_p1.read().is_01() || !sext_ln1118_1044_fu_5048168_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_983_fu_5043450_p1.read()) + sc_bigint<8>(sext_ln1118_1044_fu_5048168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3666_fu_5078341_p2() {
    add_ln703_3666_fu_5078341_p2 = (!zext_ln1118_2861_fu_5046545_p1.read().is_01() || !sext_ln703_2093_fu_5078337_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2861_fu_5046545_p1.read()) + sc_bigint<10>(sext_ln703_2093_fu_5078337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3667_fu_5078347_p2() {
    add_ln703_3667_fu_5078347_p2 = (!zext_ln703_627_fu_5078327_p1.read().is_01() || !add_ln703_3666_fu_5078341_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_627_fu_5078327_p1.read()) + sc_biguint<10>(add_ln703_3666_fu_5078341_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3668_fu_5078357_p2() {
    add_ln703_3668_fu_5078357_p2 = (!sext_ln703_2092_fu_5078317_p1.read().is_01() || !sext_ln703_2094_fu_5078353_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2092_fu_5078317_p1.read()) + sc_bigint<12>(sext_ln703_2094_fu_5078353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3669_fu_5088323_p2() {
    add_ln703_3669_fu_5088323_p2 = (!add_ln703_3660_fu_5088314_p2.read().is_01() || !sext_ln703_2095_fu_5088320_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3660_fu_5088314_p2.read()) + sc_bigint<15>(sext_ln703_2095_fu_5088320_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_366_fu_5056179_p2() {
    add_ln703_366_fu_5056179_p2 = (!zext_ln1118_1066_fu_4996712_p1.read().is_01() || !add_ln703_365_fu_5056173_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1066_fu_4996712_p1.read()) + sc_biguint<9>(add_ln703_365_fu_5056173_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3670_fu_5088329_p2() {
    add_ln703_3670_fu_5088329_p2 = (!zext_ln203_216_reg_5090468.read().is_01() || !sext_ln203_628_fu_5080700_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_216_reg_5090468.read()) + sc_bigint<12>(sext_ln203_628_fu_5080700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3672_fu_5078363_p2() {
    add_ln703_3672_fu_5078363_p2 = (!tmp_1766_fu_5048850_p4.read().is_01() || !ap_const_lv9_140.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1766_fu_5048850_p4.read()) + sc_bigint<9>(ap_const_lv9_140));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3673_fu_5078373_p2() {
    add_ln703_3673_fu_5078373_p2 = (!sext_ln1118_964_fu_5042492_p1.read().is_01() || !sext_ln703_2098_fu_5078369_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_964_fu_5042492_p1.read()) + sc_bigint<10>(sext_ln703_2098_fu_5078369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3674_fu_5078383_p2() {
    add_ln703_3674_fu_5078383_p2 = (!sext_ln1118_1090_fu_5050749_p1.read().is_01() || !sext_ln708_252_fu_5041972_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1090_fu_5050749_p1.read()) + sc_bigint<11>(sext_ln708_252_fu_5041972_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3675_fu_5078393_p2() {
    add_ln703_3675_fu_5078393_p2 = (!sext_ln703_2099_fu_5078379_p1.read().is_01() || !sext_ln703_2100_fu_5078389_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2099_fu_5078379_p1.read()) + sc_bigint<12>(sext_ln703_2100_fu_5078389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3676_fu_5078403_p2() {
    add_ln703_3676_fu_5078403_p2 = (!sext_ln1118_1092_fu_5050787_p1.read().is_01() || !sext_ln703_2101_fu_5078399_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_1092_fu_5050787_p1.read()) + sc_bigint<13>(sext_ln703_2101_fu_5078399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3677_fu_5078409_p2() {
    add_ln703_3677_fu_5078409_p2 = (!sext_ln203_571_fu_5046093_p1.read().is_01() || !sext_ln1118_915_fu_5038867_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_571_fu_5046093_p1.read()) + sc_bigint<8>(sext_ln1118_915_fu_5038867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3678_fu_5078419_p2() {
    add_ln703_3678_fu_5078419_p2 = (!sext_ln1118_1091_fu_5050763_p1.read().is_01() || !sext_ln703_2102_fu_5078415_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1091_fu_5050763_p1.read()) + sc_bigint<10>(sext_ln703_2102_fu_5078415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3679_fu_5088351_p2() {
    add_ln703_3679_fu_5088351_p2 = (!add_ln703_3676_reg_5094084.read().is_01() || !sext_ln703_2103_fu_5088348_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3676_reg_5094084.read()) + sc_bigint<13>(sext_ln703_2103_fu_5088348_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_367_fu_5056189_p2() {
    add_ln703_367_fu_5056189_p2 = (!sext_ln703_242_fu_5056169_p1.read().is_01() || !sext_ln703_243_fu_5056185_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_242_fu_5056169_p1.read()) + sc_bigint<11>(sext_ln703_243_fu_5056185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3680_fu_5088356_p2() {
    add_ln703_3680_fu_5088356_p2 = (!sext_ln708_290_fu_5080703_p1.read().is_01() || !add_ln703_3679_fu_5088351_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln708_290_fu_5080703_p1.read()) + sc_biguint<13>(add_ln703_3679_fu_5088351_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3681_fu_5078425_p2() {
    add_ln703_3681_fu_5078425_p2 = (!sext_ln1118_1093_fu_5050861_p1.read().is_01() || !sext_ln203_591_fu_5047237_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1093_fu_5050861_p1.read()) + sc_bigint<12>(sext_ln203_591_fu_5047237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3682_fu_5088369_p2() {
    add_ln703_3682_fu_5088369_p2 = (!sext_ln703_2104_fu_5088362_p1.read().is_01() || !sext_ln703_2105_fu_5088366_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2104_fu_5088362_p1.read()) + sc_bigint<14>(sext_ln703_2105_fu_5088366_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3683_fu_5078431_p2() {
    add_ln703_3683_fu_5078431_p2 = (!zext_ln1118_2767_fu_5042646_p1.read().is_01() || !sext_ln1118_1095_fu_5050907_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2767_fu_5042646_p1.read()) + sc_bigint<12>(sext_ln1118_1095_fu_5050907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3684_fu_5078441_p2() {
    add_ln703_3684_fu_5078441_p2 = (!zext_ln1118_2955_fu_5050921_p1.read().is_01() || !zext_ln1118_2911_fu_5049126_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2955_fu_5050921_p1.read()) + sc_biguint<10>(zext_ln1118_2911_fu_5049126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3685_fu_5078451_p2() {
    add_ln703_3685_fu_5078451_p2 = (!zext_ln708_1620_fu_5050827_p1.read().is_01() || !zext_ln703_628_fu_5078447_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1620_fu_5050827_p1.read()) + sc_biguint<11>(zext_ln703_628_fu_5078447_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3686_fu_5078461_p2() {
    add_ln703_3686_fu_5078461_p2 = (!sext_ln703_2107_fu_5078437_p1.read().is_01() || !zext_ln703_629_fu_5078457_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2107_fu_5078437_p1.read()) + sc_biguint<13>(zext_ln703_629_fu_5078457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3687_fu_5088382_p2() {
    add_ln703_3687_fu_5088382_p2 = (!sext_ln703_2106_fu_5088375_p1.read().is_01() || !sext_ln703_2108_fu_5088379_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2106_fu_5088375_p1.read()) + sc_bigint<15>(sext_ln703_2108_fu_5088379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3688_fu_5078467_p2() {
    add_ln703_3688_fu_5078467_p2 = (!zext_ln708_1509_fu_5038387_p1.read().is_01() || !zext_ln708_1622_fu_5050941_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1509_fu_5038387_p1.read()) + sc_biguint<11>(zext_ln708_1622_fu_5050941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3689_fu_5078473_p2() {
    add_ln703_3689_fu_5078473_p2 = (!zext_ln708_1527_fu_5040733_p1.read().is_01() || !zext_ln1118_2952_fu_5050807_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1527_fu_5040733_p1.read()) + sc_biguint<8>(zext_ln1118_2952_fu_5050807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_368_fu_5056199_p2() {
    add_ln703_368_fu_5056199_p2 = (!add_ln703_363_fu_5056157_p2.read().is_01() || !sext_ln703_244_fu_5056195_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_363_fu_5056157_p2.read()) + sc_bigint<12>(sext_ln703_244_fu_5056195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3690_fu_5078483_p2() {
    add_ln703_3690_fu_5078483_p2 = (!add_ln703_3688_fu_5078467_p2.read().is_01() || !zext_ln703_630_fu_5078479_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3688_fu_5078467_p2.read()) + sc_biguint<11>(zext_ln703_630_fu_5078479_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3691_fu_5078493_p2() {
    add_ln703_3691_fu_5078493_p2 = (!zext_ln708_1508_fu_5038271_p1.read().is_01() || !zext_ln708_1621_fu_5050841_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1508_fu_5038271_p1.read()) + sc_biguint<8>(zext_ln708_1621_fu_5050841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3692_fu_5078503_p2() {
    add_ln703_3692_fu_5078503_p2 = (!sext_ln708_291_fu_5050965_p1.read().is_01() || !sext_ln1118_905_fu_5037704_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_291_fu_5050965_p1.read()) + sc_bigint<8>(sext_ln1118_905_fu_5037704_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3693_fu_5078513_p2() {
    add_ln703_3693_fu_5078513_p2 = (!zext_ln708_1226_fu_5050979_p1.read().is_01() || !sext_ln703_2109_fu_5078509_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1226_fu_5050979_p1.read()) + sc_bigint<9>(sext_ln703_2109_fu_5078509_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3694_fu_5078523_p2() {
    add_ln703_3694_fu_5078523_p2 = (!zext_ln703_632_fu_5078499_p1.read().is_01() || !sext_ln703_2110_fu_5078519_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_632_fu_5078499_p1.read()) + sc_bigint<10>(sext_ln703_2110_fu_5078519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3695_fu_5078533_p2() {
    add_ln703_3695_fu_5078533_p2 = (!zext_ln703_631_fu_5078489_p1.read().is_01() || !sext_ln703_2111_fu_5078529_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_631_fu_5078489_p1.read()) + sc_bigint<12>(sext_ln703_2111_fu_5078529_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3696_fu_5088391_p2() {
    add_ln703_3696_fu_5088391_p2 = (!add_ln703_3687_fu_5088382_p2.read().is_01() || !sext_ln703_2112_fu_5088388_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3687_fu_5088382_p2.read()) + sc_bigint<15>(sext_ln703_2112_fu_5088388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3697_fu_5088397_p2() {
    add_ln703_3697_fu_5088397_p2 = (!sext_ln203_629_fu_5080706_p1.read().is_01() || !add_ln703_3696_fu_5088391_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_629_fu_5080706_p1.read()) + sc_biguint<15>(add_ln703_3696_fu_5088391_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3698_fu_5078539_p2() {
    add_ln703_3698_fu_5078539_p2 = (!sext_ln203_631_fu_5051027_p1.read().is_01() || !sext_ln1118_1060_fu_5049254_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_631_fu_5051027_p1.read()) + sc_bigint<12>(sext_ln1118_1060_fu_5049254_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3699_fu_5088406_p2() {
    add_ln703_3699_fu_5088406_p2 = (!add_ln703_3697_fu_5088397_p2.read().is_01() || !sext_ln703_2113_fu_5088403_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3697_fu_5088397_p2.read()) + sc_bigint<15>(sext_ln703_2113_fu_5088403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_369_fu_5081475_p2() {
    add_ln703_369_fu_5081475_p2 = (!add_ln703_360_fu_5081466_p2.read().is_01() || !sext_ln703_245_fu_5081472_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_360_fu_5081466_p2.read()) + sc_bigint<15>(sext_ln703_245_fu_5081472_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_36_fu_5053905_p2() {
    add_ln703_36_fu_5053905_p2 = (!sext_ln703_28_fu_5053891_p1.read().is_01() || !sext_ln703_29_fu_5053901_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_28_fu_5053891_p1.read()) + sc_bigint<13>(sext_ln703_29_fu_5053901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3700_fu_5078545_p2() {
    add_ln703_3700_fu_5078545_p2 = (!zext_ln203_677_fu_5050387_p1.read().is_01() || !zext_ln203_679_fu_5051013_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_677_fu_5050387_p1.read()) + sc_biguint<10>(zext_ln203_679_fu_5051013_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3701_fu_5078555_p2() {
    add_ln703_3701_fu_5078555_p2 = (!zext_ln203_233_fu_5050993_p1.read().is_01() || !sext_ln203_599_fu_5047843_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_233_fu_5050993_p1.read()) + sc_bigint<9>(sext_ln203_599_fu_5047843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3702_fu_5078565_p2() {
    add_ln703_3702_fu_5078565_p2 = (!zext_ln703_633_fu_5078551_p1.read().is_01() || !sext_ln703_2114_fu_5078561_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_633_fu_5078551_p1.read()) + sc_bigint<11>(sext_ln703_2114_fu_5078561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3704_fu_5078571_p2() {
    add_ln703_3704_fu_5078571_p2 = (!sext_ln1118_1096_fu_5051041_p1.read().is_01() || !ap_const_lv11_700.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1096_fu_5051041_p1.read()) + sc_bigint<11>(ap_const_lv11_700));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3705_fu_5078577_p2() {
    add_ln703_3705_fu_5078577_p2 = (!zext_ln708_1623_fu_5051065_p1.read().is_01() || !add_ln703_3704_fu_5078571_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1623_fu_5051065_p1.read()) + sc_biguint<11>(add_ln703_3704_fu_5078571_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3706_fu_5078587_p2() {
    add_ln703_3706_fu_5078587_p2 = (!sext_ln1118_1062_fu_5049330_p1.read().is_01() || !sext_ln1116_86_fu_5051089_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1062_fu_5049330_p1.read()) + sc_bigint<12>(sext_ln1116_86_fu_5051089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3707_fu_5078593_p2() {
    add_ln703_3707_fu_5078593_p2 = (!sext_ln703_2117_fu_5078583_p1.read().is_01() || !add_ln703_3706_fu_5078587_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2117_fu_5078583_p1.read()) + sc_biguint<12>(add_ln703_3706_fu_5078587_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3708_fu_5078603_p2() {
    add_ln703_3708_fu_5078603_p2 = (!zext_ln708_1234_fu_5051147_p1.read().is_01() || !sext_ln703_2118_fu_5078599_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_1234_fu_5051147_p1.read()) + sc_bigint<13>(sext_ln703_2118_fu_5078599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3709_fu_5078609_p2() {
    add_ln703_3709_fu_5078609_p2 = (!sext_ln1118_1097_fu_5051103_p1.read().is_01() || !zext_ln708_1526_fu_5040647_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1097_fu_5051103_p1.read()) + sc_biguint<11>(zext_ln708_1526_fu_5040647_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3710_fu_5088428_p2() {
    add_ln703_3710_fu_5088428_p2 = (!add_ln703_3708_reg_5094119.read().is_01() || !sext_ln703_2119_fu_5088425_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3708_reg_5094119.read()) + sc_bigint<13>(sext_ln703_2119_fu_5088425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3711_fu_5078615_p2() {
    add_ln703_3711_fu_5078615_p2 = (!sext_ln203_543_fu_5043892_p1.read().is_01() || !zext_ln708_1515_fu_5039685_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_543_fu_5043892_p1.read()) + sc_biguint<10>(zext_ln708_1515_fu_5039685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3712_fu_5078625_p2() {
    add_ln703_3712_fu_5078625_p2 = (!sext_ln1116_87_fu_5051123_p1.read().is_01() || !sext_ln1118_1098_fu_5051151_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_87_fu_5051123_p1.read()) + sc_bigint<9>(sext_ln1118_1098_fu_5051151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3713_fu_5078635_p2() {
    add_ln703_3713_fu_5078635_p2 = (!sext_ln703_2120_fu_5078621_p1.read().is_01() || !sext_ln703_2121_fu_5078631_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2120_fu_5078621_p1.read()) + sc_bigint<11>(sext_ln703_2121_fu_5078631_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3714_fu_5088436_p2() {
    add_ln703_3714_fu_5088436_p2 = (!add_ln703_3710_fu_5088428_p2.read().is_01() || !sext_ln703_2122_fu_5088433_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3710_fu_5088428_p2.read()) + sc_bigint<13>(sext_ln703_2122_fu_5088433_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3715_fu_5078641_p2() {
    add_ln703_3715_fu_5078641_p2 = (!zext_ln1116_233_fu_5046235_p1.read().is_01() || !zext_ln1118_2960_fu_5051229_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_233_fu_5046235_p1.read()) + sc_biguint<10>(zext_ln1118_2960_fu_5051229_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3716_fu_5088449_p2() {
    add_ln703_3716_fu_5088449_p2 = (!sext_ln703_2123_fu_5088442_p1.read().is_01() || !zext_ln703_634_fu_5088446_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2123_fu_5088442_p1.read()) + sc_biguint<14>(zext_ln703_634_fu_5088446_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3717_fu_5078647_p2() {
    add_ln703_3717_fu_5078647_p2 = (!sext_ln1118_1100_fu_5051209_p1.read().is_01() || !sext_ln1118_1099_fu_5051171_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1100_fu_5051209_p1.read()) + sc_bigint<11>(sext_ln1118_1099_fu_5051171_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3718_fu_5078657_p2() {
    add_ln703_3718_fu_5078657_p2 = (!zext_ln1118_2961_fu_5051273_p1.read().is_01() || !sext_ln703_2124_fu_5078653_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2961_fu_5051273_p1.read()) + sc_bigint<12>(sext_ln703_2124_fu_5078653_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3719_fu_5088458_p2() {
    add_ln703_3719_fu_5088458_p2 = (!add_ln703_3716_fu_5088449_p2.read().is_01() || !sext_ln703_2125_fu_5088455_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3716_fu_5088449_p2.read()) + sc_bigint<14>(sext_ln703_2125_fu_5088455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_371_fu_5056205_p2() {
    add_ln703_371_fu_5056205_p2 = (!zext_ln708_1105_fu_4996910_p1.read().is_01() || !ap_const_lv11_C0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1105_fu_4996910_p1.read()) + sc_biguint<11>(ap_const_lv11_C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3720_fu_5078663_p2() {
    add_ln703_3720_fu_5078663_p2 = (!sext_ln1118_955_fu_5041573_p1.read().is_01() || !sext_ln1118_1104_fu_5051317_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_955_fu_5041573_p1.read()) + sc_bigint<11>(sext_ln1118_1104_fu_5051317_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3721_fu_5078673_p2() {
    add_ln703_3721_fu_5078673_p2 = (!sext_ln1118_1103_fu_5051303_p1.read().is_01() || !sext_ln703_2126_fu_5078669_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1103_fu_5051303_p1.read()) + sc_bigint<12>(sext_ln703_2126_fu_5078669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3722_fu_5078679_p2() {
    add_ln703_3722_fu_5078679_p2 = (!zext_ln1118_2842_fu_5045786_p1.read().is_01() || !sext_ln1118_1101_fu_5051249_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2842_fu_5045786_p1.read()) + sc_bigint<9>(sext_ln1118_1101_fu_5051249_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3723_fu_5078689_p2() {
    add_ln703_3723_fu_5078689_p2 = (!sext_ln1116_88_fu_5051185_p1.read().is_01() || !sext_ln703_2127_fu_5078685_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_88_fu_5051185_p1.read()) + sc_bigint<10>(sext_ln703_2127_fu_5078685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3724_fu_5078699_p2() {
    add_ln703_3724_fu_5078699_p2 = (!add_ln703_3721_fu_5078673_p2.read().is_01() || !sext_ln703_2128_fu_5078695_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3721_fu_5078673_p2.read()) + sc_bigint<12>(sext_ln703_2128_fu_5078695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3725_fu_5088467_p2() {
    add_ln703_3725_fu_5088467_p2 = (!add_ln703_3719_fu_5088458_p2.read().is_01() || !sext_ln703_2129_fu_5088464_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3719_fu_5088458_p2.read()) + sc_bigint<14>(sext_ln703_2129_fu_5088464_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3726_fu_5088473_p2() {
    add_ln703_3726_fu_5088473_p2 = (!sext_ln203_635_fu_5080709_p1.read().is_01() || !add_ln703_3725_fu_5088467_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_635_fu_5080709_p1.read()) + sc_biguint<14>(add_ln703_3725_fu_5088467_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3727_fu_5078705_p2() {
    add_ln703_3727_fu_5078705_p2 = (!sext_ln203_601_fu_5048266_p1.read().is_01() || !sext_ln203_640_fu_5051439_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_601_fu_5048266_p1.read()) + sc_bigint<11>(sext_ln203_640_fu_5051439_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3728_fu_5078715_p2() {
    add_ln703_3728_fu_5078715_p2 = (!sext_ln203_636_fu_5051365_p1.read().is_01() || !sext_ln703_2131_fu_5078711_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_636_fu_5051365_p1.read()) + sc_bigint<12>(sext_ln703_2131_fu_5078711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3729_fu_5088486_p2() {
    add_ln703_3729_fu_5088486_p2 = (!sext_ln703_2130_fu_5088479_p1.read().is_01() || !sext_ln703_2132_fu_5088483_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2130_fu_5088479_p1.read()) + sc_bigint<15>(sext_ln703_2132_fu_5088483_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_372_fu_5056215_p2() {
    add_ln703_372_fu_5056215_p2 = (!zext_ln703_1_fu_5056211_p1.read().is_01() || !sext_ln203_63_fu_4996962_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_1_fu_5056211_p1.read()) + sc_bigint<13>(sext_ln203_63_fu_4996962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3730_fu_5078721_p2() {
    add_ln703_3730_fu_5078721_p2 = (!sext_ln203_513_fu_5039397_p1.read().is_01() || !sext_ln203_634_fu_5051341_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_513_fu_5039397_p1.read()) + sc_bigint<10>(sext_ln203_634_fu_5051341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3731_fu_5078731_p2() {
    add_ln703_3731_fu_5078731_p2 = (!zext_ln203_234_fu_5051399_p1.read().is_01() || !sext_ln203_638_fu_5051385_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_234_fu_5051399_p1.read()) + sc_bigint<9>(sext_ln203_638_fu_5051385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3732_fu_5078741_p2() {
    add_ln703_3732_fu_5078741_p2 = (!sext_ln203_639_fu_5051419_p1.read().is_01() || !sext_ln703_2134_fu_5078737_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_639_fu_5051419_p1.read()) + sc_bigint<10>(sext_ln703_2134_fu_5078737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3733_fu_5078751_p2() {
    add_ln703_3733_fu_5078751_p2 = (!sext_ln703_2133_fu_5078727_p1.read().is_01() || !sext_ln703_2135_fu_5078747_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2133_fu_5078727_p1.read()) + sc_bigint<11>(sext_ln703_2135_fu_5078747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3735_fu_5078757_p2() {
    add_ln703_3735_fu_5078757_p2 = (!zext_ln708_1624_fu_5051459_p1.read().is_01() || !ap_const_lv11_4A0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1624_fu_5051459_p1.read()) + sc_bigint<11>(ap_const_lv11_4A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3736_fu_5078763_p2() {
    add_ln703_3736_fu_5078763_p2 = (!zext_ln1118_2963_fu_5051467_p1.read().is_01() || !trunc_ln1118_42_fu_5051477_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2963_fu_5051467_p1.read()) + sc_biguint<10>(trunc_ln1118_42_fu_5051477_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3737_fu_5078769_p2() {
    add_ln703_3737_fu_5078769_p2 = (!zext_ln708_1625_fu_5051463_p1.read().is_01() || !add_ln703_3736_fu_5078763_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1625_fu_5051463_p1.read()) + sc_biguint<10>(add_ln703_3736_fu_5078763_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3738_fu_5078779_p2() {
    add_ln703_3738_fu_5078779_p2 = (!add_ln703_3735_fu_5078757_p2.read().is_01() || !zext_ln703_635_fu_5078775_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3735_fu_5078757_p2.read()) + sc_biguint<11>(zext_ln703_635_fu_5078775_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3739_fu_5078789_p2() {
    add_ln703_3739_fu_5078789_p2 = (!zext_ln1118_2896_fu_5048494_p1.read().is_01() || !sext_ln203_641_fu_5051515_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2896_fu_5048494_p1.read()) + sc_bigint<12>(sext_ln203_641_fu_5051515_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_373_fu_5056221_p2() {
    add_ln703_373_fu_5056221_p2 = (!sext_ln708_26_fu_4996924_p1.read().is_01() || !zext_ln1118_1077_fu_4996948_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_26_fu_4996924_p1.read()) + sc_biguint<12>(zext_ln1118_1077_fu_4996948_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3740_fu_5078795_p2() {
    add_ln703_3740_fu_5078795_p2 = (!sext_ln703_486_fu_5078785_p1.read().is_01() || !add_ln703_3739_fu_5078789_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_486_fu_5078785_p1.read()) + sc_biguint<12>(add_ln703_3739_fu_5078789_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3741_fu_5078805_p2() {
    add_ln703_3741_fu_5078805_p2 = (!sext_ln203_642_fu_5051539_p1.read().is_01() || !sext_ln703_487_fu_5078801_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_642_fu_5051539_p1.read()) + sc_bigint<13>(sext_ln703_487_fu_5078801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3742_fu_5078811_p2() {
    add_ln703_3742_fu_5078811_p2 = (!zext_ln1118_2965_fu_5051553_p1.read().is_01() || !sext_ln708_240_fu_5037614_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2965_fu_5051553_p1.read()) + sc_bigint<9>(sext_ln708_240_fu_5037614_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3743_fu_5078821_p2() {
    add_ln703_3743_fu_5078821_p2 = (!zext_ln708_1626_fu_5051535_p1.read().is_01() || !sext_ln703_2138_fu_5078817_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1626_fu_5051535_p1.read()) + sc_bigint<10>(sext_ln703_2138_fu_5078817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3744_fu_5078831_p2() {
    add_ln703_3744_fu_5078831_p2 = (!add_ln703_3741_fu_5078805_p2.read().is_01() || !sext_ln703_2139_fu_5078827_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3741_fu_5078805_p2.read()) + sc_bigint<13>(sext_ln703_2139_fu_5078827_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3745_fu_5078837_p2() {
    add_ln703_3745_fu_5078837_p2 = (!sext_ln1118_1105_fu_5051573_p1.read().is_01() || !sext_ln708_241_fu_5037809_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1105_fu_5051573_p1.read()) + sc_bigint<12>(sext_ln708_241_fu_5037809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3746_fu_5088511_p2() {
    add_ln703_3746_fu_5088511_p2 = (!sext_ln703_488_fu_5088505_p1.read().is_01() || !sext_ln703_2140_fu_5088508_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_488_fu_5088505_p1.read()) + sc_bigint<14>(sext_ln703_2140_fu_5088508_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3747_fu_5078843_p2() {
    add_ln703_3747_fu_5078843_p2 = (!sext_ln1116_81_fu_5049838_p1.read().is_01() || !sext_ln1118_919_fu_5039015_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_81_fu_5049838_p1.read()) + sc_bigint<11>(sext_ln1118_919_fu_5039015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3748_fu_5078853_p2() {
    add_ln703_3748_fu_5078853_p2 = (!zext_ln1118_2966_fu_5051587_p1.read().is_01() || !sext_ln703_2141_fu_5078849_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2966_fu_5051587_p1.read()) + sc_bigint<12>(sext_ln703_2141_fu_5078849_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3749_fu_5088520_p2() {
    add_ln703_3749_fu_5088520_p2 = (!add_ln703_3746_fu_5088511_p2.read().is_01() || !sext_ln703_2142_fu_5088517_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3746_fu_5088511_p2.read()) + sc_bigint<14>(sext_ln703_2142_fu_5088517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_374_fu_5056231_p2() {
    add_ln703_374_fu_5056231_p2 = (!add_ln703_372_fu_5056215_p2.read().is_01() || !sext_ln703_249_fu_5056227_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_372_fu_5056215_p2.read()) + sc_bigint<13>(sext_ln703_249_fu_5056227_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3750_fu_5078859_p2() {
    add_ln703_3750_fu_5078859_p2 = (!zext_ln1118_2968_fu_5051629_p1.read().is_01() || !zext_ln1118_2967_fu_5051605_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2968_fu_5051629_p1.read()) + sc_biguint<10>(zext_ln1118_2967_fu_5051605_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3751_fu_5088529_p2() {
    add_ln703_3751_fu_5088529_p2 = (!add_ln703_3749_fu_5088520_p2.read().is_01() || !zext_ln703_636_fu_5088526_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3749_fu_5088520_p2.read()) + sc_biguint<14>(zext_ln703_636_fu_5088526_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3752_fu_5078865_p2() {
    add_ln703_3752_fu_5078865_p2 = (!zext_ln1118_2970_fu_5051713_p1.read().is_01() || !trunc_ln1118_43_fu_5051687_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2970_fu_5051713_p1.read()) + sc_biguint<9>(trunc_ln1118_43_fu_5051687_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3753_fu_5078875_p2() {
    add_ln703_3753_fu_5078875_p2 = (!zext_ln708_1507_fu_5038143_p1.read().is_01() || !zext_ln703_637_fu_5078871_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1507_fu_5038143_p1.read()) + sc_biguint<11>(zext_ln703_637_fu_5078871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3754_fu_5088538_p2() {
    add_ln703_3754_fu_5088538_p2 = (!add_ln703_3751_fu_5088529_p2.read().is_01() || !zext_ln703_638_fu_5088535_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3751_fu_5088529_p2.read()) + sc_biguint<14>(zext_ln703_638_fu_5088535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3755_fu_5078881_p2() {
    add_ln703_3755_fu_5078881_p2 = (!sext_ln1118_1106_fu_5051601_p1.read().is_01() || !zext_ln1118_2972_fu_5051735_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1106_fu_5051601_p1.read()) + sc_biguint<12>(zext_ln1118_2972_fu_5051735_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3756_fu_5078891_p2() {
    add_ln703_3756_fu_5078891_p2 = (!zext_ln1118_2971_fu_5051717_p1.read().is_01() || !sext_ln703_2144_fu_5078887_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln1118_2971_fu_5051717_p1.read()) + sc_bigint<13>(sext_ln703_2144_fu_5078887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3757_fu_5078897_p2() {
    add_ln703_3757_fu_5078897_p2 = (!sext_ln708_293_fu_5051731_p1.read().is_01() || !sext_ln1118_1107_fu_5051643_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_293_fu_5051731_p1.read()) + sc_bigint<11>(sext_ln1118_1107_fu_5051643_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3758_fu_5078907_p2() {
    add_ln703_3758_fu_5078907_p2 = (!sext_ln708_292_fu_5051663_p1.read().is_01() || !zext_ln1118_2969_fu_5051677_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_292_fu_5051663_p1.read()) + sc_biguint<9>(zext_ln1118_2969_fu_5051677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3759_fu_5078917_p2() {
    add_ln703_3759_fu_5078917_p2 = (!sext_ln703_2145_fu_5078903_p1.read().is_01() || !sext_ln703_2146_fu_5078913_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2145_fu_5078903_p1.read()) + sc_bigint<12>(sext_ln703_2146_fu_5078913_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_375_fu_5056241_p2() {
    add_ln703_375_fu_5056241_p2 = (!zext_ln1116_186_fu_4996989_p1.read().is_01() || !zext_ln1118_1686_fu_4996966_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_186_fu_4996989_p1.read()) + sc_biguint<10>(zext_ln1118_1686_fu_4996966_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3760_fu_5078927_p2() {
    add_ln703_3760_fu_5078927_p2 = (!add_ln703_3756_fu_5078891_p2.read().is_01() || !sext_ln703_2147_fu_5078923_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3756_fu_5078891_p2.read()) + sc_bigint<13>(sext_ln703_2147_fu_5078923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3761_fu_5088551_p2() {
    add_ln703_3761_fu_5088551_p2 = (!sext_ln703_2143_fu_5088544_p1.read().is_01() || !sext_ln703_2148_fu_5088548_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2143_fu_5088544_p1.read()) + sc_bigint<15>(sext_ln703_2148_fu_5088548_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3762_fu_5078933_p2() {
    add_ln703_3762_fu_5078933_p2 = (!sext_ln203_646_fu_5051807_p1.read().is_01() || !sext_ln203_645_fu_5051787_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_646_fu_5051807_p1.read()) + sc_bigint<12>(sext_ln203_645_fu_5051787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3763_fu_5088560_p2() {
    add_ln703_3763_fu_5088560_p2 = (!add_ln703_3761_fu_5088551_p2.read().is_01() || !sext_ln703_2149_fu_5088557_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3761_fu_5088551_p2.read()) + sc_bigint<15>(sext_ln703_2149_fu_5088557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3764_fu_5078939_p2() {
    add_ln703_3764_fu_5078939_p2 = (!zext_ln203_236_fu_5051811_p1.read().is_01() || !sext_ln203_644_fu_5051773_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_236_fu_5051811_p1.read()) + sc_bigint<10>(sext_ln203_644_fu_5051773_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3765_fu_5078949_p2() {
    add_ln703_3765_fu_5078949_p2 = (!zext_ln203_237_fu_5051825_p1.read().is_01() || !sext_ln703_2150_fu_5078945_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_237_fu_5051825_p1.read()) + sc_bigint<12>(sext_ln703_2150_fu_5078945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3767_fu_5078965_p2() {
    add_ln703_3767_fu_5078965_p2 = (!zext_ln708_1610_fu_5050037_p1.read().is_01() || !zext_ln703_639_fu_5078961_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1610_fu_5050037_p1.read()) + sc_biguint<8>(zext_ln703_639_fu_5078961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3768_fu_5078975_p2() {
    add_ln703_3768_fu_5078975_p2 = (!sext_ln1118_1111_fu_5051857_p1.read().is_01() || !sext_ln1118_1112_fu_5051861_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1111_fu_5051857_p1.read()) + sc_bigint<10>(sext_ln1118_1112_fu_5051861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3769_fu_5078985_p2() {
    add_ln703_3769_fu_5078985_p2 = (!zext_ln703_640_fu_5078971_p1.read().is_01() || !sext_ln703_2153_fu_5078981_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_640_fu_5078971_p1.read()) + sc_bigint<11>(sext_ln703_2153_fu_5078981_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_376_fu_5056251_p2() {
    add_ln703_376_fu_5056251_p2 = (!sext_ln703_49_fu_5056237_p1.read().is_01() || !zext_ln703_85_fu_5056247_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_49_fu_5056237_p1.read()) + sc_biguint<14>(zext_ln703_85_fu_5056247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3770_fu_5078995_p2() {
    add_ln703_3770_fu_5078995_p2 = (!sext_ln203_647_fu_5051875_p1.read().is_01() || !sext_ln703_2154_fu_5078991_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_647_fu_5051875_p1.read()) + sc_bigint<12>(sext_ln703_2154_fu_5078991_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3771_fu_5088582_p2() {
    add_ln703_3771_fu_5088582_p2 = (!sext_ln1118_1113_fu_5080712_p1.read().is_01() || !sext_ln1118_1008_fu_5080649_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1113_fu_5080712_p1.read()) + sc_bigint<12>(sext_ln1118_1008_fu_5080649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3772_fu_5088592_p2() {
    add_ln703_3772_fu_5088592_p2 = (!sext_ln703_2155_fu_5088579_p1.read().is_01() || !sext_ln703_2156_fu_5088588_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2155_fu_5088579_p1.read()) + sc_bigint<13>(sext_ln703_2156_fu_5088588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3773_fu_5079001_p2() {
    add_ln703_3773_fu_5079001_p2 = (!zext_ln1118_2974_fu_5051929_p1.read().is_01() || !trunc_ln1118_44_fu_5051903_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2974_fu_5051929_p1.read()) + sc_biguint<10>(trunc_ln1118_44_fu_5051903_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3774_fu_5079011_p2() {
    add_ln703_3774_fu_5079011_p2 = (!zext_ln708_1257_fu_5051889_p1.read().is_01() || !zext_ln708_1039_fu_5037538_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1257_fu_5051889_p1.read()) + sc_biguint<9>(zext_ln708_1039_fu_5037538_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3775_fu_5079021_p2() {
    add_ln703_3775_fu_5079021_p2 = (!zext_ln703_641_fu_5079007_p1.read().is_01() || !zext_ln703_642_fu_5079017_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_641_fu_5079007_p1.read()) + sc_biguint<11>(zext_ln703_642_fu_5079017_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3776_fu_5088605_p2() {
    add_ln703_3776_fu_5088605_p2 = (!sext_ln703_2157_fu_5088598_p1.read().is_01() || !zext_ln703_643_fu_5088602_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2157_fu_5088598_p1.read()) + sc_biguint<14>(zext_ln703_643_fu_5088602_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3777_fu_5079027_p2() {
    add_ln703_3777_fu_5079027_p2 = (!zext_ln708_1628_fu_5052021_p1.read().is_01() || !zext_ln708_1627_fu_5052001_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1628_fu_5052021_p1.read()) + sc_biguint<11>(zext_ln708_1627_fu_5052001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3778_fu_5088614_p2() {
    add_ln703_3778_fu_5088614_p2 = (!add_ln703_3776_fu_5088605_p2.read().is_01() || !zext_ln703_644_fu_5088611_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3776_fu_5088605_p2.read()) + sc_biguint<14>(zext_ln703_644_fu_5088611_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3779_fu_5079033_p2() {
    add_ln703_3779_fu_5079033_p2 = (!sext_ln1118_1088_fu_5050575_p1.read().is_01() || !zext_ln708_1629_fu_5052085_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1088_fu_5050575_p1.read()) + sc_biguint<11>(zext_ln708_1629_fu_5052085_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_377_fu_5056257_p2() {
    add_ln703_377_fu_5056257_p2 = (!sext_ln1118_114_fu_4997039_p1.read().is_01() || !sext_ln1118_113_fu_4996970_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_114_fu_4997039_p1.read()) + sc_bigint<10>(sext_ln1118_113_fu_4996970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3780_fu_5079043_p2() {
    add_ln703_3780_fu_5079043_p2 = (!zext_ln1118_2976_fu_5052065_p1.read().is_01() || !sext_ln703_2158_fu_5079039_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2976_fu_5052065_p1.read()) + sc_bigint<12>(sext_ln703_2158_fu_5079039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3781_fu_5088623_p2() {
    add_ln703_3781_fu_5088623_p2 = (!add_ln703_3778_fu_5088614_p2.read().is_01() || !sext_ln703_2159_fu_5088620_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3778_fu_5088614_p2.read()) + sc_bigint<14>(sext_ln703_2159_fu_5088620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3782_fu_5079049_p2() {
    add_ln703_3782_fu_5079049_p2 = (!sext_ln1118_1115_fu_5051961_p1.read().is_01() || !sext_ln1118_1052_fu_5048716_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1115_fu_5051961_p1.read()) + sc_bigint<11>(sext_ln1118_1052_fu_5048716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3783_fu_5079059_p2() {
    add_ln703_3783_fu_5079059_p2 = (!sext_ln203_648_fu_5051943_p1.read().is_01() || !sext_ln703_2161_fu_5079055_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_648_fu_5051943_p1.read()) + sc_bigint<12>(sext_ln703_2161_fu_5079055_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3784_fu_5079069_p2() {
    add_ln703_3784_fu_5079069_p2 = (!sext_ln708_296_fu_5052045_p1.read().is_01() || !sext_ln708_295_fu_5051981_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_296_fu_5052045_p1.read()) + sc_bigint<10>(sext_ln708_295_fu_5051981_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3785_fu_5079079_p2() {
    add_ln703_3785_fu_5079079_p2 = (!zext_ln1118_2975_fu_5052025_p1.read().is_01() || !zext_ln1118_2802_fu_5043986_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2975_fu_5052025_p1.read()) + sc_biguint<9>(zext_ln1118_2802_fu_5043986_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3786_fu_5079089_p2() {
    add_ln703_3786_fu_5079089_p2 = (!sext_ln703_2163_fu_5079075_p1.read().is_01() || !zext_ln703_645_fu_5079085_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2163_fu_5079075_p1.read()) + sc_biguint<11>(zext_ln703_645_fu_5079085_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3787_fu_5079099_p2() {
    add_ln703_3787_fu_5079099_p2 = (!sext_ln703_2162_fu_5079065_p1.read().is_01() || !sext_ln703_2164_fu_5079095_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2162_fu_5079065_p1.read()) + sc_bigint<13>(sext_ln703_2164_fu_5079095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3788_fu_5088636_p2() {
    add_ln703_3788_fu_5088636_p2 = (!sext_ln703_2160_fu_5088629_p1.read().is_01() || !sext_ln703_2165_fu_5088633_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2160_fu_5088629_p1.read()) + sc_bigint<15>(sext_ln703_2165_fu_5088633_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3789_fu_5088642_p2() {
    add_ln703_3789_fu_5088642_p2 = (!sext_ln203_650_fu_5080715_p1.read().is_01() || !add_ln703_3788_fu_5088636_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_650_fu_5080715_p1.read()) + sc_biguint<15>(add_ln703_3788_fu_5088636_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_378_fu_5056263_p2() {
    add_ln703_378_fu_5056263_p2 = (!sext_ln203_64_fu_4997019_p1.read().is_01() || !zext_ln708_997_fu_4991517_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_64_fu_4997019_p1.read()) + sc_biguint<8>(zext_ln708_997_fu_4991517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3790_fu_5079105_p2() {
    add_ln703_3790_fu_5079105_p2 = (!zext_ln203_238_fu_5052123_p1.read().is_01() || !sext_ln203_651_fu_5052137_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_238_fu_5052123_p1.read()) + sc_bigint<12>(sext_ln203_651_fu_5052137_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3791_fu_5088651_p2() {
    add_ln703_3791_fu_5088651_p2 = (!add_ln703_3789_fu_5088642_p2.read().is_01() || !sext_ln703_2166_fu_5088648_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3789_fu_5088642_p2.read()) + sc_bigint<15>(sext_ln703_2166_fu_5088648_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3792_fu_5079111_p2() {
    add_ln703_3792_fu_5079111_p2 = (!zext_ln203_680_fu_5052141_p1.read().is_01() || !zext_ln1118_2846_fu_5045906_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_680_fu_5052141_p1.read()) + sc_biguint<10>(zext_ln1118_2846_fu_5045906_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3793_fu_5079121_p2() {
    add_ln703_3793_fu_5079121_p2 = (!zext_ln203_239_fu_5052155_p1.read().is_01() || !sext_ln203_649_fu_5052109_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_239_fu_5052155_p1.read()) + sc_bigint<9>(sext_ln203_649_fu_5052109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3794_fu_5079131_p2() {
    add_ln703_3794_fu_5079131_p2 = (!zext_ln703_646_fu_5079117_p1.read().is_01() || !sext_ln703_2167_fu_5079127_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_646_fu_5079117_p1.read()) + sc_bigint<11>(sext_ln703_2167_fu_5079127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3796_fu_5079137_p2() {
    add_ln703_3796_fu_5079137_p2 = (!sext_ln1118_1116_fu_5052175_p1.read().is_01() || !ap_const_lv10_20.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1116_fu_5052175_p1.read()) + sc_biguint<10>(ap_const_lv10_20));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3797_fu_5079147_p2() {
    add_ln703_3797_fu_5079147_p2 = (!sext_ln1118_927_fu_5039551_p1.read().is_01() || !sext_ln703_2170_fu_5079143_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_927_fu_5039551_p1.read()) + sc_bigint<11>(sext_ln703_2170_fu_5079143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3798_fu_5079157_p2() {
    add_ln703_3798_fu_5079157_p2 = (!zext_ln708_1617_fu_5050429_p1.read().is_01() || !zext_ln1118_2978_fu_5052179_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1617_fu_5050429_p1.read()) + sc_biguint<8>(zext_ln1118_2978_fu_5052179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3799_fu_5079167_p2() {
    add_ln703_3799_fu_5079167_p2 = (!sext_ln1118_994_fu_5044960_p1.read().is_01() || !zext_ln703_647_fu_5079163_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_994_fu_5044960_p1.read()) + sc_biguint<11>(zext_ln703_647_fu_5079163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_379_fu_5056273_p2() {
    add_ln703_379_fu_5056273_p2 = (!add_ln703_377_fu_5056257_p2.read().is_01() || !sext_ln703_250_fu_5056269_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_377_fu_5056257_p2.read()) + sc_bigint<10>(sext_ln703_250_fu_5056269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_37_fu_5053911_p2() {
    add_ln703_37_fu_5053911_p2 = (!sext_ln1118_14_fu_4989881_p1.read().is_01() || !zext_ln708_980_fu_4989857_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_14_fu_4989881_p1.read()) + sc_biguint<11>(zext_ln708_980_fu_4989857_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3800_fu_5079177_p2() {
    add_ln703_3800_fu_5079177_p2 = (!sext_ln703_2171_fu_5079153_p1.read().is_01() || !sext_ln703_2172_fu_5079173_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2171_fu_5079153_p1.read()) + sc_bigint<12>(sext_ln703_2172_fu_5079173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3801_fu_5079187_p2() {
    add_ln703_3801_fu_5079187_p2 = (!sext_ln708_297_fu_5052217_p1.read().is_01() || !sext_ln1118_1117_fu_5052203_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_297_fu_5052217_p1.read()) + sc_bigint<11>(sext_ln1118_1117_fu_5052203_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3802_fu_5079197_p2() {
    add_ln703_3802_fu_5079197_p2 = (!sext_ln703_2173_fu_5079183_p1.read().is_01() || !sext_ln703_2174_fu_5079193_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2173_fu_5079183_p1.read()) + sc_bigint<13>(sext_ln703_2174_fu_5079193_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3803_fu_5079203_p2() {
    add_ln703_3803_fu_5079203_p2 = (!zext_ln1118_2958_fu_5051127_p1.read().is_01() || !sext_ln708_298_fu_5052235_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_2958_fu_5051127_p1.read()) + sc_bigint<11>(sext_ln708_298_fu_5052235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3804_fu_5079209_p2() {
    add_ln703_3804_fu_5079209_p2 = (!zext_ln1118_2980_fu_5052231_p1.read().is_01() || !sext_ln1118_1015_fu_5046044_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2980_fu_5052231_p1.read()) + sc_bigint<10>(sext_ln1118_1015_fu_5046044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3805_fu_5079219_p2() {
    add_ln703_3805_fu_5079219_p2 = (!add_ln703_3803_fu_5079203_p2.read().is_01() || !sext_ln703_2175_fu_5079215_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3803_fu_5079203_p2.read()) + sc_bigint<11>(sext_ln703_2175_fu_5079215_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3806_fu_5079229_p2() {
    add_ln703_3806_fu_5079229_p2 = (!add_ln703_3802_fu_5079197_p2.read().is_01() || !sext_ln703_2176_fu_5079225_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3802_fu_5079197_p2.read()) + sc_bigint<13>(sext_ln703_2176_fu_5079225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3807_fu_5079235_p2() {
    add_ln703_3807_fu_5079235_p2 = (!zext_ln708_1631_fu_5052323_p1.read().is_01() || !zext_ln708_1630_fu_5052255_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1631_fu_5052323_p1.read()) + sc_biguint<11>(zext_ln708_1630_fu_5052255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3808_fu_5088676_p2() {
    add_ln703_3808_fu_5088676_p2 = (!sext_ln703_2177_fu_5088670_p1.read().is_01() || !zext_ln703_648_fu_5088673_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2177_fu_5088670_p1.read()) + sc_biguint<14>(zext_ln703_648_fu_5088673_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3809_fu_5079241_p2() {
    add_ln703_3809_fu_5079241_p2 = (!zext_ln708_1517_fu_5040123_p1.read().is_01() || !zext_ln708_1633_fu_5052367_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1517_fu_5040123_p1.read()) + sc_biguint<11>(zext_ln708_1633_fu_5052367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_380_fu_5056283_p2() {
    add_ln703_380_fu_5056283_p2 = (!add_ln703_376_fu_5056251_p2.read().is_01() || !sext_ln703_251_fu_5056279_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_376_fu_5056251_p2.read()) + sc_bigint<14>(sext_ln703_251_fu_5056279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3810_fu_5079247_p2() {
    add_ln703_3810_fu_5079247_p2 = (!zext_ln708_1632_fu_5052343_p1.read().is_01() || !add_ln703_3809_fu_5079241_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1632_fu_5052343_p1.read()) + sc_biguint<11>(add_ln703_3809_fu_5079241_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3811_fu_5088685_p2() {
    add_ln703_3811_fu_5088685_p2 = (!add_ln703_3808_fu_5088676_p2.read().is_01() || !zext_ln703_649_fu_5088682_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3808_fu_5088676_p2.read()) + sc_biguint<14>(zext_ln703_649_fu_5088682_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3812_fu_5079253_p2() {
    add_ln703_3812_fu_5079253_p2 = (!sext_ln708_300_fu_5052303_p1.read().is_01() || !sext_ln1118_1052_fu_5048716_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_300_fu_5052303_p1.read()) + sc_bigint<11>(sext_ln1118_1052_fu_5048716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3813_fu_5079263_p2() {
    add_ln703_3813_fu_5079263_p2 = (!sext_ln1118_1118_fu_5052289_p1.read().is_01() || !sext_ln703_2178_fu_5079259_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1118_fu_5052289_p1.read()) + sc_bigint<12>(sext_ln703_2178_fu_5079259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3814_fu_5079269_p2() {
    add_ln703_3814_fu_5079269_p2 = (!sext_ln708_299_fu_5052275_p1.read().is_01() || !zext_ln708_1539_fu_5042150_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_299_fu_5052275_p1.read()) + sc_biguint<8>(zext_ln708_1539_fu_5042150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3815_fu_5079279_p2() {
    add_ln703_3815_fu_5079279_p2 = (!sext_ln1118_1101_fu_5051249_p1.read().is_01() || !sext_ln703_2179_fu_5079275_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1101_fu_5051249_p1.read()) + sc_bigint<9>(sext_ln703_2179_fu_5079275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3816_fu_5079289_p2() {
    add_ln703_3816_fu_5079289_p2 = (!add_ln703_3813_fu_5079263_p2.read().is_01() || !sext_ln703_2180_fu_5079285_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3813_fu_5079263_p2.read()) + sc_bigint<12>(sext_ln703_2180_fu_5079285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3817_fu_5088694_p2() {
    add_ln703_3817_fu_5088694_p2 = (!add_ln703_3811_fu_5088685_p2.read().is_01() || !sext_ln703_2181_fu_5088691_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3811_fu_5088685_p2.read()) + sc_bigint<14>(sext_ln703_2181_fu_5088691_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3818_fu_5088704_p2() {
    add_ln703_3818_fu_5088704_p2 = (!sext_ln203_655_fu_5080718_p1.read().is_01() || !sext_ln703_2182_fu_5088700_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_655_fu_5080718_p1.read()) + sc_bigint<15>(sext_ln703_2182_fu_5088700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3819_fu_5079295_p2() {
    add_ln703_3819_fu_5079295_p2 = (!zext_ln203_241_fu_5052399_p1.read().is_01() || !sext_ln203_549_fu_5044288_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_241_fu_5052399_p1.read()) + sc_bigint<12>(sext_ln203_549_fu_5044288_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_381_fu_5056289_p2() {
    add_ln703_381_fu_5056289_p2 = (!sext_ln708_28_fu_4997211_p1.read().is_01() || !sext_ln1118_116_fu_4997101_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_28_fu_4997211_p1.read()) + sc_bigint<12>(sext_ln1118_116_fu_4997101_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3820_fu_5079305_p2() {
    add_ln703_3820_fu_5079305_p2 = (!sext_ln203_656_fu_5052395_p1.read().is_01() || !sext_ln703_2183_fu_5079301_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_656_fu_5052395_p1.read()) + sc_bigint<13>(sext_ln703_2183_fu_5079301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3821_fu_5088713_p2() {
    add_ln703_3821_fu_5088713_p2 = (!add_ln703_3818_fu_5088704_p2.read().is_01() || !sext_ln703_2184_fu_5088710_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3818_fu_5088704_p2.read()) + sc_bigint<15>(sext_ln703_2184_fu_5088710_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3822_fu_5079311_p2() {
    add_ln703_3822_fu_5079311_p2 = (!zext_ln203_677_fu_5050387_p1.read().is_01() || !zext_ln203_681_fu_5052419_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_677_fu_5050387_p1.read()) + sc_biguint<10>(zext_ln203_681_fu_5052419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3823_fu_5079317_p2() {
    add_ln703_3823_fu_5079317_p2 = (!zext_ln203_672_fu_5047823_p1.read().is_01() || !add_ln703_3822_fu_5079311_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_672_fu_5047823_p1.read()) + sc_biguint<10>(add_ln703_3822_fu_5079311_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3824_fu_5079327_p2() {
    add_ln703_3824_fu_5079327_p2 = (!sext_ln203_653_fu_5052371_p1.read().is_01() || !zext_ln1118_2845_fu_5045886_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_653_fu_5052371_p1.read()) + sc_biguint<9>(zext_ln1118_2845_fu_5045886_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3825_fu_5079337_p2() {
    add_ln703_3825_fu_5079337_p2 = (!sext_ln203_522_fu_5040979_p1.read().is_01() || !sext_ln703_2185_fu_5079333_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_522_fu_5040979_p1.read()) + sc_bigint<10>(sext_ln703_2185_fu_5079333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3826_fu_5079347_p2() {
    add_ln703_3826_fu_5079347_p2 = (!zext_ln703_650_fu_5079323_p1.read().is_01() || !sext_ln703_2186_fu_5079343_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_650_fu_5079323_p1.read()) + sc_bigint<12>(sext_ln703_2186_fu_5079343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3828_fu_5079353_p2() {
    add_ln703_3828_fu_5079353_p2 = (!sext_ln1118_1119_fu_5052439_p1.read().is_01() || !ap_const_lv10_360.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1119_fu_5052439_p1.read()) + sc_bigint<10>(ap_const_lv10_360));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3829_fu_5079359_p2() {
    add_ln703_3829_fu_5079359_p2 = (!zext_ln1118_2957_fu_5051069_p1.read().is_01() || !add_ln703_3828_fu_5079353_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2957_fu_5051069_p1.read()) + sc_biguint<10>(add_ln703_3828_fu_5079353_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_382_fu_5081494_p2() {
    add_ln703_382_fu_5081494_p2 = (!add_ln703_380_reg_5090889.read().is_01() || !sext_ln703_252_fu_5081491_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_380_reg_5090889.read()) + sc_bigint<14>(sext_ln703_252_fu_5081491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3830_fu_5079369_p2() {
    add_ln703_3830_fu_5079369_p2 = (!sext_ln1118_1110_fu_5051853_p1.read().is_01() || !sext_ln1118_1120_fu_5052443_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_1110_fu_5051853_p1.read()) + sc_bigint<9>(sext_ln1118_1120_fu_5052443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3831_fu_5079379_p2() {
    add_ln703_3831_fu_5079379_p2 = (!sext_ln703_2189_fu_5079365_p1.read().is_01() || !sext_ln703_2190_fu_5079375_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2189_fu_5079365_p1.read()) + sc_bigint<11>(sext_ln703_2190_fu_5079375_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3832_fu_5079389_p2() {
    add_ln703_3832_fu_5079389_p2 = (!sext_ln1118_1123_fu_5052501_p1.read().is_01() || !sext_ln1118_1121_fu_5052467_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1123_fu_5052501_p1.read()) + sc_bigint<11>(sext_ln1118_1121_fu_5052467_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3833_fu_5079399_p2() {
    add_ln703_3833_fu_5079399_p2 = (!sext_ln703_2191_fu_5079385_p1.read().is_01() || !sext_ln703_2192_fu_5079395_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2191_fu_5079385_p1.read()) + sc_bigint<12>(sext_ln703_2192_fu_5079395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3834_fu_5079409_p2() {
    add_ln703_3834_fu_5079409_p2 = (!zext_ln1118_2982_fu_5052505_p1.read().is_01() || !sext_ln1118_1122_fu_5052487_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_2982_fu_5052505_p1.read()) + sc_bigint<11>(sext_ln1118_1122_fu_5052487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3835_fu_5079415_p2() {
    add_ln703_3835_fu_5079415_p2 = (!sext_ln708_281_fu_5049354_p1.read().is_01() || !add_ln703_3834_fu_5079409_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_281_fu_5049354_p1.read()) + sc_biguint<11>(add_ln703_3834_fu_5079409_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3836_fu_5079425_p2() {
    add_ln703_3836_fu_5079425_p2 = (!sext_ln703_2193_fu_5079405_p1.read().is_01() || !sext_ln703_2194_fu_5079421_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2193_fu_5079405_p1.read()) + sc_bigint<13>(sext_ln703_2194_fu_5079421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3837_fu_5079431_p2() {
    add_ln703_3837_fu_5079431_p2 = (!sext_ln1116_90_fu_5052557_p1.read().is_01() || !zext_ln708_1634_fu_5052509_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_90_fu_5052557_p1.read()) + sc_biguint<11>(zext_ln708_1634_fu_5052509_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3838_fu_5079441_p2() {
    add_ln703_3838_fu_5079441_p2 = (!add_ln703_3836_fu_5079425_p2.read().is_01() || !sext_ln703_2195_fu_5079437_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3836_fu_5079425_p2.read()) + sc_bigint<13>(sext_ln703_2195_fu_5079437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3839_fu_5079447_p2() {
    add_ln703_3839_fu_5079447_p2 = (!sext_ln708_301_fu_5052615_p1.read().is_01() || !sext_ln1118_1114_fu_5051957_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_301_fu_5052615_p1.read()) + sc_bigint<10>(sext_ln1118_1114_fu_5051957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_383_fu_5056295_p2() {
    add_ln703_383_fu_5056295_p2 = (!zext_ln708_1107_fu_4997238_p1.read().is_01() || !zext_ln1116_187_fu_4997161_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1107_fu_4997238_p1.read()) + sc_biguint<10>(zext_ln1116_187_fu_4997161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3840_fu_5079457_p2() {
    add_ln703_3840_fu_5079457_p2 = (!sext_ln1118_1125_fu_5052591_p1.read().is_01() || !sext_ln703_2197_fu_5079453_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1125_fu_5052591_p1.read()) + sc_bigint<11>(sext_ln703_2197_fu_5079453_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3841_fu_5088738_p2() {
    add_ln703_3841_fu_5088738_p2 = (!sext_ln703_2196_fu_5088732_p1.read().is_01() || !sext_ln703_2198_fu_5088735_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2196_fu_5088732_p1.read()) + sc_bigint<14>(sext_ln703_2198_fu_5088735_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3842_fu_5079463_p2() {
    add_ln703_3842_fu_5079463_p2 = (!zext_ln708_1266_fu_5052523_p1.read().is_01() || !sext_ln1118_1126_fu_5052595_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1266_fu_5052523_p1.read()) + sc_bigint<9>(sext_ln1118_1126_fu_5052595_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3843_fu_5079473_p2() {
    add_ln703_3843_fu_5079473_p2 = (!sext_ln1116_91_fu_5052577_p1.read().is_01() || !sext_ln703_2199_fu_5079469_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_91_fu_5052577_p1.read()) + sc_bigint<10>(sext_ln703_2199_fu_5079469_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3844_fu_5079479_p2() {
    add_ln703_3844_fu_5079479_p2 = (!sext_ln1118_939_fu_5040615_p1.read().is_01() || !zext_ln708_1635_fu_5052629_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_939_fu_5040615_p1.read()) + sc_biguint<8>(zext_ln708_1635_fu_5052629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3845_fu_5079489_p2() {
    add_ln703_3845_fu_5079489_p2 = (!zext_ln1118_2983_fu_5052527_p1.read().is_01() || !sext_ln703_2200_fu_5079485_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2983_fu_5052527_p1.read()) + sc_bigint<9>(sext_ln703_2200_fu_5079485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3846_fu_5079499_p2() {
    add_ln703_3846_fu_5079499_p2 = (!add_ln703_3843_fu_5079473_p2.read().is_01() || !sext_ln703_2201_fu_5079495_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3843_fu_5079473_p2.read()) + sc_bigint<10>(sext_ln703_2201_fu_5079495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3847_fu_5088747_p2() {
    add_ln703_3847_fu_5088747_p2 = (!add_ln703_3841_fu_5088738_p2.read().is_01() || !sext_ln703_2202_fu_5088744_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3841_fu_5088738_p2.read()) + sc_bigint<14>(sext_ln703_2202_fu_5088744_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3848_fu_5079505_p2() {
    add_ln703_3848_fu_5079505_p2 = (!zext_ln203_242_fu_5052649_p1.read().is_01() || !sext_ln203_661_fu_5052693_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_242_fu_5052649_p1.read()) + sc_bigint<12>(sext_ln203_661_fu_5052693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3849_fu_5088756_p2() {
    add_ln703_3849_fu_5088756_p2 = (!add_ln703_3847_fu_5088747_p2.read().is_01() || !sext_ln703_2203_fu_5088753_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3847_fu_5088747_p2.read()) + sc_bigint<14>(sext_ln703_2203_fu_5088753_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_384_fu_5056305_p2() {
    add_ln703_384_fu_5056305_p2 = (!zext_ln708_1106_fu_4997083_p1.read().is_01() || !zext_ln703_86_fu_5056301_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1106_fu_4997083_p1.read()) + sc_biguint<11>(zext_ln703_86_fu_5056301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3850_fu_5079511_p2() {
    add_ln703_3850_fu_5079511_p2 = (!sext_ln203_663_fu_5052741_p1.read().is_01() || !sext_ln203_662_fu_5052721_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_663_fu_5052741_p1.read()) + sc_bigint<11>(sext_ln203_662_fu_5052721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3851_fu_5079521_p2() {
    add_ln703_3851_fu_5079521_p2 = (!sext_ln203_572_fu_5046426_p1.read().is_01() || !sext_ln703_2204_fu_5079517_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_572_fu_5046426_p1.read()) + sc_bigint<12>(sext_ln703_2204_fu_5079517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3852_fu_5088765_p2() {
    add_ln703_3852_fu_5088765_p2 = (!add_ln703_3849_fu_5088756_p2.read().is_01() || !sext_ln703_2205_fu_5088762_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3849_fu_5088756_p2.read()) + sc_bigint<14>(sext_ln703_2205_fu_5088762_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3853_fu_5079527_p2() {
    add_ln703_3853_fu_5079527_p2 = (!sext_ln203_660_fu_5052673_p1.read().is_01() || !sext_ln1118_1079_fu_5050219_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_660_fu_5052673_p1.read()) + sc_bigint<10>(sext_ln1118_1079_fu_5050219_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3854_fu_5079537_p2() {
    add_ln703_3854_fu_5079537_p2 = (!sext_ln203_666_fu_5052779_p1.read().is_01() || !sext_ln703_2207_fu_5079533_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_666_fu_5052779_p1.read()) + sc_bigint<11>(sext_ln703_2207_fu_5079533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3855_fu_5079547_p2() {
    add_ln703_3855_fu_5079547_p2 = (!zext_ln708_1267_fu_5052653_p1.read().is_01() || !sext_ln203_665_fu_5052765_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1267_fu_5052653_p1.read()) + sc_bigint<10>(sext_ln203_665_fu_5052765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3856_fu_5079557_p2() {
    add_ln703_3856_fu_5079557_p2 = (!sext_ln203_664_fu_5052745_p1.read().is_01() || !zext_ln708_1083_fu_5041071_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_664_fu_5052745_p1.read()) + sc_biguint<10>(zext_ln708_1083_fu_5041071_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3857_fu_5079567_p2() {
    add_ln703_3857_fu_5079567_p2 = (!sext_ln703_2209_fu_5079553_p1.read().is_01() || !sext_ln703_2210_fu_5079563_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2209_fu_5079553_p1.read()) + sc_bigint<11>(sext_ln703_2210_fu_5079563_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3858_fu_5079577_p2() {
    add_ln703_3858_fu_5079577_p2 = (!sext_ln703_2208_fu_5079543_p1.read().is_01() || !sext_ln703_2211_fu_5079573_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2208_fu_5079543_p1.read()) + sc_bigint<12>(sext_ln703_2211_fu_5079573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_385_fu_5081502_p2() {
    add_ln703_385_fu_5081502_p2 = (!add_ln703_382_fu_5081494_p2.read().is_01() || !zext_ln703_87_fu_5081499_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_382_fu_5081494_p2.read()) + sc_biguint<14>(zext_ln703_87_fu_5081499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3860_fu_5079583_p2() {
    add_ln703_3860_fu_5079583_p2 = (!zext_ln708_1624_fu_5051459_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1624_fu_5051459_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3861_fu_5079593_p2() {
    add_ln703_3861_fu_5079593_p2 = (!sext_ln203_667_fu_5052783_p1.read().is_01() || !sext_ln703_503_fu_5079589_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_667_fu_5052783_p1.read()) + sc_bigint<12>(sext_ln703_503_fu_5079589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3862_fu_5079603_p2() {
    add_ln703_3862_fu_5079603_p2 = (!sext_ln1118_1109_fu_5051849_p1.read().is_01() || !sext_ln1118_930_fu_5039607_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1109_fu_5051849_p1.read()) + sc_bigint<12>(sext_ln1118_930_fu_5039607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3863_fu_5079613_p2() {
    add_ln703_3863_fu_5079613_p2 = (!sext_ln703_504_fu_5079599_p1.read().is_01() || !sext_ln703_2214_fu_5079609_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_504_fu_5079599_p1.read()) + sc_bigint<13>(sext_ln703_2214_fu_5079609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3864_fu_5079619_p2() {
    add_ln703_3864_fu_5079619_p2 = (!zext_ln1118_2885_fu_5048018_p1.read().is_01() || !sext_ln1118_1127_fu_5052797_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2885_fu_5048018_p1.read()) + sc_bigint<12>(sext_ln1118_1127_fu_5052797_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3865_fu_5079629_p2() {
    add_ln703_3865_fu_5079629_p2 = (!add_ln703_3863_fu_5079613_p2.read().is_01() || !sext_ln703_2215_fu_5079625_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3863_fu_5079613_p2.read()) + sc_bigint<13>(sext_ln703_2215_fu_5079625_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3866_fu_5079635_p2() {
    add_ln703_3866_fu_5079635_p2 = (!sext_ln1118_1129_fu_5052821_p1.read().is_01() || !zext_ln708_1636_fu_5052841_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1129_fu_5052821_p1.read()) + sc_biguint<11>(zext_ln708_1636_fu_5052841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3868_fu_5079649_p2() {
    add_ln703_3868_fu_5079649_p2 = (!sext_ln703_2216_fu_5079641_p1.read().is_01() || !sext_ln703_2217_fu_5079645_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2216_fu_5079641_p1.read()) + sc_bigint<12>(sext_ln703_2217_fu_5079645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3869_fu_5079659_p2() {
    add_ln703_3869_fu_5079659_p2 = (!add_ln703_3865_fu_5079629_p2.read().is_01() || !sext_ln703_2218_fu_5079655_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3865_fu_5079629_p2.read()) + sc_bigint<13>(sext_ln703_2218_fu_5079655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_386_fu_5056311_p2() {
    add_ln703_386_fu_5056311_p2 = (!zext_ln1116_188_fu_4997320_p1.read().is_01() || !trunc_ln1118_16_fu_4997290_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_188_fu_4997320_p1.read()) + sc_biguint<10>(trunc_ln1118_16_fu_4997290_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3870_fu_5079665_p2() {
    add_ln703_3870_fu_5079665_p2 = (!sext_ln1118_1133_fu_5053003_p1.read().is_01() || !sext_ln708_302_fu_5052983_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_1133_fu_5053003_p1.read()) + sc_bigint<12>(sext_ln708_302_fu_5052983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3871_fu_5088794_p2() {
    add_ln703_3871_fu_5088794_p2 = (!sext_ln703_2219_fu_5088788_p1.read().is_01() || !sext_ln703_2220_fu_5088791_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2219_fu_5088788_p1.read()) + sc_bigint<14>(sext_ln703_2220_fu_5088791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3872_fu_5079671_p2() {
    add_ln703_3872_fu_5079671_p2 = (!zext_ln708_1638_fu_5052935_p1.read().is_01() || !zext_ln708_1637_fu_5052863_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1638_fu_5052935_p1.read()) + sc_biguint<10>(zext_ln708_1637_fu_5052863_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3873_fu_5079681_p2() {
    add_ln703_3873_fu_5079681_p2 = (!zext_ln708_1640_fu_5052963_p1.read().is_01() || !zext_ln708_1639_fu_5052949_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1640_fu_5052963_p1.read()) + sc_biguint<11>(zext_ln708_1639_fu_5052949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3874_fu_5079691_p2() {
    add_ln703_3874_fu_5079691_p2 = (!zext_ln703_651_fu_5079677_p1.read().is_01() || !zext_ln703_652_fu_5079687_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_651_fu_5079677_p1.read()) + sc_biguint<12>(zext_ln703_652_fu_5079687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3875_fu_5088803_p2() {
    add_ln703_3875_fu_5088803_p2 = (!add_ln703_3871_fu_5088794_p2.read().is_01() || !zext_ln703_653_fu_5088800_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3871_fu_5088794_p2.read()) + sc_biguint<14>(zext_ln703_653_fu_5088800_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3876_fu_5079697_p2() {
    add_ln703_3876_fu_5079697_p2 = (!zext_ln708_1513_fu_5039299_p1.read().is_01() || !zext_ln708_1586_fu_5047285_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1513_fu_5039299_p1.read()) + sc_biguint<11>(zext_ln708_1586_fu_5047285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3877_fu_5079707_p2() {
    add_ln703_3877_fu_5079707_p2 = (!zext_ln708_1269_fu_5052867_p1.read().is_01() || !sext_ln1118_1131_fu_5052891_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1269_fu_5052867_p1.read()) + sc_bigint<11>(sext_ln1118_1131_fu_5052891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3878_fu_5079717_p2() {
    add_ln703_3878_fu_5079717_p2 = (!zext_ln703_654_fu_5079703_p1.read().is_01() || !sext_ln703_2222_fu_5079713_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_654_fu_5079703_p1.read()) + sc_bigint<13>(sext_ln703_2222_fu_5079713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3879_fu_5079723_p2() {
    add_ln703_3879_fu_5079723_p2 = (!zext_ln708_1560_fu_5044162_p1.read().is_01() || !zext_ln708_1527_fu_5040733_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1560_fu_5044162_p1.read()) + sc_biguint<8>(zext_ln708_1527_fu_5040733_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_387_fu_5056321_p2() {
    add_ln703_387_fu_5056321_p2 = (!zext_ln708_1108_fu_4997252_p1.read().is_01() || !zext_ln703_88_fu_5056317_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1108_fu_4997252_p1.read()) + sc_biguint<11>(zext_ln703_88_fu_5056317_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3880_fu_5079733_p2() {
    add_ln703_3880_fu_5079733_p2 = (!sext_ln1118_1132_fu_5052911_p1.read().is_01() || !sext_ln1118_1130_fu_5052849_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_1132_fu_5052911_p1.read()) + sc_bigint<7>(sext_ln1118_1130_fu_5052849_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3881_fu_5079743_p2() {
    add_ln703_3881_fu_5079743_p2 = (!zext_ln703_655_fu_5079729_p1.read().is_01() || !sext_ln703_2223_fu_5079739_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_655_fu_5079729_p1.read()) + sc_bigint<10>(sext_ln703_2223_fu_5079739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3882_fu_5079753_p2() {
    add_ln703_3882_fu_5079753_p2 = (!add_ln703_3878_fu_5079717_p2.read().is_01() || !sext_ln703_2224_fu_5079749_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3878_fu_5079717_p2.read()) + sc_bigint<13>(sext_ln703_2224_fu_5079749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3883_fu_5088816_p2() {
    add_ln703_3883_fu_5088816_p2 = (!sext_ln703_2221_fu_5088809_p1.read().is_01() || !sext_ln703_2225_fu_5088813_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2221_fu_5088809_p1.read()) + sc_bigint<15>(sext_ln703_2225_fu_5088813_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3884_fu_5088822_p2() {
    add_ln703_3884_fu_5088822_p2 = (!zext_ln203_246_fu_5080721_p1.read().is_01() || !add_ln703_3883_fu_5088816_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_246_fu_5080721_p1.read()) + sc_biguint<15>(add_ln703_3883_fu_5088816_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3885_fu_5079759_p2() {
    add_ln703_3885_fu_5079759_p2 = (!zext_ln203_682_fu_5053033_p1.read().is_01() || !zext_ln203_638_fu_5038487_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_682_fu_5053033_p1.read()) + sc_biguint<10>(zext_ln203_638_fu_5038487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3886_fu_5088831_p2() {
    add_ln703_3886_fu_5088831_p2 = (!add_ln703_3884_fu_5088822_p2.read().is_01() || !zext_ln703_656_fu_5088828_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3884_fu_5088822_p2.read()) + sc_biguint<15>(zext_ln703_656_fu_5088828_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3887_fu_5079765_p2() {
    add_ln703_3887_fu_5079765_p2 = (!sext_ln203_668_fu_5053037_p1.read().is_01() || !zext_ln203_247_fu_5053081_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_668_fu_5053037_p1.read()) + sc_biguint<12>(zext_ln203_247_fu_5053081_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3888_fu_5079771_p2() {
    add_ln703_3888_fu_5079771_p2 = (!sext_ln203_669_fu_5053057_p1.read().is_01() || !zext_ln203_683_fu_5053077_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_669_fu_5053057_p1.read()) + sc_biguint<9>(zext_ln203_683_fu_5053077_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3889_fu_5079781_p2() {
    add_ln703_3889_fu_5079781_p2 = (!add_ln703_3887_fu_5079765_p2.read().is_01() || !sext_ln703_2226_fu_5079777_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3887_fu_5079765_p2.read()) + sc_bigint<12>(sext_ln703_2226_fu_5079777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_388_fu_5056331_p2() {
    add_ln703_388_fu_5056331_p2 = (!sext_ln1116_7_fu_4997276_p1.read().is_01() || !sext_ln708_27_fu_4997147_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_7_fu_4997276_p1.read()) + sc_bigint<11>(sext_ln708_27_fu_4997147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3891_fu_5079787_p2() {
    add_ln703_3891_fu_5079787_p2 = (!zext_ln203_248_fu_5053085_p1.read().is_01() || !ap_const_lv10_3C0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_248_fu_5053085_p1.read()) + sc_bigint<10>(ap_const_lv10_3C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3892_fu_5079797_p2() {
    add_ln703_3892_fu_5079797_p2 = (!sext_ln203_541_fu_5043732_p1.read().is_01() || !sext_ln703_2229_fu_5079793_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_541_fu_5043732_p1.read()) + sc_bigint<11>(sext_ln703_2229_fu_5079793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3893_fu_5079807_p2() {
    add_ln703_3893_fu_5079807_p2 = (!zext_ln203_249_fu_5053121_p1.read().is_01() || !sext_ln703_2230_fu_5079803_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_249_fu_5053121_p1.read()) + sc_bigint<12>(sext_ln703_2230_fu_5079803_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3894_fu_5079817_p2() {
    add_ln703_3894_fu_5079817_p2 = (!sext_ln1118_1097_fu_5051103_p1.read().is_01() || !zext_ln708_1641_fu_5053145_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1097_fu_5051103_p1.read()) + sc_biguint<11>(zext_ln708_1641_fu_5053145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3895_fu_5079827_p2() {
    add_ln703_3895_fu_5079827_p2 = (!sext_ln703_509_fu_5079813_p1.read().is_01() || !sext_ln703_2231_fu_5079823_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_509_fu_5079813_p1.read()) + sc_bigint<13>(sext_ln703_2231_fu_5079823_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3896_fu_5079837_p2() {
    add_ln703_3896_fu_5079837_p2 = (!sext_ln708_304_fu_5053235_p1.read().is_01() || !sext_ln1118_1134_fu_5053177_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_304_fu_5053235_p1.read()) + sc_bigint<12>(sext_ln1118_1134_fu_5053177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3897_fu_5079847_p2() {
    add_ln703_3897_fu_5079847_p2 = (!sext_ln703_510_fu_5079833_p1.read().is_01() || !sext_ln703_2232_fu_5079843_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_510_fu_5079833_p1.read()) + sc_bigint<14>(sext_ln703_2232_fu_5079843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3898_fu_5079853_p2() {
    add_ln703_3898_fu_5079853_p2 = (!zext_ln1118_2986_fu_5052845_p1.read().is_01() || !sext_ln708_241_fu_5037809_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2986_fu_5052845_p1.read()) + sc_bigint<12>(sext_ln708_241_fu_5037809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3899_fu_5079859_p2() {
    add_ln703_3899_fu_5079859_p2 = (!zext_ln1118_2990_fu_5053211_p1.read().is_01() || !sext_ln708_303_fu_5053197_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2990_fu_5053211_p1.read()) + sc_bigint<9>(sext_ln708_303_fu_5053197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_389_fu_5056337_p2() {
    add_ln703_389_fu_5056337_p2 = (!sext_ln1118_115_fu_4997059_p1.read().is_01() || !zext_ln708_50_fu_4990783_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_115_fu_4997059_p1.read()) + sc_biguint<10>(zext_ln708_50_fu_4990783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_38_fu_5053921_p2() {
    add_ln703_38_fu_5053921_p2 = (!sext_ln1118_13_fu_4989797_p1.read().is_01() || !zext_ln1118_17_fu_4988634_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_13_fu_4989797_p1.read()) + sc_biguint<10>(zext_ln1118_17_fu_4988634_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3900_fu_5079869_p2() {
    add_ln703_3900_fu_5079869_p2 = (!add_ln703_3898_fu_5079853_p2.read().is_01() || !sext_ln703_2233_fu_5079865_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3898_fu_5079853_p2.read()) + sc_bigint<12>(sext_ln703_2233_fu_5079865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3901_fu_5088853_p2() {
    add_ln703_3901_fu_5088853_p2 = (!add_ln703_3897_reg_5094324.read().is_01() || !sext_ln703_2234_fu_5088850_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3897_reg_5094324.read()) + sc_bigint<14>(sext_ln703_2234_fu_5088850_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3902_fu_5088858_p2() {
    add_ln703_3902_fu_5088858_p2 = (!zext_ln1118_2991_fu_5080724_p1.read().is_01() || !add_ln703_3901_fu_5088853_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln1118_2991_fu_5080724_p1.read()) + sc_biguint<14>(add_ln703_3901_fu_5088853_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3903_fu_5079875_p2() {
    add_ln703_3903_fu_5079875_p2 = (!zext_ln1118_2993_fu_5053293_p1.read().is_01() || !sext_ln1118_1138_fu_5053325_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2993_fu_5053293_p1.read()) + sc_bigint<12>(sext_ln1118_1138_fu_5053325_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3904_fu_5079885_p2() {
    add_ln703_3904_fu_5079885_p2 = (!sext_ln1118_1136_fu_5053269_p1.read().is_01() || !sext_ln703_2236_fu_5079881_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_1136_fu_5053269_p1.read()) + sc_bigint<13>(sext_ln703_2236_fu_5079881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3905_fu_5088871_p2() {
    add_ln703_3905_fu_5088871_p2 = (!sext_ln703_2235_fu_5088864_p1.read().is_01() || !sext_ln703_2237_fu_5088868_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2235_fu_5088864_p1.read()) + sc_bigint<15>(sext_ln703_2237_fu_5088868_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3906_fu_5079891_p2() {
    add_ln703_3906_fu_5079891_p2 = (!sext_ln1118_1137_fu_5053289_p1.read().is_01() || !sext_ln1118_969_fu_5042728_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1137_fu_5053289_p1.read()) + sc_bigint<11>(sext_ln1118_969_fu_5042728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3907_fu_5079901_p2() {
    add_ln703_3907_fu_5079901_p2 = (!zext_ln1118_2995_fu_5053329_p1.read().is_01() || !sext_ln703_2238_fu_5079897_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2995_fu_5053329_p1.read()) + sc_bigint<12>(sext_ln703_2238_fu_5079897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3908_fu_5079907_p2() {
    add_ln703_3908_fu_5079907_p2 = (!sext_ln708_305_fu_5053297_p1.read().is_01() || !zext_ln1118_2994_fu_5053311_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_305_fu_5053297_p1.read()) + sc_biguint<9>(zext_ln1118_2994_fu_5053311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3909_fu_5079917_p2() {
    add_ln703_3909_fu_5079917_p2 = (!sext_ln708_242_fu_5038042_p1.read().is_01() || !sext_ln703_2239_fu_5079913_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_242_fu_5038042_p1.read()) + sc_bigint<11>(sext_ln703_2239_fu_5079913_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_390_fu_5056347_p2() {
    add_ln703_390_fu_5056347_p2 = (!add_ln703_388_fu_5056331_p2.read().is_01() || !sext_ln703_256_fu_5056343_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_388_fu_5056331_p2.read()) + sc_bigint<11>(sext_ln703_256_fu_5056343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3910_fu_5079927_p2() {
    add_ln703_3910_fu_5079927_p2 = (!add_ln703_3907_fu_5079901_p2.read().is_01() || !sext_ln703_2240_fu_5079923_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3907_fu_5079901_p2.read()) + sc_bigint<12>(sext_ln703_2240_fu_5079923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3911_fu_5088880_p2() {
    add_ln703_3911_fu_5088880_p2 = (!add_ln703_3905_fu_5088871_p2.read().is_01() || !sext_ln703_2241_fu_5088877_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3905_fu_5088871_p2.read()) + sc_bigint<15>(sext_ln703_2241_fu_5088877_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3912_fu_5088886_p2() {
    add_ln703_3912_fu_5088886_p2 = (!sext_ln203_670_fu_5080727_p1.read().is_01() || !add_ln703_3911_fu_5088880_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_670_fu_5080727_p1.read()) + sc_biguint<15>(add_ln703_3911_fu_5088880_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3913_fu_5079933_p2() {
    add_ln703_3913_fu_5079933_p2 = (!zext_ln708_1643_fu_5053407_p1.read().is_01() || !zext_ln708_1642_fu_5053393_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1643_fu_5053407_p1.read()) + sc_biguint<11>(zext_ln708_1642_fu_5053393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3914_fu_5079943_p2() {
    add_ln703_3914_fu_5079943_p2 = (!sext_ln203_671_fu_5053373_p1.read().is_01() || !zext_ln703_657_fu_5079939_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_671_fu_5053373_p1.read()) + sc_biguint<13>(zext_ln703_657_fu_5079939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3915_fu_5088895_p2() {
    add_ln703_3915_fu_5088895_p2 = (!add_ln703_3912_fu_5088886_p2.read().is_01() || !sext_ln703_2242_fu_5088892_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3912_fu_5088886_p2.read()) + sc_bigint<15>(sext_ln703_2242_fu_5088892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3916_fu_5079949_p2() {
    add_ln703_3916_fu_5079949_p2 = (!sext_ln203_672_fu_5053427_p1.read().is_01() || !zext_ln708_1588_fu_5047461_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_672_fu_5053427_p1.read()) + sc_biguint<11>(zext_ln708_1588_fu_5047461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3917_fu_5079959_p2() {
    add_ln703_3917_fu_5079959_p2 = (!zext_ln203_250_fu_5053431_p1.read().is_01() || !sext_ln703_2244_fu_5079955_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_250_fu_5053431_p1.read()) + sc_bigint<12>(sext_ln703_2244_fu_5079955_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3918_fu_5079965_p2() {
    add_ln703_3918_fu_5079965_p2 = (!zext_ln203_234_fu_5051399_p1.read().is_01() || !zext_ln1118_1362_fu_5038525_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_234_fu_5051399_p1.read()) + sc_biguint<9>(zext_ln1118_1362_fu_5038525_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3919_fu_5079975_p2() {
    add_ln703_3919_fu_5079975_p2 = (!sext_ln203_643_fu_5051769_p1.read().is_01() || !zext_ln703_658_fu_5079971_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_643_fu_5051769_p1.read()) + sc_biguint<11>(zext_ln703_658_fu_5079971_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_391_fu_5056357_p2() {
    add_ln703_391_fu_5056357_p2 = (!zext_ln703_89_fu_5056327_p1.read().is_01() || !sext_ln703_257_fu_5056353_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_89_fu_5056327_p1.read()) + sc_bigint<13>(sext_ln703_257_fu_5056353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3920_fu_5079985_p2() {
    add_ln703_3920_fu_5079985_p2 = (!add_ln703_3917_fu_5079959_p2.read().is_01() || !sext_ln703_2245_fu_5079981_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3917_fu_5079959_p2.read()) + sc_bigint<12>(sext_ln703_2245_fu_5079981_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3922_fu_5079991_p2() {
    add_ln703_3922_fu_5079991_p2 = (!sext_ln1118_912_fu_5038775_p1.read().is_01() || !zext_ln1118_2998_fu_5053471_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_912_fu_5038775_p1.read()) + sc_biguint<10>(zext_ln1118_2998_fu_5053471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3923_fu_5080001_p2() {
    add_ln703_3923_fu_5080001_p2 = (!zext_ln708_1644_fu_5053451_p1.read().is_01() || !sext_ln703_2247_fu_5079997_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1644_fu_5053451_p1.read()) + sc_bigint<11>(sext_ln703_2247_fu_5079997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3924_fu_5080011_p2() {
    add_ln703_3924_fu_5080011_p2 = (!zext_ln1118_2999_fu_5053489_p1.read().is_01() || !sext_ln703_2248_fu_5080007_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2999_fu_5053489_p1.read()) + sc_bigint<12>(sext_ln703_2248_fu_5080007_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3925_fu_5080017_p2() {
    add_ln703_3925_fu_5080017_p2 = (!zext_ln708_1514_fu_5039657_p1.read().is_01() || !zext_ln708_1645_fu_5053485_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1514_fu_5039657_p1.read()) + sc_biguint<8>(zext_ln708_1645_fu_5053485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3926_fu_5080027_p2() {
    add_ln703_3926_fu_5080027_p2 = (!sext_ln1118_1077_fu_5050079_p1.read().is_01() || !zext_ln703_659_fu_5080023_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_1077_fu_5050079_p1.read()) + sc_biguint<11>(zext_ln703_659_fu_5080023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3927_fu_5080037_p2() {
    add_ln703_3927_fu_5080037_p2 = (!add_ln703_3924_fu_5080011_p2.read().is_01() || !sext_ln703_2249_fu_5080033_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3924_fu_5080011_p2.read()) + sc_bigint<12>(sext_ln703_2249_fu_5080033_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3928_fu_5080047_p2() {
    add_ln703_3928_fu_5080047_p2 = (!zext_ln708_1282_fu_5053529_p1.read().is_01() || !sext_ln703_2250_fu_5080043_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_1282_fu_5053529_p1.read()) + sc_bigint<13>(sext_ln703_2250_fu_5080043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3929_fu_5080053_p2() {
    add_ln703_3929_fu_5080053_p2 = (!zext_ln1118_3001_fu_5053557_p1.read().is_01() || !zext_ln1118_3000_fu_5053549_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_3001_fu_5053557_p1.read()) + sc_biguint<9>(zext_ln1118_3000_fu_5053549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_392_fu_5081515_p2() {
    add_ln703_392_fu_5081515_p2 = (!sext_ln703_255_fu_5081508_p1.read().is_01() || !sext_ln703_258_fu_5081512_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_255_fu_5081508_p1.read()) + sc_bigint<15>(sext_ln703_258_fu_5081512_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3930_fu_5088917_p2() {
    add_ln703_3930_fu_5088917_p2 = (!add_ln703_3928_reg_5094354.read().is_01() || !zext_ln703_660_fu_5088914_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3928_reg_5094354.read()) + sc_biguint<13>(zext_ln703_660_fu_5088914_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3931_fu_5080059_p2() {
    add_ln703_3931_fu_5080059_p2 = (!sext_ln1118_1139_fu_5053509_p1.read().is_01() || !zext_ln708_1549_fu_5043276_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1139_fu_5053509_p1.read()) + sc_biguint<10>(zext_ln708_1549_fu_5043276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3932_fu_5080069_p2() {
    add_ln703_3932_fu_5080069_p2 = (!sext_ln1118_1140_fu_5053553_p1.read().is_01() || !sext_ln1118_1067_fu_5049456_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_1140_fu_5053553_p1.read()) + sc_bigint<10>(sext_ln1118_1067_fu_5049456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3933_fu_5080079_p2() {
    add_ln703_3933_fu_5080079_p2 = (!sext_ln703_2251_fu_5080065_p1.read().is_01() || !sext_ln703_2252_fu_5080075_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2251_fu_5080065_p1.read()) + sc_bigint<11>(sext_ln703_2252_fu_5080075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3934_fu_5088925_p2() {
    add_ln703_3934_fu_5088925_p2 = (!add_ln703_3930_fu_5088917_p2.read().is_01() || !sext_ln703_2253_fu_5088922_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3930_fu_5088917_p2.read()) + sc_bigint<13>(sext_ln703_2253_fu_5088922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3935_fu_5080085_p2() {
    add_ln703_3935_fu_5080085_p2 = (!zext_ln1118_3002_fu_5053585_p1.read().is_01() || !sext_ln1118_1141_fu_5053571_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3002_fu_5053585_p1.read()) + sc_bigint<12>(sext_ln1118_1141_fu_5053571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3936_fu_5088938_p2() {
    add_ln703_3936_fu_5088938_p2 = (!sext_ln703_2254_fu_5088931_p1.read().is_01() || !sext_ln703_2255_fu_5088935_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2254_fu_5088931_p1.read()) + sc_bigint<14>(sext_ln703_2255_fu_5088935_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3937_fu_5080091_p2() {
    add_ln703_3937_fu_5080091_p2 = (!zext_ln1118_3003_fu_5053605_p1.read().is_01() || !tmp_1808_fu_5051991_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3003_fu_5053605_p1.read()) + sc_biguint<10>(tmp_1808_fu_5051991_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3938_fu_5080101_p2() {
    add_ln703_3938_fu_5080101_p2 = (!zext_ln1118_3004_fu_5053609_p1.read().is_01() || !zext_ln1116_234_fu_5046394_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3004_fu_5053609_p1.read()) + sc_biguint<10>(zext_ln1116_234_fu_5046394_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3939_fu_5080111_p2() {
    add_ln703_3939_fu_5080111_p2 = (!zext_ln703_661_fu_5080097_p1.read().is_01() || !zext_ln703_662_fu_5080107_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_661_fu_5080097_p1.read()) + sc_biguint<11>(zext_ln703_662_fu_5080107_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_393_fu_5081521_p2() {
    add_ln703_393_fu_5081521_p2 = (!sext_ln203_67_fu_5080244_p1.read().is_01() || !add_ln703_392_fu_5081515_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_67_fu_5080244_p1.read()) + sc_biguint<15>(add_ln703_392_fu_5081515_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3940_fu_5088947_p2() {
    add_ln703_3940_fu_5088947_p2 = (!add_ln703_3936_fu_5088938_p2.read().is_01() || !zext_ln703_663_fu_5088944_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3936_fu_5088938_p2.read()) + sc_biguint<14>(zext_ln703_663_fu_5088944_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3941_fu_5080117_p2() {
    add_ln703_3941_fu_5080117_p2 = (!sext_ln708_306_fu_5053641_p1.read().is_01() || !zext_ln1118_3007_fu_5053655_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_306_fu_5053641_p1.read()) + sc_biguint<12>(zext_ln1118_3007_fu_5053655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3942_fu_5080123_p2() {
    add_ln703_3942_fu_5080123_p2 = (!zext_ln1118_3005_fu_5053613_p1.read().is_01() || !add_ln703_3941_fu_5080117_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3005_fu_5053613_p1.read()) + sc_biguint<12>(add_ln703_3941_fu_5080117_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3943_fu_5080133_p2() {
    add_ln703_3943_fu_5080133_p2 = (!sext_ln1116_75_fu_5046346_p1.read().is_01() || !sext_ln708_264_fu_5045834_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_75_fu_5046346_p1.read()) + sc_bigint<10>(sext_ln708_264_fu_5045834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3944_fu_5080139_p2() {
    add_ln703_3944_fu_5080139_p2 = (!sext_ln708_291_fu_5050965_p1.read().is_01() || !sext_ln1118_1044_fu_5048168_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_291_fu_5050965_p1.read()) + sc_bigint<8>(sext_ln1118_1044_fu_5048168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3945_fu_5080149_p2() {
    add_ln703_3945_fu_5080149_p2 = (!add_ln703_3943_fu_5080133_p2.read().is_01() || !sext_ln703_2258_fu_5080145_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3943_fu_5080133_p2.read()) + sc_bigint<10>(sext_ln703_2258_fu_5080145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3946_fu_5080159_p2() {
    add_ln703_3946_fu_5080159_p2 = (!sext_ln703_2257_fu_5080129_p1.read().is_01() || !sext_ln703_2259_fu_5080155_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2257_fu_5080129_p1.read()) + sc_bigint<13>(sext_ln703_2259_fu_5080155_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3947_fu_5088960_p2() {
    add_ln703_3947_fu_5088960_p2 = (!sext_ln703_2256_fu_5088953_p1.read().is_01() || !sext_ln703_2260_fu_5088957_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2256_fu_5088953_p1.read()) + sc_bigint<15>(sext_ln703_2260_fu_5088957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3948_fu_5088966_p2() {
    add_ln703_3948_fu_5088966_p2 = (!sext_ln203_674_fu_5080730_p1.read().is_01() || !add_ln703_3947_fu_5088960_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_674_fu_5080730_p1.read()) + sc_biguint<15>(add_ln703_3947_fu_5088960_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3949_fu_5080165_p2() {
    add_ln703_3949_fu_5080165_p2 = (!zext_ln203_251_fu_5053673_p1.read().is_01() || !sext_ln203_515_fu_5039537_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_251_fu_5053673_p1.read()) + sc_bigint<11>(sext_ln203_515_fu_5039537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_394_fu_5056363_p2() {
    add_ln703_394_fu_5056363_p2 = (!zext_ln203_26_fu_4997467_p1.read().is_01() || !sext_ln203_70_fu_4997515_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_26_fu_4997467_p1.read()) + sc_bigint<12>(sext_ln203_70_fu_4997515_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3950_fu_5080175_p2() {
    add_ln703_3950_fu_5080175_p2 = (!sext_ln203_673_fu_5053669_p1.read().is_01() || !sext_ln703_2261_fu_5080171_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_673_fu_5053669_p1.read()) + sc_bigint<12>(sext_ln703_2261_fu_5080171_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_395_fu_5081530_p2() {
    add_ln703_395_fu_5081530_p2 = (!add_ln703_393_fu_5081521_p2.read().is_01() || !sext_ln703_259_fu_5081527_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_393_fu_5081521_p2.read()) + sc_bigint<15>(sext_ln703_259_fu_5081527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_396_fu_5056369_p2() {
    add_ln703_396_fu_5056369_p2 = (!sext_ln203_65_fu_4997352_p1.read().is_01() || !zext_ln203_27_fu_4997535_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_65_fu_4997352_p1.read()) + sc_biguint<12>(zext_ln203_27_fu_4997535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_397_fu_5056379_p2() {
    add_ln703_397_fu_5056379_p2 = (!sext_ln203_69_fu_4997491_p1.read().is_01() || !sext_ln203_68_fu_4997438_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_69_fu_4997491_p1.read()) + sc_bigint<10>(sext_ln203_68_fu_4997438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_398_fu_5056389_p2() {
    add_ln703_398_fu_5056389_p2 = (!sext_ln203_66_fu_4997384_p1.read().is_01() || !sext_ln703_262_fu_5056385_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_66_fu_4997384_p1.read()) + sc_bigint<11>(sext_ln703_262_fu_5056385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_399_fu_5056399_p2() {
    add_ln703_399_fu_5056399_p2 = (!sext_ln703_260_fu_5056375_p1.read().is_01() || !sext_ln703_263_fu_5056395_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_260_fu_5056375_p1.read()) + sc_bigint<13>(sext_ln703_263_fu_5056395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_39_fu_5053931_p2() {
    add_ln703_39_fu_5053931_p2 = (!sext_ln703_31_fu_5053917_p1.read().is_01() || !sext_ln703_32_fu_5053927_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_31_fu_5053917_p1.read()) + sc_bigint<12>(sext_ln703_32_fu_5053927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_3_fu_5053699_p2() {
    add_ln703_3_fu_5053699_p2 = (!zext_ln1118_82_fu_4988590_p1.read().is_01() || !add_ln703_2_fu_5053693_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_82_fu_4988590_p1.read()) + sc_biguint<12>(add_ln703_2_fu_5053693_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_402_fu_5056409_p2() {
    add_ln703_402_fu_5056409_p2 = (!zext_ln703_2_fu_5056405_p1.read().is_01() || !zext_ln708_993_fu_4991355_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_2_fu_5056405_p1.read()) + sc_biguint<10>(zext_ln708_993_fu_4991355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_403_fu_5056419_p2() {
    add_ln703_403_fu_5056419_p2 = (!sext_ln203_71_fu_4997549_p1.read().is_01() || !zext_ln703_3_fu_5056415_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_71_fu_4997549_p1.read()) + sc_biguint<12>(zext_ln703_3_fu_5056415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_404_fu_5056425_p2() {
    add_ln703_404_fu_5056425_p2 = (!zext_ln1118_1172_fu_4997573_p1.read().is_01() || !add_ln703_403_fu_5056419_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1172_fu_4997573_p1.read()) + sc_biguint<12>(add_ln703_403_fu_5056419_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_405_fu_5056435_p2() {
    add_ln703_405_fu_5056435_p2 = (!sext_ln203_72_fu_4997569_p1.read().is_01() || !zext_ln708_1110_fu_4997593_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_72_fu_4997569_p1.read()) + sc_biguint<11>(zext_ln708_1110_fu_4997593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_406_fu_5056445_p2() {
    add_ln703_406_fu_5056445_p2 = (!sext_ln703_266_fu_5056431_p1.read().is_01() || !sext_ln703_267_fu_5056441_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_266_fu_5056431_p1.read()) + sc_bigint<13>(sext_ln703_267_fu_5056441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_407_fu_5056451_p2() {
    add_ln703_407_fu_5056451_p2 = (!zext_ln1118_1176_fu_4997659_p1.read().is_01() || !sext_ln1118_122_fu_4997683_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1176_fu_4997659_p1.read()) + sc_bigint<12>(sext_ln1118_122_fu_4997683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_408_fu_5056461_p2() {
    add_ln703_408_fu_5056461_p2 = (!add_ln703_406_fu_5056445_p2.read().is_01() || !sext_ln703_268_fu_5056457_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_406_fu_5056445_p2.read()) + sc_bigint<13>(sext_ln703_268_fu_5056457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_409_fu_5056467_p2() {
    add_ln703_409_fu_5056467_p2 = (!sext_ln1118_121_fu_4997627_p1.read().is_01() || !sext_ln1118_75_fu_4994138_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_121_fu_4997627_p1.read()) + sc_bigint<10>(sext_ln1118_75_fu_4994138_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_40_fu_5080823_p2() {
    add_ln703_40_fu_5080823_p2 = (!sext_ln703_30_fu_5080817_p1.read().is_01() || !sext_ln703_33_fu_5080820_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_30_fu_5080817_p1.read()) + sc_bigint<14>(sext_ln703_33_fu_5080820_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_410_fu_5056477_p2() {
    add_ln703_410_fu_5056477_p2 = (!zext_ln1118_1174_fu_4997607_p1.read().is_01() || !sext_ln708_22_fu_4996568_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1174_fu_4997607_p1.read()) + sc_bigint<9>(sext_ln708_22_fu_4996568_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_411_fu_5056487_p2() {
    add_ln703_411_fu_5056487_p2 = (!sext_ln703_270_fu_5056473_p1.read().is_01() || !sext_ln703_271_fu_5056483_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_270_fu_5056473_p1.read()) + sc_bigint<11>(sext_ln703_271_fu_5056483_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_412_fu_5081555_p2() {
    add_ln703_412_fu_5081555_p2 = (!sext_ln703_269_fu_5081549_p1.read().is_01() || !sext_ln703_272_fu_5081552_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_269_fu_5081549_p1.read()) + sc_bigint<14>(sext_ln703_272_fu_5081552_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_413_fu_5081561_p2() {
    add_ln703_413_fu_5081561_p2 = (!sext_ln1118_125_fu_5080250_p1.read().is_01() || !zext_ln1118_1183_fu_5080247_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_125_fu_5080250_p1.read()) + sc_biguint<12>(zext_ln1118_1183_fu_5080247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_414_fu_5081571_p2() {
    add_ln703_414_fu_5081571_p2 = (!add_ln703_412_fu_5081555_p2.read().is_01() || !sext_ln703_273_fu_5081567_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_412_fu_5081555_p2.read()) + sc_bigint<14>(sext_ln703_273_fu_5081567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_415_fu_5056493_p2() {
    add_ln703_415_fu_5056493_p2 = (!zext_ln1118_1186_fu_4997763_p1.read().is_01() || !sext_ln1118_126_fu_4997831_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1186_fu_4997763_p1.read()) + sc_bigint<12>(sext_ln1118_126_fu_4997831_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_416_fu_5056503_p2() {
    add_ln703_416_fu_5056503_p2 = (!sext_ln203_73_fu_4997783_p1.read().is_01() || !sext_ln703_275_fu_5056499_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_73_fu_4997783_p1.read()) + sc_bigint<13>(sext_ln703_275_fu_5056499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_417_fu_5081580_p2() {
    add_ln703_417_fu_5081580_p2 = (!add_ln703_414_fu_5081571_p2.read().is_01() || !sext_ln703_276_fu_5081577_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_414_fu_5081571_p2.read()) + sc_bigint<14>(sext_ln703_276_fu_5081577_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_418_fu_5056509_p2() {
    add_ln703_418_fu_5056509_p2 = (!zext_ln1118_172_fu_4989024_p1.read().is_01() || !sext_ln1116_6_fu_4997272_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_172_fu_4989024_p1.read()) + sc_bigint<10>(sext_ln1116_6_fu_4997272_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_419_fu_5056515_p2() {
    add_ln703_419_fu_5056515_p2 = (!zext_ln708_1111_fu_4997803_p1.read().is_01() || !add_ln703_418_fu_5056509_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1111_fu_4997803_p1.read()) + sc_biguint<10>(add_ln703_418_fu_5056509_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_41_fu_5080829_p2() {
    add_ln703_41_fu_5080829_p2 = (!sext_ln1118_15_fu_5080184_p1.read().is_01() || !add_ln703_40_fu_5080823_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_15_fu_5080184_p1.read()) + sc_biguint<14>(add_ln703_40_fu_5080823_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_420_fu_5056525_p2() {
    add_ln703_420_fu_5056525_p2 = (!sext_ln1118_124_fu_4997739_p1.read().is_01() || !sext_ln1118_123_fu_4997719_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_124_fu_4997739_p1.read()) + sc_bigint<7>(sext_ln1118_123_fu_4997719_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_421_fu_5056535_p2() {
    add_ln703_421_fu_5056535_p2 = (!sext_ln1118_127_fu_4997855_p1.read().is_01() || !sext_ln703_279_fu_5056531_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_127_fu_4997855_p1.read()) + sc_bigint<8>(sext_ln703_279_fu_5056531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_422_fu_5056545_p2() {
    add_ln703_422_fu_5056545_p2 = (!sext_ln703_278_fu_5056521_p1.read().is_01() || !sext_ln703_280_fu_5056541_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_278_fu_5056521_p1.read()) + sc_bigint<11>(sext_ln703_280_fu_5056541_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_423_fu_5081593_p2() {
    add_ln703_423_fu_5081593_p2 = (!sext_ln703_277_fu_5081586_p1.read().is_01() || !sext_ln703_281_fu_5081590_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_277_fu_5081586_p1.read()) + sc_bigint<15>(sext_ln703_281_fu_5081590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_424_fu_5081599_p2() {
    add_ln703_424_fu_5081599_p2 = (!zext_ln203_28_fu_5080253_p1.read().is_01() || !add_ln703_423_fu_5081593_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_28_fu_5080253_p1.read()) + sc_biguint<15>(add_ln703_423_fu_5081593_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_425_fu_5056551_p2() {
    add_ln703_425_fu_5056551_p2 = (!zext_ln203_29_fu_4997879_p1.read().is_01() || !sext_ln203_75_fu_4997939_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_29_fu_4997879_p1.read()) + sc_bigint<12>(sext_ln203_75_fu_4997939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_426_fu_5056561_p2() {
    add_ln703_426_fu_5056561_p2 = (!sext_ln203_74_fu_4997925_p1.read().is_01() || !sext_ln703_283_fu_5056557_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_74_fu_4997925_p1.read()) + sc_bigint<13>(sext_ln703_283_fu_5056557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_427_fu_5081608_p2() {
    add_ln703_427_fu_5081608_p2 = (!add_ln703_424_fu_5081599_p2.read().is_01() || !sext_ln703_284_fu_5081605_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_424_fu_5081599_p2.read()) + sc_bigint<15>(sext_ln703_284_fu_5081605_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_428_fu_5056567_p2() {
    add_ln703_428_fu_5056567_p2 = (!zext_ln203_527_fu_4998015_p1.read().is_01() || !trunc_ln203_70_fu_4997883_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_527_fu_4998015_p1.read()) + sc_biguint<10>(trunc_ln203_70_fu_4997883_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_429_fu_5056577_p2() {
    add_ln703_429_fu_5056577_p2 = (!sext_ln203_76_fu_4997943_p1.read().is_01() || !sext_ln203_77_fu_4997975_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_76_fu_4997943_p1.read()) + sc_bigint<9>(sext_ln203_77_fu_4997975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_42_fu_5053937_p2() {
    add_ln703_42_fu_5053937_p2 = (!sext_ln1118_18_fu_4990015_p1.read().is_01() || !sext_ln1118_17_fu_4989955_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_18_fu_4990015_p1.read()) + sc_bigint<12>(sext_ln1118_17_fu_4989955_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_430_fu_5056587_p2() {
    add_ln703_430_fu_5056587_p2 = (!sext_ln203_78_fu_4997995_p1.read().is_01() || !sext_ln703_285_fu_5056583_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_78_fu_4997995_p1.read()) + sc_bigint<11>(sext_ln703_285_fu_5056583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_431_fu_5056597_p2() {
    add_ln703_431_fu_5056597_p2 = (!zext_ln703_90_fu_5056573_p1.read().is_01() || !sext_ln703_286_fu_5056593_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_90_fu_5056573_p1.read()) + sc_bigint<12>(sext_ln703_286_fu_5056593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_433_fu_5056611_p2() {
    add_ln703_433_fu_5056611_p2 = (!sext_ln203_82_fu_4998091_p1.read().is_01() || !sext_ln203_79_fu_4998073_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_82_fu_4998091_p1.read()) + sc_bigint<12>(sext_ln203_79_fu_4998073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_434_fu_5056621_p2() {
    add_ln703_434_fu_5056621_p2 = (!or_ln703_2_fu_5056603_p3.read().is_01() || !sext_ln703_289_fu_5056617_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_2_fu_5056603_p3.read()) + sc_bigint<16>(sext_ln703_289_fu_5056617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_435_fu_5056627_p2() {
    add_ln703_435_fu_5056627_p2 = (!sext_ln203_84_fu_4998163_p1.read().is_01() || !sext_ln203_83_fu_4998143_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_84_fu_4998163_p1.read()) + sc_bigint<12>(sext_ln203_83_fu_4998143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_436_fu_5056637_p2() {
    add_ln703_436_fu_5056637_p2 = (!zext_ln203_31_fu_4998043_p1.read().is_01() || !sext_ln203_85_fu_4998261_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_31_fu_4998043_p1.read()) + sc_bigint<12>(sext_ln203_85_fu_4998261_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_437_fu_5056647_p2() {
    add_ln703_437_fu_5056647_p2 = (!sext_ln703_290_fu_5056633_p1.read().is_01() || !sext_ln703_291_fu_5056643_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_290_fu_5056633_p1.read()) + sc_bigint<13>(sext_ln703_291_fu_5056643_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_438_fu_5056657_p2() {
    add_ln703_438_fu_5056657_p2 = (!add_ln703_434_fu_5056621_p2.read().is_01() || !sext_ln703_292_fu_5056653_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_434_fu_5056621_p2.read()) + sc_bigint<16>(sext_ln703_292_fu_5056653_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_439_fu_5056663_p2() {
    add_ln703_439_fu_5056663_p2 = (!zext_ln1118_1668_fu_4991577_p1.read().is_01() || !zext_ln1118_1682_fu_4996016_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1668_fu_4991577_p1.read()) + sc_biguint<10>(zext_ln1118_1682_fu_4996016_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_43_fu_5080838_p2() {
    add_ln703_43_fu_5080838_p2 = (!add_ln703_41_fu_5080829_p2.read().is_01() || !sext_ln703_34_fu_5080835_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_41_fu_5080829_p2.read()) + sc_bigint<14>(sext_ln703_34_fu_5080835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_440_fu_5056673_p2() {
    add_ln703_440_fu_5056673_p2 = (!zext_ln203_522_fu_4995560_p1.read().is_01() || !zext_ln1116_187_fu_4997161_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_522_fu_4995560_p1.read()) + sc_biguint<10>(zext_ln1116_187_fu_4997161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_441_fu_5056683_p2() {
    add_ln703_441_fu_5056683_p2 = (!zext_ln703_91_fu_5056669_p1.read().is_01() || !zext_ln703_92_fu_5056679_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_91_fu_5056669_p1.read()) + sc_biguint<11>(zext_ln703_92_fu_5056679_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_442_fu_5056693_p2() {
    add_ln703_442_fu_5056693_p2 = (!zext_ln708_1113_fu_4998211_p1.read().is_01() || !zext_ln708_1022_fu_4993786_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1113_fu_4998211_p1.read()) + sc_biguint<11>(zext_ln708_1022_fu_4993786_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_443_fu_5056703_p2() {
    add_ln703_443_fu_5056703_p2 = (!zext_ln708_1053_fu_4995154_p1.read().is_01() || !zext_ln708_1114_fu_4998301_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1053_fu_4995154_p1.read()) + sc_biguint<11>(zext_ln708_1114_fu_4998301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_444_fu_5056713_p2() {
    add_ln703_444_fu_5056713_p2 = (!zext_ln703_94_fu_5056699_p1.read().is_01() || !zext_ln703_95_fu_5056709_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_94_fu_5056699_p1.read()) + sc_biguint<12>(zext_ln703_95_fu_5056709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_445_fu_5056719_p2() {
    add_ln703_445_fu_5056719_p2 = (!zext_ln703_93_fu_5056689_p1.read().is_01() || !add_ln703_444_fu_5056713_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_93_fu_5056689_p1.read()) + sc_biguint<12>(add_ln703_444_fu_5056713_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_446_fu_5081630_p2() {
    add_ln703_446_fu_5081630_p2 = (!add_ln703_438_reg_5090949.read().is_01() || !zext_ln703_96_fu_5081627_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_438_reg_5090949.read()) + sc_biguint<16>(zext_ln703_96_fu_5081627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_447_fu_5056725_p2() {
    add_ln703_447_fu_5056725_p2 = (!sext_ln203_87_fu_4998329_p1.read().is_01() || !zext_ln708_1116_fu_4998387_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_87_fu_4998329_p1.read()) + sc_biguint<11>(zext_ln708_1116_fu_4998387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_448_fu_5056735_p2() {
    add_ln703_448_fu_5056735_p2 = (!zext_ln203_33_fu_4998305_p1.read().is_01() || !sext_ln703_293_fu_5056731_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_33_fu_4998305_p1.read()) + sc_bigint<12>(sext_ln703_293_fu_5056731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_449_fu_5056745_p2() {
    add_ln703_449_fu_5056745_p2 = (!zext_ln203_32_fu_4998111_p1.read().is_01() || !sext_ln203_88_fu_4998363_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_32_fu_4998111_p1.read()) + sc_bigint<11>(sext_ln203_88_fu_4998363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_44_fu_5053943_p2() {
    add_ln703_44_fu_5053943_p2 = (!sext_ln1118_16_fu_4989941_p1.read().is_01() || !zext_ln708_981_fu_4989983_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_16_fu_4989941_p1.read()) + sc_biguint<11>(zext_ln708_981_fu_4989983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_450_fu_5056755_p2() {
    add_ln703_450_fu_5056755_p2 = (!zext_ln203_34_fu_4998309_p1.read().is_01() || !zext_ln708_1112_fu_4998183_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_34_fu_4998309_p1.read()) + sc_biguint<10>(zext_ln708_1112_fu_4998183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_451_fu_5056765_p2() {
    add_ln703_451_fu_5056765_p2 = (!sext_ln703_295_fu_5056751_p1.read().is_01() || !zext_ln703_97_fu_5056761_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_295_fu_5056751_p1.read()) + sc_biguint<12>(zext_ln703_97_fu_5056761_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_452_fu_5056775_p2() {
    add_ln703_452_fu_5056775_p2 = (!sext_ln703_294_fu_5056741_p1.read().is_01() || !sext_ln703_296_fu_5056771_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_294_fu_5056741_p1.read()) + sc_bigint<13>(sext_ln703_296_fu_5056771_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_453_fu_5056781_p2() {
    add_ln703_453_fu_5056781_p2 = (!sext_ln203_86_fu_4998281_p1.read().is_01() || !zext_ln203_30_fu_4998039_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_86_fu_4998281_p1.read()) + sc_biguint<9>(zext_ln203_30_fu_4998039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_454_fu_5056791_p2() {
    add_ln703_454_fu_5056791_p2 = (!zext_ln203_529_fu_4998129_p1.read().is_01() || !zext_ln203_528_fu_4998115_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln203_529_fu_4998129_p1.read()) + sc_biguint<6>(zext_ln203_528_fu_4998115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_455_fu_5056801_p2() {
    add_ln703_455_fu_5056801_p2 = (!sext_ln703_297_fu_5056787_p1.read().is_01() || !zext_ln703_98_fu_5056797_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_297_fu_5056787_p1.read()) + sc_biguint<10>(zext_ln703_98_fu_5056797_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_456_fu_5056807_p2() {
    add_ln703_456_fu_5056807_p2 = (!zext_ln203_531_fu_4998225_p1.read().is_01() || !zext_ln203_530_fu_4998187_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln203_531_fu_4998225_p1.read()) + sc_biguint<7>(zext_ln203_530_fu_4998187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_457_fu_5056817_p2() {
    add_ln703_457_fu_5056817_p2 = (!sext_ln203_81_fu_4998077_p1.read().is_01() || !sext_ln1118_12_fu_4989793_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_81_fu_4998077_p1.read()) + sc_bigint<8>(sext_ln1118_12_fu_4989793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_458_fu_5056827_p2() {
    add_ln703_458_fu_5056827_p2 = (!zext_ln703_99_fu_5056813_p1.read().is_01() || !sext_ln703_298_fu_5056823_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_99_fu_5056813_p1.read()) + sc_bigint<9>(sext_ln703_298_fu_5056823_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_459_fu_5056837_p2() {
    add_ln703_459_fu_5056837_p2 = (!add_ln703_455_fu_5056801_p2.read().is_01() || !sext_ln703_299_fu_5056833_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_455_fu_5056801_p2.read()) + sc_bigint<10>(sext_ln703_299_fu_5056833_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_45_fu_5053953_p2() {
    add_ln703_45_fu_5053953_p2 = (!sext_ln1118_19_fu_4990047_p1.read().is_01() || !sext_ln1118_22_fu_4990121_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_19_fu_4990047_p1.read()) + sc_bigint<10>(sext_ln1118_22_fu_4990121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_460_fu_5056847_p2() {
    add_ln703_460_fu_5056847_p2 = (!add_ln703_452_fu_5056775_p2.read().is_01() || !sext_ln703_303_fu_5056843_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_452_fu_5056775_p2.read()) + sc_bigint<13>(sext_ln703_303_fu_5056843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_462_fu_5056865_p2() {
    add_ln703_462_fu_5056865_p2 = (!zext_ln703_100_fu_5056861_p1.read().is_01() || !sext_ln1118_61_fu_4993418_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_100_fu_5056861_p1.read()) + sc_bigint<10>(sext_ln1118_61_fu_4993418_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_463_fu_5056875_p2() {
    add_ln703_463_fu_5056875_p2 = (!sext_ln1118_132_fu_4998421_p1.read().is_01() || !sext_ln703_306_fu_5056871_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_132_fu_4998421_p1.read()) + sc_bigint<12>(sext_ln703_306_fu_5056871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_464_fu_5056885_p2() {
    add_ln703_464_fu_5056885_p2 = (!sext_ln1118_134_fu_4998425_p1.read().is_01() || !zext_ln708_1093_fu_4996450_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_134_fu_4998425_p1.read()) + sc_biguint<11>(zext_ln708_1093_fu_4996450_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_465_fu_5056895_p2() {
    add_ln703_465_fu_5056895_p2 = (!sext_ln703_307_fu_5056881_p1.read().is_01() || !sext_ln703_308_fu_5056891_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_307_fu_5056881_p1.read()) + sc_bigint<13>(sext_ln703_308_fu_5056891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_466_fu_5056901_p2() {
    add_ln703_466_fu_5056901_p2 = (!sext_ln1118_136_fu_4998469_p1.read().is_01() || !sext_ln708_30_fu_4998439_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_136_fu_4998469_p1.read()) + sc_bigint<12>(sext_ln708_30_fu_4998439_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_467_fu_5056911_p2() {
    add_ln703_467_fu_5056911_p2 = (!add_ln703_465_fu_5056895_p2.read().is_01() || !sext_ln703_309_fu_5056907_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_465_fu_5056895_p2.read()) + sc_bigint<13>(sext_ln703_309_fu_5056907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_468_fu_5056921_p2() {
    add_ln703_468_fu_5056921_p2 = (!sext_ln1118_121_fu_4997627_p1.read().is_01() || !sext_ln1118_108_fu_4996512_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_121_fu_4997627_p1.read()) + sc_bigint<10>(sext_ln1118_108_fu_4996512_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_469_fu_5056927_p2() {
    add_ln703_469_fu_5056927_p2 = (!zext_ln708_1030_fu_4994202_p1.read().is_01() || !add_ln703_468_fu_5056921_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1030_fu_4994202_p1.read()) + sc_biguint<10>(add_ln703_468_fu_5056921_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_46_fu_5053963_p2() {
    add_ln703_46_fu_5053963_p2 = (!sext_ln1118_21_fu_4990089_p1.read().is_01() || !sext_ln703_37_fu_5053959_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_21_fu_4990089_p1.read()) + sc_bigint<11>(sext_ln703_37_fu_5053959_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_470_fu_5056937_p2() {
    add_ln703_470_fu_5056937_p2 = (!sext_ln703_310_fu_5056917_p1.read().is_01() || !sext_ln703_311_fu_5056933_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_310_fu_5056917_p1.read()) + sc_bigint<14>(sext_ln703_311_fu_5056933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_471_fu_5056943_p2() {
    add_ln703_471_fu_5056943_p2 = (!sext_ln708_31_fu_4998603_p1.read().is_01() || !sext_ln203_89_fu_4998527_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_31_fu_4998603_p1.read()) + sc_bigint<12>(sext_ln203_89_fu_4998527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_472_fu_5056953_p2() {
    add_ln703_472_fu_5056953_p2 = (!add_ln703_470_fu_5056937_p2.read().is_01() || !sext_ln703_312_fu_5056949_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_470_fu_5056937_p2.read()) + sc_bigint<14>(sext_ln703_312_fu_5056949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_473_fu_5056959_p2() {
    add_ln703_473_fu_5056959_p2 = (!zext_ln708_1117_fu_4998551_p1.read().is_01() || !zext_ln1118_1690_fu_4998513_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1117_fu_4998551_p1.read()) + sc_biguint<9>(zext_ln1118_1690_fu_4998513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_474_fu_5056969_p2() {
    add_ln703_474_fu_5056969_p2 = (!zext_ln708_1119_fu_4998635_p1.read().is_01() || !zext_ln708_1118_fu_4998583_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1119_fu_4998635_p1.read()) + sc_biguint<11>(zext_ln708_1118_fu_4998583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_475_fu_5056979_p2() {
    add_ln703_475_fu_5056979_p2 = (!zext_ln703_101_fu_5056965_p1.read().is_01() || !zext_ln703_102_fu_5056975_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_101_fu_5056965_p1.read()) + sc_biguint<12>(zext_ln703_102_fu_5056975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_476_fu_5081650_p2() {
    add_ln703_476_fu_5081650_p2 = (!sext_ln703_313_fu_5081644_p1.read().is_01() || !zext_ln703_103_fu_5081647_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_313_fu_5081644_p1.read()) + sc_biguint<15>(zext_ln703_103_fu_5081647_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_477_fu_5056985_p2() {
    add_ln703_477_fu_5056985_p2 = (!zext_ln708_1121_fu_4998663_p1.read().is_01() || !zext_ln708_1120_fu_4998649_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1121_fu_4998663_p1.read()) + sc_biguint<11>(zext_ln708_1120_fu_4998649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_478_fu_5056995_p2() {
    add_ln703_478_fu_5056995_p2 = (!sext_ln1118_137_fu_4998493_p1.read().is_01() || !zext_ln203_35_fu_4998695_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_137_fu_4998493_p1.read()) + sc_biguint<12>(zext_ln203_35_fu_4998695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_479_fu_5057005_p2() {
    add_ln703_479_fu_5057005_p2 = (!zext_ln703_104_fu_5056991_p1.read().is_01() || !sext_ln703_314_fu_5057001_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_104_fu_5056991_p1.read()) + sc_bigint<13>(sext_ln703_314_fu_5057001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_47_fu_5053973_p2() {
    add_ln703_47_fu_5053973_p2 = (!sext_ln703_36_fu_5053949_p1.read().is_01() || !sext_ln703_38_fu_5053969_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_36_fu_5053949_p1.read()) + sc_bigint<12>(sext_ln703_38_fu_5053969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_480_fu_5057011_p2() {
    add_ln703_480_fu_5057011_p2 = (!zext_ln708_127_fu_4995636_p1.read().is_01() || !sext_ln1118_70_fu_4993762_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_127_fu_4995636_p1.read()) + sc_bigint<11>(sext_ln1118_70_fu_4993762_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_481_fu_5057021_p2() {
    add_ln703_481_fu_5057021_p2 = (!zext_ln203_17_fu_4995092_p1.read().is_01() || !zext_ln1118_749_fu_4994912_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_17_fu_4995092_p1.read()) + sc_biguint<9>(zext_ln1118_749_fu_4994912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_482_fu_5057031_p2() {
    add_ln703_482_fu_5057031_p2 = (!sext_ln703_315_fu_5057017_p1.read().is_01() || !zext_ln703_105_fu_5057027_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_315_fu_5057017_p1.read()) + sc_biguint<12>(zext_ln703_105_fu_5057027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_483_fu_5057041_p2() {
    add_ln703_483_fu_5057041_p2 = (!add_ln703_479_fu_5057005_p2.read().is_01() || !sext_ln703_316_fu_5057037_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_479_fu_5057005_p2.read()) + sc_bigint<13>(sext_ln703_316_fu_5057037_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_484_fu_5081659_p2() {
    add_ln703_484_fu_5081659_p2 = (!add_ln703_476_fu_5081650_p2.read().is_01() || !sext_ln703_317_fu_5081656_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_476_fu_5081650_p2.read()) + sc_bigint<15>(sext_ln703_317_fu_5081656_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_485_fu_5081665_p2() {
    add_ln703_485_fu_5081665_p2 = (!sext_ln203_90_fu_5080256_p1.read().is_01() || !add_ln703_484_fu_5081659_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_90_fu_5080256_p1.read()) + sc_biguint<15>(add_ln703_484_fu_5081659_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_486_fu_5057047_p2() {
    add_ln703_486_fu_5057047_p2 = (!zext_ln203_534_fu_4998749_p1.read().is_01() || !zext_ln203_532_fu_4998709_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_534_fu_4998749_p1.read()) + sc_biguint<10>(zext_ln203_532_fu_4998709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_487_fu_5081674_p2() {
    add_ln703_487_fu_5081674_p2 = (!add_ln703_485_fu_5081665_p2.read().is_01() || !zext_ln703_106_fu_5081671_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_485_fu_5081665_p2.read()) + sc_biguint<15>(zext_ln703_106_fu_5081671_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_488_fu_5057053_p2() {
    add_ln703_488_fu_5057053_p2 = (!sext_ln203_21_fu_4992742_p1.read().is_01() || !zext_ln708_1122_fu_4998793_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_21_fu_4992742_p1.read()) + sc_biguint<11>(zext_ln708_1122_fu_4998793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_489_fu_5057063_p2() {
    add_ln703_489_fu_5057063_p2 = (!sext_ln203_92_fu_4998769_p1.read().is_01() || !zext_ln203_533_fu_4998729_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_92_fu_4998769_p1.read()) + sc_biguint<9>(zext_ln203_533_fu_4998729_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_48_fu_5080851_p2() {
    add_ln703_48_fu_5080851_p2 = (!sext_ln703_35_fu_5080844_p1.read().is_01() || !sext_ln703_39_fu_5080848_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_35_fu_5080844_p1.read()) + sc_bigint<15>(sext_ln703_39_fu_5080848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_490_fu_5057073_p2() {
    add_ln703_490_fu_5057073_p2 = (!sext_ln703_318_fu_5057059_p1.read().is_01() || !sext_ln703_319_fu_5057069_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_318_fu_5057059_p1.read()) + sc_bigint<12>(sext_ln703_319_fu_5057069_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_492_fu_5057079_p2() {
    add_ln703_492_fu_5057079_p2 = (!sext_ln1118_140_fu_4998823_p1.read().is_01() || !ap_const_lv10_340.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_140_fu_4998823_p1.read()) + sc_bigint<10>(ap_const_lv10_340));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_493_fu_5057089_p2() {
    add_ln703_493_fu_5057089_p2 = (!sext_ln1116_9_fu_4998861_p1.read().is_01() || !sext_ln1116_8_fu_4998847_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_9_fu_4998861_p1.read()) + sc_bigint<11>(sext_ln1116_8_fu_4998847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_494_fu_5057099_p2() {
    add_ln703_494_fu_5057099_p2 = (!sext_ln703_327_fu_5057085_p1.read().is_01() || !sext_ln703_328_fu_5057095_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_327_fu_5057085_p1.read()) + sc_bigint<12>(sext_ln703_328_fu_5057095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_495_fu_5057109_p2() {
    add_ln703_495_fu_5057109_p2 = (!zext_ln1118_1322_fu_4998944_p1.read().is_01() || !sext_ln1118_146_fu_4998935_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1322_fu_4998944_p1.read()) + sc_bigint<12>(sext_ln1118_146_fu_4998935_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_496_fu_5057119_p2() {
    add_ln703_496_fu_5057119_p2 = (!sext_ln703_329_fu_5057105_p1.read().is_01() || !sext_ln703_331_fu_5057115_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_329_fu_5057105_p1.read()) + sc_bigint<13>(sext_ln703_331_fu_5057115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_497_fu_5057125_p2() {
    add_ln703_497_fu_5057125_p2 = (!sext_ln1118_142_fu_4998881_p1.read().is_01() || !sext_ln1118_75_fu_4994138_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_142_fu_4998881_p1.read()) + sc_bigint<10>(sext_ln1118_75_fu_4994138_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_498_fu_5057135_p2() {
    add_ln703_498_fu_5057135_p2 = (!sext_ln1118_144_fu_4998911_p1.read().is_01() || !sext_ln703_332_fu_5057131_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_144_fu_4998911_p1.read()) + sc_bigint<11>(sext_ln703_332_fu_5057131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_499_fu_5081696_p2() {
    add_ln703_499_fu_5081696_p2 = (!add_ln703_496_reg_5090989.read().is_01() || !sext_ln703_333_fu_5081693_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_496_reg_5090989.read()) + sc_bigint<13>(sext_ln703_333_fu_5081693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_49_fu_5053979_p2() {
    add_ln703_49_fu_5053979_p2 = (!zext_ln203_2_fu_4990171_p1.read().is_01() || !sext_ln203_5_fu_4990259_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_2_fu_4990171_p1.read()) + sc_bigint<12>(sext_ln203_5_fu_4990259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_4_fu_5053705_p2() {
    add_ln703_4_fu_5053705_p2 = (!sext_ln708_fu_4988540_p1.read().is_01() || !zext_ln1116_184_fu_4988492_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_fu_4988540_p1.read()) + sc_biguint<9>(zext_ln1116_184_fu_4988492_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_500_fu_5057141_p2() {
    add_ln703_500_fu_5057141_p2 = (!zext_ln1116_206_fu_4999090_p1.read().is_01() || !zext_ln708_1124_fu_4999034_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_206_fu_4999090_p1.read()) + sc_biguint<10>(zext_ln708_1124_fu_4999034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_501_fu_5081704_p2() {
    add_ln703_501_fu_5081704_p2 = (!add_ln703_499_fu_5081696_p2.read().is_01() || !zext_ln703_107_fu_5081701_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_499_fu_5081696_p2.read()) + sc_biguint<13>(zext_ln703_107_fu_5081701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_502_fu_5057147_p2() {
    add_ln703_502_fu_5057147_p2 = (!zext_ln708_1125_fu_4999102_p1.read().is_01() || !zext_ln708_1117_fu_4998551_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1125_fu_4999102_p1.read()) + sc_biguint<9>(zext_ln708_1117_fu_4998551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_503_fu_5057157_p2() {
    add_ln703_503_fu_5057157_p2 = (!sext_ln708_33_fu_4998972_p1.read().is_01() || !zext_ln708_1127_fu_4999136_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_33_fu_4998972_p1.read()) + sc_biguint<11>(zext_ln708_1127_fu_4999136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_504_fu_5057163_p2() {
    add_ln703_504_fu_5057163_p2 = (!zext_ln703_108_fu_5057153_p1.read().is_01() || !add_ln703_503_fu_5057157_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_108_fu_5057153_p1.read()) + sc_biguint<11>(add_ln703_503_fu_5057157_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_505_fu_5081717_p2() {
    add_ln703_505_fu_5081717_p2 = (!sext_ln703_334_fu_5081710_p1.read().is_01() || !sext_ln703_336_fu_5081714_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_334_fu_5081710_p1.read()) + sc_bigint<14>(sext_ln703_336_fu_5081714_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_506_fu_5057169_p2() {
    add_ln703_506_fu_5057169_p2 = (!sext_ln1116_11_fu_4999066_p1.read().is_01() || !sext_ln203_3_fu_4990135_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_11_fu_4999066_p1.read()) + sc_bigint<11>(sext_ln203_3_fu_4990135_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_507_fu_5057175_p2() {
    add_ln703_507_fu_5057175_p2 = (!sext_ln708_36_fu_4999172_p1.read().is_01() || !sext_ln708_34_fu_4999014_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_36_fu_4999172_p1.read()) + sc_bigint<9>(sext_ln708_34_fu_4999014_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_508_fu_5057185_p2() {
    add_ln703_508_fu_5057185_p2 = (!add_ln703_506_fu_5057169_p2.read().is_01() || !sext_ln703_337_fu_5057181_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_506_fu_5057169_p2.read()) + sc_bigint<11>(sext_ln703_337_fu_5057181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_509_fu_5057195_p2() {
    add_ln703_509_fu_5057195_p2 = (!zext_ln708_1126_fu_4999116_p1.read().is_01() || !zext_ln708_1123_fu_4998990_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1126_fu_4999116_p1.read()) + sc_biguint<8>(zext_ln708_1123_fu_4998990_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_50_fu_5080860_p2() {
    add_ln703_50_fu_5080860_p2 = (!add_ln703_48_fu_5080851_p2.read().is_01() || !sext_ln703_40_fu_5080857_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_48_fu_5080851_p2.read()) + sc_bigint<15>(sext_ln703_40_fu_5080857_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_510_fu_5057205_p2() {
    add_ln703_510_fu_5057205_p2 = (!sext_ln1118_148_fu_4999098_p1.read().is_01() || !sext_ln1118_147_fu_4999094_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_148_fu_4999098_p1.read()) + sc_bigint<8>(sext_ln1118_147_fu_4999094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_511_fu_5057215_p2() {
    add_ln703_511_fu_5057215_p2 = (!zext_ln703_109_fu_5057201_p1.read().is_01() || !sext_ln703_340_fu_5057211_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_109_fu_5057201_p1.read()) + sc_bigint<9>(sext_ln703_340_fu_5057211_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_512_fu_5057225_p2() {
    add_ln703_512_fu_5057225_p2 = (!sext_ln703_339_fu_5057191_p1.read().is_01() || !sext_ln703_341_fu_5057221_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_339_fu_5057191_p1.read()) + sc_bigint<12>(sext_ln703_341_fu_5057221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_513_fu_5081726_p2() {
    add_ln703_513_fu_5081726_p2 = (!add_ln703_505_fu_5081717_p2.read().is_01() || !sext_ln703_342_fu_5081723_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_505_fu_5081717_p2.read()) + sc_bigint<14>(sext_ln703_342_fu_5081723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_514_fu_5081732_p2() {
    add_ln703_514_fu_5081732_p2 = (!zext_ln203_36_fu_5080259_p1.read().is_01() || !add_ln703_513_fu_5081726_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln203_36_fu_5080259_p1.read()) + sc_biguint<14>(add_ln703_513_fu_5081726_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_515_fu_5057231_p2() {
    add_ln703_515_fu_5057231_p2 = (!sext_ln203_100_fu_4999328_p1.read().is_01() || !sext_ln203_98_fu_4999294_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_100_fu_4999328_p1.read()) + sc_bigint<11>(sext_ln203_98_fu_4999294_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_516_fu_5057241_p2() {
    add_ln703_516_fu_5057241_p2 = (!sext_ln203_96_fu_4999240_p1.read().is_01() || !sext_ln703_343_fu_5057237_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_96_fu_4999240_p1.read()) + sc_bigint<12>(sext_ln703_343_fu_5057237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_517_fu_5081741_p2() {
    add_ln703_517_fu_5081741_p2 = (!add_ln703_514_fu_5081732_p2.read().is_01() || !sext_ln703_345_fu_5081738_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_514_fu_5081732_p2.read()) + sc_bigint<14>(sext_ln703_345_fu_5081738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_518_fu_5057247_p2() {
    add_ln703_518_fu_5057247_p2 = (!sext_ln203_94_fu_4999192_p1.read().is_01() || !sext_ln203_101_fu_4999368_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_94_fu_4999192_p1.read()) + sc_bigint<11>(sext_ln203_101_fu_4999368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_519_fu_5057257_p2() {
    add_ln703_519_fu_5057257_p2 = (!sext_ln203_99_fu_4999314_p1.read().is_01() || !sext_ln203_97_fu_4999264_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_99_fu_4999314_p1.read()) + sc_bigint<10>(sext_ln203_97_fu_4999264_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_51_fu_5053985_p2() {
    add_ln703_51_fu_5053985_p2 = (!zext_ln708_979_fu_4989313_p1.read().is_01() || !zext_ln708_984_fu_4990225_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_979_fu_4989313_p1.read()) + sc_biguint<11>(zext_ln708_984_fu_4990225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_520_fu_5057267_p2() {
    add_ln703_520_fu_5057267_p2 = (!sext_ln203_95_fu_4999216_p1.read().is_01() || !sext_ln703_348_fu_5057263_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_95_fu_4999216_p1.read()) + sc_bigint<11>(sext_ln703_348_fu_5057263_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_521_fu_5057277_p2() {
    add_ln703_521_fu_5057277_p2 = (!sext_ln703_347_fu_5057253_p1.read().is_01() || !sext_ln703_349_fu_5057273_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_347_fu_5057253_p1.read()) + sc_bigint<12>(sext_ln703_349_fu_5057273_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_523_fu_5057283_p2() {
    add_ln703_523_fu_5057283_p2 = (!zext_ln708_177_fu_4999382_p1.read().is_01() || !ap_const_lv11_420.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_177_fu_4999382_p1.read()) + sc_bigint<11>(ap_const_lv11_420));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_524_fu_5057289_p2() {
    add_ln703_524_fu_5057289_p2 = (!zext_ln708_1027_fu_4994036_p1.read().is_01() || !add_ln703_523_fu_5057283_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1027_fu_4994036_p1.read()) + sc_biguint<11>(add_ln703_523_fu_5057283_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_525_fu_5057299_p2() {
    add_ln703_525_fu_5057299_p2 = (!sext_ln203_102_fu_4999386_p1.read().is_01() || !sext_ln703_64_fu_5057295_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_102_fu_4999386_p1.read()) + sc_bigint<12>(sext_ln703_64_fu_5057295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_526_fu_5057309_p2() {
    add_ln703_526_fu_5057309_p2 = (!sext_ln203_103_fu_4999406_p1.read().is_01() || !sext_ln703_65_fu_5057305_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_103_fu_4999406_p1.read()) + sc_bigint<13>(sext_ln703_65_fu_5057305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_527_fu_5057315_p2() {
    add_ln703_527_fu_5057315_p2 = (!zext_ln1118_1537_fu_4999420_p1.read().is_01() || !sext_ln203_79_fu_4998073_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1537_fu_4999420_p1.read()) + sc_bigint<12>(sext_ln203_79_fu_4998073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_528_fu_5057325_p2() {
    add_ln703_528_fu_5057325_p2 = (!add_ln703_526_fu_5057309_p2.read().is_01() || !sext_ln703_352_fu_5057321_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_526_fu_5057309_p2.read()) + sc_bigint<13>(sext_ln703_352_fu_5057321_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_529_fu_5057335_p2() {
    add_ln703_529_fu_5057335_p2 = (!sext_ln203_93_fu_4998931_p1.read().is_01() || !sext_ln703_66_fu_5057331_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_93_fu_4998931_p1.read()) + sc_bigint<14>(sext_ln703_66_fu_5057331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_52_fu_5053995_p2() {
    add_ln703_52_fu_5053995_p2 = (!zext_ln203_503_fu_4990363_p1.read().is_01() || !zext_ln203_502_fu_4990279_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_503_fu_4990363_p1.read()) + sc_biguint<10>(zext_ln203_502_fu_4990279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_530_fu_5057341_p2() {
    add_ln703_530_fu_5057341_p2 = (!zext_ln1118_1695_fu_4999544_p1.read().is_01() || !zext_ln708_1128_fu_4999504_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1695_fu_4999544_p1.read()) + sc_biguint<10>(zext_ln708_1128_fu_4999504_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_531_fu_5057351_p2() {
    add_ln703_531_fu_5057351_p2 = (!add_ln703_529_fu_5057335_p2.read().is_01() || !zext_ln703_110_fu_5057347_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_529_fu_5057335_p2.read()) + sc_biguint<14>(zext_ln703_110_fu_5057347_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_532_fu_5057357_p2() {
    add_ln703_532_fu_5057357_p2 = (!zext_ln1118_1547_fu_4999524_p1.read().is_01() || !sext_ln1118_152_fu_4999452_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_1547_fu_4999524_p1.read()) + sc_bigint<11>(sext_ln1118_152_fu_4999452_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_533_fu_5057363_p2() {
    add_ln703_533_fu_5057363_p2 = (!sext_ln1118_154_fu_4999576_p1.read().is_01() || !sext_ln1118_153_fu_4999480_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_154_fu_4999576_p1.read()) + sc_bigint<10>(sext_ln1118_153_fu_4999480_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_534_fu_5057373_p2() {
    add_ln703_534_fu_5057373_p2 = (!add_ln703_532_fu_5057357_p2.read().is_01() || !sext_ln703_353_fu_5057369_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_532_fu_5057357_p2.read()) + sc_bigint<11>(sext_ln703_353_fu_5057369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_535_fu_5081767_p2() {
    add_ln703_535_fu_5081767_p2 = (!add_ln703_531_reg_5091024.read().is_01() || !sext_ln703_354_fu_5081764_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_531_reg_5091024.read()) + sc_bigint<14>(sext_ln703_354_fu_5081764_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_536_fu_5057379_p2() {
    add_ln703_536_fu_5057379_p2 = (!zext_ln1118_1596_fu_4999628_p1.read().is_01() || !sext_ln1118_155_fu_4999590_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1596_fu_4999628_p1.read()) + sc_bigint<12>(sext_ln1118_155_fu_4999590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_537_fu_5081775_p2() {
    add_ln703_537_fu_5081775_p2 = (!add_ln703_535_fu_5081767_p2.read().is_01() || !sext_ln703_355_fu_5081772_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_535_fu_5081767_p2.read()) + sc_bigint<14>(sext_ln703_355_fu_5081772_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_538_fu_5057385_p2() {
    add_ln703_538_fu_5057385_p2 = (!trunc_ln1118_s_fu_4996764_p4.read().is_01() || !zext_ln203_517_fu_4995056_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_s_fu_4996764_p4.read()) + sc_biguint<10>(zext_ln203_517_fu_4995056_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_539_fu_5057395_p2() {
    add_ln703_539_fu_5057395_p2 = (!zext_ln708_1130_fu_4999684_p1.read().is_01() || !zext_ln708_1114_fu_4998301_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1130_fu_4999684_p1.read()) + sc_biguint<11>(zext_ln708_1114_fu_4998301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_53_fu_5054005_p2() {
    add_ln703_53_fu_5054005_p2 = (!zext_ln703_15_fu_5053991_p1.read().is_01() || !zext_ln703_19_fu_5054001_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_15_fu_5053991_p1.read()) + sc_biguint<12>(zext_ln703_19_fu_5054001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_540_fu_5057405_p2() {
    add_ln703_540_fu_5057405_p2 = (!zext_ln703_111_fu_5057391_p1.read().is_01() || !zext_ln703_112_fu_5057401_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_111_fu_5057391_p1.read()) + sc_biguint<12>(zext_ln703_112_fu_5057401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_541_fu_5081788_p2() {
    add_ln703_541_fu_5081788_p2 = (!sext_ln703_356_fu_5081781_p1.read().is_01() || !zext_ln703_113_fu_5081785_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_356_fu_5081781_p1.read()) + sc_biguint<15>(zext_ln703_113_fu_5081785_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_542_fu_5057411_p2() {
    add_ln703_542_fu_5057411_p2 = (!sext_ln1118_157_fu_4999642_p1.read().is_01() || !sext_ln708_38_fu_4999604_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_157_fu_4999642_p1.read()) + sc_bigint<11>(sext_ln708_38_fu_4999604_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_543_fu_5057421_p2() {
    add_ln703_543_fu_5057421_p2 = (!zext_ln1118_1604_fu_4999708_p1.read().is_01() || !sext_ln703_357_fu_5057417_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1604_fu_4999708_p1.read()) + sc_bigint<12>(sext_ln703_357_fu_5057417_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_544_fu_5057427_p2() {
    add_ln703_544_fu_5057427_p2 = (!sext_ln708_8_fu_4990985_p1.read().is_01() || !zext_ln708_1112_fu_4998183_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_8_fu_4990985_p1.read()) + sc_biguint<10>(zext_ln708_1112_fu_4998183_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_545_fu_5057433_p2() {
    add_ln703_545_fu_5057433_p2 = (!sext_ln708_40_fu_4999646_p1.read().is_01() || !zext_ln708_1129_fu_4999660_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln708_40_fu_4999646_p1.read()) + sc_biguint<7>(zext_ln708_1129_fu_4999660_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_546_fu_5057443_p2() {
    add_ln703_546_fu_5057443_p2 = (!add_ln703_544_fu_5057427_p2.read().is_01() || !sext_ln703_361_fu_5057439_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_544_fu_5057427_p2.read()) + sc_bigint<10>(sext_ln703_361_fu_5057439_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_547_fu_5057453_p2() {
    add_ln703_547_fu_5057453_p2 = (!add_ln703_543_fu_5057421_p2.read().is_01() || !sext_ln703_362_fu_5057449_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_543_fu_5057421_p2.read()) + sc_bigint<12>(sext_ln703_362_fu_5057449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_548_fu_5081797_p2() {
    add_ln703_548_fu_5081797_p2 = (!add_ln703_541_fu_5081788_p2.read().is_01() || !sext_ln703_363_fu_5081794_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_541_fu_5081788_p2.read()) + sc_bigint<15>(sext_ln703_363_fu_5081794_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_549_fu_5081803_p2() {
    add_ln703_549_fu_5081803_p2 = (!sext_ln203_104_fu_5080262_p1.read().is_01() || !add_ln703_548_fu_5081797_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_104_fu_5080262_p1.read()) + sc_biguint<15>(add_ln703_548_fu_5081797_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_54_fu_5080869_p2() {
    add_ln703_54_fu_5080869_p2 = (!add_ln703_50_fu_5080860_p2.read().is_01() || !zext_ln703_20_fu_5080866_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_50_fu_5080860_p2.read()) + sc_biguint<15>(zext_ln703_20_fu_5080866_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_550_fu_5057459_p2() {
    add_ln703_550_fu_5057459_p2 = (!sext_ln203_105_fu_4999738_p1.read().is_01() || !zext_ln708_1132_fu_4999766_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_105_fu_4999738_p1.read()) + sc_biguint<11>(zext_ln708_1132_fu_4999766_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_551_fu_5057469_p2() {
    add_ln703_551_fu_5057469_p2 = (!sext_ln203_106_fu_4999752_p1.read().is_01() || !sext_ln703_364_fu_5057465_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_106_fu_4999752_p1.read()) + sc_bigint<12>(sext_ln703_364_fu_5057465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_553_fu_5057475_p2() {
    add_ln703_553_fu_5057475_p2 = (!zext_ln708_1134_fu_4999786_p1.read().is_01() || !ap_const_lv11_4A0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1134_fu_4999786_p1.read()) + sc_bigint<11>(ap_const_lv11_4A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_554_fu_5057485_p2() {
    add_ln703_554_fu_5057485_p2 = (!sext_ln203_107_fu_4999790_p1.read().is_01() || !sext_ln703_69_fu_5057481_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_107_fu_4999790_p1.read()) + sc_bigint<12>(sext_ln703_69_fu_5057481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_555_fu_5057495_p2() {
    add_ln703_555_fu_5057495_p2 = (!zext_ln708_219_fu_4999828_p1.read().is_01() || !sext_ln1118_159_fu_4999880_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_219_fu_4999828_p1.read()) + sc_bigint<12>(sext_ln1118_159_fu_4999880_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_556_fu_5057505_p2() {
    add_ln703_556_fu_5057505_p2 = (!sext_ln703_70_fu_5057491_p1.read().is_01() || !sext_ln703_367_fu_5057501_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_70_fu_5057491_p1.read()) + sc_bigint<13>(sext_ln703_367_fu_5057501_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_557_fu_5057511_p2() {
    add_ln703_557_fu_5057511_p2 = (!zext_ln708_220_fu_4999832_p1.read().is_01() || !tmp_1096_fu_4999856_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_220_fu_4999832_p1.read()) + sc_biguint<9>(tmp_1096_fu_4999856_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_558_fu_5057521_p2() {
    add_ln703_558_fu_5057521_p2 = (!sext_ln1118_158_fu_4999814_p1.read().is_01() || !zext_ln708_1135_fu_4999846_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_158_fu_4999814_p1.read()) + sc_biguint<8>(zext_ln708_1135_fu_4999846_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_559_fu_5057531_p2() {
    add_ln703_559_fu_5057531_p2 = (!zext_ln703_114_fu_5057517_p1.read().is_01() || !sext_ln703_368_fu_5057527_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_114_fu_5057517_p1.read()) + sc_bigint<10>(sext_ln703_368_fu_5057527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_55_fu_5054011_p2() {
    add_ln703_55_fu_5054011_p2 = (!sext_ln203_8_fu_4990463_p1.read().is_01() || !sext_ln203_3_fu_4990135_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_8_fu_4990463_p1.read()) + sc_bigint<11>(sext_ln203_3_fu_4990135_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_560_fu_5057541_p2() {
    add_ln703_560_fu_5057541_p2 = (!add_ln703_556_fu_5057505_p2.read().is_01() || !sext_ln703_369_fu_5057537_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_556_fu_5057505_p2.read()) + sc_bigint<13>(sext_ln703_369_fu_5057537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_561_fu_5057547_p2() {
    add_ln703_561_fu_5057547_p2 = (!trunc_ln708_1169_fu_4999982_p4.read().is_01() || !zext_ln708_1136_fu_4999968_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln708_1169_fu_4999982_p4.read()) + sc_biguint<10>(zext_ln708_1136_fu_4999968_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_562_fu_5057557_p2() {
    add_ln703_562_fu_5057557_p2 = (!add_ln703_560_fu_5057541_p2.read().is_01() || !zext_ln703_115_fu_5057553_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_560_fu_5057541_p2.read()) + sc_biguint<13>(zext_ln703_115_fu_5057553_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_563_fu_5057563_p2() {
    add_ln703_563_fu_5057563_p2 = (!sext_ln1118_161_fu_4999910_p1.read().is_01() || !zext_ln1118_1617_fu_5000002_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_161_fu_4999910_p1.read()) + sc_biguint<12>(zext_ln1118_1617_fu_5000002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_564_fu_5057569_p2() {
    add_ln703_564_fu_5057569_p2 = (!zext_ln1118_1614_fu_4999944_p1.read().is_01() || !sext_ln708_41_fu_4999930_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1614_fu_4999944_p1.read()) + sc_bigint<10>(sext_ln708_41_fu_4999930_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_565_fu_5057579_p2() {
    add_ln703_565_fu_5057579_p2 = (!add_ln703_563_fu_5057563_p2.read().is_01() || !sext_ln703_371_fu_5057575_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_563_fu_5057563_p2.read()) + sc_bigint<12>(sext_ln703_371_fu_5057575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_566_fu_5081828_p2() {
    add_ln703_566_fu_5081828_p2 = (!sext_ln703_370_fu_5081822_p1.read().is_01() || !sext_ln703_372_fu_5081825_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_370_fu_5081822_p1.read()) + sc_bigint<14>(sext_ln703_372_fu_5081825_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_567_fu_5057585_p2() {
    add_ln703_567_fu_5057585_p2 = (!sext_ln203_84_fu_4998163_p1.read().is_01() || !sext_ln1118_163_fu_5000032_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_84_fu_4998163_p1.read()) + sc_bigint<12>(sext_ln1118_163_fu_5000032_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_568_fu_5081837_p2() {
    add_ln703_568_fu_5081837_p2 = (!add_ln703_566_fu_5081828_p2.read().is_01() || !sext_ln703_373_fu_5081834_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_566_fu_5081828_p2.read()) + sc_bigint<14>(sext_ln703_373_fu_5081834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_569_fu_5057591_p2() {
    add_ln703_569_fu_5057591_p2 = (!zext_ln1118_1624_fu_5000056_p1.read().is_01() || !sext_ln1118_168_fu_5000180_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1624_fu_5000056_p1.read()) + sc_bigint<12>(sext_ln1118_168_fu_5000180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_56_fu_5054021_p2() {
    add_ln703_56_fu_5054021_p2 = (!zext_ln203_3_fu_4990421_p1.read().is_01() || !sext_ln703_41_fu_5054017_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_3_fu_4990421_p1.read()) + sc_bigint<12>(sext_ln703_41_fu_5054017_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_570_fu_5057597_p2() {
    add_ln703_570_fu_5057597_p2 = (!trunc_ln708_1174_fu_5000092_p4.read().is_01() || !zext_ln1118_1698_fu_5000080_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln708_1174_fu_5000092_p4.read()) + sc_biguint<10>(zext_ln1118_1698_fu_5000080_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_571_fu_5057607_p2() {
    add_ln703_571_fu_5057607_p2 = (!add_ln703_569_fu_5057591_p2.read().is_01() || !zext_ln703_116_fu_5057603_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_569_fu_5057591_p2.read()) + sc_biguint<12>(zext_ln703_116_fu_5057603_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_572_fu_5081850_p2() {
    add_ln703_572_fu_5081850_p2 = (!sext_ln703_374_fu_5081843_p1.read().is_01() || !sext_ln703_377_fu_5081847_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_374_fu_5081843_p1.read()) + sc_bigint<15>(sext_ln703_377_fu_5081847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_573_fu_5057613_p2() {
    add_ln703_573_fu_5057613_p2 = (!sext_ln1118_166_fu_5000140_p1.read().is_01() || !zext_ln708_1140_fu_5000126_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_166_fu_5000140_p1.read()) + sc_biguint<11>(zext_ln708_1140_fu_5000126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_574_fu_5057623_p2() {
    add_ln703_574_fu_5057623_p2 = (!zext_ln1118_1625_fu_5000122_p1.read().is_01() || !sext_ln708_43_fu_5000160_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_1625_fu_5000122_p1.read()) + sc_bigint<11>(sext_ln708_43_fu_5000160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_575_fu_5057633_p2() {
    add_ln703_575_fu_5057633_p2 = (!sext_ln703_378_fu_5057619_p1.read().is_01() || !sext_ln703_379_fu_5057629_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_378_fu_5057619_p1.read()) + sc_bigint<12>(sext_ln703_379_fu_5057629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_576_fu_5057639_p2() {
    add_ln703_576_fu_5057639_p2 = (!sext_ln708_42_fu_5000084_p1.read().is_01() || !sext_ln203_15_fu_4991905_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_42_fu_5000084_p1.read()) + sc_bigint<10>(sext_ln203_15_fu_4991905_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_577_fu_5057649_p2() {
    add_ln703_577_fu_5057649_p2 = (!zext_ln708_1103_fu_4996808_p1.read().is_01() || !zext_ln708_1087_fu_4996136_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1103_fu_4996808_p1.read()) + sc_biguint<8>(zext_ln708_1087_fu_4996136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_578_fu_5057659_p2() {
    add_ln703_578_fu_5057659_p2 = (!sext_ln703_380_fu_5057645_p1.read().is_01() || !zext_ln703_117_fu_5057655_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_380_fu_5057645_p1.read()) + sc_biguint<11>(zext_ln703_117_fu_5057655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_579_fu_5057669_p2() {
    add_ln703_579_fu_5057669_p2 = (!add_ln703_575_fu_5057633_p2.read().is_01() || !sext_ln703_383_fu_5057665_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_575_fu_5057633_p2.read()) + sc_bigint<12>(sext_ln703_383_fu_5057665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_57_fu_5054031_p2() {
    add_ln703_57_fu_5054031_p2 = (!sext_ln203_7_fu_4990407_p1.read().is_01() || !sext_ln203_6_fu_4990323_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_7_fu_4990407_p1.read()) + sc_bigint<10>(sext_ln203_6_fu_4990323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_580_fu_5081859_p2() {
    add_ln703_580_fu_5081859_p2 = (!add_ln703_572_fu_5081850_p2.read().is_01() || !sext_ln703_384_fu_5081856_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_572_fu_5081850_p2.read()) + sc_bigint<15>(sext_ln703_384_fu_5081856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_581_fu_5081865_p2() {
    add_ln703_581_fu_5081865_p2 = (!zext_ln203_37_fu_5080265_p1.read().is_01() || !add_ln703_580_fu_5081859_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_37_fu_5080265_p1.read()) + sc_biguint<15>(add_ln703_580_fu_5081859_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_582_fu_5057675_p2() {
    add_ln703_582_fu_5057675_p2 = (!sext_ln203_109_fu_5000208_p1.read().is_01() || !sext_ln203_108_fu_5000204_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_109_fu_5000208_p1.read()) + sc_bigint<11>(sext_ln203_108_fu_5000204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_584_fu_5057681_p2() {
    add_ln703_584_fu_5057681_p2 = (!sext_ln203_110_fu_5000252_p1.read().is_01() || !ap_const_lv12_F40.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_110_fu_5000252_p1.read()) + sc_bigint<12>(ap_const_lv12_F40));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_585_fu_5057691_p2() {
    add_ln703_585_fu_5057691_p2 = (!sext_ln1118_171_fu_5000256_p1.read().is_01() || !sext_ln1118_172_fu_5000260_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_171_fu_5000256_p1.read()) + sc_bigint<12>(sext_ln1118_172_fu_5000260_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_586_fu_5057701_p2() {
    add_ln703_586_fu_5057701_p2 = (!sext_ln703_74_fu_5057687_p1.read().is_01() || !sext_ln703_387_fu_5057697_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_74_fu_5057687_p1.read()) + sc_bigint<13>(sext_ln703_387_fu_5057697_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_587_fu_5057707_p2() {
    add_ln703_587_fu_5057707_p2 = (!zext_ln708_234_fu_5000288_p1.read().is_01() || !add_ln703_586_fu_5057701_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_234_fu_5000288_p1.read()) + sc_biguint<13>(add_ln703_586_fu_5057701_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_588_fu_5057713_p2() {
    add_ln703_588_fu_5057713_p2 = (!zext_ln708_986_fu_4990611_p1.read().is_01() || !zext_ln708_1128_fu_4999504_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_986_fu_4990611_p1.read()) + sc_biguint<10>(zext_ln708_1128_fu_4999504_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_589_fu_5057723_p2() {
    add_ln703_589_fu_5057723_p2 = (!add_ln703_587_fu_5057707_p2.read().is_01() || !zext_ln703_118_fu_5057719_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_587_fu_5057707_p2.read()) + sc_biguint<13>(zext_ln703_118_fu_5057719_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_58_fu_5054041_p2() {
    add_ln703_58_fu_5054041_p2 = (!sext_ln203_4_fu_4990245_p1.read().is_01() || !zext_ln708_983_fu_4990185_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_4_fu_4990245_p1.read()) + sc_biguint<8>(zext_ln708_983_fu_4990185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_590_fu_5057729_p2() {
    add_ln703_590_fu_5057729_p2 = (!zext_ln708_230_fu_5000284_p1.read().is_01() || !sext_ln708_44_fu_5000280_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_230_fu_5000284_p1.read()) + sc_bigint<11>(sext_ln708_44_fu_5000280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_591_fu_5057735_p2() {
    add_ln703_591_fu_5057735_p2 = (!sext_ln1118_173_fu_5000312_p1.read().is_01() || !zext_ln708_997_fu_4991517_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_173_fu_5000312_p1.read()) + sc_biguint<8>(zext_ln708_997_fu_4991517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_592_fu_5057745_p2() {
    add_ln703_592_fu_5057745_p2 = (!sext_ln1118_174_fu_5000332_p1.read().is_01() || !sext_ln703_388_fu_5057741_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_174_fu_5000332_p1.read()) + sc_bigint<9>(sext_ln703_388_fu_5057741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_593_fu_5057755_p2() {
    add_ln703_593_fu_5057755_p2 = (!add_ln703_590_fu_5057729_p2.read().is_01() || !sext_ln703_390_fu_5057751_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_590_fu_5057729_p2.read()) + sc_bigint<11>(sext_ln703_390_fu_5057751_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_594_fu_5057765_p2() {
    add_ln703_594_fu_5057765_p2 = (!add_ln703_589_fu_5057723_p2.read().is_01() || !sext_ln703_391_fu_5057761_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_589_fu_5057723_p2.read()) + sc_bigint<13>(sext_ln703_391_fu_5057761_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_595_fu_5081887_p2() {
    add_ln703_595_fu_5081887_p2 = (!sext_ln203_111_fu_5080268_p1.read().is_01() || !sext_ln703_392_fu_5081884_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_111_fu_5080268_p1.read()) + sc_bigint<14>(sext_ln703_392_fu_5081884_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_596_fu_5057771_p2() {
    add_ln703_596_fu_5057771_p2 = (!zext_ln1118_1697_fu_5000076_p1.read().is_01() || !zext_ln1118_1700_fu_5000420_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1697_fu_5000076_p1.read()) + sc_biguint<9>(zext_ln1118_1700_fu_5000420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_597_fu_5081896_p2() {
    add_ln703_597_fu_5081896_p2 = (!add_ln703_595_fu_5081887_p2.read().is_01() || !zext_ln703_119_fu_5081893_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_595_fu_5081887_p2.read()) + sc_biguint<14>(zext_ln703_119_fu_5081893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_598_fu_5057777_p2() {
    add_ln703_598_fu_5057777_p2 = (!zext_ln1118_1692_fu_4999140_p1.read().is_01() || !zext_ln1118_1701_fu_5000440_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1692_fu_4999140_p1.read()) + sc_biguint<10>(zext_ln1118_1701_fu_5000440_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_599_fu_5057787_p2() {
    add_ln703_599_fu_5057787_p2 = (!sext_ln708_46_fu_5000396_p1.read().is_01() || !zext_ln1118_1689_fu_5000494_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_46_fu_5000396_p1.read()) + sc_biguint<12>(zext_ln1118_1689_fu_5000494_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_59_fu_5054051_p2() {
    add_ln703_59_fu_5054051_p2 = (!sext_ln703_43_fu_5054037_p1.read().is_01() || !sext_ln703_47_fu_5054047_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_43_fu_5054037_p1.read()) + sc_bigint<11>(sext_ln703_47_fu_5054047_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_5_fu_5053715_p2() {
    add_ln703_5_fu_5053715_p2 = (!sext_ln1118_fu_4988456_p1.read().is_01() || !sext_ln703_9_fu_5053711_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_fu_4988456_p1.read()) + sc_bigint<11>(sext_ln703_9_fu_5053711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_600_fu_5057793_p2() {
    add_ln703_600_fu_5057793_p2 = (!zext_ln703_120_fu_5057783_p1.read().is_01() || !add_ln703_599_fu_5057787_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_120_fu_5057783_p1.read()) + sc_biguint<12>(add_ln703_599_fu_5057787_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_601_fu_5081905_p2() {
    add_ln703_601_fu_5081905_p2 = (!add_ln703_597_fu_5081896_p2.read().is_01() || !sext_ln703_393_fu_5081902_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_597_fu_5081896_p2.read()) + sc_bigint<14>(sext_ln703_393_fu_5081902_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_602_fu_5057799_p2() {
    add_ln703_602_fu_5057799_p2 = (!sext_ln708_45_fu_5000362_p1.read().is_01() || !sext_ln1118_177_fu_5000514_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_45_fu_5000362_p1.read()) + sc_bigint<11>(sext_ln1118_177_fu_5000514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_603_fu_5057809_p2() {
    add_ln703_603_fu_5057809_p2 = (!sext_ln708_47_fu_5000460_p1.read().is_01() || !sext_ln1118_176_fu_5000382_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_47_fu_5000460_p1.read()) + sc_bigint<10>(sext_ln1118_176_fu_5000382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_604_fu_5057819_p2() {
    add_ln703_604_fu_5057819_p2 = (!sext_ln703_395_fu_5057805_p1.read().is_01() || !sext_ln703_396_fu_5057815_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_395_fu_5057805_p1.read()) + sc_bigint<12>(sext_ln703_396_fu_5057815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_605_fu_5057829_p2() {
    add_ln703_605_fu_5057829_p2 = (!zext_ln708_227_fu_5000088_p1.read().is_01() || !zext_ln1118_1567_fu_4999556_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_227_fu_5000088_p1.read()) + sc_biguint<10>(zext_ln1118_1567_fu_4999556_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_606_fu_5057835_p2() {
    add_ln703_606_fu_5057835_p2 = (!zext_ln708_31_fu_4989373_p1.read().is_01() || !zext_ln708_238_fu_5000474_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_31_fu_4989373_p1.read()) + sc_biguint<9>(zext_ln708_238_fu_5000474_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_607_fu_5057845_p2() {
    add_ln703_607_fu_5057845_p2 = (!add_ln703_605_fu_5057829_p2.read().is_01() || !zext_ln703_121_fu_5057841_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_605_fu_5057829_p2.read()) + sc_biguint<10>(zext_ln703_121_fu_5057841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_608_fu_5057855_p2() {
    add_ln703_608_fu_5057855_p2 = (!sext_ln703_397_fu_5057825_p1.read().is_01() || !zext_ln703_122_fu_5057851_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_397_fu_5057825_p1.read()) + sc_biguint<13>(zext_ln703_122_fu_5057851_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_609_fu_5081918_p2() {
    add_ln703_609_fu_5081918_p2 = (!sext_ln703_394_fu_5081911_p1.read().is_01() || !sext_ln703_398_fu_5081915_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_394_fu_5081911_p1.read()) + sc_bigint<15>(sext_ln703_398_fu_5081915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_60_fu_5054061_p2() {
    add_ln703_60_fu_5054061_p2 = (!sext_ln703_42_fu_5054027_p1.read().is_01() || !sext_ln703_48_fu_5054057_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_42_fu_5054027_p1.read()) + sc_bigint<13>(sext_ln703_48_fu_5054057_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_610_fu_5081924_p2() {
    add_ln703_610_fu_5081924_p2 = (!sext_ln203_114_fu_5080274_p1.read().is_01() || !sext_ln203_113_fu_5080271_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_114_fu_5080274_p1.read()) + sc_bigint<12>(sext_ln203_113_fu_5080271_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_611_fu_5081934_p2() {
    add_ln703_611_fu_5081934_p2 = (!add_ln703_609_fu_5081918_p2.read().is_01() || !sext_ln703_399_fu_5081930_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_609_fu_5081918_p2.read()) + sc_bigint<15>(sext_ln703_399_fu_5081930_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_612_fu_5057861_p2() {
    add_ln703_612_fu_5057861_p2 = (!sext_ln203_115_fu_5000578_p1.read().is_01() || !sext_ln203_112_fu_5000534_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln203_115_fu_5000578_p1.read()) + sc_bigint<7>(sext_ln203_112_fu_5000534_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_613_fu_5057871_p2() {
    add_ln703_613_fu_5057871_p2 = (!zext_ln203_38_fu_5000558_p1.read().is_01() || !sext_ln703_400_fu_5057867_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_38_fu_5000558_p1.read()) + sc_bigint<9>(sext_ln703_400_fu_5057867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_615_fu_5057877_p2() {
    add_ln703_615_fu_5057877_p2 = (!sext_ln1118_179_fu_5000602_p1.read().is_01() || !ap_const_lv11_700.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_179_fu_5000602_p1.read()) + sc_bigint<11>(ap_const_lv11_700));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_616_fu_5057887_p2() {
    add_ln703_616_fu_5057887_p2 = (!zext_ln1118_1704_fu_5000636_p1.read().is_01() || !sext_ln708_48_fu_5000650_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1704_fu_5000636_p1.read()) + sc_bigint<12>(sext_ln708_48_fu_5000650_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_617_fu_5057893_p2() {
    add_ln703_617_fu_5057893_p2 = (!sext_ln703_404_fu_5057883_p1.read().is_01() || !add_ln703_616_fu_5057887_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_404_fu_5057883_p1.read()) + sc_biguint<12>(add_ln703_616_fu_5057887_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_618_fu_5057903_p2() {
    add_ln703_618_fu_5057903_p2 = (!zext_ln708_8_fu_4988464_p1.read().is_01() || !zext_ln708_82_fu_4993436_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_8_fu_4988464_p1.read()) + sc_biguint<9>(zext_ln708_82_fu_4993436_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_619_fu_5057913_p2() {
    add_ln703_619_fu_5057913_p2 = (!sext_ln1118_181_fu_5000632_p1.read().is_01() || !zext_ln703_123_fu_5057909_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_181_fu_5000632_p1.read()) + sc_biguint<11>(zext_ln703_123_fu_5057909_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_620_fu_5057923_p2() {
    add_ln703_620_fu_5057923_p2 = (!sext_ln703_405_fu_5057899_p1.read().is_01() || !sext_ln703_406_fu_5057919_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_405_fu_5057899_p1.read()) + sc_bigint<13>(sext_ln703_406_fu_5057919_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_621_fu_5057933_p2() {
    add_ln703_621_fu_5057933_p2 = (!sext_ln1118_185_fu_5000778_p1.read().is_01() || !sext_ln1118_183_fu_5000680_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_185_fu_5000778_p1.read()) + sc_bigint<12>(sext_ln1118_183_fu_5000680_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_622_fu_5057943_p2() {
    add_ln703_622_fu_5057943_p2 = (!sext_ln703_79_fu_5057929_p1.read().is_01() || !sext_ln703_407_fu_5057939_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_79_fu_5057929_p1.read()) + sc_bigint<14>(sext_ln703_407_fu_5057939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_623_fu_5057949_p2() {
    add_ln703_623_fu_5057949_p2 = (!zext_ln1118_1705_fu_5000720_p1.read().is_01() || !zext_ln1116_208_fu_5000700_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1705_fu_5000720_p1.read()) + sc_biguint<10>(zext_ln1116_208_fu_5000700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_624_fu_5057959_p2() {
    add_ln703_624_fu_5057959_p2 = (!sext_ln1116_12_fu_5000764_p1.read().is_01() || !zext_ln708_1141_fu_5000734_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_12_fu_5000764_p1.read()) + sc_biguint<11>(zext_ln708_1141_fu_5000734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_625_fu_5057969_p2() {
    add_ln703_625_fu_5057969_p2 = (!zext_ln703_124_fu_5057955_p1.read().is_01() || !sext_ln703_408_fu_5057965_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_124_fu_5057955_p1.read()) + sc_bigint<12>(sext_ln703_408_fu_5057965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_626_fu_5081956_p2() {
    add_ln703_626_fu_5081956_p2 = (!add_ln703_622_reg_5091109.read().is_01() || !sext_ln703_409_fu_5081953_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_622_reg_5091109.read()) + sc_bigint<14>(sext_ln703_409_fu_5081953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_627_fu_5057975_p2() {
    add_ln703_627_fu_5057975_p2 = (!sext_ln1118_187_fu_5000829_p1.read().is_01() || !sext_ln1118_17_fu_4989955_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_187_fu_5000829_p1.read()) + sc_bigint<12>(sext_ln1118_17_fu_4989955_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_628_fu_5081964_p2() {
    add_ln703_628_fu_5081964_p2 = (!add_ln703_626_fu_5081956_p2.read().is_01() || !sext_ln703_411_fu_5081961_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_626_fu_5081956_p2.read()) + sc_bigint<14>(sext_ln703_411_fu_5081961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_629_fu_5057981_p2() {
    add_ln703_629_fu_5057981_p2 = (!zext_ln203_505_fu_4992572_p1.read().is_01() || !zext_ln1118_1699_fu_5000416_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_505_fu_4992572_p1.read()) + sc_biguint<10>(zext_ln1118_1699_fu_5000416_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_62_fu_5054067_p2() {
    add_ln703_62_fu_5054067_p2 = (!sext_ln1118_24_fu_4990477_p1.read().is_01() || !ap_const_lv11_7E0.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_24_fu_4990477_p1.read()) + sc_bigint<11>(ap_const_lv11_7E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_630_fu_5057991_p2() {
    add_ln703_630_fu_5057991_p2 = (!sext_ln1116_15_fu_5000833_p1.read().is_01() || !zext_ln703_125_fu_5057987_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_15_fu_5000833_p1.read()) + sc_biguint<12>(zext_ln703_125_fu_5057987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_631_fu_5081977_p2() {
    add_ln703_631_fu_5081977_p2 = (!sext_ln703_412_fu_5081970_p1.read().is_01() || !sext_ln703_413_fu_5081974_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_412_fu_5081970_p1.read()) + sc_bigint<15>(sext_ln703_413_fu_5081974_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_632_fu_5057997_p2() {
    add_ln703_632_fu_5057997_p2 = (!zext_ln1118_976_fu_4996082_p1.read().is_01() || !sext_ln1116_13_fu_5000782_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_976_fu_4996082_p1.read()) + sc_bigint<9>(sext_ln1116_13_fu_5000782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_633_fu_5058007_p2() {
    add_ln703_633_fu_5058007_p2 = (!sext_ln1116_14_fu_5000810_p1.read().is_01() || !sext_ln703_414_fu_5058003_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_14_fu_5000810_p1.read()) + sc_bigint<10>(sext_ln703_414_fu_5058003_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_634_fu_5058017_p2() {
    add_ln703_634_fu_5058017_p2 = (!sext_ln1118_127_fu_4997855_p1.read().is_01() || !sext_ln708_50_fu_5000806_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_127_fu_4997855_p1.read()) + sc_bigint<8>(sext_ln708_50_fu_5000806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_635_fu_5058027_p2() {
    add_ln703_635_fu_5058027_p2 = (!zext_ln708_70_fu_4992526_p1.read().is_01() || !sext_ln703_416_fu_5058023_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_70_fu_4992526_p1.read()) + sc_bigint<10>(sext_ln703_416_fu_5058023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_636_fu_5058037_p2() {
    add_ln703_636_fu_5058037_p2 = (!sext_ln703_415_fu_5058013_p1.read().is_01() || !sext_ln703_417_fu_5058033_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_415_fu_5058013_p1.read()) + sc_bigint<11>(sext_ln703_417_fu_5058033_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_637_fu_5081986_p2() {
    add_ln703_637_fu_5081986_p2 = (!add_ln703_631_fu_5081977_p2.read().is_01() || !sext_ln703_418_fu_5081983_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_631_fu_5081977_p2.read()) + sc_bigint<15>(sext_ln703_418_fu_5081983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_638_fu_5081992_p2() {
    add_ln703_638_fu_5081992_p2 = (!zext_ln203_39_fu_5080277_p1.read().is_01() || !add_ln703_637_fu_5081986_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_39_fu_5080277_p1.read()) + sc_biguint<15>(add_ln703_637_fu_5081986_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_639_fu_5058043_p2() {
    add_ln703_639_fu_5058043_p2 = (!zext_ln203_536_fu_5000909_p1.read().is_01() || !zext_ln203_535_fu_5000871_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_536_fu_5000909_p1.read()) + sc_biguint<9>(zext_ln203_535_fu_5000871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_63_fu_5054077_p2() {
    add_ln703_63_fu_5054077_p2 = (!zext_ln708_46_fu_4990569_p1.read().is_01() || !sext_ln1118_27_fu_4990533_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_46_fu_4990569_p1.read()) + sc_bigint<12>(sext_ln1118_27_fu_4990533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_640_fu_5082001_p2() {
    add_ln703_640_fu_5082001_p2 = (!add_ln703_638_fu_5081992_p2.read().is_01() || !zext_ln703_126_fu_5081998_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_638_fu_5081992_p2.read()) + sc_biguint<15>(zext_ln703_126_fu_5081998_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_641_fu_5058049_p2() {
    add_ln703_641_fu_5058049_p2 = (!tmp_1059_fu_4997525_p4.read().is_01() || !zext_ln203_537_fu_5000929_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_1059_fu_4997525_p4.read()) + sc_biguint<10>(zext_ln203_537_fu_5000929_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_642_fu_5058059_p2() {
    add_ln703_642_fu_5058059_p2 = (!sext_ln203_116_fu_5000837_p1.read().is_01() || !sext_ln203_117_fu_5000867_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_116_fu_5000837_p1.read()) + sc_bigint<10>(sext_ln203_117_fu_5000867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_643_fu_5058069_p2() {
    add_ln703_643_fu_5058069_p2 = (!sext_ln203_118_fu_5000885_p1.read().is_01() || !sext_ln703_419_fu_5058065_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_118_fu_5000885_p1.read()) + sc_bigint<11>(sext_ln703_419_fu_5058065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_644_fu_5058079_p2() {
    add_ln703_644_fu_5058079_p2 = (!zext_ln703_127_fu_5058055_p1.read().is_01() || !sext_ln703_420_fu_5058075_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_127_fu_5058055_p1.read()) + sc_bigint<12>(sext_ln703_420_fu_5058075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_646_fu_5058085_p2() {
    add_ln703_646_fu_5058085_p2 = (!trunc_ln203_5_fu_5000943_p4.read().is_01() || !ap_const_lv9_120.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_5_fu_5000943_p4.read()) + sc_bigint<9>(ap_const_lv9_120));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_647_fu_5058095_p2() {
    add_ln703_647_fu_5058095_p2 = (!zext_ln203_41_fu_5000967_p1.read().is_01() || !sext_ln703_82_fu_5058091_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_41_fu_5000967_p1.read()) + sc_bigint<10>(sext_ln703_82_fu_5058091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_648_fu_5058101_p2() {
    add_ln703_648_fu_5058101_p2 = (!zext_ln203_538_fu_5000991_p1.read().is_01() || !add_ln703_647_fu_5058095_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_538_fu_5000991_p1.read()) + sc_biguint<10>(add_ln703_647_fu_5058095_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_649_fu_5058111_p2() {
    add_ln703_649_fu_5058111_p2 = (!sext_ln1118_189_fu_5001005_p1.read().is_01() || !sext_ln703_423_fu_5058107_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_189_fu_5001005_p1.read()) + sc_bigint<11>(sext_ln703_423_fu_5058107_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_64_fu_5054083_p2() {
    add_ln703_64_fu_5054083_p2 = (!sext_ln703_52_fu_5054073_p1.read().is_01() || !add_ln703_63_fu_5054077_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_52_fu_5054073_p1.read()) + sc_biguint<12>(add_ln703_63_fu_5054077_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_650_fu_5058121_p2() {
    add_ln703_650_fu_5058121_p2 = (!zext_ln1118_1709_fu_5001023_p1.read().is_01() || !sext_ln703_424_fu_5058117_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1709_fu_5001023_p1.read()) + sc_bigint<12>(sext_ln703_424_fu_5058117_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_651_fu_5058127_p2() {
    add_ln703_651_fu_5058127_p2 = (!zext_ln1118_1708_fu_5001009_p1.read().is_01() || !sext_ln708_fu_4988540_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1708_fu_5001009_p1.read()) + sc_bigint<9>(sext_ln708_fu_4988540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_652_fu_5058137_p2() {
    add_ln703_652_fu_5058137_p2 = (!sext_ln1118_91_fu_4995886_p1.read().is_01() || !sext_ln703_426_fu_5058133_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_91_fu_4995886_p1.read()) + sc_bigint<11>(sext_ln703_426_fu_5058133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_653_fu_5082026_p2() {
    add_ln703_653_fu_5082026_p2 = (!sext_ln703_425_fu_5082020_p1.read().is_01() || !sext_ln703_427_fu_5082023_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_425_fu_5082020_p1.read()) + sc_bigint<13>(sext_ln703_427_fu_5082023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_654_fu_5082032_p2() {
    add_ln703_654_fu_5082032_p2 = (!zext_ln203_42_fu_5080280_p1.read().is_01() || !add_ln703_653_fu_5082026_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln203_42_fu_5080280_p1.read()) + sc_biguint<13>(add_ln703_653_fu_5082026_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_655_fu_5058143_p2() {
    add_ln703_655_fu_5058143_p2 = (!zext_ln1118_1711_fu_5001051_p1.read().is_01() || !zext_ln708_1145_fu_5001047_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1711_fu_5001051_p1.read()) + sc_biguint<10>(zext_ln708_1145_fu_5001047_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_656_fu_5058153_p2() {
    add_ln703_656_fu_5058153_p2 = (!sext_ln708_14_fu_4993104_p1.read().is_01() || !zext_ln703_128_fu_5058149_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_14_fu_4993104_p1.read()) + sc_biguint<12>(zext_ln703_128_fu_5058149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_657_fu_5082045_p2() {
    add_ln703_657_fu_5082045_p2 = (!sext_ln703_431_fu_5082038_p1.read().is_01() || !sext_ln703_432_fu_5082042_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_431_fu_5082038_p1.read()) + sc_bigint<14>(sext_ln703_432_fu_5082042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_658_fu_5058159_p2() {
    add_ln703_658_fu_5058159_p2 = (!trunc_ln1118_17_fu_5001083_p4.read().is_01() || !zext_ln708_1147_fu_5001075_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_17_fu_5001083_p4.read()) + sc_biguint<10>(zext_ln708_1147_fu_5001075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_659_fu_5058169_p2() {
    add_ln703_659_fu_5058169_p2 = (!sext_ln1118_191_fu_5001113_p1.read().is_01() || !zext_ln1118_1712_fu_5001079_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_191_fu_5001113_p1.read()) + sc_biguint<9>(zext_ln1118_1712_fu_5001079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_65_fu_5054093_p2() {
    add_ln703_65_fu_5054093_p2 = (!zext_ln708_47_fu_4990587_p1.read().is_01() || !sext_ln1118_26_fu_4990519_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_47_fu_4990587_p1.read()) + sc_bigint<10>(sext_ln1118_26_fu_4990519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_660_fu_5058179_p2() {
    add_ln703_660_fu_5058179_p2 = (!zext_ln708_167_fu_4998976_p1.read().is_01() || !sext_ln703_434_fu_5058175_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_167_fu_4998976_p1.read()) + sc_bigint<10>(sext_ln703_434_fu_5058175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_661_fu_5058189_p2() {
    add_ln703_661_fu_5058189_p2 = (!zext_ln703_129_fu_5058165_p1.read().is_01() || !sext_ln703_435_fu_5058185_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_129_fu_5058165_p1.read()) + sc_bigint<12>(sext_ln703_435_fu_5058185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_662_fu_5082054_p2() {
    add_ln703_662_fu_5082054_p2 = (!add_ln703_657_fu_5082045_p2.read().is_01() || !sext_ln703_436_fu_5082051_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_657_fu_5082045_p2.read()) + sc_bigint<14>(sext_ln703_436_fu_5082051_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_663_fu_5058195_p2() {
    add_ln703_663_fu_5058195_p2 = (!sext_ln1118_196_fu_5001255_p1.read().is_01() || !sext_ln1118_194_fu_5001193_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_196_fu_5001255_p1.read()) + sc_bigint<12>(sext_ln1118_194_fu_5001193_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_664_fu_5082063_p2() {
    add_ln703_664_fu_5082063_p2 = (!add_ln703_662_fu_5082054_p2.read().is_01() || !sext_ln703_437_fu_5082060_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_662_fu_5082054_p2.read()) + sc_bigint<14>(sext_ln703_437_fu_5082060_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_665_fu_5058201_p2() {
    add_ln703_665_fu_5058201_p2 = (!zext_ln1118_1715_fu_5001179_p1.read().is_01() || !zext_ln1118_1714_fu_5001159_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1715_fu_5001179_p1.read()) + sc_biguint<10>(zext_ln1118_1714_fu_5001159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_666_fu_5058211_p2() {
    add_ln703_666_fu_5058211_p2 = (!zext_ln708_1148_fu_5001141_p1.read().is_01() || !zext_ln703_130_fu_5058207_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1148_fu_5001141_p1.read()) + sc_biguint<11>(zext_ln703_130_fu_5058207_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_667_fu_5082076_p2() {
    add_ln703_667_fu_5082076_p2 = (!sext_ln703_438_fu_5082069_p1.read().is_01() || !zext_ln703_131_fu_5082073_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_438_fu_5082069_p1.read()) + sc_biguint<15>(zext_ln703_131_fu_5082073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_668_fu_5058217_p2() {
    add_ln703_668_fu_5058217_p2 = (!sext_ln708_53_fu_5001127_p1.read().is_01() || !zext_ln708_1149_fu_5001217_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_53_fu_5001127_p1.read()) + sc_biguint<11>(zext_ln708_1149_fu_5001217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_669_fu_5058227_p2() {
    add_ln703_669_fu_5058227_p2 = (!zext_ln1118_1716_fu_5001213_p1.read().is_01() || !sext_ln703_439_fu_5058223_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1716_fu_5001213_p1.read()) + sc_bigint<12>(sext_ln703_439_fu_5058223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_66_fu_5054099_p2() {
    add_ln703_66_fu_5054099_p2 = (!zext_ln708_986_fu_4990611_p1.read().is_01() || !add_ln703_65_fu_5054093_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_986_fu_4990611_p1.read()) + sc_biguint<10>(add_ln703_65_fu_5054093_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_670_fu_5058233_p2() {
    add_ln703_670_fu_5058233_p2 = (!sext_ln1118_193_fu_5001145_p1.read().is_01() || !zext_ln708_1139_fu_5000118_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_193_fu_5001145_p1.read()) + sc_biguint<10>(zext_ln708_1139_fu_5000118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_671_fu_5058239_p2() {
    add_ln703_671_fu_5058239_p2 = (!sext_ln1118_197_fu_5001279_p1.read().is_01() || !zext_ln708_1150_fu_5001231_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_197_fu_5001279_p1.read()) + sc_biguint<8>(zext_ln708_1150_fu_5001231_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_672_fu_5058249_p2() {
    add_ln703_672_fu_5058249_p2 = (!add_ln703_670_fu_5058233_p2.read().is_01() || !sext_ln703_440_fu_5058245_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_670_fu_5058233_p2.read()) + sc_bigint<10>(sext_ln703_440_fu_5058245_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_673_fu_5058259_p2() {
    add_ln703_673_fu_5058259_p2 = (!add_ln703_669_fu_5058227_p2.read().is_01() || !sext_ln703_441_fu_5058255_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_669_fu_5058227_p2.read()) + sc_bigint<12>(sext_ln703_441_fu_5058255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_674_fu_5082085_p2() {
    add_ln703_674_fu_5082085_p2 = (!add_ln703_667_fu_5082076_p2.read().is_01() || !sext_ln703_442_fu_5082082_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_667_fu_5082076_p2.read()) + sc_bigint<15>(sext_ln703_442_fu_5082082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_675_fu_5058265_p2() {
    add_ln703_675_fu_5058265_p2 = (!zext_ln203_43_fu_5001317_p1.read().is_01() || !sext_ln203_119_fu_5001293_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_43_fu_5001317_p1.read()) + sc_bigint<12>(sext_ln203_119_fu_5001293_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_677_fu_5058271_p2() {
    add_ln703_677_fu_5058271_p2 = (!trunc_ln203_7_fu_5001331_p4.read().is_01() || !ap_const_lv10_300.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_7_fu_5001331_p4.read()) + sc_bigint<10>(ap_const_lv10_300));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_678_fu_5058277_p2() {
    add_ln703_678_fu_5058277_p2 = (!zext_ln1118_1719_fu_5001359_p1.read().is_01() || !zext_ln708_1151_fu_5001341_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1118_1719_fu_5001359_p1.read()) + sc_biguint<6>(zext_ln708_1151_fu_5001341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_679_fu_5058287_p2() {
    add_ln703_679_fu_5058287_p2 = (!add_ln703_677_fu_5058271_p2.read().is_01() || !zext_ln703_132_fu_5058283_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_677_fu_5058271_p2.read()) + sc_biguint<10>(zext_ln703_132_fu_5058283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_67_fu_5054109_p2() {
    add_ln703_67_fu_5054109_p2 = (!sext_ln703_53_fu_5054089_p1.read().is_01() || !sext_ln703_54_fu_5054105_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_53_fu_5054089_p1.read()) + sc_bigint<13>(sext_ln703_54_fu_5054105_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_680_fu_5058297_p2() {
    add_ln703_680_fu_5058297_p2 = (!sext_ln703_88_fu_5058293_p1.read().is_01() || !sext_ln203_120_fu_5001383_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_88_fu_5058293_p1.read()) + sc_bigint<12>(sext_ln203_120_fu_5001383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_681_fu_5058303_p2() {
    add_ln703_681_fu_5058303_p2 = (!zext_ln1118_1609_fu_4999866_p1.read().is_01() || !add_ln703_680_fu_5058297_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1609_fu_4999866_p1.read()) + sc_biguint<12>(add_ln703_680_fu_5058297_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_682_fu_5058313_p2() {
    add_ln703_682_fu_5058313_p2 = (!sext_ln1118_199_fu_5001417_p1.read().is_01() || !sext_ln1118_198_fu_5001403_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_199_fu_5001417_p1.read()) + sc_bigint<9>(sext_ln1118_198_fu_5001403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_683_fu_5058323_p2() {
    add_ln703_683_fu_5058323_p2 = (!sext_ln703_445_fu_5058309_p1.read().is_01() || !sext_ln703_446_fu_5058319_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_445_fu_5058309_p1.read()) + sc_bigint<13>(sext_ln703_446_fu_5058319_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_684_fu_5058329_p2() {
    add_ln703_684_fu_5058329_p2 = (!zext_ln708_208_fu_4999500_p1.read().is_01() || !sext_ln1118_201_fu_5001463_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_208_fu_4999500_p1.read()) + sc_bigint<12>(sext_ln1118_201_fu_5001463_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_685_fu_5058339_p2() {
    add_ln703_685_fu_5058339_p2 = (!add_ln703_683_fu_5058323_p2.read().is_01() || !sext_ln703_447_fu_5058335_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_683_fu_5058323_p2.read()) + sc_bigint<13>(sext_ln703_447_fu_5058335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_686_fu_5058349_p2() {
    add_ln703_686_fu_5058349_p2 = (!zext_ln708_1147_fu_5001075_p1.read().is_01() || !zext_ln1116_185_fu_4988708_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1147_fu_5001075_p1.read()) + sc_biguint<10>(zext_ln1116_185_fu_4988708_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_687_fu_5058359_p2() {
    add_ln703_687_fu_5058359_p2 = (!sext_ln1118_202_fu_5001487_p1.read().is_01() || !sext_ln1118_203_fu_5001501_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_202_fu_5001487_p1.read()) + sc_bigint<11>(sext_ln1118_203_fu_5001501_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_688_fu_5058369_p2() {
    add_ln703_688_fu_5058369_p2 = (!zext_ln703_133_fu_5058355_p1.read().is_01() || !sext_ln703_452_fu_5058365_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_133_fu_5058355_p1.read()) + sc_bigint<12>(sext_ln703_452_fu_5058365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_689_fu_5058379_p2() {
    add_ln703_689_fu_5058379_p2 = (!sext_ln703_451_fu_5058345_p1.read().is_01() || !sext_ln703_455_fu_5058375_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_451_fu_5058345_p1.read()) + sc_bigint<14>(sext_ln703_455_fu_5058375_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_68_fu_5080888_p2() {
    add_ln703_68_fu_5080888_p2 = (!sext_ln1118_28_fu_5080190_p1.read().is_01() || !add_ln703_67_reg_5090624.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_28_fu_5080190_p1.read()) + sc_biguint<13>(add_ln703_67_reg_5090624.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_690_fu_5082104_p2() {
    add_ln703_690_fu_5082104_p2 = (!sext_ln1118_204_fu_5080283_p1.read().is_01() || !add_ln703_689_reg_5091184.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_204_fu_5080283_p1.read()) + sc_biguint<14>(add_ln703_689_reg_5091184.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_691_fu_5058385_p2() {
    add_ln703_691_fu_5058385_p2 = (!sext_ln708_54_fu_5001585_p1.read().is_01() || !sext_ln203_84_fu_4998163_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_54_fu_5001585_p1.read()) + sc_bigint<12>(sext_ln203_84_fu_4998163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_692_fu_5082112_p2() {
    add_ln703_692_fu_5082112_p2 = (!add_ln703_690_fu_5082104_p2.read().is_01() || !sext_ln703_456_fu_5082109_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_690_fu_5082104_p2.read()) + sc_bigint<14>(sext_ln703_456_fu_5082109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_693_fu_5058391_p2() {
    add_ln703_693_fu_5058391_p2 = (!zext_ln1118_1725_fu_5001541_p1.read().is_01() || !zext_ln203_516_fu_4995032_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1725_fu_5001541_p1.read()) + sc_biguint<10>(zext_ln203_516_fu_4995032_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_694_fu_5058401_p2() {
    add_ln703_694_fu_5058401_p2 = (!zext_ln708_1154_fu_5001609_p1.read().is_01() || !zext_ln1118_1726_fu_5001561_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1154_fu_5001609_p1.read()) + sc_biguint<10>(zext_ln1118_1726_fu_5001561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_695_fu_5058411_p2() {
    add_ln703_695_fu_5058411_p2 = (!zext_ln703_134_fu_5058397_p1.read().is_01() || !zext_ln703_135_fu_5058407_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_134_fu_5058397_p1.read()) + sc_biguint<11>(zext_ln703_135_fu_5058407_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_696_fu_5082125_p2() {
    add_ln703_696_fu_5082125_p2 = (!sext_ln703_457_fu_5082118_p1.read().is_01() || !zext_ln703_136_fu_5082122_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_457_fu_5082118_p1.read()) + sc_biguint<15>(zext_ln703_136_fu_5082122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_697_fu_5058417_p2() {
    add_ln703_697_fu_5058417_p2 = (!zext_ln1118_1584_fu_4999608_p1.read().is_01() || !sext_ln708_55_fu_5001657_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_1584_fu_4999608_p1.read()) + sc_bigint<11>(sext_ln708_55_fu_5001657_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_698_fu_5058423_p2() {
    add_ln703_698_fu_5058423_p2 = (!zext_ln708_1155_fu_5001629_p1.read().is_01() || !zext_ln1118_1728_fu_5001589_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1155_fu_5001629_p1.read()) + sc_biguint<8>(zext_ln1118_1728_fu_5001589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_699_fu_5058433_p2() {
    add_ln703_699_fu_5058433_p2 = (!add_ln703_697_fu_5058417_p2.read().is_01() || !zext_ln703_137_fu_5058429_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_697_fu_5058417_p2.read()) + sc_biguint<11>(zext_ln703_137_fu_5058429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_69_fu_5080893_p2() {
    add_ln703_69_fu_5080893_p2 = (!zext_ln1118_1664_fu_5080193_p1.read().is_01() || !zext_ln1118_1663_fu_5080187_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1664_fu_5080193_p1.read()) + sc_biguint<9>(zext_ln1118_1663_fu_5080187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_6_fu_5053725_p2() {
    add_ln703_6_fu_5053725_p2 = (!add_ln703_3_fu_5053699_p2.read().is_01() || !sext_ln703_10_fu_5053721_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3_fu_5053699_p2.read()) + sc_bigint<12>(sext_ln703_10_fu_5053721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_700_fu_5058443_p2() {
    add_ln703_700_fu_5058443_p2 = (!zext_ln203_540_fu_5001671_p1.read().is_01() || !zext_ln1118_1729_fu_5001643_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln203_540_fu_5001671_p1.read()) + sc_biguint<6>(zext_ln1118_1729_fu_5001643_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_701_fu_5058453_p2() {
    add_ln703_701_fu_5058453_p2 = (!sext_ln1118_80_fu_4994376_p1.read().is_01() || !sext_ln1118_147_fu_4999094_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_80_fu_4994376_p1.read()) + sc_bigint<8>(sext_ln1118_147_fu_4999094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_702_fu_5058463_p2() {
    add_ln703_702_fu_5058463_p2 = (!zext_ln1118_1166_fu_4997471_p1.read().is_01() || !sext_ln703_460_fu_5058459_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1166_fu_4997471_p1.read()) + sc_bigint<10>(sext_ln703_460_fu_5058459_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_703_fu_5058469_p2() {
    add_ln703_703_fu_5058469_p2 = (!zext_ln703_138_fu_5058449_p1.read().is_01() || !add_ln703_702_fu_5058463_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_138_fu_5058449_p1.read()) + sc_biguint<10>(add_ln703_702_fu_5058463_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_704_fu_5058479_p2() {
    add_ln703_704_fu_5058479_p2 = (!sext_ln703_459_fu_5058439_p1.read().is_01() || !sext_ln703_461_fu_5058475_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_459_fu_5058439_p1.read()) + sc_bigint<12>(sext_ln703_461_fu_5058475_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_705_fu_5082134_p2() {
    add_ln703_705_fu_5082134_p2 = (!add_ln703_696_fu_5082125_p2.read().is_01() || !sext_ln703_462_fu_5082131_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_696_fu_5082125_p2.read()) + sc_bigint<15>(sext_ln703_462_fu_5082131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_706_fu_5082140_p2() {
    add_ln703_706_fu_5082140_p2 = (!zext_ln203_27_reg_5089871.read().is_01() || !sext_ln203_121_fu_5080286_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_27_reg_5089871.read()) + sc_bigint<12>(sext_ln203_121_fu_5080286_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_708_fu_5058485_p2() {
    add_ln703_708_fu_5058485_p2 = (!tmp_1094_fu_4999776_p4.read().is_01() || !ap_const_lv9_140.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_1094_fu_4999776_p4.read()) + sc_bigint<9>(ap_const_lv9_140));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_709_fu_5058495_p2() {
    add_ln703_709_fu_5058495_p2 = (!sext_ln1118_61_fu_4993418_p1.read().is_01() || !sext_ln703_467_fu_5058491_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_61_fu_4993418_p1.read()) + sc_bigint<10>(sext_ln703_467_fu_5058491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_70_fu_5080903_p2() {
    add_ln703_70_fu_5080903_p2 = (!add_ln703_68_fu_5080888_p2.read().is_01() || !zext_ln703_21_fu_5080899_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_68_fu_5080888_p2.read()) + sc_biguint<13>(zext_ln703_21_fu_5080899_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_710_fu_5058505_p2() {
    add_ln703_710_fu_5058505_p2 = (!sext_ln1118_208_fu_5001675_p1.read().is_01() || !sext_ln708_12_fu_4992898_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_208_fu_5001675_p1.read()) + sc_bigint<11>(sext_ln708_12_fu_4992898_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_711_fu_5058515_p2() {
    add_ln703_711_fu_5058515_p2 = (!sext_ln703_468_fu_5058501_p1.read().is_01() || !sext_ln703_469_fu_5058511_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_468_fu_5058501_p1.read()) + sc_bigint<12>(sext_ln703_469_fu_5058511_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_712_fu_5058525_p2() {
    add_ln703_712_fu_5058525_p2 = (!sext_ln1118_212_fu_5001713_p1.read().is_01() || !sext_ln703_470_fu_5058521_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_212_fu_5001713_p1.read()) + sc_bigint<13>(sext_ln703_470_fu_5058521_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_713_fu_5058531_p2() {
    add_ln703_713_fu_5058531_p2 = (!sext_ln203_64_fu_4997019_p1.read().is_01() || !sext_ln1118_12_fu_4989793_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln203_64_fu_4997019_p1.read()) + sc_bigint<8>(sext_ln1118_12_fu_4989793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_714_fu_5058541_p2() {
    add_ln703_714_fu_5058541_p2 = (!sext_ln1118_210_fu_5001689_p1.read().is_01() || !sext_ln703_471_fu_5058537_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_210_fu_5001689_p1.read()) + sc_bigint<10>(sext_ln703_471_fu_5058537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_715_fu_5082162_p2() {
    add_ln703_715_fu_5082162_p2 = (!add_ln703_712_reg_5091204.read().is_01() || !sext_ln703_473_fu_5082159_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_712_reg_5091204.read()) + sc_bigint<13>(sext_ln703_473_fu_5082159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_716_fu_5082167_p2() {
    add_ln703_716_fu_5082167_p2 = (!sext_ln708_56_fu_5080289_p1.read().is_01() || !add_ln703_715_fu_5082162_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln708_56_fu_5080289_p1.read()) + sc_biguint<13>(add_ln703_715_fu_5082162_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_717_fu_5058547_p2() {
    add_ln703_717_fu_5058547_p2 = (!sext_ln1118_216_fu_5001787_p1.read().is_01() || !sext_ln203_84_fu_4998163_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_216_fu_5001787_p1.read()) + sc_bigint<12>(sext_ln203_84_fu_4998163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_718_fu_5082180_p2() {
    add_ln703_718_fu_5082180_p2 = (!sext_ln703_474_fu_5082173_p1.read().is_01() || !sext_ln703_475_fu_5082177_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_474_fu_5082173_p1.read()) + sc_bigint<14>(sext_ln703_475_fu_5082177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_719_fu_5058553_p2() {
    add_ln703_719_fu_5058553_p2 = (!zext_ln1118_542_fu_4993572_p1.read().is_01() || !sext_ln1118_218_fu_5001833_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_542_fu_4993572_p1.read()) + sc_bigint<12>(sext_ln1118_218_fu_5001833_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_71_fu_5054115_p2() {
    add_ln703_71_fu_5054115_p2 = (!sext_ln708_6_fu_4990643_p1.read().is_01() || !zext_ln708_987_fu_4990815_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_6_fu_4990643_p1.read()) + sc_biguint<11>(zext_ln708_987_fu_4990815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_720_fu_5058563_p2() {
    add_ln703_720_fu_5058563_p2 = (!zext_ln1118_1734_fu_5001847_p1.read().is_01() || !zext_ln1118_1696_fu_5000052_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1734_fu_5001847_p1.read()) + sc_biguint<10>(zext_ln1118_1696_fu_5000052_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_721_fu_5058573_p2() {
    add_ln703_721_fu_5058573_p2 = (!zext_ln708_1156_fu_5001753_p1.read().is_01() || !zext_ln703_139_fu_5058569_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1156_fu_5001753_p1.read()) + sc_biguint<11>(zext_ln703_139_fu_5058569_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_722_fu_5058583_p2() {
    add_ln703_722_fu_5058583_p2 = (!sext_ln703_477_fu_5058559_p1.read().is_01() || !zext_ln703_140_fu_5058579_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_477_fu_5058559_p1.read()) + sc_biguint<13>(zext_ln703_140_fu_5058579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_723_fu_5082193_p2() {
    add_ln703_723_fu_5082193_p2 = (!sext_ln703_476_fu_5082186_p1.read().is_01() || !sext_ln703_478_fu_5082190_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_476_fu_5082186_p1.read()) + sc_bigint<15>(sext_ln703_478_fu_5082190_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_724_fu_5058589_p2() {
    add_ln703_724_fu_5058589_p2 = (!zext_ln708_979_fu_4989313_p1.read().is_01() || !zext_ln708_1159_fu_5001867_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_979_fu_4989313_p1.read()) + sc_biguint<11>(zext_ln708_1159_fu_5001867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_725_fu_5058595_p2() {
    add_ln703_725_fu_5058595_p2 = (!zext_ln708_999_fu_4991659_p1.read().is_01() || !zext_ln1118_1731_fu_5001733_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_999_fu_4991659_p1.read()) + sc_biguint<8>(zext_ln1118_1731_fu_5001733_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_726_fu_5058605_p2() {
    add_ln703_726_fu_5058605_p2 = (!add_ln703_724_fu_5058589_p2.read().is_01() || !zext_ln703_141_fu_5058601_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_724_fu_5058589_p2.read()) + sc_biguint<11>(zext_ln703_141_fu_5058601_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_727_fu_5058615_p2() {
    add_ln703_727_fu_5058615_p2 = (!zext_ln708_978_fu_4989197_p1.read().is_01() || !zext_ln708_1158_fu_5001767_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_978_fu_4989197_p1.read()) + sc_biguint<8>(zext_ln708_1158_fu_5001767_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_728_fu_5058625_p2() {
    add_ln703_728_fu_5058625_p2 = (!sext_ln708_57_fu_5001891_p1.read().is_01() || !sext_ln1118_2_fu_4988630_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_57_fu_5001891_p1.read()) + sc_bigint<8>(sext_ln1118_2_fu_4988630_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_729_fu_5058635_p2() {
    add_ln703_729_fu_5058635_p2 = (!zext_ln708_267_fu_5001905_p1.read().is_01() || !sext_ln703_479_fu_5058631_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_267_fu_5001905_p1.read()) + sc_bigint<9>(sext_ln703_479_fu_5058631_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_72_fu_5054121_p2() {
    add_ln703_72_fu_5054121_p2 = (!zext_ln1118_294_fu_4990657_p1.read().is_01() || !sext_ln1118_29_fu_4990775_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_294_fu_4990657_p1.read()) + sc_bigint<10>(sext_ln1118_29_fu_4990775_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_730_fu_5058645_p2() {
    add_ln703_730_fu_5058645_p2 = (!zext_ln703_143_fu_5058621_p1.read().is_01() || !sext_ln703_480_fu_5058641_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_143_fu_5058621_p1.read()) + sc_bigint<10>(sext_ln703_480_fu_5058641_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_731_fu_5058655_p2() {
    add_ln703_731_fu_5058655_p2 = (!zext_ln703_142_fu_5058611_p1.read().is_01() || !sext_ln703_481_fu_5058651_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_142_fu_5058611_p1.read()) + sc_bigint<12>(sext_ln703_481_fu_5058651_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_732_fu_5082202_p2() {
    add_ln703_732_fu_5082202_p2 = (!add_ln703_723_fu_5082193_p2.read().is_01() || !sext_ln703_482_fu_5082199_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_723_fu_5082193_p2.read()) + sc_bigint<15>(sext_ln703_482_fu_5082199_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_733_fu_5082208_p2() {
    add_ln703_733_fu_5082208_p2 = (!sext_ln203_122_fu_5080292_p1.read().is_01() || !add_ln703_732_fu_5082202_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_122_fu_5080292_p1.read()) + sc_biguint<15>(add_ln703_732_fu_5082202_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_734_fu_5058661_p2() {
    add_ln703_734_fu_5058661_p2 = (!sext_ln203_124_fu_5001953_p1.read().is_01() || !sext_ln1118_168_fu_5000180_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_124_fu_5001953_p1.read()) + sc_bigint<12>(sext_ln1118_168_fu_5000180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_735_fu_5082217_p2() {
    add_ln703_735_fu_5082217_p2 = (!add_ln703_733_fu_5082208_p2.read().is_01() || !sext_ln703_483_fu_5082214_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_733_fu_5082208_p2.read()) + sc_bigint<15>(sext_ln703_483_fu_5082214_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_736_fu_5058667_p2() {
    add_ln703_736_fu_5058667_p2 = (!zext_ln203_539_fu_5001313_p1.read().is_01() || !zext_ln203_541_fu_5001939_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_539_fu_5001313_p1.read()) + sc_biguint<10>(zext_ln203_541_fu_5001939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_737_fu_5058677_p2() {
    add_ln703_737_fu_5058677_p2 = (!zext_ln203_44_fu_5001919_p1.read().is_01() || !sext_ln203_92_fu_4998769_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_44_fu_5001919_p1.read()) + sc_bigint<9>(sext_ln203_92_fu_4998769_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_738_fu_5058687_p2() {
    add_ln703_738_fu_5058687_p2 = (!zext_ln703_144_fu_5058673_p1.read().is_01() || !sext_ln703_484_fu_5058683_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_144_fu_5058673_p1.read()) + sc_bigint<11>(sext_ln703_484_fu_5058683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_73_fu_5054131_p2() {
    add_ln703_73_fu_5054131_p2 = (!add_ln703_71_fu_5054115_p2.read().is_01() || !sext_ln703_56_fu_5054127_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_71_fu_5054115_p2.read()) + sc_bigint<11>(sext_ln703_56_fu_5054127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_740_fu_5058693_p2() {
    add_ln703_740_fu_5058693_p2 = (!sext_ln1118_219_fu_5001967_p1.read().is_01() || !ap_const_lv11_700.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_219_fu_5001967_p1.read()) + sc_bigint<11>(ap_const_lv11_700));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_741_fu_5058699_p2() {
    add_ln703_741_fu_5058699_p2 = (!zext_ln708_1161_fu_5001991_p1.read().is_01() || !add_ln703_740_fu_5058693_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1161_fu_5001991_p1.read()) + sc_biguint<11>(add_ln703_740_fu_5058693_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_742_fu_5058709_p2() {
    add_ln703_742_fu_5058709_p2 = (!sext_ln1118_171_fu_5000256_p1.read().is_01() || !sext_ln1116_17_fu_5002015_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_171_fu_5000256_p1.read()) + sc_bigint<12>(sext_ln1116_17_fu_5002015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_743_fu_5058715_p2() {
    add_ln703_743_fu_5058715_p2 = (!sext_ln703_490_fu_5058705_p1.read().is_01() || !add_ln703_742_fu_5058709_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_490_fu_5058705_p1.read()) + sc_biguint<12>(add_ln703_742_fu_5058709_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_744_fu_5058725_p2() {
    add_ln703_744_fu_5058725_p2 = (!zext_ln708_279_fu_5002073_p1.read().is_01() || !sext_ln703_491_fu_5058721_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_279_fu_5002073_p1.read()) + sc_bigint<13>(sext_ln703_491_fu_5058721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_745_fu_5058731_p2() {
    add_ln703_745_fu_5058731_p2 = (!sext_ln1118_222_fu_5002029_p1.read().is_01() || !zext_ln708_998_fu_4991573_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_222_fu_5002029_p1.read()) + sc_biguint<11>(zext_ln708_998_fu_4991573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_746_fu_5082239_p2() {
    add_ln703_746_fu_5082239_p2 = (!add_ln703_744_reg_5091239.read().is_01() || !sext_ln703_492_fu_5082236_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_744_reg_5091239.read()) + sc_bigint<13>(sext_ln703_492_fu_5082236_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_747_fu_5058737_p2() {
    add_ln703_747_fu_5058737_p2 = (!sext_ln203_36_fu_4994818_p1.read().is_01() || !zext_ln708_986_fu_4990611_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_36_fu_4994818_p1.read()) + sc_biguint<10>(zext_ln708_986_fu_4990611_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_748_fu_5058747_p2() {
    add_ln703_748_fu_5058747_p2 = (!sext_ln1116_18_fu_5002049_p1.read().is_01() || !sext_ln1118_223_fu_5002077_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_18_fu_5002049_p1.read()) + sc_bigint<9>(sext_ln1118_223_fu_5002077_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_749_fu_5058757_p2() {
    add_ln703_749_fu_5058757_p2 = (!sext_ln703_493_fu_5058743_p1.read().is_01() || !sext_ln703_494_fu_5058753_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_493_fu_5058743_p1.read()) + sc_bigint<11>(sext_ln703_494_fu_5058753_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_74_fu_5080916_p2() {
    add_ln703_74_fu_5080916_p2 = (!sext_ln703_55_fu_5080909_p1.read().is_01() || !sext_ln703_57_fu_5080913_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_55_fu_5080909_p1.read()) + sc_bigint<14>(sext_ln703_57_fu_5080913_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_750_fu_5082247_p2() {
    add_ln703_750_fu_5082247_p2 = (!add_ln703_746_fu_5082239_p2.read().is_01() || !sext_ln703_495_fu_5082244_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_746_fu_5082239_p2.read()) + sc_bigint<13>(sext_ln703_495_fu_5082244_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_751_fu_5058763_p2() {
    add_ln703_751_fu_5058763_p2 = (!zext_ln1116_187_fu_4997161_p1.read().is_01() || !zext_ln1118_1739_fu_5002155_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_187_fu_4997161_p1.read()) + sc_biguint<10>(zext_ln1118_1739_fu_5002155_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_752_fu_5082260_p2() {
    add_ln703_752_fu_5082260_p2 = (!sext_ln703_496_fu_5082253_p1.read().is_01() || !zext_ln703_145_fu_5082257_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_496_fu_5082253_p1.read()) + sc_biguint<14>(zext_ln703_145_fu_5082257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_753_fu_5058769_p2() {
    add_ln703_753_fu_5058769_p2 = (!sext_ln1118_225_fu_5002135_p1.read().is_01() || !sext_ln1118_224_fu_5002097_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_225_fu_5002135_p1.read()) + sc_bigint<11>(sext_ln1118_224_fu_5002097_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_754_fu_5058779_p2() {
    add_ln703_754_fu_5058779_p2 = (!zext_ln1118_1740_fu_5002199_p1.read().is_01() || !sext_ln703_497_fu_5058775_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1740_fu_5002199_p1.read()) + sc_bigint<12>(sext_ln703_497_fu_5058775_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_755_fu_5082269_p2() {
    add_ln703_755_fu_5082269_p2 = (!add_ln703_752_fu_5082260_p2.read().is_01() || !sext_ln703_498_fu_5082266_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_752_fu_5082260_p2.read()) + sc_bigint<14>(sext_ln703_498_fu_5082266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_756_fu_5058785_p2() {
    add_ln703_756_fu_5058785_p2 = (!sext_ln1118_52_fu_4992499_p1.read().is_01() || !sext_ln1118_229_fu_5002243_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_52_fu_4992499_p1.read()) + sc_bigint<11>(sext_ln1118_229_fu_5002243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_757_fu_5058795_p2() {
    add_ln703_757_fu_5058795_p2 = (!sext_ln1118_228_fu_5002229_p1.read().is_01() || !sext_ln703_499_fu_5058791_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_228_fu_5002229_p1.read()) + sc_bigint<12>(sext_ln703_499_fu_5058791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_758_fu_5058801_p2() {
    add_ln703_758_fu_5058801_p2 = (!zext_ln1118_1066_fu_4996712_p1.read().is_01() || !sext_ln1118_226_fu_5002175_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1066_fu_4996712_p1.read()) + sc_bigint<9>(sext_ln1118_226_fu_5002175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_759_fu_5058811_p2() {
    add_ln703_759_fu_5058811_p2 = (!sext_ln1116_19_fu_5002111_p1.read().is_01() || !sext_ln703_500_fu_5058807_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_19_fu_5002111_p1.read()) + sc_bigint<10>(sext_ln703_500_fu_5058807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_75_fu_5054137_p2() {
    add_ln703_75_fu_5054137_p2 = (!zext_ln1118_301_fu_4990867_p1.read().is_01() || !sext_ln708_7_fu_4990847_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_301_fu_4990867_p1.read()) + sc_bigint<12>(sext_ln708_7_fu_4990847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_760_fu_5058821_p2() {
    add_ln703_760_fu_5058821_p2 = (!add_ln703_757_fu_5058795_p2.read().is_01() || !sext_ln703_501_fu_5058817_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_757_fu_5058795_p2.read()) + sc_bigint<12>(sext_ln703_501_fu_5058817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_761_fu_5082278_p2() {
    add_ln703_761_fu_5082278_p2 = (!add_ln703_755_fu_5082269_p2.read().is_01() || !sext_ln703_502_fu_5082275_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_755_fu_5082269_p2.read()) + sc_bigint<14>(sext_ln703_502_fu_5082275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_762_fu_5082284_p2() {
    add_ln703_762_fu_5082284_p2 = (!sext_ln203_128_fu_5080295_p1.read().is_01() || !add_ln703_761_fu_5082278_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_128_fu_5080295_p1.read()) + sc_biguint<14>(add_ln703_761_fu_5082278_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_763_fu_5058827_p2() {
    add_ln703_763_fu_5058827_p2 = (!sext_ln203_94_fu_4999192_p1.read().is_01() || !sext_ln203_133_fu_5002365_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_94_fu_4999192_p1.read()) + sc_bigint<11>(sext_ln203_133_fu_5002365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_764_fu_5058837_p2() {
    add_ln703_764_fu_5058837_p2 = (!sext_ln203_129_fu_5002291_p1.read().is_01() || !sext_ln703_506_fu_5058833_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_129_fu_5002291_p1.read()) + sc_bigint<12>(sext_ln703_506_fu_5058833_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_765_fu_5082297_p2() {
    add_ln703_765_fu_5082297_p2 = (!sext_ln703_505_fu_5082290_p1.read().is_01() || !sext_ln703_507_fu_5082294_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_505_fu_5082290_p1.read()) + sc_bigint<15>(sext_ln703_507_fu_5082294_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_766_fu_5058843_p2() {
    add_ln703_766_fu_5058843_p2 = (!sext_ln203_6_fu_4990323_p1.read().is_01() || !sext_ln203_127_fu_5002267_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_6_fu_4990323_p1.read()) + sc_bigint<10>(sext_ln203_127_fu_5002267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_767_fu_5058853_p2() {
    add_ln703_767_fu_5058853_p2 = (!zext_ln203_45_fu_5002325_p1.read().is_01() || !sext_ln203_131_fu_5002311_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_45_fu_5002325_p1.read()) + sc_bigint<9>(sext_ln203_131_fu_5002311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_768_fu_5058863_p2() {
    add_ln703_768_fu_5058863_p2 = (!sext_ln203_132_fu_5002345_p1.read().is_01() || !sext_ln703_511_fu_5058859_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_132_fu_5002345_p1.read()) + sc_bigint<10>(sext_ln703_511_fu_5058859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_769_fu_5058873_p2() {
    add_ln703_769_fu_5058873_p2 = (!sext_ln703_508_fu_5058849_p1.read().is_01() || !sext_ln703_512_fu_5058869_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_508_fu_5058849_p1.read()) + sc_bigint<11>(sext_ln703_512_fu_5058869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_76_fu_5080925_p2() {
    add_ln703_76_fu_5080925_p2 = (!add_ln703_74_fu_5080916_p2.read().is_01() || !sext_ln703_58_fu_5080922_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_74_fu_5080916_p2.read()) + sc_bigint<14>(sext_ln703_58_fu_5080922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_771_fu_5058879_p2() {
    add_ln703_771_fu_5058879_p2 = (!zext_ln708_1162_fu_5002385_p1.read().is_01() || !ap_const_lv11_4A0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1162_fu_5002385_p1.read()) + sc_bigint<11>(ap_const_lv11_4A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_772_fu_5058885_p2() {
    add_ln703_772_fu_5058885_p2 = (!zext_ln1118_1742_fu_5002393_p1.read().is_01() || !trunc_ln1118_18_fu_5002403_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1742_fu_5002393_p1.read()) + sc_biguint<10>(trunc_ln1118_18_fu_5002403_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_773_fu_5058891_p2() {
    add_ln703_773_fu_5058891_p2 = (!zext_ln708_1163_fu_5002389_p1.read().is_01() || !add_ln703_772_fu_5058885_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1163_fu_5002389_p1.read()) + sc_biguint<10>(add_ln703_772_fu_5058885_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_774_fu_5058901_p2() {
    add_ln703_774_fu_5058901_p2 = (!add_ln703_771_fu_5058879_p2.read().is_01() || !zext_ln703_146_fu_5058897_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_771_fu_5058879_p2.read()) + sc_biguint<11>(zext_ln703_146_fu_5058897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_775_fu_5058911_p2() {
    add_ln703_775_fu_5058911_p2 = (!zext_ln1118_1537_fu_4999420_p1.read().is_01() || !sext_ln203_134_fu_5002441_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1537_fu_4999420_p1.read()) + sc_bigint<12>(sext_ln203_134_fu_5002441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_776_fu_5058917_p2() {
    add_ln703_776_fu_5058917_p2 = (!sext_ln703_102_fu_5058907_p1.read().is_01() || !add_ln703_775_fu_5058911_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_102_fu_5058907_p1.read()) + sc_biguint<12>(add_ln703_775_fu_5058911_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_777_fu_5058927_p2() {
    add_ln703_777_fu_5058927_p2 = (!sext_ln203_135_fu_5002465_p1.read().is_01() || !sext_ln703_103_fu_5058923_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_135_fu_5002465_p1.read()) + sc_bigint<13>(sext_ln703_103_fu_5058923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_778_fu_5058933_p2() {
    add_ln703_778_fu_5058933_p2 = (!zext_ln1118_1744_fu_5002479_p1.read().is_01() || !sext_ln708_fu_4988540_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1744_fu_5002479_p1.read()) + sc_bigint<9>(sext_ln708_fu_4988540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_779_fu_5058943_p2() {
    add_ln703_779_fu_5058943_p2 = (!zext_ln708_1164_fu_5002461_p1.read().is_01() || !sext_ln703_515_fu_5058939_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1164_fu_5002461_p1.read()) + sc_bigint<10>(sext_ln703_515_fu_5058939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_77_fu_5054143_p2() {
    add_ln703_77_fu_5054143_p2 = (!zext_ln708_989_fu_4991063_p1.read().is_01() || !zext_ln708_988_fu_4991049_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_989_fu_4991063_p1.read()) + sc_biguint<11>(zext_ln708_988_fu_4991049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_780_fu_5058953_p2() {
    add_ln703_780_fu_5058953_p2 = (!add_ln703_777_fu_5058927_p2.read().is_01() || !sext_ln703_516_fu_5058949_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_777_fu_5058927_p2.read()) + sc_bigint<13>(sext_ln703_516_fu_5058949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_781_fu_5058959_p2() {
    add_ln703_781_fu_5058959_p2 = (!sext_ln1118_236_fu_5002499_p1.read().is_01() || !sext_ln708_1_fu_4988735_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_236_fu_5002499_p1.read()) + sc_bigint<12>(sext_ln708_1_fu_4988735_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_782_fu_5082322_p2() {
    add_ln703_782_fu_5082322_p2 = (!sext_ln703_104_fu_5082316_p1.read().is_01() || !sext_ln703_517_fu_5082319_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_104_fu_5082316_p1.read()) + sc_bigint<14>(sext_ln703_517_fu_5082319_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_783_fu_5058965_p2() {
    add_ln703_783_fu_5058965_p2 = (!sext_ln1116_12_fu_5000764_p1.read().is_01() || !sext_ln1118_16_fu_4989941_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_12_fu_5000764_p1.read()) + sc_bigint<11>(sext_ln1118_16_fu_4989941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_784_fu_5058975_p2() {
    add_ln703_784_fu_5058975_p2 = (!zext_ln1118_1745_fu_5002513_p1.read().is_01() || !sext_ln703_518_fu_5058971_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1745_fu_5002513_p1.read()) + sc_bigint<12>(sext_ln703_518_fu_5058971_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_785_fu_5082331_p2() {
    add_ln703_785_fu_5082331_p2 = (!add_ln703_782_fu_5082322_p2.read().is_01() || !sext_ln703_519_fu_5082328_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_782_fu_5082322_p2.read()) + sc_bigint<14>(sext_ln703_519_fu_5082328_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_786_fu_5058981_p2() {
    add_ln703_786_fu_5058981_p2 = (!zext_ln1118_1747_fu_5002555_p1.read().is_01() || !zext_ln1118_1746_fu_5002531_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1747_fu_5002555_p1.read()) + sc_biguint<10>(zext_ln1118_1746_fu_5002531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_787_fu_5082340_p2() {
    add_ln703_787_fu_5082340_p2 = (!add_ln703_785_fu_5082331_p2.read().is_01() || !zext_ln703_147_fu_5082337_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_785_fu_5082331_p2.read()) + sc_biguint<14>(zext_ln703_147_fu_5082337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_788_fu_5058987_p2() {
    add_ln703_788_fu_5058987_p2 = (!zext_ln1118_1749_fu_5002639_p1.read().is_01() || !trunc_ln1118_19_fu_5002613_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1749_fu_5002639_p1.read()) + sc_biguint<9>(trunc_ln1118_19_fu_5002613_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_789_fu_5058997_p2() {
    add_ln703_789_fu_5058997_p2 = (!zext_ln708_977_fu_4989069_p1.read().is_01() || !zext_ln703_148_fu_5058993_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_977_fu_4989069_p1.read()) + sc_biguint<11>(zext_ln703_148_fu_5058993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_78_fu_5054153_p2() {
    add_ln703_78_fu_5054153_p2 = (!zext_ln708_992_fu_4991187_p1.read().is_01() || !zext_ln708_991_fu_4991147_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_992_fu_4991187_p1.read()) + sc_biguint<11>(zext_ln708_991_fu_4991147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_790_fu_5082349_p2() {
    add_ln703_790_fu_5082349_p2 = (!add_ln703_787_fu_5082340_p2.read().is_01() || !zext_ln703_149_fu_5082346_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_787_fu_5082340_p2.read()) + sc_biguint<14>(zext_ln703_149_fu_5082346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_791_fu_5059003_p2() {
    add_ln703_791_fu_5059003_p2 = (!sext_ln1118_237_fu_5002527_p1.read().is_01() || !zext_ln1118_1751_fu_5002661_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_237_fu_5002527_p1.read()) + sc_biguint<12>(zext_ln1118_1751_fu_5002661_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_792_fu_5059013_p2() {
    add_ln703_792_fu_5059013_p2 = (!zext_ln1118_1750_fu_5002643_p1.read().is_01() || !sext_ln703_521_fu_5059009_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln1118_1750_fu_5002643_p1.read()) + sc_bigint<13>(sext_ln703_521_fu_5059009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_793_fu_5059019_p2() {
    add_ln703_793_fu_5059019_p2 = (!sext_ln708_62_fu_5002657_p1.read().is_01() || !sext_ln1118_238_fu_5002569_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_62_fu_5002657_p1.read()) + sc_bigint<11>(sext_ln1118_238_fu_5002569_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_794_fu_5059029_p2() {
    add_ln703_794_fu_5059029_p2 = (!sext_ln708_61_fu_5002589_p1.read().is_01() || !zext_ln1118_1748_fu_5002603_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_61_fu_5002589_p1.read()) + sc_biguint<9>(zext_ln1118_1748_fu_5002603_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_795_fu_5059039_p2() {
    add_ln703_795_fu_5059039_p2 = (!sext_ln703_522_fu_5059025_p1.read().is_01() || !sext_ln703_523_fu_5059035_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_522_fu_5059025_p1.read()) + sc_bigint<12>(sext_ln703_523_fu_5059035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_796_fu_5059049_p2() {
    add_ln703_796_fu_5059049_p2 = (!add_ln703_792_fu_5059013_p2.read().is_01() || !sext_ln703_524_fu_5059045_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_792_fu_5059013_p2.read()) + sc_bigint<13>(sext_ln703_524_fu_5059045_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_797_fu_5082362_p2() {
    add_ln703_797_fu_5082362_p2 = (!sext_ln703_520_fu_5082355_p1.read().is_01() || !sext_ln703_525_fu_5082359_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_520_fu_5082355_p1.read()) + sc_bigint<15>(sext_ln703_525_fu_5082359_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_798_fu_5059055_p2() {
    add_ln703_798_fu_5059055_p2 = (!sext_ln203_139_fu_5002733_p1.read().is_01() || !sext_ln203_138_fu_5002713_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_139_fu_5002733_p1.read()) + sc_bigint<12>(sext_ln203_138_fu_5002713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_799_fu_5082371_p2() {
    add_ln703_799_fu_5082371_p2 = (!add_ln703_797_fu_5082362_p2.read().is_01() || !sext_ln703_526_fu_5082368_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_797_fu_5082362_p2.read()) + sc_bigint<15>(sext_ln703_526_fu_5082368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_79_fu_5054163_p2() {
    add_ln703_79_fu_5054163_p2 = (!zext_ln703_22_fu_5054149_p1.read().is_01() || !zext_ln703_23_fu_5054159_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_22_fu_5054149_p1.read()) + sc_biguint<12>(zext_ln703_23_fu_5054159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_7_fu_5053731_p2() {
    add_ln703_7_fu_5053731_p2 = (!sext_ln1116_fu_4988790_p1.read().is_01() || !sext_ln708_1_fu_4988735_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_fu_4988790_p1.read()) + sc_bigint<12>(sext_ln708_1_fu_4988735_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_800_fu_5059061_p2() {
    add_ln703_800_fu_5059061_p2 = (!zext_ln203_47_fu_5002737_p1.read().is_01() || !sext_ln203_137_fu_5002699_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_47_fu_5002737_p1.read()) + sc_bigint<10>(sext_ln203_137_fu_5002699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_801_fu_5059071_p2() {
    add_ln703_801_fu_5059071_p2 = (!zext_ln203_48_fu_5002751_p1.read().is_01() || !sext_ln703_527_fu_5059067_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_48_fu_5002751_p1.read()) + sc_bigint<12>(sext_ln703_527_fu_5059067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_803_fu_5059087_p2() {
    add_ln703_803_fu_5059087_p2 = (!zext_ln708_1143_fu_5000963_p1.read().is_01() || !zext_ln703_150_fu_5059083_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1143_fu_5000963_p1.read()) + sc_biguint<8>(zext_ln703_150_fu_5059083_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_804_fu_5059097_p2() {
    add_ln703_804_fu_5059097_p2 = (!sext_ln1118_242_fu_5002783_p1.read().is_01() || !sext_ln1118_244_fu_5002787_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_242_fu_5002783_p1.read()) + sc_bigint<10>(sext_ln1118_244_fu_5002787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_805_fu_5059107_p2() {
    add_ln703_805_fu_5059107_p2 = (!zext_ln703_151_fu_5059093_p1.read().is_01() || !sext_ln703_530_fu_5059103_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_151_fu_5059093_p1.read()) + sc_bigint<11>(sext_ln703_530_fu_5059103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_806_fu_5059117_p2() {
    add_ln703_806_fu_5059117_p2 = (!sext_ln203_140_fu_5002801_p1.read().is_01() || !sext_ln703_531_fu_5059113_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_140_fu_5002801_p1.read()) + sc_bigint<12>(sext_ln703_531_fu_5059113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_807_fu_5082393_p2() {
    add_ln703_807_fu_5082393_p2 = (!sext_ln1118_245_fu_5080298_p1.read().is_01() || !sext_ln1118_106_fu_5080235_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_245_fu_5080298_p1.read()) + sc_bigint<12>(sext_ln1118_106_fu_5080235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_808_fu_5082403_p2() {
    add_ln703_808_fu_5082403_p2 = (!sext_ln703_532_fu_5082390_p1.read().is_01() || !sext_ln703_533_fu_5082399_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_532_fu_5082390_p1.read()) + sc_bigint<13>(sext_ln703_533_fu_5082399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_809_fu_5059123_p2() {
    add_ln703_809_fu_5059123_p2 = (!zext_ln1118_1753_fu_5002855_p1.read().is_01() || !trunc_ln1118_20_fu_5002829_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1753_fu_5002855_p1.read()) + sc_biguint<10>(trunc_ln1118_20_fu_5002829_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_80_fu_5080938_p2() {
    add_ln703_80_fu_5080938_p2 = (!sext_ln703_59_fu_5080931_p1.read().is_01() || !zext_ln703_24_fu_5080935_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_59_fu_5080931_p1.read()) + sc_biguint<15>(zext_ln703_24_fu_5080935_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_810_fu_5059133_p2() {
    add_ln703_810_fu_5059133_p2 = (!zext_ln708_307_fu_5002815_p1.read().is_01() || !zext_ln708_8_fu_4988464_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_307_fu_5002815_p1.read()) + sc_biguint<9>(zext_ln708_8_fu_4988464_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_811_fu_5059143_p2() {
    add_ln703_811_fu_5059143_p2 = (!zext_ln703_152_fu_5059129_p1.read().is_01() || !zext_ln703_153_fu_5059139_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_152_fu_5059129_p1.read()) + sc_biguint<11>(zext_ln703_153_fu_5059139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_812_fu_5082416_p2() {
    add_ln703_812_fu_5082416_p2 = (!sext_ln703_534_fu_5082409_p1.read().is_01() || !zext_ln703_154_fu_5082413_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_534_fu_5082409_p1.read()) + sc_biguint<14>(zext_ln703_154_fu_5082413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_813_fu_5059149_p2() {
    add_ln703_813_fu_5059149_p2 = (!zext_ln708_1170_fu_5002947_p1.read().is_01() || !zext_ln708_1169_fu_5002927_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1170_fu_5002947_p1.read()) + sc_biguint<11>(zext_ln708_1169_fu_5002927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_814_fu_5082425_p2() {
    add_ln703_814_fu_5082425_p2 = (!add_ln703_812_fu_5082416_p2.read().is_01() || !zext_ln703_155_fu_5082422_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_812_fu_5082416_p2.read()) + sc_biguint<14>(zext_ln703_155_fu_5082422_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_815_fu_5059155_p2() {
    add_ln703_815_fu_5059155_p2 = (!sext_ln1118_203_fu_5001501_p1.read().is_01() || !zext_ln708_1171_fu_5003011_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_203_fu_5001501_p1.read()) + sc_biguint<11>(zext_ln708_1171_fu_5003011_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_816_fu_5059165_p2() {
    add_ln703_816_fu_5059165_p2 = (!zext_ln1118_1755_fu_5002991_p1.read().is_01() || !sext_ln703_535_fu_5059161_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1755_fu_5002991_p1.read()) + sc_bigint<12>(sext_ln703_535_fu_5059161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_817_fu_5082434_p2() {
    add_ln703_817_fu_5082434_p2 = (!add_ln703_814_fu_5082425_p2.read().is_01() || !sext_ln703_536_fu_5082431_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_814_fu_5082425_p2.read()) + sc_bigint<14>(sext_ln703_536_fu_5082431_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_818_fu_5059171_p2() {
    add_ln703_818_fu_5059171_p2 = (!sext_ln1118_248_fu_5002887_p1.read().is_01() || !sext_ln1118_157_fu_4999642_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_248_fu_5002887_p1.read()) + sc_bigint<11>(sext_ln1118_157_fu_4999642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_819_fu_5059181_p2() {
    add_ln703_819_fu_5059181_p2 = (!sext_ln203_141_fu_5002869_p1.read().is_01() || !sext_ln703_538_fu_5059177_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_141_fu_5002869_p1.read()) + sc_bigint<12>(sext_ln703_538_fu_5059177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_81_fu_5054169_p2() {
    add_ln703_81_fu_5054169_p2 = (!zext_ln708_52_fu_4991095_p1.read().is_01() || !sext_ln1118_30_fu_4990911_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_52_fu_4991095_p1.read()) + sc_bigint<11>(sext_ln1118_30_fu_4990911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_820_fu_5059191_p2() {
    add_ln703_820_fu_5059191_p2 = (!sext_ln708_67_fu_5002971_p1.read().is_01() || !sext_ln708_65_fu_5002907_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_67_fu_5002971_p1.read()) + sc_bigint<10>(sext_ln708_65_fu_5002907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_821_fu_5059201_p2() {
    add_ln703_821_fu_5059201_p2 = (!zext_ln1118_1754_fu_5002951_p1.read().is_01() || !zext_ln1118_749_fu_4994912_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1754_fu_5002951_p1.read()) + sc_biguint<9>(zext_ln1118_749_fu_4994912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_822_fu_5059211_p2() {
    add_ln703_822_fu_5059211_p2 = (!sext_ln703_540_fu_5059197_p1.read().is_01() || !zext_ln703_156_fu_5059207_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_540_fu_5059197_p1.read()) + sc_biguint<11>(zext_ln703_156_fu_5059207_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_823_fu_5059221_p2() {
    add_ln703_823_fu_5059221_p2 = (!sext_ln703_539_fu_5059187_p1.read().is_01() || !sext_ln703_541_fu_5059217_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_539_fu_5059187_p1.read()) + sc_bigint<13>(sext_ln703_541_fu_5059217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_824_fu_5082447_p2() {
    add_ln703_824_fu_5082447_p2 = (!sext_ln703_537_fu_5082440_p1.read().is_01() || !sext_ln703_542_fu_5082444_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_537_fu_5082440_p1.read()) + sc_bigint<15>(sext_ln703_542_fu_5082444_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_825_fu_5082453_p2() {
    add_ln703_825_fu_5082453_p2 = (!sext_ln203_143_fu_5080301_p1.read().is_01() || !add_ln703_824_fu_5082447_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_143_fu_5080301_p1.read()) + sc_biguint<15>(add_ln703_824_fu_5082447_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_826_fu_5059227_p2() {
    add_ln703_826_fu_5059227_p2 = (!zext_ln203_49_fu_5003049_p1.read().is_01() || !sext_ln203_144_fu_5003063_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_49_fu_5003049_p1.read()) + sc_bigint<12>(sext_ln203_144_fu_5003063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_827_fu_5082462_p2() {
    add_ln703_827_fu_5082462_p2 = (!add_ln703_825_fu_5082453_p2.read().is_01() || !sext_ln703_543_fu_5082459_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_825_fu_5082453_p2.read()) + sc_bigint<15>(sext_ln703_543_fu_5082459_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_828_fu_5059233_p2() {
    add_ln703_828_fu_5059233_p2 = (!zext_ln203_542_fu_5003067_p1.read().is_01() || !zext_ln1118_1685_fu_4996832_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_542_fu_5003067_p1.read()) + sc_biguint<10>(zext_ln1118_1685_fu_4996832_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_829_fu_5059243_p2() {
    add_ln703_829_fu_5059243_p2 = (!zext_ln203_50_fu_5003081_p1.read().is_01() || !sext_ln203_142_fu_5003035_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_50_fu_5003081_p1.read()) + sc_bigint<9>(sext_ln203_142_fu_5003035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_82_fu_5054175_p2() {
    add_ln703_82_fu_5054175_p2 = (!sext_ln1118_31_fu_4990943_p1.read().is_01() || !zext_ln708_990_fu_4991115_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_31_fu_4990943_p1.read()) + sc_biguint<10>(zext_ln708_990_fu_4991115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_830_fu_5059253_p2() {
    add_ln703_830_fu_5059253_p2 = (!zext_ln703_157_fu_5059239_p1.read().is_01() || !sext_ln703_544_fu_5059249_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_157_fu_5059239_p1.read()) + sc_bigint<11>(sext_ln703_544_fu_5059249_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_832_fu_5059259_p2() {
    add_ln703_832_fu_5059259_p2 = (!sext_ln1118_249_fu_5003101_p1.read().is_01() || !ap_const_lv10_20.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_249_fu_5003101_p1.read()) + sc_biguint<10>(ap_const_lv10_20));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_833_fu_5059269_p2() {
    add_ln703_833_fu_5059269_p2 = (!sext_ln1118_24_fu_4990477_p1.read().is_01() || !sext_ln703_547_fu_5059265_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_24_fu_4990477_p1.read()) + sc_bigint<11>(sext_ln703_547_fu_5059265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_834_fu_5059279_p2() {
    add_ln703_834_fu_5059279_p2 = (!zext_ln708_1153_fu_5001355_p1.read().is_01() || !zext_ln1118_1757_fu_5003105_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1153_fu_5001355_p1.read()) + sc_biguint<8>(zext_ln1118_1757_fu_5003105_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_835_fu_5059289_p2() {
    add_ln703_835_fu_5059289_p2 = (!sext_ln1118_91_fu_4995886_p1.read().is_01() || !zext_ln703_158_fu_5059285_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_91_fu_4995886_p1.read()) + sc_biguint<11>(zext_ln703_158_fu_5059285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_836_fu_5059299_p2() {
    add_ln703_836_fu_5059299_p2 = (!sext_ln703_548_fu_5059275_p1.read().is_01() || !sext_ln703_549_fu_5059295_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_548_fu_5059275_p1.read()) + sc_bigint<12>(sext_ln703_549_fu_5059295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_837_fu_5059309_p2() {
    add_ln703_837_fu_5059309_p2 = (!sext_ln708_68_fu_5003143_p1.read().is_01() || !sext_ln1118_253_fu_5003129_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_68_fu_5003143_p1.read()) + sc_bigint<11>(sext_ln1118_253_fu_5003129_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_838_fu_5059319_p2() {
    add_ln703_838_fu_5059319_p2 = (!sext_ln703_550_fu_5059305_p1.read().is_01() || !sext_ln703_551_fu_5059315_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_550_fu_5059305_p1.read()) + sc_bigint<13>(sext_ln703_551_fu_5059315_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_839_fu_5059325_p2() {
    add_ln703_839_fu_5059325_p2 = (!zext_ln1118_1737_fu_5002053_p1.read().is_01() || !sext_ln708_69_fu_5003161_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_1737_fu_5002053_p1.read()) + sc_bigint<11>(sext_ln708_69_fu_5003161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_83_fu_5054185_p2() {
    add_ln703_83_fu_5054185_p2 = (!add_ln703_81_fu_5054169_p2.read().is_01() || !sext_ln703_60_fu_5054181_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_81_fu_5054169_p2.read()) + sc_bigint<11>(sext_ln703_60_fu_5054181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_840_fu_5059331_p2() {
    add_ln703_840_fu_5059331_p2 = (!zext_ln1118_1759_fu_5003157_p1.read().is_01() || !sext_ln1118_113_fu_4996970_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1759_fu_5003157_p1.read()) + sc_bigint<10>(sext_ln1118_113_fu_4996970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_841_fu_5059341_p2() {
    add_ln703_841_fu_5059341_p2 = (!add_ln703_839_fu_5059325_p2.read().is_01() || !sext_ln703_552_fu_5059337_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_839_fu_5059325_p2.read()) + sc_bigint<11>(sext_ln703_552_fu_5059337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_842_fu_5059351_p2() {
    add_ln703_842_fu_5059351_p2 = (!add_ln703_838_fu_5059319_p2.read().is_01() || !sext_ln703_553_fu_5059347_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_838_fu_5059319_p2.read()) + sc_bigint<13>(sext_ln703_553_fu_5059347_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_843_fu_5059357_p2() {
    add_ln703_843_fu_5059357_p2 = (!zext_ln708_1173_fu_5003249_p1.read().is_01() || !zext_ln708_1172_fu_5003181_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1173_fu_5003249_p1.read()) + sc_biguint<11>(zext_ln708_1172_fu_5003181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_844_fu_5082487_p2() {
    add_ln703_844_fu_5082487_p2 = (!sext_ln703_554_fu_5082481_p1.read().is_01() || !zext_ln703_159_fu_5082484_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_554_fu_5082481_p1.read()) + sc_biguint<14>(zext_ln703_159_fu_5082484_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_845_fu_5059363_p2() {
    add_ln703_845_fu_5059363_p2 = (!zext_ln708_988_fu_4991049_p1.read().is_01() || !zext_ln708_1175_fu_5003293_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_988_fu_4991049_p1.read()) + sc_biguint<11>(zext_ln708_1175_fu_5003293_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_846_fu_5059369_p2() {
    add_ln703_846_fu_5059369_p2 = (!zext_ln708_1174_fu_5003269_p1.read().is_01() || !add_ln703_845_fu_5059363_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1174_fu_5003269_p1.read()) + sc_biguint<11>(add_ln703_845_fu_5059363_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_847_fu_5082496_p2() {
    add_ln703_847_fu_5082496_p2 = (!add_ln703_844_fu_5082487_p2.read().is_01() || !zext_ln703_160_fu_5082493_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_844_fu_5082487_p2.read()) + sc_biguint<14>(zext_ln703_160_fu_5082493_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_848_fu_5059375_p2() {
    add_ln703_848_fu_5059375_p2 = (!sext_ln708_71_fu_5003229_p1.read().is_01() || !sext_ln1118_157_fu_4999642_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_71_fu_5003229_p1.read()) + sc_bigint<11>(sext_ln1118_157_fu_4999642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_849_fu_5059385_p2() {
    add_ln703_849_fu_5059385_p2 = (!sext_ln1118_255_fu_5003215_p1.read().is_01() || !sext_ln703_555_fu_5059381_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_255_fu_5003215_p1.read()) + sc_bigint<12>(sext_ln703_555_fu_5059381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_84_fu_5054195_p2() {
    add_ln703_84_fu_5054195_p2 = (!zext_ln203_4_fu_4991001_p1.read().is_01() || !sext_ln708_9_fu_4990989_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_4_fu_4991001_p1.read()) + sc_bigint<11>(sext_ln708_9_fu_4990989_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_850_fu_5059391_p2() {
    add_ln703_850_fu_5059391_p2 = (!sext_ln708_70_fu_5003201_p1.read().is_01() || !zext_ln708_1016_fu_4993076_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln708_70_fu_5003201_p1.read()) + sc_biguint<8>(zext_ln708_1016_fu_4993076_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_851_fu_5059401_p2() {
    add_ln703_851_fu_5059401_p2 = (!sext_ln1118_226_fu_5002175_p1.read().is_01() || !sext_ln703_556_fu_5059397_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_226_fu_5002175_p1.read()) + sc_bigint<9>(sext_ln703_556_fu_5059397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_852_fu_5059411_p2() {
    add_ln703_852_fu_5059411_p2 = (!add_ln703_849_fu_5059385_p2.read().is_01() || !sext_ln703_557_fu_5059407_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_849_fu_5059385_p2.read()) + sc_bigint<12>(sext_ln703_557_fu_5059407_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_853_fu_5082505_p2() {
    add_ln703_853_fu_5082505_p2 = (!add_ln703_847_fu_5082496_p2.read().is_01() || !sext_ln703_558_fu_5082502_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_847_fu_5082496_p2.read()) + sc_bigint<14>(sext_ln703_558_fu_5082502_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_854_fu_5082515_p2() {
    add_ln703_854_fu_5082515_p2 = (!sext_ln203_148_fu_5080304_p1.read().is_01() || !sext_ln703_559_fu_5082511_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_148_fu_5080304_p1.read()) + sc_bigint<15>(sext_ln703_559_fu_5082511_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_855_fu_5059417_p2() {
    add_ln703_855_fu_5059417_p2 = (!zext_ln203_52_fu_5003325_p1.read().is_01() || !sext_ln203_42_fu_4995214_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_52_fu_5003325_p1.read()) + sc_bigint<12>(sext_ln203_42_fu_4995214_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_856_fu_5059427_p2() {
    add_ln703_856_fu_5059427_p2 = (!sext_ln203_149_fu_5003321_p1.read().is_01() || !sext_ln703_560_fu_5059423_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_149_fu_5003321_p1.read()) + sc_bigint<13>(sext_ln703_560_fu_5059423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_857_fu_5082524_p2() {
    add_ln703_857_fu_5082524_p2 = (!add_ln703_854_fu_5082515_p2.read().is_01() || !sext_ln703_561_fu_5082521_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_854_fu_5082515_p2.read()) + sc_bigint<15>(sext_ln703_561_fu_5082521_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_858_fu_5059433_p2() {
    add_ln703_858_fu_5059433_p2 = (!zext_ln203_539_fu_5001313_p1.read().is_01() || !zext_ln203_543_fu_5003345_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_539_fu_5001313_p1.read()) + sc_biguint<10>(zext_ln203_543_fu_5003345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_859_fu_5059439_p2() {
    add_ln703_859_fu_5059439_p2 = (!zext_ln203_534_fu_4998749_p1.read().is_01() || !add_ln703_858_fu_5059433_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_534_fu_4998749_p1.read()) + sc_biguint<10>(add_ln703_858_fu_5059433_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_85_fu_5054205_p2() {
    add_ln703_85_fu_5054205_p2 = (!zext_ln1118_177_fu_4989083_p1.read().is_01() || !zext_ln1118_329_fu_4991191_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_177_fu_4989083_p1.read()) + sc_biguint<10>(zext_ln1118_329_fu_4991191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_860_fu_5059449_p2() {
    add_ln703_860_fu_5059449_p2 = (!sext_ln203_146_fu_5003297_p1.read().is_01() || !zext_ln1118_1073_fu_4996812_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_146_fu_5003297_p1.read()) + sc_biguint<9>(zext_ln1118_1073_fu_4996812_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_861_fu_5059459_p2() {
    add_ln703_861_fu_5059459_p2 = (!sext_ln203_15_fu_4991905_p1.read().is_01() || !sext_ln703_562_fu_5059455_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_15_fu_4991905_p1.read()) + sc_bigint<10>(sext_ln703_562_fu_5059455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_862_fu_5059469_p2() {
    add_ln703_862_fu_5059469_p2 = (!zext_ln703_161_fu_5059445_p1.read().is_01() || !sext_ln703_563_fu_5059465_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_161_fu_5059445_p1.read()) + sc_bigint<12>(sext_ln703_563_fu_5059465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_864_fu_5059475_p2() {
    add_ln703_864_fu_5059475_p2 = (!sext_ln1118_257_fu_5003365_p1.read().is_01() || !ap_const_lv10_360.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_257_fu_5003365_p1.read()) + sc_bigint<10>(ap_const_lv10_360));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_865_fu_5059481_p2() {
    add_ln703_865_fu_5059481_p2 = (!zext_ln1118_1736_fu_5001995_p1.read().is_01() || !add_ln703_864_fu_5059475_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_1736_fu_5001995_p1.read()) + sc_biguint<10>(add_ln703_864_fu_5059475_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_866_fu_5059491_p2() {
    add_ln703_866_fu_5059491_p2 = (!sext_ln1118_241_fu_5002779_p1.read().is_01() || !sext_ln1118_258_fu_5003369_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_241_fu_5002779_p1.read()) + sc_bigint<9>(sext_ln1118_258_fu_5003369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_867_fu_5059501_p2() {
    add_ln703_867_fu_5059501_p2 = (!sext_ln703_566_fu_5059487_p1.read().is_01() || !sext_ln703_567_fu_5059497_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_566_fu_5059487_p1.read()) + sc_bigint<11>(sext_ln703_567_fu_5059497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_868_fu_5059511_p2() {
    add_ln703_868_fu_5059511_p2 = (!sext_ln1118_262_fu_5003427_p1.read().is_01() || !sext_ln1118_260_fu_5003393_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_262_fu_5003427_p1.read()) + sc_bigint<11>(sext_ln1118_260_fu_5003393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_869_fu_5059521_p2() {
    add_ln703_869_fu_5059521_p2 = (!sext_ln703_568_fu_5059507_p1.read().is_01() || !sext_ln703_569_fu_5059517_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_568_fu_5059507_p1.read()) + sc_bigint<12>(sext_ln703_569_fu_5059517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_86_fu_5054215_p2() {
    add_ln703_86_fu_5054215_p2 = (!sext_ln703_62_fu_5054201_p1.read().is_01() || !zext_ln703_25_fu_5054211_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_62_fu_5054201_p1.read()) + sc_biguint<12>(zext_ln703_25_fu_5054211_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_870_fu_5059531_p2() {
    add_ln703_870_fu_5059531_p2 = (!zext_ln1118_1761_fu_5003431_p1.read().is_01() || !sext_ln1118_261_fu_5003413_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_1761_fu_5003431_p1.read()) + sc_bigint<11>(sext_ln1118_261_fu_5003413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_871_fu_5059537_p2() {
    add_ln703_871_fu_5059537_p2 = (!sext_ln708_44_fu_5000280_p1.read().is_01() || !add_ln703_870_fu_5059531_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_44_fu_5000280_p1.read()) + sc_biguint<11>(add_ln703_870_fu_5059531_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_872_fu_5059547_p2() {
    add_ln703_872_fu_5059547_p2 = (!sext_ln703_570_fu_5059527_p1.read().is_01() || !sext_ln703_571_fu_5059543_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_570_fu_5059527_p1.read()) + sc_bigint<13>(sext_ln703_571_fu_5059543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_873_fu_5059553_p2() {
    add_ln703_873_fu_5059553_p2 = (!sext_ln1116_21_fu_5003483_p1.read().is_01() || !zext_ln708_1176_fu_5003435_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_21_fu_5003483_p1.read()) + sc_biguint<11>(zext_ln708_1176_fu_5003435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_874_fu_5059563_p2() {
    add_ln703_874_fu_5059563_p2 = (!add_ln703_872_fu_5059547_p2.read().is_01() || !sext_ln703_572_fu_5059559_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_872_fu_5059547_p2.read()) + sc_bigint<13>(sext_ln703_572_fu_5059559_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_875_fu_5059569_p2() {
    add_ln703_875_fu_5059569_p2 = (!sext_ln708_72_fu_5003541_p1.read().is_01() || !sext_ln1118_247_fu_5002883_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_72_fu_5003541_p1.read()) + sc_bigint<10>(sext_ln1118_247_fu_5002883_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_876_fu_5059579_p2() {
    add_ln703_876_fu_5059579_p2 = (!sext_ln1118_264_fu_5003517_p1.read().is_01() || !sext_ln703_574_fu_5059575_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_264_fu_5003517_p1.read()) + sc_bigint<11>(sext_ln703_574_fu_5059575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_877_fu_5082549_p2() {
    add_ln703_877_fu_5082549_p2 = (!sext_ln703_573_fu_5082543_p1.read().is_01() || !sext_ln703_575_fu_5082546_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_573_fu_5082543_p1.read()) + sc_bigint<14>(sext_ln703_575_fu_5082546_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_878_fu_5059585_p2() {
    add_ln703_878_fu_5059585_p2 = (!zext_ln708_316_fu_5003449_p1.read().is_01() || !sext_ln1118_265_fu_5003521_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_316_fu_5003449_p1.read()) + sc_bigint<9>(sext_ln1118_265_fu_5003521_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_879_fu_5059595_p2() {
    add_ln703_879_fu_5059595_p2 = (!sext_ln1116_22_fu_5003503_p1.read().is_01() || !sext_ln703_576_fu_5059591_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_22_fu_5003503_p1.read()) + sc_bigint<10>(sext_ln703_576_fu_5059591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_87_fu_5054225_p2() {
    add_ln703_87_fu_5054225_p2 = (!sext_ln703_61_fu_5054191_p1.read().is_01() || !sext_ln703_63_fu_5054221_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_61_fu_5054191_p1.read()) + sc_bigint<13>(sext_ln703_63_fu_5054221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_880_fu_5059601_p2() {
    add_ln703_880_fu_5059601_p2 = (!sext_ln1118_36_fu_4991541_p1.read().is_01() || !zext_ln708_1177_fu_5003555_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_36_fu_4991541_p1.read()) + sc_biguint<8>(zext_ln708_1177_fu_5003555_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_881_fu_5059611_p2() {
    add_ln703_881_fu_5059611_p2 = (!zext_ln1118_1762_fu_5003453_p1.read().is_01() || !sext_ln703_577_fu_5059607_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1762_fu_5003453_p1.read()) + sc_bigint<9>(sext_ln703_577_fu_5059607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_882_fu_5059621_p2() {
    add_ln703_882_fu_5059621_p2 = (!add_ln703_879_fu_5059595_p2.read().is_01() || !sext_ln703_578_fu_5059617_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_879_fu_5059595_p2.read()) + sc_bigint<10>(sext_ln703_578_fu_5059617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_883_fu_5082558_p2() {
    add_ln703_883_fu_5082558_p2 = (!add_ln703_877_fu_5082549_p2.read().is_01() || !sext_ln703_579_fu_5082555_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_877_fu_5082549_p2.read()) + sc_bigint<14>(sext_ln703_579_fu_5082555_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_884_fu_5059627_p2() {
    add_ln703_884_fu_5059627_p2 = (!zext_ln203_53_fu_5003575_p1.read().is_01() || !sext_ln203_154_fu_5003619_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_53_fu_5003575_p1.read()) + sc_bigint<12>(sext_ln203_154_fu_5003619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_885_fu_5082567_p2() {
    add_ln703_885_fu_5082567_p2 = (!add_ln703_883_fu_5082558_p2.read().is_01() || !sext_ln703_580_fu_5082564_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_883_fu_5082558_p2.read()) + sc_bigint<14>(sext_ln703_580_fu_5082564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_886_fu_5059633_p2() {
    add_ln703_886_fu_5059633_p2 = (!sext_ln203_156_fu_5003667_p1.read().is_01() || !sext_ln203_155_fu_5003647_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_156_fu_5003667_p1.read()) + sc_bigint<11>(sext_ln203_155_fu_5003647_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_887_fu_5059643_p2() {
    add_ln703_887_fu_5059643_p2 = (!sext_ln203_65_fu_4997352_p1.read().is_01() || !sext_ln703_581_fu_5059639_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_65_fu_4997352_p1.read()) + sc_bigint<12>(sext_ln703_581_fu_5059639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_888_fu_5082576_p2() {
    add_ln703_888_fu_5082576_p2 = (!add_ln703_885_fu_5082567_p2.read().is_01() || !sext_ln703_582_fu_5082573_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_885_fu_5082567_p2.read()) + sc_bigint<14>(sext_ln703_582_fu_5082573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_889_fu_5059649_p2() {
    add_ln703_889_fu_5059649_p2 = (!sext_ln203_153_fu_5003599_p1.read().is_01() || !sext_ln1118_193_fu_5001145_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_153_fu_5003599_p1.read()) + sc_bigint<10>(sext_ln1118_193_fu_5001145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_88_fu_5080947_p2() {
    add_ln703_88_fu_5080947_p2 = (!add_ln703_80_fu_5080938_p2.read().is_01() || !sext_ln703_67_fu_5080944_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_80_fu_5080938_p2.read()) + sc_bigint<15>(sext_ln703_67_fu_5080944_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_890_fu_5059659_p2() {
    add_ln703_890_fu_5059659_p2 = (!sext_ln203_159_fu_5003705_p1.read().is_01() || !sext_ln703_584_fu_5059655_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_159_fu_5003705_p1.read()) + sc_bigint<11>(sext_ln703_584_fu_5059655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_891_fu_5059669_p2() {
    add_ln703_891_fu_5059669_p2 = (!zext_ln708_317_fu_5003579_p1.read().is_01() || !sext_ln203_158_fu_5003691_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_317_fu_5003579_p1.read()) + sc_bigint<10>(sext_ln203_158_fu_5003691_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_892_fu_5059679_p2() {
    add_ln703_892_fu_5059679_p2 = (!sext_ln203_157_fu_5003671_p1.read().is_01() || !zext_ln708_62_fu_4991997_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_157_fu_5003671_p1.read()) + sc_biguint<10>(zext_ln708_62_fu_4991997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_893_fu_5059689_p2() {
    add_ln703_893_fu_5059689_p2 = (!sext_ln703_586_fu_5059675_p1.read().is_01() || !sext_ln703_587_fu_5059685_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_586_fu_5059675_p1.read()) + sc_bigint<11>(sext_ln703_587_fu_5059685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_894_fu_5059699_p2() {
    add_ln703_894_fu_5059699_p2 = (!sext_ln703_585_fu_5059665_p1.read().is_01() || !sext_ln703_588_fu_5059695_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_585_fu_5059665_p1.read()) + sc_bigint<12>(sext_ln703_588_fu_5059695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_896_fu_5059705_p2() {
    add_ln703_896_fu_5059705_p2 = (!zext_ln708_1162_fu_5002385_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1162_fu_5002385_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_897_fu_5059715_p2() {
    add_ln703_897_fu_5059715_p2 = (!sext_ln203_160_fu_5003709_p1.read().is_01() || !sext_ln703_119_fu_5059711_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_160_fu_5003709_p1.read()) + sc_bigint<12>(sext_ln703_119_fu_5059711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_898_fu_5059725_p2() {
    add_ln703_898_fu_5059725_p2 = (!sext_ln1118_240_fu_5002775_p1.read().is_01() || !sext_ln1118_27_fu_4990533_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_240_fu_5002775_p1.read()) + sc_bigint<12>(sext_ln1118_27_fu_4990533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_899_fu_5059735_p2() {
    add_ln703_899_fu_5059735_p2 = (!sext_ln703_120_fu_5059721_p1.read().is_01() || !sext_ln703_591_fu_5059731_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_120_fu_5059721_p1.read()) + sc_bigint<13>(sext_ln703_591_fu_5059731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_89_fu_5080953_p2() {
    add_ln703_89_fu_5080953_p2 = (!sext_ln203_10_fu_5080196_p1.read().is_01() || !add_ln703_88_fu_5080947_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_10_fu_5080196_p1.read()) + sc_biguint<15>(add_ln703_88_fu_5080947_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_8_fu_5080739_p2() {
    add_ln703_8_fu_5080739_p2 = (!sext_ln703_11_fu_5080733_p1.read().is_01() || !sext_ln703_12_fu_5080736_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_11_fu_5080733_p1.read()) + sc_bigint<13>(sext_ln703_12_fu_5080736_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_900_fu_5059741_p2() {
    add_ln703_900_fu_5059741_p2 = (!zext_ln1118_1322_fu_4998944_p1.read().is_01() || !sext_ln1118_270_fu_5003723_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1322_fu_4998944_p1.read()) + sc_bigint<12>(sext_ln1118_270_fu_5003723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_901_fu_5059751_p2() {
    add_ln703_901_fu_5059751_p2 = (!add_ln703_899_fu_5059735_p2.read().is_01() || !sext_ln703_592_fu_5059747_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_899_fu_5059735_p2.read()) + sc_bigint<13>(sext_ln703_592_fu_5059747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_902_fu_5059757_p2() {
    add_ln703_902_fu_5059757_p2 = (!sext_ln1118_273_fu_5003747_p1.read().is_01() || !zext_ln708_1178_fu_5003767_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_273_fu_5003747_p1.read()) + sc_biguint<11>(zext_ln708_1178_fu_5003767_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_904_fu_5059771_p2() {
    add_ln703_904_fu_5059771_p2 = (!sext_ln703_593_fu_5059763_p1.read().is_01() || !sext_ln703_594_fu_5059767_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_593_fu_5059763_p1.read()) + sc_bigint<12>(sext_ln703_594_fu_5059767_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_905_fu_5059781_p2() {
    add_ln703_905_fu_5059781_p2 = (!add_ln703_901_fu_5059751_p2.read().is_01() || !sext_ln703_595_fu_5059777_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_901_fu_5059751_p2.read()) + sc_bigint<13>(sext_ln703_595_fu_5059777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_906_fu_5059787_p2() {
    add_ln703_906_fu_5059787_p2 = (!sext_ln1118_278_fu_5003929_p1.read().is_01() || !sext_ln708_73_fu_5003909_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_278_fu_5003929_p1.read()) + sc_bigint<12>(sext_ln708_73_fu_5003909_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_907_fu_5082605_p2() {
    add_ln703_907_fu_5082605_p2 = (!sext_ln703_596_fu_5082599_p1.read().is_01() || !sext_ln703_597_fu_5082602_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_596_fu_5082599_p1.read()) + sc_bigint<14>(sext_ln703_597_fu_5082602_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_908_fu_5059793_p2() {
    add_ln703_908_fu_5059793_p2 = (!zext_ln708_1180_fu_5003861_p1.read().is_01() || !zext_ln708_1179_fu_5003789_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1180_fu_5003861_p1.read()) + sc_biguint<10>(zext_ln708_1179_fu_5003789_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_909_fu_5059803_p2() {
    add_ln703_909_fu_5059803_p2 = (!zext_ln708_1182_fu_5003889_p1.read().is_01() || !zext_ln708_1181_fu_5003875_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1182_fu_5003889_p1.read()) + sc_biguint<11>(zext_ln708_1181_fu_5003875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_90_fu_5054231_p2() {
    add_ln703_90_fu_5054231_p2 = (!sext_ln203_9_fu_4991211_p1.read().is_01() || !sext_ln203_11_fu_4991291_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_9_fu_4991211_p1.read()) + sc_bigint<11>(sext_ln203_11_fu_4991291_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_910_fu_5059813_p2() {
    add_ln703_910_fu_5059813_p2 = (!zext_ln703_162_fu_5059799_p1.read().is_01() || !zext_ln703_163_fu_5059809_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_162_fu_5059799_p1.read()) + sc_biguint<12>(zext_ln703_163_fu_5059809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_911_fu_5082614_p2() {
    add_ln703_911_fu_5082614_p2 = (!add_ln703_907_fu_5082605_p2.read().is_01() || !zext_ln703_164_fu_5082611_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_907_fu_5082605_p2.read()) + sc_biguint<14>(zext_ln703_164_fu_5082611_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_912_fu_5059819_p2() {
    add_ln703_912_fu_5059819_p2 = (!zext_ln708_984_fu_4990225_p1.read().is_01() || !zext_ln708_1113_fu_4998211_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_984_fu_4990225_p1.read()) + sc_biguint<11>(zext_ln708_1113_fu_4998211_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_913_fu_5059829_p2() {
    add_ln703_913_fu_5059829_p2 = (!zext_ln708_319_fu_5003793_p1.read().is_01() || !sext_ln1118_276_fu_5003817_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_319_fu_5003793_p1.read()) + sc_bigint<11>(sext_ln1118_276_fu_5003817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_914_fu_5059839_p2() {
    add_ln703_914_fu_5059839_p2 = (!zext_ln703_165_fu_5059825_p1.read().is_01() || !sext_ln703_599_fu_5059835_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_165_fu_5059825_p1.read()) + sc_bigint<13>(sext_ln703_599_fu_5059835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_915_fu_5059845_p2() {
    add_ln703_915_fu_5059845_p2 = (!zext_ln708_1047_fu_4995088_p1.read().is_01() || !zext_ln708_999_fu_4991659_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1047_fu_4995088_p1.read()) + sc_biguint<8>(zext_ln708_999_fu_4991659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_916_fu_5059855_p2() {
    add_ln703_916_fu_5059855_p2 = (!sext_ln1118_277_fu_5003837_p1.read().is_01() || !sext_ln1118_275_fu_5003775_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_277_fu_5003837_p1.read()) + sc_bigint<7>(sext_ln1118_275_fu_5003775_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_917_fu_5059865_p2() {
    add_ln703_917_fu_5059865_p2 = (!zext_ln703_166_fu_5059851_p1.read().is_01() || !sext_ln703_600_fu_5059861_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_166_fu_5059851_p1.read()) + sc_bigint<10>(sext_ln703_600_fu_5059861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_918_fu_5059875_p2() {
    add_ln703_918_fu_5059875_p2 = (!add_ln703_914_fu_5059839_p2.read().is_01() || !sext_ln703_601_fu_5059871_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_914_fu_5059839_p2.read()) + sc_bigint<13>(sext_ln703_601_fu_5059871_p1.read()));
}

}

