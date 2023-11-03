#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_815_fu_13030316_p2() {
    add_ln703_815_fu_13030316_p2 = (!sext_ln703_399_fu_13030313_p1.read().is_01() || !add_ln703_813_fu_13030307_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_399_fu_13030313_p1.read()) + sc_biguint<15>(add_ln703_813_fu_13030307_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_816_fu_13005595_p2() {
    add_ln703_816_fu_13005595_p2 = (!zext_ln708_124_fu_12935941_p1.read().is_01() || !zext_ln708_125_fu_12935963_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_124_fu_12935941_p1.read()) + sc_biguint<11>(zext_ln708_125_fu_12935963_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_817_fu_13005601_p2() {
    add_ln703_817_fu_13005601_p2 = (!add_ln703_816_fu_13005595_p2.read().is_01() || !zext_ln708_123_fu_12935921_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_816_fu_13005595_p2.read()) + sc_biguint<11>(zext_ln708_123_fu_12935921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_818_fu_13030329_p2() {
    add_ln703_818_fu_13030329_p2 = (!zext_ln703_75_fu_13030326_p1.read().is_01() || !sext_ln703_400_fu_13030322_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_75_fu_13030326_p1.read()) + sc_bigint<16>(sext_ln703_400_fu_13030322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_819_fu_13005607_p2() {
    add_ln703_819_fu_13005607_p2 = (!zext_ln708_126_fu_12936005_p1.read().is_01() || !zext_ln708_127_fu_12936033_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_126_fu_12936005_p1.read()) + sc_biguint<11>(zext_ln708_127_fu_12936033_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_820_fu_13005617_p2() {
    add_ln703_820_fu_13005617_p2 = (!zext_ln703_76_fu_13005613_p1.read().is_01() || !zext_ln203_34_fu_12935977_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_76_fu_13005613_p1.read()) + sc_biguint<12>(zext_ln203_34_fu_12935977_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_821_fu_13005623_p2() {
    add_ln703_821_fu_13005623_p2 = (!zext_ln203_35_fu_12936052_p1.read().is_01() || !zext_ln203_36_fu_12936072_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_35_fu_12936052_p1.read()) + sc_biguint<9>(zext_ln203_36_fu_12936072_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_822_fu_13005633_p2() {
    add_ln703_822_fu_13005633_p2 = (!tmp_136_fu_12934289_p4.read().is_01() || !zext_ln203_37_fu_12936100_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_136_fu_12934289_p4.read()) + sc_biguint<10>(zext_ln203_37_fu_12936100_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_823_fu_13005643_p2() {
    add_ln703_823_fu_13005643_p2 = (!zext_ln703_78_fu_13005639_p1.read().is_01() || !zext_ln703_77_fu_13005629_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_78_fu_13005639_p1.read()) + sc_biguint<11>(zext_ln703_77_fu_13005629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_824_fu_13005653_p2() {
    add_ln703_824_fu_13005653_p2 = (!zext_ln703_79_fu_13005649_p1.read().is_01() || !add_ln703_820_fu_13005617_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_79_fu_13005649_p1.read()) + sc_biguint<12>(add_ln703_820_fu_13005617_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_826_fu_13005659_p2() {
    add_ln703_826_fu_13005659_p2 = (!trunc_ln1118_9_fu_12936114_p4.read().is_01() || !ap_const_lv10_50.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_9_fu_12936114_p4.read()) + sc_biguint<10>(ap_const_lv10_50));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_827_fu_13005669_p2() {
    add_ln703_827_fu_13005669_p2 = (!zext_ln703_81_fu_13005665_p1.read().is_01() || !sext_ln203_111_fu_12928202_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_81_fu_13005665_p1.read()) + sc_bigint<12>(sext_ln203_111_fu_12928202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_828_fu_13005679_p2() {
    add_ln703_828_fu_13005679_p2 = (!sext_ln703_401_fu_13005675_p1.read().is_01() || !sext_ln203_182_fu_12936140_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_401_fu_13005675_p1.read()) + sc_bigint<13>(sext_ln203_182_fu_12936140_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_829_fu_13005685_p2() {
    add_ln703_829_fu_13005685_p2 = (!trunc_ln1118_1_fu_12936154_p4.read().is_01() || !zext_ln1118_374_fu_12936174_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_1_fu_12936154_p4.read()) + sc_biguint<10>(zext_ln1118_374_fu_12936174_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_830_fu_13005695_p2() {
    add_ln703_830_fu_13005695_p2 = (!zext_ln703_82_fu_13005691_p1.read().is_01() || !add_ln703_828_fu_13005679_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_82_fu_13005691_p1.read()) + sc_biguint<13>(add_ln703_828_fu_13005679_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_831_fu_13005705_p2() {
    add_ln703_831_fu_13005705_p2 = (!sext_ln1118_341_fu_12936296_p1.read().is_01() || !zext_ln1118_377_fu_12936230_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_341_fu_12936296_p1.read()) + sc_biguint<12>(zext_ln1118_377_fu_12936230_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_832_fu_13005715_p2() {
    add_ln703_832_fu_13005715_p2 = (!sext_ln703_403_fu_13005711_p1.read().is_01() || !sext_ln703_402_fu_13005701_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_403_fu_13005711_p1.read()) + sc_bigint<14>(sext_ln703_402_fu_13005701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_833_fu_13005721_p2() {
    add_ln703_833_fu_13005721_p2 = (!zext_ln1118_378_fu_12936258_p1.read().is_01() || !zext_ln1118_381_fu_12936320_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_378_fu_12936258_p1.read()) + sc_biguint<10>(zext_ln1118_381_fu_12936320_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_834_fu_13005731_p2() {
    add_ln703_834_fu_13005731_p2 = (!sext_ln1118_339_fu_12936210_p1.read().is_01() || !sext_ln1118_340_fu_12936272_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_339_fu_12936210_p1.read()) + sc_bigint<11>(sext_ln1118_340_fu_12936272_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_835_fu_13005741_p2() {
    add_ln703_835_fu_13005741_p2 = (!sext_ln703_404_fu_13005737_p1.read().is_01() || !zext_ln703_83_fu_13005727_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_404_fu_13005737_p1.read()) + sc_biguint<12>(zext_ln703_83_fu_13005727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_836_fu_13005751_p2() {
    add_ln703_836_fu_13005751_p2 = (!sext_ln703_405_fu_13005747_p1.read().is_01() || !add_ln703_832_fu_13005715_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_405_fu_13005747_p1.read()) + sc_biguint<14>(add_ln703_832_fu_13005715_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_837_fu_13005757_p2() {
    add_ln703_837_fu_13005757_p2 = (!zext_ln708_112_fu_12935165_p1.read().is_01() || !sext_ln1118_342_fu_12936368_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_112_fu_12935165_p1.read()) + sc_bigint<12>(sext_ln1118_342_fu_12936368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_838_fu_13030350_p2() {
    add_ln703_838_fu_13030350_p2 = (!sext_ln703_407_fu_13030347_p1.read().is_01() || !sext_ln703_406_fu_13030344_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_407_fu_13030347_p1.read()) + sc_bigint<15>(sext_ln703_406_fu_13030344_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_839_fu_13005763_p2() {
    add_ln703_839_fu_13005763_p2 = (!sext_ln1118_344_fu_12936414_p1.read().is_01() || !sext_ln1118_345_fu_12936456_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_344_fu_12936414_p1.read()) + sc_bigint<12>(sext_ln1118_345_fu_12936456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_840_fu_13005773_p2() {
    add_ln703_840_fu_13005773_p2 = (!sext_ln703_408_fu_13005769_p1.read().is_01() || !sext_ln1116_16_fu_12925749_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_408_fu_13005769_p1.read()) + sc_bigint<13>(sext_ln1116_16_fu_12925749_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_841_fu_13030359_p2() {
    add_ln703_841_fu_13030359_p2 = (!sext_ln703_409_fu_13030356_p1.read().is_01() || !add_ln703_838_fu_13030350_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_409_fu_13030356_p1.read()) + sc_biguint<15>(add_ln703_838_fu_13030350_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_842_fu_13005779_p2() {
    add_ln703_842_fu_13005779_p2 = (!zext_ln1118_383_fu_12936344_p1.read().is_01() || !zext_ln1118_387_fu_12936438_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_383_fu_12936344_p1.read()) + sc_biguint<10>(zext_ln1118_387_fu_12936438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_843_fu_13005789_p2() {
    add_ln703_843_fu_13005789_p2 = (!zext_ln703_84_fu_13005785_p1.read().is_01() || !sext_ln203_135_fu_12930905_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_84_fu_13005785_p1.read()) + sc_bigint<12>(sext_ln203_135_fu_12930905_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_844_fu_13005799_p2() {
    add_ln703_844_fu_13005799_p2 = (!zext_ln1118_388_fu_12936452_p1.read().is_01() || !zext_ln1118_390_fu_12936524_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_388_fu_12936452_p1.read()) + sc_biguint<9>(zext_ln1118_390_fu_12936524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_845_fu_13005809_p2() {
    add_ln703_845_fu_13005809_p2 = (!sext_ln1118_343_fu_12936382_p1.read().is_01() || !sext_ln1118_347_fu_12936484_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_343_fu_12936382_p1.read()) + sc_bigint<11>(sext_ln1118_347_fu_12936484_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_846_fu_13005819_p2() {
    add_ln703_846_fu_13005819_p2 = (!sext_ln703_411_fu_13005815_p1.read().is_01() || !zext_ln703_85_fu_13005805_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_411_fu_13005815_p1.read()) + sc_biguint<12>(zext_ln703_85_fu_13005805_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_847_fu_13005829_p2() {
    add_ln703_847_fu_13005829_p2 = (!sext_ln703_412_fu_13005825_p1.read().is_01() || !sext_ln703_410_fu_13005795_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_412_fu_13005825_p1.read()) + sc_bigint<13>(sext_ln703_410_fu_13005795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_848_fu_13030368_p2() {
    add_ln703_848_fu_13030368_p2 = (!sext_ln703_413_fu_13030365_p1.read().is_01() || !add_ln703_841_fu_13030359_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_413_fu_13030365_p1.read()) + sc_biguint<15>(add_ln703_841_fu_13030359_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_849_fu_13030374_p2() {
    add_ln703_849_fu_13030374_p2 = (!add_ln703_848_fu_13030368_p2.read().is_01() || !sext_ln203_183_fu_13028923_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_848_fu_13030368_p2.read()) + sc_bigint<15>(sext_ln203_183_fu_13028923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_850_fu_13005835_p2() {
    add_ln703_850_fu_13005835_p2 = (!sext_ln203_184_fu_12936566_p1.read().is_01() || !sext_ln203_185_fu_12936590_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_184_fu_12936566_p1.read()) + sc_bigint<12>(sext_ln203_185_fu_12936590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_851_fu_13005845_p2() {
    add_ln703_851_fu_13005845_p2 = (!sext_ln703_415_fu_13005841_p1.read().is_01() || !sext_ln203_142_fu_12932266_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_415_fu_13005841_p1.read()) + sc_bigint<13>(sext_ln203_142_fu_12932266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_852_fu_13030387_p2() {
    add_ln703_852_fu_13030387_p2 = (!sext_ln703_416_fu_13030384_p1.read().is_01() || !sext_ln703_414_fu_13030380_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_416_fu_13030384_p1.read()) + sc_bigint<16>(sext_ln703_414_fu_13030380_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_853_fu_13005851_p2() {
    add_ln703_853_fu_13005851_p2 = (!sext_ln203_186_fu_12936650_p1.read().is_01() || !zext_ln203_39_fu_12936618_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_186_fu_12936650_p1.read()) + sc_biguint<12>(zext_ln203_39_fu_12936618_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_854_fu_13005861_p2() {
    add_ln703_854_fu_13005861_p2 = (!sext_ln203_187_fu_12936664_p1.read().is_01() || !zext_ln203_38_fu_12936604_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_187_fu_12936664_p1.read()) + sc_biguint<11>(zext_ln203_38_fu_12936604_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_855_fu_13005867_p2() {
    add_ln703_855_fu_13005867_p2 = (!add_ln703_854_fu_13005861_p2.read().is_01() || !zext_ln708_134_fu_12936688_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_854_fu_13005861_p2.read()) + sc_biguint<11>(zext_ln708_134_fu_12936688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_856_fu_13005877_p2() {
    add_ln703_856_fu_13005877_p2 = (!sext_ln703_418_fu_13005873_p1.read().is_01() || !sext_ln703_417_fu_13005857_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_418_fu_13005873_p1.read()) + sc_bigint<13>(sext_ln703_417_fu_13005857_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_858_fu_13005883_p2() {
    add_ln703_858_fu_13005883_p2 = (!sext_ln203_188_fu_12936722_p1.read().is_01() || !ap_const_lv12_DE0.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_188_fu_12936722_p1.read()) + sc_bigint<12>(ap_const_lv12_DE0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_859_fu_13005889_p2() {
    add_ln703_859_fu_13005889_p2 = (!trunc_ln1116_1_fu_12936726_p4.read().is_01() || !zext_ln1116_38_fu_12936756_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1116_1_fu_12936726_p4.read()) + sc_biguint<10>(zext_ln1116_38_fu_12936756_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_860_fu_13005899_p2() {
    add_ln703_860_fu_13005899_p2 = (!zext_ln703_86_fu_13005895_p1.read().is_01() || !add_ln703_858_fu_13005883_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_86_fu_13005895_p1.read()) + sc_biguint<12>(add_ln703_858_fu_13005883_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_861_fu_13005909_p2() {
    add_ln703_861_fu_13005909_p2 = (!sext_ln703_420_fu_13005905_p1.read().is_01() || !zext_ln203_40_fu_12936770_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_420_fu_13005905_p1.read()) + sc_biguint<13>(zext_ln203_40_fu_12936770_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_862_fu_13005915_p2() {
    add_ln703_862_fu_13005915_p2 = (!sext_ln1116_32_fu_12936808_p1.read().is_01() || !zext_ln1116_39_fu_12936784_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_32_fu_12936808_p1.read()) + sc_biguint<12>(zext_ln1116_39_fu_12936784_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_863_fu_13005925_p2() {
    add_ln703_863_fu_13005925_p2 = (!sext_ln703_421_fu_13005921_p1.read().is_01() || !add_ln703_861_fu_13005909_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_421_fu_13005921_p1.read()) + sc_biguint<13>(add_ln703_861_fu_13005909_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_864_fu_13030405_p2() {
    add_ln703_864_fu_13030405_p2 = (!sext_ln703_422_fu_13030402_p1.read().is_01() || !zext_ln203_41_fu_13028926_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_422_fu_13030402_p1.read()) + sc_biguint<14>(zext_ln203_41_fu_13028926_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_865_fu_13005931_p2() {
    add_ln703_865_fu_13005931_p2 = (!zext_ln1116_40_fu_12936836_p1.read().is_01() || !sext_ln1116_33_fu_12936850_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_40_fu_12936836_p1.read()) + sc_bigint<12>(sext_ln1116_33_fu_12936850_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_866_fu_13005941_p2() {
    add_ln703_866_fu_13005941_p2 = (!sext_ln703_423_fu_13005937_p1.read().is_01() || !sext_ln1116_34_fu_12936854_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_423_fu_13005937_p1.read()) + sc_bigint<13>(sext_ln1116_34_fu_12936854_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_867_fu_13030414_p2() {
    add_ln703_867_fu_13030414_p2 = (!sext_ln703_424_fu_13030411_p1.read().is_01() || !add_ln703_864_fu_13030405_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_424_fu_13030411_p1.read()) + sc_biguint<14>(add_ln703_864_fu_13030405_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_868_fu_13030424_p2() {
    add_ln703_868_fu_13030424_p2 = (!sext_ln703_425_fu_13030420_p1.read().is_01() || !sext_ln203_189_fu_13028929_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_425_fu_13030420_p1.read()) + sc_bigint<15>(sext_ln203_189_fu_13028929_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_869_fu_13005947_p2() {
    add_ln703_869_fu_13005947_p2 = (!sext_ln1116_36_fu_12936914_p1.read().is_01() || !sext_ln1118_350_fu_12936956_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_36_fu_12936914_p1.read()) + sc_bigint<12>(sext_ln1118_350_fu_12936956_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_870_fu_13005957_p2() {
    add_ln703_870_fu_13005957_p2 = (!sext_ln703_426_fu_13005953_p1.read().is_01() || !sext_ln708_24_fu_12936858_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_426_fu_13005953_p1.read()) + sc_bigint<13>(sext_ln708_24_fu_12936858_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_871_fu_13030433_p2() {
    add_ln703_871_fu_13030433_p2 = (!sext_ln703_427_fu_13030430_p1.read().is_01() || !add_ln703_868_fu_13030424_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_427_fu_13030430_p1.read()) + sc_biguint<15>(add_ln703_868_fu_13030424_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_872_fu_13005963_p2() {
    add_ln703_872_fu_13005963_p2 = (!zext_ln708_137_fu_12936872_p1.read().is_01() || !zext_ln708_138_fu_12936886_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_137_fu_12936872_p1.read()) + sc_biguint<11>(zext_ln708_138_fu_12936886_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_873_fu_13005973_p2() {
    add_ln703_873_fu_13005973_p2 = (!sext_ln1116_35_fu_12936900_p1.read().is_01() || !sext_ln708_25_fu_12937004_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_35_fu_12936900_p1.read()) + sc_bigint<10>(sext_ln708_25_fu_12937004_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_874_fu_13005983_p2() {
    add_ln703_874_fu_13005983_p2 = (!sext_ln703_428_fu_13005979_p1.read().is_01() || !zext_ln708_139_fu_12936970_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_428_fu_13005979_p1.read()) + sc_biguint<11>(zext_ln708_139_fu_12936970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_875_fu_13005993_p2() {
    add_ln703_875_fu_13005993_p2 = (!sext_ln703_429_fu_13005989_p1.read().is_01() || !zext_ln703_87_fu_13005969_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_429_fu_13005989_p1.read()) + sc_biguint<12>(zext_ln703_87_fu_13005969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_876_fu_13030442_p2() {
    add_ln703_876_fu_13030442_p2 = (!sext_ln703_430_fu_13030439_p1.read().is_01() || !add_ln703_871_fu_13030433_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_430_fu_13030439_p1.read()) + sc_biguint<15>(add_ln703_871_fu_13030433_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_877_fu_13005999_p2() {
    add_ln703_877_fu_13005999_p2 = (!zext_ln203_42_fu_12937024_p1.read().is_01() || !sext_ln203_190_fu_12937072_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_42_fu_12937024_p1.read()) + sc_bigint<12>(sext_ln203_190_fu_12937072_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_878_fu_13030451_p2() {
    add_ln703_878_fu_13030451_p2 = (!sext_ln703_431_fu_13030448_p1.read().is_01() || !add_ln703_876_fu_13030442_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_431_fu_13030448_p1.read()) + sc_biguint<15>(add_ln703_876_fu_13030442_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_879_fu_13006005_p2() {
    add_ln703_879_fu_13006005_p2 = (!sext_ln203_193_fu_12937174_p1.read().is_01() || !sext_ln203_194_fu_12937188_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_193_fu_12937174_p1.read()) + sc_bigint<12>(sext_ln203_194_fu_12937188_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_880_fu_13006015_p2() {
    add_ln703_880_fu_13006015_p2 = (!sext_ln703_433_fu_13006011_p1.read().is_01() || !sext_ln203_192_fu_12937130_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_433_fu_13006011_p1.read()) + sc_bigint<13>(sext_ln203_192_fu_12937130_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_881_fu_13030464_p2() {
    add_ln703_881_fu_13030464_p2 = (!sext_ln703_434_fu_13030461_p1.read().is_01() || !sext_ln703_432_fu_13030457_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_434_fu_13030461_p1.read()) + sc_bigint<16>(sext_ln703_432_fu_13030457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_882_fu_13006021_p2() {
    add_ln703_882_fu_13006021_p2 = (!zext_ln203_43_fu_12937092_p1.read().is_01() || !zext_ln203_44_fu_12937160_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_43_fu_12937092_p1.read()) + sc_biguint<10>(zext_ln203_44_fu_12937160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_883_fu_13006031_p2() {
    add_ln703_883_fu_13006031_p2 = (!zext_ln703_88_fu_13006027_p1.read().is_01() || !sext_ln203_195_fu_12937257_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_88_fu_13006027_p1.read()) + sc_bigint<12>(sext_ln203_195_fu_12937257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_884_fu_13006041_p2() {
    add_ln703_884_fu_13006041_p2 = (!zext_ln203_45_fu_12937206_p1.read().is_01() || !zext_ln203_14_fu_12931071_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_45_fu_12937206_p1.read()) + sc_biguint<10>(zext_ln203_14_fu_12931071_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_885_fu_13006051_p2() {
    add_ln703_885_fu_13006051_p2 = (!zext_ln203_46_fu_12937225_p1.read().is_01() || !sext_ln203_191_fu_12937116_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_46_fu_12937225_p1.read()) + sc_bigint<10>(sext_ln203_191_fu_12937116_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_886_fu_13006061_p2() {
    add_ln703_886_fu_13006061_p2 = (!sext_ln703_436_fu_13006057_p1.read().is_01() || !zext_ln703_89_fu_13006047_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_436_fu_13006057_p1.read()) + sc_biguint<12>(zext_ln703_89_fu_13006047_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_887_fu_13006071_p2() {
    add_ln703_887_fu_13006071_p2 = (!sext_ln703_437_fu_13006067_p1.read().is_01() || !sext_ln703_435_fu_13006037_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_437_fu_13006067_p1.read()) + sc_bigint<13>(sext_ln703_435_fu_13006037_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_889_fu_13006077_p2() {
    add_ln703_889_fu_13006077_p2 = (!sext_ln1118_354_fu_12937285_p1.read().is_01() || !ap_const_lv9_180.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_354_fu_12937285_p1.read()) + sc_bigint<9>(ap_const_lv9_180));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_890_fu_13006087_p2() {
    add_ln703_890_fu_13006087_p2 = (!sext_ln1118_356_fu_12937319_p1.read().is_01() || !sext_ln1118_355_fu_12937299_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_356_fu_12937319_p1.read()) + sc_bigint<10>(sext_ln1118_355_fu_12937299_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_891_fu_13006093_p2() {
    add_ln703_891_fu_13006093_p2 = (!add_ln703_890_fu_13006087_p2.read().is_01() || !sext_ln703_439_fu_13006083_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_890_fu_13006087_p2.read()) + sc_bigint<10>(sext_ln703_439_fu_13006083_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_892_fu_13006103_p2() {
    add_ln703_892_fu_13006103_p2 = (!sext_ln703_440_fu_13006099_p1.read().is_01() || !sext_ln1118_359_fu_12937401_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_440_fu_13006099_p1.read()) + sc_bigint<12>(sext_ln1118_359_fu_12937401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_893_fu_13006109_p2() {
    add_ln703_893_fu_13006109_p2 = (!trunc_ln1118_10_fu_12937347_p4.read().is_01() || !zext_ln1118_405_fu_12937367_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_10_fu_12937347_p4.read()) + sc_biguint<9>(zext_ln1118_405_fu_12937367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_894_fu_13006119_p2() {
    add_ln703_894_fu_13006119_p2 = (!zext_ln703_90_fu_13006115_p1.read().is_01() || !add_ln703_892_fu_13006103_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_90_fu_13006115_p1.read()) + sc_biguint<12>(add_ln703_892_fu_13006103_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_895_fu_13006129_p2() {
    add_ln703_895_fu_13006129_p2 = (!zext_ln708_141_fu_12937493_p1.read().is_01() || !sext_ln1118_361_fu_12937435_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_141_fu_12937493_p1.read()) + sc_bigint<11>(sext_ln1118_361_fu_12937435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_896_fu_13006135_p2() {
    add_ln703_896_fu_13006135_p2 = (!sext_ln1118_363_fu_12937469_p1.read().is_01() || !sext_ln1118_357_fu_12937343_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_363_fu_12937469_p1.read()) + sc_bigint<8>(sext_ln1118_357_fu_12937343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_897_fu_13006145_p2() {
    add_ln703_897_fu_13006145_p2 = (!sext_ln703_442_fu_13006141_p1.read().is_01() || !add_ln703_895_fu_13006129_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_442_fu_13006141_p1.read()) + sc_biguint<11>(add_ln703_895_fu_13006129_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_898_fu_13006155_p2() {
    add_ln703_898_fu_13006155_p2 = (!sext_ln703_443_fu_13006151_p1.read().is_01() || !sext_ln703_441_fu_13006125_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_443_fu_13006151_p1.read()) + sc_bigint<13>(sext_ln703_441_fu_13006125_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_899_fu_13006161_p2() {
    add_ln703_899_fu_13006161_p2 = (!add_ln703_898_fu_13006155_p2.read().is_01() || !zext_ln708_142_fu_12937569_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_898_fu_13006155_p2.read()) + sc_biguint<13>(zext_ln708_142_fu_12937569_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_900_fu_13006167_p2() {
    add_ln703_900_fu_13006167_p2 = (!sext_ln1118_364_fu_12937507_p1.read().is_01() || !sext_ln1118_366_fu_12937537_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_364_fu_12937507_p1.read()) + sc_bigint<11>(sext_ln1118_366_fu_12937537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_901_fu_13006177_p2() {
    add_ln703_901_fu_13006177_p2 = (!sext_ln703_445_fu_13006173_p1.read().is_01() || !zext_ln1118_416_fu_12937685_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_445_fu_13006173_p1.read()) + sc_biguint<12>(zext_ln1118_416_fu_12937685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_902_fu_13030485_p2() {
    add_ln703_902_fu_13030485_p2 = (!sext_ln703_446_fu_13030482_p1.read().is_01() || !sext_ln703_444_fu_13030479_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_446_fu_13030482_p1.read()) + sc_bigint<14>(sext_ln703_444_fu_13030479_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_903_fu_13006183_p2() {
    add_ln703_903_fu_13006183_p2 = (!sext_ln1118_371_fu_12937699_p1.read().is_01() || !sext_ln1118_372_fu_12937713_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_371_fu_12937699_p1.read()) + sc_bigint<11>(sext_ln1118_372_fu_12937713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_904_fu_13006193_p2() {
    add_ln703_904_fu_13006193_p2 = (!sext_ln703_447_fu_13006189_p1.read().is_01() || !sext_ln1118_368_fu_12937633_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_447_fu_13006189_p1.read()) + sc_bigint<12>(sext_ln1118_368_fu_12937633_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_905_fu_13006199_p2() {
    add_ln703_905_fu_13006199_p2 = (!sext_ln1118_367_fu_12937619_p1.read().is_01() || !zext_ln1118_411_fu_12937583_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_367_fu_12937619_p1.read()) + sc_biguint<9>(zext_ln1118_411_fu_12937583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_906_fu_13006209_p2() {
    add_ln703_906_fu_13006209_p2 = (!sext_ln703_448_fu_13006205_p1.read().is_01() || !sext_ln1118_370_fu_12937671_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_448_fu_13006205_p1.read()) + sc_bigint<10>(sext_ln1118_370_fu_12937671_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_907_fu_13006219_p2() {
    add_ln703_907_fu_13006219_p2 = (!sext_ln703_449_fu_13006215_p1.read().is_01() || !add_ln703_904_fu_13006193_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_449_fu_13006215_p1.read()) + sc_biguint<12>(add_ln703_904_fu_13006193_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_908_fu_13030494_p2() {
    add_ln703_908_fu_13030494_p2 = (!sext_ln703_450_fu_13030491_p1.read().is_01() || !add_ln703_902_fu_13030485_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_450_fu_13030491_p1.read()) + sc_biguint<14>(add_ln703_902_fu_13030485_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_909_fu_13006225_p2() {
    add_ln703_909_fu_13006225_p2 = (!sext_ln203_200_fu_12937813_p1.read().is_01() || !sext_ln203_202_fu_12937865_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_200_fu_12937813_p1.read()) + sc_bigint<12>(sext_ln203_202_fu_12937865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_910_fu_13030507_p2() {
    add_ln703_910_fu_13030507_p2 = (!sext_ln703_452_fu_13030504_p1.read().is_01() || !sext_ln703_451_fu_13030500_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_452_fu_13030504_p1.read()) + sc_bigint<15>(sext_ln703_451_fu_13030500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_911_fu_13006231_p2() {
    add_ln703_911_fu_13006231_p2 = (!zext_ln708_79_fu_12932391_p1.read().is_01() || !sext_ln203_196_fu_12937733_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_79_fu_12932391_p1.read()) + sc_bigint<11>(sext_ln203_196_fu_12937733_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_912_fu_13006237_p2() {
    add_ln703_912_fu_13006237_p2 = (!add_ln703_911_fu_13006231_p2.read().is_01() || !zext_ln708_143_fu_12937889_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_911_fu_13006231_p2.read()) + sc_biguint<11>(zext_ln708_143_fu_12937889_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_913_fu_13030516_p2() {
    add_ln703_913_fu_13030516_p2 = (!sext_ln703_453_fu_13030513_p1.read().is_01() || !add_ln703_910_fu_13030507_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_453_fu_13030513_p1.read()) + sc_biguint<15>(add_ln703_910_fu_13030507_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_914_fu_13006243_p2() {
    add_ln703_914_fu_13006243_p2 = (!sext_ln203_199_fu_12937799_p1.read().is_01() || !sext_ln203_203_fu_12937903_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_199_fu_12937799_p1.read()) + sc_bigint<11>(sext_ln203_203_fu_12937903_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_915_fu_13006253_p2() {
    add_ln703_915_fu_13006253_p2 = (!sext_ln703_454_fu_13006249_p1.read().is_01() || !sext_ln203_198_fu_12937771_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_454_fu_13006249_p1.read()) + sc_bigint<12>(sext_ln203_198_fu_12937771_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_916_fu_13006263_p2() {
    add_ln703_916_fu_13006263_p2 = (!sext_ln203_197_fu_12937757_p1.read().is_01() || !sext_ln203_201_fu_12937851_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_197_fu_12937757_p1.read()) + sc_bigint<10>(sext_ln203_201_fu_12937851_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_917_fu_13006273_p2() {
    add_ln703_917_fu_13006273_p2 = (!sext_ln203_204_fu_12937927_p1.read().is_01() || !zext_ln203_47_fu_12937785_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_204_fu_12937927_p1.read()) + sc_biguint<9>(zext_ln203_47_fu_12937785_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_918_fu_13006283_p2() {
    add_ln703_918_fu_13006283_p2 = (!sext_ln703_457_fu_13006279_p1.read().is_01() || !sext_ln703_456_fu_13006269_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_457_fu_13006279_p1.read()) + sc_bigint<11>(sext_ln703_456_fu_13006269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_919_fu_13006293_p2() {
    add_ln703_919_fu_13006293_p2 = (!sext_ln703_458_fu_13006289_p1.read().is_01() || !sext_ln703_455_fu_13006259_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_458_fu_13006289_p1.read()) + sc_bigint<13>(sext_ln703_455_fu_13006259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_921_fu_13006299_p2() {
    add_ln703_921_fu_13006299_p2 = (!sext_ln1118_353_fu_12937281_p1.read().is_01() || !ap_const_lv10_218.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_353_fu_12937281_p1.read()) + sc_bigint<10>(ap_const_lv10_218));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_922_fu_13006309_p2() {
    add_ln703_922_fu_13006309_p2 = (!sext_ln1118_375_fu_12937945_p1.read().is_01() || !sext_ln1118_374_fu_12937941_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_375_fu_12937945_p1.read()) + sc_bigint<12>(sext_ln1118_374_fu_12937941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_923_fu_13006319_p2() {
    add_ln703_923_fu_13006319_p2 = (!sext_ln703_461_fu_13006315_p1.read().is_01() || !zext_ln703_91_fu_13006305_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_461_fu_13006315_p1.read()) + sc_biguint<13>(zext_ln703_91_fu_13006305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_924_fu_13006325_p2() {
    add_ln703_924_fu_13006325_p2 = (!sext_ln1118_376_fu_12937965_p1.read().is_01() || !zext_ln1118_422_fu_12937969_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_376_fu_12937965_p1.read()) + sc_biguint<12>(zext_ln1118_422_fu_12937969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_925_fu_13006335_p2() {
    add_ln703_925_fu_13006335_p2 = (!sext_ln703_462_fu_13006331_p1.read().is_01() || !add_ln703_923_fu_13006319_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_462_fu_13006331_p1.read()) + sc_biguint<13>(add_ln703_923_fu_13006319_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_926_fu_13006345_p2() {
    add_ln703_926_fu_13006345_p2 = (!sext_ln1118_378_fu_12938027_p1.read().is_01() || !sext_ln1118_377_fu_12937993_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_378_fu_12938027_p1.read()) + sc_bigint<10>(sext_ln1118_377_fu_12937993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_927_fu_13006355_p2() {
    add_ln703_927_fu_13006355_p2 = (!sext_ln703_464_fu_13006351_p1.read().is_01() || !zext_ln708_144_fu_12938013_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_464_fu_13006351_p1.read()) + sc_biguint<11>(zext_ln708_144_fu_12938013_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_928_fu_13006365_p2() {
    add_ln703_928_fu_13006365_p2 = (!sext_ln703_465_fu_13006361_p1.read().is_01() || !sext_ln703_463_fu_13006341_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_465_fu_13006361_p1.read()) + sc_bigint<14>(sext_ln703_463_fu_13006341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_929_fu_13006371_p2() {
    add_ln703_929_fu_13006371_p2 = (!sext_ln1118_341_fu_12936296_p1.read().is_01() || !sext_ln1116_17_fu_12925802_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_341_fu_12936296_p1.read()) + sc_bigint<12>(sext_ln1116_17_fu_12925802_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_930_fu_13006381_p2() {
    add_ln703_930_fu_13006381_p2 = (!sext_ln703_466_fu_13006377_p1.read().is_01() || !add_ln703_928_fu_13006365_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_466_fu_13006377_p1.read()) + sc_biguint<14>(add_ln703_928_fu_13006365_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_931_fu_13006387_p2() {
    add_ln703_931_fu_13006387_p2 = (!sext_ln1118_380_fu_12938141_p1.read().is_01() || !sext_ln1118_345_fu_12936456_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_380_fu_12938141_p1.read()) + sc_bigint<12>(sext_ln1118_345_fu_12936456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_932_fu_13006397_p2() {
    add_ln703_932_fu_13006397_p2 = (!sext_ln1118_382_fu_12938213_p1.read().is_01() || !zext_ln1118_425_fu_12938051_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_382_fu_12938213_p1.read()) + sc_biguint<12>(zext_ln1118_425_fu_12938051_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_933_fu_13006407_p2() {
    add_ln703_933_fu_13006407_p2 = (!sext_ln703_469_fu_13006403_p1.read().is_01() || !sext_ln703_468_fu_13006393_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_469_fu_13006403_p1.read()) + sc_bigint<13>(sext_ln703_468_fu_13006393_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_934_fu_13030541_p2() {
    add_ln703_934_fu_13030541_p2 = (!sext_ln703_470_fu_13030538_p1.read().is_01() || !sext_ln703_467_fu_13030535_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_470_fu_13030538_p1.read()) + sc_bigint<15>(sext_ln703_467_fu_13030535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_935_fu_13006413_p2() {
    add_ln703_935_fu_13006413_p2 = (!zext_ln1118_428_fu_12938127_p1.read().is_01() || !zext_ln1118_430_fu_12938165_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_428_fu_12938127_p1.read()) + sc_biguint<9>(zext_ln1118_430_fu_12938165_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_936_fu_13006423_p2() {
    add_ln703_936_fu_13006423_p2 = (!zext_ln703_92_fu_13006419_p1.read().is_01() || !zext_ln708_145_fu_12938103_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_92_fu_13006419_p1.read()) + sc_biguint<11>(zext_ln708_145_fu_12938103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_937_fu_13006433_p2() {
    add_ln703_937_fu_13006433_p2 = (!zext_ln708_146_fu_12938199_p1.read().is_01() || !sext_ln1118_379_fu_12938075_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_146_fu_12938199_p1.read()) + sc_bigint<11>(sext_ln1118_379_fu_12938075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_938_fu_13006439_p2() {
    add_ln703_938_fu_13006439_p2 = (!zext_ln1118_427_fu_12938107_p1.read().is_01() || !sext_ln1118_381_fu_12938179_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_427_fu_12938107_p1.read()) + sc_bigint<9>(sext_ln1118_381_fu_12938179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_939_fu_13006449_p2() {
    add_ln703_939_fu_13006449_p2 = (!sext_ln703_471_fu_13006445_p1.read().is_01() || !add_ln703_937_fu_13006433_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_471_fu_13006445_p1.read()) + sc_biguint<11>(add_ln703_937_fu_13006433_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_940_fu_13006459_p2() {
    add_ln703_940_fu_13006459_p2 = (!sext_ln703_472_fu_13006455_p1.read().is_01() || !zext_ln703_93_fu_13006429_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_472_fu_13006455_p1.read()) + sc_biguint<13>(zext_ln703_93_fu_13006429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_941_fu_13030550_p2() {
    add_ln703_941_fu_13030550_p2 = (!sext_ln703_473_fu_13030547_p1.read().is_01() || !add_ln703_934_fu_13030541_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_473_fu_13030547_p1.read()) + sc_biguint<15>(add_ln703_934_fu_13030541_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_942_fu_13030556_p2() {
    add_ln703_942_fu_13030556_p2 = (!add_ln703_941_fu_13030550_p2.read().is_01() || !sext_ln203_206_fu_13028932_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_941_fu_13030550_p2.read()) + sc_bigint<15>(sext_ln203_206_fu_13028932_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_943_fu_13006465_p2() {
    add_ln703_943_fu_13006465_p2 = (!sext_ln203_207_fu_12938289_p1.read().is_01() || !sext_ln203_208_fu_12938303_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_207_fu_12938289_p1.read()) + sc_bigint<12>(sext_ln203_208_fu_12938303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_944_fu_13006475_p2() {
    add_ln703_944_fu_13006475_p2 = (!sext_ln703_474_fu_13006471_p1.read().is_01() || !sext_ln203_142_fu_12932266_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_474_fu_13006471_p1.read()) + sc_bigint<13>(sext_ln203_142_fu_12932266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_945_fu_13030565_p2() {
    add_ln703_945_fu_13030565_p2 = (!sext_ln703_475_fu_13030562_p1.read().is_01() || !add_ln703_942_fu_13030556_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_475_fu_13030562_p1.read()) + sc_biguint<15>(add_ln703_942_fu_13030556_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_946_fu_13006481_p2() {
    add_ln703_946_fu_13006481_p2 = (!zext_ln708_147_fu_12938369_p1.read().is_01() || !sext_ln203_211_fu_12938355_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_147_fu_12938369_p1.read()) + sc_bigint<11>(sext_ln203_211_fu_12938355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_947_fu_13006491_p2() {
    add_ln703_947_fu_13006491_p2 = (!sext_ln703_477_fu_13006487_p1.read().is_01() || !sext_ln203_186_fu_12936650_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_477_fu_13006487_p1.read()) + sc_bigint<12>(sext_ln203_186_fu_12936650_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_948_fu_13006501_p2() {
    add_ln703_948_fu_13006501_p2 = (!sext_ln203_209_fu_12938327_p1.read().is_01() || !sext_ln203_210_fu_12938341_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_209_fu_12938327_p1.read()) + sc_bigint<9>(sext_ln203_210_fu_12938341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_949_fu_13006511_p2() {
    add_ln703_949_fu_13006511_p2 = (!sext_ln703_479_fu_13006507_p1.read().is_01() || !sext_ln203_205_fu_12938255_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_479_fu_13006507_p1.read()) + sc_bigint<10>(sext_ln203_205_fu_12938255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_950_fu_13006521_p2() {
    add_ln703_950_fu_13006521_p2 = (!sext_ln703_480_fu_13006517_p1.read().is_01() || !sext_ln703_478_fu_13006497_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_480_fu_13006517_p1.read()) + sc_bigint<13>(sext_ln703_478_fu_13006497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_952_fu_13006527_p2() {
    add_ln703_952_fu_13006527_p2 = (!sext_ln203_212_fu_12938383_p1.read().is_01() || !zext_ln203_48_fu_12938387_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_212_fu_12938383_p1.read()) + sc_biguint<12>(zext_ln203_48_fu_12938387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_953_fu_13006533_p2() {
    add_ln703_953_fu_13006533_p2 = (!zext_ln1118_434_fu_12938415_p1.read().is_01() || !ap_const_lv10_290.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_434_fu_12938415_p1.read()) + sc_bigint<10>(ap_const_lv10_290));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_954_fu_13006543_p2() {
    add_ln703_954_fu_13006543_p2 = (!sext_ln703_482_fu_13006539_p1.read().is_01() || !zext_ln708_148_fu_12938401_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_482_fu_13006539_p1.read()) + sc_biguint<11>(zext_ln708_148_fu_12938401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_955_fu_13006553_p2() {
    add_ln703_955_fu_13006553_p2 = (!sext_ln703_483_fu_13006549_p1.read().is_01() || !add_ln703_952_fu_13006527_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_483_fu_13006549_p1.read()) + sc_biguint<12>(add_ln703_952_fu_13006527_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_956_fu_13006563_p2() {
    add_ln703_956_fu_13006563_p2 = (!sext_ln703_484_fu_13006559_p1.read().is_01() || !sext_ln203_213_fu_12938485_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_484_fu_13006559_p1.read()) + sc_bigint<13>(sext_ln203_213_fu_12938485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_957_fu_13006569_p2() {
    add_ln703_957_fu_13006569_p2 = (!zext_ln708_149_fu_12938461_p1.read().is_01() || !sext_ln708_26_fu_12938447_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_149_fu_12938461_p1.read()) + sc_bigint<8>(sext_ln708_26_fu_12938447_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_958_fu_13030587_p2() {
    add_ln703_958_fu_13030587_p2 = (!sext_ln703_485_fu_13030584_p1.read().is_01() || !add_ln703_956_reg_13040350.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_485_fu_13030584_p1.read()) + sc_biguint<13>(add_ln703_956_reg_13040350.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_959_fu_13030592_p2() {
    add_ln703_959_fu_13030592_p2 = (!add_ln703_958_fu_13030587_p2.read().is_01() || !sext_ln1118_384_reg_13039072.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_958_fu_13030587_p2.read()) + sc_bigint<13>(sext_ln1118_384_reg_13039072.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_960_fu_13006575_p2() {
    add_ln703_960_fu_13006575_p2 = (!zext_ln708_150_fu_12938557_p1.read().is_01() || !sext_ln1118_387_fu_12938543_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_150_fu_12938557_p1.read()) + sc_bigint<10>(sext_ln1118_387_fu_12938543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_961_fu_13006585_p2() {
    add_ln703_961_fu_13006585_p2 = (!sext_ln703_487_fu_13006581_p1.read().is_01() || !sext_ln1118_386_fu_12938519_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_487_fu_13006581_p1.read()) + sc_bigint<12>(sext_ln1118_386_fu_12938519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_962_fu_13030604_p2() {
    add_ln703_962_fu_13030604_p2 = (!sext_ln703_488_fu_13030601_p1.read().is_01() || !sext_ln703_486_fu_13030597_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_488_fu_13030601_p1.read()) + sc_bigint<14>(sext_ln703_486_fu_13030597_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_963_fu_13006591_p2() {
    add_ln703_963_fu_13006591_p2 = (!zext_ln708_151_fu_12938577_p1.read().is_01() || !zext_ln708_152_fu_12938591_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_151_fu_12938577_p1.read()) + sc_biguint<11>(zext_ln708_152_fu_12938591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_964_fu_13030613_p2() {
    add_ln703_964_fu_13030613_p2 = (!zext_ln703_94_fu_13030610_p1.read().is_01() || !add_ln703_962_fu_13030604_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_94_fu_13030610_p1.read()) + sc_biguint<14>(add_ln703_962_fu_13030604_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_965_fu_13006597_p2() {
    add_ln703_965_fu_13006597_p2 = (!zext_ln708_154_fu_12938681_p1.read().is_01() || !zext_ln708_155_fu_12938709_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_154_fu_12938681_p1.read()) + sc_biguint<11>(zext_ln708_155_fu_12938709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_966_fu_13006607_p2() {
    add_ln703_966_fu_13006607_p2 = (!zext_ln703_95_fu_13006603_p1.read().is_01() || !zext_ln1118_440_fu_12938667_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_95_fu_13006603_p1.read()) + sc_biguint<12>(zext_ln1118_440_fu_12938667_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_967_fu_13030626_p2() {
    add_ln703_967_fu_13030626_p2 = (!zext_ln703_96_fu_13030623_p1.read().is_01() || !sext_ln703_489_fu_13030619_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_96_fu_13030623_p1.read()) + sc_bigint<15>(sext_ln703_489_fu_13030619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_968_fu_13006613_p2() {
    add_ln703_968_fu_13006613_p2 = (!sext_ln1118_388_fu_12938643_p1.read().is_01() || !sext_ln708_27_fu_12938615_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_388_fu_12938643_p1.read()) + sc_bigint<11>(sext_ln708_27_fu_12938615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_969_fu_13006623_p2() {
    add_ln703_969_fu_13006623_p2 = (!sext_ln703_490_fu_13006619_p1.read().is_01() || !zext_ln1118_441_fu_12938723_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_490_fu_13006619_p1.read()) + sc_biguint<12>(zext_ln1118_441_fu_12938723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_970_fu_13006629_p2() {
    add_ln703_970_fu_13006629_p2 = (!zext_ln1118_439_fu_12938629_p1.read().is_01() || !sext_ln1118_389_fu_12938747_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_439_fu_12938629_p1.read()) + sc_bigint<9>(sext_ln1118_389_fu_12938747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_971_fu_13006639_p2() {
    add_ln703_971_fu_13006639_p2 = (!sext_ln703_491_fu_13006635_p1.read().is_01() || !sext_ln708_28_fu_12938695_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_491_fu_13006635_p1.read()) + sc_bigint<10>(sext_ln708_28_fu_12938695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_972_fu_13006649_p2() {
    add_ln703_972_fu_13006649_p2 = (!sext_ln703_492_fu_13006645_p1.read().is_01() || !add_ln703_969_fu_13006623_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_492_fu_13006645_p1.read()) + sc_biguint<12>(add_ln703_969_fu_13006623_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_973_fu_13030635_p2() {
    add_ln703_973_fu_13030635_p2 = (!sext_ln703_493_fu_13030632_p1.read().is_01() || !add_ln703_967_fu_13030626_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_493_fu_13030632_p1.read()) + sc_biguint<15>(add_ln703_967_fu_13030626_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_974_fu_13030641_p2() {
    add_ln703_974_fu_13030641_p2 = (!add_ln703_973_fu_13030635_p2.read().is_01() || !sext_ln203_214_fu_13028935_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_973_fu_13030635_p2.read()) + sc_bigint<15>(sext_ln203_214_fu_13028935_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_975_fu_13006655_p2() {
    add_ln703_975_fu_13006655_p2 = (!trunc_ln203_9_fu_12938785_p4.read().is_01() || !zext_ln203_49_fu_12938795_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_9_fu_12938785_p4.read()) + sc_biguint<10>(zext_ln203_49_fu_12938795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_976_fu_13006665_p2() {
    add_ln703_976_fu_13006665_p2 = (!zext_ln703_97_fu_13006661_p1.read().is_01() || !zext_ln708_156_fu_12938781_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_97_fu_13006661_p1.read()) + sc_biguint<11>(zext_ln708_156_fu_12938781_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_977_fu_13030650_p2() {
    add_ln703_977_fu_13030650_p2 = (!zext_ln703_98_fu_13030647_p1.read().is_01() || !add_ln703_974_fu_13030641_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_98_fu_13030647_p1.read()) + sc_biguint<15>(add_ln703_974_fu_13030641_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_978_fu_13006671_p2() {
    add_ln703_978_fu_13006671_p2 = (!zext_ln708_158_fu_12938823_p1.read().is_01() || !zext_ln708_159_fu_12938847_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_158_fu_12938823_p1.read()) + sc_biguint<11>(zext_ln708_159_fu_12938847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_979_fu_13006677_p2() {
    add_ln703_979_fu_13006677_p2 = (!add_ln703_978_fu_13006671_p2.read().is_01() || !zext_ln708_140_fu_12937202_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_978_fu_13006671_p2.read()) + sc_biguint<11>(zext_ln708_140_fu_12937202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_980_fu_13006687_p2() {
    add_ln703_980_fu_13006687_p2 = (!zext_ln203_50_fu_12938861_p1.read().is_01() || !sext_ln203_215_fu_12938799_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln203_50_fu_12938861_p1.read()) + sc_bigint<7>(sext_ln203_215_fu_12938799_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_981_fu_13006697_p2() {
    add_ln703_981_fu_13006697_p2 = (!sext_ln703_494_fu_13006693_p1.read().is_01() || !sext_ln203_151_fu_12932893_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_494_fu_13006693_p1.read()) + sc_bigint<9>(sext_ln203_151_fu_12932893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_982_fu_13006707_p2() {
    add_ln703_982_fu_13006707_p2 = (!sext_ln703_495_fu_13006703_p1.read().is_01() || !zext_ln703_99_fu_13006683_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_495_fu_13006703_p1.read()) + sc_biguint<12>(zext_ln703_99_fu_13006683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_984_fu_13006713_p2() {
    add_ln703_984_fu_13006713_p2 = (!zext_ln708_161_fu_12938885_p1.read().is_01() || !ap_const_lv11_460.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_161_fu_12938885_p1.read()) + sc_bigint<11>(ap_const_lv11_460));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_985_fu_13006723_p2() {
    add_ln703_985_fu_13006723_p2 = (!sext_ln703_498_fu_13006719_p1.read().is_01() || !sext_ln203_216_fu_12938905_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_498_fu_13006719_p1.read()) + sc_bigint<12>(sext_ln203_216_fu_12938905_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_986_fu_13006733_p2() {
    add_ln703_986_fu_13006733_p2 = (!sext_ln1116_37_fu_12938979_p1.read().is_01() || !zext_ln1116_44_fu_12938955_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_37_fu_12938979_p1.read()) + sc_biguint<12>(zext_ln1116_44_fu_12938955_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_987_fu_13006743_p2() {
    add_ln703_987_fu_13006743_p2 = (!sext_ln703_500_fu_13006739_p1.read().is_01() || !sext_ln703_499_fu_13006729_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_500_fu_13006739_p1.read()) + sc_bigint<13>(sext_ln703_499_fu_13006729_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_988_fu_13006749_p2() {
    add_ln703_988_fu_13006749_p2 = (!zext_ln708_163_fu_12939007_p1.read().is_01() || !sext_ln1118_390_fu_12938937_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_163_fu_12939007_p1.read()) + sc_bigint<11>(sext_ln1118_390_fu_12938937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_989_fu_13006755_p2() {
    add_ln703_989_fu_13006755_p2 = (!add_ln703_988_fu_13006749_p2.read().is_01() || !zext_ln708_162_fu_12938993_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_988_fu_13006749_p2.read()) + sc_biguint<11>(zext_ln708_162_fu_12938993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_990_fu_13006765_p2() {
    add_ln703_990_fu_13006765_p2 = (!sext_ln703_501_fu_13006761_p1.read().is_01() || !add_ln703_987_fu_13006743_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_501_fu_13006761_p1.read()) + sc_biguint<13>(add_ln703_987_fu_13006743_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_991_fu_13006771_p2() {
    add_ln703_991_fu_13006771_p2 = (!add_ln703_990_fu_13006765_p2.read().is_01() || !sext_ln1118_384_fu_12938489_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_990_fu_13006765_p2.read()) + sc_bigint<13>(sext_ln1118_384_fu_12938489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_992_fu_13006777_p2() {
    add_ln703_992_fu_13006777_p2 = (!sext_ln1118_391_fu_12939021_p1.read().is_01() || !sext_ln1116_38_fu_12939127_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_391_fu_12939021_p1.read()) + sc_bigint<12>(sext_ln1116_38_fu_12939127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_993_fu_13030675_p2() {
    add_ln703_993_fu_13030675_p2 = (!sext_ln703_503_fu_13030672_p1.read().is_01() || !sext_ln703_502_fu_13030669_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_503_fu_13030672_p1.read()) + sc_bigint<14>(sext_ln703_502_fu_13030669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_994_fu_13006783_p2() {
    add_ln703_994_fu_13006783_p2 = (!zext_ln1118_449_fu_12939069_p1.read().is_01() || !zext_ln1118_451_fu_12939093_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_449_fu_12939069_p1.read()) + sc_biguint<9>(zext_ln1118_451_fu_12939093_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_995_fu_13006793_p2() {
    add_ln703_995_fu_13006793_p2 = (!zext_ln708_164_fu_12939147_p1.read().is_01() || !sext_ln1118_393_fu_12939045_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_164_fu_12939147_p1.read()) + sc_bigint<11>(sext_ln1118_393_fu_12939045_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_996_fu_13006799_p2() {
    add_ln703_996_fu_13006799_p2 = (!add_ln703_995_fu_13006793_p2.read().is_01() || !zext_ln703_100_fu_13006789_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_995_fu_13006793_p2.read()) + sc_biguint<11>(zext_ln703_100_fu_13006789_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_997_fu_13030684_p2() {
    add_ln703_997_fu_13030684_p2 = (!sext_ln703_504_fu_13030681_p1.read().is_01() || !add_ln703_993_fu_13030675_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_504_fu_13030681_p1.read()) + sc_biguint<14>(add_ln703_993_fu_13030675_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_998_fu_13030690_p2() {
    add_ln703_998_fu_13030690_p2 = (!add_ln703_997_fu_13030684_p2.read().is_01() || !zext_ln1118_453_fu_13028938_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_997_fu_13030684_p2.read()) + sc_biguint<14>(zext_ln1118_453_fu_13028938_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_999_fu_13006805_p2() {
    add_ln703_999_fu_13006805_p2 = (!zext_ln708_166_fu_12939191_p1.read().is_01() || !zext_ln708_167_fu_12939321_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_166_fu_12939191_p1.read()) + sc_biguint<11>(zext_ln708_167_fu_12939321_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_fu_13002553_p2() {
    add_ln703_fu_13002553_p2 = (!zext_ln708_2_fu_12925132_p1.read().is_01() || !ap_const_lv11_D8.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_2_fu_12925132_p1.read()) + sc_biguint<11>(ap_const_lv11_D8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_10_fu_12933165_p2() {
    add_ln708_10_fu_12933165_p2 = (!zext_ln708_85_fu_12933157_p1.read().is_01() || !zext_ln708_86_fu_12933161_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_85_fu_12933157_p1.read()) + sc_biguint<15>(zext_ln708_86_fu_12933161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_11_fu_12933767_p2() {
    add_ln708_11_fu_12933767_p2 = (!zext_ln1118_107_fu_12927299_p1.read().is_01() || !zext_ln1118_108_fu_12927311_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_107_fu_12927299_p1.read()) + sc_biguint<15>(zext_ln1118_108_fu_12927311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_12_fu_12934063_p2() {
    add_ln708_12_fu_12934063_p2 = (!zext_ln708_95_fu_12934047_p1.read().is_01() || !zext_ln708_96_fu_12934059_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_95_fu_12934047_p1.read()) + sc_biguint<15>(zext_ln708_96_fu_12934059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_13_fu_12934528_p2() {
    add_ln708_13_fu_12934528_p2 = (!zext_ln708_38_fu_12927611_p1.read().is_01() || !zext_ln708_105_fu_12934524_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_38_fu_12927611_p1.read()) + sc_biguint<15>(zext_ln708_105_fu_12934524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_14_fu_12935867_p2() {
    add_ln708_14_fu_12935867_p2 = (!zext_ln1118_272_fu_12932120_p1.read().is_01() || !zext_ln1118_290_fu_12932801_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_272_fu_12932120_p1.read()) + sc_biguint<15>(zext_ln1118_290_fu_12932801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_15_fu_12935905_p2() {
    add_ln708_15_fu_12935905_p2 = (!zext_ln1118_53_fu_12926012_p1.read().is_01() || !zext_ln708_122_fu_12935901_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_53_fu_12926012_p1.read()) + sc_biguint<15>(zext_ln708_122_fu_12935901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_16_fu_12936108_p2() {
    add_ln708_16_fu_12936108_p2 = (!zext_ln708_85_fu_12933157_p1.read().is_01() || !zext_ln708_128_fu_12936104_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_85_fu_12933157_p1.read()) + sc_biguint<15>(zext_ln708_128_fu_12936104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_17_fu_12936148_p2() {
    add_ln708_17_fu_12936148_p2 = (!zext_ln1118_217_fu_12930469_p1.read().is_01() || !zext_ln708_129_fu_12936144_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_217_fu_12930469_p1.read()) + sc_biguint<15>(zext_ln708_129_fu_12936144_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_18_fu_12939429_p2() {
    add_ln708_18_fu_12939429_p2 = (!zext_ln708_83_fu_12933051_p1.read().is_01() || !zext_ln708_157_fu_12938803_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_83_fu_12933051_p1.read()) + sc_biguint<15>(zext_ln708_157_fu_12938803_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_19_fu_12940093_p2() {
    add_ln708_19_fu_12940093_p2 = (!zext_ln708_20_fu_12926732_p1.read().is_01() || !zext_ln1118_344_fu_12934648_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_20_fu_12926732_p1.read()) + sc_biguint<15>(zext_ln1118_344_fu_12934648_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_1_fu_12926748_p2() {
    add_ln708_1_fu_12926748_p2 = (!zext_ln708_20_fu_12926732_p1.read().is_01() || !zext_ln708_21_fu_12926744_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_20_fu_12926732_p1.read()) + sc_biguint<15>(zext_ln708_21_fu_12926744_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_20_fu_12940933_p2() {
    add_ln708_20_fu_12940933_p2 = (!zext_ln1118_478_fu_12940441_p1.read().is_01() || !zext_ln708_193_fu_12940929_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_478_fu_12940441_p1.read()) + sc_biguint<15>(zext_ln708_193_fu_12940929_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_21_fu_12942105_p2() {
    add_ln708_21_fu_12942105_p2 = (!zext_ln1118_272_fu_12932120_p1.read().is_01() || !zext_ln1118_273_fu_12932132_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_272_fu_12932120_p1.read()) + sc_biguint<15>(zext_ln1118_273_fu_12932132_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_22_fu_12943049_p2() {
    add_ln708_22_fu_12943049_p2 = (!zext_ln1118_272_fu_12932120_p1.read().is_01() || !zext_ln1118_474_fu_12940185_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_272_fu_12932120_p1.read()) + sc_biguint<15>(zext_ln1118_474_fu_12940185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_23_fu_12943219_p2() {
    add_ln708_23_fu_12943219_p2 = (!zext_ln1118_107_fu_12927299_p1.read().is_01() || !zext_ln708_222_fu_12943215_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_107_fu_12927299_p1.read()) + sc_biguint<15>(zext_ln708_222_fu_12943215_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_24_fu_12945326_p2() {
    add_ln708_24_fu_12945326_p2 = (!zext_ln708_248_fu_12945310_p1.read().is_01() || !zext_ln708_249_fu_12945322_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_248_fu_12945310_p1.read()) + sc_biguint<15>(zext_ln708_249_fu_12945322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_25_fu_12946114_p2() {
    add_ln708_25_fu_12946114_p2 = (!zext_ln708_257_fu_12946098_p1.read().is_01() || !zext_ln708_258_fu_12946110_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_257_fu_12946098_p1.read()) + sc_biguint<15>(zext_ln708_258_fu_12946110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_26_fu_12946337_p2() {
    add_ln708_26_fu_12946337_p2 = (!zext_ln708_248_fu_12945310_p1.read().is_01() || !zext_ln708_263_fu_12946333_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_248_fu_12945310_p1.read()) + sc_biguint<15>(zext_ln708_263_fu_12946333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_27_fu_12946725_p2() {
    add_ln708_27_fu_12946725_p2 = (!zext_ln708_269_fu_12946709_p1.read().is_01() || !zext_ln708_270_fu_12946721_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_269_fu_12946709_p1.read()) + sc_biguint<15>(zext_ln708_270_fu_12946721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_28_fu_12946949_p2() {
    add_ln708_28_fu_12946949_p2 = (!zext_ln708_272_fu_12946933_p1.read().is_01() || !zext_ln708_273_fu_12946945_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_272_fu_12946933_p1.read()) + sc_biguint<15>(zext_ln708_273_fu_12946945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_29_fu_12946993_p2() {
    add_ln708_29_fu_12946993_p2 = (!zext_ln708_275_fu_12946977_p1.read().is_01() || !zext_ln708_276_fu_12946989_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_275_fu_12946977_p1.read()) + sc_biguint<15>(zext_ln708_276_fu_12946989_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_2_fu_12926971_p2() {
    add_ln708_2_fu_12926971_p2 = (!zext_ln708_11_fu_12925944_p1.read().is_01() || !zext_ln708_26_fu_12926967_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_11_fu_12925944_p1.read()) + sc_biguint<15>(zext_ln708_26_fu_12926967_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_30_fu_12947093_p2() {
    add_ln708_30_fu_12947093_p2 = (!zext_ln708_257_fu_12946098_p1.read().is_01() || !zext_ln708_278_fu_12947089_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_257_fu_12946098_p1.read()) + sc_biguint<15>(zext_ln708_278_fu_12947089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_31_fu_12950079_p2() {
    add_ln708_31_fu_12950079_p2 = (!zext_ln708_305_fu_12950071_p1.read().is_01() || !zext_ln708_306_fu_12950075_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_305_fu_12950071_p1.read()) + sc_biguint<15>(zext_ln708_306_fu_12950075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_32_fu_12950349_p2() {
    add_ln708_32_fu_12950349_p2 = (!zext_ln1118_772_fu_12949695_p1.read().is_01() || !zext_ln708_308_fu_12950345_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_772_fu_12949695_p1.read()) + sc_biguint<15>(zext_ln708_308_fu_12950345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_33_fu_12952433_p2() {
    add_ln708_33_fu_12952433_p2 = (!zext_ln708_320_fu_12952417_p1.read().is_01() || !zext_ln708_321_fu_12952429_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_320_fu_12952417_p1.read()) + sc_biguint<15>(zext_ln708_321_fu_12952429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_34_fu_12952531_p2() {
    add_ln708_34_fu_12952531_p2 = (!zext_ln708_322_fu_12952523_p1.read().is_01() || !zext_ln708_323_fu_12952527_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_322_fu_12952523_p1.read()) + sc_biguint<15>(zext_ln708_323_fu_12952527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_35_fu_12953133_p2() {
    add_ln708_35_fu_12953133_p2 = (!zext_ln1118_666_fu_12946665_p1.read().is_01() || !zext_ln1118_667_fu_12946677_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_666_fu_12946665_p1.read()) + sc_biguint<15>(zext_ln1118_667_fu_12946677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_36_fu_12953429_p2() {
    add_ln708_36_fu_12953429_p2 = (!zext_ln708_332_fu_12953413_p1.read().is_01() || !zext_ln708_333_fu_12953425_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_332_fu_12953413_p1.read()) + sc_biguint<15>(zext_ln708_333_fu_12953425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_37_fu_12953894_p2() {
    add_ln708_37_fu_12953894_p2 = (!zext_ln708_275_fu_12946977_p1.read().is_01() || !zext_ln708_342_fu_12953890_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_275_fu_12946977_p1.read()) + sc_biguint<15>(zext_ln708_342_fu_12953890_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_38_fu_12955233_p2() {
    add_ln708_38_fu_12955233_p2 = (!zext_ln1118_831_fu_12951486_p1.read().is_01() || !zext_ln1118_849_fu_12952167_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_831_fu_12951486_p1.read()) + sc_biguint<15>(zext_ln1118_849_fu_12952167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_39_fu_12955271_p2() {
    add_ln708_39_fu_12955271_p2 = (!zext_ln1118_612_fu_12945378_p1.read().is_01() || !zext_ln708_359_fu_12955267_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_612_fu_12945378_p1.read()) + sc_biguint<15>(zext_ln708_359_fu_12955267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_3_fu_12927359_p2() {
    add_ln708_3_fu_12927359_p2 = (!zext_ln708_32_fu_12927343_p1.read().is_01() || !zext_ln708_33_fu_12927355_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_32_fu_12927343_p1.read()) + sc_biguint<15>(zext_ln708_33_fu_12927355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_40_fu_12955474_p2() {
    add_ln708_40_fu_12955474_p2 = (!zext_ln708_322_fu_12952523_p1.read().is_01() || !zext_ln708_365_fu_12955470_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_322_fu_12952523_p1.read()) + sc_biguint<15>(zext_ln708_365_fu_12955470_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_41_fu_12955514_p2() {
    add_ln708_41_fu_12955514_p2 = (!zext_ln1118_776_fu_12949835_p1.read().is_01() || !zext_ln708_366_fu_12955510_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_776_fu_12949835_p1.read()) + sc_biguint<15>(zext_ln708_366_fu_12955510_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_42_fu_12958795_p2() {
    add_ln708_42_fu_12958795_p2 = (!zext_ln708_320_fu_12952417_p1.read().is_01() || !zext_ln708_394_fu_12958169_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_320_fu_12952417_p1.read()) + sc_biguint<15>(zext_ln708_394_fu_12958169_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_43_fu_12959459_p2() {
    add_ln708_43_fu_12959459_p2 = (!zext_ln708_257_fu_12946098_p1.read().is_01() || !zext_ln1118_903_fu_12954014_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_257_fu_12946098_p1.read()) + sc_biguint<15>(zext_ln1118_903_fu_12954014_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_44_fu_12960299_p2() {
    add_ln708_44_fu_12960299_p2 = (!zext_ln1118_1037_fu_12959807_p1.read().is_01() || !zext_ln708_430_fu_12960295_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1037_fu_12959807_p1.read()) + sc_biguint<15>(zext_ln708_430_fu_12960295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_45_fu_12961471_p2() {
    add_ln708_45_fu_12961471_p2 = (!zext_ln1118_831_fu_12951486_p1.read().is_01() || !zext_ln1118_832_fu_12951498_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_831_fu_12951486_p1.read()) + sc_biguint<15>(zext_ln1118_832_fu_12951498_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_46_fu_12962415_p2() {
    add_ln708_46_fu_12962415_p2 = (!zext_ln1118_831_fu_12951486_p1.read().is_01() || !zext_ln1118_1033_fu_12959551_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_831_fu_12951486_p1.read()) + sc_biguint<15>(zext_ln1118_1033_fu_12959551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_47_fu_12962585_p2() {
    add_ln708_47_fu_12962585_p2 = (!zext_ln1118_666_fu_12946665_p1.read().is_01() || !zext_ln708_459_fu_12962581_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_666_fu_12946665_p1.read()) + sc_biguint<15>(zext_ln708_459_fu_12962581_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_48_fu_12964692_p2() {
    add_ln708_48_fu_12964692_p2 = (!zext_ln708_485_fu_12964676_p1.read().is_01() || !zext_ln708_486_fu_12964688_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_485_fu_12964676_p1.read()) + sc_biguint<15>(zext_ln708_486_fu_12964688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_49_fu_12965480_p2() {
    add_ln708_49_fu_12965480_p2 = (!zext_ln708_494_fu_12965464_p1.read().is_01() || !zext_ln708_495_fu_12965476_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_494_fu_12965464_p1.read()) + sc_biguint<15>(zext_ln708_495_fu_12965476_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_4_fu_12927583_p2() {
    add_ln708_4_fu_12927583_p2 = (!zext_ln708_35_fu_12927567_p1.read().is_01() || !zext_ln708_36_fu_12927579_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_35_fu_12927567_p1.read()) + sc_biguint<15>(zext_ln708_36_fu_12927579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_50_fu_12965703_p2() {
    add_ln708_50_fu_12965703_p2 = (!zext_ln708_485_fu_12964676_p1.read().is_01() || !zext_ln708_500_fu_12965699_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_485_fu_12964676_p1.read()) + sc_biguint<15>(zext_ln708_500_fu_12965699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_51_fu_12966091_p2() {
    add_ln708_51_fu_12966091_p2 = (!zext_ln708_506_fu_12966075_p1.read().is_01() || !zext_ln708_507_fu_12966087_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_506_fu_12966075_p1.read()) + sc_biguint<15>(zext_ln708_507_fu_12966087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_52_fu_12966315_p2() {
    add_ln708_52_fu_12966315_p2 = (!zext_ln708_509_fu_12966299_p1.read().is_01() || !zext_ln708_510_fu_12966311_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_509_fu_12966299_p1.read()) + sc_biguint<15>(zext_ln708_510_fu_12966311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_53_fu_12966359_p2() {
    add_ln708_53_fu_12966359_p2 = (!zext_ln708_512_fu_12966343_p1.read().is_01() || !zext_ln708_513_fu_12966355_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_512_fu_12966343_p1.read()) + sc_biguint<15>(zext_ln708_513_fu_12966355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_54_fu_12966459_p2() {
    add_ln708_54_fu_12966459_p2 = (!zext_ln708_494_fu_12965464_p1.read().is_01() || !zext_ln708_515_fu_12966455_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_494_fu_12965464_p1.read()) + sc_biguint<15>(zext_ln708_515_fu_12966455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_55_fu_12969445_p2() {
    add_ln708_55_fu_12969445_p2 = (!zext_ln708_542_fu_12969437_p1.read().is_01() || !zext_ln708_543_fu_12969441_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_542_fu_12969437_p1.read()) + sc_biguint<15>(zext_ln708_543_fu_12969441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_56_fu_12969715_p2() {
    add_ln708_56_fu_12969715_p2 = (!zext_ln1118_1331_fu_12969061_p1.read().is_01() || !zext_ln708_545_fu_12969711_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1331_fu_12969061_p1.read()) + sc_biguint<15>(zext_ln708_545_fu_12969711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_57_fu_12971799_p2() {
    add_ln708_57_fu_12971799_p2 = (!zext_ln708_557_fu_12971783_p1.read().is_01() || !zext_ln708_558_fu_12971795_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_557_fu_12971783_p1.read()) + sc_biguint<15>(zext_ln708_558_fu_12971795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_58_fu_12971897_p2() {
    add_ln708_58_fu_12971897_p2 = (!zext_ln708_559_fu_12971889_p1.read().is_01() || !zext_ln708_560_fu_12971893_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_559_fu_12971889_p1.read()) + sc_biguint<15>(zext_ln708_560_fu_12971893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_59_fu_12972499_p2() {
    add_ln708_59_fu_12972499_p2 = (!zext_ln1118_1225_fu_12966031_p1.read().is_01() || !zext_ln1118_1226_fu_12966043_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1225_fu_12966031_p1.read()) + sc_biguint<15>(zext_ln1118_1226_fu_12966043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_5_fu_12927627_p2() {
    add_ln708_5_fu_12927627_p2 = (!zext_ln708_38_fu_12927611_p1.read().is_01() || !zext_ln708_39_fu_12927623_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_38_fu_12927611_p1.read()) + sc_biguint<15>(zext_ln708_39_fu_12927623_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_60_fu_12972795_p2() {
    add_ln708_60_fu_12972795_p2 = (!zext_ln708_569_fu_12972779_p1.read().is_01() || !zext_ln708_570_fu_12972791_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_569_fu_12972779_p1.read()) + sc_biguint<15>(zext_ln708_570_fu_12972791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_61_fu_12973260_p2() {
    add_ln708_61_fu_12973260_p2 = (!zext_ln708_512_fu_12966343_p1.read().is_01() || !zext_ln708_579_fu_12973256_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_512_fu_12966343_p1.read()) + sc_biguint<15>(zext_ln708_579_fu_12973256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_62_fu_12974599_p2() {
    add_ln708_62_fu_12974599_p2 = (!zext_ln1118_1390_fu_12970852_p1.read().is_01() || !zext_ln1118_1408_fu_12971533_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1390_fu_12970852_p1.read()) + sc_biguint<15>(zext_ln1118_1408_fu_12971533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_63_fu_12974637_p2() {
    add_ln708_63_fu_12974637_p2 = (!zext_ln1118_1171_fu_12964744_p1.read().is_01() || !zext_ln708_596_fu_12974633_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1171_fu_12964744_p1.read()) + sc_biguint<15>(zext_ln708_596_fu_12974633_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_64_fu_12974840_p2() {
    add_ln708_64_fu_12974840_p2 = (!zext_ln708_559_fu_12971889_p1.read().is_01() || !zext_ln708_602_fu_12974836_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_559_fu_12971889_p1.read()) + sc_biguint<15>(zext_ln708_602_fu_12974836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_65_fu_12974880_p2() {
    add_ln708_65_fu_12974880_p2 = (!zext_ln1118_1335_fu_12969201_p1.read().is_01() || !zext_ln708_603_fu_12974876_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1335_fu_12969201_p1.read()) + sc_biguint<15>(zext_ln708_603_fu_12974876_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_66_fu_12978161_p2() {
    add_ln708_66_fu_12978161_p2 = (!zext_ln708_557_fu_12971783_p1.read().is_01() || !zext_ln708_631_fu_12977535_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_557_fu_12971783_p1.read()) + sc_biguint<15>(zext_ln708_631_fu_12977535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_67_fu_12978825_p2() {
    add_ln708_67_fu_12978825_p2 = (!zext_ln708_494_fu_12965464_p1.read().is_01() || !zext_ln1118_1462_fu_12973380_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_494_fu_12965464_p1.read()) + sc_biguint<15>(zext_ln1118_1462_fu_12973380_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_68_fu_12979665_p2() {
    add_ln708_68_fu_12979665_p2 = (!zext_ln1118_1596_fu_12979173_p1.read().is_01() || !zext_ln708_667_fu_12979661_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1596_fu_12979173_p1.read()) + sc_biguint<15>(zext_ln708_667_fu_12979661_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_69_fu_12980837_p2() {
    add_ln708_69_fu_12980837_p2 = (!zext_ln1118_1390_fu_12970852_p1.read().is_01() || !zext_ln1118_1391_fu_12970864_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1390_fu_12970852_p1.read()) + sc_biguint<15>(zext_ln1118_1391_fu_12970864_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_6_fu_12927727_p2() {
    add_ln708_6_fu_12927727_p2 = (!zext_ln708_20_fu_12926732_p1.read().is_01() || !zext_ln708_41_fu_12927723_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_20_fu_12926732_p1.read()) + sc_biguint<15>(zext_ln708_41_fu_12927723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_70_fu_12981781_p2() {
    add_ln708_70_fu_12981781_p2 = (!zext_ln1118_1390_fu_12970852_p1.read().is_01() || !zext_ln1118_1592_fu_12978917_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1390_fu_12970852_p1.read()) + sc_biguint<15>(zext_ln1118_1592_fu_12978917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_71_fu_12981951_p2() {
    add_ln708_71_fu_12981951_p2 = (!zext_ln1118_1225_fu_12966031_p1.read().is_01() || !zext_ln708_696_fu_12981947_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1225_fu_12966031_p1.read()) + sc_biguint<15>(zext_ln708_696_fu_12981947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_72_fu_12984058_p2() {
    add_ln708_72_fu_12984058_p2 = (!zext_ln708_722_fu_12984042_p1.read().is_01() || !zext_ln708_723_fu_12984054_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_722_fu_12984042_p1.read()) + sc_biguint<15>(zext_ln708_723_fu_12984054_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_73_fu_12984846_p2() {
    add_ln708_73_fu_12984846_p2 = (!zext_ln708_731_fu_12984830_p1.read().is_01() || !zext_ln708_732_fu_12984842_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_731_fu_12984830_p1.read()) + sc_biguint<15>(zext_ln708_732_fu_12984842_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_74_fu_12985069_p2() {
    add_ln708_74_fu_12985069_p2 = (!zext_ln708_722_fu_12984042_p1.read().is_01() || !zext_ln708_737_fu_12985065_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_722_fu_12984042_p1.read()) + sc_biguint<15>(zext_ln708_737_fu_12985065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_75_fu_12985457_p2() {
    add_ln708_75_fu_12985457_p2 = (!zext_ln708_743_fu_12985441_p1.read().is_01() || !zext_ln708_744_fu_12985453_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_743_fu_12985441_p1.read()) + sc_biguint<15>(zext_ln708_744_fu_12985453_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_76_fu_12985681_p2() {
    add_ln708_76_fu_12985681_p2 = (!zext_ln708_746_fu_12985665_p1.read().is_01() || !zext_ln708_747_fu_12985677_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_746_fu_12985665_p1.read()) + sc_biguint<15>(zext_ln708_747_fu_12985677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_77_fu_12985725_p2() {
    add_ln708_77_fu_12985725_p2 = (!zext_ln708_749_fu_12985709_p1.read().is_01() || !zext_ln708_750_fu_12985721_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_749_fu_12985709_p1.read()) + sc_biguint<15>(zext_ln708_750_fu_12985721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_78_fu_12985825_p2() {
    add_ln708_78_fu_12985825_p2 = (!zext_ln708_731_fu_12984830_p1.read().is_01() || !zext_ln708_752_fu_12985821_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_731_fu_12984830_p1.read()) + sc_biguint<15>(zext_ln708_752_fu_12985821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_79_fu_12988811_p2() {
    add_ln708_79_fu_12988811_p2 = (!zext_ln708_779_fu_12988803_p1.read().is_01() || !zext_ln708_780_fu_12988807_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_779_fu_12988803_p1.read()) + sc_biguint<15>(zext_ln708_780_fu_12988807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_7_fu_12930713_p2() {
    add_ln708_7_fu_12930713_p2 = (!zext_ln708_68_fu_12930705_p1.read().is_01() || !zext_ln708_69_fu_12930709_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_68_fu_12930705_p1.read()) + sc_biguint<15>(zext_ln708_69_fu_12930709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_80_fu_12989081_p2() {
    add_ln708_80_fu_12989081_p2 = (!zext_ln1118_1890_fu_12988427_p1.read().is_01() || !zext_ln708_782_fu_12989077_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1890_fu_12988427_p1.read()) + sc_biguint<15>(zext_ln708_782_fu_12989077_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_81_fu_12991165_p2() {
    add_ln708_81_fu_12991165_p2 = (!zext_ln708_794_fu_12991149_p1.read().is_01() || !zext_ln708_795_fu_12991161_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_794_fu_12991149_p1.read()) + sc_biguint<15>(zext_ln708_795_fu_12991161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_82_fu_12991263_p2() {
    add_ln708_82_fu_12991263_p2 = (!zext_ln708_796_fu_12991255_p1.read().is_01() || !zext_ln708_797_fu_12991259_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_796_fu_12991255_p1.read()) + sc_biguint<15>(zext_ln708_797_fu_12991259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_83_fu_12991865_p2() {
    add_ln708_83_fu_12991865_p2 = (!zext_ln1118_1784_fu_12985397_p1.read().is_01() || !zext_ln1118_1785_fu_12985409_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1784_fu_12985397_p1.read()) + sc_biguint<15>(zext_ln1118_1785_fu_12985409_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_84_fu_12992161_p2() {
    add_ln708_84_fu_12992161_p2 = (!zext_ln708_806_fu_12992145_p1.read().is_01() || !zext_ln708_807_fu_12992157_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_806_fu_12992145_p1.read()) + sc_biguint<15>(zext_ln708_807_fu_12992157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_85_fu_12992626_p2() {
    add_ln708_85_fu_12992626_p2 = (!zext_ln708_749_fu_12985709_p1.read().is_01() || !zext_ln708_816_fu_12992622_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_749_fu_12985709_p1.read()) + sc_biguint<15>(zext_ln708_816_fu_12992622_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_86_fu_12993965_p2() {
    add_ln708_86_fu_12993965_p2 = (!zext_ln1118_1949_fu_12990218_p1.read().is_01() || !zext_ln1118_1967_fu_12990899_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1949_fu_12990218_p1.read()) + sc_biguint<15>(zext_ln1118_1967_fu_12990899_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_87_fu_12994003_p2() {
    add_ln708_87_fu_12994003_p2 = (!zext_ln1118_1730_fu_12984110_p1.read().is_01() || !zext_ln708_833_fu_12993999_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1730_fu_12984110_p1.read()) + sc_biguint<15>(zext_ln708_833_fu_12993999_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_88_fu_12994206_p2() {
    add_ln708_88_fu_12994206_p2 = (!zext_ln708_796_fu_12991255_p1.read().is_01() || !zext_ln708_839_fu_12994202_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_796_fu_12991255_p1.read()) + sc_biguint<15>(zext_ln708_839_fu_12994202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_89_fu_12994246_p2() {
    add_ln708_89_fu_12994246_p2 = (!zext_ln1118_1894_fu_12988567_p1.read().is_01() || !zext_ln708_840_fu_12994242_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1894_fu_12988567_p1.read()) + sc_biguint<15>(zext_ln708_840_fu_12994242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_8_fu_12930983_p2() {
    add_ln708_8_fu_12930983_p2 = (!zext_ln1118_213_fu_12930329_p1.read().is_01() || !zext_ln708_71_fu_12930979_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_213_fu_12930329_p1.read()) + sc_biguint<15>(zext_ln708_71_fu_12930979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_90_fu_12997527_p2() {
    add_ln708_90_fu_12997527_p2 = (!zext_ln708_794_fu_12991149_p1.read().is_01() || !zext_ln708_868_fu_12996901_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_794_fu_12991149_p1.read()) + sc_biguint<15>(zext_ln708_868_fu_12996901_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_91_fu_12998191_p2() {
    add_ln708_91_fu_12998191_p2 = (!zext_ln708_731_fu_12984830_p1.read().is_01() || !zext_ln1118_2021_fu_12992746_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_731_fu_12984830_p1.read()) + sc_biguint<15>(zext_ln1118_2021_fu_12992746_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_92_fu_12999031_p2() {
    add_ln708_92_fu_12999031_p2 = (!zext_ln1118_2155_fu_12998539_p1.read().is_01() || !zext_ln708_904_fu_12999027_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_2155_fu_12998539_p1.read()) + sc_biguint<15>(zext_ln708_904_fu_12999027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_93_fu_13000203_p2() {
    add_ln708_93_fu_13000203_p2 = (!zext_ln1118_1949_fu_12990218_p1.read().is_01() || !zext_ln1118_1950_fu_12990230_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1949_fu_12990218_p1.read()) + sc_biguint<15>(zext_ln1118_1950_fu_12990230_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_94_fu_13001147_p2() {
    add_ln708_94_fu_13001147_p2 = (!zext_ln1118_1949_fu_12990218_p1.read().is_01() || !zext_ln1118_2151_fu_12998283_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1949_fu_12990218_p1.read()) + sc_biguint<15>(zext_ln1118_2151_fu_12998283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_95_fu_13001317_p2() {
    add_ln708_95_fu_13001317_p2 = (!zext_ln1118_1784_fu_12985397_p1.read().is_01() || !zext_ln708_933_fu_13001313_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln1118_1784_fu_12985397_p1.read()) + sc_biguint<15>(zext_ln708_933_fu_13001313_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_9_fu_12933067_p2() {
    add_ln708_9_fu_12933067_p2 = (!zext_ln708_83_fu_12933051_p1.read().is_01() || !zext_ln708_84_fu_12933063_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_83_fu_12933051_p1.read()) + sc_biguint<15>(zext_ln708_84_fu_12933063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln708_fu_12925960_p2() {
    add_ln708_fu_12925960_p2 = (!zext_ln708_11_fu_12925944_p1.read().is_01() || !zext_ln708_12_fu_12925956_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln708_11_fu_12925944_p1.read()) + sc_biguint<15>(zext_ln708_12_fu_12925956_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_0() {
    ap_return_0 = acc_0_0_V_fu_13029368_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_1() {
    ap_return_1 = sext_ln703_159_fu_13029444_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_10() {
    ap_return_10 = acc_0_10_V_fu_13030065_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_100() {
    ap_return_100 = sext_ln703_2027_fu_13036319_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_101() {
    ap_return_101 = acc_3_5_V_fu_13036397_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_102() {
    ap_return_102 = acc_3_6_V_fu_13036464_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_103() {
    ap_return_103 = sext_ln703_2073_fu_13036530_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_104() {
    ap_return_104 = acc_3_8_V_fu_13036608_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_105() {
    ap_return_105 = acc_3_9_V_fu_13036682_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_106() {
    ap_return_106 = acc_3_10_V_fu_13036740_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_107() {
    ap_return_107 = acc_3_11_V_fu_13036807_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_108() {
    ap_return_108 = acc_3_12_V_fu_13036881_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_109() {
    ap_return_109 = sext_ln703_2186_fu_13036935_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_11() {
    ap_return_11 = acc_0_11_V_fu_13030132_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_110() {
    ap_return_110 = acc_3_14_V_fu_13037013_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_111() {
    ap_return_111 = acc_3_15_V_fu_13037071_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_112() {
    ap_return_112 = acc_3_16_V_fu_13037148_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_113() {
    ap_return_113 = sext_ln703_2251_fu_13037206_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_114() {
    ap_return_114 = acc_3_18_V_fu_13037253_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_115() {
    ap_return_115 = sext_ln703_2287_fu_13037340_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_116() {
    ap_return_116 = sext_ln703_2301_fu_13037417_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_117() {
    ap_return_117 = sext_ln703_2314_fu_13037498_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_118() {
    ap_return_118 = acc_3_22_V_fu_13037563_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_119() {
    ap_return_119 = acc_3_23_V_fu_13037636_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_12() {
    ap_return_12 = acc_0_12_V_fu_13030206_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_120() {
    ap_return_120 = acc_3_24_V_fu_13037707_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_121() {
    ap_return_121 = sext_ln703_2386_fu_13037786_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_122() {
    ap_return_122 = acc_3_26_V_fu_13037851_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_123() {
    ap_return_123 = acc_3_27_V_fu_13037918_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_124() {
    ap_return_124 = sext_ln703_2432_fu_13037988_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_125() {
    ap_return_125 = acc_3_29_V_fu_13038053_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_126() {
    ap_return_126 = acc_3_30_V_fu_13038136_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_127() {
    ap_return_127 = sext_ln703_2486_fu_13038209_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_13() {
    ap_return_13 = sext_ln703_387_fu_13030260_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_14() {
    ap_return_14 = acc_0_14_V_fu_13030338_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_15() {
    ap_return_15 = acc_0_15_V_fu_13030396_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_16() {
    ap_return_16 = acc_0_16_V_fu_13030473_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_17() {
    ap_return_17 = sext_ln703_460_fu_13030531_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_18() {
    ap_return_18 = acc_0_18_V_fu_13030578_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_19() {
    ap_return_19 = sext_ln703_497_fu_13030665_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_2() {
    ap_return_2 = sext_ln703_173_fu_13029512_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_20() {
    ap_return_20 = sext_ln703_513_fu_13030742_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_21() {
    ap_return_21 = sext_ln703_528_fu_13030823_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_22() {
    ap_return_22 = acc_0_22_V_fu_13030888_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_23() {
    ap_return_23 = acc_0_23_V_fu_13030961_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_24() {
    ap_return_24 = acc_0_24_V_fu_13031032_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_25() {
    ap_return_25 = sext_ln703_607_fu_13031111_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_26() {
    ap_return_26 = acc_0_26_V_fu_13031176_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_27() {
    ap_return_27 = acc_0_27_V_fu_13031243_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_28() {
    ap_return_28 = sext_ln703_657_fu_13031313_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_29() {
    ap_return_29 = acc_0_29_V_fu_13031378_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_3() {
    ap_return_3 = acc_0_3_V_fu_13029577_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_30() {
    ap_return_30 = acc_0_30_V_fu_13031461_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_31() {
    ap_return_31 = sext_ln703_723_fu_13031534_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_32() {
    ap_return_32 = acc_1_0_V_fu_13031593_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_33() {
    ap_return_33 = sext_ln703_774_fu_13031669_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_34() {
    ap_return_34 = sext_ln703_796_fu_13031737_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_35() {
    ap_return_35 = acc_1_3_V_fu_13031802_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_36() {
    ap_return_36 = sext_ln703_854_fu_13031869_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_37() {
    ap_return_37 = acc_1_5_V_fu_13031947_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_38() {
    ap_return_38 = acc_1_6_V_fu_13032014_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_39() {
    ap_return_39 = sext_ln703_931_fu_13032080_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_4() {
    ap_return_4 = sext_ln703_213_fu_13029644_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_40() {
    ap_return_40 = acc_1_8_V_fu_13032158_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_41() {
    ap_return_41 = acc_1_9_V_fu_13032232_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_42() {
    ap_return_42 = acc_1_10_V_fu_13032290_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_43() {
    ap_return_43 = acc_1_11_V_fu_13032357_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_44() {
    ap_return_44 = acc_1_12_V_fu_13032431_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_45() {
    ap_return_45 = sext_ln703_1108_fu_13032485_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_46() {
    ap_return_46 = acc_1_14_V_fu_13032563_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_47() {
    ap_return_47 = acc_1_15_V_fu_13032621_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_48() {
    ap_return_48 = acc_1_16_V_fu_13032698_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_49() {
    ap_return_49 = sext_ln703_1173_fu_13032756_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_5() {
    ap_return_5 = acc_0_5_V_fu_13029722_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_50() {
    ap_return_50 = acc_1_18_V_fu_13032803_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_51() {
    ap_return_51 = sext_ln703_1209_fu_13032890_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_52() {
    ap_return_52 = sext_ln703_1223_fu_13032967_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_53() {
    ap_return_53 = sext_ln703_1236_fu_13033048_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_54() {
    ap_return_54 = acc_1_22_V_fu_13033113_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_55() {
    ap_return_55 = acc_1_23_V_fu_13033186_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_56() {
    ap_return_56 = acc_1_24_V_fu_13033257_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_57() {
    ap_return_57 = sext_ln703_1308_fu_13033336_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_58() {
    ap_return_58 = acc_1_26_V_fu_13033401_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_59() {
    ap_return_59 = acc_1_27_V_fu_13033468_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_6() {
    ap_return_6 = acc_0_6_V_fu_13029789_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_60() {
    ap_return_60 = sext_ln703_1354_fu_13033538_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_61() {
    ap_return_61 = acc_1_29_V_fu_13033603_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_62() {
    ap_return_62 = acc_1_30_V_fu_13033686_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_63() {
    ap_return_63 = sext_ln703_1408_fu_13033759_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_64() {
    ap_return_64 = acc_2_0_V_fu_13033818_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_65() {
    ap_return_65 = sext_ln703_1436_fu_13033894_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_66() {
    ap_return_66 = sext_ln703_1450_fu_13033962_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_67() {
    ap_return_67 = acc_2_3_V_fu_13034027_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_68() {
    ap_return_68 = sext_ln703_1488_fu_13034094_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_69() {
    ap_return_69 = acc_2_5_V_fu_13034172_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_7() {
    ap_return_7 = sext_ln703_263_fu_13029855_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_70() {
    ap_return_70 = acc_2_6_V_fu_13034239_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_71() {
    ap_return_71 = sext_ln703_1534_fu_13034305_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_72() {
    ap_return_72 = acc_2_8_V_fu_13034383_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_73() {
    ap_return_73 = acc_2_9_V_fu_13034457_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_74() {
    ap_return_74 = acc_2_10_V_fu_13034515_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_75() {
    ap_return_75 = acc_2_11_V_fu_13034582_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_76() {
    ap_return_76 = acc_2_12_V_fu_13034656_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_77() {
    ap_return_77 = sext_ln703_1647_fu_13034710_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_78() {
    ap_return_78 = acc_2_14_V_fu_13034788_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_79() {
    ap_return_79 = acc_2_15_V_fu_13034846_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_8() {
    ap_return_8 = acc_0_8_V_fu_13029933_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_80() {
    ap_return_80 = acc_2_16_V_fu_13034923_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_81() {
    ap_return_81 = sext_ln703_1712_fu_13034981_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_82() {
    ap_return_82 = acc_2_18_V_fu_13035028_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_83() {
    ap_return_83 = sext_ln703_1748_fu_13035115_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_84() {
    ap_return_84 = sext_ln703_1762_fu_13035192_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_85() {
    ap_return_85 = sext_ln703_1775_fu_13035273_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_86() {
    ap_return_86 = acc_2_22_V_fu_13035338_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_87() {
    ap_return_87 = acc_2_23_V_fu_13035411_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_88() {
    ap_return_88 = acc_2_24_V_fu_13035482_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_89() {
    ap_return_89 = sext_ln703_1847_fu_13035561_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_9() {
    ap_return_9 = acc_0_9_V_fu_13030007_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_90() {
    ap_return_90 = acc_2_26_V_fu_13035626_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_91() {
    ap_return_91 = acc_2_27_V_fu_13035693_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_92() {
    ap_return_92 = sext_ln703_1893_fu_13035763_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_93() {
    ap_return_93 = acc_2_29_V_fu_13035828_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_94() {
    ap_return_94 = acc_2_30_V_fu_13035911_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_95() {
    ap_return_95 = sext_ln703_1947_fu_13035984_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_96() {
    ap_return_96 = acc_3_0_V_fu_13036043_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_97() {
    ap_return_97 = sext_ln703_1975_fu_13036119_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_98() {
    ap_return_98 = sext_ln703_1989_fu_13036187_p1.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_ap_return_99() {
    ap_return_99 = acc_3_3_V_fu_13036252_p2.read();
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_100_fu_12993517_p4() {
    lshr_ln708_100_fu_12993517_p4 = p_read119.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_101_fu_12994188_p4() {
    lshr_ln708_101_fu_12994188_p4 = p_read127.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_102_fu_12994608_p4() {
    lshr_ln708_102_fu_12994608_p4 = sub_ln708_167_fu_12994602_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_103_fu_12994692_p4() {
    lshr_ln708_103_fu_12994692_p4 = p_read123.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_104_fu_12994776_p4() {
    lshr_ln708_104_fu_12994776_p4 = sub_ln708_168_fu_12994770_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_105_fu_12995671_p4() {
    lshr_ln708_105_fu_12995671_p4 = p_read109.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_106_fu_12995873_p4() {
    lshr_ln708_106_fu_12995873_p4 = p_read119.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_107_fu_12996503_p4() {
    lshr_ln708_107_fu_12996503_p4 = p_read99.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_108_fu_12996549_p4() {
    lshr_ln708_108_fu_12996549_p4 = p_read101.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_109_fu_12996717_p4() {
    lshr_ln708_109_fu_12996717_p4 = p_read110.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_10_fu_12936594_p4() {
    lshr_ln708_10_fu_12936594_p4 = p_read27.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_110_fu_12996949_p4() {
    lshr_ln708_110_fu_12996949_p4 = p_read127.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_111_fu_12996973_p4() {
    lshr_ln708_111_fu_12996973_p4 = sub_ln708_175_fu_12996967_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_112_fu_12997471_p4() {
    lshr_ln708_112_fu_12997471_p4 = sub_ln708_176_fu_12997465_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_113_fu_12997513_p4() {
    lshr_ln708_113_fu_12997513_p4 = p_read124.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_114_fu_12997841_p4() {
    lshr_ln708_114_fu_12997841_p4 = p_read115.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_115_fu_12998313_p4() {
    lshr_ln708_115_fu_12998313_p4 = sub_ln708_180_fu_12998307_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_116_fu_12998525_p4() {
    lshr_ln708_116_fu_12998525_p4 = p_read97.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_117_fu_12999283_p4() {
    lshr_ln708_117_fu_12999283_p4 = p_read118.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_118_fu_12999965_p4() {
    lshr_ln708_118_fu_12999965_p4 = p_read98.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_119_fu_13000503_p4() {
    lshr_ln708_119_fu_13000503_p4 = sub_ln708_189_fu_13000497_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_11_fu_12936678_p4() {
    lshr_ln708_11_fu_12936678_p4 = sub_ln708_24_fu_12936672_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_120_fu_13000957_p4() {
    lshr_ln708_120_fu_13000957_p4 = p_read102.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_121_fu_13000999_p4() {
    lshr_ln708_121_fu_13000999_p4 = p_read106.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_122_fu_13001547_p4() {
    lshr_ln708_122_fu_13001547_p4 = p_read111.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_123_fu_13002447_p4() {
    lshr_ln708_123_fu_13002447_p4 = p_read117.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_12_fu_12937573_p4() {
    lshr_ln708_12_fu_12937573_p4 = p_read13.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_13_fu_12937775_p4() {
    lshr_ln708_13_fu_12937775_p4 = p_read23.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_14_fu_12938405_p4() {
    lshr_ln708_14_fu_12938405_p4 = p_read3.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_15_fu_12938451_p4() {
    lshr_ln708_15_fu_12938451_p4 = p_read5.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_16_fu_12938619_p4() {
    lshr_ln708_16_fu_12938619_p4 = p_read14.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_17_fu_12938851_p4() {
    lshr_ln708_17_fu_12938851_p4 = p_read31.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_18_fu_12938875_p4() {
    lshr_ln708_18_fu_12938875_p4 = sub_ln708_31_fu_12938869_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_19_fu_12939373_p4() {
    lshr_ln708_19_fu_12939373_p4 = sub_ln708_32_fu_12939367_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_1_fu_12931459_p4() {
    lshr_ln708_1_fu_12931459_p4 = p_read19.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_20_fu_12939415_p4() {
    lshr_ln708_20_fu_12939415_p4 = p_read28.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_21_fu_12939743_p4() {
    lshr_ln708_21_fu_12939743_p4 = p_read19.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_22_fu_12940215_p4() {
    lshr_ln708_22_fu_12940215_p4 = sub_ln708_36_fu_12940209_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_23_fu_12940427_p4() {
    lshr_ln708_23_fu_12940427_p4 = p_read1.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_24_fu_12941185_p4() {
    lshr_ln708_24_fu_12941185_p4 = p_read22.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_25_fu_12941867_p4() {
    lshr_ln708_25_fu_12941867_p4 = p_read2.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_26_fu_12942405_p4() {
    lshr_ln708_26_fu_12942405_p4 = sub_ln708_45_fu_12942399_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_27_fu_12942859_p4() {
    lshr_ln708_27_fu_12942859_p4 = p_read6.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_28_fu_12942901_p4() {
    lshr_ln708_28_fu_12942901_p4 = p_read10.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_29_fu_12943449_p4() {
    lshr_ln708_29_fu_12943449_p4 = p_read15.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_2_fu_12932049_p4() {
    lshr_ln708_2_fu_12932049_p4 = p_read16.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_30_fu_12944349_p4() {
    lshr_ln708_30_fu_12944349_p4 = p_read21.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_31_fu_12949090_p4() {
    lshr_ln708_31_fu_12949090_p4 = p_read61.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_32_fu_12950825_p4() {
    lshr_ln708_32_fu_12950825_p4 = p_read51.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_33_fu_12951415_p4() {
    lshr_ln708_33_fu_12951415_p4 = p_read48.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_34_fu_12953245_p4() {
    lshr_ln708_34_fu_12953245_p4 = p_read38.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_35_fu_12953978_p4() {
    lshr_ln708_35_fu_12953978_p4 = p_read44.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_36_fu_12954545_p4() {
    lshr_ln708_36_fu_12954545_p4 = sub_ln708_67_fu_12954539_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_37_fu_12954635_p4() {
    lshr_ln708_37_fu_12954635_p4 = p_read48.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_38_fu_12954785_p4() {
    lshr_ln708_38_fu_12954785_p4 = p_read55.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_39_fu_12955456_p4() {
    lshr_ln708_39_fu_12955456_p4 = p_read63.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_3_fu_12933879_p4() {
    lshr_ln708_3_fu_12933879_p4 = p_read6.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_40_fu_12955876_p4() {
    lshr_ln708_40_fu_12955876_p4 = sub_ln708_71_fu_12955870_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_41_fu_12955960_p4() {
    lshr_ln708_41_fu_12955960_p4 = p_read59.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_42_fu_12956044_p4() {
    lshr_ln708_42_fu_12956044_p4 = sub_ln708_72_fu_12956038_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_43_fu_12956939_p4() {
    lshr_ln708_43_fu_12956939_p4 = p_read45.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_44_fu_12957141_p4() {
    lshr_ln708_44_fu_12957141_p4 = p_read55.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_45_fu_12957771_p4() {
    lshr_ln708_45_fu_12957771_p4 = p_read35.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_46_fu_12957817_p4() {
    lshr_ln708_46_fu_12957817_p4 = p_read37.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_47_fu_12957985_p4() {
    lshr_ln708_47_fu_12957985_p4 = p_read46.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_48_fu_12958217_p4() {
    lshr_ln708_48_fu_12958217_p4 = p_read63.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_49_fu_12958241_p4() {
    lshr_ln708_49_fu_12958241_p4 = sub_ln708_79_fu_12958235_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_4_fu_12934612_p4() {
    lshr_ln708_4_fu_12934612_p4 = p_read12.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_50_fu_12958739_p4() {
    lshr_ln708_50_fu_12958739_p4 = sub_ln708_80_fu_12958733_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_51_fu_12958781_p4() {
    lshr_ln708_51_fu_12958781_p4 = p_read60.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_52_fu_12959109_p4() {
    lshr_ln708_52_fu_12959109_p4 = p_read51.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_53_fu_12959581_p4() {
    lshr_ln708_53_fu_12959581_p4 = sub_ln708_84_fu_12959575_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_54_fu_12959793_p4() {
    lshr_ln708_54_fu_12959793_p4 = p_read33.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_55_fu_12960551_p4() {
    lshr_ln708_55_fu_12960551_p4 = p_read54.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_56_fu_12961233_p4() {
    lshr_ln708_56_fu_12961233_p4 = p_read34.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_57_fu_12961771_p4() {
    lshr_ln708_57_fu_12961771_p4 = sub_ln708_93_fu_12961765_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_58_fu_12962225_p4() {
    lshr_ln708_58_fu_12962225_p4 = p_read38.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_59_fu_12962267_p4() {
    lshr_ln708_59_fu_12962267_p4 = p_read42.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_5_fu_12935179_p4() {
    lshr_ln708_5_fu_12935179_p4 = sub_ln708_19_fu_12935173_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_60_fu_12962815_p4() {
    lshr_ln708_60_fu_12962815_p4 = p_read47.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_61_fu_12963715_p4() {
    lshr_ln708_61_fu_12963715_p4 = p_read53.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_62_fu_12968456_p4() {
    lshr_ln708_62_fu_12968456_p4 = p_read93.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_63_fu_12970191_p4() {
    lshr_ln708_63_fu_12970191_p4 = p_read83.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_64_fu_12970781_p4() {
    lshr_ln708_64_fu_12970781_p4 = p_read80.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_65_fu_12972611_p4() {
    lshr_ln708_65_fu_12972611_p4 = p_read70.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_66_fu_12973344_p4() {
    lshr_ln708_66_fu_12973344_p4 = p_read76.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_67_fu_12973911_p4() {
    lshr_ln708_67_fu_12973911_p4 = sub_ln708_115_fu_12973905_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_68_fu_12974001_p4() {
    lshr_ln708_68_fu_12974001_p4 = p_read80.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_69_fu_12974151_p4() {
    lshr_ln708_69_fu_12974151_p4 = p_read87.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_6_fu_12935269_p4() {
    lshr_ln708_6_fu_12935269_p4 = p_read16.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_70_fu_12974822_p4() {
    lshr_ln708_70_fu_12974822_p4 = p_read95.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_71_fu_12975242_p4() {
    lshr_ln708_71_fu_12975242_p4 = sub_ln708_119_fu_12975236_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_72_fu_12975326_p4() {
    lshr_ln708_72_fu_12975326_p4 = p_read91.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_73_fu_12975410_p4() {
    lshr_ln708_73_fu_12975410_p4 = sub_ln708_120_fu_12975404_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_74_fu_12976305_p4() {
    lshr_ln708_74_fu_12976305_p4 = p_read77.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_75_fu_12976507_p4() {
    lshr_ln708_75_fu_12976507_p4 = p_read87.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_76_fu_12977137_p4() {
    lshr_ln708_76_fu_12977137_p4 = p_read67.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_77_fu_12977183_p4() {
    lshr_ln708_77_fu_12977183_p4 = p_read69.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_78_fu_12977351_p4() {
    lshr_ln708_78_fu_12977351_p4 = p_read78.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_79_fu_12977583_p4() {
    lshr_ln708_79_fu_12977583_p4 = p_read95.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_7_fu_12935419_p4() {
    lshr_ln708_7_fu_12935419_p4 = p_read23.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_80_fu_12977607_p4() {
    lshr_ln708_80_fu_12977607_p4 = sub_ln708_127_fu_12977601_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_81_fu_12978105_p4() {
    lshr_ln708_81_fu_12978105_p4 = sub_ln708_128_fu_12978099_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_82_fu_12978147_p4() {
    lshr_ln708_82_fu_12978147_p4 = p_read92.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_83_fu_12978475_p4() {
    lshr_ln708_83_fu_12978475_p4 = p_read83.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_84_fu_12978947_p4() {
    lshr_ln708_84_fu_12978947_p4 = sub_ln708_132_fu_12978941_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_85_fu_12979159_p4() {
    lshr_ln708_85_fu_12979159_p4 = p_read65.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_86_fu_12979917_p4() {
    lshr_ln708_86_fu_12979917_p4 = p_read86.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_87_fu_12980599_p4() {
    lshr_ln708_87_fu_12980599_p4 = p_read66.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_88_fu_12981137_p4() {
    lshr_ln708_88_fu_12981137_p4 = sub_ln708_141_fu_12981131_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_89_fu_12981591_p4() {
    lshr_ln708_89_fu_12981591_p4 = p_read70.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_8_fu_12936090_p4() {
    lshr_ln708_8_fu_12936090_p4 = p_read31.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_90_fu_12981633_p4() {
    lshr_ln708_90_fu_12981633_p4 = p_read74.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_91_fu_12982181_p4() {
    lshr_ln708_91_fu_12982181_p4 = p_read79.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_92_fu_12983081_p4() {
    lshr_ln708_92_fu_12983081_p4 = p_read85.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_93_fu_12987822_p4() {
    lshr_ln708_93_fu_12987822_p4 = p_read125.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_94_fu_12989557_p4() {
    lshr_ln708_94_fu_12989557_p4 = p_read115.read().range(7, 1);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_95_fu_12990147_p4() {
    lshr_ln708_95_fu_12990147_p4 = p_read112.read().range(7, 4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_96_fu_12991977_p4() {
    lshr_ln708_96_fu_12991977_p4 = p_read102.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_97_fu_12992710_p4() {
    lshr_ln708_97_fu_12992710_p4 = p_read108.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_98_fu_12993277_p4() {
    lshr_ln708_98_fu_12993277_p4 = sub_ln708_163_fu_12993271_p2.read().range(9, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_99_fu_12993367_p4() {
    lshr_ln708_99_fu_12993367_p4 = p_read112.read().range(7, 3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_9_fu_12936510_p4() {
    lshr_ln708_9_fu_12936510_p4 = sub_ln708_23_fu_12936504_p2.read().range(10, 5);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_lshr_ln708_s_fu_12929724_p4() {
    lshr_ln708_s_fu_12929724_p4 = p_read29.read().range(7, 2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1000_fu_2195_p0() {
    mul_ln1118_1000_fu_2195_p0 =  (sc_lv<8>) (mult_2174_V_fu_12967560_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1000_fu_2195_p2() {
    mul_ln1118_1000_fu_2195_p2 = (!mul_ln1118_1000_fu_2195_p0.read().is_01() || !ap_const_lv16_FF8E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1000_fu_2195_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1001_fu_1757_p0() {
    mul_ln1118_1001_fu_1757_p0 =  (sc_lv<8>) (zext_ln1116_138_fu_12975424_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1001_fu_1757_p2() {
    mul_ln1118_1001_fu_1757_p2 = (!mul_ln1118_1001_fu_1757_p0.read().is_01() || !ap_const_lv16_FFA2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1001_fu_1757_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1002_fu_2197_p0() {
    mul_ln1118_1002_fu_2197_p0 =  (sc_lv<8>) (zext_ln1116_102_fu_12963868_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1002_fu_2197_p2() {
    mul_ln1118_1002_fu_2197_p2 = (!mul_ln1118_1002_fu_2197_p0.read().is_01() || !ap_const_lv16_FFAA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1002_fu_2197_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1003_fu_3003_p0() {
    mul_ln1118_1003_fu_3003_p0 =  (sc_lv<8>) (zext_ln1118_1125_fu_12963906_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1003_fu_3003_p2() {
    mul_ln1118_1003_fu_3003_p2 = (!mul_ln1118_1003_fu_3003_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1003_fu_3003_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1004_fu_2200_p0() {
    mul_ln1118_1004_fu_2200_p0 =  (sc_lv<8>) (zext_ln1116_105_fu_12964017_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1004_fu_2200_p2() {
    mul_ln1118_1004_fu_2200_p2 = (!mul_ln1118_1004_fu_2200_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1004_fu_2200_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1005_fu_2206_p0() {
    mul_ln1118_1005_fu_2206_p0 =  (sc_lv<8>) (zext_ln708_487_fu_12964904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1005_fu_2206_p2() {
    mul_ln1118_1005_fu_2206_p2 = (!mul_ln1118_1005_fu_2206_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1005_fu_2206_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1006_fu_2208_p0() {
    mul_ln1118_1006_fu_2208_p0 =  (sc_lv<8>) (zext_ln1116_102_fu_12963868_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1006_fu_2208_p2() {
    mul_ln1118_1006_fu_2208_p2 = (!mul_ln1118_1006_fu_2208_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1006_fu_2208_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1007_fu_2576_p0() {
    mul_ln1118_1007_fu_2576_p0 =  (sc_lv<8>) (zext_ln1116_105_fu_12964017_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1007_fu_2576_p2() {
    mul_ln1118_1007_fu_2576_p2 = (!mul_ln1118_1007_fu_2576_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1007_fu_2576_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1008_fu_3265_p0() {
    mul_ln1118_1008_fu_3265_p0 =  (sc_lv<8>) (zext_ln1118_1142_fu_12964240_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1008_fu_3265_p2() {
    mul_ln1118_1008_fu_3265_p2 = (!mul_ln1118_1008_fu_3265_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1008_fu_3265_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1009_fu_2963_p0() {
    mul_ln1118_1009_fu_2963_p0 =  (sc_lv<8>) (zext_ln1116_110_fu_12964261_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1009_fu_2963_p2() {
    mul_ln1118_1009_fu_2963_p2 = (!mul_ln1118_1009_fu_2963_p0.read().is_01() || !ap_const_lv16_FF93.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1009_fu_2963_p0.read()) * sc_bigint<16>(ap_const_lv16_FF93);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1010_fu_1422_p0() {
    mul_ln1118_1010_fu_1422_p0 =  (sc_lv<8>) (zext_ln1116_111_fu_12964322_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1010_fu_1422_p2() {
    mul_ln1118_1010_fu_1422_p2 = (!mul_ln1118_1010_fu_1422_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1010_fu_1422_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1011_fu_1852_p0() {
    mul_ln1118_1011_fu_1852_p0 =  (sc_lv<8>) (zext_ln1116_113_fu_12964379_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1011_fu_1852_p2() {
    mul_ln1118_1011_fu_1852_p2 = (!mul_ln1118_1011_fu_1852_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1011_fu_1852_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1012_fu_2958_p0() {
    mul_ln1118_1012_fu_2958_p0 =  (sc_lv<8>) (zext_ln1118_1159_fu_12964552_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1012_fu_2958_p2() {
    mul_ln1118_1012_fu_2958_p2 = (!mul_ln1118_1012_fu_2958_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1012_fu_2958_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1013_fu_2994_p0() {
    mul_ln1118_1013_fu_2994_p0 =  (sc_lv<8>) (zext_ln1116_130_fu_12970816_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1013_fu_2994_p2() {
    mul_ln1118_1013_fu_2994_p2 = (!mul_ln1118_1013_fu_2994_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1013_fu_2994_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1014_fu_2523_p0() {
    mul_ln1118_1014_fu_2523_p0 =  (sc_lv<8>) (zext_ln1116_143_fu_12975760_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1014_fu_2523_p2() {
    mul_ln1118_1014_fu_2523_p2 = (!mul_ln1118_1014_fu_2523_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1014_fu_2523_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1015_fu_2651_p0() {
    mul_ln1118_1015_fu_2651_p0 =  (sc_lv<8>) (zext_ln1116_133_fu_12970962_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1015_fu_2651_p2() {
    mul_ln1118_1015_fu_2651_p2 = (!mul_ln1118_1015_fu_2651_p0.read().is_01() || !ap_const_lv16_FF9A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1015_fu_2651_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1016_fu_2518_p0() {
    mul_ln1118_1016_fu_2518_p0 =  (sc_lv<8>) (zext_ln1116_144_fu_12975866_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1016_fu_2518_p2() {
    mul_ln1118_1016_fu_2518_p2 = (!mul_ln1118_1016_fu_2518_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1016_fu_2518_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1017_fu_3153_p0() {
    mul_ln1118_1017_fu_3153_p0 =  (sc_lv<8>) (zext_ln1116_119_fu_12965063_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1017_fu_3153_p2() {
    mul_ln1118_1017_fu_3153_p2 = (!mul_ln1118_1017_fu_3153_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1017_fu_3153_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1018_fu_2344_p0() {
    mul_ln1118_1018_fu_2344_p0 =  (sc_lv<8>) (zext_ln708_530_fu_12968445_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1018_fu_2344_p2() {
    mul_ln1118_1018_fu_2344_p2 = (!mul_ln1118_1018_fu_2344_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1018_fu_2344_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1019_fu_3148_p0() {
    mul_ln1118_1019_fu_3148_p0 =  (sc_lv<8>) (zext_ln1118_1124_fu_12963882_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1019_fu_3148_p2() {
    mul_ln1118_1019_fu_3148_p2 = (!mul_ln1118_1019_fu_3148_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1019_fu_3148_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1020_fu_2677_p0() {
    mul_ln1118_1020_fu_2677_p0 =  (sc_lv<8>) (mul_ln1118_1020_fu_2677_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1020_fu_2677_p00() {
    mul_ln1118_1020_fu_2677_p00 = esl_zext<13,8>(p_read67.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1020_fu_2677_p2() {
    mul_ln1118_1020_fu_2677_p2 = (!mul_ln1118_1020_fu_2677_p0.read().is_01() || !ap_const_lv13_17.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1020_fu_2677_p0.read()) * sc_biguint<13>(ap_const_lv13_17);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1021_fu_2544_p0() {
    mul_ln1118_1021_fu_2544_p0 =  (sc_lv<8>) (zext_ln1118_1282_fu_12967726_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1021_fu_2544_p2() {
    mul_ln1118_1021_fu_2544_p2 = (!mul_ln1118_1021_fu_2544_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1021_fu_2544_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1022_fu_2073_p0() {
    mul_ln1118_1022_fu_2073_p0 =  (sc_lv<8>) (zext_ln1118_1378_fu_12970554_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1022_fu_2073_p2() {
    mul_ln1118_1022_fu_2073_p2 = (!mul_ln1118_1022_fu_2073_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1022_fu_2073_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1023_fu_1433_p0() {
    mul_ln1118_1023_fu_1433_p0 =  (sc_lv<8>) (zext_ln1118_1165_fu_12964660_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1023_fu_1433_p2() {
    mul_ln1118_1023_fu_1433_p2 = (!mul_ln1118_1023_fu_1433_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1023_fu_1433_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1024_fu_2201_p0() {
    mul_ln1118_1024_fu_2201_p0 =  (sc_lv<8>) (zext_ln1118_1174_fu_12964823_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1024_fu_2201_p2() {
    mul_ln1118_1024_fu_2201_p2 = (!mul_ln1118_1024_fu_2201_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1024_fu_2201_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1025_fu_1899_p0() {
    mul_ln1118_1025_fu_1899_p0 =  (sc_lv<8>) (zext_ln1118_1184_fu_12964984_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1025_fu_1899_p2() {
    mul_ln1118_1025_fu_1899_p2 = (!mul_ln1118_1025_fu_1899_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1025_fu_1899_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1026_fu_3005_p0() {
    mul_ln1118_1026_fu_3005_p0 =  (sc_lv<8>) (zext_ln1118_1312_fu_12968394_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1026_fu_3005_p2() {
    mul_ln1118_1026_fu_3005_p2 = (!mul_ln1118_1026_fu_3005_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1026_fu_3005_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1027_fu_2365_p0() {
    mul_ln1118_1027_fu_2365_p0 =  (sc_lv<8>) (zext_ln1116_153_fu_12983234_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1027_fu_2365_p2() {
    mul_ln1118_1027_fu_2365_p2 = (!mul_ln1118_1027_fu_2365_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1027_fu_2365_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1028_fu_2063_p0() {
    mul_ln1118_1028_fu_2063_p0 =  (sc_lv<8>) (zext_ln1116_156_fu_12983383_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1028_fu_2063_p2() {
    mul_ln1118_1028_fu_2063_p2 = (!mul_ln1118_1028_fu_2063_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1028_fu_2063_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1029_fu_3169_p0() {
    mul_ln1118_1029_fu_3169_p0 =  (sc_lv<8>) (zext_ln1118_1693_fu_12983444_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1029_fu_3169_p2() {
    mul_ln1118_1029_fu_3169_p2 = (!mul_ln1118_1029_fu_3169_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1029_fu_3169_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1030_fu_2227_p0() {
    mul_ln1118_1030_fu_2227_p0 =  (sc_lv<8>) (zext_ln708_716_fu_12983592_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1030_fu_2227_p2() {
    mul_ln1118_1030_fu_2227_p2 = (!mul_ln1118_1030_fu_2227_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1030_fu_2227_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1031_fu_1756_p0() {
    mul_ln1118_1031_fu_1756_p0 =  (sc_lv<8>) (zext_ln1116_164_fu_12983745_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1031_fu_1756_p2() {
    mul_ln1118_1031_fu_1756_p2 = (!mul_ln1118_1031_fu_1756_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1031_fu_1756_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1032_fu_3200_p0() {
    mul_ln1118_1032_fu_3200_p0 =  (sc_lv<8>) (zext_ln1118_1718_fu_12983918_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1032_fu_3200_p2() {
    mul_ln1118_1032_fu_3200_p2 = (!mul_ln1118_1032_fu_3200_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1032_fu_3200_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1033_fu_2089_p0() {
    mul_ln1118_1033_fu_2089_p0 =  (sc_lv<8>) (zext_ln1118_1721_fu_12983961_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1033_fu_2089_p2() {
    mul_ln1118_1033_fu_2089_p2 = (!mul_ln1118_1033_fu_2089_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1033_fu_2089_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1034_fu_3026_p0() {
    mul_ln1118_1034_fu_3026_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12984178_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1034_fu_3026_p2() {
    mul_ln1118_1034_fu_3026_p2 = (!mul_ln1118_1034_fu_3026_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1034_fu_3026_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1035_fu_2724_p0() {
    mul_ln1118_1035_fu_2724_p0 =  (sc_lv<8>) (zext_ln1118_1744_fu_12984398_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1035_fu_2724_p2() {
    mul_ln1118_1035_fu_2724_p2 = (!mul_ln1118_1035_fu_2724_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1035_fu_2724_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1036_fu_2084_p0() {
    mul_ln1118_1036_fu_2084_p0 =  (sc_lv<8>) (zext_ln1116_170_fu_12984429_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1036_fu_2084_p2() {
    mul_ln1118_1036_fu_2084_p2 = (!mul_ln1118_1036_fu_2084_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1036_fu_2084_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1037_fu_3359_p0() {
    mul_ln1118_1037_fu_3359_p0 =  (sc_lv<8>) (zext_ln1118_1749_fu_12984503_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1037_fu_3359_p2() {
    mul_ln1118_1037_fu_3359_p2 = (!mul_ln1118_1037_fu_3359_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1037_fu_3359_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1038_fu_2719_p0() {
    mul_ln1118_1038_fu_2719_p0 =  (sc_lv<8>) (zext_ln1116_171_fu_12984524_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1038_fu_2719_p2() {
    mul_ln1118_1038_fu_2719_p2 = (!mul_ln1118_1038_fu_2719_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1038_fu_2719_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1039_fu_2417_p0() {
    mul_ln1118_1039_fu_2417_p0 =  (sc_lv<8>) (zext_ln1118_1683_fu_12983248_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1039_fu_2417_p2() {
    mul_ln1118_1039_fu_2417_p2 = (!mul_ln1118_1039_fu_2417_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1039_fu_2417_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1040_fu_2883_p0() {
    mul_ln1118_1040_fu_2883_p0 =  (sc_lv<8>) (zext_ln1116_157_fu_12983424_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1040_fu_2883_p2() {
    mul_ln1118_1040_fu_2883_p2 = (!mul_ln1118_1040_fu_2883_p0.read().is_01() || !ap_const_lv16_FF8B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1040_fu_2883_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1041_fu_1772_p0() {
    mul_ln1118_1041_fu_1772_p0 =  (sc_lv<8>) (zext_ln1118_1699_fu_12983562_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1041_fu_1772_p2() {
    mul_ln1118_1041_fu_1772_p2 = (!mul_ln1118_1041_fu_1772_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1041_fu_1772_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1042_fu_1808_p0() {
    mul_ln1118_1042_fu_1808_p0 =  (sc_lv<8>) (zext_ln1118_1701_fu_12983606_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1042_fu_1808_p2() {
    mul_ln1118_1042_fu_1808_p2 = (!mul_ln1118_1042_fu_1808_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1042_fu_1808_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1043_fu_2914_p0() {
    mul_ln1118_1043_fu_2914_p0 =  (sc_lv<8>) (zext_ln1116_162_fu_12983688_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1043_fu_2914_p2() {
    mul_ln1118_1043_fu_2914_p2 = (!mul_ln1118_1043_fu_2914_p0.read().is_01() || !ap_const_lv16_FF9C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1043_fu_2914_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1044_fu_2443_p0() {
    mul_ln1118_1044_fu_2443_p0 =  (sc_lv<8>) (zext_ln1118_1710_fu_12983810_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1044_fu_2443_p2() {
    mul_ln1118_1044_fu_2443_p2 = (!mul_ln1118_1044_fu_2443_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1044_fu_2443_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1045_fu_1465_p0() {
    mul_ln1118_1045_fu_1465_p0 =  (sc_lv<8>) (zext_ln1118_1768_fu_12984989_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1045_fu_1465_p2() {
    mul_ln1118_1045_fu_1465_p2 = (!mul_ln1118_1045_fu_1465_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1045_fu_1465_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1046_fu_2438_p0() {
    mul_ln1118_1046_fu_2438_p0 =  (sc_lv<8>) (zext_ln1118_1775_fu_12985134_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1046_fu_2438_p2() {
    mul_ln1118_1046_fu_2438_p2 = (!mul_ln1118_1046_fu_2438_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1046_fu_2438_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1047_fu_1629_p0() {
    mul_ln1118_1047_fu_1629_p0 =  (sc_lv<8>) (zext_ln1118_1739_fu_12984284_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1047_fu_1629_p2() {
    mul_ln1118_1047_fu_1629_p2 = (!mul_ln1118_1047_fu_1629_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1047_fu_1629_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1048_fu_2735_p0() {
    mul_ln1118_1048_fu_2735_p0 =  (sc_lv<8>) (zext_ln1118_1744_fu_12984398_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1048_fu_2735_p2() {
    mul_ln1118_1048_fu_2735_p2 = (!mul_ln1118_1048_fu_2735_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1048_fu_2735_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1049_fu_2771_p0() {
    mul_ln1118_1049_fu_2771_p0 =  (sc_lv<8>) (zext_ln1118_1746_fu_12984436_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1049_fu_2771_p2() {
    mul_ln1118_1049_fu_2771_p2 = (!mul_ln1118_1049_fu_2771_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1049_fu_2771_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1050_fu_2766_p0() {
    mul_ln1118_1050_fu_2766_p0 =  (sc_lv<8>) (zext_ln1118_1692_fu_12983434_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1050_fu_2766_p2() {
    mul_ln1118_1050_fu_2766_p2 = (!mul_ln1118_1050_fu_2766_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1050_fu_2766_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1051_fu_1824_p0() {
    mul_ln1118_1051_fu_1824_p0 =  (sc_lv<8>) (zext_ln1118_1710_fu_12983810_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1051_fu_1824_p2() {
    mul_ln1118_1051_fu_1824_p2 = (!mul_ln1118_1051_fu_1824_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1051_fu_1824_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1052_fu_2367_p0() {
    mul_ln1118_1052_fu_2367_p0 =  (sc_lv<8>) (zext_ln1118_1721_fu_12983961_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1052_fu_2367_p2() {
    mul_ln1118_1052_fu_2367_p2 = (!mul_ln1118_1052_fu_2367_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1052_fu_2367_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1053_fu_3161_p0() {
    mul_ln1118_1053_fu_3161_p0 =  (sc_lv<8>) (zext_ln1118_1775_fu_12985134_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1053_fu_3161_p2() {
    mul_ln1118_1053_fu_3161_p2 = (!mul_ln1118_1053_fu_3161_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1053_fu_3161_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1054_fu_2274_p0() {
    mul_ln1118_1054_fu_2274_p0 =  (sc_lv<8>) (zext_ln1118_1735_fu_12984215_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1054_fu_2274_p2() {
    mul_ln1118_1054_fu_2274_p2 = (!mul_ln1118_1054_fu_2274_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1054_fu_2274_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1055_fu_2275_p0() {
    mul_ln1118_1055_fu_2275_p0 =  (sc_lv<8>) (zext_ln1118_1816_fu_12986117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1055_fu_2275_p2() {
    mul_ln1118_1055_fu_2275_p2 = (!mul_ln1118_1055_fu_2275_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1055_fu_2275_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1056_fu_2276_p0() {
    mul_ln1118_1056_fu_2276_p0 =  (sc_lv<8>) (zext_ln1118_1746_fu_12984436_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1056_fu_2276_p2() {
    mul_ln1118_1056_fu_2276_p2 = (!mul_ln1118_1056_fu_2276_p0.read().is_01() || !ap_const_lv15_7FC6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1056_fu_2276_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1057_fu_2961_p0() {
    mul_ln1118_1057_fu_2961_p0 =  (sc_lv<8>) (zext_ln1116_153_fu_12983234_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1057_fu_2961_p2() {
    mul_ln1118_1057_fu_2961_p2 = (!mul_ln1118_1057_fu_2961_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1057_fu_2961_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1058_fu_1596_p0() {
    mul_ln1118_1058_fu_1596_p0 =  (sc_lv<8>) (zext_ln1116_154_fu_12983331_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1058_fu_1596_p2() {
    mul_ln1118_1058_fu_1596_p2 = (!mul_ln1118_1058_fu_1596_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1058_fu_1596_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1059_fu_2280_p0() {
    mul_ln1118_1059_fu_2280_p0 =  (sc_lv<8>) (zext_ln1118_1692_fu_12983434_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1059_fu_2280_p2() {
    mul_ln1118_1059_fu_2280_p2 = (!mul_ln1118_1059_fu_2280_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1059_fu_2280_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1060_fu_2486_p0() {
    mul_ln1118_1060_fu_2486_p0 =  (sc_lv<8>) (zext_ln1116_159_fu_12983465_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1060_fu_2486_p2() {
    mul_ln1118_1060_fu_2486_p2 = (!mul_ln1118_1060_fu_2486_p0.read().is_01() || !ap_const_lv16_FFB2.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1060_fu_2486_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1061_fu_1599_p0() {
    mul_ln1118_1061_fu_1599_p0 =  (sc_lv<8>) (zext_ln1118_1698_fu_12983557_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1061_fu_1599_p2() {
    mul_ln1118_1061_fu_1599_p2 = (!mul_ln1118_1061_fu_1599_p0.read().is_01() || !ap_const_lv12_B.is_01())? sc_lv<12>(): sc_biguint<8>(mul_ln1118_1061_fu_1599_p0.read()) * sc_biguint<12>(ap_const_lv12_B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1062_fu_2283_p0() {
    mul_ln1118_1062_fu_2283_p0 =  (sc_lv<8>) (zext_ln708_717_fu_12983706_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1062_fu_2283_p2() {
    mul_ln1118_1062_fu_2283_p2 = (!mul_ln1118_1062_fu_2283_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1062_fu_2283_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1063_fu_1806_p0() {
    mul_ln1118_1063_fu_1806_p0 =  (sc_lv<8>) (zext_ln1116_166_fu_12983904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1063_fu_1806_p2() {
    mul_ln1118_1063_fu_1806_p2 = (!mul_ln1118_1063_fu_1806_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1063_fu_1806_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1064_fu_1807_p0() {
    mul_ln1118_1064_fu_1807_p0 =  (sc_lv<8>) (zext_ln1116_168_fu_12983981_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1064_fu_1807_p2() {
    mul_ln1118_1064_fu_1807_p2 = (!mul_ln1118_1064_fu_1807_p0.read().is_01() || !ap_const_lv16_FFAC.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1064_fu_1807_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1065_fu_2286_p0() {
    mul_ln1118_1065_fu_2286_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12984178_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1065_fu_2286_p2() {
    mul_ln1118_1065_fu_2286_p2 = (!mul_ln1118_1065_fu_2286_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1065_fu_2286_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1066_fu_2288_p0() {
    mul_ln1118_1066_fu_2288_p0 =  (sc_lv<8>) (zext_ln1118_1745_fu_12984407_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1066_fu_2288_p2() {
    mul_ln1118_1066_fu_2288_p2 = (!mul_ln1118_1066_fu_2288_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1066_fu_2288_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1067_fu_2974_p0() {
    mul_ln1118_1067_fu_2974_p0 =  (sc_lv<8>) (zext_ln1118_1681_fu_12983187_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1067_fu_2974_p2() {
    mul_ln1118_1067_fu_2974_p2 = (!mul_ln1118_1067_fu_2974_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1067_fu_2974_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1068_fu_3180_p0() {
    mul_ln1118_1068_fu_3180_p0 =  (sc_lv<8>) (zext_ln1118_1684_fu_12983272_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1068_fu_3180_p2() {
    mul_ln1118_1068_fu_3180_p2 = (!mul_ln1118_1068_fu_3180_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1068_fu_3180_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1069_fu_1610_p0() {
    mul_ln1118_1069_fu_1610_p0 =  (sc_lv<8>) (zext_ln1118_1754_fu_12984597_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1069_fu_1610_p2() {
    mul_ln1118_1069_fu_1610_p2 = (!mul_ln1118_1069_fu_1610_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1069_fu_1610_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1070_fu_2977_p0() {
    mul_ln1118_1070_fu_2977_p0 =  (sc_lv<8>) (zext_ln1118_1693_fu_12983444_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1070_fu_2977_p2() {
    mul_ln1118_1070_fu_2977_p2 = (!mul_ln1118_1070_fu_2977_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1070_fu_2977_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1071_fu_1817_p0() {
    mul_ln1118_1071_fu_1817_p0 =  (sc_lv<8>) (zext_ln1118_1696_fu_12983517_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1071_fu_1817_p2() {
    mul_ln1118_1071_fu_1817_p2 = (!mul_ln1118_1071_fu_1817_p0.read().is_01() || !ap_const_lv15_7FC3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1071_fu_1817_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1072_fu_2296_p0() {
    mul_ln1118_1072_fu_2296_p0 =  (sc_lv<8>) (zext_ln708_717_fu_12983706_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1072_fu_2296_p2() {
    mul_ln1118_1072_fu_2296_p2 = (!mul_ln1118_1072_fu_2296_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1072_fu_2296_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1073_fu_2502_p0() {
    mul_ln1118_1073_fu_2502_p0 =  (sc_lv<8>) (zext_ln708_730_fu_12984817_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1073_fu_2502_p2() {
    mul_ln1118_1073_fu_2502_p2 = (!mul_ln1118_1073_fu_2502_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1073_fu_2502_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1074_fu_1615_p0() {
    mul_ln1118_1074_fu_1615_p0 =  (sc_lv<8>) (zext_ln1118_1717_fu_12983912_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1074_fu_1615_p2() {
    mul_ln1118_1074_fu_1615_p2 = (!mul_ln1118_1074_fu_1615_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1074_fu_1615_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1075_fu_3187_p0() {
    mul_ln1118_1075_fu_3187_p0 =  (sc_lv<8>) (zext_ln1118_1861_fu_12987528_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1075_fu_3187_p2() {
    mul_ln1118_1075_fu_3187_p2 = (!mul_ln1118_1075_fu_3187_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1075_fu_3187_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1076_fu_2027_p0() {
    mul_ln1118_1076_fu_2027_p0 =  (sc_lv<8>) (zext_ln1118_1728_fu_12984086_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1076_fu_2027_p2() {
    mul_ln1118_1076_fu_2027_p2 = (!mul_ln1118_1076_fu_2027_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1076_fu_2027_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1077_fu_1502_p0() {
    mul_ln1118_1077_fu_1502_p0 =  (sc_lv<8>) (zext_ln1118_1735_fu_12984215_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1077_fu_1502_p2() {
    mul_ln1118_1077_fu_1502_p2 = (!mul_ln1118_1077_fu_1502_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1077_fu_1502_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1078_fu_1942_p0() {
    mul_ln1118_1078_fu_1942_p0 =  (sc_lv<8>) (zext_ln708_724_fu_12984270_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1078_fu_1942_p2() {
    mul_ln1118_1078_fu_1942_p2 = (!mul_ln1118_1078_fu_1942_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1078_fu_1942_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1079_fu_1504_p0() {
    mul_ln1118_1079_fu_1504_p0 =  (sc_lv<8>) (zext_ln1118_1868_fu_12987710_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1079_fu_1504_p2() {
    mul_ln1118_1079_fu_1504_p2 = (!mul_ln1118_1079_fu_1504_p0.read().is_01() || !ap_const_lv15_7FCA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1079_fu_1504_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1080_fu_1944_p0() {
    mul_ln1118_1080_fu_1944_p0 =  (sc_lv<8>) (zext_ln1118_1745_fu_12984407_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1080_fu_1944_p2() {
    mul_ln1118_1080_fu_1944_p2 = (!mul_ln1118_1080_fu_1944_p0.read().is_01() || !ap_const_lv14_3FE7.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1080_fu_1944_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1081_fu_1506_p0() {
    mul_ln1118_1081_fu_1506_p0 =  (sc_lv<8>) (zext_ln1116_171_fu_12984524_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1081_fu_1506_p2() {
    mul_ln1118_1081_fu_1506_p2 = (!mul_ln1118_1081_fu_1506_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1081_fu_1506_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1082_fu_2751_p0() {
    mul_ln1118_1082_fu_2751_p0 =  (sc_lv<8>) (zext_ln1116_153_fu_12983234_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1082_fu_2751_p2() {
    mul_ln1118_1082_fu_2751_p2 = (!mul_ln1118_1082_fu_2751_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1082_fu_2751_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1083_fu_1508_p0() {
    mul_ln1118_1083_fu_1508_p0 =  (sc_lv<8>) (zext_ln1118_1875_fu_12987926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1083_fu_1508_p2() {
    mul_ln1118_1083_fu_1508_p2 = (!mul_ln1118_1083_fu_1508_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1083_fu_1508_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1084_fu_2756_p0() {
    mul_ln1118_1084_fu_2756_p0 =  (sc_lv<8>) (zext_ln1118_1709_fu_12983802_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1084_fu_2756_p2() {
    mul_ln1118_1084_fu_2756_p2 = (!mul_ln1118_1084_fu_2756_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1084_fu_2756_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1085_fu_2759_p0() {
    mul_ln1118_1085_fu_2759_p0 =  (sc_lv<8>) (zext_ln708_766_fu_12987672_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1085_fu_2759_p2() {
    mul_ln1118_1085_fu_2759_p2 = (!mul_ln1118_1085_fu_2759_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1085_fu_2759_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1086_fu_1956_p0() {
    mul_ln1118_1086_fu_1956_p0 =  (sc_lv<8>) (mult_3198_V_fu_12986926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1086_fu_1956_p2() {
    mul_ln1118_1086_fu_1956_p2 = (!mul_ln1118_1086_fu_1956_p0.read().is_01() || !ap_const_lv16_FFAE.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1086_fu_1956_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1087_fu_1518_p0() {
    mul_ln1118_1087_fu_1518_p0 =  (sc_lv<8>) (zext_ln1118_1753_fu_12984543_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1087_fu_1518_p2() {
    mul_ln1118_1087_fu_1518_p2 = (!mul_ln1118_1087_fu_1518_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1087_fu_1518_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1088_fu_2763_p0() {
    mul_ln1118_1088_fu_2763_p0 =  (sc_lv<8>) (zext_ln1118_1683_fu_12983248_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1088_fu_2763_p2() {
    mul_ln1118_1088_fu_2763_p2 = (!mul_ln1118_1088_fu_2763_p0.read().is_01() || !ap_const_lv15_7FCB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1088_fu_2763_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1089_fu_1960_p0() {
    mul_ln1118_1089_fu_1960_p0 =  (sc_lv<8>) (zext_ln1116_157_fu_12983424_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1089_fu_1960_p2() {
    mul_ln1118_1089_fu_1960_p2 = (!mul_ln1118_1089_fu_1960_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1089_fu_1960_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1090_fu_1522_p0() {
    mul_ln1118_1090_fu_1522_p0 =  (sc_lv<8>) (zext_ln1116_162_fu_12983688_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1090_fu_1522_p2() {
    mul_ln1118_1090_fu_1522_p2 = (!mul_ln1118_1090_fu_1522_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1090_fu_1522_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1091_fu_1962_p0() {
    mul_ln1118_1091_fu_1962_p0 =  (sc_lv<8>) (zext_ln1118_1709_fu_12983802_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1091_fu_1962_p2() {
    mul_ln1118_1091_fu_1962_p2 = (!mul_ln1118_1091_fu_1962_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1091_fu_1962_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1092_fu_1524_p0() {
    mul_ln1118_1092_fu_1524_p0 =  (sc_lv<8>) (zext_ln1118_1856_fu_12987415_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1092_fu_1524_p2() {
    mul_ln1118_1092_fu_1524_p2 = (!mul_ln1118_1092_fu_1524_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1092_fu_1524_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1093_fu_1526_p0() {
    mul_ln1118_1093_fu_1526_p0 =  (sc_lv<8>) (zext_ln1118_1733_fu_12984189_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1093_fu_1526_p2() {
    mul_ln1118_1093_fu_1526_p2 = (!mul_ln1118_1093_fu_1526_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1093_fu_1526_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1094_fu_1528_p0() {
    mul_ln1118_1094_fu_1528_p0 =  (sc_lv<8>) (zext_ln1118_1875_fu_12987926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1094_fu_1528_p2() {
    mul_ln1118_1094_fu_1528_p2 = (!mul_ln1118_1094_fu_1528_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1094_fu_1528_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1095_fu_2093_p0() {
    mul_ln1118_1095_fu_2093_p0 =  (sc_lv<8>) (zext_ln1116_160_fu_12983509_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1095_fu_2093_p2() {
    mul_ln1118_1095_fu_2093_p2 = (!mul_ln1118_1095_fu_2093_p0.read().is_01() || !ap_const_lv16_FF8F.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1095_fu_2093_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1096_fu_3030_p0() {
    mul_ln1118_1096_fu_3030_p0 =  (sc_lv<8>) (zext_ln1118_1702_fu_12983632_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1096_fu_3030_p2() {
    mul_ln1118_1096_fu_3030_p2 = (!mul_ln1118_1096_fu_3030_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1096_fu_3030_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1097_fu_2728_p0() {
    mul_ln1118_1097_fu_2728_p0 =  (sc_lv<8>) (zext_ln1118_1848_fu_12987269_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1097_fu_2728_p2() {
    mul_ln1118_1097_fu_2728_p2 = (!mul_ln1118_1097_fu_2728_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1097_fu_2728_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1098_fu_2257_p0() {
    mul_ln1118_1098_fu_2257_p0 =  (sc_lv<8>) (zext_ln1116_173_fu_12987324_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1098_fu_2257_p2() {
    mul_ln1118_1098_fu_2257_p2 = (!mul_ln1118_1098_fu_2257_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1098_fu_2257_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1099_fu_3194_p0() {
    mul_ln1118_1099_fu_3194_p0 =  (sc_lv<8>) (zext_ln1118_1856_fu_12987415_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1099_fu_3194_p2() {
    mul_ln1118_1099_fu_3194_p2 = (!mul_ln1118_1099_fu_3194_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1099_fu_3194_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1100_fu_1612_p0() {
    mul_ln1118_1100_fu_1612_p0 =  (sc_lv<8>) (zext_ln1118_1743_fu_12984350_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1100_fu_1612_p2() {
    mul_ln1118_1100_fu_1612_p2 = (!mul_ln1118_1100_fu_1612_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1100_fu_1612_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1101_fu_3225_p0() {
    mul_ln1118_1101_fu_3225_p0 =  (sc_lv<8>) (mult_3198_V_fu_12986926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1101_fu_3225_p2() {
    mul_ln1118_1101_fu_3225_p2 = (!mul_ln1118_1101_fu_3225_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1101_fu_3225_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1102_fu_2416_p0() {
    mul_ln1118_1102_fu_2416_p0 =  (sc_lv<8>) (zext_ln1118_1932_fu_12989793_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1102_fu_2416_p2() {
    mul_ln1118_1102_fu_2416_p2 = (!mul_ln1118_1102_fu_2416_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1102_fu_2416_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1103_fu_1776_p0() {
    mul_ln1118_1103_fu_1776_p0 =  (sc_lv<8>) (zext_ln1118_1754_fu_12984597_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1103_fu_1776_p2() {
    mul_ln1118_1103_fu_1776_p2 = (!mul_ln1118_1103_fu_1776_p0.read().is_01() || !ap_const_lv15_7FC7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1103_fu_1776_p0.read()) * sc_bigint<15>(ap_const_lv15_7FC7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1104_fu_1474_p0() {
    mul_ln1118_1104_fu_1474_p0 =  (sc_lv<8>) (zext_ln708_714_fu_12983572_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1104_fu_1474_p2() {
    mul_ln1118_1104_fu_1474_p2 = (!mul_ln1118_1104_fu_1474_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1104_fu_1474_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1105_fu_2580_p0() {
    mul_ln1118_1105_fu_2580_p0 =  (sc_lv<8>) (zext_ln1116_176_fu_12989982_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1105_fu_2580_p2() {
    mul_ln1118_1105_fu_2580_p2 = (!mul_ln1118_1105_fu_2580_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1105_fu_2580_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1106_fu_2109_p0() {
    mul_ln1118_1106_fu_2109_p0 =  (sc_lv<8>) (zext_ln1118_1943_fu_12990042_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1106_fu_2109_p2() {
    mul_ln1118_1106_fu_2109_p2 = (!mul_ln1118_1106_fu_2109_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1106_fu_2109_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1107_fu_3215_p0() {
    mul_ln1118_1107_fu_3215_p0 =  (sc_lv<8>) (mul_ln1118_1107_fu_3215_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1107_fu_3215_p00() {
    mul_ln1118_1107_fu_3215_p00 = esl_zext<16,8>(p_read110.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1107_fu_3215_p2() {
    mul_ln1118_1107_fu_3215_p2 = (!mul_ln1118_1107_fu_3215_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1107_fu_3215_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1108_fu_2913_p0() {
    mul_ln1118_1108_fu_2913_p0 =  (sc_lv<8>) (zext_ln1116_180_fu_12990161_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1108_fu_2913_p2() {
    mul_ln1118_1108_fu_2913_p2 = (!mul_ln1118_1108_fu_2913_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1108_fu_2913_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1109_fu_2273_p0() {
    mul_ln1118_1109_fu_2273_p0 =  (sc_lv<8>) (zext_ln1118_1728_fu_12984086_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1109_fu_2273_p2() {
    mul_ln1118_1109_fu_2273_p2 = (!mul_ln1118_1109_fu_2273_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1109_fu_2273_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1110_fu_1500_p0() {
    mul_ln1118_1110_fu_1500_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12984178_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1110_fu_1500_p2() {
    mul_ln1118_1110_fu_1500_p2 = (!mul_ln1118_1110_fu_1500_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1110_fu_1500_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1111_fu_2775_p0() {
    mul_ln1118_1111_fu_2775_p0 =  (sc_lv<8>) (zext_ln1116_185_fu_12990392_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1111_fu_2775_p2() {
    mul_ln1118_1111_fu_2775_p2 = (!mul_ln1118_1111_fu_2775_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1111_fu_2775_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1112_fu_1797_p0() {
    mul_ln1118_1112_fu_1797_p0 =  (sc_lv<8>) (zext_ln1118_1744_fu_12984398_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1112_fu_1797_p2() {
    mul_ln1118_1112_fu_1797_p2 = (!mul_ln1118_1112_fu_1797_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1112_fu_1797_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1113_fu_2903_p0() {
    mul_ln1118_1113_fu_2903_p0 =  (sc_lv<8>) (zext_ln1118_1753_fu_12984543_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1113_fu_2903_p2() {
    mul_ln1118_1113_fu_2903_p2 = (!mul_ln1118_1113_fu_2903_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1113_fu_2903_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1114_fu_2770_p0() {
    mul_ln1118_1114_fu_2770_p0 =  (sc_lv<8>) (zext_ln708_728_fu_12984611_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1114_fu_2770_p2() {
    mul_ln1118_1114_fu_2770_p2 = (!mul_ln1118_1114_fu_2770_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1114_fu_2770_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1115_fu_1659_p0() {
    mul_ln1118_1115_fu_1659_p0 =  (sc_lv<8>) (zext_ln1116_160_fu_12983509_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1115_fu_1659_p2() {
    mul_ln1118_1115_fu_1659_p2 = (!mul_ln1118_1115_fu_1659_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1115_fu_1659_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1116_fu_2765_p0() {
    mul_ln1118_1116_fu_2765_p0 =  (sc_lv<8>) (zext_ln1116_176_fu_12989982_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1116_fu_2765_p2() {
    mul_ln1118_1116_fu_2765_p2 = (!mul_ln1118_1116_fu_2765_p0.read().is_01() || !ap_const_lv16_FF9E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1116_fu_2765_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1117_fu_2632_p0() {
    mul_ln1118_1117_fu_2632_p0 =  (sc_lv<8>) (zext_ln1116_162_fu_12983688_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1117_fu_2632_p2() {
    mul_ln1118_1117_fu_2632_p2 = (!mul_ln1118_1117_fu_2632_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1117_fu_2632_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1118_fu_3400_p0() {
    mul_ln1118_1118_fu_3400_p0 =  (sc_lv<8>) (zext_ln1118_1943_fu_12990042_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1118_fu_3400_p2() {
    mul_ln1118_1118_fu_3400_p2 = (!mul_ln1118_1118_fu_3400_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1118_fu_3400_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1119_fu_1987_p0() {
    mul_ln1118_1119_fu_1987_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12990254_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1119_fu_1987_p2() {
    mul_ln1118_1119_fu_1987_p2 = (!mul_ln1118_1119_fu_1987_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1119_fu_1987_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1120_fu_1854_p0() {
    mul_ln1118_1120_fu_1854_p0 =  (sc_lv<8>) (zext_ln1118_1729_fu_12984096_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1120_fu_1854_p2() {
    mul_ln1118_1120_fu_1854_p2 = (!mul_ln1118_1120_fu_1854_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1120_fu_1854_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1121_fu_2791_p0() {
    mul_ln1118_1121_fu_2791_p0 =  (sc_lv<8>) (zext_ln1116_183_fu_12990294_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1121_fu_2791_p2() {
    mul_ln1118_1121_fu_2791_p2 = (!mul_ln1118_1121_fu_2791_p0.read().is_01() || !ap_const_lv16_FFA4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1121_fu_2791_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1122_fu_2320_p0() {
    mul_ln1118_1122_fu_2320_p0 =  (sc_lv<8>) (zext_ln1118_1745_fu_12984407_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1122_fu_2320_p2() {
    mul_ln1118_1122_fu_2320_p2 = (!mul_ln1118_1122_fu_2320_p0.read().is_01() || !ap_const_lv14_3FEB.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1122_fu_2320_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1123_fu_2786_p0() {
    mul_ln1118_1123_fu_2786_p0 =  (sc_lv<8>) (zext_ln1116_156_fu_12983383_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1123_fu_2786_p2() {
    mul_ln1118_1123_fu_2786_p2 = (!mul_ln1118_1123_fu_2786_p0.read().is_01() || !ap_const_lv16_FF8E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1123_fu_2786_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1124_fu_2146_p0() {
    mul_ln1118_1124_fu_2146_p0 =  (sc_lv<8>) (zext_ln1118_1841_fu_12987092_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1124_fu_2146_p2() {
    mul_ln1118_1124_fu_2146_p2 = (!mul_ln1118_1124_fu_2146_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1124_fu_2146_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1125_fu_2182_p0() {
    mul_ln1118_1125_fu_2182_p0 =  (sc_lv<8>) (zext_ln708_714_fu_12983572_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1125_fu_2182_p2() {
    mul_ln1118_1125_fu_2182_p2 = (!mul_ln1118_1125_fu_2182_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1125_fu_2182_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1126_fu_2817_p0() {
    mul_ln1118_1126_fu_2817_p0 =  (sc_lv<8>) (zext_ln708_717_fu_12983706_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1126_fu_2817_p2() {
    mul_ln1118_1126_fu_2817_p2 = (!mul_ln1118_1126_fu_2817_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1126_fu_2817_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1127_fu_2177_p0() {
    mul_ln1118_1127_fu_2177_p0 =  (sc_lv<8>) (mul_ln1118_1127_fu_2177_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1127_fu_2177_p00() {
    mul_ln1118_1127_fu_2177_p00 = esl_zext<13,8>(p_read110.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1127_fu_2177_p2() {
    mul_ln1118_1127_fu_2177_p2 = (!mul_ln1118_1127_fu_2177_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1127_fu_2177_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1128_fu_1706_p0() {
    mul_ln1118_1128_fu_1706_p0 =  (sc_lv<8>) (zext_ln1116_178_fu_12990091_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1128_fu_1706_p2() {
    mul_ln1118_1128_fu_1706_p2 = (!mul_ln1118_1128_fu_1706_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1128_fu_1706_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1129_fu_1573_p0() {
    mul_ln1118_1129_fu_1573_p0 =  (sc_lv<8>) (zext_ln1116_180_fu_12990161_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1129_fu_1573_p2() {
    mul_ln1118_1129_fu_1573_p2 = (!mul_ln1118_1129_fu_1573_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1129_fu_1573_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1130_fu_2341_p0() {
    mul_ln1118_1130_fu_2341_p0 =  (sc_lv<8>) (zext_ln1118_1770_fu_12985015_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1130_fu_2341_p2() {
    mul_ln1118_1130_fu_2341_p2 = (!mul_ln1118_1130_fu_2341_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1130_fu_2341_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1131_fu_1532_p0() {
    mul_ln1118_1131_fu_1532_p0 =  (sc_lv<8>) (zext_ln1116_183_fu_12990294_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1131_fu_1532_p2() {
    mul_ln1118_1131_fu_1532_p2 = (!mul_ln1118_1131_fu_1532_p0.read().is_01() || !ap_const_lv16_FFA7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1131_fu_1532_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1132_fu_1568_p0() {
    mul_ln1118_1132_fu_1568_p0 =  (sc_lv<8>) (zext_ln1116_184_fu_12990328_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1132_fu_1568_p2() {
    mul_ln1118_1132_fu_1568_p2 = (!mul_ln1118_1132_fu_1568_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1132_fu_1568_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1133_fu_2971_p0() {
    mul_ln1118_1133_fu_2971_p0 =  (sc_lv<8>) (mult_3198_V_fu_12986926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1133_fu_2971_p2() {
    mul_ln1118_1133_fu_2971_p2 = (!mul_ln1118_1133_fu_2971_p0.read().is_01() || !ap_const_lv16_FF87.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1133_fu_2971_p0.read()) * sc_bigint<16>(ap_const_lv16_FF87);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1134_fu_2838_p0() {
    mul_ln1118_1134_fu_2838_p0 =  (sc_lv<8>) (zext_ln1118_1932_fu_12989793_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1134_fu_2838_p2() {
    mul_ln1118_1134_fu_2838_p2 = (!mul_ln1118_1134_fu_2838_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1134_fu_2838_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1135_fu_3304_p0() {
    mul_ln1118_1135_fu_3304_p0 =  (sc_lv<8>) (zext_ln1116_162_fu_12983688_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1135_fu_3304_p2() {
    mul_ln1118_1135_fu_3304_p2 = (!mul_ln1118_1135_fu_3304_p0.read().is_01() || !ap_const_lv16_FF98.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1135_fu_3304_p0.read()) * sc_bigint<16>(ap_const_lv16_FF98);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1136_fu_2495_p0() {
    mul_ln1118_1136_fu_2495_p0 =  (sc_lv<8>) (zext_ln1118_1945_fu_12990097_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1136_fu_2495_p2() {
    mul_ln1118_1136_fu_2495_p2 = (!mul_ln1118_1136_fu_2495_p0.read().is_01() || !ap_const_lv14_37.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1136_fu_2495_p0.read()) * sc_biguint<14>(ap_const_lv14_37);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1137_fu_2193_p0() {
    mul_ln1118_1137_fu_2193_p0 =  (sc_lv<8>) (zext_ln1116_181_fu_12990182_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1137_fu_2193_p2() {
    mul_ln1118_1137_fu_2193_p2 = (!mul_ln1118_1137_fu_2193_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1137_fu_2193_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1138_fu_3299_p0() {
    mul_ln1118_1138_fu_3299_p0 =  (sc_lv<8>) (zext_ln1118_1771_fu_12985085_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1138_fu_3299_p2() {
    mul_ln1118_1138_fu_3299_p2 = (!mul_ln1118_1138_fu_3299_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1138_fu_3299_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1139_fu_1420_p0() {
    mul_ln1118_1139_fu_1420_p0 =  (sc_lv<8>) (zext_ln1118_1816_fu_12986117_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1139_fu_1420_p2() {
    mul_ln1118_1139_fu_1420_p2 = (!mul_ln1118_1139_fu_1420_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1139_fu_1420_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1140_fu_3440_p0() {
    mul_ln1118_1140_fu_3440_p0 =  (sc_lv<8>) (zext_ln1118_1743_fu_12984350_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1140_fu_3440_p2() {
    mul_ln1118_1140_fu_3440_p2 = (!mul_ln1118_1140_fu_3440_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1140_fu_3440_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1141_fu_2075_p0() {
    mul_ln1118_1141_fu_2075_p0 =  (sc_lv<8>) (zext_ln1118_1869_fu_12987748_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1141_fu_2075_p2() {
    mul_ln1118_1141_fu_2075_p2 = (!mul_ln1118_1141_fu_2075_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1141_fu_2075_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1142_fu_2077_p0() {
    mul_ln1118_1142_fu_2077_p0 =  (sc_lv<8>) (mult_3198_V_fu_12986926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1142_fu_2077_p2() {
    mul_ln1118_1142_fu_2077_p2 = (!mul_ln1118_1142_fu_2077_p0.read().is_01() || !ap_const_lv16_FF9B.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1142_fu_2077_p0.read()) * sc_bigint<16>(ap_const_lv16_FF9B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1143_fu_3445_p0() {
    mul_ln1118_1143_fu_3445_p0 =  (sc_lv<8>) (zext_ln1118_1875_fu_12987926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1143_fu_3445_p2() {
    mul_ln1118_1143_fu_3445_p2 = (!mul_ln1118_1143_fu_3445_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1143_fu_3445_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1144_fu_3446_p0() {
    mul_ln1118_1144_fu_3446_p0 =  (sc_lv<8>) (zext_ln1118_1754_fu_12984597_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1144_fu_3446_p2() {
    mul_ln1118_1144_fu_3446_p2 = (!mul_ln1118_1144_fu_3446_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1144_fu_3446_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1145_fu_3448_p0() {
    mul_ln1118_1145_fu_3448_p0 =  (sc_lv<8>) (zext_ln1116_157_fu_12983424_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1145_fu_3448_p2() {
    mul_ln1118_1145_fu_3448_p2 = (!mul_ln1118_1145_fu_3448_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1145_fu_3448_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1146_fu_2767_p0() {
    mul_ln1118_1146_fu_2767_p0 =  (sc_lv<8>) (zext_ln1118_1710_fu_12983810_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1146_fu_2767_p2() {
    mul_ln1118_1146_fu_2767_p2 = (!mul_ln1118_1146_fu_2767_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1146_fu_2767_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1147_fu_2768_p0() {
    mul_ln1118_1147_fu_2768_p0 =  (sc_lv<8>) (zext_ln1118_1945_fu_12990097_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1147_fu_2768_p2() {
    mul_ln1118_1147_fu_2768_p2 = (!mul_ln1118_1147_fu_2768_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1147_fu_2768_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1148_fu_3452_p0() {
    mul_ln1118_1148_fu_3452_p0 =  (sc_lv<8>) (zext_ln1118_1768_fu_12984989_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1148_fu_3452_p2() {
    mul_ln1118_1148_fu_3452_p2 = (!mul_ln1118_1148_fu_3452_p0.read().is_01() || !ap_const_lv14_3A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1148_fu_3452_p0.read()) * sc_biguint<14>(ap_const_lv14_3A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1149_fu_3454_p0() {
    mul_ln1118_1149_fu_3454_p0 =  (sc_lv<8>) (zext_ln1118_1724_fu_12984026_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1149_fu_3454_p2() {
    mul_ln1118_1149_fu_3454_p2 = (!mul_ln1118_1149_fu_3454_p0.read().is_01() || !ap_const_lv14_33.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1149_fu_3454_p0.read()) * sc_biguint<14>(ap_const_lv14_33);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1150_fu_2772_p0() {
    mul_ln1118_1150_fu_2772_p0 =  (sc_lv<8>) (zext_ln1118_1733_fu_12984189_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1150_fu_2772_p2() {
    mul_ln1118_1150_fu_2772_p2 = (!mul_ln1118_1150_fu_2772_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1150_fu_2772_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1151_fu_3456_p0() {
    mul_ln1118_1151_fu_3456_p0 =  (sc_lv<8>) (zext_ln1116_188_fu_12993002_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1151_fu_3456_p2() {
    mul_ln1118_1151_fu_3456_p2 = (!mul_ln1118_1151_fu_3456_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1151_fu_3456_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1152_fu_3458_p0() {
    mul_ln1118_1152_fu_3458_p0 =  (sc_lv<8>) (zext_ln1116_171_fu_12984524_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1152_fu_3458_p2() {
    mul_ln1118_1152_fu_3458_p2 = (!mul_ln1118_1152_fu_3458_p0.read().is_01() || !ap_const_lv16_FF8E.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1152_fu_3458_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1153_fu_3460_p0() {
    mul_ln1118_1153_fu_3460_p0 =  (sc_lv<8>) (zext_ln1118_1935_fu_12989866_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1153_fu_3460_p2() {
    mul_ln1118_1153_fu_3460_p2 = (!mul_ln1118_1153_fu_3460_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1153_fu_3460_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1154_fu_2778_p0() {
    mul_ln1118_1154_fu_2778_p0 =  (sc_lv<8>) (zext_ln1118_1696_fu_12983517_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1154_fu_2778_p2() {
    mul_ln1118_1154_fu_2778_p2 = (!mul_ln1118_1154_fu_2778_p0.read().is_01() || !ap_const_lv15_7FCE.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1154_fu_2778_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCE);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1155_fu_2096_p0() {
    mul_ln1118_1155_fu_2096_p0 =  (sc_lv<8>) (zext_ln1116_186_fu_12992599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1155_fu_2096_p2() {
    mul_ln1118_1155_fu_2096_p2 = (!mul_ln1118_1155_fu_2096_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1155_fu_2096_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1156_fu_1620_p0() {
    mul_ln1118_1156_fu_1620_p0 =  (sc_lv<8>) (zext_ln1116_181_fu_12990182_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1156_fu_1620_p2() {
    mul_ln1118_1156_fu_1620_p2 = (!mul_ln1118_1156_fu_1620_p0.read().is_01() || !ap_const_lv16_FFA3.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1156_fu_1620_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1157_fu_2099_p0() {
    mul_ln1118_1157_fu_2099_p0 =  (sc_lv<8>) (zext_ln1116_184_fu_12990328_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1157_fu_2099_p2() {
    mul_ln1118_1157_fu_2099_p2 = (!mul_ln1118_1157_fu_2099_p0.read().is_01() || !ap_const_lv16_FFA6.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1157_fu_2099_p0.read()) * sc_bigint<16>(ap_const_lv16_FFA6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1158_fu_1417_p0() {
    mul_ln1118_1158_fu_1417_p0 =  (sc_lv<8>) (zext_ln1118_1869_fu_12987748_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1158_fu_1417_p2() {
    mul_ln1118_1158_fu_1417_p2 = (!mul_ln1118_1158_fu_1417_p0.read().is_01() || !ap_const_lv14_3B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1158_fu_1417_p0.read()) * sc_biguint<14>(ap_const_lv14_3B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1159_fu_2869_p0() {
    mul_ln1118_1159_fu_2869_p0 =  (sc_lv<8>) (zext_ln1118_1691_fu_12983401_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1159_fu_2869_p2() {
    mul_ln1118_1159_fu_2869_p2 = (!mul_ln1118_1159_fu_2869_p0.read().is_01() || !ap_const_lv14_3FEA.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1159_fu_2869_p0.read()) * sc_bigint<14>(ap_const_lv14_3FEA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1160_fu_3309_p0() {
    mul_ln1118_1160_fu_3309_p0 =  (sc_lv<8>) (zext_ln1118_1694_fu_12983470_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1160_fu_3309_p2() {
    mul_ln1118_1160_fu_3309_p2 = (!mul_ln1118_1160_fu_3309_p0.read().is_01() || !ap_const_lv15_7FD6.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1160_fu_3309_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1161_fu_3310_p0() {
    mul_ln1118_1161_fu_3310_p0 =  (sc_lv<8>) (zext_ln1118_1937_fu_12989920_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1161_fu_3310_p2() {
    mul_ln1118_1161_fu_3310_p2 = (!mul_ln1118_1161_fu_3310_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1161_fu_3310_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1162_fu_2067_p0() {
    mul_ln1118_1162_fu_2067_p0 =  (sc_lv<8>) (zext_ln1116_186_fu_12992599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1162_fu_2067_p2() {
    mul_ln1118_1162_fu_2067_p2 = (!mul_ln1118_1162_fu_2067_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1162_fu_2067_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1163_fu_3313_p0() {
    mul_ln1118_1163_fu_3313_p0 =  (sc_lv<8>) (zext_ln1116_162_fu_12983688_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1163_fu_3313_p2() {
    mul_ln1118_1163_fu_3313_p2 = (!mul_ln1118_1163_fu_3313_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1163_fu_3313_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1164_fu_3315_p0() {
    mul_ln1118_1164_fu_3315_p0 =  (sc_lv<8>) (zext_ln1116_173_fu_12987324_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1164_fu_3315_p2() {
    mul_ln1118_1164_fu_3315_p2 = (!mul_ln1118_1164_fu_3315_p0.read().is_01() || !ap_const_lv16_FF8A.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1164_fu_3315_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1165_fu_2074_p0() {
    mul_ln1118_1165_fu_2074_p0 =  (sc_lv<8>) (zext_ln1116_181_fu_12990182_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1165_fu_2074_p2() {
    mul_ln1118_1165_fu_2074_p2 = (!mul_ln1118_1165_fu_2074_p0.read().is_01() || !ap_const_lv16_FFAA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1165_fu_2074_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1166_fu_2880_p0() {
    mul_ln1118_1166_fu_2880_p0 =  (sc_lv<8>) (zext_ln1116_182_fu_12990254_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1166_fu_2880_p2() {
    mul_ln1118_1166_fu_2880_p2 = (!mul_ln1118_1166_fu_2880_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1166_fu_2880_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1167_fu_3322_p0() {
    mul_ln1118_1167_fu_3322_p0 =  (sc_lv<8>) (mul_ln1118_1167_fu_3322_p00.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1167_fu_3322_p00() {
    mul_ln1118_1167_fu_3322_p00 = esl_zext<13,8>(p_read123.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1167_fu_3322_p2() {
    mul_ln1118_1167_fu_3322_p2 = (!mul_ln1118_1167_fu_3322_p0.read().is_01() || !ap_const_lv13_1A.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1167_fu_3322_p0.read()) * sc_biguint<13>(ap_const_lv13_1A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1168_fu_3323_p0() {
    mul_ln1118_1168_fu_3323_p0 =  (sc_lv<8>) (mult_3198_V_fu_12986926_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1168_fu_3323_p2() {
    mul_ln1118_1168_fu_3323_p2 = (!mul_ln1118_1168_fu_3323_p0.read().is_01() || !ap_const_lv16_FF8C.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1168_fu_3323_p0.read()) * sc_bigint<16>(ap_const_lv16_FF8C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1169_fu_2885_p0() {
    mul_ln1118_1169_fu_2885_p0 =  (sc_lv<8>) (zext_ln1118_1691_fu_12983401_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1169_fu_2885_p2() {
    mul_ln1118_1169_fu_2885_p2 = (!mul_ln1118_1169_fu_2885_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1169_fu_2885_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_116_fu_2010_p0() {
    mul_ln1118_116_fu_2010_p0 =  (sc_lv<8>) (zext_ln1116_3_fu_12925285_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_116_fu_2010_p2() {
    mul_ln1118_116_fu_2010_p2 = (!mul_ln1118_116_fu_2010_p0.read().is_01() || !ap_const_lv16_FFBA.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_116_fu_2010_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1170_fu_3325_p0() {
    mul_ln1118_1170_fu_3325_p0 =  (sc_lv<8>) (zext_ln1118_1699_fu_12983562_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1170_fu_3325_p2() {
    mul_ln1118_1170_fu_3325_p2 = (!mul_ln1118_1170_fu_3325_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1170_fu_3325_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1171_fu_3326_p0() {
    mul_ln1118_1171_fu_3326_p0 =  (sc_lv<8>) (zext_ln1118_1712_fu_12983851_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1171_fu_3326_p2() {
    mul_ln1118_1171_fu_3326_p2 = (!mul_ln1118_1171_fu_3326_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1171_fu_3326_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1172_fu_2888_p0() {
    mul_ln1118_1172_fu_2888_p0 =  (sc_lv<8>) (zext_ln708_734_fu_12985024_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1172_fu_2888_p2() {
    mul_ln1118_1172_fu_2888_p2 = (!mul_ln1118_1172_fu_2888_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1172_fu_2888_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1173_fu_1572_p0() {
    mul_ln1118_1173_fu_1572_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12984178_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1173_fu_1572_p2() {
    mul_ln1118_1173_fu_1572_p2 = (!mul_ln1118_1173_fu_1572_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1173_fu_1572_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1174_fu_2085_p0() {
    mul_ln1118_1174_fu_2085_p0 =  (sc_lv<8>) (zext_ln1118_1869_fu_12987748_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1174_fu_2085_p2() {
    mul_ln1118_1174_fu_2085_p2 = (!mul_ln1118_1174_fu_2085_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1174_fu_2085_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1175_fu_2086_p0() {
    mul_ln1118_1175_fu_2086_p0 =  (sc_lv<8>) (zext_ln708_726_fu_12984491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1175_fu_2086_p2() {
    mul_ln1118_1175_fu_2086_p2 = (!mul_ln1118_1175_fu_2086_p0.read().is_01() || !ap_const_lv15_7FD4.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1175_fu_2086_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1176_fu_2800_p0() {
    mul_ln1118_1176_fu_2800_p0 =  (sc_lv<8>) (zext_ln708_716_fu_12983592_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1176_fu_2800_p2() {
    mul_ln1118_1176_fu_2800_p2 = (!mul_ln1118_1176_fu_2800_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1176_fu_2800_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1177_fu_3461_p0() {
    mul_ln1118_1177_fu_3461_p0 =  (sc_lv<8>) (zext_ln1118_1710_fu_12983810_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1177_fu_3461_p2() {
    mul_ln1118_1177_fu_3461_p2 = (!mul_ln1118_1177_fu_3461_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1177_fu_3461_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1178_fu_2964_p0() {
    mul_ln1118_1178_fu_2964_p0 =  (sc_lv<8>) (zext_ln1116_166_fu_12983904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1178_fu_2964_p2() {
    mul_ln1118_1178_fu_2964_p2 = (!mul_ln1118_1178_fu_2964_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1178_fu_2964_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1179_fu_1986_p0() {
    mul_ln1118_1179_fu_1986_p0 =  (sc_lv<8>) (zext_ln708_734_fu_12985024_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1179_fu_1986_p2() {
    mul_ln1118_1179_fu_1986_p2 = (!mul_ln1118_1179_fu_1986_p0.read().is_01() || !ap_const_lv13_13.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1179_fu_1986_p0.read()) * sc_biguint<13>(ap_const_lv13_13);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_117_fu_2694_p0() {
    mul_ln1118_117_fu_2694_p0 =  (sc_lv<8>) (zext_ln1118_16_fu_12925346_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_117_fu_2694_p2() {
    mul_ln1118_117_fu_2694_p2 = (!mul_ln1118_117_fu_2694_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_117_fu_2694_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1180_fu_2022_p0() {
    mul_ln1118_1180_fu_2022_p0 =  (sc_lv<8>) (zext_ln1116_184_fu_12990328_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1180_fu_2022_p2() {
    mul_ln1118_1180_fu_2022_p2 = (!mul_ln1118_1180_fu_2022_p0.read().is_01() || !ap_const_lv16_FF94.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1180_fu_2022_p0.read()) * sc_bigint<16>(ap_const_lv16_FF94);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1181_fu_2790_p0() {
    mul_ln1118_1181_fu_2790_p0 =  (sc_lv<8>) (zext_ln1116_185_fu_12990392_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1181_fu_2790_p2() {
    mul_ln1118_1181_fu_2790_p2 = (!mul_ln1118_1181_fu_2790_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1181_fu_2790_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1182_fu_2319_p0() {
    mul_ln1118_1182_fu_2319_p0 =  (sc_lv<8>) (zext_ln1116_188_fu_12993002_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1182_fu_2319_p2() {
    mul_ln1118_1182_fu_2319_p2 = (!mul_ln1118_1182_fu_2319_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1182_fu_2319_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1183_fu_3256_p0() {
    mul_ln1118_1183_fu_3256_p0 =  (sc_lv<8>) (zext_ln1118_1871_fu_12987760_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1183_fu_3256_p2() {
    mul_ln1118_1183_fu_3256_p2 = (!mul_ln1118_1183_fu_3256_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1183_fu_3256_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1184_fu_2954_p0() {
    mul_ln1118_1184_fu_2954_p0 =  (sc_lv<8>) (zext_ln1118_1749_fu_12984503_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1184_fu_2954_p2() {
    mul_ln1118_1184_fu_2954_p2 = (!mul_ln1118_1184_fu_2954_p0.read().is_01() || !ap_const_lv14_23.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1184_fu_2954_p0.read()) * sc_biguint<14>(ap_const_lv14_23);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1185_fu_2652_p0() {
    mul_ln1118_1185_fu_2652_p0 =  (sc_lv<8>) (zext_ln1118_1691_fu_12983401_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1185_fu_2652_p2() {
    mul_ln1118_1185_fu_2652_p2 = (!mul_ln1118_1185_fu_2652_p0.read().is_01() || !ap_const_lv14_26.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1185_fu_2652_p0.read()) * sc_biguint<14>(ap_const_lv14_26);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1186_fu_2350_p0() {
    mul_ln1118_1186_fu_2350_p0 =  (sc_lv<8>) (zext_ln1118_1935_fu_12989866_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1186_fu_2350_p2() {
    mul_ln1118_1186_fu_2350_p2 = (!mul_ln1118_1186_fu_2350_p0.read().is_01() || !ap_const_lv13_16.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1186_fu_2350_p0.read()) * sc_biguint<13>(ap_const_lv13_16);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1187_fu_3287_p0() {
    mul_ln1118_1187_fu_3287_p0 =  (sc_lv<8>) (zext_ln1118_1703_fu_12983640_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1187_fu_3287_p2() {
    mul_ln1118_1187_fu_3287_p2 = (!mul_ln1118_1187_fu_3287_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1187_fu_3287_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1188_fu_2647_p0() {
    mul_ln1118_1188_fu_2647_p0 =  (sc_lv<8>) (zext_ln1118_1712_fu_12983851_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1188_fu_2647_p2() {
    mul_ln1118_1188_fu_2647_p2 = (!mul_ln1118_1188_fu_2647_p0.read().is_01() || !ap_const_lv15_7FD3.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1188_fu_2647_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1189_fu_2176_p0() {
    mul_ln1118_1189_fu_2176_p0 =  (sc_lv<8>) (zext_ln1118_1768_fu_12984989_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1189_fu_2176_p2() {
    mul_ln1118_1189_fu_2176_p2 = (!mul_ln1118_1189_fu_2176_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1189_fu_2176_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_118_fu_2013_p0() {
    mul_ln1118_118_fu_2013_p0 =  (sc_lv<8>) (zext_ln708_fu_12925494_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_118_fu_2013_p2() {
    mul_ln1118_118_fu_2013_p2 = (!mul_ln1118_118_fu_2013_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_118_fu_2013_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1190_fu_1536_p0() {
    mul_ln1118_1190_fu_1536_p0 =  (sc_lv<8>) (zext_ln1118_1770_fu_12985015_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1190_fu_1536_p2() {
    mul_ln1118_1190_fu_1536_p2 = (!mul_ln1118_1190_fu_1536_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1190_fu_1536_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1191_fu_2642_p0() {
    mul_ln1118_1191_fu_2642_p0 =  (sc_lv<8>) (zext_ln1118_1722_fu_12983987_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1191_fu_2642_p2() {
    mul_ln1118_1191_fu_2642_p2 = (!mul_ln1118_1191_fu_2642_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1191_fu_2642_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1192_fu_3354_p0() {
    mul_ln1118_1192_fu_3354_p0 =  (sc_lv<8>) (zext_ln1118_1887_fu_12988315_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1192_fu_3354_p2() {
    mul_ln1118_1192_fu_3354_p2 = (!mul_ln1118_1192_fu_3354_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1192_fu_3354_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1193_fu_1869_p0() {
    mul_ln1118_1193_fu_1869_p0 =  (sc_lv<8>) (zext_ln708_766_fu_12987672_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1193_fu_1869_p2() {
    mul_ln1118_1193_fu_1869_p2 = (!mul_ln1118_1193_fu_1869_p0.read().is_01() || !ap_const_lv15_7FD2.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1193_fu_1869_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD2);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1194_fu_2975_p0() {
    mul_ln1118_1194_fu_2975_p0 =  (sc_lv<8>) (zext_ln1116_195_fu_12995232_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1194_fu_2975_p2() {
    mul_ln1118_1194_fu_2975_p2 = (!mul_ln1118_1194_fu_2975_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1194_fu_2975_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1195_fu_2504_p0() {
    mul_ln1118_1195_fu_2504_p0 =  (sc_lv<8>) (zext_ln1116_188_fu_12993002_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1195_fu_2504_p2() {
    mul_ln1118_1195_fu_2504_p2 = (!mul_ln1118_1195_fu_2504_p0.read().is_01() || !ap_const_lv16_FFBB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1195_fu_2504_p0.read()) * sc_bigint<16>(ap_const_lv16_FFBB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1196_fu_3441_p0() {
    mul_ln1118_1196_fu_3441_p0 =  (sc_lv<8>) (zext_ln1118_1783_fu_12985324_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1196_fu_3441_p2() {
    mul_ln1118_1196_fu_3441_p2 = (!mul_ln1118_1196_fu_3441_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1196_fu_3441_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1197_fu_1731_p0() {
    mul_ln1118_1197_fu_1731_p0 =  (sc_lv<8>) (zext_ln1118_1683_fu_12983248_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1197_fu_1731_p2() {
    mul_ln1118_1197_fu_1731_p2 = (!mul_ln1118_1197_fu_1731_p0.read().is_01() || !ap_const_lv15_7FDA.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1197_fu_1731_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDA);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1198_fu_2668_p0() {
    mul_ln1118_1198_fu_2668_p0 =  (sc_lv<8>) (zext_ln1118_1937_fu_12989920_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1198_fu_2668_p2() {
    mul_ln1118_1198_fu_2668_p2 = (!mul_ln1118_1198_fu_2668_p0.read().is_01() || !ap_const_lv14_3FE3.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1198_fu_2668_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1199_fu_2704_p0() {
    mul_ln1118_1199_fu_2704_p0 =  (sc_lv<8>) (zext_ln1116_166_fu_12983904_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1199_fu_2704_p2() {
    mul_ln1118_1199_fu_2704_p2 = (!mul_ln1118_1199_fu_2704_p0.read().is_01() || !ap_const_lv16_FF86.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1199_fu_2704_p0.read()) * sc_bigint<16>(ap_const_lv16_FF86);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_119_fu_3380_p0() {
    mul_ln1118_119_fu_3380_p0 =  (sc_lv<8>) (zext_ln1116_11_fu_12925647_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_119_fu_3380_p2() {
    mul_ln1118_119_fu_3380_p2 = (!mul_ln1118_119_fu_3380_p0.read().is_01() || !ap_const_lv16_FFAB.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_119_fu_3380_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1200_fu_3134_p0() {
    mul_ln1118_1200_fu_3134_p0 =  (sc_lv<8>) (zext_ln708_734_fu_12985024_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1200_fu_3134_p2() {
    mul_ln1118_1200_fu_3134_p2 = (!mul_ln1118_1200_fu_3134_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1200_fu_3134_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1201_fu_2663_p0() {
    mul_ln1118_1201_fu_2663_p0 =  (sc_lv<8>) (zext_ln1116_194_fu_12995126_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1201_fu_2663_p2() {
    mul_ln1118_1201_fu_2663_p2 = (!mul_ln1118_1201_fu_2663_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1201_fu_2663_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1202_fu_2699_p0() {
    mul_ln1118_1202_fu_2699_p0 =  (sc_lv<8>) (zext_ln1116_169_fu_12984178_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1202_fu_2699_p2() {
    mul_ln1118_1202_fu_2699_p2 = (!mul_ln1118_1202_fu_2699_p0.read().is_01() || !ap_const_lv16_FFAF.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1202_fu_2699_p0.read()) * sc_bigint<16>(ap_const_lv16_FFAF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1203_fu_1890_p0() {
    mul_ln1118_1203_fu_1890_p0 =  (sc_lv<8>) (zext_ln1116_185_fu_12990392_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1203_fu_1890_p2() {
    mul_ln1118_1203_fu_1890_p2 = (!mul_ln1118_1203_fu_1890_p0.read().is_01() || !ap_const_lv16_FF83.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1203_fu_1890_p0.read()) * sc_bigint<16>(ap_const_lv16_FF83);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1204_fu_3334_p0() {
    mul_ln1118_1204_fu_3334_p0 =  (sc_lv<8>) (zext_ln1118_1871_fu_12987760_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1204_fu_3334_p2() {
    mul_ln1118_1204_fu_3334_p2 = (!mul_ln1118_1204_fu_3334_p0.read().is_01() || !ap_const_lv13_1FF3.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1204_fu_3334_p0.read()) * sc_bigint<13>(ap_const_lv13_1FF3);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1205_fu_3032_p0() {
    mul_ln1118_1205_fu_3032_p0 =  (sc_lv<8>) (zext_ln708_726_fu_12984491_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1205_fu_3032_p2() {
    mul_ln1118_1205_fu_3032_p2 = (!mul_ln1118_1205_fu_3032_p0.read().is_01() || !ap_const_lv15_7FCF.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1205_fu_3032_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCF);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1206_fu_2561_p0() {
    mul_ln1118_1206_fu_2561_p0 =  (sc_lv<8>) (zext_ln1118_1752_fu_12984536_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1206_fu_2561_p2() {
    mul_ln1118_1206_fu_2561_p2 = (!mul_ln1118_1206_fu_2561_p0.read().is_01() || !ap_const_lv14_2F.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1206_fu_2561_p0.read()) * sc_biguint<14>(ap_const_lv14_2F);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1207_fu_3160_p0() {
    mul_ln1118_1207_fu_3160_p0 =  (sc_lv<8>) (zext_ln1116_189_fu_12994790_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1207_fu_3160_p2() {
    mul_ln1118_1207_fu_3160_p2 = (!mul_ln1118_1207_fu_3160_p0.read().is_01() || !ap_const_lv16_FFB7.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1207_fu_3160_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1208_fu_2387_p0() {
    mul_ln1118_1208_fu_2387_p0 =  (sc_lv<8>) (zext_ln1118_1702_fu_12983632_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1208_fu_2387_p2() {
    mul_ln1118_1208_fu_2387_p2 = (!mul_ln1118_1208_fu_2387_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1208_fu_2387_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1209_fu_3324_p0() {
    mul_ln1118_1209_fu_3324_p0 =  (sc_lv<8>) (zext_ln1118_1943_fu_12990042_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1209_fu_3324_p2() {
    mul_ln1118_1209_fu_3324_p2 = (!mul_ln1118_1209_fu_3324_p0.read().is_01() || !ap_const_lv13_1B.is_01())? sc_lv<13>(): sc_biguint<8>(mul_ln1118_1209_fu_3324_p0.read()) * sc_biguint<13>(ap_const_lv13_1B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_120_fu_3381_p0() {
    mul_ln1118_120_fu_3381_p0 =  (sc_lv<8>) (zext_ln1118_41_fu_12925820_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_120_fu_3381_p2() {
    mul_ln1118_120_fu_3381_p2 = (!mul_ln1118_120_fu_3381_p0.read().is_01() || !ap_const_lv14_34.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_120_fu_3381_p0.read()) * sc_biguint<14>(ap_const_lv14_34);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1210_fu_1445_p0() {
    mul_ln1118_1210_fu_1445_p0 =  (sc_lv<8>) (zext_ln1118_1712_fu_12983851_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1210_fu_1445_p2() {
    mul_ln1118_1210_fu_1445_p2 = (!mul_ln1118_1210_fu_1445_p0.read().is_01() || !ap_const_lv15_7FD7.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1210_fu_1445_p0.read()) * sc_bigint<15>(ap_const_lv15_7FD7);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1211_fu_3186_p0() {
    mul_ln1118_1211_fu_3186_p0 =  (sc_lv<8>) (zext_ln1118_1724_fu_12984026_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1211_fu_3186_p2() {
    mul_ln1118_1211_fu_3186_p2 = (!mul_ln1118_1211_fu_3186_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1211_fu_3186_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1212_fu_1476_p0() {
    mul_ln1118_1212_fu_1476_p0 =  (sc_lv<8>) (zext_ln1118_1735_fu_12984215_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1212_fu_1476_p2() {
    mul_ln1118_1212_fu_1476_p2 = (!mul_ln1118_1212_fu_1476_p0.read().is_01() || !ap_const_lv14_2E.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1212_fu_1476_p0.read()) * sc_biguint<14>(ap_const_lv14_2E);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1213_fu_1435_p0() {
    mul_ln1118_1213_fu_1435_p0 =  (sc_lv<8>) (zext_ln708_728_fu_12984611_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1213_fu_1435_p2() {
    mul_ln1118_1213_fu_1435_p2 = (!mul_ln1118_1213_fu_1435_p0.read().is_01() || !ap_const_lv14_32.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1213_fu_1435_p0.read()) * sc_biguint<14>(ap_const_lv14_32);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1214_fu_1471_p0() {
    mul_ln1118_1214_fu_1471_p0 =  (sc_lv<8>) (zext_ln1118_1693_fu_12983444_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1214_fu_1471_p2() {
    mul_ln1118_1214_fu_1471_p2 = (!mul_ln1118_1214_fu_1471_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1214_fu_1471_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1215_fu_2070_p0() {
    mul_ln1118_1215_fu_2070_p0 =  (sc_lv<8>) (zext_ln1118_1841_fu_12987092_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1215_fu_2070_p2() {
    mul_ln1118_1215_fu_2070_p2 = (!mul_ln1118_1215_fu_2070_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1215_fu_2070_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1216_fu_2106_p0() {
    mul_ln1118_1216_fu_2106_p0 =  (sc_lv<8>) (zext_ln1116_186_fu_12992599_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1216_fu_2106_p2() {
    mul_ln1118_1216_fu_2106_p2 = (!mul_ln1118_1216_fu_2106_p0.read().is_01() || !ap_const_lv16_FFB4.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1216_fu_2106_p0.read()) * sc_bigint<16>(ap_const_lv16_FFB4);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1217_fu_1799_p0() {
    mul_ln1118_1217_fu_1799_p0 =  (sc_lv<8>) (zext_ln1118_1735_fu_12984215_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1217_fu_1799_p2() {
    mul_ln1118_1217_fu_1799_p2 = (!mul_ln1118_1217_fu_1799_p0.read().is_01() || !ap_const_lv14_27.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1217_fu_1799_p0.read()) * sc_biguint<14>(ap_const_lv14_27);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1218_fu_2736_p0() {
    mul_ln1118_1218_fu_2736_p0 =  (sc_lv<8>) (zext_ln1118_1868_fu_12987710_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1218_fu_2736_p2() {
    mul_ln1118_1218_fu_2736_p2 = (!mul_ln1118_1218_fu_2736_p0.read().is_01() || !ap_const_lv15_7FCC.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1218_fu_2736_p0.read()) * sc_bigint<15>(ap_const_lv15_7FCC);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1219_fu_3279_p0() {
    mul_ln1118_1219_fu_3279_p0 =  (sc_lv<8>) (zext_ln1116_188_fu_12993002_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1219_fu_3279_p2() {
    mul_ln1118_1219_fu_3279_p2 = (!mul_ln1118_1219_fu_3279_p0.read().is_01() || !ap_const_lv16_FF92.is_01())? sc_lv<16>(): sc_biguint<8>(mul_ln1118_1219_fu_3279_p0.read()) * sc_bigint<16>(ap_const_lv16_FF92);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_121_fu_3383_p0() {
    mul_ln1118_121_fu_3383_p0 =  (sc_lv<8>) (zext_ln1118_44_fu_12925863_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_121_fu_3383_p2() {
    mul_ln1118_121_fu_3383_p2 = (!mul_ln1118_121_fu_3383_p0.read().is_01() || !ap_const_lv14_2C.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_121_fu_3383_p0.read()) * sc_biguint<14>(ap_const_lv14_2C);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1220_fu_3033_p0() {
    mul_ln1118_1220_fu_3033_p0 =  (sc_lv<8>) (zext_ln1118_1749_fu_12984503_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1220_fu_3033_p2() {
    mul_ln1118_1220_fu_3033_p2 = (!mul_ln1118_1220_fu_3033_p0.read().is_01() || !ap_const_lv14_2A.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1220_fu_3033_p0.read()) * sc_biguint<14>(ap_const_lv14_2A);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1221_fu_2731_p0() {
    mul_ln1118_1221_fu_2731_p0 =  (sc_lv<8>) (zext_ln1118_1752_fu_12984536_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1221_fu_2731_p2() {
    mul_ln1118_1221_fu_2731_p2 = (!mul_ln1118_1221_fu_2731_p0.read().is_01() || !ap_const_lv14_2B.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1221_fu_2731_p0.read()) * sc_biguint<14>(ap_const_lv14_2B);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1222_fu_2598_p0() {
    mul_ln1118_1222_fu_2598_p0 =  (sc_lv<8>) (zext_ln1118_1681_fu_12983187_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1222_fu_2598_p2() {
    mul_ln1118_1222_fu_2598_p2 = (!mul_ln1118_1222_fu_2598_p0.read().is_01() || !ap_const_lv15_7FDB.is_01())? sc_lv<15>(): sc_biguint<8>(mul_ln1118_1222_fu_2598_p0.read()) * sc_bigint<15>(ap_const_lv15_7FDB);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1223_fu_1958_p0() {
    mul_ln1118_1223_fu_1958_p0 =  (sc_lv<8>) (zext_ln1118_1932_fu_12989793_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1223_fu_1958_p2() {
    mul_ln1118_1223_fu_1958_p2 = (!mul_ln1118_1223_fu_1958_p0.read().is_01() || !ap_const_lv14_36.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1223_fu_1958_p0.read()) * sc_biguint<14>(ap_const_lv14_36);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1224_fu_3036_p0() {
    mul_ln1118_1224_fu_3036_p0 =  (sc_lv<8>) (zext_ln1118_1691_fu_12983401_p1.read());
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1224_fu_3036_p2() {
    mul_ln1118_1224_fu_3036_p2 = (!mul_ln1118_1224_fu_3036_p0.read().is_01() || !ap_const_lv14_3FE6.is_01())? sc_lv<14>(): sc_biguint<8>(mul_ln1118_1224_fu_3036_p0.read()) * sc_bigint<14>(ap_const_lv14_3FE6);
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_mul_ln1118_1225_fu_3037_p0() {
    mul_ln1118_1225_fu_3037_p0 =  (sc_lv<8>) (zext_ln1116_157_fu_12983424_p1.read());
}

}

