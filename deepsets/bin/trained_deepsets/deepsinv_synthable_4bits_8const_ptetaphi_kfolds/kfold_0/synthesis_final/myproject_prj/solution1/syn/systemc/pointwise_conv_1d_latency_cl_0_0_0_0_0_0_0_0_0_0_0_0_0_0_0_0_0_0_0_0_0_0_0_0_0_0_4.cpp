#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1827_fu_21284_p2() {
    add_ln703_1827_fu_21284_p2 = (!sext_ln703_245_fu_21280_p1.read().is_01() || !sext_ln203_400_fu_9304_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_245_fu_21280_p1.read()) + sc_bigint<12>(sext_ln203_400_fu_9304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1828_fu_21294_p2() {
    add_ln703_1828_fu_21294_p2 = (!sext_ln703_246_fu_21290_p1.read().is_01() || !sext_ln203_401_fu_9378_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_246_fu_21290_p1.read()) + sc_bigint<13>(sext_ln203_401_fu_9378_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1829_fu_21300_p2() {
    add_ln703_1829_fu_21300_p2 = (!sext_ln1118_262_fu_9336_p1.read().is_01() || !zext_ln1116_172_fu_8886_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_262_fu_9336_p1.read()) + sc_biguint<11>(zext_ln1116_172_fu_8886_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_182_fu_16852_p2() {
    add_ln703_182_fu_16852_p2 = (!zext_ln708_21_fu_1454_p1.read().is_01() || !zext_ln203_2_fu_1476_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_21_fu_1454_p1.read()) + sc_biguint<9>(zext_ln203_2_fu_1476_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1830_fu_21310_p2() {
    add_ln703_1830_fu_21310_p2 = (!sext_ln703_1135_fu_21306_p1.read().is_01() || !add_ln703_1828_fu_21294_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1135_fu_21306_p1.read()) + sc_biguint<13>(add_ln703_1828_fu_21294_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1831_fu_55062_p2() {
    add_ln703_1831_fu_55062_p2 = (!sext_ln703_247_fu_55059_p1.read().is_01() || !sext_ln203_403_fu_35464_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_247_fu_55059_p1.read()) + sc_bigint<14>(sext_ln203_403_fu_35464_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1832_fu_21316_p2() {
    add_ln703_1832_fu_21316_p2 = (!zext_ln203_292_fu_9414_p1.read().is_01() || !sext_ln203_402_fu_9398_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_292_fu_9414_p1.read()) + sc_bigint<11>(sext_ln203_402_fu_9398_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1833_fu_21326_p2() {
    add_ln703_1833_fu_21326_p2 = (!sext_ln703_1136_fu_21322_p1.read().is_01() || !zext_ln203_293_fu_9438_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1136_fu_21322_p1.read()) + sc_biguint<12>(zext_ln203_293_fu_9438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1834_fu_55071_p2() {
    add_ln703_1834_fu_55071_p2 = (!sext_ln703_1137_fu_55068_p1.read().is_01() || !add_ln703_1831_fu_55062_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1137_fu_55068_p1.read()) + sc_biguint<14>(add_ln703_1831_fu_55062_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1835_fu_21332_p2() {
    add_ln703_1835_fu_21332_p2 = (!zext_ln1118_835_fu_8906_p1.read().is_01() || !zext_ln708_426_fu_8994_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_835_fu_8906_p1.read()) + sc_biguint<9>(zext_ln708_426_fu_8994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1836_fu_21342_p2() {
    add_ln703_1836_fu_21342_p2 = (!zext_ln203_284_fu_9056_p1.read().is_01() || !zext_ln1116_181_fu_9104_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_284_fu_9056_p1.read()) + sc_biguint<9>(zext_ln1116_181_fu_9104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1837_fu_21352_p2() {
    add_ln703_1837_fu_21352_p2 = (!zext_ln703_375_fu_21348_p1.read().is_01() || !zext_ln1116_178_fu_9048_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_375_fu_21348_p1.read()) + sc_biguint<10>(zext_ln1116_178_fu_9048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1838_fu_21362_p2() {
    add_ln703_1838_fu_21362_p2 = (!zext_ln703_376_fu_21358_p1.read().is_01() || !zext_ln703_374_fu_21338_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_376_fu_21358_p1.read()) + sc_biguint<11>(zext_ln703_374_fu_21338_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1839_fu_55080_p2() {
    add_ln703_1839_fu_55080_p2 = (!zext_ln703_377_fu_55077_p1.read().is_01() || !add_ln703_1834_fu_55071_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_377_fu_55077_p1.read()) + sc_biguint<14>(add_ln703_1834_fu_55071_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_183_fu_16862_p2() {
    add_ln703_183_fu_16862_p2 = (!zext_ln703_43_fu_16858_p1.read().is_01() || !zext_ln1118_195_fu_2724_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_43_fu_16858_p1.read()) + sc_biguint<10>(zext_ln1118_195_fu_2724_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1840_fu_55090_p2() {
    add_ln703_1840_fu_55090_p2 = (!zext_ln708_843_fu_35494_p1.read().is_01() || !zext_ln708_844_fu_35557_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_843_fu_35494_p1.read()) + sc_biguint<11>(zext_ln708_844_fu_35557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1841_fu_55100_p2() {
    add_ln703_1841_fu_55100_p2 = (!zext_ln703_378_fu_55096_p1.read().is_01() || !sext_ln703_248_fu_55086_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_378_fu_55096_p1.read()) + sc_bigint<15>(sext_ln703_248_fu_55086_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1842_fu_55106_p2() {
    add_ln703_1842_fu_55106_p2 = (!zext_ln1118_871_fu_35596_p1.read().is_01() || !sext_ln708_135_fu_35529_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_871_fu_35596_p1.read()) + sc_bigint<12>(sext_ln708_135_fu_35529_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1843_fu_55112_p2() {
    add_ln703_1843_fu_55112_p2 = (!sext_ln1116_43_fu_35027_p1.read().is_01() || !sext_ln708_138_fu_35678_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_43_fu_35027_p1.read()) + sc_bigint<10>(sext_ln708_138_fu_35678_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1844_fu_55122_p2() {
    add_ln703_1844_fu_55122_p2 = (!sext_ln703_1138_fu_55118_p1.read().is_01() || !add_ln703_1842_fu_55106_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1138_fu_55118_p1.read()) + sc_biguint<12>(add_ln703_1842_fu_55106_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1845_fu_55132_p2() {
    add_ln703_1845_fu_55132_p2 = (!sext_ln703_1139_fu_55128_p1.read().is_01() || !add_ln703_1841_fu_55100_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1139_fu_55128_p1.read()) + sc_biguint<15>(add_ln703_1841_fu_55100_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1846_fu_55138_p2() {
    add_ln703_1846_fu_55138_p2 = (!zext_ln708_458_fu_35628_p1.read().is_01() || !zext_ln1118_860_fu_35265_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_458_fu_35628_p1.read()) + sc_biguint<10>(zext_ln1118_860_fu_35265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1847_fu_55148_p2() {
    add_ln703_1847_fu_55148_p2 = (!zext_ln703_379_fu_55144_p1.read().is_01() || !zext_ln708_456_fu_35624_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_379_fu_55144_p1.read()) + sc_biguint<11>(zext_ln708_456_fu_35624_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1848_fu_55158_p2() {
    add_ln703_1848_fu_55158_p2 = (!sext_ln708_137_fu_35620_p1.read().is_01() || !zext_ln203_295_fu_35567_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_137_fu_35620_p1.read()) + sc_biguint<9>(zext_ln203_295_fu_35567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1849_fu_55168_p2() {
    add_ln703_1849_fu_55168_p2 = (!zext_ln1118_870_fu_35570_p1.read().is_01() || !zext_ln1118_872_fu_35646_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_870_fu_35570_p1.read()) + sc_biguint<9>(zext_ln1118_872_fu_35646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_184_fu_16872_p2() {
    add_ln703_184_fu_16872_p2 = (!zext_ln703_44_fu_16868_p1.read().is_01() || !sext_ln703_160_fu_16848_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_44_fu_16868_p1.read()) + sc_bigint<11>(sext_ln703_160_fu_16848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1850_fu_55178_p2() {
    add_ln703_1850_fu_55178_p2 = (!zext_ln703_381_fu_55174_p1.read().is_01() || !sext_ln703_1140_fu_55164_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_381_fu_55174_p1.read()) + sc_bigint<11>(sext_ln703_1140_fu_55164_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1851_fu_55188_p2() {
    add_ln703_1851_fu_55188_p2 = (!sext_ln703_1141_fu_55184_p1.read().is_01() || !zext_ln703_380_fu_55154_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1141_fu_55184_p1.read()) + sc_biguint<13>(zext_ln703_380_fu_55154_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1852_fu_55198_p2() {
    add_ln703_1852_fu_55198_p2 = (!sext_ln703_1142_fu_55194_p1.read().is_01() || !add_ln703_1845_fu_55132_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1142_fu_55194_p1.read()) + sc_biguint<15>(add_ln703_1845_fu_55132_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1853_fu_55204_p2() {
    add_ln703_1853_fu_55204_p2 = (!zext_ln708_848_fu_35719_p1.read().is_01() || !zext_ln203_297_fu_35700_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_848_fu_35719_p1.read()) + sc_biguint<10>(zext_ln203_297_fu_35700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1855_fu_21368_p2() {
    add_ln703_1855_fu_21368_p2 = (!sext_ln203_404_fu_9496_p1.read().is_01() || !ap_const_lv12_80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_404_fu_9496_p1.read()) + sc_biguint<12>(ap_const_lv12_80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1856_fu_21374_p2() {
    add_ln703_1856_fu_21374_p2 = (!sext_ln1118_264_fu_9528_p1.read().is_01() || !sext_ln1118_266_fu_9552_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_264_fu_9528_p1.read()) + sc_bigint<10>(sext_ln1118_266_fu_9552_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1857_fu_21384_p2() {
    add_ln703_1857_fu_21384_p2 = (!sext_ln703_1144_fu_21380_p1.read().is_01() || !add_ln703_1855_fu_21368_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1144_fu_21380_p1.read()) + sc_biguint<12>(add_ln703_1855_fu_21368_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1858_fu_21394_p2() {
    add_ln703_1858_fu_21394_p2 = (!sext_ln703_1145_fu_21390_p1.read().is_01() || !sext_ln1118_268_fu_9654_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1145_fu_21390_p1.read()) + sc_bigint<13>(sext_ln1118_268_fu_9654_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1859_fu_21400_p2() {
    add_ln703_1859_fu_21400_p2 = (!sext_ln708_140_fu_9696_p1.read().is_01() || !zext_ln1118_881_fu_9728_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_140_fu_9696_p1.read()) + sc_biguint<12>(zext_ln1118_881_fu_9728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_185_fu_44854_p2() {
    add_ln703_185_fu_44854_p2 = (!sext_ln703_161_fu_44851_p1.read().is_01() || !add_ln703_180_reg_68996.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_161_fu_44851_p1.read()) + sc_biguint<14>(add_ln703_180_reg_68996.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1860_fu_21410_p2() {
    add_ln703_1860_fu_21410_p2 = (!sext_ln703_1146_fu_21406_p1.read().is_01() || !add_ln703_1858_fu_21394_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1146_fu_21406_p1.read()) + sc_biguint<13>(add_ln703_1858_fu_21394_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1861_fu_21420_p2() {
    add_ln703_1861_fu_21420_p2 = (!sext_ln1118_267_fu_9622_p1.read().is_01() || !sext_ln708_139_fu_9572_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_267_fu_9622_p1.read()) + sc_bigint<10>(sext_ln708_139_fu_9572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1862_fu_21430_p2() {
    add_ln703_1862_fu_21430_p2 = (!zext_ln1118_876_fu_9590_p1.read().is_01() || !zext_ln1118_835_fu_8906_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_876_fu_9590_p1.read()) + sc_biguint<9>(zext_ln1118_835_fu_8906_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1863_fu_21440_p2() {
    add_ln703_1863_fu_21440_p2 = (!zext_ln703_383_fu_21436_p1.read().is_01() || !sext_ln703_1148_fu_21426_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_383_fu_21436_p1.read()) + sc_bigint<11>(sext_ln703_1148_fu_21426_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1864_fu_21450_p2() {
    add_ln703_1864_fu_21450_p2 = (!sext_ln703_1149_fu_21446_p1.read().is_01() || !sext_ln703_1147_fu_21416_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1149_fu_21446_p1.read()) + sc_bigint<14>(sext_ln703_1147_fu_21416_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1865_fu_21456_p2() {
    add_ln703_1865_fu_21456_p2 = (!add_ln703_1864_fu_21450_p2.read().is_01() || !sext_ln1118_271_fu_9770_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_1864_fu_21450_p2.read()) + sc_bigint<14>(sext_ln1118_271_fu_9770_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1866_fu_55227_p2() {
    add_ln703_1866_fu_55227_p2 = (!sext_ln203_405_fu_35754_p1.read().is_01() || !sext_ln1118_276_fu_35757_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_405_fu_35754_p1.read()) + sc_bigint<12>(sext_ln1118_276_fu_35757_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1867_fu_55237_p2() {
    add_ln703_1867_fu_55237_p2 = (!sext_ln703_1151_fu_55233_p1.read().is_01() || !sext_ln1118_272_fu_35750_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1151_fu_55233_p1.read()) + sc_bigint<13>(sext_ln1118_272_fu_35750_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1868_fu_55247_p2() {
    add_ln703_1868_fu_55247_p2 = (!sext_ln703_1152_fu_55243_p1.read().is_01() || !sext_ln703_1150_fu_55224_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1152_fu_55243_p1.read()) + sc_bigint<15>(sext_ln703_1150_fu_55224_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1869_fu_21462_p2() {
    add_ln703_1869_fu_21462_p2 = (!sext_ln1118_273_fu_9794_p1.read().is_01() || !zext_ln1118_886_fu_9836_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_273_fu_9794_p1.read()) + sc_biguint<11>(zext_ln1118_886_fu_9836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_186_fu_44859_p2() {
    add_ln703_186_fu_44859_p2 = (!sext_ln708_14_reg_67331.read().is_01() || !sext_ln203_33_fu_27722_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_14_reg_67331.read()) + sc_bigint<12>(sext_ln203_33_fu_27722_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1870_fu_21472_p2() {
    add_ln703_1870_fu_21472_p2 = (!sext_ln703_1153_fu_21468_p1.read().is_01() || !sext_ln708_141_fu_9908_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1153_fu_21468_p1.read()) + sc_bigint<12>(sext_ln708_141_fu_9908_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1871_fu_55256_p2() {
    add_ln703_1871_fu_55256_p2 = (!sext_ln1118_278_fu_35792_p1.read().is_01() || !zext_ln1116_186_reg_68047.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_278_fu_35792_p1.read()) + sc_biguint<10>(zext_ln1116_186_reg_68047.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1872_fu_55265_p2() {
    add_ln703_1872_fu_55265_p2 = (!sext_ln703_1155_fu_55261_p1.read().is_01() || !zext_ln1118_889_fu_35788_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1155_fu_55261_p1.read()) + sc_biguint<11>(zext_ln1118_889_fu_35788_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1873_fu_55275_p2() {
    add_ln703_1873_fu_55275_p2 = (!sext_ln703_1156_fu_55271_p1.read().is_01() || !sext_ln703_1154_fu_55253_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1156_fu_55271_p1.read()) + sc_bigint<13>(sext_ln703_1154_fu_55253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1874_fu_55285_p2() {
    add_ln703_1874_fu_55285_p2 = (!sext_ln703_1157_fu_55281_p1.read().is_01() || !add_ln703_1868_fu_55247_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1157_fu_55281_p1.read()) + sc_biguint<15>(add_ln703_1868_fu_55247_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1875_fu_55291_p2() {
    add_ln703_1875_fu_55291_p2 = (!add_ln703_1874_fu_55285_p2.read().is_01() || !zext_ln203_298_fu_35827_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1874_fu_55285_p2.read()) + sc_biguint<15>(zext_ln203_298_fu_35827_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1876_fu_55297_p2() {
    add_ln703_1876_fu_55297_p2 = (!sext_ln203_406_fu_35863_p1.read().is_01() || !sext_ln203_407_fu_35895_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_406_fu_35863_p1.read()) + sc_bigint<12>(sext_ln203_407_fu_35895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1877_fu_55307_p2() {
    add_ln703_1877_fu_55307_p2 = (!sext_ln703_1158_fu_55303_p1.read().is_01() || !add_ln703_1875_fu_55291_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1158_fu_55303_p1.read()) + sc_biguint<15>(add_ln703_1875_fu_55291_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1878_fu_55317_p2() {
    add_ln703_1878_fu_55317_p2 = (!sext_ln203_408_fu_35918_p1.read().is_01() || !zext_ln203_299_fu_35831_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_408_fu_35918_p1.read()) + sc_biguint<12>(zext_ln203_299_fu_35831_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1879_fu_55327_p2() {
    add_ln703_1879_fu_55327_p2 = (!zext_ln1118_859_fu_35253_p1.read().is_01() || !zext_ln1118_872_fu_35646_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_859_fu_35253_p1.read()) + sc_biguint<9>(zext_ln1118_872_fu_35646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_187_fu_44868_p2() {
    add_ln703_187_fu_44868_p2 = (!sext_ln703_163_fu_44864_p1.read().is_01() || !add_ln703_185_fu_44854_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_163_fu_44864_p1.read()) + sc_biguint<14>(add_ln703_185_fu_44854_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1880_fu_55337_p2() {
    add_ln703_1880_fu_55337_p2 = (!zext_ln703_384_fu_55333_p1.read().is_01() || !zext_ln708_850_fu_35950_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_384_fu_55333_p1.read()) + sc_biguint<11>(zext_ln708_850_fu_35950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1881_fu_55347_p2() {
    add_ln703_1881_fu_55347_p2 = (!zext_ln703_385_fu_55343_p1.read().is_01() || !sext_ln703_1160_fu_55323_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_385_fu_55343_p1.read()) + sc_bigint<13>(sext_ln703_1160_fu_55323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1883_fu_21478_p2() {
    add_ln703_1883_fu_21478_p2 = (!zext_ln1118_894_fu_9942_p1.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_894_fu_9942_p1.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1884_fu_21488_p2() {
    add_ln703_1884_fu_21488_p2 = (!zext_ln703_386_fu_21484_p1.read().is_01() || !sext_ln203_400_fu_9304_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_386_fu_21484_p1.read()) + sc_bigint<12>(sext_ln203_400_fu_9304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1885_fu_21498_p2() {
    add_ln703_1885_fu_21498_p2 = (!sext_ln1118_280_fu_9978_p1.read().is_01() || !sext_ln708_142_fu_10002_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_280_fu_9978_p1.read()) + sc_bigint<12>(sext_ln708_142_fu_10002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1886_fu_21508_p2() {
    add_ln703_1886_fu_21508_p2 = (!sext_ln703_1162_fu_21504_p1.read().is_01() || !sext_ln703_254_fu_21494_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1162_fu_21504_p1.read()) + sc_bigint<13>(sext_ln703_254_fu_21494_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1887_fu_21518_p2() {
    add_ln703_1887_fu_21518_p2 = (!sext_ln1118_281_fu_10134_p1.read().is_01() || !zext_ln1118_898_fu_10070_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_281_fu_10134_p1.read()) + sc_biguint<12>(zext_ln1118_898_fu_10070_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1888_fu_21528_p2() {
    add_ln703_1888_fu_21528_p2 = (!sext_ln703_1163_fu_21524_p1.read().is_01() || !sext_ln703_255_fu_21514_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1163_fu_21524_p1.read()) + sc_bigint<14>(sext_ln703_255_fu_21514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1889_fu_21534_p2() {
    add_ln703_1889_fu_21534_p2 = (!zext_ln708_467_fu_10030_p1.read().is_01() || !sext_ln203_409_fu_10090_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_467_fu_10030_p1.read()) + sc_bigint<11>(sext_ln203_409_fu_10090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_188_fu_44878_p2() {
    add_ln703_188_fu_44878_p2 = (!sext_ln1118_43_fu_27892_p1.read().is_01() || !sext_ln708_17_fu_27924_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_43_fu_27892_p1.read()) + sc_bigint<11>(sext_ln708_17_fu_27924_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1890_fu_21544_p2() {
    add_ln703_1890_fu_21544_p2 = (!zext_ln708_426_fu_8994_p1.read().is_01() || !zext_ln708_430_fu_9034_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_426_fu_8994_p1.read()) + sc_biguint<9>(zext_ln708_430_fu_9034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1891_fu_21554_p2() {
    add_ln703_1891_fu_21554_p2 = (!zext_ln703_387_fu_21550_p1.read().is_01() || !sext_ln703_1164_fu_21540_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_387_fu_21550_p1.read()) + sc_bigint<12>(sext_ln703_1164_fu_21540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1892_fu_55366_p2() {
    add_ln703_1892_fu_55366_p2 = (!sext_ln703_1165_fu_55363_p1.read().is_01() || !add_ln703_1888_reg_69586.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1165_fu_55363_p1.read()) + sc_biguint<14>(add_ln703_1888_reg_69586.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1893_fu_55371_p2() {
    add_ln703_1893_fu_55371_p2 = (!add_ln703_1892_fu_55366_p2.read().is_01() || !sext_ln1118_286_fu_36064_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_1892_fu_55366_p2.read()) + sc_bigint<14>(sext_ln1118_286_fu_36064_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1894_fu_55381_p2() {
    add_ln703_1894_fu_55381_p2 = (!zext_ln1118_902_fu_35969_p1.read().is_01() || !sext_ln1118_284_fu_36020_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_902_fu_35969_p1.read()) + sc_bigint<12>(sext_ln1118_284_fu_36020_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1895_fu_55391_p2() {
    add_ln703_1895_fu_55391_p2 = (!sext_ln703_1167_fu_55387_p1.read().is_01() || !sext_ln703_1166_fu_55377_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1167_fu_55387_p1.read()) + sc_bigint<15>(sext_ln703_1166_fu_55377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1896_fu_55397_p2() {
    add_ln703_1896_fu_55397_p2 = (!sext_ln1118_282_reg_68173.read().is_01() || !sext_ln708_134_fu_35525_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_282_reg_68173.read()) + sc_bigint<10>(sext_ln708_134_fu_35525_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1897_fu_55406_p2() {
    add_ln703_1897_fu_55406_p2 = (!sext_ln1118_283_fu_35988_p1.read().is_01() || !sext_ln1118_285_fu_36040_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_283_fu_35988_p1.read()) + sc_bigint<9>(sext_ln1118_285_fu_36040_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1898_fu_55416_p2() {
    add_ln703_1898_fu_55416_p2 = (!sext_ln703_1169_fu_55412_p1.read().is_01() || !sext_ln1116_43_fu_35027_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1169_fu_55412_p1.read()) + sc_bigint<10>(sext_ln1116_43_fu_35027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1899_fu_55426_p2() {
    add_ln703_1899_fu_55426_p2 = (!sext_ln703_1170_fu_55422_p1.read().is_01() || !sext_ln703_1168_fu_55402_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1170_fu_55422_p1.read()) + sc_bigint<11>(sext_ln703_1168_fu_55402_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_189_fu_44888_p2() {
    add_ln703_189_fu_44888_p2 = (!sext_ln703_170_fu_44884_p1.read().is_01() || !zext_ln1118_218_fu_27812_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_170_fu_44884_p1.read()) + sc_biguint<12>(zext_ln1118_218_fu_27812_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_18_fu_43852_p2() {
    add_ln703_18_fu_43852_p2 = (!zext_ln708_663_fu_26260_p1.read().is_01() || !zext_ln708_665_fu_26529_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_663_fu_26260_p1.read()) + sc_biguint<10>(zext_ln708_665_fu_26529_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1900_fu_55436_p2() {
    add_ln703_1900_fu_55436_p2 = (!sext_ln703_1171_fu_55432_p1.read().is_01() || !add_ln703_1895_fu_55391_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1171_fu_55432_p1.read()) + sc_biguint<15>(add_ln703_1895_fu_55391_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1901_fu_55442_p2() {
    add_ln703_1901_fu_55442_p2 = (!sext_ln203_412_fu_36146_p1.read().is_01() || !sext_ln203_408_fu_35918_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_412_fu_36146_p1.read()) + sc_bigint<12>(sext_ln203_408_fu_35918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1902_fu_55452_p2() {
    add_ln703_1902_fu_55452_p2 = (!sext_ln703_1172_fu_55448_p1.read().is_01() || !add_ln703_1900_fu_55436_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1172_fu_55448_p1.read()) + sc_biguint<15>(add_ln703_1900_fu_55436_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1903_fu_55458_p2() {
    add_ln703_1903_fu_55458_p2 = (!sext_ln203_410_fu_36087_p1.read().is_01() || !sext_ln1118_260_fu_35193_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_410_fu_36087_p1.read()) + sc_bigint<10>(sext_ln1118_260_fu_35193_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1904_fu_55468_p2() {
    add_ln703_1904_fu_55468_p2 = (!sext_ln703_1173_fu_55464_p1.read().is_01() || !zext_ln203_301_fu_36114_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1173_fu_55464_p1.read()) + sc_biguint<12>(zext_ln203_301_fu_36114_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1905_fu_55478_p2() {
    add_ln703_1905_fu_55478_p2 = (!sext_ln703_1174_fu_55474_p1.read().is_01() || !add_ln703_1902_fu_55452_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1174_fu_55474_p1.read()) + sc_biguint<15>(add_ln703_1902_fu_55452_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1906_fu_55484_p2() {
    add_ln703_1906_fu_55484_p2 = (!sext_ln203_413_fu_36166_p1.read().is_01() || !zext_ln1116_190_fu_35110_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_413_fu_36166_p1.read()) + sc_biguint<9>(zext_ln1116_190_fu_35110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1907_fu_55494_p2() {
    add_ln703_1907_fu_55494_p2 = (!sext_ln703_1175_fu_55490_p1.read().is_01() || !sext_ln203_414_fu_36198_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1175_fu_55490_p1.read()) + sc_bigint<10>(sext_ln203_414_fu_36198_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1908_fu_55504_p2() {
    add_ln703_1908_fu_55504_p2 = (!zext_ln708_445_fu_35337_p1.read().is_01() || !zext_ln203_296_fu_35696_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_445_fu_35337_p1.read()) + sc_biguint<9>(zext_ln203_296_fu_35696_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1909_fu_55514_p2() {
    add_ln703_1909_fu_55514_p2 = (!zext_ln703_388_fu_55510_p1.read().is_01() || !zext_ln203_300_fu_36091_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_388_fu_55510_p1.read()) + sc_biguint<10>(zext_ln203_300_fu_36091_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_190_fu_44898_p2() {
    add_ln703_190_fu_44898_p2 = (!sext_ln703_171_fu_44894_p1.read().is_01() || !sext_ln703_164_fu_44874_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_171_fu_44894_p1.read()) + sc_bigint<15>(sext_ln703_164_fu_44874_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1910_fu_55524_p2() {
    add_ln703_1910_fu_55524_p2 = (!zext_ln703_389_fu_55520_p1.read().is_01() || !sext_ln703_1176_fu_55500_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_389_fu_55520_p1.read()) + sc_bigint<12>(sext_ln703_1176_fu_55500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1912_fu_21560_p2() {
    add_ln703_1912_fu_21560_p2 = (!zext_ln708_470_fu_10202_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_470_fu_10202_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1913_fu_21570_p2() {
    add_ln703_1913_fu_21570_p2 = (!sext_ln703_258_fu_21566_p1.read().is_01() || !sext_ln203_400_fu_9304_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_258_fu_21566_p1.read()) + sc_bigint<12>(sext_ln203_400_fu_9304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1914_fu_21580_p2() {
    add_ln703_1914_fu_21580_p2 = (!sext_ln703_259_fu_21576_p1.read().is_01() || !sext_ln203_415_fu_10222_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_259_fu_21576_p1.read()) + sc_bigint<13>(sext_ln203_415_fu_10222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1915_fu_21586_p2() {
    add_ln703_1915_fu_21586_p2 = (!sext_ln1118_262_fu_9336_p1.read().is_01() || !zext_ln1116_199_fu_10234_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_262_fu_9336_p1.read()) + sc_biguint<11>(zext_ln1116_199_fu_10234_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1916_fu_21596_p2() {
    add_ln703_1916_fu_21596_p2 = (!sext_ln703_1179_fu_21592_p1.read().is_01() || !add_ln703_1914_fu_21580_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1179_fu_21592_p1.read()) + sc_biguint<13>(add_ln703_1914_fu_21580_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1917_fu_21606_p2() {
    add_ln703_1917_fu_21606_p2 = (!sext_ln1116_46_fu_10278_p1.read().is_01() || !sext_ln708_145_fu_10360_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_46_fu_10278_p1.read()) + sc_bigint<12>(sext_ln708_145_fu_10360_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1918_fu_21616_p2() {
    add_ln703_1918_fu_21616_p2 = (!sext_ln703_1180_fu_21612_p1.read().is_01() || !sext_ln703_260_fu_21602_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1180_fu_21612_p1.read()) + sc_bigint<14>(sext_ln703_260_fu_21602_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1919_fu_21622_p2() {
    add_ln703_1919_fu_21622_p2 = (!sext_ln708_144_fu_10286_p1.read().is_01() || !sext_ln1118_288_fu_10340_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_144_fu_10286_p1.read()) + sc_bigint<11>(sext_ln1118_288_fu_10340_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_191_fu_44904_p2() {
    add_ln703_191_fu_44904_p2 = (!zext_ln708_702_fu_27868_p1.read().is_01() || !zext_ln708_61_fu_27436_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_702_fu_27868_p1.read()) + sc_biguint<10>(zext_ln708_61_fu_27436_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1920_fu_21632_p2() {
    add_ln703_1920_fu_21632_p2 = (!zext_ln1118_913_fu_10376_p1.read().is_01() || !zext_ln1118_911_fu_10304_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_913_fu_10376_p1.read()) + sc_biguint<10>(zext_ln1118_911_fu_10304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1921_fu_21642_p2() {
    add_ln703_1921_fu_21642_p2 = (!zext_ln703_390_fu_21638_p1.read().is_01() || !sext_ln703_1181_fu_21628_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_390_fu_21638_p1.read()) + sc_bigint<12>(sext_ln703_1181_fu_21628_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1922_fu_55547_p2() {
    add_ln703_1922_fu_55547_p2 = (!sext_ln703_1182_fu_55544_p1.read().is_01() || !add_ln703_1918_reg_69596.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1182_fu_55544_p1.read()) + sc_biguint<14>(add_ln703_1918_reg_69596.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1923_fu_55552_p2() {
    add_ln703_1923_fu_55552_p2 = (!sext_ln1118_259_fu_35153_p1.read().is_01() || !sext_ln1118_289_fu_36202_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_259_fu_35153_p1.read()) + sc_bigint<12>(sext_ln1118_289_fu_36202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1924_fu_55562_p2() {
    add_ln703_1924_fu_55562_p2 = (!sext_ln703_1183_fu_55558_p1.read().is_01() || !add_ln703_1922_fu_55547_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1183_fu_55558_p1.read()) + sc_biguint<14>(add_ln703_1922_fu_55547_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1925_fu_55572_p2() {
    add_ln703_1925_fu_55572_p2 = (!zext_ln708_854_fu_36312_p1.read().is_01() || !zext_ln1118_915_fu_36208_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_854_fu_36312_p1.read()) + sc_biguint<10>(zext_ln1118_915_fu_36208_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1926_fu_55582_p2() {
    add_ln703_1926_fu_55582_p2 = (!zext_ln1116_203_fu_36260_p1.read().is_01() || !zext_ln708_477_fu_36272_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_203_fu_36260_p1.read()) + sc_biguint<10>(zext_ln708_477_fu_36272_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1927_fu_55592_p2() {
    add_ln703_1927_fu_55592_p2 = (!zext_ln703_392_fu_55588_p1.read().is_01() || !zext_ln703_391_fu_55578_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_392_fu_55588_p1.read()) + sc_biguint<11>(zext_ln703_391_fu_55578_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1928_fu_55602_p2() {
    add_ln703_1928_fu_55602_p2 = (!zext_ln703_393_fu_55598_p1.read().is_01() || !sext_ln703_1184_fu_55568_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_393_fu_55598_p1.read()) + sc_bigint<15>(sext_ln703_1184_fu_55568_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1929_fu_55608_p2() {
    add_ln703_1929_fu_55608_p2 = (!zext_ln203_302_reg_68216.read().is_01() || !sext_ln708_146_fu_36205_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_302_reg_68216.read()) + sc_bigint<11>(sext_ln708_146_fu_36205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_192_fu_44914_p2() {
    add_ln703_192_fu_44914_p2 = (!zext_ln703_45_fu_44910_p1.read().is_01() || !zext_ln1118_111_reg_67212.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_45_fu_44910_p1.read()) + sc_biguint<11>(zext_ln1118_111_reg_67212.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1930_fu_55613_p2() {
    add_ln703_1930_fu_55613_p2 = (!sext_ln1116_47_fu_36228_p1.read().is_01() || !sext_ln203_413_fu_36166_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_47_fu_36228_p1.read()) + sc_bigint<9>(sext_ln203_413_fu_36166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1931_fu_55623_p2() {
    add_ln703_1931_fu_55623_p2 = (!sext_ln703_1185_fu_55619_p1.read().is_01() || !add_ln703_1929_fu_55608_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1185_fu_55619_p1.read()) + sc_biguint<11>(add_ln703_1929_fu_55608_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1932_fu_55633_p2() {
    add_ln703_1932_fu_55633_p2 = (!zext_ln708_474_fu_36246_p1.read().is_01() || !zext_ln708_440_fu_34987_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_474_fu_36246_p1.read()) + sc_biguint<9>(zext_ln708_440_fu_34987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1933_fu_55643_p2() {
    add_ln703_1933_fu_55643_p2 = (!zext_ln1116_204_fu_36276_p1.read().is_01() || !zext_ln1118_916_fu_36330_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_204_fu_36276_p1.read()) + sc_biguint<9>(zext_ln1118_916_fu_36330_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1934_fu_55653_p2() {
    add_ln703_1934_fu_55653_p2 = (!zext_ln703_395_fu_55649_p1.read().is_01() || !zext_ln703_394_fu_55639_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_395_fu_55649_p1.read()) + sc_biguint<10>(zext_ln703_394_fu_55639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1935_fu_55663_p2() {
    add_ln703_1935_fu_55663_p2 = (!zext_ln703_396_fu_55659_p1.read().is_01() || !sext_ln703_1186_fu_55629_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_396_fu_55659_p1.read()) + sc_bigint<12>(sext_ln703_1186_fu_55629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1936_fu_55673_p2() {
    add_ln703_1936_fu_55673_p2 = (!sext_ln703_1187_fu_55669_p1.read().is_01() || !add_ln703_1928_fu_55602_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1187_fu_55669_p1.read()) + sc_biguint<15>(add_ln703_1928_fu_55602_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1937_fu_55679_p2() {
    add_ln703_1937_fu_55679_p2 = (!add_ln703_1936_fu_55673_p2.read().is_01() || !zext_ln203_304_fu_36362_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1936_fu_55673_p2.read()) + sc_biguint<15>(zext_ln203_304_fu_36362_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1938_fu_55685_p2() {
    add_ln703_1938_fu_55685_p2 = (!sext_ln203_416_fu_36394_p1.read().is_01() || !sext_ln203_398_fu_35429_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_416_fu_36394_p1.read()) + sc_bigint<10>(sext_ln203_398_fu_35429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1939_fu_55695_p2() {
    add_ln703_1939_fu_55695_p2 = (!sext_ln703_1188_fu_55691_p1.read().is_01() || !zext_ln708_856_fu_36416_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1188_fu_55691_p1.read()) + sc_biguint<11>(zext_ln708_856_fu_36416_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_193_fu_44923_p2() {
    add_ln703_193_fu_44923_p2 = (!zext_ln1118_180_fu_27232_p1.read().is_01() || !zext_ln203_40_fu_27848_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_180_fu_27232_p1.read()) + sc_biguint<10>(zext_ln203_40_fu_27848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1941_fu_21648_p2() {
    add_ln703_1941_fu_21648_p2 = (!sext_ln203_417_fu_10448_p1.read().is_01() || !sext_ln203_418_fu_10456_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_417_fu_10448_p1.read()) + sc_bigint<12>(sext_ln203_418_fu_10456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1942_fu_55725_p2() {
    add_ln703_1942_fu_55725_p2 = (!sext_ln703_1191_fu_55722_p1.read().is_01() || !or_ln703_12_fu_55715_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1191_fu_55722_p1.read()) + sc_biguint<16>(or_ln703_12_fu_55715_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1943_fu_55731_p2() {
    add_ln703_1943_fu_55731_p2 = (!sext_ln203_426_fu_36455_p1.read().is_01() || !sext_ln203_427_fu_36478_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_426_fu_36455_p1.read()) + sc_bigint<12>(sext_ln203_427_fu_36478_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1944_fu_55741_p2() {
    add_ln703_1944_fu_55741_p2 = (!sext_ln203_429_fu_36558_p1.read().is_01() || !sext_ln203_433_fu_36624_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_429_fu_36558_p1.read()) + sc_bigint<12>(sext_ln203_433_fu_36624_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1945_fu_55751_p2() {
    add_ln703_1945_fu_55751_p2 = (!sext_ln703_1193_fu_55747_p1.read().is_01() || !sext_ln703_1192_fu_55737_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1193_fu_55747_p1.read()) + sc_bigint<13>(sext_ln703_1192_fu_55737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1946_fu_55761_p2() {
    add_ln703_1946_fu_55761_p2 = (!sext_ln703_1194_fu_55757_p1.read().is_01() || !add_ln703_1942_fu_55725_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1194_fu_55757_p1.read()) + sc_biguint<16>(add_ln703_1942_fu_55725_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1947_fu_55767_p2() {
    add_ln703_1947_fu_55767_p2 = (!zext_ln708_858_fu_36506_p1.read().is_01() || !zext_ln708_851_fu_36110_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_858_fu_36506_p1.read()) + sc_biguint<11>(zext_ln708_851_fu_36110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1948_fu_55777_p2() {
    add_ln703_1948_fu_55777_p2 = (!zext_ln703_397_fu_55773_p1.read().is_01() || !zext_ln203_306_fu_36420_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_397_fu_55773_p1.read()) + sc_biguint<12>(zext_ln203_306_fu_36420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1949_fu_21654_p2() {
    add_ln703_1949_fu_21654_p2 = (!sext_ln203_419_fu_10480_p1.read().is_01() || !sext_ln203_422_fu_10524_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_419_fu_10480_p1.read()) + sc_bigint<11>(sext_ln203_422_fu_10524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_194_fu_44933_p2() {
    add_ln703_194_fu_44933_p2 = (!zext_ln708_49_fu_26796_p1.read().is_01() || !sext_ln708_15_fu_27832_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_49_fu_26796_p1.read()) + sc_bigint<11>(sext_ln708_15_fu_27832_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1950_fu_55790_p2() {
    add_ln703_1950_fu_55790_p2 = (!sext_ln203_428_fu_36538_p1.read().is_01() || !zext_ln1118_880_reg_68107.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_428_fu_36538_p1.read()) + sc_biguint<11>(zext_ln1118_880_reg_68107.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1951_fu_55799_p2() {
    add_ln703_1951_fu_55799_p2 = (!sext_ln703_1196_fu_55795_p1.read().is_01() || !sext_ln703_1195_fu_55787_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1196_fu_55795_p1.read()) + sc_bigint<12>(sext_ln703_1195_fu_55787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1952_fu_55809_p2() {
    add_ln703_1952_fu_55809_p2 = (!sext_ln703_1197_fu_55805_p1.read().is_01() || !zext_ln703_398_fu_55783_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1197_fu_55805_p1.read()) + sc_biguint<14>(zext_ln703_398_fu_55783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1953_fu_55819_p2() {
    add_ln703_1953_fu_55819_p2 = (!sext_ln703_1198_fu_55815_p1.read().is_01() || !add_ln703_1946_fu_55761_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1198_fu_55815_p1.read()) + sc_biguint<16>(add_ln703_1946_fu_55761_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1954_fu_21660_p2() {
    add_ln703_1954_fu_21660_p2 = (!sext_ln203_420_fu_10504_p1.read().is_01() || !sext_ln1118_287_fu_10336_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_420_fu_10504_p1.read()) + sc_bigint<10>(sext_ln1118_287_fu_10336_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1955_fu_55828_p2() {
    add_ln703_1955_fu_55828_p2 = (!sext_ln703_1199_fu_55825_p1.read().is_01() || !zext_ln203_308_fu_36582_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1199_fu_55825_p1.read()) + sc_biguint<11>(zext_ln203_308_fu_36582_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1956_fu_55838_p2() {
    add_ln703_1956_fu_55838_p2 = (!sext_ln203_424_fu_36447_p1.read().is_01() || !sext_ln203_410_fu_36087_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_424_fu_36447_p1.read()) + sc_bigint<10>(sext_ln203_410_fu_36087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1957_fu_55848_p2() {
    add_ln703_1957_fu_55848_p2 = (!sext_ln1118_261_fu_35285_p1.read().is_01() || !sext_ln1116_45_fu_35321_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_261_fu_35285_p1.read()) + sc_bigint<10>(sext_ln1116_45_fu_35321_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1958_fu_55858_p2() {
    add_ln703_1958_fu_55858_p2 = (!sext_ln703_1202_fu_55854_p1.read().is_01() || !sext_ln703_1201_fu_55844_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1202_fu_55854_p1.read()) + sc_bigint<11>(sext_ln703_1201_fu_55844_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1959_fu_55868_p2() {
    add_ln703_1959_fu_55868_p2 = (!sext_ln703_1203_fu_55864_p1.read().is_01() || !sext_ln703_1200_fu_55834_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1203_fu_55864_p1.read()) + sc_bigint<12>(sext_ln703_1200_fu_55834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_195_fu_44943_p2() {
    add_ln703_195_fu_44943_p2 = (!sext_ln703_172_fu_44939_p1.read().is_01() || !zext_ln703_47_fu_44929_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_172_fu_44939_p1.read()) + sc_biguint<12>(zext_ln703_47_fu_44929_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1960_fu_55878_p2() {
    add_ln703_1960_fu_55878_p2 = (!sext_ln203_430_fu_36578_p1.read().is_01() || !sext_ln203_397_fu_35425_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_430_fu_36578_p1.read()) + sc_bigint<9>(sext_ln203_397_fu_35425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1961_fu_55888_p2() {
    add_ln703_1961_fu_55888_p2 = (!sext_ln703_1205_fu_55884_p1.read().is_01() || !sext_ln203_425_fu_36451_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1205_fu_55884_p1.read()) + sc_bigint<10>(sext_ln203_425_fu_36451_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1962_fu_55898_p2() {
    add_ln703_1962_fu_55898_p2 = (!zext_ln203_305_reg_68221.read().is_01() || !zext_ln1116_181_reg_68014.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_305_reg_68221.read()) + sc_biguint<9>(zext_ln1116_181_reg_68014.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1963_fu_55906_p2() {
    add_ln703_1963_fu_55906_p2 = (!zext_ln203_307_fu_36485_p1.read().is_01() || !zext_ln708_440_fu_34987_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_307_fu_36485_p1.read()) + sc_biguint<9>(zext_ln708_440_fu_34987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1964_fu_55916_p2() {
    add_ln703_1964_fu_55916_p2 = (!zext_ln703_400_fu_55912_p1.read().is_01() || !zext_ln703_399_fu_55902_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_400_fu_55912_p1.read()) + sc_biguint<10>(zext_ln703_399_fu_55902_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1965_fu_55926_p2() {
    add_ln703_1965_fu_55926_p2 = (!zext_ln703_401_fu_55922_p1.read().is_01() || !sext_ln703_1206_fu_55894_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_401_fu_55922_p1.read()) + sc_bigint<12>(sext_ln703_1206_fu_55894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1966_fu_55936_p2() {
    add_ln703_1966_fu_55936_p2 = (!sext_ln703_1207_fu_55932_p1.read().is_01() || !sext_ln703_1204_fu_55874_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1207_fu_55932_p1.read()) + sc_bigint<13>(sext_ln703_1204_fu_55874_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1968_fu_21666_p2() {
    add_ln703_1968_fu_21666_p2 = (!zext_ln708_491_fu_10590_p1.read().is_01() || !zext_ln203_309_fu_10604_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_491_fu_10590_p1.read()) + sc_biguint<10>(zext_ln203_309_fu_10604_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1969_fu_21676_p2() {
    add_ln703_1969_fu_21676_p2 = (!zext_ln703_402_fu_21672_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_402_fu_21672_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_196_fu_44953_p2() {
    add_ln703_196_fu_44953_p2 = (!sext_ln703_175_fu_44949_p1.read().is_01() || !zext_ln703_46_fu_44919_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_175_fu_44949_p1.read()) + sc_biguint<13>(zext_ln703_46_fu_44919_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1970_fu_21686_p2() {
    add_ln703_1970_fu_21686_p2 = (!sext_ln703_263_fu_21682_p1.read().is_01() || !sext_ln203_434_fu_10608_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_263_fu_21682_p1.read()) + sc_bigint<12>(sext_ln203_434_fu_10608_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1971_fu_21696_p2() {
    add_ln703_1971_fu_21696_p2 = (!sext_ln1118_295_fu_10662_p1.read().is_01() || !sext_ln1118_293_fu_10628_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_295_fu_10662_p1.read()) + sc_bigint<12>(sext_ln1118_293_fu_10628_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1972_fu_21706_p2() {
    add_ln703_1972_fu_21706_p2 = (!sext_ln703_1209_fu_21702_p1.read().is_01() || !sext_ln703_264_fu_21692_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1209_fu_21702_p1.read()) + sc_bigint<13>(sext_ln703_264_fu_21692_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1973_fu_21712_p2() {
    add_ln703_1973_fu_21712_p2 = (!add_ln703_1972_fu_21706_p2.read().is_01() || !sext_ln1118_297_fu_10690_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_1972_fu_21706_p2.read()) + sc_bigint<13>(sext_ln1118_297_fu_10690_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1974_fu_21722_p2() {
    add_ln703_1974_fu_21722_p2 = (!zext_ln708_835_fu_9168_p1.read().is_01() || !zext_ln1118_913_fu_10376_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_835_fu_9168_p1.read()) + sc_biguint<10>(zext_ln1118_913_fu_10376_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1975_fu_21732_p2() {
    add_ln703_1975_fu_21732_p2 = (!zext_ln703_403_fu_21728_p1.read().is_01() || !zext_ln203_310_fu_10734_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_403_fu_21728_p1.read()) + sc_biguint<11>(zext_ln203_310_fu_10734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1976_fu_21742_p2() {
    add_ln703_1976_fu_21742_p2 = (!zext_ln703_404_fu_21738_p1.read().is_01() || !sext_ln703_1210_fu_21718_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_404_fu_21738_p1.read()) + sc_bigint<14>(sext_ln703_1210_fu_21718_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1977_fu_21748_p2() {
    add_ln703_1977_fu_21748_p2 = (!sext_ln708_147_fu_10710_p1.read().is_01() || !sext_ln1118_298_fu_10738_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_147_fu_10710_p1.read()) + sc_bigint<9>(sext_ln1118_298_fu_10738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1978_fu_21758_p2() {
    add_ln703_1978_fu_21758_p2 = (!zext_ln708_430_fu_9034_p1.read().is_01() || !zext_ln203_284_fu_9056_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_430_fu_9034_p1.read()) + sc_biguint<9>(zext_ln203_284_fu_9056_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1979_fu_21768_p2() {
    add_ln703_1979_fu_21768_p2 = (!zext_ln703_405_fu_21764_p1.read().is_01() || !zext_ln1118_911_fu_10304_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_405_fu_21764_p1.read()) + sc_biguint<10>(zext_ln1118_911_fu_10304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_197_fu_44963_p2() {
    add_ln703_197_fu_44963_p2 = (!sext_ln703_176_fu_44959_p1.read().is_01() || !add_ln703_190_fu_44898_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_176_fu_44959_p1.read()) + sc_biguint<15>(add_ln703_190_fu_44898_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1980_fu_21778_p2() {
    add_ln703_1980_fu_21778_p2 = (!zext_ln703_406_fu_21774_p1.read().is_01() || !sext_ln703_1211_fu_21754_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_406_fu_21774_p1.read()) + sc_bigint<11>(sext_ln703_1211_fu_21754_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1981_fu_55955_p2() {
    add_ln703_1981_fu_55955_p2 = (!sext_ln703_1212_fu_55952_p1.read().is_01() || !add_ln703_1976_reg_69621.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1212_fu_55952_p1.read()) + sc_biguint<14>(add_ln703_1976_reg_69621.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1982_fu_55960_p2() {
    add_ln703_1982_fu_55960_p2 = (!sext_ln708_148_reg_68249.read().is_01() || !sext_ln203_429_fu_36558_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_148_reg_68249.read()) + sc_bigint<12>(sext_ln203_429_fu_36558_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1983_fu_55969_p2() {
    add_ln703_1983_fu_55969_p2 = (!sext_ln703_1213_fu_55965_p1.read().is_01() || !add_ln703_1981_fu_55955_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1213_fu_55965_p1.read()) + sc_biguint<14>(add_ln703_1981_fu_55955_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1984_fu_55979_p2() {
    add_ln703_1984_fu_55979_p2 = (!sext_ln1118_299_fu_36728_p1.read().is_01() || !sext_ln708_151_fu_36760_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_299_fu_36728_p1.read()) + sc_bigint<11>(sext_ln708_151_fu_36760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1985_fu_55989_p2() {
    add_ln703_1985_fu_55989_p2 = (!sext_ln703_1215_fu_55985_p1.read().is_01() || !zext_ln1118_925_fu_36648_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1215_fu_55985_p1.read()) + sc_biguint<12>(zext_ln1118_925_fu_36648_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1986_fu_55999_p2() {
    add_ln703_1986_fu_55999_p2 = (!sext_ln703_1216_fu_55995_p1.read().is_01() || !sext_ln703_1214_fu_55975_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1216_fu_55995_p1.read()) + sc_bigint<15>(sext_ln703_1214_fu_55975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1987_fu_56005_p2() {
    add_ln703_1987_fu_56005_p2 = (!zext_ln708_861_fu_36704_p1.read().is_01() || !zext_ln708_477_fu_36272_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_861_fu_36704_p1.read()) + sc_biguint<10>(zext_ln708_477_fu_36272_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1988_fu_56015_p2() {
    add_ln703_1988_fu_56015_p2 = (!zext_ln703_407_fu_56011_p1.read().is_01() || !zext_ln1118_886_reg_68124.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_407_fu_56011_p1.read()) + sc_biguint<11>(zext_ln1118_886_reg_68124.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1989_fu_56024_p2() {
    add_ln703_1989_fu_56024_p2 = (!zext_ln1118_905_fu_36068_p1.read().is_01() || !zext_ln203_312_fu_36684_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_905_fu_36068_p1.read()) + sc_biguint<10>(zext_ln203_312_fu_36684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_198_fu_44969_p2() {
    add_ln703_198_fu_44969_p2 = (!add_ln703_197_fu_44963_p2.read().is_01() || !zext_ln203_42_fu_27970_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_197_fu_44963_p2.read()) + sc_biguint<15>(zext_ln203_42_fu_27970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1990_fu_56034_p2() {
    add_ln703_1990_fu_56034_p2 = (!zext_ln708_460_fu_35632_p1.read().is_01() || !sext_ln708_149_fu_36668_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_460_fu_35632_p1.read()) + sc_bigint<11>(sext_ln708_149_fu_36668_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1991_fu_56044_p2() {
    add_ln703_1991_fu_56044_p2 = (!sext_ln703_1217_fu_56040_p1.read().is_01() || !zext_ln703_409_fu_56030_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1217_fu_56040_p1.read()) + sc_biguint<12>(zext_ln703_409_fu_56030_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1992_fu_56054_p2() {
    add_ln703_1992_fu_56054_p2 = (!sext_ln703_1218_fu_56050_p1.read().is_01() || !zext_ln703_408_fu_56020_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1218_fu_56050_p1.read()) + sc_biguint<13>(zext_ln703_408_fu_56020_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1993_fu_56064_p2() {
    add_ln703_1993_fu_56064_p2 = (!sext_ln703_1219_fu_56060_p1.read().is_01() || !add_ln703_1986_fu_55999_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1219_fu_56060_p1.read()) + sc_biguint<15>(add_ln703_1986_fu_55999_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1994_fu_56070_p2() {
    add_ln703_1994_fu_56070_p2 = (!add_ln703_1993_fu_56064_p2.read().is_01() || !zext_ln203_314_fu_36806_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1993_fu_56064_p2.read()) + sc_biguint<15>(zext_ln203_314_fu_36806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1995_fu_56076_p2() {
    add_ln703_1995_fu_56076_p2 = (!zext_ln203_313_fu_36778_p1.read().is_01() || !sext_ln203_397_fu_35425_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_313_fu_36778_p1.read()) + sc_bigint<9>(sext_ln203_397_fu_35425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1996_fu_56086_p2() {
    add_ln703_1996_fu_56086_p2 = (!sext_ln703_1220_fu_56082_p1.read().is_01() || !zext_ln708_856_fu_36416_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1220_fu_56082_p1.read()) + sc_biguint<11>(zext_ln708_856_fu_36416_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1998_fu_21784_p2() {
    add_ln703_1998_fu_21784_p2 = (!sext_ln203_436_fu_10778_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_436_fu_10778_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1999_fu_21794_p2() {
    add_ln703_1999_fu_21794_p2 = (!sext_ln703_268_fu_21790_p1.read().is_01() || !sext_ln203_437_fu_10798_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_268_fu_21790_p1.read()) + sc_bigint<13>(sext_ln203_437_fu_10798_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_199_fu_44975_p2() {
    add_ln703_199_fu_44975_p2 = (!zext_ln203_41_fu_27942_p1.read().is_01() || !sext_ln203_1_fu_26589_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_41_fu_27942_p1.read()) + sc_bigint<9>(sext_ln203_1_fu_26589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_19_fu_43862_p2() {
    add_ln703_19_fu_43862_p2 = (!zext_ln703_9_fu_43858_p1.read().is_01() || !zext_ln708_664_fu_26401_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_9_fu_43858_p1.read()) + sc_biguint<11>(zext_ln708_664_fu_26401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1_fu_16298_p2() {
    add_ln703_1_fu_16298_p2 = (!zext_ln708_645_fu_1216_p1.read().is_01() || !zext_ln1116_5_fu_1246_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_645_fu_1216_p1.read()) + sc_biguint<10>(zext_ln1116_5_fu_1246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2000_fu_21800_p2() {
    add_ln703_2000_fu_21800_p2 = (!zext_ln1118_928_fu_10830_p1.read().is_01() || !sext_ln708_153_fu_10826_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_928_fu_10830_p1.read()) + sc_bigint<11>(sext_ln708_153_fu_10826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2001_fu_21810_p2() {
    add_ln703_2001_fu_21810_p2 = (!sext_ln703_1223_fu_21806_p1.read().is_01() || !add_ln703_1999_fu_21794_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1223_fu_21806_p1.read()) + sc_biguint<13>(add_ln703_1999_fu_21794_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2002_fu_56106_p2() {
    add_ln703_2002_fu_56106_p2 = (!add_ln703_2001_reg_69631.read().is_01() || !sext_ln708_155_fu_36829_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2001_reg_69631.read()) + sc_bigint<13>(sext_ln708_155_fu_36829_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2003_fu_56111_p2() {
    add_ln703_2003_fu_56111_p2 = (!zext_ln1118_929_reg_68265.read().is_01() || !sext_ln203_438_fu_36810_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_929_reg_68265.read()) + sc_bigint<12>(sext_ln203_438_fu_36810_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2004_fu_56120_p2() {
    add_ln703_2004_fu_56120_p2 = (!sext_ln703_1224_fu_56116_p1.read().is_01() || !add_ln703_2002_fu_56106_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1224_fu_56116_p1.read()) + sc_biguint<13>(add_ln703_2002_fu_56106_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2005_fu_21816_p2() {
    add_ln703_2005_fu_21816_p2 = (!zext_ln708_495_fu_10850_p1.read().is_01() || !sext_ln708_154_fu_10902_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_495_fu_10850_p1.read()) + sc_bigint<11>(sext_ln708_154_fu_10902_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2006_fu_21826_p2() {
    add_ln703_2006_fu_21826_p2 = (!sext_ln1118_302_fu_10910_p1.read().is_01() || !zext_ln203_315_fu_10906_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_302_fu_10910_p1.read()) + sc_biguint<11>(zext_ln203_315_fu_10906_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2007_fu_21836_p2() {
    add_ln703_2007_fu_21836_p2 = (!sext_ln703_1227_fu_21832_p1.read().is_01() || !sext_ln703_1226_fu_21822_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1227_fu_21832_p1.read()) + sc_bigint<12>(sext_ln703_1226_fu_21822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2008_fu_56133_p2() {
    add_ln703_2008_fu_56133_p2 = (!sext_ln703_1228_fu_56130_p1.read().is_01() || !sext_ln703_1225_fu_56126_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1228_fu_56130_p1.read()) + sc_bigint<14>(sext_ln703_1225_fu_56126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2009_fu_56139_p2() {
    add_ln703_2009_fu_56139_p2 = (!add_ln703_2008_fu_56133_p2.read().is_01() || !sext_ln203_441_fu_36893_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2008_fu_56133_p2.read()) + sc_bigint<14>(sext_ln203_441_fu_36893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_200_fu_44985_p2() {
    add_ln703_200_fu_44985_p2 = (!sext_ln703_177_fu_44981_p1.read().is_01() || !zext_ln708_696_fu_27580_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_177_fu_44981_p1.read()) + sc_biguint<11>(zext_ln708_696_fu_27580_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2010_fu_56145_p2() {
    add_ln703_2010_fu_56145_p2 = (!zext_ln708_860_fu_36644_p1.read().is_01() || !zext_ln708_837_fu_35067_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_860_fu_36644_p1.read()) + sc_biguint<11>(zext_ln708_837_fu_35067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2011_fu_56155_p2() {
    add_ln703_2011_fu_56155_p2 = (!zext_ln703_410_fu_56151_p1.read().is_01() || !add_ln703_2009_fu_56139_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_410_fu_56151_p1.read()) + sc_biguint<14>(add_ln703_2009_fu_56139_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2012_fu_56165_p2() {
    add_ln703_2012_fu_56165_p2 = (!zext_ln203_316_fu_36897_p1.read().is_01() || !sext_ln203_439_fu_36851_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_316_fu_36897_p1.read()) + sc_bigint<12>(sext_ln203_439_fu_36851_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2013_fu_56171_p2() {
    add_ln703_2013_fu_56171_p2 = (!zext_ln708_499_fu_36901_p1.read().is_01() || !zext_ln1118_931_reg_68281.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_499_fu_36901_p1.read()) + sc_biguint<10>(zext_ln1118_931_reg_68281.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2014_fu_56180_p2() {
    add_ln703_2014_fu_56180_p2 = (!zext_ln703_411_fu_56176_p1.read().is_01() || !sext_ln1116_44_fu_35031_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_411_fu_56176_p1.read()) + sc_bigint<11>(sext_ln1116_44_fu_35031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2015_fu_56190_p2() {
    add_ln703_2015_fu_56190_p2 = (!sext_ln703_1230_fu_56186_p1.read().is_01() || !add_ln703_2012_fu_56165_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1230_fu_56186_p1.read()) + sc_biguint<12>(add_ln703_2012_fu_56165_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2016_fu_56200_p2() {
    add_ln703_2016_fu_56200_p2 = (!sext_ln703_1231_fu_56196_p1.read().is_01() || !sext_ln703_1229_fu_56161_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1231_fu_56196_p1.read()) + sc_bigint<15>(sext_ln703_1229_fu_56161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2018_fu_56206_p2() {
    add_ln703_2018_fu_56206_p2 = (!zext_ln708_442_fu_35078_p1.read().is_01() || !zext_ln1118_850_fu_35117_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_442_fu_35078_p1.read()) + sc_biguint<9>(zext_ln1118_850_fu_35117_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2019_fu_56216_p2() {
    add_ln703_2019_fu_56216_p2 = (!zext_ln703_413_fu_56212_p1.read().is_01() || !zext_ln703_400_fu_55912_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_413_fu_56212_p1.read()) + sc_biguint<10>(zext_ln703_400_fu_55912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2020_fu_56226_p2() {
    add_ln703_2020_fu_56226_p2 = (!zext_ln708_865_fu_36865_p1.read().is_01() || !zext_ln708_855_fu_36326_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_865_fu_36865_p1.read()) + sc_biguint<8>(zext_ln708_855_fu_36326_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2021_fu_56236_p2() {
    add_ln703_2021_fu_56236_p2 = (!zext_ln708_847_fu_35692_p1.read().is_01() || !zext_ln708_866_fu_36915_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_847_fu_35692_p1.read()) + sc_biguint<8>(zext_ln708_866_fu_36915_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2022_fu_56246_p2() {
    add_ln703_2022_fu_56246_p2 = (!zext_ln703_416_fu_56242_p1.read().is_01() || !zext_ln1118_501_fu_35289_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_416_fu_56242_p1.read()) + sc_biguint<9>(zext_ln1118_501_fu_35289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2023_fu_56256_p2() {
    add_ln703_2023_fu_56256_p2 = (!zext_ln703_417_fu_56252_p1.read().is_01() || !zext_ln703_415_fu_56232_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_417_fu_56252_p1.read()) + sc_biguint<10>(zext_ln703_415_fu_56232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2024_fu_56266_p2() {
    add_ln703_2024_fu_56266_p2 = (!zext_ln703_418_fu_56262_p1.read().is_01() || !zext_ln703_414_fu_56222_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_418_fu_56262_p1.read()) + sc_biguint<11>(zext_ln703_414_fu_56222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2026_fu_21842_p2() {
    add_ln703_2026_fu_21842_p2 = (!sext_ln203_404_fu_9496_p1.read().is_01() || !ap_const_lv12_D80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_404_fu_9496_p1.read()) + sc_bigint<12>(ap_const_lv12_D80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2027_fu_21852_p2() {
    add_ln703_2027_fu_21852_p2 = (!sext_ln203_400_fu_9304_p1.read().is_01() || !sext_ln1118_265_fu_9548_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_400_fu_9304_p1.read()) + sc_bigint<12>(sext_ln1118_265_fu_9548_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2028_fu_21862_p2() {
    add_ln703_2028_fu_21862_p2 = (!sext_ln703_1232_fu_21858_p1.read().is_01() || !sext_ln703_272_fu_21848_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1232_fu_21858_p1.read()) + sc_bigint<13>(sext_ln703_272_fu_21848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2029_fu_21868_p2() {
    add_ln703_2029_fu_21868_p2 = (!add_ln703_2028_fu_21862_p2.read().is_01() || !sext_ln203_401_fu_9378_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2028_fu_21862_p2.read()) + sc_bigint<13>(sext_ln203_401_fu_9378_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_202_fu_16878_p2() {
    add_ln703_202_fu_16878_p2 = (!sext_ln203_40_fu_3198_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_40_fu_3198_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2030_fu_21878_p2() {
    add_ln703_2030_fu_21878_p2 = (!sext_ln708_156_fu_10944_p1.read().is_01() || !zext_ln708_502_fu_10988_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_156_fu_10944_p1.read()) + sc_biguint<12>(zext_ln708_502_fu_10988_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2031_fu_21888_p2() {
    add_ln703_2031_fu_21888_p2 = (!sext_ln703_1234_fu_21884_p1.read().is_01() || !sext_ln703_1233_fu_21874_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1234_fu_21884_p1.read()) + sc_bigint<14>(sext_ln703_1233_fu_21874_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2032_fu_21894_p2() {
    add_ln703_2032_fu_21894_p2 = (!zext_ln708_868_fu_11012_p1.read().is_01() || !zext_ln708_869_fu_11048_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_868_fu_11012_p1.read()) + sc_biguint<11>(zext_ln708_869_fu_11048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2033_fu_21904_p2() {
    add_ln703_2033_fu_21904_p2 = (!zext_ln708_867_fu_10964_p1.read().is_01() || !zext_ln1118_931_fu_10924_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_867_fu_10964_p1.read()) + sc_biguint<10>(zext_ln1118_931_fu_10924_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2034_fu_21914_p2() {
    add_ln703_2034_fu_21914_p2 = (!zext_ln703_421_fu_21910_p1.read().is_01() || !sext_ln1116_48_fu_11062_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_421_fu_21910_p1.read()) + sc_bigint<12>(sext_ln1116_48_fu_11062_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2035_fu_21924_p2() {
    add_ln703_2035_fu_21924_p2 = (!sext_ln703_1235_fu_21920_p1.read().is_01() || !zext_ln703_420_fu_21900_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1235_fu_21920_p1.read()) + sc_biguint<13>(zext_ln703_420_fu_21900_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2036_fu_21934_p2() {
    add_ln703_2036_fu_21934_p2 = (!sext_ln703_1236_fu_21930_p1.read().is_01() || !add_ln703_2031_fu_21888_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1236_fu_21930_p1.read()) + sc_biguint<14>(add_ln703_2031_fu_21888_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2037_fu_56289_p2() {
    add_ln703_2037_fu_56289_p2 = (!sext_ln203_405_fu_35754_p1.read().is_01() || !sext_ln203_412_fu_36146_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_405_fu_35754_p1.read()) + sc_bigint<12>(sext_ln203_412_fu_36146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2038_fu_56299_p2() {
    add_ln703_2038_fu_56299_p2 = (!sext_ln703_1237_fu_56295_p1.read().is_01() || !sext_ln703_274_fu_56286_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1237_fu_56295_p1.read()) + sc_bigint<15>(sext_ln703_274_fu_56286_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2039_fu_56305_p2() {
    add_ln703_2039_fu_56305_p2 = (!zext_ln708_870_fu_36940_p1.read().is_01() || !zext_ln708_851_fu_36110_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_870_fu_36940_p1.read()) + sc_biguint<11>(zext_ln708_851_fu_36110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_203_fu_16888_p2() {
    add_ln703_203_fu_16888_p2 = (!sext_ln703_32_fu_16884_p1.read().is_01() || !sext_ln203_41_fu_3218_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_32_fu_16884_p1.read()) + sc_bigint<13>(sext_ln203_41_fu_3218_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2040_fu_56315_p2() {
    add_ln703_2040_fu_56315_p2 = (!sext_ln203_443_fu_36971_p1.read().is_01() || !zext_ln203_311_fu_36680_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_443_fu_36971_p1.read()) + sc_biguint<11>(zext_ln203_311_fu_36680_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2041_fu_56325_p2() {
    add_ln703_2041_fu_56325_p2 = (!sext_ln703_1238_fu_56321_p1.read().is_01() || !zext_ln703_422_fu_56311_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1238_fu_56321_p1.read()) + sc_biguint<13>(zext_ln703_422_fu_56311_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2042_fu_56335_p2() {
    add_ln703_2042_fu_56335_p2 = (!sext_ln703_1239_fu_56331_p1.read().is_01() || !add_ln703_2038_fu_56299_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1239_fu_56331_p1.read()) + sc_biguint<15>(add_ln703_2038_fu_56299_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2043_fu_56341_p2() {
    add_ln703_2043_fu_56341_p2 = (!sext_ln203_413_fu_36166_p1.read().is_01() || !zext_ln203_295_fu_35567_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_413_fu_36166_p1.read()) + sc_biguint<9>(zext_ln203_295_fu_35567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2044_fu_56351_p2() {
    add_ln703_2044_fu_56351_p2 = (!sext_ln703_1240_fu_56347_p1.read().is_01() || !sext_ln708_136_fu_35616_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1240_fu_56347_p1.read()) + sc_bigint<10>(sext_ln708_136_fu_35616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2045_fu_56361_p2() {
    add_ln703_2045_fu_56361_p2 = (!zext_ln1116_207_fu_36944_p1.read().is_01() || !zext_ln1118_870_fu_35570_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_207_fu_36944_p1.read()) + sc_biguint<9>(zext_ln1118_870_fu_35570_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2046_fu_56371_p2() {
    add_ln703_2046_fu_56371_p2 = (!zext_ln708_442_fu_35078_p1.read().is_01() || !zext_ln708_445_fu_35337_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_442_fu_35078_p1.read()) + sc_biguint<9>(zext_ln708_445_fu_35337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2047_fu_56381_p2() {
    add_ln703_2047_fu_56381_p2 = (!zext_ln703_424_fu_56377_p1.read().is_01() || !zext_ln703_423_fu_56367_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_424_fu_56377_p1.read()) + sc_biguint<10>(zext_ln703_423_fu_56367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2048_fu_56391_p2() {
    add_ln703_2048_fu_56391_p2 = (!zext_ln703_425_fu_56387_p1.read().is_01() || !sext_ln703_1241_fu_56357_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_425_fu_56387_p1.read()) + sc_bigint<12>(sext_ln703_1241_fu_56357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2049_fu_56401_p2() {
    add_ln703_2049_fu_56401_p2 = (!sext_ln703_1242_fu_56397_p1.read().is_01() || !add_ln703_2042_fu_56335_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1242_fu_56397_p1.read()) + sc_biguint<15>(add_ln703_2042_fu_56335_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_204_fu_16894_p2() {
    add_ln703_204_fu_16894_p2 = (!zext_ln1118_220_fu_3250_p1.read().is_01() || !sext_ln708_19_fu_3246_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_220_fu_3250_p1.read()) + sc_bigint<11>(sext_ln708_19_fu_3246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2050_fu_56407_p2() {
    add_ln703_2050_fu_56407_p2 = (!sext_ln203_445_fu_36991_p1.read().is_01() || !zext_ln203_317_fu_36995_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_445_fu_36991_p1.read()) + sc_biguint<10>(zext_ln203_317_fu_36995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2052_fu_21952_p2() {
    add_ln703_2052_fu_21952_p2 = (!zext_ln703_2_fu_21948_p1.read().is_01() || !sext_ln203_446_fu_11094_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_2_fu_21948_p1.read()) + sc_bigint<12>(sext_ln203_446_fu_11094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2053_fu_21958_p2() {
    add_ln703_2053_fu_21958_p2 = (!add_ln703_2052_fu_21952_p2.read().is_01() || !sext_ln203_447_fu_11098_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2052_fu_21952_p2.read()) + sc_bigint<12>(sext_ln203_447_fu_11098_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2054_fu_21968_p2() {
    add_ln703_2054_fu_21968_p2 = (!zext_ln1118_833_fu_8850_p1.read().is_01() || !zext_ln1116_170_fu_8826_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_833_fu_8850_p1.read()) + sc_biguint<10>(zext_ln1116_170_fu_8826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2055_fu_21978_p2() {
    add_ln703_2055_fu_21978_p2 = (!zext_ln703_426_fu_21974_p1.read().is_01() || !sext_ln703_1245_fu_21964_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_426_fu_21974_p1.read()) + sc_bigint<13>(sext_ln703_1245_fu_21964_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2056_fu_21984_p2() {
    add_ln703_2056_fu_21984_p2 = (!sext_ln203_448_fu_11102_p1.read().is_01() || !sext_ln1116_40_fu_8938_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_448_fu_11102_p1.read()) + sc_bigint<12>(sext_ln1116_40_fu_8938_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2057_fu_21994_p2() {
    add_ln703_2057_fu_21994_p2 = (!sext_ln703_1246_fu_21990_p1.read().is_01() || !add_ln703_2055_fu_21978_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1246_fu_21990_p1.read()) + sc_biguint<13>(add_ln703_2055_fu_21978_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2058_fu_56430_p2() {
    add_ln703_2058_fu_56430_p2 = (!sext_ln1118_287_reg_68189.read().is_01() || !zext_ln708_425_reg_67991.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_287_reg_68189.read()) + sc_biguint<10>(zext_ln708_425_reg_67991.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2059_fu_56438_p2() {
    add_ln703_2059_fu_56438_p2 = (!sext_ln703_1248_fu_56434_p1.read().is_01() || !zext_ln1118_880_reg_68107.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1248_fu_56434_p1.read()) + sc_biguint<11>(zext_ln1118_880_reg_68107.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_205_fu_16904_p2() {
    add_ln703_205_fu_16904_p2 = (!sext_ln703_185_fu_16900_p1.read().is_01() || !add_ln703_203_fu_16888_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_185_fu_16900_p1.read()) + sc_biguint<13>(add_ln703_203_fu_16888_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2060_fu_56447_p2() {
    add_ln703_2060_fu_56447_p2 = (!sext_ln703_1249_fu_56443_p1.read().is_01() || !sext_ln703_1247_fu_56427_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1249_fu_56443_p1.read()) + sc_bigint<14>(sext_ln703_1247_fu_56427_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2061_fu_56453_p2() {
    add_ln703_2061_fu_56453_p2 = (!sext_ln1118_304_fu_37021_p1.read().is_01() || !sext_ln203_405_fu_35754_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_304_fu_37021_p1.read()) + sc_bigint<12>(sext_ln203_405_fu_35754_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2062_fu_56463_p2() {
    add_ln703_2062_fu_56463_p2 = (!sext_ln703_1250_fu_56459_p1.read().is_01() || !add_ln703_2060_fu_56447_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1250_fu_56459_p1.read()) + sc_biguint<14>(add_ln703_2060_fu_56447_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2063_fu_56473_p2() {
    add_ln703_2063_fu_56473_p2 = (!zext_ln708_858_fu_36506_p1.read().is_01() || !zext_ln708_873_fu_37068_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_858_fu_36506_p1.read()) + sc_biguint<11>(zext_ln708_873_fu_37068_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2064_fu_56483_p2() {
    add_ln703_2064_fu_56483_p2 = (!zext_ln703_427_fu_56479_p1.read().is_01() || !sext_ln1118_305_fu_37045_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_427_fu_56479_p1.read()) + sc_bigint<13>(sext_ln1118_305_fu_37045_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2065_fu_56493_p2() {
    add_ln703_2065_fu_56493_p2 = (!sext_ln703_1252_fu_56489_p1.read().is_01() || !sext_ln703_1251_fu_56469_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1252_fu_56489_p1.read()) + sc_bigint<15>(sext_ln703_1251_fu_56469_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2066_fu_56499_p2() {
    add_ln703_2066_fu_56499_p2 = (!sext_ln203_450_fu_37049_p1.read().is_01() || !sext_ln1118_306_fu_37072_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_450_fu_37049_p1.read()) + sc_bigint<11>(sext_ln1118_306_fu_37072_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2067_fu_56509_p2() {
    add_ln703_2067_fu_56509_p2 = (!sext_ln703_1253_fu_56505_p1.read().is_01() || !sext_ln203_449_fu_36999_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1253_fu_56505_p1.read()) + sc_bigint<12>(sext_ln203_449_fu_36999_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2068_fu_56519_p2() {
    add_ln703_2068_fu_56519_p2 = (!zext_ln1116_181_reg_68014.read().is_01() || !zext_ln203_295_fu_35567_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_181_reg_68014.read()) + sc_biguint<9>(zext_ln203_295_fu_35567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2069_fu_56528_p2() {
    add_ln703_2069_fu_56528_p2 = (!zext_ln703_428_fu_56524_p1.read().is_01() || !zext_ln708_872_reg_68313.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_428_fu_56524_p1.read()) + sc_biguint<10>(zext_ln708_872_reg_68313.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_206_fu_45005_p2() {
    add_ln703_206_fu_45005_p2 = (!add_ln703_205_reg_69006.read().is_01() || !sext_ln708_21_fu_27993_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_205_reg_69006.read()) + sc_bigint<13>(sext_ln708_21_fu_27993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2070_fu_56537_p2() {
    add_ln703_2070_fu_56537_p2 = (!zext_ln703_429_fu_56533_p1.read().is_01() || !sext_ln703_1254_fu_56515_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_429_fu_56533_p1.read()) + sc_bigint<13>(sext_ln703_1254_fu_56515_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2071_fu_56547_p2() {
    add_ln703_2071_fu_56547_p2 = (!sext_ln703_1255_fu_56543_p1.read().is_01() || !add_ln703_2065_fu_56493_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1255_fu_56543_p1.read()) + sc_biguint<15>(add_ln703_2065_fu_56493_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2072_fu_56553_p2() {
    add_ln703_2072_fu_56553_p2 = (!add_ln703_2071_fu_56547_p2.read().is_01() || !sext_ln203_451_fu_37105_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2071_fu_56547_p2.read()) + sc_bigint<15>(sext_ln203_451_fu_37105_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2073_fu_56559_p2() {
    add_ln703_2073_fu_56559_p2 = (!sext_ln203_455_fu_37232_p1.read().is_01() || !sext_ln203_408_fu_35918_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_455_fu_37232_p1.read()) + sc_bigint<12>(sext_ln203_408_fu_35918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2074_fu_56569_p2() {
    add_ln703_2074_fu_56569_p2 = (!sext_ln703_1256_fu_56565_p1.read().is_01() || !sext_ln203_453_fu_37168_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1256_fu_56565_p1.read()) + sc_bigint<13>(sext_ln203_453_fu_37168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2075_fu_56579_p2() {
    add_ln703_2075_fu_56579_p2 = (!sext_ln703_1257_fu_56575_p1.read().is_01() || !add_ln703_2072_fu_56553_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1257_fu_56575_p1.read()) + sc_biguint<15>(add_ln703_2072_fu_56553_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2076_fu_56589_p2() {
    add_ln703_2076_fu_56589_p2 = (!zext_ln708_851_fu_36110_p1.read().is_01() || !zext_ln708_874_fu_37208_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_851_fu_36110_p1.read()) + sc_biguint<11>(zext_ln708_874_fu_37208_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2077_fu_56599_p2() {
    add_ln703_2077_fu_56599_p2 = (!zext_ln703_430_fu_56595_p1.read().is_01() || !sext_ln203_456_fu_37256_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_430_fu_56595_p1.read()) + sc_bigint<13>(sext_ln203_456_fu_37256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2078_fu_56605_p2() {
    add_ln703_2078_fu_56605_p2 = (!sext_ln1116_45_fu_35321_p1.read().is_01() || !sext_ln203_454_fu_37188_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_45_fu_35321_p1.read()) + sc_bigint<10>(sext_ln203_454_fu_37188_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2079_fu_56615_p2() {
    add_ln703_2079_fu_56615_p2 = (!sext_ln703_1259_fu_56611_p1.read().is_01() || !sext_ln203_452_fu_37136_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1259_fu_56611_p1.read()) + sc_bigint<11>(sext_ln203_452_fu_37136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_207_fu_45010_p2() {
    add_ln703_207_fu_45010_p2 = (!zext_ln1118_221_reg_67347.read().is_01() || !sext_ln203_42_fu_27974_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_221_reg_67347.read()) + sc_bigint<12>(sext_ln203_42_fu_27974_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2080_fu_56625_p2() {
    add_ln703_2080_fu_56625_p2 = (!sext_ln703_1260_fu_56621_p1.read().is_01() || !add_ln703_2077_fu_56599_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1260_fu_56621_p1.read()) + sc_biguint<13>(add_ln703_2077_fu_56599_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2082_fu_56648_p2() {
    add_ln703_2082_fu_56648_p2 = (!zext_ln708_868_reg_68291.read().is_01() || !zext_ln708_843_fu_35494_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_868_reg_68291.read()) + sc_biguint<11>(zext_ln708_843_fu_35494_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2083_fu_56657_p2() {
    add_ln703_2083_fu_56657_p2 = (!zext_ln703_431_fu_56653_p1.read().is_01() || !or_ln703_14_fu_56641_p3.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_431_fu_56653_p1.read()) + sc_biguint<16>(or_ln703_14_fu_56641_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2084_fu_56663_p2() {
    add_ln703_2084_fu_56663_p2 = (!zext_ln708_844_fu_35557_p1.read().is_01() || !zext_ln708_846_fu_35592_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_844_fu_35557_p1.read()) + sc_biguint<11>(zext_ln708_846_fu_35592_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2085_fu_56673_p2() {
    add_ln703_2085_fu_56673_p2 = (!zext_ln708_875_fu_37285_p1.read().is_01() || !zext_ln708_876_fu_37312_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_875_fu_37285_p1.read()) + sc_biguint<11>(zext_ln708_876_fu_37312_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2086_fu_56683_p2() {
    add_ln703_2086_fu_56683_p2 = (!zext_ln703_433_fu_56679_p1.read().is_01() || !zext_ln703_432_fu_56669_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_433_fu_56679_p1.read()) + sc_biguint<12>(zext_ln703_432_fu_56669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2087_fu_56693_p2() {
    add_ln703_2087_fu_56693_p2 = (!zext_ln703_434_fu_56689_p1.read().is_01() || !add_ln703_2083_fu_56657_p2.read().is_01())? sc_lv<16>(): (sc_biguint<16>(zext_ln703_434_fu_56689_p1.read()) + sc_biguint<16>(add_ln703_2083_fu_56657_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2088_fu_22000_p2() {
    add_ln703_2088_fu_22000_p2 = (!sext_ln203_457_fu_11172_p1.read().is_01() || !sext_ln203_458_fu_11186_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_457_fu_11172_p1.read()) + sc_bigint<11>(sext_ln203_458_fu_11186_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2089_fu_56702_p2() {
    add_ln703_2089_fu_56702_p2 = (!sext_ln703_1262_fu_56699_p1.read().is_01() || !zext_ln203_320_fu_37336_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1262_fu_56699_p1.read()) + sc_biguint<12>(zext_ln203_320_fu_37336_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_208_fu_45019_p2() {
    add_ln703_208_fu_45019_p2 = (!sext_ln703_187_fu_45015_p1.read().is_01() || !add_ln703_206_fu_45005_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_187_fu_45015_p1.read()) + sc_biguint<13>(add_ln703_206_fu_45005_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2090_fu_56712_p2() {
    add_ln703_2090_fu_56712_p2 = (!sext_ln203_461_fu_37260_p1.read().is_01() || !sext_ln203_462_fu_37266_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_461_fu_37260_p1.read()) + sc_bigint<11>(sext_ln203_462_fu_37266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2091_fu_56722_p2() {
    add_ln703_2091_fu_56722_p2 = (!sext_ln1118_299_fu_36728_p1.read().is_01() || !zext_ln708_495_reg_68260.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_299_fu_36728_p1.read()) + sc_biguint<11>(zext_ln708_495_reg_68260.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2092_fu_56731_p2() {
    add_ln703_2092_fu_56731_p2 = (!sext_ln703_1265_fu_56727_p1.read().is_01() || !sext_ln703_1264_fu_56718_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1265_fu_56727_p1.read()) + sc_bigint<12>(sext_ln703_1264_fu_56718_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2093_fu_56741_p2() {
    add_ln703_2093_fu_56741_p2 = (!sext_ln703_1266_fu_56737_p1.read().is_01() || !sext_ln703_1263_fu_56708_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1266_fu_56737_p1.read()) + sc_bigint<13>(sext_ln703_1263_fu_56708_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2094_fu_56751_p2() {
    add_ln703_2094_fu_56751_p2 = (!sext_ln703_1267_fu_56747_p1.read().is_01() || !add_ln703_2087_fu_56693_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1267_fu_56747_p1.read()) + sc_biguint<16>(add_ln703_2087_fu_56693_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2095_fu_56757_p2() {
    add_ln703_2095_fu_56757_p2 = (!sext_ln1116_43_fu_35027_p1.read().is_01() || !sext_ln1116_45_fu_35321_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_43_fu_35027_p1.read()) + sc_bigint<10>(sext_ln1116_45_fu_35321_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2096_fu_56767_p2() {
    add_ln703_2096_fu_56767_p2 = (!sext_ln703_1268_fu_56763_p1.read().is_01() || !sext_ln203_423_fu_36443_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1268_fu_56763_p1.read()) + sc_bigint<11>(sext_ln203_423_fu_36443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2097_fu_22006_p2() {
    add_ln703_2097_fu_22006_p2 = (!zext_ln203_315_fu_10906_p1.read().is_01() || !sext_ln708_153_fu_10826_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_315_fu_10906_p1.read()) + sc_bigint<11>(sext_ln708_153_fu_10826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2098_fu_22012_p2() {
    add_ln703_2098_fu_22012_p2 = (!sext_ln203_460_fu_11190_p1.read().is_01() || !zext_ln203_305_fu_10452_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_460_fu_11190_p1.read()) + sc_biguint<9>(zext_ln203_305_fu_10452_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2099_fu_22022_p2() {
    add_ln703_2099_fu_22022_p2 = (!sext_ln703_1270_fu_22018_p1.read().is_01() || !add_ln703_2097_fu_22006_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1270_fu_22018_p1.read()) + sc_biguint<11>(add_ln703_2097_fu_22006_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_209_fu_16910_p2() {
    add_ln703_209_fu_16910_p2 = (!zext_ln708_76_fu_3270_p1.read().is_01() || !sext_ln708_20_fu_3322_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_76_fu_3270_p1.read()) + sc_bigint<11>(sext_ln708_20_fu_3322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_20_fu_43872_p2() {
    add_ln703_20_fu_43872_p2 = (!zext_ln703_10_fu_43868_p1.read().is_01() || !add_ln703_17_fu_43846_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_10_fu_43868_p1.read()) + sc_biguint<15>(add_ln703_17_fu_43846_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2100_fu_56780_p2() {
    add_ln703_2100_fu_56780_p2 = (!sext_ln703_1271_fu_56777_p1.read().is_01() || !sext_ln703_1269_fu_56773_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1271_fu_56777_p1.read()) + sc_bigint<12>(sext_ln703_1269_fu_56773_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2101_fu_56790_p2() {
    add_ln703_2101_fu_56790_p2 = (!zext_ln203_319_fu_37263_p1.read().is_01() || !zext_ln708_475_fu_36250_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_319_fu_37263_p1.read()) + sc_biguint<9>(zext_ln708_475_fu_36250_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2102_fu_56800_p2() {
    add_ln703_2102_fu_56800_p2 = (!zext_ln708_440_fu_34987_p1.read().is_01() || !zext_ln1116_190_fu_35110_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_440_fu_34987_p1.read()) + sc_biguint<9>(zext_ln1116_190_fu_35110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2103_fu_56810_p2() {
    add_ln703_2103_fu_56810_p2 = (!zext_ln703_436_fu_56806_p1.read().is_01() || !zext_ln703_435_fu_56796_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_436_fu_56806_p1.read()) + sc_biguint<10>(zext_ln703_435_fu_56796_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2104_fu_56820_p2() {
    add_ln703_2104_fu_56820_p2 = (!zext_ln1118_850_fu_35117_p1.read().is_01() || !zext_ln1118_859_fu_35253_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_850_fu_35117_p1.read()) + sc_biguint<9>(zext_ln1118_859_fu_35253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2105_fu_56830_p2() {
    add_ln703_2105_fu_56830_p2 = (!zext_ln203_313_fu_36778_p1.read().is_01() || !zext_ln1116_195_fu_35381_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_313_fu_36778_p1.read()) + sc_biguint<9>(zext_ln1116_195_fu_35381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2106_fu_56840_p2() {
    add_ln703_2106_fu_56840_p2 = (!zext_ln703_439_fu_56836_p1.read().is_01() || !zext_ln703_438_fu_56826_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_439_fu_56836_p1.read()) + sc_biguint<10>(zext_ln703_438_fu_56826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2107_fu_56850_p2() {
    add_ln703_2107_fu_56850_p2 = (!zext_ln703_440_fu_56846_p1.read().is_01() || !zext_ln703_437_fu_56816_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_440_fu_56846_p1.read()) + sc_biguint<11>(zext_ln703_437_fu_56816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2108_fu_56860_p2() {
    add_ln703_2108_fu_56860_p2 = (!zext_ln703_441_fu_56856_p1.read().is_01() || !sext_ln703_1272_fu_56786_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_441_fu_56856_p1.read()) + sc_bigint<13>(sext_ln703_1272_fu_56786_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_210_fu_16920_p2() {
    add_ln703_210_fu_16920_p2 = (!sext_ln1118_46_fu_3330_p1.read().is_01() || !zext_ln203_43_fu_3326_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_46_fu_3330_p1.read()) + sc_biguint<11>(zext_ln203_43_fu_3326_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2110_fu_22028_p2() {
    add_ln703_2110_fu_22028_p2 = (!zext_ln708_469_fu_10178_p1.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_469_fu_10178_p1.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2111_fu_22038_p2() {
    add_ln703_2111_fu_22038_p2 = (!zext_ln708_877_fu_11254_p1.read().is_01() || !sext_ln703_280_fu_22034_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_877_fu_11254_p1.read()) + sc_bigint<11>(sext_ln703_280_fu_22034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2112_fu_22044_p2() {
    add_ln703_2112_fu_22044_p2 = (!add_ln703_2111_fu_22038_p2.read().is_01() || !sext_ln708_157_fu_11258_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2111_fu_22038_p2.read()) + sc_bigint<11>(sext_ln708_157_fu_11258_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2113_fu_22054_p2() {
    add_ln703_2113_fu_22054_p2 = (!sext_ln703_1274_fu_22050_p1.read().is_01() || !zext_ln203_321_fu_11282_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1274_fu_22050_p1.read()) + sc_biguint<12>(zext_ln203_321_fu_11282_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2114_fu_22064_p2() {
    add_ln703_2114_fu_22064_p2 = (!sext_ln708_156_fu_10944_p1.read().is_01() || !zext_ln1116_198_fu_10230_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_156_fu_10944_p1.read()) + sc_biguint<12>(zext_ln1116_198_fu_10230_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2115_fu_22074_p2() {
    add_ln703_2115_fu_22074_p2 = (!sext_ln703_1276_fu_22070_p1.read().is_01() || !sext_ln703_1275_fu_22060_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1276_fu_22070_p1.read()) + sc_bigint<13>(sext_ln703_1275_fu_22060_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2116_fu_22084_p2() {
    add_ln703_2116_fu_22084_p2 = (!sext_ln703_283_fu_22080_p1.read().is_01() || !sext_ln203_465_fu_11302_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_283_fu_22080_p1.read()) + sc_bigint<14>(sext_ln203_465_fu_11302_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2117_fu_22090_p2() {
    add_ln703_2117_fu_22090_p2 = (!zext_ln708_834_fu_9022_p1.read().is_01() || !zext_ln708_878_fu_11322_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_834_fu_9022_p1.read()) + sc_biguint<11>(zext_ln708_878_fu_11322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2118_fu_56879_p2() {
    add_ln703_2118_fu_56879_p2 = (!zext_ln703_442_fu_56876_p1.read().is_01() || !add_ln703_2116_reg_69661.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_442_fu_56876_p1.read()) + sc_biguint<14>(add_ln703_2116_reg_69661.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2119_fu_56884_p2() {
    add_ln703_2119_fu_56884_p2 = (!sext_ln1118_282_reg_68173.read().is_01() || !zext_ln708_425_reg_67991.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_282_reg_68173.read()) + sc_biguint<10>(zext_ln708_425_reg_67991.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_211_fu_16930_p2() {
    add_ln703_211_fu_16930_p2 = (!sext_ln703_192_fu_16926_p1.read().is_01() || !sext_ln703_189_fu_16916_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_192_fu_16926_p1.read()) + sc_bigint<12>(sext_ln703_189_fu_16916_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2120_fu_56892_p2() {
    add_ln703_2120_fu_56892_p2 = (!zext_ln203_319_fu_37263_p1.read().is_01() || !zext_ln203_286_fu_34972_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_319_fu_37263_p1.read()) + sc_biguint<9>(zext_ln203_286_fu_34972_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2121_fu_56902_p2() {
    add_ln703_2121_fu_56902_p2 = (!zext_ln703_443_fu_56898_p1.read().is_01() || !sext_ln703_1277_fu_56888_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_443_fu_56898_p1.read()) + sc_bigint<11>(sext_ln703_1277_fu_56888_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2122_fu_56912_p2() {
    add_ln703_2122_fu_56912_p2 = (!sext_ln703_1278_fu_56908_p1.read().is_01() || !add_ln703_2118_fu_56879_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1278_fu_56908_p1.read()) + sc_biguint<14>(add_ln703_2118_fu_56879_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2123_fu_56922_p2() {
    add_ln703_2123_fu_56922_p2 = (!sext_ln708_159_fu_37384_p1.read().is_01() || !sext_ln203_440_fu_36889_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_159_fu_37384_p1.read()) + sc_bigint<12>(sext_ln203_440_fu_36889_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2124_fu_56932_p2() {
    add_ln703_2124_fu_56932_p2 = (!sext_ln703_1279_fu_56928_p1.read().is_01() || !sext_ln703_284_fu_56918_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1279_fu_56928_p1.read()) + sc_bigint<15>(sext_ln703_284_fu_56918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2125_fu_56938_p2() {
    add_ln703_2125_fu_56938_p2 = (!zext_ln708_837_fu_35067_p1.read().is_01() || !zext_ln203_322_fu_37356_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_837_fu_35067_p1.read()) + sc_biguint<11>(zext_ln203_322_fu_37356_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2126_fu_56948_p2() {
    add_ln703_2126_fu_56948_p2 = (!sext_ln708_151_fu_36760_p1.read().is_01() || !zext_ln708_520_fu_37408_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_151_fu_36760_p1.read()) + sc_biguint<11>(zext_ln708_520_fu_37408_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2127_fu_56958_p2() {
    add_ln703_2127_fu_56958_p2 = (!sext_ln703_1280_fu_56954_p1.read().is_01() || !zext_ln703_444_fu_56944_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1280_fu_56954_p1.read()) + sc_biguint<13>(zext_ln703_444_fu_56944_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2128_fu_56968_p2() {
    add_ln703_2128_fu_56968_p2 = (!sext_ln703_1281_fu_56964_p1.read().is_01() || !add_ln703_2124_fu_56932_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1281_fu_56964_p1.read()) + sc_biguint<15>(add_ln703_2124_fu_56932_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2129_fu_56974_p2() {
    add_ln703_2129_fu_56974_p2 = (!sext_ln708_160_fu_37418_p1.read().is_01() || !zext_ln708_460_fu_35632_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_160_fu_37418_p1.read()) + sc_biguint<11>(zext_ln708_460_fu_35632_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_212_fu_45032_p2() {
    add_ln703_212_fu_45032_p2 = (!sext_ln703_193_fu_45029_p1.read().is_01() || !sext_ln703_188_fu_45025_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_193_fu_45029_p1.read()) + sc_bigint<14>(sext_ln703_188_fu_45025_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2130_fu_56980_p2() {
    add_ln703_2130_fu_56980_p2 = (!add_ln703_2129_fu_56974_p2.read().is_01() || !sext_ln1118_309_fu_37360_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2129_fu_56974_p2.read()) + sc_bigint<11>(sext_ln1118_309_fu_37360_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2131_fu_56990_p2() {
    add_ln703_2131_fu_56990_p2 = (!zext_ln708_857_fu_36482_p1.read().is_01() || !zext_ln708_865_fu_36865_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_857_fu_36482_p1.read()) + sc_biguint<8>(zext_ln708_865_fu_36865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2132_fu_57000_p2() {
    add_ln703_2132_fu_57000_p2 = (!zext_ln708_445_fu_35337_p1.read().is_01() || !zext_ln203_323_fu_37415_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_445_fu_35337_p1.read()) + sc_biguint<9>(zext_ln203_323_fu_37415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2133_fu_57010_p2() {
    add_ln703_2133_fu_57010_p2 = (!zext_ln703_446_fu_57006_p1.read().is_01() || !zext_ln703_445_fu_56996_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_446_fu_57006_p1.read()) + sc_biguint<10>(zext_ln703_445_fu_56996_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2134_fu_57020_p2() {
    add_ln703_2134_fu_57020_p2 = (!zext_ln703_447_fu_57016_p1.read().is_01() || !sext_ln703_1282_fu_56986_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_447_fu_57016_p1.read()) + sc_bigint<12>(sext_ln703_1282_fu_56986_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2136_fu_22096_p2() {
    add_ln703_2136_fu_22096_p2 = (!zext_ln708_881_fu_11352_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_881_fu_11352_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2137_fu_22106_p2() {
    add_ln703_2137_fu_22106_p2 = (!sext_ln203_400_fu_9304_p1.read().is_01() || !zext_ln203_282_fu_8822_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_400_fu_9304_p1.read()) + sc_biguint<12>(zext_ln203_282_fu_8822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2138_fu_22112_p2() {
    add_ln703_2138_fu_22112_p2 = (!add_ln703_2137_fu_22106_p2.read().is_01() || !sext_ln703_286_fu_22102_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2137_fu_22106_p2.read()) + sc_bigint<12>(sext_ln703_286_fu_22102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2139_fu_22122_p2() {
    add_ln703_2139_fu_22122_p2 = (!sext_ln1118_300_fu_10802_p1.read().is_01() || !sext_ln708_152_fu_10822_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_300_fu_10802_p1.read()) + sc_bigint<12>(sext_ln708_152_fu_10822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_213_fu_45038_p2() {
    add_ln703_213_fu_45038_p2 = (!add_ln703_212_fu_45032_p2.read().is_01() || !sext_ln203_45_fu_28057_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_212_fu_45032_p2.read()) + sc_bigint<14>(sext_ln203_45_fu_28057_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2140_fu_22132_p2() {
    add_ln703_2140_fu_22132_p2 = (!sext_ln703_1284_fu_22128_p1.read().is_01() || !sext_ln703_287_fu_22118_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1284_fu_22128_p1.read()) + sc_bigint<13>(sext_ln703_287_fu_22118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2141_fu_22138_p2() {
    add_ln703_2141_fu_22138_p2 = (!add_ln703_2140_fu_22132_p2.read().is_01() || !sext_ln203_435_fu_10658_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2140_fu_22132_p2.read()) + sc_bigint<13>(sext_ln203_435_fu_10658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2142_fu_22148_p2() {
    add_ln703_2142_fu_22148_p2 = (!zext_ln708_882_fu_11372_p1.read().is_01() || !zext_ln708_842_fu_9434_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_882_fu_11372_p1.read()) + sc_biguint<10>(zext_ln708_842_fu_9434_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2143_fu_22158_p2() {
    add_ln703_2143_fu_22158_p2 = (!zext_ln703_448_fu_22154_p1.read().is_01() || !sext_ln703_1285_fu_22144_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_448_fu_22154_p1.read()) + sc_bigint<14>(sext_ln703_1285_fu_22144_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2144_fu_22164_p2() {
    add_ln703_2144_fu_22164_p2 = (!sext_ln203_420_fu_10504_p1.read().is_01() || !sext_ln708_162_fu_11396_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_420_fu_10504_p1.read()) + sc_bigint<10>(sext_ln708_162_fu_11396_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2145_fu_22174_p2() {
    add_ln703_2145_fu_22174_p2 = (!zext_ln708_430_fu_9034_p1.read().is_01() || !zext_ln203_324_fu_11414_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_430_fu_9034_p1.read()) + sc_biguint<9>(zext_ln203_324_fu_11414_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2146_fu_22184_p2() {
    add_ln703_2146_fu_22184_p2 = (!zext_ln703_449_fu_22180_p1.read().is_01() || !zext_ln708_425_fu_8950_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_449_fu_22180_p1.read()) + sc_biguint<10>(zext_ln708_425_fu_8950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2147_fu_22194_p2() {
    add_ln703_2147_fu_22194_p2 = (!zext_ln703_450_fu_22190_p1.read().is_01() || !sext_ln703_1286_fu_22170_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_450_fu_22190_p1.read()) + sc_bigint<12>(sext_ln703_1286_fu_22170_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2148_fu_57043_p2() {
    add_ln703_2148_fu_57043_p2 = (!sext_ln703_1287_fu_57040_p1.read().is_01() || !add_ln703_2143_reg_69671.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1287_fu_57040_p1.read()) + sc_biguint<14>(add_ln703_2143_reg_69671.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2149_fu_57048_p2() {
    add_ln703_2149_fu_57048_p2 = (!sext_ln708_163_fu_37422_p1.read().is_01() || !sext_ln203_426_fu_36455_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_163_fu_37422_p1.read()) + sc_bigint<12>(sext_ln203_426_fu_36455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_214_fu_45044_p2() {
    add_ln703_214_fu_45044_p2 = (!zext_ln708_700_fu_27808_p1.read().is_01() || !zext_ln708_661_fu_26231_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_700_fu_27808_p1.read()) + sc_biguint<11>(zext_ln708_661_fu_26231_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2150_fu_57058_p2() {
    add_ln703_2150_fu_57058_p2 = (!sext_ln703_1288_fu_57054_p1.read().is_01() || !add_ln703_2148_fu_57043_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1288_fu_57054_p1.read()) + sc_biguint<14>(add_ln703_2148_fu_57043_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2151_fu_57068_p2() {
    add_ln703_2151_fu_57068_p2 = (!sext_ln203_440_fu_36889_p1.read().is_01() || !zext_ln203_325_fu_37429_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_440_fu_36889_p1.read()) + sc_biguint<12>(zext_ln203_325_fu_37429_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2152_fu_57078_p2() {
    add_ln703_2152_fu_57078_p2 = (!zext_ln708_844_fu_35557_p1.read().is_01() || !zext_ln708_886_fu_37465_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_844_fu_35557_p1.read()) + sc_biguint<11>(zext_ln708_886_fu_37465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2153_fu_57088_p2() {
    add_ln703_2153_fu_57088_p2 = (!zext_ln703_451_fu_57084_p1.read().is_01() || !sext_ln703_1290_fu_57074_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_451_fu_57084_p1.read()) + sc_bigint<13>(sext_ln703_1290_fu_57074_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2154_fu_57098_p2() {
    add_ln703_2154_fu_57098_p2 = (!sext_ln703_1291_fu_57094_p1.read().is_01() || !sext_ln703_1289_fu_57064_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1291_fu_57094_p1.read()) + sc_bigint<15>(sext_ln703_1289_fu_57064_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2155_fu_57104_p2() {
    add_ln703_2155_fu_57104_p2 = (!zext_ln1118_890_reg_68141.read().is_01() || !zext_ln203_294_fu_35564_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_890_reg_68141.read()) + sc_biguint<10>(zext_ln203_294_fu_35564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2156_fu_57113_p2() {
    add_ln703_2156_fu_57113_p2 = (!zext_ln703_452_fu_57109_p1.read().is_01() || !sext_ln708_164_fu_37447_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_452_fu_57109_p1.read()) + sc_bigint<12>(sext_ln708_164_fu_37447_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2157_fu_57119_p2() {
    add_ln703_2157_fu_57119_p2 = (!zext_ln708_885_fu_37461_p1.read().is_01() || !zext_ln708_865_fu_36865_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_885_fu_37461_p1.read()) + sc_biguint<8>(zext_ln708_865_fu_36865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2159_fu_57133_p2() {
    add_ln703_2159_fu_57133_p2 = (!zext_ln703_454_fu_57129_p1.read().is_01() || !zext_ln703_453_fu_57125_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_454_fu_57129_p1.read()) + sc_biguint<10>(zext_ln703_453_fu_57125_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_215_fu_45054_p2() {
    add_ln703_215_fu_45054_p2 = (!zext_ln703_48_fu_45050_p1.read().is_01() || !add_ln703_213_fu_45038_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_48_fu_45050_p1.read()) + sc_biguint<14>(add_ln703_213_fu_45038_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2160_fu_57143_p2() {
    add_ln703_2160_fu_57143_p2 = (!zext_ln703_455_fu_57139_p1.read().is_01() || !add_ln703_2156_fu_57113_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_455_fu_57139_p1.read()) + sc_biguint<12>(add_ln703_2156_fu_57113_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2161_fu_57153_p2() {
    add_ln703_2161_fu_57153_p2 = (!sext_ln703_1292_fu_57149_p1.read().is_01() || !add_ln703_2154_fu_57098_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1292_fu_57149_p1.read()) + sc_biguint<15>(add_ln703_2154_fu_57098_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2162_fu_57159_p2() {
    add_ln703_2162_fu_57159_p2 = (!add_ln703_2161_fu_57153_p2.read().is_01() || !zext_ln203_318_fu_37212_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2161_fu_57153_p2.read()) + sc_biguint<15>(zext_ln203_318_fu_37212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2163_fu_57165_p2() {
    add_ln703_2163_fu_57165_p2 = (!zext_ln708_879_fu_37404_p1.read().is_01() || !zext_ln708_446_fu_35388_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_879_fu_37404_p1.read()) + sc_biguint<10>(zext_ln708_446_fu_35388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2164_fu_57175_p2() {
    add_ln703_2164_fu_57175_p2 = (!zext_ln703_456_fu_57171_p1.read().is_01() || !sext_ln203_468_fu_37504_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_456_fu_57171_p1.read()) + sc_bigint<12>(sext_ln203_468_fu_37504_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2166_fu_22200_p2() {
    add_ln703_2166_fu_22200_p2 = (!zext_ln203_326_fu_11470_p1.read().is_01() || !sext_ln203_469_fu_11466_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_326_fu_11470_p1.read()) + sc_bigint<12>(sext_ln203_469_fu_11466_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2167_fu_22206_p2() {
    add_ln703_2167_fu_22206_p2 = (!add_ln703_2166_fu_22200_p2.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2166_fu_22200_p2.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2168_fu_22216_p2() {
    add_ln703_2168_fu_22216_p2 = (!sext_ln703_291_fu_22212_p1.read().is_01() || !sext_ln203_435_fu_10658_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_291_fu_22212_p1.read()) + sc_bigint<13>(sext_ln203_435_fu_10658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_216_fu_45064_p2() {
    add_ln703_216_fu_45064_p2 = (!zext_ln203_47_fu_28061_p1.read().is_01() || !sext_ln203_43_fu_28015_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_47_fu_28061_p1.read()) + sc_bigint<12>(sext_ln203_43_fu_28015_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2170_fu_22226_p2() {
    add_ln703_2170_fu_22226_p2 = (!sext_ln703_1295_fu_22222_p1.read().is_01() || !zext_ln203_327_fu_11490_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1295_fu_22222_p1.read()) + sc_biguint<12>(zext_ln203_327_fu_11490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2171_fu_22236_p2() {
    add_ln703_2171_fu_22236_p2 = (!sext_ln703_1296_fu_22232_p1.read().is_01() || !add_ln703_2168_fu_22216_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1296_fu_22232_p1.read()) + sc_biguint<13>(add_ln703_2168_fu_22216_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2172_fu_22246_p2() {
    add_ln703_2172_fu_22246_p2 = (!sext_ln1118_296_fu_10686_p1.read().is_01() || !zext_ln1118_929_fu_10870_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_296_fu_10686_p1.read()) + sc_biguint<12>(zext_ln1118_929_fu_10870_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2173_fu_22256_p2() {
    add_ln703_2173_fu_22256_p2 = (!sext_ln703_1297_fu_22252_p1.read().is_01() || !sext_ln703_292_fu_22242_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1297_fu_22252_p1.read()) + sc_bigint<14>(sext_ln703_292_fu_22242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2174_fu_57195_p2() {
    add_ln703_2174_fu_57195_p2 = (!sext_ln203_461_fu_37260_p1.read().is_01() || !sext_ln203_409_reg_68163.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_461_fu_37260_p1.read()) + sc_bigint<11>(sext_ln203_409_reg_68163.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2175_fu_57204_p2() {
    add_ln703_2175_fu_57204_p2 = (!sext_ln703_1298_fu_57200_p1.read().is_01() || !zext_ln1118_943_fu_37511_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1298_fu_57200_p1.read()) + sc_biguint<12>(zext_ln1118_943_fu_37511_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2176_fu_57214_p2() {
    add_ln703_2176_fu_57214_p2 = (!sext_ln703_1299_fu_57210_p1.read().is_01() || !add_ln703_2173_reg_69681.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1299_fu_57210_p1.read()) + sc_biguint<14>(add_ln703_2173_reg_69681.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2177_fu_57219_p2() {
    add_ln703_2177_fu_57219_p2 = (!sext_ln203_471_fu_37514_p1.read().is_01() || !sext_ln1118_313_fu_37567_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_471_fu_37514_p1.read()) + sc_bigint<12>(sext_ln1118_313_fu_37567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2178_fu_57229_p2() {
    add_ln703_2178_fu_57229_p2 = (!sext_ln703_1300_fu_57225_p1.read().is_01() || !add_ln703_2176_fu_57214_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1300_fu_57225_p1.read()) + sc_biguint<14>(add_ln703_2176_fu_57214_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2179_fu_57239_p2() {
    add_ln703_2179_fu_57239_p2 = (!zext_ln1116_188_fu_35071_p1.read().is_01() || !sext_ln1116_42_fu_35023_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_188_fu_35071_p1.read()) + sc_bigint<12>(sext_ln1116_42_fu_35023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_217_fu_45070_p2() {
    add_ln703_217_fu_45070_p2 = (!zext_ln708_79_fu_28065_p1.read().is_01() || !zext_ln1118_223_reg_67363.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_79_fu_28065_p1.read()) + sc_biguint<10>(zext_ln1118_223_reg_67363.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2180_fu_57245_p2() {
    add_ln703_2180_fu_57245_p2 = (!sext_ln1118_311_fu_37537_p1.read().is_01() || !sext_ln203_470_reg_68368.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_311_fu_37537_p1.read()) + sc_bigint<10>(sext_ln203_470_reg_68368.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2181_fu_57254_p2() {
    add_ln703_2181_fu_57254_p2 = (!sext_ln703_1302_fu_57250_p1.read().is_01() || !add_ln703_2179_fu_57239_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1302_fu_57250_p1.read()) + sc_biguint<12>(add_ln703_2179_fu_57239_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2182_fu_57264_p2() {
    add_ln703_2182_fu_57264_p2 = (!sext_ln703_1303_fu_57260_p1.read().is_01() || !sext_ln703_1301_fu_57235_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1303_fu_57260_p1.read()) + sc_bigint<15>(sext_ln703_1301_fu_57235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2183_fu_57270_p2() {
    add_ln703_2183_fu_57270_p2 = (!zext_ln1118_491_reg_68031.read().is_01() || !zext_ln203_286_fu_34972_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_491_reg_68031.read()) + sc_biguint<9>(zext_ln203_286_fu_34972_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2184_fu_57279_p2() {
    add_ln703_2184_fu_57279_p2 = (!zext_ln703_457_fu_57275_p1.read().is_01() || !sext_ln203_472_fu_37587_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_457_fu_57275_p1.read()) + sc_bigint<11>(sext_ln203_472_fu_37587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2185_fu_57289_p2() {
    add_ln703_2185_fu_57289_p2 = (!zext_ln708_845_fu_35561_p1.read().is_01() || !zext_ln708_888_fu_37518_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_845_fu_35561_p1.read()) + sc_biguint<8>(zext_ln708_888_fu_37518_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2187_fu_57299_p2() {
    add_ln703_2187_fu_57299_p2 = (!zext_ln703_454_fu_57129_p1.read().is_01() || !zext_ln703_458_fu_57295_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_454_fu_57129_p1.read()) + sc_biguint<10>(zext_ln703_458_fu_57295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2188_fu_57309_p2() {
    add_ln703_2188_fu_57309_p2 = (!zext_ln703_460_fu_57305_p1.read().is_01() || !sext_ln703_1304_fu_57285_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_460_fu_57305_p1.read()) + sc_bigint<12>(sext_ln703_1304_fu_57285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2189_fu_57319_p2() {
    add_ln703_2189_fu_57319_p2 = (!sext_ln703_1305_fu_57315_p1.read().is_01() || !add_ln703_2182_fu_57264_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1305_fu_57315_p1.read()) + sc_biguint<15>(add_ln703_2182_fu_57264_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_218_fu_45079_p2() {
    add_ln703_218_fu_45079_p2 = (!zext_ln703_49_fu_45075_p1.read().is_01() || !sext_ln1116_4_fu_26195_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_49_fu_45075_p1.read()) + sc_bigint<11>(sext_ln1116_4_fu_26195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2191_fu_22262_p2() {
    add_ln703_2191_fu_22262_p2 = (!lshr_ln708_679_fu_11342_p4.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(lshr_ln708_679_fu_11342_p4.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2192_fu_22272_p2() {
    add_ln703_2192_fu_22272_p2 = (!sext_ln703_1307_fu_22268_p1.read().is_01() || !zext_ln708_422_fu_8804_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1307_fu_22268_p1.read()) + sc_biguint<11>(zext_ln708_422_fu_8804_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2193_fu_22282_p2() {
    add_ln703_2193_fu_22282_p2 = (!sext_ln703_1308_fu_22278_p1.read().is_01() || !sext_ln203_473_fu_11560_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1308_fu_22278_p1.read()) + sc_bigint<12>(sext_ln203_473_fu_11560_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2194_fu_22292_p2() {
    add_ln703_2194_fu_22292_p2 = (!sext_ln703_296_fu_22288_p1.read().is_01() || !sext_ln203_435_fu_10658_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_296_fu_22288_p1.read()) + sc_bigint<13>(sext_ln203_435_fu_10658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2195_fu_22298_p2() {
    add_ln703_2195_fu_22298_p2 = (!sext_ln708_139_fu_9572_p1.read().is_01() || !zext_ln1116_197_fu_10226_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_139_fu_9572_p1.read()) + sc_biguint<10>(zext_ln1116_197_fu_10226_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2196_fu_22308_p2() {
    add_ln703_2196_fu_22308_p2 = (!sext_ln703_1309_fu_22304_p1.read().is_01() || !add_ln703_2194_fu_22292_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1309_fu_22304_p1.read()) + sc_biguint<13>(add_ln703_2194_fu_22292_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2197_fu_22314_p2() {
    add_ln703_2197_fu_22314_p2 = (!sext_ln708_166_fu_11584_p1.read().is_01() || !zext_ln203_291_fu_9410_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_166_fu_11584_p1.read()) + sc_biguint<12>(zext_ln203_291_fu_9410_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2198_fu_57341_p2() {
    add_ln703_2198_fu_57341_p2 = (!sext_ln703_1310_fu_57338_p1.read().is_01() || !sext_ln703_297_fu_57335_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1310_fu_57338_p1.read()) + sc_bigint<14>(sext_ln703_297_fu_57335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2199_fu_22320_p2() {
    add_ln703_2199_fu_22320_p2 = (!sext_ln708_167_fu_11638_p1.read().is_01() || !zext_ln1118_945_fu_11598_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_167_fu_11638_p1.read()) + sc_biguint<9>(zext_ln1118_945_fu_11598_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_219_fu_45089_p2() {
    add_ln703_219_fu_45089_p2 = (!sext_ln703_195_fu_45085_p1.read().is_01() || !add_ln703_216_fu_45064_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_195_fu_45085_p1.read()) + sc_biguint<12>(add_ln703_216_fu_45064_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_21_fu_43878_p2() {
    add_ln703_21_fu_43878_p2 = (!sext_ln1118_4_fu_26357_p1.read().is_01() || !sext_ln1118_5_fu_26449_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_4_fu_26357_p1.read()) + sc_bigint<10>(sext_ln1118_5_fu_26449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2200_fu_22330_p2() {
    add_ln703_2200_fu_22330_p2 = (!sext_ln703_1311_fu_22326_p1.read().is_01() || !sext_ln1118_316_fu_11618_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1311_fu_22326_p1.read()) + sc_bigint<10>(sext_ln1118_316_fu_11618_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2201_fu_57350_p2() {
    add_ln703_2201_fu_57350_p2 = (!sext_ln703_1312_fu_57347_p1.read().is_01() || !add_ln703_2198_fu_57341_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1312_fu_57347_p1.read()) + sc_biguint<14>(add_ln703_2198_fu_57341_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2202_fu_57356_p2() {
    add_ln703_2202_fu_57356_p2 = (!zext_ln1118_946_fu_37591_p1.read().is_01() || !sext_ln203_426_fu_36455_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_946_fu_37591_p1.read()) + sc_bigint<12>(sext_ln203_426_fu_36455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2203_fu_57366_p2() {
    add_ln703_2203_fu_57366_p2 = (!sext_ln703_1313_fu_57362_p1.read().is_01() || !add_ln703_2201_fu_57350_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1313_fu_57362_p1.read()) + sc_biguint<14>(add_ln703_2201_fu_57350_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2204_fu_57376_p2() {
    add_ln703_2204_fu_57376_p2 = (!zext_ln708_884_fu_37426_p1.read().is_01() || !zext_ln708_886_fu_37465_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_884_fu_37426_p1.read()) + sc_biguint<11>(zext_ln708_886_fu_37465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2205_fu_57386_p2() {
    add_ln703_2205_fu_57386_p2 = (!zext_ln703_461_fu_57382_p1.read().is_01() || !sext_ln708_158_fu_37380_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_461_fu_57382_p1.read()) + sc_bigint<13>(sext_ln708_158_fu_37380_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2206_fu_57396_p2() {
    add_ln703_2206_fu_57396_p2 = (!sext_ln703_1315_fu_57392_p1.read().is_01() || !sext_ln703_1314_fu_57372_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1315_fu_57392_p1.read()) + sc_bigint<15>(sext_ln703_1314_fu_57372_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2207_fu_57402_p2() {
    add_ln703_2207_fu_57402_p2 = (!sext_ln708_168_fu_37594_p1.read().is_01() || !zext_ln203_328_fu_37597_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_168_fu_37594_p1.read()) + sc_biguint<11>(zext_ln203_328_fu_37597_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2208_fu_57412_p2() {
    add_ln703_2208_fu_57412_p2 = (!sext_ln703_1316_fu_57408_p1.read().is_01() || !zext_ln1118_947_fu_37620_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1316_fu_57408_p1.read()) + sc_biguint<12>(zext_ln1118_947_fu_37620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_220_fu_45099_p2() {
    add_ln703_220_fu_45099_p2 = (!sext_ln703_196_fu_45095_p1.read().is_01() || !sext_ln703_194_fu_45060_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_196_fu_45095_p1.read()) + sc_bigint<15>(sext_ln703_194_fu_45060_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2210_fu_57422_p2() {
    add_ln703_2210_fu_57422_p2 = (!zext_ln708_474_fu_36246_p1.read().is_01() || !zext_ln1118_846_fu_34993_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_474_fu_36246_p1.read()) + sc_biguint<9>(zext_ln1118_846_fu_34993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2211_fu_57432_p2() {
    add_ln703_2211_fu_57432_p2 = (!zext_ln703_463_fu_57428_p1.read().is_01() || !zext_ln703_392_fu_55588_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_463_fu_57428_p1.read()) + sc_biguint<11>(zext_ln703_392_fu_55588_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2212_fu_57442_p2() {
    add_ln703_2212_fu_57442_p2 = (!zext_ln703_464_fu_57438_p1.read().is_01() || !sext_ln703_1317_fu_57418_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_464_fu_57438_p1.read()) + sc_bigint<13>(sext_ln703_1317_fu_57418_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2213_fu_57452_p2() {
    add_ln703_2213_fu_57452_p2 = (!sext_ln703_1318_fu_57448_p1.read().is_01() || !add_ln703_2206_fu_57396_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1318_fu_57448_p1.read()) + sc_biguint<15>(add_ln703_2206_fu_57396_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2214_fu_57458_p2() {
    add_ln703_2214_fu_57458_p2 = (!sext_ln203_474_fu_37640_p1.read().is_01() || !zext_ln203_329_fu_37660_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_474_fu_37640_p1.read()) + sc_biguint<12>(zext_ln203_329_fu_37660_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2215_fu_57468_p2() {
    add_ln703_2215_fu_57468_p2 = (!sext_ln703_1319_fu_57464_p1.read().is_01() || !add_ln703_2213_fu_57452_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1319_fu_57464_p1.read()) + sc_biguint<15>(add_ln703_2213_fu_57452_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2216_fu_57478_p2() {
    add_ln703_2216_fu_57478_p2 = (!zext_ln203_330_fu_37680_p1.read().is_01() || !sext_ln203_475_fu_37700_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_330_fu_37680_p1.read()) + sc_bigint<12>(sext_ln203_475_fu_37700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2217_fu_57484_p2() {
    add_ln703_2217_fu_57484_p2 = (!sext_ln203_476_fu_37719_p1.read().is_01() || !zext_ln203_332_fu_37727_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_476_fu_37719_p1.read()) + sc_biguint<11>(zext_ln203_332_fu_37727_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2218_fu_57494_p2() {
    add_ln703_2218_fu_57494_p2 = (!sext_ln703_1321_fu_57490_p1.read().is_01() || !add_ln703_2216_fu_57478_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1321_fu_57490_p1.read()) + sc_biguint<12>(add_ln703_2216_fu_57478_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2220_fu_57517_p2() {
    add_ln703_2220_fu_57517_p2 = (!or_ln703_15_fu_57510_p3.read().is_01() || !mult_2529_V_fu_37731_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_15_fu_57510_p3.read()) + sc_bigint<16>(mult_2529_V_fu_37731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2221_fu_22336_p2() {
    add_ln703_2221_fu_22336_p2 = (!sext_ln708_156_fu_10944_p1.read().is_01() || !sext_ln203_480_fu_11702_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_156_fu_10944_p1.read()) + sc_bigint<12>(sext_ln203_480_fu_11702_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2222_fu_57526_p2() {
    add_ln703_2222_fu_57526_p2 = (!sext_ln703_1323_fu_57523_p1.read().is_01() || !add_ln703_2220_fu_57517_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1323_fu_57523_p1.read()) + sc_biguint<16>(add_ln703_2220_fu_57517_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2223_fu_57532_p2() {
    add_ln703_2223_fu_57532_p2 = (!sext_ln203_471_fu_37514_p1.read().is_01() || !sext_ln203_489_fu_37776_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_471_fu_37514_p1.read()) + sc_bigint<12>(sext_ln203_489_fu_37776_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2224_fu_57542_p2() {
    add_ln703_2224_fu_57542_p2 = (!sext_ln203_490_fu_37818_p1.read().is_01() || !zext_ln203_333_reg_68399.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_490_fu_37818_p1.read()) + sc_biguint<12>(zext_ln203_333_reg_68399.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2225_fu_57551_p2() {
    add_ln703_2225_fu_57551_p2 = (!sext_ln703_1325_fu_57547_p1.read().is_01() || !sext_ln703_1324_fu_57538_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1325_fu_57547_p1.read()) + sc_bigint<13>(sext_ln703_1324_fu_57538_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2226_fu_57561_p2() {
    add_ln703_2226_fu_57561_p2 = (!sext_ln703_1326_fu_57557_p1.read().is_01() || !add_ln703_2222_fu_57526_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1326_fu_57557_p1.read()) + sc_biguint<16>(add_ln703_2222_fu_57526_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2227_fu_57567_p2() {
    add_ln703_2227_fu_57567_p2 = (!zext_ln708_890_fu_37734_p1.read().is_01() || !zext_ln708_844_fu_35557_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_890_fu_37734_p1.read()) + sc_biguint<11>(zext_ln708_844_fu_35557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2228_fu_22342_p2() {
    add_ln703_2228_fu_22342_p2 = (!sext_ln1118_262_fu_9336_p1.read().is_01() || !sext_ln203_478_fu_11698_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_262_fu_9336_p1.read()) + sc_bigint<11>(sext_ln203_478_fu_11698_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2229_fu_57580_p2() {
    add_ln703_2229_fu_57580_p2 = (!sext_ln703_1327_fu_57577_p1.read().is_01() || !zext_ln703_465_fu_57573_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1327_fu_57577_p1.read()) + sc_biguint<13>(zext_ln703_465_fu_57573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_222_fu_45105_p2() {
    add_ln703_222_fu_45105_p2 = (!zext_ln708_31_fu_26242_p1.read().is_01() || !zext_ln1118_71_fu_26281_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_31_fu_26242_p1.read()) + sc_biguint<9>(zext_ln1118_71_fu_26281_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2230_fu_22348_p2() {
    add_ln703_2230_fu_22348_p2 = (!sext_ln203_481_fu_11726_p1.read().is_01() || !sext_ln203_482_fu_11746_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_481_fu_11726_p1.read()) + sc_bigint<11>(sext_ln203_482_fu_11746_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2231_fu_57593_p2() {
    add_ln703_2231_fu_57593_p2 = (!sext_ln203_450_fu_37049_p1.read().is_01() || !sext_ln203_487_fu_37756_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_450_fu_37049_p1.read()) + sc_bigint<11>(sext_ln203_487_fu_37756_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2232_fu_57603_p2() {
    add_ln703_2232_fu_57603_p2 = (!sext_ln703_1330_fu_57599_p1.read().is_01() || !sext_ln703_1329_fu_57590_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1330_fu_57599_p1.read()) + sc_bigint<12>(sext_ln703_1329_fu_57590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2233_fu_57613_p2() {
    add_ln703_2233_fu_57613_p2 = (!sext_ln703_1331_fu_57609_p1.read().is_01() || !sext_ln703_1328_fu_57586_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1331_fu_57609_p1.read()) + sc_bigint<14>(sext_ln703_1328_fu_57586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2234_fu_57623_p2() {
    add_ln703_2234_fu_57623_p2 = (!sext_ln703_1332_fu_57619_p1.read().is_01() || !add_ln703_2226_fu_57561_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1332_fu_57619_p1.read()) + sc_biguint<16>(add_ln703_2226_fu_57561_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2235_fu_57629_p2() {
    add_ln703_2235_fu_57629_p2 = (!zext_ln708_838_fu_35096_p1.read().is_01() || !zext_ln708_854_fu_36312_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_838_fu_35096_p1.read()) + sc_biguint<10>(zext_ln708_854_fu_36312_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2236_fu_57639_p2() {
    add_ln703_2236_fu_57639_p2 = (!zext_ln708_494_fu_36782_p1.read().is_01() || !sext_ln203_483_fu_37737_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_494_fu_36782_p1.read()) + sc_bigint<11>(sext_ln203_483_fu_37737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2237_fu_57649_p2() {
    add_ln703_2237_fu_57649_p2 = (!sext_ln703_1333_fu_57645_p1.read().is_01() || !zext_ln703_466_fu_57635_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1333_fu_57645_p1.read()) + sc_biguint<12>(zext_ln703_466_fu_57635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2238_fu_57659_p2() {
    add_ln703_2238_fu_57659_p2 = (!sext_ln1116_47_fu_36228_p1.read().is_01() || !sext_ln708_137_fu_35620_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_47_fu_36228_p1.read()) + sc_bigint<9>(sext_ln708_137_fu_35620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2239_fu_57669_p2() {
    add_ln703_2239_fu_57669_p2 = (!sext_ln203_413_fu_36166_p1.read().is_01() || !sext_ln203_491_fu_37822_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_413_fu_36166_p1.read()) + sc_bigint<9>(sext_ln203_491_fu_37822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_223_fu_45115_p2() {
    add_ln703_223_fu_45115_p2 = (!zext_ln703_51_fu_45111_p1.read().is_01() || !zext_ln703_38_fu_44811_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_51_fu_45111_p1.read()) + sc_biguint<10>(zext_ln703_38_fu_44811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2240_fu_57679_p2() {
    add_ln703_2240_fu_57679_p2 = (!sext_ln703_1336_fu_57675_p1.read().is_01() || !sext_ln703_1335_fu_57665_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1336_fu_57675_p1.read()) + sc_bigint<10>(sext_ln703_1335_fu_57665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2241_fu_57689_p2() {
    add_ln703_2241_fu_57689_p2 = (!sext_ln703_1337_fu_57685_p1.read().is_01() || !sext_ln703_1334_fu_57655_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1337_fu_57685_p1.read()) + sc_bigint<13>(sext_ln703_1334_fu_57655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2243_fu_57698_p2() {
    add_ln703_2243_fu_57698_p2 = (!zext_ln708_864_fu_36833_p1.read().is_01() || !zext_ln708_845_fu_35561_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_864_fu_36833_p1.read()) + sc_biguint<8>(zext_ln708_845_fu_35561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2244_fu_57708_p2() {
    add_ln703_2244_fu_57708_p2 = (!zext_ln703_468_fu_57704_p1.read().is_01() || !zext_ln703_467_fu_57695_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_468_fu_57704_p1.read()) + sc_biguint<10>(zext_ln703_467_fu_57695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2246_fu_57718_p2() {
    add_ln703_2246_fu_57718_p2 = (!zext_ln708_445_fu_35337_p1.read().is_01() || !zext_ln203_331_fu_37723_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_445_fu_35337_p1.read()) + sc_biguint<9>(zext_ln203_331_fu_37723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2247_fu_57728_p2() {
    add_ln703_2247_fu_57728_p2 = (!zext_ln703_471_fu_57724_p1.read().is_01() || !zext_ln703_423_fu_56367_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_471_fu_57724_p1.read()) + sc_biguint<10>(zext_ln703_423_fu_56367_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2248_fu_57738_p2() {
    add_ln703_2248_fu_57738_p2 = (!zext_ln703_472_fu_57734_p1.read().is_01() || !zext_ln703_469_fu_57714_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_472_fu_57734_p1.read()) + sc_biguint<11>(zext_ln703_469_fu_57714_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2249_fu_57748_p2() {
    add_ln703_2249_fu_57748_p2 = (!zext_ln703_473_fu_57744_p1.read().is_01() || !add_ln703_2241_fu_57689_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_473_fu_57744_p1.read()) + sc_biguint<13>(add_ln703_2241_fu_57689_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_224_fu_45125_p2() {
    add_ln703_224_fu_45125_p2 = (!zext_ln708_708_fu_28029_p1.read().is_01() || !zext_ln708_695_fu_27490_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_708_fu_28029_p1.read()) + sc_biguint<8>(zext_ln708_695_fu_27490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2251_fu_22354_p2() {
    add_ln703_2251_fu_22354_p2 = (!sext_ln203_492_fu_11786_p1.read().is_01() || !ap_const_lv12_F00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_492_fu_11786_p1.read()) + sc_bigint<12>(ap_const_lv12_F00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2252_fu_22364_p2() {
    add_ln703_2252_fu_22364_p2 = (!sext_ln203_417_fu_10448_p1.read().is_01() || !sext_ln1118_318_fu_11790_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_417_fu_10448_p1.read()) + sc_bigint<12>(sext_ln1118_318_fu_11790_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2253_fu_22374_p2() {
    add_ln703_2253_fu_22374_p2 = (!sext_ln703_1339_fu_22370_p1.read().is_01() || !sext_ln703_300_fu_22360_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1339_fu_22370_p1.read()) + sc_bigint<13>(sext_ln703_300_fu_22360_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2254_fu_22384_p2() {
    add_ln703_2254_fu_22384_p2 = (!sext_ln703_301_fu_22380_p1.read().is_01() || !sext_ln203_493_fu_11826_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_301_fu_22380_p1.read()) + sc_bigint<14>(sext_ln203_493_fu_11826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2255_fu_22390_p2() {
    add_ln703_2255_fu_22390_p2 = (!sext_ln708_145_fu_10360_p1.read().is_01() || !zext_ln203_333_fu_11706_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_145_fu_10360_p1.read()) + sc_biguint<12>(zext_ln203_333_fu_11706_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2256_fu_22400_p2() {
    add_ln703_2256_fu_22400_p2 = (!sext_ln703_1340_fu_22396_p1.read().is_01() || !add_ln703_2254_fu_22384_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1340_fu_22396_p1.read()) + sc_biguint<14>(add_ln703_2254_fu_22384_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2257_fu_22406_p2() {
    add_ln703_2257_fu_22406_p2 = (!zext_ln1116_214_fu_11856_p1.read().is_01() || !sext_ln1116_50_fu_11822_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_214_fu_11856_p1.read()) + sc_bigint<12>(sext_ln1116_50_fu_11822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2258_fu_22416_p2() {
    add_ln703_2258_fu_22416_p2 = (!zext_ln708_859_fu_10730_p1.read().is_01() || !zext_ln1116_212_fu_11848_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_859_fu_10730_p1.read()) + sc_biguint<10>(zext_ln1116_212_fu_11848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2259_fu_22426_p2() {
    add_ln703_2259_fu_22426_p2 = (!zext_ln703_474_fu_22422_p1.read().is_01() || !sext_ln703_1341_fu_22412_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_474_fu_22422_p1.read()) + sc_bigint<13>(sext_ln703_1341_fu_22412_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_225_fu_45135_p2() {
    add_ln703_225_fu_45135_p2 = (!zext_ln708_682_fu_26856_p1.read().is_01() || !zext_ln708_710_fu_28079_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_682_fu_26856_p1.read()) + sc_biguint<8>(zext_ln708_710_fu_28079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2260_fu_22436_p2() {
    add_ln703_2260_fu_22436_p2 = (!sext_ln703_1342_fu_22432_p1.read().is_01() || !add_ln703_2256_fu_22400_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1342_fu_22432_p1.read()) + sc_biguint<14>(add_ln703_2256_fu_22400_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2261_fu_57767_p2() {
    add_ln703_2261_fu_57767_p2 = (!sext_ln703_302_fu_57764_p1.read().is_01() || !sext_ln203_494_fu_37842_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_302_fu_57764_p1.read()) + sc_bigint<15>(sext_ln203_494_fu_37842_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2262_fu_57773_p2() {
    add_ln703_2262_fu_57773_p2 = (!sext_ln1118_319_fu_37865_p1.read().is_01() || !sext_ln1116_55_fu_37939_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_319_fu_37865_p1.read()) + sc_bigint<12>(sext_ln1116_55_fu_37939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2263_fu_57783_p2() {
    add_ln703_2263_fu_57783_p2 = (!sext_ln703_1343_fu_57779_p1.read().is_01() || !sext_ln1116_52_fu_37846_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1343_fu_57779_p1.read()) + sc_bigint<13>(sext_ln1116_52_fu_37846_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2264_fu_57793_p2() {
    add_ln703_2264_fu_57793_p2 = (!sext_ln703_1344_fu_57789_p1.read().is_01() || !add_ln703_2261_fu_57767_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1344_fu_57789_p1.read()) + sc_biguint<15>(add_ln703_2261_fu_57767_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2265_fu_57799_p2() {
    add_ln703_2265_fu_57799_p2 = (!zext_ln708_892_fu_37912_p1.read().is_01() || !zext_ln1118_920_fu_36423_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_892_fu_37912_p1.read()) + sc_biguint<10>(zext_ln1118_920_fu_36423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2266_fu_57809_p2() {
    add_ln703_2266_fu_57809_p2 = (!zext_ln703_475_fu_57805_p1.read().is_01() || !sext_ln1116_56_fu_37943_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_475_fu_57805_p1.read()) + sc_bigint<12>(sext_ln1116_56_fu_37943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2267_fu_57819_p2() {
    add_ln703_2267_fu_57819_p2 = (!sext_ln1116_54_fu_37892_p1.read().is_01() || !zext_ln1118_845_fu_34990_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_54_fu_37892_p1.read()) + sc_biguint<10>(zext_ln1118_845_fu_34990_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2268_fu_57829_p2() {
    add_ln703_2268_fu_57829_p2 = (!sext_ln703_1346_fu_57825_p1.read().is_01() || !sext_ln1118_320_fu_37885_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1346_fu_57825_p1.read()) + sc_bigint<11>(sext_ln1118_320_fu_37885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2269_fu_57839_p2() {
    add_ln703_2269_fu_57839_p2 = (!sext_ln703_1347_fu_57835_p1.read().is_01() || !sext_ln703_1345_fu_57815_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1347_fu_57835_p1.read()) + sc_bigint<13>(sext_ln703_1345_fu_57815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_226_fu_45145_p2() {
    add_ln703_226_fu_45145_p2 = (!zext_ln703_54_fu_45141_p1.read().is_01() || !zext_ln1118_23_fu_26453_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_54_fu_45141_p1.read()) + sc_biguint<9>(zext_ln1118_23_fu_26453_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2270_fu_57849_p2() {
    add_ln703_2270_fu_57849_p2 = (!sext_ln703_1348_fu_57845_p1.read().is_01() || !add_ln703_2264_fu_57793_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1348_fu_57845_p1.read()) + sc_biguint<15>(add_ln703_2264_fu_57793_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2271_fu_57855_p2() {
    add_ln703_2271_fu_57855_p2 = (!add_ln703_2270_fu_57849_p2.read().is_01() || !sext_ln203_495_fu_37947_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2270_fu_57849_p2.read()) + sc_bigint<15>(sext_ln203_495_fu_37947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2272_fu_57865_p2() {
    add_ln703_2272_fu_57865_p2 = (!sext_ln203_412_fu_36146_p1.read().is_01() || !zext_ln203_335_fu_37955_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_412_fu_36146_p1.read()) + sc_biguint<12>(zext_ln203_335_fu_37955_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2273_fu_57875_p2() {
    add_ln703_2273_fu_57875_p2 = (!sext_ln703_1350_fu_57871_p1.read().is_01() || !sext_ln703_1349_fu_57861_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1350_fu_57871_p1.read()) + sc_bigint<16>(sext_ln703_1349_fu_57861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2274_fu_57881_p2() {
    add_ln703_2274_fu_57881_p2 = (!zext_ln708_863_fu_36802_p1.read().is_01() || !zext_ln203_334_fu_37951_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_863_fu_36802_p1.read()) + sc_biguint<11>(zext_ln203_334_fu_37951_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2275_fu_57891_p2() {
    add_ln703_2275_fu_57891_p2 = (!sext_ln203_413_fu_36166_p1.read().is_01() || !sext_ln203_397_fu_35425_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_413_fu_36166_p1.read()) + sc_bigint<9>(sext_ln203_397_fu_35425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2276_fu_57901_p2() {
    add_ln703_2276_fu_57901_p2 = (!sext_ln703_1351_fu_57897_p1.read().is_01() || !sext_ln203_499_fu_37979_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1351_fu_57897_p1.read()) + sc_bigint<10>(sext_ln203_499_fu_37979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2277_fu_57911_p2() {
    add_ln703_2277_fu_57911_p2 = (!sext_ln703_1352_fu_57907_p1.read().is_01() || !zext_ln703_476_fu_57887_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1352_fu_57907_p1.read()) + sc_biguint<12>(zext_ln703_476_fu_57887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2279_fu_22442_p2() {
    add_ln703_2279_fu_22442_p2 = (!sext_ln203_492_fu_11786_p1.read().is_01() || !ap_const_lv12_200.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_492_fu_11786_p1.read()) + sc_biguint<12>(ap_const_lv12_200));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_227_fu_45155_p2() {
    add_ln703_227_fu_45155_p2 = (!zext_ln703_55_fu_45151_p1.read().is_01() || !zext_ln703_53_fu_45131_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_55_fu_45151_p1.read()) + sc_biguint<10>(zext_ln703_53_fu_45131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2280_fu_22452_p2() {
    add_ln703_2280_fu_22452_p2 = (!sext_ln203_417_fu_10448_p1.read().is_01() || !sext_ln203_434_fu_10608_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_417_fu_10448_p1.read()) + sc_bigint<12>(sext_ln203_434_fu_10608_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2281_fu_22462_p2() {
    add_ln703_2281_fu_22462_p2 = (!sext_ln703_1354_fu_22458_p1.read().is_01() || !sext_ln703_304_fu_22448_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1354_fu_22458_p1.read()) + sc_bigint<13>(sext_ln703_304_fu_22448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2282_fu_22468_p2() {
    add_ln703_2282_fu_22468_p2 = (!add_ln703_2281_fu_22462_p2.read().is_01() || !sext_ln203_415_fu_10222_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2281_fu_22462_p2.read()) + sc_bigint<13>(sext_ln203_415_fu_10222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2283_fu_22478_p2() {
    add_ln703_2283_fu_22478_p2 = (!sext_ln708_171_fu_11880_p1.read().is_01() || !sext_ln708_172_fu_11914_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_171_fu_11880_p1.read()) + sc_bigint<11>(sext_ln708_172_fu_11914_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2284_fu_22488_p2() {
    add_ln703_2284_fu_22488_p2 = (!sext_ln703_1356_fu_22484_p1.read().is_01() || !sext_ln703_1355_fu_22474_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1356_fu_22484_p1.read()) + sc_bigint<14>(sext_ln703_1355_fu_22474_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2285_fu_22494_p2() {
    add_ln703_2285_fu_22494_p2 = (!zext_ln708_882_fu_11372_p1.read().is_01() || !zext_ln1118_919_fu_10484_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_882_fu_11372_p1.read()) + sc_biguint<10>(zext_ln1118_919_fu_10484_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2286_fu_22504_p2() {
    add_ln703_2286_fu_22504_p2 = (!zext_ln708_550_fu_11894_p1.read().is_01() || !zext_ln708_430_fu_9034_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_550_fu_11894_p1.read()) + sc_biguint<9>(zext_ln708_430_fu_9034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2287_fu_22514_p2() {
    add_ln703_2287_fu_22514_p2 = (!zext_ln703_478_fu_22510_p1.read().is_01() || !zext_ln703_477_fu_22500_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_478_fu_22510_p1.read()) + sc_biguint<11>(zext_ln703_477_fu_22500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2288_fu_22524_p2() {
    add_ln703_2288_fu_22524_p2 = (!zext_ln703_479_fu_22520_p1.read().is_01() || !add_ln703_2284_fu_22488_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_479_fu_22520_p1.read()) + sc_biguint<14>(add_ln703_2284_fu_22488_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2289_fu_22530_p2() {
    add_ln703_2289_fu_22530_p2 = (!add_ln703_2288_fu_22524_p2.read().is_01() || !sext_ln203_502_fu_11942_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2288_fu_22524_p2.read()) + sc_bigint<14>(sext_ln203_502_fu_11942_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_228_fu_45165_p2() {
    add_ln703_228_fu_45165_p2 = (!zext_ln703_56_fu_45161_p1.read().is_01() || !zext_ln703_52_fu_45121_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_56_fu_45161_p1.read()) + sc_biguint<11>(zext_ln703_52_fu_45121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2290_fu_57930_p2() {
    add_ln703_2290_fu_57930_p2 = (!sext_ln708_148_reg_68249.read().is_01() || !zext_ln1118_953_fu_38003_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_148_reg_68249.read()) + sc_biguint<12>(zext_ln1118_953_fu_38003_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2291_fu_57939_p2() {
    add_ln703_2291_fu_57939_p2 = (!sext_ln703_1358_fu_57935_p1.read().is_01() || !sext_ln1118_322_fu_38027_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1358_fu_57935_p1.read()) + sc_bigint<13>(sext_ln1118_322_fu_38027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2292_fu_57949_p2() {
    add_ln703_2292_fu_57949_p2 = (!sext_ln703_1359_fu_57945_p1.read().is_01() || !sext_ln703_1357_fu_57927_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1359_fu_57945_p1.read()) + sc_bigint<15>(sext_ln703_1357_fu_57927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2293_fu_57955_p2() {
    add_ln703_2293_fu_57955_p2 = (!sext_ln203_450_fu_37049_p1.read().is_01() || !sext_ln1118_328_fu_38089_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_450_fu_37049_p1.read()) + sc_bigint<11>(sext_ln1118_328_fu_38089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2294_fu_57965_p2() {
    add_ln703_2294_fu_57965_p2 = (!sext_ln1116_43_fu_35027_p1.read().is_01() || !zext_ln1116_180_reg_68008.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_43_fu_35027_p1.read()) + sc_biguint<10>(zext_ln1116_180_reg_68008.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2295_fu_57974_p2() {
    add_ln703_2295_fu_57974_p2 = (!sext_ln703_1361_fu_57970_p1.read().is_01() || !sext_ln1118_326_fu_38066_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1361_fu_57970_p1.read()) + sc_bigint<11>(sext_ln1118_326_fu_38066_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2296_fu_57984_p2() {
    add_ln703_2296_fu_57984_p2 = (!sext_ln703_1362_fu_57980_p1.read().is_01() || !sext_ln703_1360_fu_57961_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1362_fu_57980_p1.read()) + sc_bigint<12>(sext_ln703_1360_fu_57961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2297_fu_57994_p2() {
    add_ln703_2297_fu_57994_p2 = (!sext_ln703_1363_fu_57990_p1.read().is_01() || !add_ln703_2292_fu_57949_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1363_fu_57990_p1.read()) + sc_biguint<15>(add_ln703_2292_fu_57949_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2298_fu_58000_p2() {
    add_ln703_2298_fu_58000_p2 = (!add_ln703_2297_fu_57994_p2.read().is_01() || !zext_ln203_337_fu_38093_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2297_fu_57994_p2.read()) + sc_biguint<15>(zext_ln203_337_fu_38093_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2299_fu_58010_p2() {
    add_ln703_2299_fu_58010_p2 = (!sext_ln203_504_fu_38116_p1.read().is_01() || !sext_ln203_505_fu_38160_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_504_fu_38116_p1.read()) + sc_bigint<12>(sext_ln203_505_fu_38160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_22_fu_43888_p2() {
    add_ln703_22_fu_43888_p2 = (!sext_ln703_21_fu_43884_p1.read().is_01() || !sext_ln1116_4_fu_26195_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_21_fu_43884_p1.read()) + sc_bigint<11>(sext_ln1116_4_fu_26195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2300_fu_58020_p2() {
    add_ln703_2300_fu_58020_p2 = (!sext_ln703_1365_fu_58016_p1.read().is_01() || !sext_ln203_503_fu_38112_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1365_fu_58016_p1.read()) + sc_bigint<13>(sext_ln203_503_fu_38112_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2301_fu_58030_p2() {
    add_ln703_2301_fu_58030_p2 = (!sext_ln703_1366_fu_58026_p1.read().is_01() || !sext_ln703_1364_fu_58006_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1366_fu_58026_p1.read()) + sc_bigint<16>(sext_ln703_1364_fu_58006_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2302_fu_58036_p2() {
    add_ln703_2302_fu_58036_p2 = (!sext_ln203_412_fu_36146_p1.read().is_01() || !zext_ln203_338_fu_38136_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_412_fu_36146_p1.read()) + sc_biguint<12>(zext_ln203_338_fu_38136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2303_fu_58046_p2() {
    add_ln703_2303_fu_58046_p2 = (!sext_ln203_506_fu_38184_p1.read().is_01() || !sext_ln708_160_fu_37418_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_506_fu_38184_p1.read()) + sc_bigint<11>(sext_ln708_160_fu_37418_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2304_fu_58056_p2() {
    add_ln703_2304_fu_58056_p2 = (!sext_ln703_1368_fu_58052_p1.read().is_01() || !zext_ln203_339_fu_38180_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1368_fu_58052_p1.read()) + sc_biguint<12>(zext_ln203_339_fu_38180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2305_fu_58066_p2() {
    add_ln703_2305_fu_58066_p2 = (!sext_ln703_1369_fu_58062_p1.read().is_01() || !sext_ln703_1367_fu_58042_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1369_fu_58062_p1.read()) + sc_bigint<13>(sext_ln703_1367_fu_58042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2307_fu_22536_p2() {
    add_ln703_2307_fu_22536_p2 = (!zext_ln708_852_fu_10198_p1.read().is_01() || !zext_ln1116_170_fu_8826_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_852_fu_10198_p1.read()) + sc_biguint<10>(zext_ln1116_170_fu_8826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2308_fu_22546_p2() {
    add_ln703_2308_fu_22546_p2 = (!zext_ln703_480_fu_22542_p1.read().is_01() || !sext_ln203_400_fu_9304_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_480_fu_22542_p1.read()) + sc_bigint<12>(sext_ln203_400_fu_9304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2309_fu_22556_p2() {
    add_ln703_2309_fu_22556_p2 = (!sext_ln703_308_fu_22552_p1.read().is_01() || !sext_ln203_437_fu_10798_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_308_fu_22552_p1.read()) + sc_bigint<13>(sext_ln203_437_fu_10798_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_230_fu_16936_p2() {
    add_ln703_230_fu_16936_p2 = (!sext_ln203_8_fu_1916_p1.read().is_01() || !ap_const_lv12_D80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_8_fu_1916_p1.read()) + sc_bigint<12>(ap_const_lv12_D80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2310_fu_22562_p2() {
    add_ln703_2310_fu_22562_p2 = (!sext_ln1118_334_fu_11976_p1.read().is_01() || !zext_ln708_550_fu_11894_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_334_fu_11976_p1.read()) + sc_biguint<9>(zext_ln708_550_fu_11894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2311_fu_22572_p2() {
    add_ln703_2311_fu_22572_p2 = (!sext_ln703_1371_fu_22568_p1.read().is_01() || !add_ln703_2309_fu_22556_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1371_fu_22568_p1.read()) + sc_biguint<13>(add_ln703_2309_fu_22556_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2312_fu_22582_p2() {
    add_ln703_2312_fu_22582_p2 = (!sext_ln708_173_fu_11996_p1.read().is_01() || !zext_ln708_563_fu_12000_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_173_fu_11996_p1.read()) + sc_biguint<12>(zext_ln708_563_fu_12000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2313_fu_22592_p2() {
    add_ln703_2313_fu_22592_p2 = (!sext_ln703_1372_fu_22588_p1.read().is_01() || !sext_ln703_309_fu_22578_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1372_fu_22588_p1.read()) + sc_bigint<14>(sext_ln703_309_fu_22578_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2314_fu_22598_p2() {
    add_ln703_2314_fu_22598_p2 = (!sext_ln203_422_fu_10524_p1.read().is_01() || !zext_ln1118_880_fu_9724_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_422_fu_10524_p1.read()) + sc_biguint<11>(zext_ln1118_880_fu_9724_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2315_fu_22608_p2() {
    add_ln703_2315_fu_22608_p2 = (!sext_ln1118_282_fu_10166_p1.read().is_01() || !zext_ln1118_841_fu_9108_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_282_fu_10166_p1.read()) + sc_biguint<10>(zext_ln1118_841_fu_9108_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2316_fu_22618_p2() {
    add_ln703_2316_fu_22618_p2 = (!sext_ln703_1374_fu_22614_p1.read().is_01() || !sext_ln703_1373_fu_22604_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1374_fu_22614_p1.read()) + sc_bigint<12>(sext_ln703_1373_fu_22604_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2317_fu_58085_p2() {
    add_ln703_2317_fu_58085_p2 = (!sext_ln703_1375_fu_58082_p1.read().is_01() || !add_ln703_2313_reg_69726.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1375_fu_58082_p1.read()) + sc_biguint<14>(add_ln703_2313_reg_69726.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2318_fu_58090_p2() {
    add_ln703_2318_fu_58090_p2 = (!add_ln703_2317_fu_58085_p2.read().is_01() || !sext_ln1118_323_fu_38031_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2317_fu_58085_p2.read()) + sc_bigint<14>(sext_ln1118_323_fu_38031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2319_fu_58100_p2() {
    add_ln703_2319_fu_58100_p2 = (!sext_ln203_514_fu_38330_p1.read().is_01() || !zext_ln708_569_fu_38219_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_514_fu_38330_p1.read()) + sc_biguint<12>(zext_ln708_569_fu_38219_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_231_fu_16946_p2() {
    add_ln703_231_fu_16946_p2 = (!sext_ln203_4_fu_1724_p1.read().is_01() || !sext_ln1118_9_fu_1968_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_4_fu_1724_p1.read()) + sc_bigint<12>(sext_ln1118_9_fu_1968_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2320_fu_58110_p2() {
    add_ln703_2320_fu_58110_p2 = (!sext_ln703_1377_fu_58106_p1.read().is_01() || !sext_ln708_174_fu_38296_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1377_fu_58106_p1.read()) + sc_bigint<13>(sext_ln708_174_fu_38296_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2321_fu_58120_p2() {
    add_ln703_2321_fu_58120_p2 = (!sext_ln703_1378_fu_58116_p1.read().is_01() || !sext_ln703_1376_fu_58096_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1378_fu_58116_p1.read()) + sc_bigint<15>(sext_ln703_1376_fu_58096_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2322_fu_58126_p2() {
    add_ln703_2322_fu_58126_p2 = (!zext_ln708_894_fu_38266_p1.read().is_01() || !zext_ln203_311_fu_36680_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_894_fu_38266_p1.read()) + sc_biguint<11>(zext_ln203_311_fu_36680_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2323_fu_58136_p2() {
    add_ln703_2323_fu_58136_p2 = (!zext_ln703_481_fu_58132_p1.read().is_01() || !zext_ln708_570_fu_38246_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_481_fu_58132_p1.read()) + sc_biguint<12>(zext_ln708_570_fu_38246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2324_fu_58146_p2() {
    add_ln703_2324_fu_58146_p2 = (!zext_ln1118_870_fu_35570_p1.read().is_01() || !zext_ln1118_957_fu_38310_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_870_fu_35570_p1.read()) + sc_biguint<9>(zext_ln1118_957_fu_38310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2325_fu_58156_p2() {
    add_ln703_2325_fu_58156_p2 = (!zext_ln703_483_fu_58152_p1.read().is_01() || !sext_ln1118_337_fu_38334_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_483_fu_58152_p1.read()) + sc_bigint<10>(sext_ln1118_337_fu_38334_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2326_fu_58166_p2() {
    add_ln703_2326_fu_58166_p2 = (!sext_ln703_1379_fu_58162_p1.read().is_01() || !zext_ln703_482_fu_58142_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1379_fu_58162_p1.read()) + sc_biguint<13>(zext_ln703_482_fu_58142_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2327_fu_58176_p2() {
    add_ln703_2327_fu_58176_p2 = (!sext_ln703_1380_fu_58172_p1.read().is_01() || !add_ln703_2321_fu_58120_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1380_fu_58172_p1.read()) + sc_biguint<15>(add_ln703_2321_fu_58120_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2328_fu_58182_p2() {
    add_ln703_2328_fu_58182_p2 = (!add_ln703_2327_fu_58176_p2.read().is_01() || !sext_ln203_517_fu_38342_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2327_fu_58176_p2.read()) + sc_bigint<15>(sext_ln203_517_fu_38342_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2329_fu_58188_p2() {
    add_ln703_2329_fu_58188_p2 = (!zext_ln203_340_fu_38346_p1.read().is_01() || !sext_ln203_516_fu_38338_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_340_fu_38346_p1.read()) + sc_bigint<11>(sext_ln203_516_fu_38338_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_232_fu_16956_p2() {
    add_ln703_232_fu_16956_p2 = (!sext_ln703_197_fu_16952_p1.read().is_01() || !sext_ln703_36_fu_16942_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_197_fu_16952_p1.read()) + sc_bigint<13>(sext_ln703_36_fu_16942_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2330_fu_58198_p2() {
    add_ln703_2330_fu_58198_p2 = (!sext_ln703_1381_fu_58194_p1.read().is_01() || !sext_ln203_468_fu_37504_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1381_fu_58194_p1.read()) + sc_bigint<12>(sext_ln203_468_fu_37504_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2332_fu_22624_p2() {
    add_ln703_2332_fu_22624_p2 = (!sext_ln203_520_fu_12020_p1.read().is_01() || !ap_const_lv12_80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_520_fu_12020_p1.read()) + sc_biguint<12>(ap_const_lv12_80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2333_fu_22630_p2() {
    add_ln703_2333_fu_22630_p2 = (!sext_ln1118_264_fu_9528_p1.read().is_01() || !sext_ln1118_340_fu_12056_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_264_fu_9528_p1.read()) + sc_bigint<10>(sext_ln1118_340_fu_12056_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2334_fu_22640_p2() {
    add_ln703_2334_fu_22640_p2 = (!sext_ln703_1384_fu_22636_p1.read().is_01() || !add_ln703_2332_fu_22624_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1384_fu_22636_p1.read()) + sc_biguint<12>(add_ln703_2332_fu_22624_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2335_fu_22650_p2() {
    add_ln703_2335_fu_22650_p2 = (!sext_ln203_480_fu_11702_p1.read().is_01() || !sext_ln1118_344_fu_12080_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_480_fu_11702_p1.read()) + sc_bigint<12>(sext_ln1118_344_fu_12080_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2336_fu_22660_p2() {
    add_ln703_2336_fu_22660_p2 = (!sext_ln703_1386_fu_22656_p1.read().is_01() || !sext_ln703_1385_fu_22646_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1386_fu_22656_p1.read()) + sc_bigint<13>(sext_ln703_1385_fu_22646_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2337_fu_22670_p2() {
    add_ln703_2337_fu_22670_p2 = (!sext_ln708_175_fu_12100_p1.read().is_01() || !zext_ln708_468_fu_10050_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_175_fu_12100_p1.read()) + sc_biguint<11>(zext_ln708_468_fu_10050_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2338_fu_22680_p2() {
    add_ln703_2338_fu_22680_p2 = (!sext_ln1118_341_fu_12060_p1.read().is_01() || !zext_ln708_550_fu_11894_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_341_fu_12060_p1.read()) + sc_biguint<9>(zext_ln708_550_fu_11894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2339_fu_22690_p2() {
    add_ln703_2339_fu_22690_p2 = (!sext_ln703_1389_fu_22686_p1.read().is_01() || !sext_ln703_1388_fu_22676_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1389_fu_22686_p1.read()) + sc_bigint<12>(sext_ln703_1388_fu_22676_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_233_fu_16962_p2() {
    add_ln703_233_fu_16962_p2 = (!add_ln703_232_fu_16956_p2.read().is_01() || !sext_ln203_5_fu_1798_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_232_fu_16956_p2.read()) + sc_bigint<13>(sext_ln203_5_fu_1798_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2340_fu_22700_p2() {
    add_ln703_2340_fu_22700_p2 = (!sext_ln703_1390_fu_22696_p1.read().is_01() || !sext_ln703_1387_fu_22666_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1390_fu_22696_p1.read()) + sc_bigint<14>(sext_ln703_1387_fu_22666_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2341_fu_58218_p2() {
    add_ln703_2341_fu_58218_p2 = (!sext_ln708_176_fu_38463_p1.read().is_01() || !zext_ln203_341_fu_38397_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_176_fu_38463_p1.read()) + sc_biguint<12>(zext_ln203_341_fu_38397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2342_fu_58228_p2() {
    add_ln703_2342_fu_58228_p2 = (!sext_ln703_1391_fu_58224_p1.read().is_01() || !add_ln703_2340_reg_69736.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1391_fu_58224_p1.read()) + sc_biguint<14>(add_ln703_2340_reg_69736.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2343_fu_58233_p2() {
    add_ln703_2343_fu_58233_p2 = (!sext_ln708_168_fu_37594_p1.read().is_01() || !zext_ln203_315_reg_68271.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_168_fu_37594_p1.read()) + sc_biguint<11>(zext_ln203_315_reg_68271.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2344_fu_58242_p2() {
    add_ln703_2344_fu_58242_p2 = (!sext_ln703_1392_fu_58238_p1.read().is_01() || !zext_ln1118_961_fu_38467_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1392_fu_58238_p1.read()) + sc_biguint<12>(zext_ln1118_961_fu_38467_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2345_fu_58252_p2() {
    add_ln703_2345_fu_58252_p2 = (!sext_ln703_1393_fu_58248_p1.read().is_01() || !add_ln703_2342_fu_58228_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1393_fu_58248_p1.read()) + sc_biguint<14>(add_ln703_2342_fu_58228_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2346_fu_58262_p2() {
    add_ln703_2346_fu_58262_p2 = (!sext_ln203_522_fu_38393_p1.read().is_01() || !sext_ln1118_348_fu_38432_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_522_fu_38393_p1.read()) + sc_bigint<10>(sext_ln1118_348_fu_38432_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2347_fu_58272_p2() {
    add_ln703_2347_fu_58272_p2 = (!sext_ln703_1395_fu_58268_p1.read().is_01() || !sext_ln1118_345_fu_38369_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1395_fu_58268_p1.read()) + sc_bigint<11>(sext_ln1118_345_fu_38369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2348_fu_58282_p2() {
    add_ln703_2348_fu_58282_p2 = (!zext_ln203_286_fu_34972_p1.read().is_01() || !zext_ln708_475_fu_36250_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_286_fu_34972_p1.read()) + sc_biguint<9>(zext_ln708_475_fu_36250_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2349_fu_58292_p2() {
    add_ln703_2349_fu_58292_p2 = (!zext_ln703_484_fu_58288_p1.read().is_01() || !zext_ln1116_180_reg_68008.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_484_fu_58288_p1.read()) + sc_biguint<10>(zext_ln1116_180_reg_68008.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_234_fu_16972_p2() {
    add_ln703_234_fu_16972_p2 = (!sext_ln708_22_fu_3364_p1.read().is_01() || !zext_ln708_82_fu_3408_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_22_fu_3364_p1.read()) + sc_biguint<12>(zext_ln708_82_fu_3408_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2350_fu_58301_p2() {
    add_ln703_2350_fu_58301_p2 = (!zext_ln703_485_fu_58297_p1.read().is_01() || !sext_ln703_1396_fu_58278_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_485_fu_58297_p1.read()) + sc_bigint<12>(sext_ln703_1396_fu_58278_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2351_fu_58311_p2() {
    add_ln703_2351_fu_58311_p2 = (!sext_ln703_1397_fu_58307_p1.read().is_01() || !sext_ln703_1394_fu_58258_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1397_fu_58307_p1.read()) + sc_bigint<15>(sext_ln703_1394_fu_58258_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2352_fu_58317_p2() {
    add_ln703_2352_fu_58317_p2 = (!add_ln703_2351_fu_58311_p2.read().is_01() || !sext_ln203_526_fu_38495_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2351_fu_58311_p2.read()) + sc_bigint<15>(sext_ln203_526_fu_38495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2353_fu_58323_p2() {
    add_ln703_2353_fu_58323_p2 = (!sext_ln203_530_fu_38531_p1.read().is_01() || !zext_ln203_301_fu_36114_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_530_fu_38531_p1.read()) + sc_biguint<12>(zext_ln203_301_fu_36114_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2354_fu_58333_p2() {
    add_ln703_2354_fu_58333_p2 = (!sext_ln703_1398_fu_58329_p1.read().is_01() || !sext_ln203_529_fu_38503_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1398_fu_58329_p1.read()) + sc_bigint<13>(sext_ln203_529_fu_38503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2355_fu_58343_p2() {
    add_ln703_2355_fu_58343_p2 = (!sext_ln703_1399_fu_58339_p1.read().is_01() || !add_ln703_2352_fu_58317_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1399_fu_58339_p1.read()) + sc_biguint<15>(add_ln703_2352_fu_58317_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2356_fu_58349_p2() {
    add_ln703_2356_fu_58349_p2 = (!sext_ln203_525_fu_38491_p1.read().is_01() || !sext_ln1118_309_fu_37360_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_525_fu_38491_p1.read()) + sc_bigint<11>(sext_ln1118_309_fu_37360_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2357_fu_58359_p2() {
    add_ln703_2357_fu_58359_p2 = (!sext_ln703_1400_fu_58355_p1.read().is_01() || !zext_ln203_342_fu_38551_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1400_fu_58355_p1.read()) + sc_biguint<12>(zext_ln203_342_fu_38551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2358_fu_58369_p2() {
    add_ln703_2358_fu_58369_p2 = (!zext_ln1118_890_reg_68141.read().is_01() || !zext_ln708_463_fu_35760_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_890_reg_68141.read()) + sc_biguint<10>(zext_ln708_463_fu_35760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2359_fu_58378_p2() {
    add_ln703_2359_fu_58378_p2 = (!zext_ln703_486_fu_58374_p1.read().is_01() || !sext_ln203_524_fu_38471_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_486_fu_58374_p1.read()) + sc_bigint<11>(sext_ln203_524_fu_38471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_235_fu_16982_p2() {
    add_ln703_235_fu_16982_p2 = (!sext_ln703_203_fu_16978_p1.read().is_01() || !sext_ln703_201_fu_16968_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_203_fu_16978_p1.read()) + sc_bigint<14>(sext_ln703_201_fu_16968_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2360_fu_58388_p2() {
    add_ln703_2360_fu_58388_p2 = (!sext_ln703_1402_fu_58384_p1.read().is_01() || !sext_ln703_1401_fu_58365_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1402_fu_58384_p1.read()) + sc_bigint<13>(sext_ln703_1401_fu_58365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2362_fu_22706_p2() {
    add_ln703_2362_fu_22706_p2 = (!sext_ln203_404_fu_9496_p1.read().is_01() || !ap_const_lv12_E80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_404_fu_9496_p1.read()) + sc_bigint<12>(ap_const_lv12_E80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2363_fu_22716_p2() {
    add_ln703_2363_fu_22716_p2 = (!sext_ln703_316_fu_22712_p1.read().is_01() || !sext_ln203_532_fu_12104_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_316_fu_22712_p1.read()) + sc_bigint<13>(sext_ln203_532_fu_12104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2364_fu_22722_p2() {
    add_ln703_2364_fu_22722_p2 = (!zext_ln708_833_fu_8818_p1.read().is_01() || !zext_ln708_849_fu_9586_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_833_fu_8818_p1.read()) + sc_biguint<8>(zext_ln708_849_fu_9586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2365_fu_22732_p2() {
    add_ln703_2365_fu_22732_p2 = (!zext_ln703_487_fu_22728_p1.read().is_01() || !sext_ln1118_318_fu_11790_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_487_fu_22728_p1.read()) + sc_bigint<12>(sext_ln1118_318_fu_11790_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2366_fu_22742_p2() {
    add_ln703_2366_fu_22742_p2 = (!sext_ln703_1405_fu_22738_p1.read().is_01() || !add_ln703_2363_fu_22716_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1405_fu_22738_p1.read()) + sc_biguint<13>(add_ln703_2363_fu_22716_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2367_fu_22752_p2() {
    add_ln703_2367_fu_22752_p2 = (!sext_ln703_317_fu_22748_p1.read().is_01() || !sext_ln203_493_fu_11826_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_317_fu_22748_p1.read()) + sc_bigint<14>(sext_ln203_493_fu_11826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2368_fu_22758_p2() {
    add_ln703_2368_fu_22758_p2 = (!sext_ln708_148_fu_10758_p1.read().is_01() || !zext_ln1116_214_fu_11856_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_148_fu_10758_p1.read()) + sc_biguint<12>(zext_ln1116_214_fu_11856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2369_fu_22768_p2() {
    add_ln703_2369_fu_22768_p2 = (!sext_ln703_1406_fu_22764_p1.read().is_01() || !sext_ln1118_268_fu_9654_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1406_fu_22764_p1.read()) + sc_bigint<13>(sext_ln1118_268_fu_9654_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_236_fu_16988_p2() {
    add_ln703_236_fu_16988_p2 = (!zext_ln708_715_fu_3432_p1.read().is_01() || !zext_ln708_717_fu_3468_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_715_fu_3432_p1.read()) + sc_biguint<11>(zext_ln708_717_fu_3468_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2370_fu_22778_p2() {
    add_ln703_2370_fu_22778_p2 = (!sext_ln703_1407_fu_22774_p1.read().is_01() || !add_ln703_2367_fu_22752_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1407_fu_22774_p1.read()) + sc_biguint<14>(add_ln703_2367_fu_22752_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2371_fu_22784_p2() {
    add_ln703_2371_fu_22784_p2 = (!zext_ln708_891_fu_11840_p1.read().is_01() || !zext_ln708_895_fu_12118_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_891_fu_11840_p1.read()) + sc_biguint<8>(zext_ln708_895_fu_12118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2372_fu_22794_p2() {
    add_ln703_2372_fu_22794_p2 = (!zext_ln703_488_fu_22790_p1.read().is_01() || !lshr_ln708_689_fu_11648_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_488_fu_22790_p1.read()) + sc_biguint<10>(lshr_ln708_689_fu_11648_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2373_fu_22804_p2() {
    add_ln703_2373_fu_22804_p2 = (!zext_ln203_343_fu_12136_p1.read().is_01() || !zext_ln1118_491_fu_9132_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_343_fu_12136_p1.read()) + sc_biguint<9>(zext_ln1118_491_fu_9132_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2374_fu_22810_p2() {
    add_ln703_2374_fu_22810_p2 = (!add_ln703_2373_fu_22804_p2.read().is_01() || !zext_ln203_324_fu_11414_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_2373_fu_22804_p2.read()) + sc_biguint<9>(zext_ln203_324_fu_11414_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2375_fu_22820_p2() {
    add_ln703_2375_fu_22820_p2 = (!zext_ln703_490_fu_22816_p1.read().is_01() || !zext_ln703_489_fu_22800_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_490_fu_22816_p1.read()) + sc_biguint<11>(zext_ln703_489_fu_22800_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2376_fu_22830_p2() {
    add_ln703_2376_fu_22830_p2 = (!zext_ln703_491_fu_22826_p1.read().is_01() || !add_ln703_2370_fu_22778_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_491_fu_22826_p1.read()) + sc_biguint<14>(add_ln703_2370_fu_22778_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2377_fu_58411_p2() {
    add_ln703_2377_fu_58411_p2 = (!sext_ln703_318_fu_58408_p1.read().is_01() || !sext_ln203_534_fu_38579_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_318_fu_58408_p1.read()) + sc_bigint<15>(sext_ln203_534_fu_38579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2378_fu_58417_p2() {
    add_ln703_2378_fu_58417_p2 = (!zext_ln1118_967_fu_38623_p1.read().is_01() || !sext_ln1118_347_fu_38428_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_967_fu_38623_p1.read()) + sc_bigint<11>(sext_ln1118_347_fu_38428_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2379_fu_58427_p2() {
    add_ln703_2379_fu_58427_p2 = (!sext_ln703_1408_fu_58423_p1.read().is_01() || !sext_ln1116_56_fu_37943_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1408_fu_58423_p1.read()) + sc_bigint<12>(sext_ln1116_56_fu_37943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_237_fu_16998_p2() {
    add_ln703_237_fu_16998_p2 = (!zext_ln708_714_fu_3384_p1.read().is_01() || !zext_ln1118_223_fu_3344_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_714_fu_3384_p1.read()) + sc_biguint<10>(zext_ln1118_223_fu_3344_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2380_fu_58437_p2() {
    add_ln703_2380_fu_58437_p2 = (!sext_ln703_1409_fu_58433_p1.read().is_01() || !add_ln703_2377_fu_58411_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1409_fu_58433_p1.read()) + sc_biguint<15>(add_ln703_2377_fu_58411_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2381_fu_58443_p2() {
    add_ln703_2381_fu_58443_p2 = (!zext_ln708_458_fu_35628_p1.read().is_01() || !zext_ln203_287_fu_34979_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_458_fu_35628_p1.read()) + sc_biguint<10>(zext_ln203_287_fu_34979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2382_fu_58453_p2() {
    add_ln703_2382_fu_58453_p2 = (!sext_ln1116_57_fu_38603_p1.read().is_01() || !sext_ln203_430_fu_36578_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_57_fu_38603_p1.read()) + sc_bigint<9>(sext_ln203_430_fu_36578_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2383_fu_58463_p2() {
    add_ln703_2383_fu_58463_p2 = (!sext_ln703_1410_fu_58459_p1.read().is_01() || !sext_ln1118_350_fu_38583_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1410_fu_58459_p1.read()) + sc_bigint<10>(sext_ln1118_350_fu_38583_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2384_fu_58473_p2() {
    add_ln703_2384_fu_58473_p2 = (!sext_ln703_1411_fu_58469_p1.read().is_01() || !zext_ln703_492_fu_58449_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1411_fu_58469_p1.read()) + sc_biguint<12>(zext_ln703_492_fu_58449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2385_fu_58483_p2() {
    add_ln703_2385_fu_58483_p2 = (!sext_ln703_1412_fu_58479_p1.read().is_01() || !add_ln703_2380_fu_58437_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1412_fu_58479_p1.read()) + sc_biguint<15>(add_ln703_2380_fu_58437_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2386_fu_58489_p2() {
    add_ln703_2386_fu_58489_p2 = (!sext_ln203_490_fu_37818_p1.read().is_01() || !sext_ln203_530_fu_38531_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_490_fu_37818_p1.read()) + sc_bigint<12>(sext_ln203_530_fu_38531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2387_fu_58499_p2() {
    add_ln703_2387_fu_58499_p2 = (!sext_ln703_1413_fu_58495_p1.read().is_01() || !add_ln703_2385_fu_58483_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1413_fu_58495_p1.read()) + sc_biguint<15>(add_ln703_2385_fu_58483_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2388_fu_58505_p2() {
    add_ln703_2388_fu_58505_p2 = (!sext_ln203_538_fu_38655_p1.read().is_01() || !sext_ln203_539_fu_38659_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_538_fu_38655_p1.read()) + sc_bigint<9>(sext_ln203_539_fu_38659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2389_fu_58515_p2() {
    add_ln703_2389_fu_58515_p2 = (!zext_ln1118_501_fu_35289_p1.read().is_01() || !zext_ln1118_864_fu_35405_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_501_fu_35289_p1.read()) + sc_biguint<9>(zext_ln1118_864_fu_35405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_238_fu_17008_p2() {
    add_ln703_238_fu_17008_p2 = (!zext_ln703_59_fu_17004_p1.read().is_01() || !sext_ln1116_8_fu_3482_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_59_fu_17004_p1.read()) + sc_bigint<12>(sext_ln1116_8_fu_3482_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2390_fu_58525_p2() {
    add_ln703_2390_fu_58525_p2 = (!zext_ln703_493_fu_58521_p1.read().is_01() || !sext_ln703_1414_fu_58511_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_493_fu_58521_p1.read()) + sc_bigint<11>(sext_ln703_1414_fu_58511_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2393_fu_22840_p2() {
    add_ln703_2393_fu_22840_p2 = (!sext_ln708_179_fu_12156_p1.read().is_01() || !sext_ln1118_339_fu_12052_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_179_fu_12156_p1.read()) + sc_bigint<11>(sext_ln1118_339_fu_12052_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2394_fu_22850_p2() {
    add_ln703_2394_fu_22850_p2 = (!sext_ln703_1417_fu_22846_p1.read().is_01() || !sext_ln703_320_fu_22836_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1417_fu_22846_p1.read()) + sc_bigint<13>(sext_ln703_320_fu_22836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2395_fu_22856_p2() {
    add_ln703_2395_fu_22856_p2 = (!add_ln703_2394_fu_22850_p2.read().is_01() || !sext_ln203_415_fu_10222_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2394_fu_22850_p2.read()) + sc_bigint<13>(sext_ln203_415_fu_10222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2396_fu_22862_p2() {
    add_ln703_2396_fu_22862_p2 = (!zext_ln203_336_fu_11918_p1.read().is_01() || !sext_ln1118_302_fu_10910_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_336_fu_11918_p1.read()) + sc_bigint<11>(sext_ln1118_302_fu_10910_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2397_fu_22872_p2() {
    add_ln703_2397_fu_22872_p2 = (!sext_ln703_1418_fu_22868_p1.read().is_01() || !zext_ln203_344_fu_12160_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1418_fu_22868_p1.read()) + sc_biguint<12>(zext_ln203_344_fu_12160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2398_fu_22882_p2() {
    add_ln703_2398_fu_22882_p2 = (!sext_ln703_1419_fu_22878_p1.read().is_01() || !add_ln703_2395_fu_22856_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1419_fu_22878_p1.read()) + sc_biguint<13>(add_ln703_2395_fu_22856_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2399_fu_22888_p2() {
    add_ln703_2399_fu_22888_p2 = (!sext_ln1118_298_fu_10738_p1.read().is_01() || !zext_ln1116_211_fu_11844_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_298_fu_10738_p1.read()) + sc_biguint<9>(zext_ln1116_211_fu_11844_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_239_fu_17018_p2() {
    add_ln703_239_fu_17018_p2 = (!sext_ln703_204_fu_17014_p1.read().is_01() || !zext_ln703_58_fu_16994_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_204_fu_17014_p1.read()) + sc_biguint<13>(zext_ln703_58_fu_16994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_23_fu_43898_p2() {
    add_ln703_23_fu_43898_p2 = (!sext_ln1116_5_fu_26485_p1.read().is_01() || !zext_ln1116_28_reg_67135.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_5_fu_26485_p1.read()) + sc_biguint<10>(zext_ln1116_28_reg_67135.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2400_fu_22898_p2() {
    add_ln703_2400_fu_22898_p2 = (!sext_ln703_1420_fu_22894_p1.read().is_01() || !sext_ln203_470_fu_11526_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1420_fu_22894_p1.read()) + sc_bigint<10>(sext_ln203_470_fu_11526_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2402_fu_22908_p2() {
    add_ln703_2402_fu_22908_p2 = (!zext_ln703_405_fu_21764_p1.read().is_01() || !zext_ln708_425_fu_8950_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_405_fu_21764_p1.read()) + sc_biguint<10>(zext_ln708_425_fu_8950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2403_fu_22918_p2() {
    add_ln703_2403_fu_22918_p2 = (!zext_ln703_495_fu_22914_p1.read().is_01() || !sext_ln703_1421_fu_22904_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_495_fu_22914_p1.read()) + sc_bigint<12>(sext_ln703_1421_fu_22904_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2404_fu_22928_p2() {
    add_ln703_2404_fu_22928_p2 = (!sext_ln703_1422_fu_22924_p1.read().is_01() || !add_ln703_2398_fu_22882_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1422_fu_22924_p1.read()) + sc_biguint<13>(add_ln703_2398_fu_22882_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2405_fu_58548_p2() {
    add_ln703_2405_fu_58548_p2 = (!zext_ln708_844_fu_35557_p1.read().is_01() || !zext_ln708_870_fu_36940_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_844_fu_35557_p1.read()) + sc_biguint<11>(zext_ln708_870_fu_36940_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2406_fu_58558_p2() {
    add_ln703_2406_fu_58558_p2 = (!zext_ln703_496_fu_58554_p1.read().is_01() || !sext_ln703_1423_fu_58545_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_496_fu_58554_p1.read()) + sc_bigint<14>(sext_ln703_1423_fu_58545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2407_fu_58564_p2() {
    add_ln703_2407_fu_58564_p2 = (!zext_ln708_873_fu_37068_p1.read().is_01() || !zext_ln708_889_fu_37616_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_873_fu_37068_p1.read()) + sc_biguint<11>(zext_ln708_889_fu_37616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2408_fu_58574_p2() {
    add_ln703_2408_fu_58574_p2 = (!sext_ln1118_299_fu_36728_p1.read().is_01() || !zext_ln203_328_fu_37597_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_299_fu_36728_p1.read()) + sc_biguint<11>(zext_ln203_328_fu_37597_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2409_fu_58584_p2() {
    add_ln703_2409_fu_58584_p2 = (!sext_ln703_1424_fu_58580_p1.read().is_01() || !zext_ln703_497_fu_58570_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1424_fu_58580_p1.read()) + sc_biguint<13>(zext_ln703_497_fu_58570_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_240_fu_17028_p2() {
    add_ln703_240_fu_17028_p2 = (!sext_ln703_205_fu_17024_p1.read().is_01() || !add_ln703_235_fu_16982_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_205_fu_17024_p1.read()) + sc_biguint<14>(add_ln703_235_fu_16982_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2410_fu_58594_p2() {
    add_ln703_2410_fu_58594_p2 = (!sext_ln703_1425_fu_58590_p1.read().is_01() || !add_ln703_2406_fu_58558_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1425_fu_58590_p1.read()) + sc_biguint<14>(add_ln703_2406_fu_58558_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2411_fu_58604_p2() {
    add_ln703_2411_fu_58604_p2 = (!sext_ln1116_43_fu_35027_p1.read().is_01() || !sext_ln1118_278_fu_35792_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_43_fu_35027_p1.read()) + sc_bigint<10>(sext_ln1118_278_fu_35792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2412_fu_58614_p2() {
    add_ln703_2412_fu_58614_p2 = (!sext_ln703_1427_fu_58610_p1.read().is_01() || !zext_ln708_452_fu_35475_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1427_fu_58610_p1.read()) + sc_biguint<11>(zext_ln708_452_fu_35475_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2413_fu_58624_p2() {
    add_ln703_2413_fu_58624_p2 = (!sext_ln708_181_fu_38663_p1.read().is_01() || !zext_ln1118_849_fu_35075_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_181_fu_38663_p1.read()) + sc_biguint<10>(zext_ln1118_849_fu_35075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2415_fu_58634_p2() {
    add_ln703_2415_fu_58634_p2 = (!zext_ln703_384_fu_55333_p1.read().is_01() || !sext_ln703_1429_fu_58630_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_384_fu_55333_p1.read()) + sc_bigint<11>(sext_ln703_1429_fu_58630_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2416_fu_58644_p2() {
    add_ln703_2416_fu_58644_p2 = (!sext_ln703_1430_fu_58640_p1.read().is_01() || !sext_ln703_1428_fu_58620_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1430_fu_58640_p1.read()) + sc_bigint<12>(sext_ln703_1428_fu_58620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2417_fu_58654_p2() {
    add_ln703_2417_fu_58654_p2 = (!sext_ln703_1431_fu_58650_p1.read().is_01() || !sext_ln703_1426_fu_58600_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1431_fu_58650_p1.read()) + sc_bigint<15>(sext_ln703_1426_fu_58600_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2418_fu_58660_p2() {
    add_ln703_2418_fu_58660_p2 = (!add_ln703_2417_fu_58654_p2.read().is_01() || !zext_ln203_346_fu_38687_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2417_fu_58654_p2.read()) + sc_biguint<15>(zext_ln203_346_fu_38687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2419_fu_58666_p2() {
    add_ln703_2419_fu_58666_p2 = (!sext_ln203_538_fu_38655_p1.read().is_01() || !sext_ln203_397_fu_35425_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_538_fu_38655_p1.read()) + sc_bigint<9>(sext_ln203_397_fu_35425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_241_fu_45188_p2() {
    add_ln703_241_fu_45188_p2 = (!sext_ln203_9_fu_26918_p1.read().is_01() || !sext_ln203_16_fu_27310_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_9_fu_26918_p1.read()) + sc_bigint<12>(sext_ln203_16_fu_27310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2420_fu_58676_p2() {
    add_ln703_2420_fu_58676_p2 = (!sext_ln703_1432_fu_58672_p1.read().is_01() || !zext_ln203_340_fu_38346_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1432_fu_58672_p1.read()) + sc_biguint<11>(zext_ln203_340_fu_38346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2422_fu_22934_p2() {
    add_ln703_2422_fu_22934_p2 = (!sext_ln203_418_fu_10456_p1.read().is_01() || !sext_ln1116_46_fu_10278_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_418_fu_10456_p1.read()) + sc_bigint<12>(sext_ln1116_46_fu_10278_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2423_fu_58706_p2() {
    add_ln703_2423_fu_58706_p2 = (!sext_ln703_1435_fu_58703_p1.read().is_01() || !or_ln703_16_fu_58696_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1435_fu_58703_p1.read()) + sc_biguint<16>(or_ln703_16_fu_58696_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2424_fu_58712_p2() {
    add_ln703_2424_fu_58712_p2 = (!sext_ln708_159_fu_37384_p1.read().is_01() || !zext_ln1116_214_reg_68415.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_159_fu_37384_p1.read()) + sc_biguint<12>(zext_ln1116_214_reg_68415.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2425_fu_58721_p2() {
    add_ln703_2425_fu_58721_p2 = (!zext_ln708_887_fu_37508_p1.read().is_01() || !zext_ln708_896_fu_38714_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_887_fu_37508_p1.read()) + sc_biguint<11>(zext_ln708_896_fu_38714_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2426_fu_58731_p2() {
    add_ln703_2426_fu_58731_p2 = (!zext_ln703_499_fu_58727_p1.read().is_01() || !sext_ln703_1436_fu_58717_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_499_fu_58727_p1.read()) + sc_bigint<13>(sext_ln703_1436_fu_58717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2427_fu_58741_p2() {
    add_ln703_2427_fu_58741_p2 = (!sext_ln703_1437_fu_58737_p1.read().is_01() || !add_ln703_2423_fu_58706_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1437_fu_58737_p1.read()) + sc_biguint<16>(add_ln703_2423_fu_58706_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2428_fu_58747_p2() {
    add_ln703_2428_fu_58747_p2 = (!zext_ln708_897_fu_38754_p1.read().is_01() || !zext_ln708_863_fu_36802_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_897_fu_38754_p1.read()) + sc_biguint<11>(zext_ln708_863_fu_36802_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2429_fu_58757_p2() {
    add_ln703_2429_fu_58757_p2 = (!zext_ln203_347_fu_38758_p1.read().is_01() || !sext_ln203_548_fu_38691_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_347_fu_38758_p1.read()) + sc_bigint<12>(sext_ln203_548_fu_38691_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_242_fu_45198_p2() {
    add_ln703_242_fu_45198_p2 = (!sext_ln703_208_fu_45194_p1.read().is_01() || !sext_ln703_38_fu_45185_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_208_fu_45194_p1.read()) + sc_bigint<15>(sext_ln703_38_fu_45185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2430_fu_58767_p2() {
    add_ln703_2430_fu_58767_p2 = (!sext_ln703_1438_fu_58763_p1.read().is_01() || !zext_ln703_500_fu_58753_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1438_fu_58763_p1.read()) + sc_biguint<13>(zext_ln703_500_fu_58753_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2431_fu_58777_p2() {
    add_ln703_2431_fu_58777_p2 = (!sext_ln203_551_fu_38734_p1.read().is_01() || !sext_ln708_151_fu_36760_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_551_fu_38734_p1.read()) + sc_bigint<11>(sext_ln708_151_fu_36760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2432_fu_58787_p2() {
    add_ln703_2432_fu_58787_p2 = (!sext_ln203_518_fu_38350_p1.read().is_01() || !zext_ln1116_183_fu_34966_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_518_fu_38350_p1.read()) + sc_biguint<11>(zext_ln1116_183_fu_34966_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2433_fu_58797_p2() {
    add_ln703_2433_fu_58797_p2 = (!sext_ln703_1441_fu_58793_p1.read().is_01() || !sext_ln703_1440_fu_58783_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1441_fu_58793_p1.read()) + sc_bigint<12>(sext_ln703_1440_fu_58783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2434_fu_58807_p2() {
    add_ln703_2434_fu_58807_p2 = (!sext_ln703_1442_fu_58803_p1.read().is_01() || !sext_ln703_1439_fu_58773_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1442_fu_58803_p1.read()) + sc_bigint<14>(sext_ln703_1439_fu_58773_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2435_fu_58817_p2() {
    add_ln703_2435_fu_58817_p2 = (!sext_ln703_1443_fu_58813_p1.read().is_01() || !add_ln703_2427_fu_58741_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1443_fu_58813_p1.read()) + sc_biguint<16>(add_ln703_2427_fu_58741_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2436_fu_58823_p2() {
    add_ln703_2436_fu_58823_p2 = (!zext_ln203_308_fu_36582_p1.read().is_01() || !sext_ln203_423_fu_36443_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_308_fu_36582_p1.read()) + sc_bigint<11>(sext_ln203_423_fu_36443_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2437_fu_58833_p2() {
    add_ln703_2437_fu_58833_p2 = (!sext_ln1116_44_fu_35031_p1.read().is_01() || !zext_ln708_503_reg_68286.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_44_fu_35031_p1.read()) + sc_biguint<11>(zext_ln708_503_reg_68286.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2438_fu_58842_p2() {
    add_ln703_2438_fu_58842_p2 = (!sext_ln703_1445_fu_58838_p1.read().is_01() || !sext_ln703_1444_fu_58829_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1445_fu_58838_p1.read()) + sc_bigint<12>(sext_ln703_1444_fu_58829_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2439_fu_22940_p2() {
    add_ln703_2439_fu_22940_p2 = (!zext_ln203_302_fu_10428_p1.read().is_01() || !sext_ln203_543_fu_12172_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_302_fu_10428_p1.read()) + sc_bigint<11>(sext_ln203_543_fu_12172_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_243_fu_45204_p2() {
    add_ln703_243_fu_45204_p2 = (!zext_ln708_719_fu_28104_p1.read().is_01() || !zext_ln708_689_fu_27274_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_719_fu_28104_p1.read()) + sc_biguint<11>(zext_ln708_689_fu_27274_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2440_fu_22946_p2() {
    add_ln703_2440_fu_22946_p2 = (!sext_ln1118_334_fu_11976_p1.read().is_01() || !zext_ln1118_876_fu_9590_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_334_fu_11976_p1.read()) + sc_biguint<9>(zext_ln1118_876_fu_9590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2441_fu_22956_p2() {
    add_ln703_2441_fu_22956_p2 = (!sext_ln703_1447_fu_22952_p1.read().is_01() || !add_ln703_2439_fu_22940_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1447_fu_22952_p1.read()) + sc_biguint<11>(add_ln703_2439_fu_22940_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2442_fu_58855_p2() {
    add_ln703_2442_fu_58855_p2 = (!sext_ln703_1448_fu_58852_p1.read().is_01() || !sext_ln703_1446_fu_58848_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1448_fu_58852_p1.read()) + sc_bigint<13>(sext_ln703_1446_fu_58848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2443_fu_58861_p2() {
    add_ln703_2443_fu_58861_p2 = (!zext_ln1118_488_reg_67986.read().is_01() || !zext_ln203_319_fu_37263_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_488_reg_67986.read()) + sc_biguint<9>(zext_ln203_319_fu_37263_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2444_fu_58870_p2() {
    add_ln703_2444_fu_58870_p2 = (!zext_ln1116_181_reg_68014.read().is_01() || !zext_ln708_438_fu_34983_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_181_reg_68014.read()) + sc_biguint<9>(zext_ln708_438_fu_34983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2445_fu_58879_p2() {
    add_ln703_2445_fu_58879_p2 = (!zext_ln703_502_fu_58875_p1.read().is_01() || !zext_ln703_501_fu_58866_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_502_fu_58875_p1.read()) + sc_biguint<10>(zext_ln703_501_fu_58866_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2446_fu_58889_p2() {
    add_ln703_2446_fu_58889_p2 = (!zext_ln708_857_fu_36482_p1.read().is_01() || !zext_ln708_845_fu_35561_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_857_fu_36482_p1.read()) + sc_biguint<8>(zext_ln708_845_fu_35561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2447_fu_58899_p2() {
    add_ln703_2447_fu_58899_p2 = (!zext_ln1116_190_fu_35110_p1.read().is_01() || !zext_ln1118_859_fu_35253_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_190_fu_35110_p1.read()) + sc_biguint<9>(zext_ln1118_859_fu_35253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2448_fu_58909_p2() {
    add_ln703_2448_fu_58909_p2 = (!zext_ln703_505_fu_58905_p1.read().is_01() || !zext_ln703_504_fu_58895_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_505_fu_58905_p1.read()) + sc_biguint<10>(zext_ln703_504_fu_58895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2449_fu_58919_p2() {
    add_ln703_2449_fu_58919_p2 = (!zext_ln703_506_fu_58915_p1.read().is_01() || !zext_ln703_503_fu_58885_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_506_fu_58915_p1.read()) + sc_biguint<11>(zext_ln703_503_fu_58885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_244_fu_45214_p2() {
    add_ln703_244_fu_45214_p2 = (!sext_ln203_47_fu_28135_p1.read().is_01() || !zext_ln203_39_fu_27844_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_47_fu_28135_p1.read()) + sc_biguint<11>(zext_ln203_39_fu_27844_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2450_fu_58929_p2() {
    add_ln703_2450_fu_58929_p2 = (!zext_ln703_507_fu_58925_p1.read().is_01() || !add_ln703_2442_fu_58855_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_507_fu_58925_p1.read()) + sc_biguint<13>(add_ln703_2442_fu_58855_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2452_fu_22962_p2() {
    add_ln703_2452_fu_22962_p2 = (!sext_ln203_553_fu_12192_p1.read().is_01() || !ap_const_lv12_C80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_553_fu_12192_p1.read()) + sc_bigint<12>(ap_const_lv12_C80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2453_fu_22972_p2() {
    add_ln703_2453_fu_22972_p2 = (!sext_ln703_324_fu_22968_p1.read().is_01() || !sext_ln203_532_fu_12104_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_324_fu_22968_p1.read()) + sc_bigint<13>(sext_ln203_532_fu_12104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2454_fu_22978_p2() {
    add_ln703_2454_fu_22978_p2 = (!sext_ln203_478_fu_11698_p1.read().is_01() || !zext_ln708_422_fu_8804_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_478_fu_11698_p1.read()) + sc_biguint<11>(zext_ln708_422_fu_8804_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2455_fu_22988_p2() {
    add_ln703_2455_fu_22988_p2 = (!sext_ln703_1450_fu_22984_p1.read().is_01() || !add_ln703_2453_fu_22972_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1450_fu_22984_p1.read()) + sc_biguint<13>(add_ln703_2453_fu_22972_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2456_fu_22998_p2() {
    add_ln703_2456_fu_22998_p2 = (!sext_ln708_156_fu_10944_p1.read().is_01() || !sext_ln708_182_fu_12222_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_156_fu_10944_p1.read()) + sc_bigint<12>(sext_ln708_182_fu_12222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2457_fu_23008_p2() {
    add_ln703_2457_fu_23008_p2 = (!sext_ln703_1451_fu_23004_p1.read().is_01() || !sext_ln703_325_fu_22994_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1451_fu_23004_p1.read()) + sc_bigint<14>(sext_ln703_325_fu_22994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2458_fu_23014_p2() {
    add_ln703_2458_fu_23014_p2 = (!zext_ln1118_968_fu_12242_p1.read().is_01() || !sext_ln708_142_fu_10002_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_968_fu_12242_p1.read()) + sc_bigint<12>(sext_ln708_142_fu_10002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2459_fu_23024_p2() {
    add_ln703_2459_fu_23024_p2 = (!sext_ln703_1452_fu_23020_p1.read().is_01() || !zext_ln708_428_fu_9026_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1452_fu_23020_p1.read()) + sc_biguint<13>(zext_ln708_428_fu_9026_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_245_fu_45224_p2() {
    add_ln703_245_fu_45224_p2 = (!sext_ln703_209_fu_45220_p1.read().is_01() || !zext_ln703_60_fu_45210_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_209_fu_45220_p1.read()) + sc_biguint<13>(zext_ln703_60_fu_45210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2460_fu_58948_p2() {
    add_ln703_2460_fu_58948_p2 = (!sext_ln703_1453_fu_58945_p1.read().is_01() || !add_ln703_2457_reg_69761.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1453_fu_58945_p1.read()) + sc_biguint<14>(add_ln703_2457_reg_69761.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2461_fu_58953_p2() {
    add_ln703_2461_fu_58953_p2 = (!sext_ln1118_281_reg_68168.read().is_01() || !zext_ln1118_925_fu_36648_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_281_reg_68168.read()) + sc_biguint<12>(zext_ln1118_925_fu_36648_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2462_fu_58962_p2() {
    add_ln703_2462_fu_58962_p2 = (!sext_ln703_1454_fu_58958_p1.read().is_01() || !add_ln703_2460_fu_58948_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1454_fu_58958_p1.read()) + sc_biguint<14>(add_ln703_2460_fu_58948_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2463_fu_58972_p2() {
    add_ln703_2463_fu_58972_p2 = (!sext_ln708_168_fu_37594_p1.read().is_01() || !sext_ln1118_345_fu_38369_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_168_fu_37594_p1.read()) + sc_bigint<11>(sext_ln1118_345_fu_38369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2464_fu_58982_p2() {
    add_ln703_2464_fu_58982_p2 = (!sext_ln703_1456_fu_58978_p1.read().is_01() || !zext_ln1116_188_fu_35071_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1456_fu_58978_p1.read()) + sc_biguint<12>(zext_ln1116_188_fu_35071_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2465_fu_58992_p2() {
    add_ln703_2465_fu_58992_p2 = (!sext_ln703_1457_fu_58988_p1.read().is_01() || !sext_ln703_1455_fu_58968_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1457_fu_58988_p1.read()) + sc_bigint<15>(sext_ln703_1455_fu_58968_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2466_fu_58998_p2() {
    add_ln703_2466_fu_58998_p2 = (!sext_ln1118_348_fu_38432_p1.read().is_01() || !sext_ln203_556_fu_38782_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_348_fu_38432_p1.read()) + sc_bigint<10>(sext_ln203_556_fu_38782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2467_fu_59008_p2() {
    add_ln703_2467_fu_59008_p2 = (!sext_ln703_1458_fu_59004_p1.read().is_01() || !sext_ln203_521_fu_38389_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1458_fu_59004_p1.read()) + sc_bigint<11>(sext_ln203_521_fu_38389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2468_fu_23030_p2() {
    add_ln703_2468_fu_23030_p2 = (!zext_ln708_883_fu_11410_p1.read().is_01() || !zext_ln708_898_fu_12256_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_883_fu_11410_p1.read()) + sc_biguint<8>(zext_ln708_898_fu_12256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2469_fu_59017_p2() {
    add_ln703_2469_fu_59017_p2 = (!zext_ln703_508_fu_59014_p1.read().is_01() || !sext_ln1118_360_fu_38806_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_508_fu_59014_p1.read()) + sc_bigint<10>(sext_ln1118_360_fu_38806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_246_fu_45234_p2() {
    add_ln703_246_fu_45234_p2 = (!sext_ln703_212_fu_45230_p1.read().is_01() || !add_ln703_242_fu_45198_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_212_fu_45230_p1.read()) + sc_biguint<15>(add_ln703_242_fu_45198_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2470_fu_59027_p2() {
    add_ln703_2470_fu_59027_p2 = (!sext_ln703_1459_fu_59023_p1.read().is_01() || !add_ln703_2467_fu_59008_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1459_fu_59023_p1.read()) + sc_biguint<11>(add_ln703_2467_fu_59008_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2471_fu_59037_p2() {
    add_ln703_2471_fu_59037_p2 = (!sext_ln703_1460_fu_59033_p1.read().is_01() || !add_ln703_2465_fu_58992_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1460_fu_59033_p1.read()) + sc_biguint<15>(add_ln703_2465_fu_58992_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2472_fu_59043_p2() {
    add_ln703_2472_fu_59043_p2 = (!add_ln703_2471_fu_59037_p2.read().is_01() || !sext_ln203_558_fu_38830_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2471_fu_59037_p2.read()) + sc_bigint<15>(sext_ln203_558_fu_38830_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2473_fu_59049_p2() {
    add_ln703_2473_fu_59049_p2 = (!zext_ln708_458_fu_35628_p1.read().is_01() || !zext_ln1118_861_fu_35301_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_458_fu_35628_p1.read()) + sc_biguint<10>(zext_ln1118_861_fu_35301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2474_fu_59059_p2() {
    add_ln703_2474_fu_59059_p2 = (!zext_ln703_509_fu_59055_p1.read().is_01() || !sext_ln203_508_fu_38191_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_509_fu_59055_p1.read()) + sc_bigint<12>(sext_ln203_508_fu_38191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2475_fu_59069_p2() {
    add_ln703_2475_fu_59069_p2 = (!sext_ln703_1461_fu_59065_p1.read().is_01() || !add_ln703_2472_fu_59043_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1461_fu_59065_p1.read()) + sc_biguint<15>(add_ln703_2472_fu_59043_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2476_fu_59075_p2() {
    add_ln703_2476_fu_59075_p2 = (!zext_ln708_494_fu_36782_p1.read().is_01() || !sext_ln203_557_fu_38826_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_494_fu_36782_p1.read()) + sc_bigint<11>(sext_ln203_557_fu_38826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2477_fu_59081_p2() {
    add_ln703_2477_fu_59081_p2 = (!zext_ln708_888_fu_37518_p1.read().is_01() || !zext_ln708_862_fu_36774_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_888_fu_37518_p1.read()) + sc_biguint<8>(zext_ln708_862_fu_36774_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2478_fu_59091_p2() {
    add_ln703_2478_fu_59091_p2 = (!zext_ln703_510_fu_59087_p1.read().is_01() || !sext_ln203_560_fu_38834_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_510_fu_59087_p1.read()) + sc_bigint<10>(sext_ln203_560_fu_38834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2479_fu_59101_p2() {
    add_ln703_2479_fu_59101_p2 = (!sext_ln703_1462_fu_59097_p1.read().is_01() || !add_ln703_2476_fu_59075_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1462_fu_59097_p1.read()) + sc_biguint<11>(add_ln703_2476_fu_59075_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_247_fu_45240_p2() {
    add_ln703_247_fu_45240_p2 = (!sext_ln203_17_fu_27330_p1.read().is_01() || !zext_ln203_13_fu_26731_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_17_fu_27330_p1.read()) + sc_biguint<9>(zext_ln203_13_fu_26731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2481_fu_23036_p2() {
    add_ln703_2481_fu_23036_p2 = (!sext_ln203_404_fu_9496_p1.read().is_01() || !ap_const_lv12_F00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_404_fu_9496_p1.read()) + sc_bigint<12>(ap_const_lv12_F00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2482_fu_23046_p2() {
    add_ln703_2482_fu_23046_p2 = (!sext_ln703_328_fu_23042_p1.read().is_01() || !sext_ln203_532_fu_12104_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_328_fu_23042_p1.read()) + sc_bigint<13>(sext_ln203_532_fu_12104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2483_fu_23052_p2() {
    add_ln703_2483_fu_23052_p2 = (!sext_ln1118_280_fu_9978_p1.read().is_01() || !zext_ln1116_198_fu_10230_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_280_fu_9978_p1.read()) + sc_biguint<12>(zext_ln1116_198_fu_10230_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2484_fu_23062_p2() {
    add_ln703_2484_fu_23062_p2 = (!sext_ln703_1465_fu_23058_p1.read().is_01() || !add_ln703_2482_fu_23046_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1465_fu_23058_p1.read()) + sc_biguint<13>(add_ln703_2482_fu_23046_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2485_fu_23072_p2() {
    add_ln703_2485_fu_23072_p2 = (!sext_ln703_329_fu_23068_p1.read().is_01() || !sext_ln203_563_fu_12284_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_329_fu_23068_p1.read()) + sc_bigint<14>(sext_ln203_563_fu_12284_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2486_fu_23078_p2() {
    add_ln703_2486_fu_23078_p2 = (!sext_ln203_460_fu_11190_p1.read().is_01() || !sext_ln1118_362_fu_12260_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_460_fu_11190_p1.read()) + sc_bigint<9>(sext_ln1118_362_fu_12260_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2487_fu_23088_p2() {
    add_ln703_2487_fu_23088_p2 = (!sext_ln703_1466_fu_23084_p1.read().is_01() || !add_ln703_2485_fu_23072_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1466_fu_23084_p1.read()) + sc_biguint<14>(add_ln703_2485_fu_23072_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2488_fu_23094_p2() {
    add_ln703_2488_fu_23094_p2 = (!sext_ln708_183_fu_12264_p1.read().is_01() || !zext_ln1118_834_fu_8902_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_183_fu_12264_p1.read()) + sc_biguint<10>(zext_ln1118_834_fu_8902_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2489_fu_23104_p2() {
    add_ln703_2489_fu_23104_p2 = (!zext_ln708_471_fu_10364_p1.read().is_01() || !zext_ln203_324_fu_11414_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_471_fu_10364_p1.read()) + sc_biguint<9>(zext_ln203_324_fu_11414_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_248_fu_45250_p2() {
    add_ln703_248_fu_45250_p2 = (!sext_ln703_213_fu_45246_p1.read().is_01() || !sext_ln708_2_fu_26780_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_213_fu_45246_p1.read()) + sc_bigint<10>(sext_ln708_2_fu_26780_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2490_fu_23114_p2() {
    add_ln703_2490_fu_23114_p2 = (!zext_ln703_511_fu_23110_p1.read().is_01() || !zext_ln708_429_fu_9030_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_511_fu_23110_p1.read()) + sc_biguint<10>(zext_ln708_429_fu_9030_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2491_fu_23124_p2() {
    add_ln703_2491_fu_23124_p2 = (!zext_ln703_512_fu_23120_p1.read().is_01() || !sext_ln703_1467_fu_23100_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_512_fu_23120_p1.read()) + sc_bigint<11>(sext_ln703_1467_fu_23100_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2492_fu_59124_p2() {
    add_ln703_2492_fu_59124_p2 = (!sext_ln703_1468_fu_59121_p1.read().is_01() || !add_ln703_2487_reg_69776.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1468_fu_59121_p1.read()) + sc_biguint<14>(add_ln703_2487_reg_69776.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2493_fu_59129_p2() {
    add_ln703_2493_fu_59129_p2 = (!zext_ln203_299_fu_35831_p1.read().is_01() || !sext_ln1118_363_fu_38848_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_299_fu_35831_p1.read()) + sc_bigint<12>(sext_ln1118_363_fu_38848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2494_fu_59139_p2() {
    add_ln703_2494_fu_59139_p2 = (!sext_ln703_1469_fu_59135_p1.read().is_01() || !add_ln703_2492_fu_59124_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1469_fu_59135_p1.read()) + sc_biguint<14>(add_ln703_2492_fu_59124_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2495_fu_59149_p2() {
    add_ln703_2495_fu_59149_p2 = (!sext_ln708_185_fu_38862_p1.read().is_01() || !sext_ln203_564_fu_38882_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_185_fu_38862_p1.read()) + sc_bigint<11>(sext_ln203_564_fu_38882_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2496_fu_59159_p2() {
    add_ln703_2496_fu_59159_p2 = (!sext_ln703_1471_fu_59155_p1.read().is_01() || !sext_ln203_439_fu_36851_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1471_fu_59155_p1.read()) + sc_bigint<12>(sext_ln203_439_fu_36851_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2497_fu_59169_p2() {
    add_ln703_2497_fu_59169_p2 = (!sext_ln703_1472_fu_59165_p1.read().is_01() || !sext_ln703_1470_fu_59145_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1472_fu_59165_p1.read()) + sc_bigint<15>(sext_ln703_1470_fu_59145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2498_fu_59175_p2() {
    add_ln703_2498_fu_59175_p2 = (!zext_ln1118_915_fu_36208_p1.read().is_01() || !zext_ln1118_955_fu_38042_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_915_fu_36208_p1.read()) + sc_biguint<10>(zext_ln1118_955_fu_38042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2499_fu_59185_p2() {
    add_ln703_2499_fu_59185_p2 = (!zext_ln703_513_fu_59181_p1.read().is_01() || !zext_ln1116_216_fu_37916_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_513_fu_59181_p1.read()) + sc_biguint<11>(zext_ln1116_216_fu_37916_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_249_fu_45260_p2() {
    add_ln703_249_fu_45260_p2 = (!zext_ln1116_40_fu_28108_p1.read().is_01() || !zext_ln1118_95_fu_26734_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_40_fu_28108_p1.read()) + sc_biguint<9>(zext_ln1118_95_fu_26734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_24_fu_43907_p2() {
    add_ln703_24_fu_43907_p2 = (!zext_ln1116_31_fu_26274_p1.read().is_01() || !zext_ln1116_33_fu_26545_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_31_fu_26274_p1.read()) + sc_biguint<9>(zext_ln1116_33_fu_26545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2500_fu_59195_p2() {
    add_ln703_2500_fu_59195_p2 = (!zext_ln708_456_fu_35624_p1.read().is_01() || !sext_ln708_149_fu_36668_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_456_fu_35624_p1.read()) + sc_bigint<11>(sext_ln708_149_fu_36668_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2501_fu_59205_p2() {
    add_ln703_2501_fu_59205_p2 = (!zext_ln708_442_fu_35078_p1.read().is_01() || !zext_ln1118_501_fu_35289_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_442_fu_35078_p1.read()) + sc_biguint<9>(zext_ln1118_501_fu_35289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2502_fu_59215_p2() {
    add_ln703_2502_fu_59215_p2 = (!zext_ln703_515_fu_59211_p1.read().is_01() || !sext_ln703_1473_fu_59201_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_515_fu_59211_p1.read()) + sc_bigint<12>(sext_ln703_1473_fu_59201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2503_fu_59225_p2() {
    add_ln703_2503_fu_59225_p2 = (!sext_ln703_1474_fu_59221_p1.read().is_01() || !zext_ln703_514_fu_59191_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1474_fu_59221_p1.read()) + sc_biguint<13>(zext_ln703_514_fu_59191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2504_fu_59235_p2() {
    add_ln703_2504_fu_59235_p2 = (!sext_ln703_1475_fu_59231_p1.read().is_01() || !add_ln703_2497_fu_59169_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1475_fu_59231_p1.read()) + sc_biguint<15>(add_ln703_2497_fu_59169_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2505_fu_59241_p2() {
    add_ln703_2505_fu_59241_p2 = (!add_ln703_2504_fu_59235_p2.read().is_01() || !sext_ln203_528_fu_38499_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2504_fu_59235_p2.read()) + sc_bigint<15>(sext_ln203_528_fu_38499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2506_fu_59247_p2() {
    add_ln703_2506_fu_59247_p2 = (!zext_ln203_348_fu_38902_p1.read().is_01() || !sext_ln203_472_fu_37587_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_348_fu_38902_p1.read()) + sc_bigint<11>(sext_ln203_472_fu_37587_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2508_fu_23130_p2() {
    add_ln703_2508_fu_23130_p2 = (!lshr_ln708_639_fu_10188_p4.read().is_01() || !ap_const_lv9_180.is_01())? sc_lv<9>(): (sc_biguint<9>(lshr_ln708_639_fu_10188_p4.read()) + sc_bigint<9>(ap_const_lv9_180));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2509_fu_23140_p2() {
    add_ln703_2509_fu_23140_p2 = (!sext_ln203_457_fu_11172_p1.read().is_01() || !sext_ln703_1478_fu_23136_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_457_fu_11172_p1.read()) + sc_bigint<11>(sext_ln703_1478_fu_23136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_250_fu_45270_p2() {
    add_ln703_250_fu_45270_p2 = (!zext_ln708_31_fu_26242_p1.read().is_01() || !zext_ln708_39_fu_26501_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_31_fu_26242_p1.read()) + sc_biguint<9>(zext_ln708_39_fu_26501_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2510_fu_23146_p2() {
    add_ln703_2510_fu_23146_p2 = (!zext_ln708_899_fu_12298_p1.read().is_01() || !zext_ln708_849_fu_9586_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_899_fu_12298_p1.read()) + sc_biguint<8>(zext_ln708_849_fu_9586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2511_fu_23156_p2() {
    add_ln703_2511_fu_23156_p2 = (!zext_ln703_516_fu_23152_p1.read().is_01() || !add_ln703_2509_fu_23140_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_516_fu_23152_p1.read()) + sc_biguint<11>(add_ln703_2509_fu_23140_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2512_fu_23166_p2() {
    add_ln703_2512_fu_23166_p2 = (!sext_ln1118_267_fu_9622_p1.read().is_01() || !sext_ln1118_333_fu_11972_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_267_fu_9622_p1.read()) + sc_bigint<10>(sext_ln1118_333_fu_11972_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2513_fu_23176_p2() {
    add_ln703_2513_fu_23176_p2 = (!sext_ln703_1480_fu_23172_p1.read().is_01() || !sext_ln703_1479_fu_23162_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1480_fu_23172_p1.read()) + sc_bigint<12>(sext_ln703_1479_fu_23162_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2514_fu_23182_p2() {
    add_ln703_2514_fu_23182_p2 = (!sext_ln203_422_fu_10524_p1.read().is_01() || !sext_ln203_409_fu_10090_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_422_fu_10524_p1.read()) + sc_bigint<11>(sext_ln203_409_fu_10090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2515_fu_23192_p2() {
    add_ln703_2515_fu_23192_p2 = (!sext_ln703_1481_fu_23188_p1.read().is_01() || !add_ln703_2513_fu_23176_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1481_fu_23188_p1.read()) + sc_biguint<12>(add_ln703_2513_fu_23176_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2516_fu_23202_p2() {
    add_ln703_2516_fu_23202_p2 = (!sext_ln1118_352_fu_12164_p1.read().is_01() || !zext_ln203_324_fu_11414_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_352_fu_12164_p1.read()) + sc_biguint<9>(zext_ln203_324_fu_11414_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2517_fu_23212_p2() {
    add_ln703_2517_fu_23212_p2 = (!sext_ln703_1483_fu_23208_p1.read().is_01() || !sext_ln1118_316_fu_11618_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1483_fu_23208_p1.read()) + sc_bigint<10>(sext_ln1118_316_fu_11618_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2518_fu_23222_p2() {
    add_ln703_2518_fu_23222_p2 = (!sext_ln703_1484_fu_23218_p1.read().is_01() || !sext_ln703_1482_fu_23198_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1484_fu_23218_p1.read()) + sc_bigint<13>(sext_ln703_1482_fu_23198_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2519_fu_59267_p2() {
    add_ln703_2519_fu_59267_p2 = (!add_ln703_2518_reg_69786.read().is_01() || !sext_ln1118_367_fu_38909_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2518_reg_69786.read()) + sc_bigint<13>(sext_ln1118_367_fu_38909_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_251_fu_45280_p2() {
    add_ln703_251_fu_45280_p2 = (!zext_ln703_62_fu_45276_p1.read().is_01() || !zext_ln703_61_fu_45266_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_62_fu_45276_p1.read()) + sc_biguint<10>(zext_ln703_61_fu_45266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2520_fu_59272_p2() {
    add_ln703_2520_fu_59272_p2 = (!sext_ln1118_325_fu_38062_p1.read().is_01() || !sext_ln1118_348_fu_38432_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_325_fu_38062_p1.read()) + sc_bigint<10>(sext_ln1118_348_fu_38432_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2521_fu_59282_p2() {
    add_ln703_2521_fu_59282_p2 = (!sext_ln703_1485_fu_59278_p1.read().is_01() || !sext_ln708_187_fu_38912_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1485_fu_59278_p1.read()) + sc_bigint<11>(sext_ln708_187_fu_38912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2522_fu_59292_p2() {
    add_ln703_2522_fu_59292_p2 = (!sext_ln703_1486_fu_59288_p1.read().is_01() || !add_ln703_2519_fu_59267_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1486_fu_59288_p1.read()) + sc_biguint<13>(add_ln703_2519_fu_59267_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2523_fu_59302_p2() {
    add_ln703_2523_fu_59302_p2 = (!sext_ln1118_359_fu_38802_p1.read().is_01() || !sext_ln203_565_fu_38919_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_359_fu_38802_p1.read()) + sc_bigint<9>(sext_ln203_565_fu_38919_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2524_fu_59312_p2() {
    add_ln703_2524_fu_59312_p2 = (!sext_ln703_1488_fu_59308_p1.read().is_01() || !sext_ln203_556_fu_38782_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1488_fu_59308_p1.read()) + sc_bigint<10>(sext_ln203_556_fu_38782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2525_fu_59322_p2() {
    add_ln703_2525_fu_59322_p2 = (!zext_ln203_349_fu_38915_p1.read().is_01() || !zext_ln1118_850_fu_35117_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_349_fu_38915_p1.read()) + sc_biguint<9>(zext_ln1118_850_fu_35117_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2526_fu_59332_p2() {
    add_ln703_2526_fu_59332_p2 = (!zext_ln703_517_fu_59328_p1.read().is_01() || !sext_ln708_177_fu_38627_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_517_fu_59328_p1.read()) + sc_bigint<10>(sext_ln708_177_fu_38627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2527_fu_59342_p2() {
    add_ln703_2527_fu_59342_p2 = (!sext_ln703_1490_fu_59338_p1.read().is_01() || !sext_ln703_1489_fu_59318_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1490_fu_59338_p1.read()) + sc_bigint<11>(sext_ln703_1489_fu_59318_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2528_fu_59352_p2() {
    add_ln703_2528_fu_59352_p2 = (!sext_ln703_1491_fu_59348_p1.read().is_01() || !sext_ln703_1487_fu_59298_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1491_fu_59348_p1.read()) + sc_bigint<14>(sext_ln703_1487_fu_59298_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2529_fu_59358_p2() {
    add_ln703_2529_fu_59358_p2 = (!sext_ln203_525_fu_38491_p1.read().is_01() || !sext_ln203_566_fu_38923_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_525_fu_38491_p1.read()) + sc_bigint<11>(sext_ln203_566_fu_38923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_252_fu_45290_p2() {
    add_ln703_252_fu_45290_p2 = (!zext_ln703_63_fu_45286_p1.read().is_01() || !sext_ln703_214_fu_45256_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_63_fu_45286_p1.read()) + sc_bigint<12>(sext_ln703_214_fu_45256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2530_fu_59368_p2() {
    add_ln703_2530_fu_59368_p2 = (!sext_ln703_1492_fu_59364_p1.read().is_01() || !add_ln703_2528_fu_59352_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1492_fu_59364_p1.read()) + sc_biguint<14>(add_ln703_2528_fu_59352_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2531_fu_59374_p2() {
    add_ln703_2531_fu_59374_p2 = (!zext_ln708_847_fu_35692_p1.read().is_01() || !zext_ln708_880_fu_37412_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_847_fu_35692_p1.read()) + sc_biguint<8>(zext_ln708_880_fu_37412_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2532_fu_59384_p2() {
    add_ln703_2532_fu_59384_p2 = (!zext_ln703_518_fu_59380_p1.read().is_01() || !sext_ln203_537_fu_38651_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_518_fu_59380_p1.read()) + sc_bigint<10>(sext_ln203_537_fu_38651_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2534_fu_23228_p2() {
    add_ln703_2534_fu_23228_p2 = (!lshr_ln708_621_fu_9262_p4.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_biguint<10>(lshr_ln708_621_fu_9262_p4.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2535_fu_23238_p2() {
    add_ln703_2535_fu_23238_p2 = (!sext_ln703_1495_fu_23234_p1.read().is_01() || !zext_ln708_422_fu_8804_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1495_fu_23234_p1.read()) + sc_biguint<11>(zext_ln708_422_fu_8804_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2536_fu_23248_p2() {
    add_ln703_2536_fu_23248_p2 = (!sext_ln703_1496_fu_23244_p1.read().is_01() || !sext_ln203_473_fu_11560_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1496_fu_23244_p1.read()) + sc_bigint<12>(sext_ln203_473_fu_11560_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2537_fu_23258_p2() {
    add_ln703_2537_fu_23258_p2 = (!sext_ln1118_318_fu_11790_p1.read().is_01() || !sext_ln203_567_fu_12328_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_318_fu_11790_p1.read()) + sc_bigint<12>(sext_ln203_567_fu_12328_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2538_fu_23268_p2() {
    add_ln703_2538_fu_23268_p2 = (!sext_ln703_1497_fu_23264_p1.read().is_01() || !sext_ln703_338_fu_23254_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1497_fu_23264_p1.read()) + sc_bigint<13>(sext_ln703_338_fu_23254_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2539_fu_59407_p2() {
    add_ln703_2539_fu_59407_p2 = (!sext_ln708_145_reg_68194.read().is_01() || !zext_ln1118_946_fu_37591_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_145_reg_68194.read()) + sc_biguint<12>(zext_ln1118_946_fu_37591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_253_fu_45300_p2() {
    add_ln703_253_fu_45300_p2 = (!sext_ln703_215_fu_45296_p1.read().is_01() || !add_ln703_246_fu_45234_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_215_fu_45296_p1.read()) + sc_biguint<15>(add_ln703_246_fu_45234_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2540_fu_59416_p2() {
    add_ln703_2540_fu_59416_p2 = (!sext_ln703_1498_fu_59412_p1.read().is_01() || !sext_ln703_339_fu_59404_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1498_fu_59412_p1.read()) + sc_bigint<14>(sext_ln703_339_fu_59404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2541_fu_23274_p2() {
    add_ln703_2541_fu_23274_p2 = (!zext_ln1118_880_fu_9724_p1.read().is_01() || !sext_ln708_189_fu_12332_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_880_fu_9724_p1.read()) + sc_bigint<11>(sext_ln708_189_fu_12332_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2542_fu_23280_p2() {
    add_ln703_2542_fu_23280_p2 = (!sext_ln1118_369_fu_12336_p1.read().is_01() || !zext_ln1118_945_fu_11598_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_369_fu_12336_p1.read()) + sc_biguint<9>(zext_ln1118_945_fu_11598_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2543_fu_23290_p2() {
    add_ln703_2543_fu_23290_p2 = (!sext_ln703_1499_fu_23286_p1.read().is_01() || !add_ln703_2541_fu_23274_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1499_fu_23286_p1.read()) + sc_biguint<11>(add_ln703_2541_fu_23274_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2544_fu_59425_p2() {
    add_ln703_2544_fu_59425_p2 = (!sext_ln703_1500_fu_59422_p1.read().is_01() || !add_ln703_2540_fu_59416_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1500_fu_59422_p1.read()) + sc_biguint<14>(add_ln703_2540_fu_59416_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2545_fu_59431_p2() {
    add_ln703_2545_fu_59431_p2 = (!add_ln703_2544_fu_59425_p2.read().is_01() || !sext_ln1118_323_fu_38031_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2544_fu_59425_p2.read()) + sc_bigint<14>(sext_ln1118_323_fu_38031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2546_fu_59441_p2() {
    add_ln703_2546_fu_59441_p2 = (!sext_ln708_168_fu_37594_p1.read().is_01() || !sext_ln203_452_fu_37136_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_168_fu_37594_p1.read()) + sc_bigint<11>(sext_ln203_452_fu_37136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2547_fu_59451_p2() {
    add_ln703_2547_fu_59451_p2 = (!sext_ln703_1502_fu_59447_p1.read().is_01() || !sext_ln708_190_fu_38953_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1502_fu_59447_p1.read()) + sc_bigint<12>(sext_ln708_190_fu_38953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2548_fu_59461_p2() {
    add_ln703_2548_fu_59461_p2 = (!sext_ln703_1503_fu_59457_p1.read().is_01() || !sext_ln703_1501_fu_59437_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1503_fu_59457_p1.read()) + sc_bigint<15>(sext_ln703_1501_fu_59437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2549_fu_59467_p2() {
    add_ln703_2549_fu_59467_p2 = (!sext_ln203_522_fu_38393_p1.read().is_01() || !sext_ln203_410_fu_36087_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_522_fu_38393_p1.read()) + sc_bigint<10>(sext_ln203_410_fu_36087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_254_fu_45306_p2() {
    add_ln703_254_fu_45306_p2 = (!sext_ln203_49_fu_28155_p1.read().is_01() || !zext_ln203_50_fu_28159_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_49_fu_28155_p1.read()) + sc_biguint<10>(zext_ln203_50_fu_28159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2550_fu_59477_p2() {
    add_ln703_2550_fu_59477_p2 = (!sext_ln203_555_fu_38778_p1.read().is_01() || !zext_ln1116_207_fu_36944_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_555_fu_38778_p1.read()) + sc_biguint<9>(zext_ln1116_207_fu_36944_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2551_fu_59487_p2() {
    add_ln703_2551_fu_59487_p2 = (!sext_ln703_1505_fu_59483_p1.read().is_01() || !zext_ln708_603_fu_38694_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1505_fu_59483_p1.read()) + sc_biguint<11>(zext_ln708_603_fu_38694_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2552_fu_59497_p2() {
    add_ln703_2552_fu_59497_p2 = (!sext_ln703_1506_fu_59493_p1.read().is_01() || !sext_ln703_1504_fu_59473_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1506_fu_59493_p1.read()) + sc_bigint<12>(sext_ln703_1504_fu_59473_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2553_fu_59507_p2() {
    add_ln703_2553_fu_59507_p2 = (!sext_ln703_1507_fu_59503_p1.read().is_01() || !add_ln703_2548_fu_59461_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1507_fu_59503_p1.read()) + sc_biguint<15>(add_ln703_2548_fu_59461_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2554_fu_59513_p2() {
    add_ln703_2554_fu_59513_p2 = (!add_ln703_2553_fu_59507_p2.read().is_01() || !sext_ln203_495_fu_37947_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2553_fu_59507_p2.read()) + sc_bigint<15>(sext_ln203_495_fu_37947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2555_fu_59519_p2() {
    add_ln703_2555_fu_59519_p2 = (!sext_ln203_412_fu_36146_p1.read().is_01() || !sext_ln203_455_fu_37232_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_412_fu_36146_p1.read()) + sc_bigint<12>(sext_ln203_455_fu_37232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2556_fu_59529_p2() {
    add_ln703_2556_fu_59529_p2 = (!sext_ln703_1508_fu_59525_p1.read().is_01() || !add_ln703_2554_fu_59513_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1508_fu_59525_p1.read()) + sc_biguint<15>(add_ln703_2554_fu_59513_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2557_fu_59535_p2() {
    add_ln703_2557_fu_59535_p2 = (!zext_ln203_299_fu_35831_p1.read().is_01() || !sext_ln203_508_fu_38191_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_299_fu_35831_p1.read()) + sc_bigint<12>(sext_ln203_508_fu_38191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2558_fu_59541_p2() {
    add_ln703_2558_fu_59541_p2 = (!zext_ln203_313_fu_36778_p1.read().is_01() || !zext_ln708_447_fu_35391_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_313_fu_36778_p1.read()) + sc_biguint<9>(zext_ln708_447_fu_35391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2559_fu_59551_p2() {
    add_ln703_2559_fu_59551_p2 = (!zext_ln703_519_fu_59547_p1.read().is_01() || !add_ln703_2557_fu_59535_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_519_fu_59547_p1.read()) + sc_biguint<12>(add_ln703_2557_fu_59535_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2561_fu_23296_p2() {
    add_ln703_2561_fu_23296_p2 = (!sext_ln703_320_fu_22836_p1.read().is_01() || !sext_ln203_532_fu_12104_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_320_fu_22836_p1.read()) + sc_bigint<13>(sext_ln203_532_fu_12104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2562_fu_23302_p2() {
    add_ln703_2562_fu_23302_p2 = (!sext_ln203_568_fu_12356_p1.read().is_01() || !zext_ln1118_881_fu_9728_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_568_fu_12356_p1.read()) + sc_biguint<12>(zext_ln1118_881_fu_9728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2563_fu_23312_p2() {
    add_ln703_2563_fu_23312_p2 = (!sext_ln703_1511_fu_23308_p1.read().is_01() || !add_ln703_2561_fu_23296_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1511_fu_23308_p1.read()) + sc_biguint<13>(add_ln703_2561_fu_23296_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2564_fu_23318_p2() {
    add_ln703_2564_fu_23318_p2 = (!zext_ln1118_919_fu_10484_p1.read().is_01() || !zext_ln1118_912_fu_10316_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_919_fu_10484_p1.read()) + sc_biguint<10>(zext_ln1118_912_fu_10316_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2565_fu_23328_p2() {
    add_ln703_2565_fu_23328_p2 = (!zext_ln708_899_fu_12298_p1.read().is_01() || !zext_ln708_853_fu_10300_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_899_fu_12298_p1.read()) + sc_biguint<8>(zext_ln708_853_fu_10300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2566_fu_23338_p2() {
    add_ln703_2566_fu_23338_p2 = (!zext_ln703_521_fu_23334_p1.read().is_01() || !zext_ln708_421_fu_8800_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln703_521_fu_23334_p1.read()) + sc_biguint<9>(zext_ln708_421_fu_8800_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2567_fu_23348_p2() {
    add_ln703_2567_fu_23348_p2 = (!zext_ln703_522_fu_23344_p1.read().is_01() || !zext_ln703_520_fu_23324_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_522_fu_23344_p1.read()) + sc_biguint<11>(zext_ln703_520_fu_23324_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2568_fu_23358_p2() {
    add_ln703_2568_fu_23358_p2 = (!zext_ln703_523_fu_23354_p1.read().is_01() || !add_ln703_2563_fu_23312_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_523_fu_23354_p1.read()) + sc_biguint<13>(add_ln703_2563_fu_23312_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2569_fu_23368_p2() {
    add_ln703_2569_fu_23368_p2 = (!zext_ln203_351_fu_12384_p1.read().is_01() || !sext_ln708_191_fu_12360_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_351_fu_12384_p1.read()) + sc_bigint<12>(sext_ln708_191_fu_12360_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_256_fu_17046_p2() {
    add_ln703_256_fu_17046_p2 = (!zext_ln703_fu_17042_p1.read().is_01() || !sext_ln203_50_fu_3514_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_fu_17042_p1.read()) + sc_bigint<12>(sext_ln203_50_fu_3514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2570_fu_23378_p2() {
    add_ln703_2570_fu_23378_p2 = (!sext_ln703_1512_fu_23374_p1.read().is_01() || !sext_ln703_343_fu_23364_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1512_fu_23374_p1.read()) + sc_bigint<14>(sext_ln703_343_fu_23364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2571_fu_59571_p2() {
    add_ln703_2571_fu_59571_p2 = (!sext_ln203_522_fu_38393_p1.read().is_01() || !sext_ln1118_368_fu_38930_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_522_fu_38393_p1.read()) + sc_bigint<10>(sext_ln1118_368_fu_38930_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2572_fu_23384_p2() {
    add_ln703_2572_fu_23384_p2 = (!zext_ln1118_842_fu_9112_p1.read().is_01() || !zext_ln1118_970_fu_12388_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_842_fu_9112_p1.read()) + sc_biguint<9>(zext_ln1118_970_fu_12388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2573_fu_59584_p2() {
    add_ln703_2573_fu_59584_p2 = (!zext_ln703_524_fu_59581_p1.read().is_01() || !sext_ln703_1513_fu_59577_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_524_fu_59581_p1.read()) + sc_bigint<11>(sext_ln703_1513_fu_59577_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2574_fu_59594_p2() {
    add_ln703_2574_fu_59594_p2 = (!sext_ln703_1514_fu_59590_p1.read().is_01() || !add_ln703_2570_reg_69801.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1514_fu_59590_p1.read()) + sc_biguint<14>(add_ln703_2570_reg_69801.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2575_fu_59599_p2() {
    add_ln703_2575_fu_59599_p2 = (!zext_ln1118_925_fu_36648_p1.read().is_01() || !sext_ln708_192_fu_38977_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_925_fu_36648_p1.read()) + sc_bigint<12>(sext_ln708_192_fu_38977_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2576_fu_59609_p2() {
    add_ln703_2576_fu_59609_p2 = (!sext_ln703_1515_fu_59605_p1.read().is_01() || !add_ln703_2574_fu_59594_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1515_fu_59605_p1.read()) + sc_biguint<14>(add_ln703_2574_fu_59594_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2577_fu_59619_p2() {
    add_ln703_2577_fu_59619_p2 = (!sext_ln1118_306_fu_37072_p1.read().is_01() || !sext_ln203_443_fu_36971_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_306_fu_37072_p1.read()) + sc_bigint<11>(sext_ln203_443_fu_36971_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2578_fu_59629_p2() {
    add_ln703_2578_fu_59629_p2 = (!sext_ln703_1517_fu_59625_p1.read().is_01() || !zext_ln203_301_fu_36114_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1517_fu_59625_p1.read()) + sc_biguint<12>(zext_ln203_301_fu_36114_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2579_fu_59639_p2() {
    add_ln703_2579_fu_59639_p2 = (!sext_ln703_1518_fu_59635_p1.read().is_01() || !sext_ln703_1516_fu_59615_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1518_fu_59635_p1.read()) + sc_bigint<15>(sext_ln703_1516_fu_59615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_257_fu_17052_p2() {
    add_ln703_257_fu_17052_p2 = (!add_ln703_256_fu_17046_p2.read().is_01() || !sext_ln203_51_fu_3518_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_256_fu_17046_p2.read()) + sc_bigint<12>(sext_ln203_51_fu_3518_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2580_fu_59645_p2() {
    add_ln703_2580_fu_59645_p2 = (!zext_ln708_520_fu_37408_p1.read().is_01() || !sext_ln1116_44_fu_35031_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_520_fu_37408_p1.read()) + sc_bigint<11>(sext_ln1116_44_fu_35031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2581_fu_59655_p2() {
    add_ln703_2581_fu_59655_p2 = (!sext_ln703_1519_fu_59651_p1.read().is_01() || !zext_ln708_620_fu_38997_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1519_fu_59651_p1.read()) + sc_biguint<12>(zext_ln708_620_fu_38997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2582_fu_59661_p2() {
    add_ln703_2582_fu_59661_p2 = (!sext_ln203_555_fu_38778_p1.read().is_01() || !zext_ln1116_190_fu_35110_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_555_fu_38778_p1.read()) + sc_biguint<9>(zext_ln1116_190_fu_35110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2583_fu_59671_p2() {
    add_ln703_2583_fu_59671_p2 = (!sext_ln703_1520_fu_59667_p1.read().is_01() || !zext_ln708_603_fu_38694_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1520_fu_59667_p1.read()) + sc_biguint<11>(zext_ln708_603_fu_38694_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2584_fu_59681_p2() {
    add_ln703_2584_fu_59681_p2 = (!sext_ln703_1521_fu_59677_p1.read().is_01() || !add_ln703_2581_fu_59655_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1521_fu_59677_p1.read()) + sc_biguint<12>(add_ln703_2581_fu_59655_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2585_fu_59691_p2() {
    add_ln703_2585_fu_59691_p2 = (!sext_ln703_1522_fu_59687_p1.read().is_01() || !add_ln703_2579_fu_59639_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1522_fu_59687_p1.read()) + sc_biguint<15>(add_ln703_2579_fu_59639_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2587_fu_23402_p2() {
    add_ln703_2587_fu_23402_p2 = (!zext_ln703_525_fu_23398_p1.read().is_01() || !sext_ln203_520_fu_12020_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_525_fu_23398_p1.read()) + sc_bigint<12>(sext_ln203_520_fu_12020_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2588_fu_23412_p2() {
    add_ln703_2588_fu_23412_p2 = (!sext_ln703_346_fu_23408_p1.read().is_01() || !zext_ln203_352_fu_12412_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_346_fu_23408_p1.read()) + sc_biguint<13>(zext_ln203_352_fu_12412_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2589_fu_23418_p2() {
    add_ln703_2589_fu_23418_p2 = (!sext_ln1118_371_fu_12408_p1.read().is_01() || !zext_ln1118_908_fu_10242_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_371_fu_12408_p1.read()) + sc_biguint<11>(zext_ln1118_908_fu_10242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_258_fu_17062_p2() {
    add_ln703_258_fu_17062_p2 = (!zext_ln1118_33_fu_1270_p1.read().is_01() || !zext_ln1116_5_fu_1246_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_33_fu_1270_p1.read()) + sc_biguint<10>(zext_ln1116_5_fu_1246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2590_fu_23428_p2() {
    add_ln703_2590_fu_23428_p2 = (!sext_ln703_1524_fu_23424_p1.read().is_01() || !add_ln703_2588_fu_23412_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1524_fu_23424_p1.read()) + sc_biguint<13>(add_ln703_2588_fu_23412_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2591_fu_23438_p2() {
    add_ln703_2591_fu_23438_p2 = (!sext_ln203_481_fu_11726_p1.read().is_01() || !sext_ln708_154_fu_10902_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_481_fu_11726_p1.read()) + sc_bigint<11>(sext_ln708_154_fu_10902_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2592_fu_23448_p2() {
    add_ln703_2592_fu_23448_p2 = (!sext_ln703_1525_fu_23444_p1.read().is_01() || !sext_ln703_347_fu_23434_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1525_fu_23444_p1.read()) + sc_bigint<14>(sext_ln703_347_fu_23434_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2593_fu_23454_p2() {
    add_ln703_2593_fu_23454_p2 = (!sext_ln1118_334_fu_11976_p1.read().is_01() || !zext_ln1118_945_fu_11598_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_334_fu_11976_p1.read()) + sc_biguint<9>(zext_ln1118_945_fu_11598_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2594_fu_59710_p2() {
    add_ln703_2594_fu_59710_p2 = (!sext_ln703_1526_fu_59707_p1.read().is_01() || !sext_ln1116_58_fu_39001_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1526_fu_59707_p1.read()) + sc_bigint<10>(sext_ln1116_58_fu_39001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2595_fu_59720_p2() {
    add_ln703_2595_fu_59720_p2 = (!sext_ln703_1527_fu_59716_p1.read().is_01() || !add_ln703_2592_reg_69811.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1527_fu_59716_p1.read()) + sc_biguint<14>(add_ln703_2592_reg_69811.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2596_fu_59725_p2() {
    add_ln703_2596_fu_59725_p2 = (!add_ln703_2595_fu_59720_p2.read().is_01() || !sext_ln203_569_fu_39012_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2595_fu_59720_p2.read()) + sc_bigint<14>(sext_ln203_569_fu_39012_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2597_fu_59735_p2() {
    add_ln703_2597_fu_59735_p2 = (!zext_ln708_873_fu_37068_p1.read().is_01() || !zext_ln708_851_fu_36110_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_873_fu_37068_p1.read()) + sc_biguint<11>(zext_ln708_851_fu_36110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2598_fu_59745_p2() {
    add_ln703_2598_fu_59745_p2 = (!zext_ln703_526_fu_59741_p1.read().is_01() || !sext_ln1116_59_fu_39019_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_526_fu_59741_p1.read()) + sc_bigint<13>(sext_ln1116_59_fu_39019_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2599_fu_59755_p2() {
    add_ln703_2599_fu_59755_p2 = (!sext_ln703_1529_fu_59751_p1.read().is_01() || !sext_ln703_1528_fu_59731_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1529_fu_59751_p1.read()) + sc_bigint<15>(sext_ln703_1528_fu_59731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_259_fu_17072_p2() {
    add_ln703_259_fu_17072_p2 = (!zext_ln703_64_fu_17068_p1.read().is_01() || !sext_ln703_218_fu_17058_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_64_fu_17068_p1.read()) + sc_bigint<13>(sext_ln703_218_fu_17058_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_25_fu_43917_p2() {
    add_ln703_25_fu_43917_p2 = (!zext_ln703_11_fu_43913_p1.read().is_01() || !sext_ln703_26_fu_43903_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_11_fu_43913_p1.read()) + sc_bigint<11>(sext_ln703_26_fu_43903_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2600_fu_59761_p2() {
    add_ln703_2600_fu_59761_p2 = (!sext_ln1118_366_fu_38906_p1.read().is_01() || !sext_ln708_187_fu_38912_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_366_fu_38906_p1.read()) + sc_bigint<11>(sext_ln708_187_fu_38912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2601_fu_59771_p2() {
    add_ln703_2601_fu_59771_p2 = (!sext_ln703_1530_fu_59767_p1.read().is_01() || !sext_ln1118_363_fu_38848_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1530_fu_59767_p1.read()) + sc_bigint<12>(sext_ln1118_363_fu_38848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2602_fu_59781_p2() {
    add_ln703_2602_fu_59781_p2 = (!sext_ln1118_285_fu_36040_p1.read().is_01() || !zext_ln203_353_fu_39016_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_285_fu_36040_p1.read()) + sc_biguint<9>(zext_ln203_353_fu_39016_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2603_fu_59791_p2() {
    add_ln703_2603_fu_59791_p2 = (!sext_ln703_1532_fu_59787_p1.read().is_01() || !zext_ln1116_218_fu_39005_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1532_fu_59787_p1.read()) + sc_biguint<11>(zext_ln1116_218_fu_39005_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2604_fu_59801_p2() {
    add_ln703_2604_fu_59801_p2 = (!sext_ln703_1533_fu_59797_p1.read().is_01() || !sext_ln703_1531_fu_59777_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1533_fu_59797_p1.read()) + sc_bigint<13>(sext_ln703_1531_fu_59777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2605_fu_59811_p2() {
    add_ln703_2605_fu_59811_p2 = (!sext_ln703_1534_fu_59807_p1.read().is_01() || !add_ln703_2599_fu_59755_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1534_fu_59807_p1.read()) + sc_biguint<15>(add_ln703_2599_fu_59755_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2606_fu_59817_p2() {
    add_ln703_2606_fu_59817_p2 = (!sext_ln708_192_fu_38977_p1.read().is_01() || !sext_ln203_570_fu_39039_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_192_fu_38977_p1.read()) + sc_bigint<12>(sext_ln203_570_fu_39039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2607_fu_59827_p2() {
    add_ln703_2607_fu_59827_p2 = (!sext_ln703_1535_fu_59823_p1.read().is_01() || !add_ln703_2605_fu_59811_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1535_fu_59823_p1.read()) + sc_biguint<15>(add_ln703_2605_fu_59811_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2608_fu_59833_p2() {
    add_ln703_2608_fu_59833_p2 = (!zext_ln203_345_fu_38683_p1.read().is_01() || !sext_ln203_536_fu_38647_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_345_fu_38683_p1.read()) + sc_bigint<12>(sext_ln203_536_fu_38647_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2609_fu_59843_p2() {
    add_ln703_2609_fu_59843_p2 = (!sext_ln703_1536_fu_59839_p1.read().is_01() || !sext_ln203_571_fu_39073_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1536_fu_59839_p1.read()) + sc_bigint<13>(sext_ln203_571_fu_39073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_260_fu_17078_p2() {
    add_ln703_260_fu_17078_p2 = (!sext_ln203_52_fu_3522_p1.read().is_01() || !sext_ln1116_fu_1358_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_52_fu_3522_p1.read()) + sc_bigint<12>(sext_ln1116_fu_1358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2611_fu_23460_p2() {
    add_ln703_2611_fu_23460_p2 = (!sext_ln1118_280_fu_9978_p1.read().is_01() || !sext_ln708_166_fu_11584_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_280_fu_9978_p1.read()) + sc_bigint<12>(sext_ln708_166_fu_11584_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2612_fu_59873_p2() {
    add_ln703_2612_fu_59873_p2 = (!sext_ln703_1539_fu_59870_p1.read().is_01() || !or_ln703_17_fu_59863_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1539_fu_59870_p1.read()) + sc_biguint<16>(or_ln703_17_fu_59863_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2613_fu_59879_p2() {
    add_ln703_2613_fu_59879_p2 = (!sext_ln203_573_fu_39077_p1.read().is_01() || !sext_ln203_471_fu_37514_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_573_fu_39077_p1.read()) + sc_bigint<12>(sext_ln203_471_fu_37514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2614_fu_59889_p2() {
    add_ln703_2614_fu_59889_p2 = (!sext_ln203_440_fu_36889_p1.read().is_01() || !zext_ln1118_929_reg_68265.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_440_fu_36889_p1.read()) + sc_biguint<12>(zext_ln1118_929_reg_68265.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2615_fu_59898_p2() {
    add_ln703_2615_fu_59898_p2 = (!sext_ln703_1541_fu_59894_p1.read().is_01() || !sext_ln703_1540_fu_59885_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1541_fu_59894_p1.read()) + sc_bigint<13>(sext_ln703_1540_fu_59885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2616_fu_59908_p2() {
    add_ln703_2616_fu_59908_p2 = (!sext_ln703_1542_fu_59904_p1.read().is_01() || !add_ln703_2612_fu_59873_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1542_fu_59904_p1.read()) + sc_biguint<16>(add_ln703_2612_fu_59873_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2617_fu_59914_p2() {
    add_ln703_2617_fu_59914_p2 = (!zext_ln708_893_fu_38215_p1.read().is_01() || !zext_ln708_873_fu_37068_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_893_fu_38215_p1.read()) + sc_biguint<11>(zext_ln708_873_fu_37068_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2618_fu_59924_p2() {
    add_ln703_2618_fu_59924_p2 = (!zext_ln203_354_fu_39107_p1.read().is_01() || !sext_ln203_567_reg_68436.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_354_fu_39107_p1.read()) + sc_bigint<12>(sext_ln203_567_reg_68436.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2619_fu_59933_p2() {
    add_ln703_2619_fu_59933_p2 = (!sext_ln703_1543_fu_59929_p1.read().is_01() || !zext_ln703_527_fu_59920_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1543_fu_59929_p1.read()) + sc_biguint<13>(zext_ln703_527_fu_59920_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_261_fu_17088_p2() {
    add_ln703_261_fu_17088_p2 = (!sext_ln703_219_fu_17084_p1.read().is_01() || !add_ln703_259_fu_17072_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_219_fu_17084_p1.read()) + sc_biguint<13>(add_ln703_259_fu_17072_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2620_fu_59943_p2() {
    add_ln703_2620_fu_59943_p2 = (!sext_ln203_574_fu_39080_p1.read().is_01() || !sext_ln203_576_fu_39087_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_574_fu_39080_p1.read()) + sc_bigint<11>(sext_ln203_576_fu_39087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2621_fu_59953_p2() {
    add_ln703_2621_fu_59953_p2 = (!zext_ln1118_886_reg_68124.read().is_01() || !sext_ln203_575_fu_39083_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_886_reg_68124.read()) + sc_bigint<11>(sext_ln203_575_fu_39083_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2622_fu_59962_p2() {
    add_ln703_2622_fu_59962_p2 = (!sext_ln703_1546_fu_59958_p1.read().is_01() || !sext_ln703_1545_fu_59949_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1546_fu_59958_p1.read()) + sc_bigint<12>(sext_ln703_1545_fu_59949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2623_fu_59972_p2() {
    add_ln703_2623_fu_59972_p2 = (!sext_ln703_1547_fu_59968_p1.read().is_01() || !sext_ln703_1544_fu_59939_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1547_fu_59968_p1.read()) + sc_bigint<14>(sext_ln703_1544_fu_59939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2624_fu_59982_p2() {
    add_ln703_2624_fu_59982_p2 = (!sext_ln703_1548_fu_59978_p1.read().is_01() || !add_ln703_2616_fu_59908_p2.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1548_fu_59978_p1.read()) + sc_biguint<16>(add_ln703_2616_fu_59908_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2625_fu_59988_p2() {
    add_ln703_2625_fu_59988_p2 = (!zext_ln1118_913_reg_68199.read().is_01() || !zext_ln1118_915_fu_36208_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_913_reg_68199.read()) + sc_biguint<10>(zext_ln1118_915_fu_36208_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2626_fu_59997_p2() {
    add_ln703_2626_fu_59997_p2 = (!zext_ln703_528_fu_59993_p1.read().is_01() || !zext_ln203_292_reg_68078.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_528_fu_59993_p1.read()) + sc_biguint<11>(zext_ln203_292_reg_68078.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2627_fu_60006_p2() {
    add_ln703_2627_fu_60006_p2 = (!zext_ln1118_905_fu_36068_p1.read().is_01() || !zext_ln1118_917_fu_36374_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_905_fu_36068_p1.read()) + sc_biguint<10>(zext_ln1118_917_fu_36374_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2628_fu_23466_p2() {
    add_ln703_2628_fu_23466_p2 = (!sext_ln203_542_fu_12168_p1.read().is_01() || !sext_ln203_572_fu_12420_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_542_fu_12168_p1.read()) + sc_bigint<9>(sext_ln203_572_fu_12420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2629_fu_60019_p2() {
    add_ln703_2629_fu_60019_p2 = (!sext_ln703_1549_fu_60016_p1.read().is_01() || !zext_ln703_530_fu_60012_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1549_fu_60016_p1.read()) + sc_biguint<12>(zext_ln703_530_fu_60012_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_262_fu_45329_p2() {
    add_ln703_262_fu_45329_p2 = (!sext_ln1118_31_reg_67277.read().is_01() || !zext_ln708_3_reg_67085.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_31_reg_67277.read()) + sc_biguint<10>(zext_ln708_3_reg_67085.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2630_fu_60029_p2() {
    add_ln703_2630_fu_60029_p2 = (!sext_ln703_1550_fu_60025_p1.read().is_01() || !zext_ln703_529_fu_60002_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1550_fu_60025_p1.read()) + sc_biguint<13>(zext_ln703_529_fu_60002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2632_fu_60043_p2() {
    add_ln703_2632_fu_60043_p2 = (!zext_ln203_305_reg_68221.read().is_01() || !zext_ln203_284_reg_67997.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_305_reg_68221.read()) + sc_biguint<9>(zext_ln203_284_reg_67997.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2633_fu_60051_p2() {
    add_ln703_2633_fu_60051_p2 = (!zext_ln703_531_fu_60047_p1.read().is_01() || !sext_ln703_1552_fu_60039_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_531_fu_60047_p1.read()) + sc_bigint<11>(sext_ln703_1552_fu_60039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2634_fu_60061_p2() {
    add_ln703_2634_fu_60061_p2 = (!zext_ln708_440_fu_34987_p1.read().is_01() || !zext_ln1116_204_fu_36276_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_440_fu_34987_p1.read()) + sc_biguint<9>(zext_ln1116_204_fu_36276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2636_fu_60071_p2() {
    add_ln703_2636_fu_60071_p2 = (!zext_ln703_415_fu_56232_p1.read().is_01() || !zext_ln703_532_fu_60067_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_415_fu_56232_p1.read()) + sc_biguint<10>(zext_ln703_532_fu_60067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2637_fu_60081_p2() {
    add_ln703_2637_fu_60081_p2 = (!zext_ln703_534_fu_60077_p1.read().is_01() || !sext_ln703_1553_fu_60057_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_534_fu_60077_p1.read()) + sc_bigint<12>(sext_ln703_1553_fu_60057_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2638_fu_60091_p2() {
    add_ln703_2638_fu_60091_p2 = (!sext_ln703_1554_fu_60087_p1.read().is_01() || !sext_ln703_1551_fu_60035_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1554_fu_60087_p1.read()) + sc_bigint<14>(sext_ln703_1551_fu_60035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_263_fu_45337_p2() {
    add_ln703_263_fu_45337_p2 = (!sext_ln703_223_fu_45333_p1.read().is_01() || !zext_ln1118_104_reg_67195.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_223_fu_45333_p1.read()) + sc_biguint<11>(zext_ln1118_104_reg_67195.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2640_fu_23472_p2() {
    add_ln703_2640_fu_23472_p2 = (!sext_ln203_577_fu_12444_p1.read().is_01() || !sext_ln203_542_fu_12168_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_577_fu_12444_p1.read()) + sc_bigint<9>(sext_ln203_542_fu_12168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2641_fu_23482_p2() {
    add_ln703_2641_fu_23482_p2 = (!sext_ln703_1556_fu_23478_p1.read().is_01() || !sext_ln708_193_fu_12448_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1556_fu_23478_p1.read()) + sc_bigint<10>(sext_ln708_193_fu_12448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2642_fu_23492_p2() {
    add_ln703_2642_fu_23492_p2 = (!zext_ln1118_877_fu_9602_p1.read().is_01() || !zext_ln1116_197_fu_10226_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_877_fu_9602_p1.read()) + sc_biguint<10>(zext_ln1116_197_fu_10226_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2643_fu_23502_p2() {
    add_ln703_2643_fu_23502_p2 = (!zext_ln703_535_fu_23498_p1.read().is_01() || !sext_ln703_1557_fu_23488_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_535_fu_23498_p1.read()) + sc_bigint<12>(sext_ln703_1557_fu_23488_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2644_fu_23508_p2() {
    add_ln703_2644_fu_23508_p2 = (!add_ln703_2643_fu_23502_p2.read().is_01() || !sext_ln708_195_fu_12460_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2643_fu_23502_p2.read()) + sc_bigint<12>(sext_ln708_195_fu_12460_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2645_fu_23518_p2() {
    add_ln703_2645_fu_23518_p2 = (!zext_ln708_859_fu_10730_p1.read().is_01() || !zext_ln708_872_fu_11122_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_859_fu_10730_p1.read()) + sc_biguint<10>(zext_ln708_872_fu_11122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2646_fu_23528_p2() {
    add_ln703_2646_fu_23528_p2 = (!zext_ln703_536_fu_23524_p1.read().is_01() || !sext_ln703_1558_fu_23514_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_536_fu_23524_p1.read()) + sc_bigint<13>(sext_ln703_1558_fu_23514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2647_fu_23534_p2() {
    add_ln703_2647_fu_23534_p2 = (!zext_ln1118_919_fu_10484_p1.read().is_01() || !zext_ln203_355_fu_12452_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_919_fu_10484_p1.read()) + sc_biguint<10>(zext_ln203_355_fu_12452_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2648_fu_23544_p2() {
    add_ln703_2648_fu_23544_p2 = (!zext_ln708_503_fu_10992_p1.read().is_01() || !sext_ln1118_376_fu_12456_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_503_fu_10992_p1.read()) + sc_bigint<11>(sext_ln1118_376_fu_12456_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2649_fu_23554_p2() {
    add_ln703_2649_fu_23554_p2 = (!sext_ln703_1560_fu_23550_p1.read().is_01() || !zext_ln703_537_fu_23540_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1560_fu_23550_p1.read()) + sc_biguint<12>(zext_ln703_537_fu_23540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_264_fu_45346_p2() {
    add_ln703_264_fu_45346_p2 = (!sext_ln703_224_fu_45342_p1.read().is_01() || !sext_ln703_222_fu_45326_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_224_fu_45342_p1.read()) + sc_bigint<14>(sext_ln703_222_fu_45326_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2650_fu_60113_p2() {
    add_ln703_2650_fu_60113_p2 = (!sext_ln703_1561_fu_60110_p1.read().is_01() || !sext_ln703_1559_fu_60107_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1561_fu_60110_p1.read()) + sc_bigint<14>(sext_ln703_1559_fu_60107_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2651_fu_60119_p2() {
    add_ln703_2651_fu_60119_p2 = (!zext_ln1118_973_fu_39126_p1.read().is_01() || !sext_ln1118_377_fu_39146_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_973_fu_39126_p1.read()) + sc_bigint<12>(sext_ln1118_377_fu_39146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2652_fu_60129_p2() {
    add_ln703_2652_fu_60129_p2 = (!sext_ln703_1562_fu_60125_p1.read().is_01() || !add_ln703_2650_fu_60113_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1562_fu_60125_p1.read()) + sc_biguint<14>(add_ln703_2650_fu_60113_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2653_fu_60139_p2() {
    add_ln703_2653_fu_60139_p2 = (!sext_ln708_196_fu_39196_p1.read().is_01() || !sext_ln203_578_fu_39231_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_196_fu_39196_p1.read()) + sc_bigint<12>(sext_ln203_578_fu_39231_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2654_fu_60149_p2() {
    add_ln703_2654_fu_60149_p2 = (!sext_ln703_1564_fu_60145_p1.read().is_01() || !sext_ln1118_378_fu_39177_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1564_fu_60145_p1.read()) + sc_bigint<13>(sext_ln1118_378_fu_39177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2655_fu_60159_p2() {
    add_ln703_2655_fu_60159_p2 = (!sext_ln703_1565_fu_60155_p1.read().is_01() || !sext_ln703_1563_fu_60135_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1565_fu_60155_p1.read()) + sc_bigint<15>(sext_ln703_1563_fu_60135_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2656_fu_60165_p2() {
    add_ln703_2656_fu_60165_p2 = (!zext_ln708_839_fu_35237_p1.read().is_01() || !zext_ln1118_967_fu_38623_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_839_fu_35237_p1.read()) + sc_biguint<11>(zext_ln1118_967_fu_38623_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2657_fu_60175_p2() {
    add_ln703_2657_fu_60175_p2 = (!zext_ln703_538_fu_60171_p1.read().is_01() || !sext_ln203_579_fu_39235_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_538_fu_60171_p1.read()) + sc_bigint<13>(sext_ln203_579_fu_39235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2658_fu_60181_p2() {
    add_ln703_2658_fu_60181_p2 = (!zext_ln1118_870_fu_35570_p1.read().is_01() || !zext_ln1118_975_fu_39200_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_870_fu_35570_p1.read()) + sc_biguint<9>(zext_ln1118_975_fu_39200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2659_fu_60191_p2() {
    add_ln703_2659_fu_60191_p2 = (!zext_ln703_539_fu_60187_p1.read().is_01() || !zext_ln1118_955_fu_38042_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_539_fu_60187_p1.read()) + sc_biguint<10>(zext_ln1118_955_fu_38042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_265_fu_45352_p2() {
    add_ln703_265_fu_45352_p2 = (!sext_ln1118_48_fu_28185_p1.read().is_01() || !sext_ln203_9_fu_26918_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_48_fu_28185_p1.read()) + sc_bigint<12>(sext_ln203_9_fu_26918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2660_fu_60201_p2() {
    add_ln703_2660_fu_60201_p2 = (!zext_ln703_540_fu_60197_p1.read().is_01() || !add_ln703_2657_fu_60175_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_540_fu_60197_p1.read()) + sc_biguint<13>(add_ln703_2657_fu_60175_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2661_fu_60211_p2() {
    add_ln703_2661_fu_60211_p2 = (!sext_ln703_1566_fu_60207_p1.read().is_01() || !add_ln703_2655_fu_60159_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1566_fu_60207_p1.read()) + sc_biguint<15>(add_ln703_2655_fu_60159_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2662_fu_60217_p2() {
    add_ln703_2662_fu_60217_p2 = (!sext_ln203_412_fu_36146_p1.read().is_01() || !sext_ln203_580_fu_39255_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_412_fu_36146_p1.read()) + sc_bigint<12>(sext_ln203_580_fu_39255_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2663_fu_60227_p2() {
    add_ln703_2663_fu_60227_p2 = (!sext_ln703_1567_fu_60223_p1.read().is_01() || !add_ln703_2661_fu_60211_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1567_fu_60223_p1.read()) + sc_biguint<15>(add_ln703_2661_fu_60211_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2664_fu_60233_p2() {
    add_ln703_2664_fu_60233_p2 = (!sext_ln708_138_fu_35678_p1.read().is_01() || !zext_ln203_350_fu_38927_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_138_fu_35678_p1.read()) + sc_biguint<10>(zext_ln203_350_fu_38927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2665_fu_60243_p2() {
    add_ln703_2665_fu_60243_p2 = (!sext_ln703_1568_fu_60239_p1.read().is_01() || !zext_ln203_345_fu_38683_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1568_fu_60239_p1.read()) + sc_biguint<12>(zext_ln203_345_fu_38683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2667_fu_23560_p2() {
    add_ln703_2667_fu_23560_p2 = (!zext_ln708_881_fu_11352_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_881_fu_11352_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2668_fu_23570_p2() {
    add_ln703_2668_fu_23570_p2 = (!sext_ln703_354_fu_23566_p1.read().is_01() || !zext_ln203_356_fu_12490_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_354_fu_23566_p1.read()) + sc_biguint<12>(zext_ln203_356_fu_12490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2669_fu_23576_p2() {
    add_ln703_2669_fu_23576_p2 = (!add_ln703_2668_fu_23570_p2.read().is_01() || !zext_ln1118_896_fu_9958_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2668_fu_23570_p2.read()) + sc_biguint<12>(zext_ln1118_896_fu_9958_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_266_fu_45362_p2() {
    add_ln703_266_fu_45362_p2 = (!sext_ln703_226_fu_45358_p1.read().is_01() || !add_ln703_264_fu_45346_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_226_fu_45358_p1.read()) + sc_biguint<14>(add_ln703_264_fu_45346_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2670_fu_23586_p2() {
    add_ln703_2670_fu_23586_p2 = (!sext_ln708_197_fu_12494_p1.read().is_01() || !sext_ln203_572_fu_12420_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_197_fu_12494_p1.read()) + sc_bigint<9>(sext_ln203_572_fu_12420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2671_fu_23596_p2() {
    add_ln703_2671_fu_23596_p2 = (!sext_ln703_1572_fu_23592_p1.read().is_01() || !sext_ln703_1571_fu_23582_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1572_fu_23592_p1.read()) + sc_bigint<13>(sext_ln703_1571_fu_23582_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2672_fu_23606_p2() {
    add_ln703_2672_fu_23606_p2 = (!sext_ln1118_295_fu_10662_p1.read().is_01() || !zext_ln1116_214_fu_11856_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_295_fu_10662_p1.read()) + sc_biguint<12>(zext_ln1116_214_fu_11856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2673_fu_23616_p2() {
    add_ln703_2673_fu_23616_p2 = (!sext_ln703_1573_fu_23612_p1.read().is_01() || !sext_ln703_356_fu_23602_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1573_fu_23612_p1.read()) + sc_bigint<14>(sext_ln703_356_fu_23602_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2674_fu_23622_p2() {
    add_ln703_2674_fu_23622_p2 = (!sext_ln203_482_fu_11746_p1.read().is_01() || !zext_ln1118_977_fu_12498_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_482_fu_11746_p1.read()) + sc_biguint<11>(zext_ln1118_977_fu_12498_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2675_fu_23632_p2() {
    add_ln703_2675_fu_23632_p2 = (!sext_ln1118_287_fu_10336_p1.read().is_01() || !zext_ln1118_964_fu_12122_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_287_fu_10336_p1.read()) + sc_biguint<10>(zext_ln1118_964_fu_12122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2676_fu_23642_p2() {
    add_ln703_2676_fu_23642_p2 = (!sext_ln703_1575_fu_23638_p1.read().is_01() || !sext_ln703_1574_fu_23628_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1575_fu_23638_p1.read()) + sc_bigint<12>(sext_ln703_1574_fu_23628_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2677_fu_60266_p2() {
    add_ln703_2677_fu_60266_p2 = (!sext_ln703_1576_fu_60263_p1.read().is_01() || !add_ln703_2673_reg_69841.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1576_fu_60263_p1.read()) + sc_biguint<14>(add_ln703_2673_reg_69841.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2678_fu_60271_p2() {
    add_ln703_2678_fu_60271_p2 = (!sext_ln203_581_fu_39259_p1.read().is_01() || !sext_ln708_199_fu_39308_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_581_fu_39259_p1.read()) + sc_bigint<12>(sext_ln708_199_fu_39308_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2679_fu_60281_p2() {
    add_ln703_2679_fu_60281_p2 = (!sext_ln703_1577_fu_60277_p1.read().is_01() || !add_ln703_2677_fu_60266_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1577_fu_60277_p1.read()) + sc_biguint<14>(add_ln703_2677_fu_60266_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_267_fu_45372_p2() {
    add_ln703_267_fu_45372_p2 = (!zext_ln708_698_fu_27670_p1.read().is_01() || !zext_ln708_722_fu_28232_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_698_fu_27670_p1.read()) + sc_biguint<11>(zext_ln708_722_fu_28232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2680_fu_60291_p2() {
    add_ln703_2680_fu_60291_p2 = (!zext_ln203_341_fu_38397_p1.read().is_01() || !sext_ln1118_382_fu_39278_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_341_fu_38397_p1.read()) + sc_bigint<12>(sext_ln1118_382_fu_39278_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2681_fu_60301_p2() {
    add_ln703_2681_fu_60301_p2 = (!sext_ln708_200_fu_39322_p1.read().is_01() || !sext_ln1118_299_fu_36728_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_200_fu_39322_p1.read()) + sc_bigint<11>(sext_ln1118_299_fu_36728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2682_fu_60311_p2() {
    add_ln703_2682_fu_60311_p2 = (!sext_ln703_1580_fu_60307_p1.read().is_01() || !sext_ln703_1579_fu_60297_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1580_fu_60307_p1.read()) + sc_bigint<13>(sext_ln703_1579_fu_60297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2683_fu_60321_p2() {
    add_ln703_2683_fu_60321_p2 = (!sext_ln703_1581_fu_60317_p1.read().is_01() || !sext_ln703_1578_fu_60287_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1581_fu_60317_p1.read()) + sc_bigint<15>(sext_ln703_1578_fu_60287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2684_fu_60327_p2() {
    add_ln703_2684_fu_60327_p2 = (!zext_ln708_838_fu_35096_p1.read().is_01() || !zext_ln708_861_fu_36704_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_838_fu_35096_p1.read()) + sc_biguint<10>(zext_ln708_861_fu_36704_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2685_fu_60337_p2() {
    add_ln703_2685_fu_60337_p2 = (!zext_ln703_541_fu_60333_p1.read().is_01() || !zext_ln1116_216_fu_37916_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_541_fu_60333_p1.read()) + sc_biguint<11>(zext_ln1116_216_fu_37916_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2686_fu_60347_p2() {
    add_ln703_2686_fu_60347_p2 = (!zext_ln708_900_fu_39342_p1.read().is_01() || !zext_ln708_432_reg_68037.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_900_fu_39342_p1.read()) + sc_biguint<10>(zext_ln708_432_reg_68037.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2687_fu_60356_p2() {
    add_ln703_2687_fu_60356_p2 = (!zext_ln203_286_fu_34972_p1.read().is_01() || !zext_ln203_353_fu_39016_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_286_fu_34972_p1.read()) + sc_biguint<9>(zext_ln203_353_fu_39016_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2688_fu_60366_p2() {
    add_ln703_2688_fu_60366_p2 = (!zext_ln703_544_fu_60362_p1.read().is_01() || !zext_ln703_543_fu_60352_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_544_fu_60362_p1.read()) + sc_biguint<11>(zext_ln703_543_fu_60352_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2689_fu_60376_p2() {
    add_ln703_2689_fu_60376_p2 = (!zext_ln703_545_fu_60372_p1.read().is_01() || !zext_ln703_542_fu_60343_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_545_fu_60372_p1.read()) + sc_biguint<12>(zext_ln703_542_fu_60343_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_268_fu_45382_p2() {
    add_ln703_268_fu_45382_p2 = (!zext_ln703_65_fu_45378_p1.read().is_01() || !sext_ln1118_49_fu_28209_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_65_fu_45378_p1.read()) + sc_bigint<13>(sext_ln1118_49_fu_28209_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2690_fu_60386_p2() {
    add_ln703_2690_fu_60386_p2 = (!zext_ln703_546_fu_60382_p1.read().is_01() || !add_ln703_2683_fu_60321_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_546_fu_60382_p1.read()) + sc_biguint<15>(add_ln703_2683_fu_60321_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2691_fu_60392_p2() {
    add_ln703_2691_fu_60392_p2 = (!add_ln703_2690_fu_60386_p2.read().is_01() || !sext_ln203_498_fu_37975_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2690_fu_60386_p2.read()) + sc_bigint<15>(sext_ln203_498_fu_37975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2692_fu_60398_p2() {
    add_ln703_2692_fu_60398_p2 = (!sext_ln203_537_fu_38651_p1.read().is_01() || !zext_ln203_317_fu_36995_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_537_fu_38651_p1.read()) + sc_biguint<10>(zext_ln203_317_fu_36995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2694_fu_23648_p2() {
    add_ln703_2694_fu_23648_p2 = (!sext_ln203_582_fu_12542_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_582_fu_12542_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2695_fu_23654_p2() {
    add_ln703_2695_fu_23654_p2 = (!zext_ln708_901_fu_12586_p1.read().is_01() || !zext_ln1116_223_fu_12616_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_901_fu_12586_p1.read()) + sc_biguint<10>(zext_ln1116_223_fu_12616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2696_fu_23664_p2() {
    add_ln703_2696_fu_23664_p2 = (!zext_ln703_547_fu_23660_p1.read().is_01() || !add_ln703_2694_fu_23648_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_547_fu_23660_p1.read()) + sc_bigint<12>(add_ln703_2694_fu_23648_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2697_fu_23670_p2() {
    add_ln703_2697_fu_23670_p2 = (!add_ln703_2696_fu_23664_p2.read().is_01() || !sext_ln1116_60_fu_12728_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2696_fu_23664_p2.read()) + sc_bigint<12>(sext_ln1116_60_fu_12728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2698_fu_23680_p2() {
    add_ln703_2698_fu_23680_p2 = (!sext_ln1118_384_fu_12660_p1.read().is_01() || !zext_ln1116_225_fu_12676_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_384_fu_12660_p1.read()) + sc_biguint<11>(zext_ln1116_225_fu_12676_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2699_fu_23690_p2() {
    add_ln703_2699_fu_23690_p2 = (!sext_ln703_1585_fu_23686_p1.read().is_01() || !zext_ln1116_228_fu_12768_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1585_fu_23686_p1.read()) + sc_biguint<12>(zext_ln1116_228_fu_12768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_269_fu_45392_p2() {
    add_ln703_269_fu_45392_p2 = (!sext_ln703_230_fu_45388_p1.read().is_01() || !sext_ln703_227_fu_45368_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_230_fu_45388_p1.read()) + sc_bigint<15>(sext_ln703_227_fu_45368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_26_fu_43927_p2() {
    add_ln703_26_fu_43927_p2 = (!sext_ln703_29_fu_43923_p1.read().is_01() || !sext_ln703_25_fu_43894_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_29_fu_43923_p1.read()) + sc_bigint<12>(sext_ln703_25_fu_43894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2700_fu_23700_p2() {
    add_ln703_2700_fu_23700_p2 = (!sext_ln703_1586_fu_23696_p1.read().is_01() || !sext_ln703_1584_fu_23676_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1586_fu_23696_p1.read()) + sc_bigint<13>(sext_ln703_1584_fu_23676_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2701_fu_23706_p2() {
    add_ln703_2701_fu_23706_p2 = (!add_ln703_2700_fu_23700_p2.read().is_01() || !zext_ln708_638_fu_12816_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2700_fu_23700_p2.read()) + sc_biguint<13>(zext_ln708_638_fu_12816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2702_fu_60421_p2() {
    add_ln703_2702_fu_60421_p2 = (!sext_ln1116_61_fu_39349_p1.read().is_01() || !zext_ln1116_235_fu_39384_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_61_fu_39349_p1.read()) + sc_biguint<11>(zext_ln1116_235_fu_39384_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2703_fu_60431_p2() {
    add_ln703_2703_fu_60431_p2 = (!sext_ln703_1588_fu_60427_p1.read().is_01() || !sext_ln1118_386_fu_39380_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1588_fu_60427_p1.read()) + sc_bigint<12>(sext_ln1118_386_fu_39380_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2704_fu_60441_p2() {
    add_ln703_2704_fu_60441_p2 = (!sext_ln703_1589_fu_60437_p1.read().is_01() || !sext_ln703_1587_fu_60418_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1589_fu_60437_p1.read()) + sc_bigint<14>(sext_ln703_1587_fu_60418_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2705_fu_23712_p2() {
    add_ln703_2705_fu_23712_p2 = (!zext_ln708_905_fu_12994_p1.read().is_01() || !zext_ln1116_230_fu_12838_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_905_fu_12994_p1.read()) + sc_biguint<10>(zext_ln1116_230_fu_12838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2706_fu_60450_p2() {
    add_ln703_2706_fu_60450_p2 = (!zext_ln203_361_fu_39390_p1.read().is_01() || !zext_ln708_648_fu_39401_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_361_fu_39390_p1.read()) + sc_biguint<9>(zext_ln708_648_fu_39401_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2707_fu_60460_p2() {
    add_ln703_2707_fu_60460_p2 = (!zext_ln703_549_fu_60456_p1.read().is_01() || !zext_ln203_358_fu_39346_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_549_fu_60456_p1.read()) + sc_biguint<10>(zext_ln203_358_fu_39346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2708_fu_60470_p2() {
    add_ln703_2708_fu_60470_p2 = (!zext_ln703_550_fu_60466_p1.read().is_01() || !zext_ln703_548_fu_60447_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_550_fu_60466_p1.read()) + sc_biguint<11>(zext_ln703_548_fu_60447_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2709_fu_60480_p2() {
    add_ln703_2709_fu_60480_p2 = (!zext_ln703_551_fu_60476_p1.read().is_01() || !add_ln703_2704_fu_60441_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_551_fu_60476_p1.read()) + sc_biguint<14>(add_ln703_2704_fu_60441_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_270_fu_45398_p2() {
    add_ln703_270_fu_45398_p2 = (!sext_ln203_54_fu_28213_p1.read().is_01() || !sext_ln1118_50_fu_28236_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_54_fu_28213_p1.read()) + sc_bigint<11>(sext_ln1118_50_fu_28236_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2710_fu_60490_p2() {
    add_ln703_2710_fu_60490_p2 = (!sext_ln1118_387_fu_39571_p1.read().is_01() || !zext_ln1116_239_fu_39489_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_387_fu_39571_p1.read()) + sc_biguint<12>(zext_ln1116_239_fu_39489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2711_fu_60500_p2() {
    add_ln703_2711_fu_60500_p2 = (!sext_ln703_1590_fu_60496_p1.read().is_01() || !sext_ln703_361_fu_60486_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1590_fu_60496_p1.read()) + sc_bigint<15>(sext_ln703_361_fu_60486_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2712_fu_60506_p2() {
    add_ln703_2712_fu_60506_p2 = (!zext_ln708_907_fu_39514_p1.read().is_01() || !zext_ln708_909_fu_39783_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_907_fu_39514_p1.read()) + sc_biguint<10>(zext_ln708_909_fu_39783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2713_fu_60516_p2() {
    add_ln703_2713_fu_60516_p2 = (!zext_ln703_552_fu_60512_p1.read().is_01() || !zext_ln708_908_fu_39655_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_552_fu_60512_p1.read()) + sc_biguint<11>(zext_ln708_908_fu_39655_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2714_fu_60526_p2() {
    add_ln703_2714_fu_60526_p2 = (!zext_ln703_553_fu_60522_p1.read().is_01() || !add_ln703_2711_fu_60500_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_553_fu_60522_p1.read()) + sc_biguint<15>(add_ln703_2711_fu_60500_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2715_fu_60532_p2() {
    add_ln703_2715_fu_60532_p2 = (!sext_ln1118_388_fu_39611_p1.read().is_01() || !sext_ln1118_389_fu_39703_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_388_fu_39611_p1.read()) + sc_bigint<10>(sext_ln1118_389_fu_39703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2716_fu_60542_p2() {
    add_ln703_2716_fu_60542_p2 = (!sext_ln703_1591_fu_60538_p1.read().is_01() || !sext_ln1116_64_fu_39449_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1591_fu_60538_p1.read()) + sc_bigint<11>(sext_ln1116_64_fu_39449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2717_fu_60552_p2() {
    add_ln703_2717_fu_60552_p2 = (!sext_ln1116_65_fu_39739_p1.read().is_01() || !zext_ln1116_237_reg_68512.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_65_fu_39739_p1.read()) + sc_biguint<10>(zext_ln1116_237_reg_68512.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2718_fu_60561_p2() {
    add_ln703_2718_fu_60561_p2 = (!zext_ln1116_241_fu_39528_p1.read().is_01() || !zext_ln1116_246_fu_39799_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_241_fu_39528_p1.read()) + sc_biguint<9>(zext_ln1116_246_fu_39799_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2719_fu_60571_p2() {
    add_ln703_2719_fu_60571_p2 = (!zext_ln703_554_fu_60567_p1.read().is_01() || !sext_ln703_1593_fu_60557_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_554_fu_60567_p1.read()) + sc_bigint<11>(sext_ln703_1593_fu_60557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_271_fu_45408_p2() {
    add_ln703_271_fu_45408_p2 = (!sext_ln703_231_fu_45404_p1.read().is_01() || !sext_ln203_53_fu_28163_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_231_fu_45404_p1.read()) + sc_bigint<12>(sext_ln203_53_fu_28163_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2720_fu_60581_p2() {
    add_ln703_2720_fu_60581_p2 = (!sext_ln703_1594_fu_60577_p1.read().is_01() || !sext_ln703_1592_fu_60548_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1594_fu_60577_p1.read()) + sc_bigint<12>(sext_ln703_1592_fu_60548_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2721_fu_60591_p2() {
    add_ln703_2721_fu_60591_p2 = (!sext_ln703_1595_fu_60587_p1.read().is_01() || !add_ln703_2714_fu_60526_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1595_fu_60587_p1.read()) + sc_biguint<15>(add_ln703_2714_fu_60526_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2722_fu_60597_p2() {
    add_ln703_2722_fu_60597_p2 = (!zext_ln203_365_fu_39819_p1.read().is_01() || !sext_ln203_585_fu_39851_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_365_fu_39819_p1.read()) + sc_bigint<11>(sext_ln203_585_fu_39851_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2724_fu_23718_p2() {
    add_ln703_2724_fu_23718_p2 = (!zext_ln708_910_fu_13062_p1.read().is_01() || !ap_const_lv11_500.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_910_fu_13062_p1.read()) + sc_bigint<11>(ap_const_lv11_500));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2725_fu_23728_p2() {
    add_ln703_2725_fu_23728_p2 = (!sext_ln703_363_fu_23724_p1.read().is_01() || !sext_ln203_586_fu_13094_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_363_fu_23724_p1.read()) + sc_bigint<12>(sext_ln203_586_fu_13094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2726_fu_23738_p2() {
    add_ln703_2726_fu_23738_p2 = (!sext_ln703_364_fu_23734_p1.read().is_01() || !sext_ln203_587_fu_13168_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_364_fu_23734_p1.read()) + sc_bigint<13>(sext_ln203_587_fu_13168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2727_fu_23744_p2() {
    add_ln703_2727_fu_23744_p2 = (!sext_ln1118_390_fu_13126_p1.read().is_01() || !zext_ln1116_225_fu_12676_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_390_fu_13126_p1.read()) + sc_biguint<11>(zext_ln1116_225_fu_12676_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2728_fu_23754_p2() {
    add_ln703_2728_fu_23754_p2 = (!sext_ln703_1598_fu_23750_p1.read().is_01() || !add_ln703_2726_fu_23738_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1598_fu_23750_p1.read()) + sc_biguint<13>(add_ln703_2726_fu_23738_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2729_fu_60620_p2() {
    add_ln703_2729_fu_60620_p2 = (!sext_ln703_365_fu_60617_p1.read().is_01() || !sext_ln203_589_fu_39882_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_365_fu_60617_p1.read()) + sc_bigint<14>(sext_ln203_589_fu_39882_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_272_fu_45418_p2() {
    add_ln703_272_fu_45418_p2 = (!zext_ln1116_24_reg_67103.read().is_01() || !zext_ln203_13_fu_26731_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_24_reg_67103.read()) + sc_biguint<9>(zext_ln203_13_fu_26731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2730_fu_23760_p2() {
    add_ln703_2730_fu_23760_p2 = (!zext_ln203_367_fu_13204_p1.read().is_01() || !sext_ln203_588_fu_13188_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_367_fu_13204_p1.read()) + sc_bigint<11>(sext_ln203_588_fu_13188_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2731_fu_23770_p2() {
    add_ln703_2731_fu_23770_p2 = (!sext_ln703_1599_fu_23766_p1.read().is_01() || !zext_ln203_368_fu_13228_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1599_fu_23766_p1.read()) + sc_biguint<12>(zext_ln203_368_fu_13228_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2732_fu_60629_p2() {
    add_ln703_2732_fu_60629_p2 = (!sext_ln703_1600_fu_60626_p1.read().is_01() || !add_ln703_2729_fu_60620_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1600_fu_60626_p1.read()) + sc_biguint<14>(add_ln703_2729_fu_60620_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2733_fu_23776_p2() {
    add_ln703_2733_fu_23776_p2 = (!zext_ln1118_986_fu_12696_p1.read().is_01() || !zext_ln708_636_fu_12784_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_986_fu_12696_p1.read()) + sc_biguint<9>(zext_ln708_636_fu_12784_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2734_fu_23786_p2() {
    add_ln703_2734_fu_23786_p2 = (!zext_ln203_359_fu_12846_p1.read().is_01() || !zext_ln1116_233_fu_12894_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_359_fu_12846_p1.read()) + sc_biguint<9>(zext_ln1116_233_fu_12894_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2735_fu_23796_p2() {
    add_ln703_2735_fu_23796_p2 = (!zext_ln703_556_fu_23792_p1.read().is_01() || !zext_ln1116_230_fu_12838_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_556_fu_23792_p1.read()) + sc_biguint<10>(zext_ln1116_230_fu_12838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2736_fu_23806_p2() {
    add_ln703_2736_fu_23806_p2 = (!zext_ln703_557_fu_23802_p1.read().is_01() || !zext_ln703_555_fu_23782_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_557_fu_23802_p1.read()) + sc_biguint<11>(zext_ln703_555_fu_23782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2737_fu_60638_p2() {
    add_ln703_2737_fu_60638_p2 = (!zext_ln703_558_fu_60635_p1.read().is_01() || !add_ln703_2732_fu_60629_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_558_fu_60635_p1.read()) + sc_biguint<14>(add_ln703_2732_fu_60629_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2738_fu_60648_p2() {
    add_ln703_2738_fu_60648_p2 = (!zext_ln708_912_fu_39912_p1.read().is_01() || !zext_ln708_913_fu_39975_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_912_fu_39912_p1.read()) + sc_biguint<11>(zext_ln708_913_fu_39975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2739_fu_60658_p2() {
    add_ln703_2739_fu_60658_p2 = (!zext_ln703_559_fu_60654_p1.read().is_01() || !sext_ln703_366_fu_60644_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_559_fu_60654_p1.read()) + sc_bigint<15>(sext_ln703_366_fu_60644_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_273_fu_45427_p2() {
    add_ln703_273_fu_45427_p2 = (!zext_ln703_66_fu_45423_p1.read().is_01() || !zext_ln708_721_reg_67395.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_66_fu_45423_p1.read()) + sc_biguint<10>(zext_ln708_721_reg_67395.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2740_fu_60664_p2() {
    add_ln703_2740_fu_60664_p2 = (!zext_ln1118_1021_fu_40014_p1.read().is_01() || !sext_ln708_202_fu_39947_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_1021_fu_40014_p1.read()) + sc_bigint<12>(sext_ln708_202_fu_39947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2741_fu_60670_p2() {
    add_ln703_2741_fu_60670_p2 = (!sext_ln1116_63_fu_39445_p1.read().is_01() || !sext_ln708_205_fu_40096_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_63_fu_39445_p1.read()) + sc_bigint<10>(sext_ln708_205_fu_40096_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2742_fu_60680_p2() {
    add_ln703_2742_fu_60680_p2 = (!sext_ln703_1601_fu_60676_p1.read().is_01() || !add_ln703_2740_fu_60664_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1601_fu_60676_p1.read()) + sc_biguint<12>(add_ln703_2740_fu_60664_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2743_fu_60690_p2() {
    add_ln703_2743_fu_60690_p2 = (!sext_ln703_1602_fu_60686_p1.read().is_01() || !add_ln703_2739_fu_60658_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1602_fu_60686_p1.read()) + sc_biguint<15>(add_ln703_2739_fu_60658_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2744_fu_60696_p2() {
    add_ln703_2744_fu_60696_p2 = (!zext_ln708_668_fu_40046_p1.read().is_01() || !zext_ln1118_1010_fu_39683_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_668_fu_40046_p1.read()) + sc_biguint<10>(zext_ln1118_1010_fu_39683_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2745_fu_60706_p2() {
    add_ln703_2745_fu_60706_p2 = (!zext_ln703_560_fu_60702_p1.read().is_01() || !zext_ln708_666_fu_40042_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_560_fu_60702_p1.read()) + sc_biguint<11>(zext_ln708_666_fu_40042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2746_fu_60716_p2() {
    add_ln703_2746_fu_60716_p2 = (!sext_ln708_204_fu_40038_p1.read().is_01() || !zext_ln203_370_fu_39985_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_204_fu_40038_p1.read()) + sc_biguint<9>(zext_ln203_370_fu_39985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2747_fu_60726_p2() {
    add_ln703_2747_fu_60726_p2 = (!zext_ln1118_1020_fu_39988_p1.read().is_01() || !zext_ln1118_1022_fu_40064_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1020_fu_39988_p1.read()) + sc_biguint<9>(zext_ln1118_1022_fu_40064_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2748_fu_60736_p2() {
    add_ln703_2748_fu_60736_p2 = (!zext_ln703_562_fu_60732_p1.read().is_01() || !sext_ln703_1603_fu_60722_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_562_fu_60732_p1.read()) + sc_bigint<11>(sext_ln703_1603_fu_60722_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2749_fu_60746_p2() {
    add_ln703_2749_fu_60746_p2 = (!sext_ln703_1604_fu_60742_p1.read().is_01() || !zext_ln703_561_fu_60712_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1604_fu_60742_p1.read()) + sc_biguint<13>(zext_ln703_561_fu_60712_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_274_fu_45436_p2() {
    add_ln703_274_fu_45436_p2 = (!zext_ln703_67_fu_45432_p1.read().is_01() || !sext_ln703_232_fu_45414_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_67_fu_45432_p1.read()) + sc_bigint<13>(sext_ln703_232_fu_45414_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2750_fu_60756_p2() {
    add_ln703_2750_fu_60756_p2 = (!sext_ln703_1605_fu_60752_p1.read().is_01() || !add_ln703_2743_fu_60690_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1605_fu_60752_p1.read()) + sc_biguint<15>(add_ln703_2743_fu_60690_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2751_fu_60762_p2() {
    add_ln703_2751_fu_60762_p2 = (!zext_ln708_917_fu_40137_p1.read().is_01() || !zext_ln203_372_fu_40118_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_917_fu_40137_p1.read()) + sc_biguint<10>(zext_ln203_372_fu_40118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2753_fu_23812_p2() {
    add_ln703_2753_fu_23812_p2 = (!sext_ln203_590_fu_13286_p1.read().is_01() || !ap_const_lv12_80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_590_fu_13286_p1.read()) + sc_biguint<12>(ap_const_lv12_80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2754_fu_23818_p2() {
    add_ln703_2754_fu_23818_p2 = (!sext_ln1118_392_fu_13318_p1.read().is_01() || !sext_ln1118_394_fu_13342_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_392_fu_13318_p1.read()) + sc_bigint<10>(sext_ln1118_394_fu_13342_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2755_fu_23828_p2() {
    add_ln703_2755_fu_23828_p2 = (!sext_ln703_1607_fu_23824_p1.read().is_01() || !add_ln703_2753_fu_23812_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1607_fu_23824_p1.read()) + sc_biguint<12>(add_ln703_2753_fu_23812_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2756_fu_23838_p2() {
    add_ln703_2756_fu_23838_p2 = (!sext_ln703_1608_fu_23834_p1.read().is_01() || !sext_ln1118_396_fu_13444_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1608_fu_23834_p1.read()) + sc_bigint<13>(sext_ln1118_396_fu_13444_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2757_fu_23844_p2() {
    add_ln703_2757_fu_23844_p2 = (!sext_ln708_207_fu_13486_p1.read().is_01() || !zext_ln1118_1031_fu_13518_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_207_fu_13486_p1.read()) + sc_biguint<12>(zext_ln1118_1031_fu_13518_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2758_fu_23854_p2() {
    add_ln703_2758_fu_23854_p2 = (!sext_ln703_1609_fu_23850_p1.read().is_01() || !add_ln703_2756_fu_23838_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1609_fu_23850_p1.read()) + sc_biguint<13>(add_ln703_2756_fu_23838_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2759_fu_23864_p2() {
    add_ln703_2759_fu_23864_p2 = (!sext_ln1118_395_fu_13412_p1.read().is_01() || !sext_ln708_206_fu_13362_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_395_fu_13412_p1.read()) + sc_bigint<10>(sext_ln708_206_fu_13362_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_275_fu_45446_p2() {
    add_ln703_275_fu_45446_p2 = (!sext_ln703_233_fu_45442_p1.read().is_01() || !add_ln703_269_fu_45392_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_233_fu_45442_p1.read()) + sc_biguint<15>(add_ln703_269_fu_45392_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2760_fu_23874_p2() {
    add_ln703_2760_fu_23874_p2 = (!zext_ln1118_1026_fu_13380_p1.read().is_01() || !zext_ln1118_986_fu_12696_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_1026_fu_13380_p1.read()) + sc_biguint<9>(zext_ln1118_986_fu_12696_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2761_fu_23884_p2() {
    add_ln703_2761_fu_23884_p2 = (!zext_ln703_564_fu_23880_p1.read().is_01() || !sext_ln703_1611_fu_23870_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_564_fu_23880_p1.read()) + sc_bigint<11>(sext_ln703_1611_fu_23870_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2762_fu_23894_p2() {
    add_ln703_2762_fu_23894_p2 = (!sext_ln703_1612_fu_23890_p1.read().is_01() || !sext_ln703_1610_fu_23860_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1612_fu_23890_p1.read()) + sc_bigint<14>(sext_ln703_1610_fu_23860_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2763_fu_23900_p2() {
    add_ln703_2763_fu_23900_p2 = (!add_ln703_2762_fu_23894_p2.read().is_01() || !sext_ln1118_399_fu_13560_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2762_fu_23894_p2.read()) + sc_bigint<14>(sext_ln1118_399_fu_13560_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2764_fu_60785_p2() {
    add_ln703_2764_fu_60785_p2 = (!sext_ln203_591_fu_40172_p1.read().is_01() || !sext_ln1118_404_fu_40175_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_591_fu_40172_p1.read()) + sc_bigint<12>(sext_ln1118_404_fu_40175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2765_fu_60795_p2() {
    add_ln703_2765_fu_60795_p2 = (!sext_ln703_1614_fu_60791_p1.read().is_01() || !sext_ln1118_400_fu_40168_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1614_fu_60791_p1.read()) + sc_bigint<13>(sext_ln1118_400_fu_40168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2766_fu_60805_p2() {
    add_ln703_2766_fu_60805_p2 = (!sext_ln703_1615_fu_60801_p1.read().is_01() || !sext_ln703_1613_fu_60782_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1615_fu_60801_p1.read()) + sc_bigint<15>(sext_ln703_1613_fu_60782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2767_fu_23906_p2() {
    add_ln703_2767_fu_23906_p2 = (!sext_ln1118_401_fu_13584_p1.read().is_01() || !zext_ln1118_1036_fu_13626_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_401_fu_13584_p1.read()) + sc_biguint<11>(zext_ln1118_1036_fu_13626_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2768_fu_23916_p2() {
    add_ln703_2768_fu_23916_p2 = (!sext_ln703_1616_fu_23912_p1.read().is_01() || !sext_ln708_208_fu_13698_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1616_fu_23912_p1.read()) + sc_bigint<12>(sext_ln708_208_fu_13698_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2769_fu_60814_p2() {
    add_ln703_2769_fu_60814_p2 = (!sext_ln1118_406_fu_40210_p1.read().is_01() || !zext_ln1116_237_reg_68512.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_406_fu_40210_p1.read()) + sc_biguint<10>(zext_ln1116_237_reg_68512.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_276_fu_45452_p2() {
    add_ln703_276_fu_45452_p2 = (!add_ln703_275_fu_45446_p2.read().is_01() || !sext_ln203_55_fu_28269_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_275_fu_45446_p2.read()) + sc_bigint<15>(sext_ln203_55_fu_28269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2770_fu_60823_p2() {
    add_ln703_2770_fu_60823_p2 = (!sext_ln703_1618_fu_60819_p1.read().is_01() || !zext_ln1118_1039_fu_40206_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1618_fu_60819_p1.read()) + sc_biguint<11>(zext_ln1118_1039_fu_40206_p1.read()));
}

}

