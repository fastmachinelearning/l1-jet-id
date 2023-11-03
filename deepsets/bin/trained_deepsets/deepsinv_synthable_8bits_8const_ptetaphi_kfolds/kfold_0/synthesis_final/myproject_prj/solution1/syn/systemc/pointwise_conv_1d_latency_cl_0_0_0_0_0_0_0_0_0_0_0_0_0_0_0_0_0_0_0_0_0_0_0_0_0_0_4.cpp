#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1585_fu_12487693_p2() {
    add_ln703_1585_fu_12487693_p2 = (!zext_ln1118_2702_fu_12432586_p1.read().is_01() || !sext_ln1118_505_fu_12432614_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2702_fu_12432586_p1.read()) + sc_bigint<12>(sext_ln1118_505_fu_12432614_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1586_fu_12487703_p2() {
    add_ln703_1586_fu_12487703_p2 = (!sext_ln703_1006_fu_12487699_p1.read().is_01() || !zext_ln708_381_fu_12432572_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1006_fu_12487699_p1.read()) + sc_biguint<13>(zext_ln708_381_fu_12432572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1587_fu_12507270_p2() {
    add_ln703_1587_fu_12507270_p2 = (!sext_ln703_1007_fu_12507267_p1.read().is_01() || !sext_ln703_1005_fu_12507263_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1007_fu_12507267_p1.read()) + sc_bigint<15>(sext_ln703_1005_fu_12507263_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1588_fu_12487709_p2() {
    add_ln703_1588_fu_12487709_p2 = (!sext_ln1118_507_fu_12432648_p1.read().is_01() || !sext_ln1118_509_fu_12432688_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_507_fu_12432648_p1.read()) + sc_bigint<10>(sext_ln1118_509_fu_12432688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1589_fu_12487715_p2() {
    add_ln703_1589_fu_12487715_p2 = (!sext_ln1118_506_fu_12432628_p1.read().is_01() || !sext_ln1118_503_fu_12432540_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_506_fu_12432628_p1.read()) + sc_bigint<7>(sext_ln1118_503_fu_12432540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1590_fu_12487725_p2() {
    add_ln703_1590_fu_12487725_p2 = (!sext_ln703_1008_fu_12487721_p1.read().is_01() || !sext_ln1118_504_fu_12432610_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln703_1008_fu_12487721_p1.read()) + sc_bigint<8>(sext_ln1118_504_fu_12432610_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1591_fu_12487735_p2() {
    add_ln703_1591_fu_12487735_p2 = (!sext_ln703_1009_fu_12487731_p1.read().is_01() || !add_ln703_1588_fu_12487709_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1009_fu_12487731_p1.read()) + sc_biguint<10>(add_ln703_1588_fu_12487709_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1592_fu_12507279_p2() {
    add_ln703_1592_fu_12507279_p2 = (!sext_ln703_1010_fu_12507276_p1.read().is_01() || !add_ln703_1587_fu_12507270_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1010_fu_12507276_p1.read()) + sc_biguint<15>(add_ln703_1587_fu_12507270_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1593_fu_12507285_p2() {
    add_ln703_1593_fu_12507285_p2 = (!add_ln703_1592_fu_12507279_p2.read().is_01() || !sext_ln203_229_fu_12503038_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1592_fu_12507279_p2.read()) + sc_bigint<15>(sext_ln203_229_fu_12503038_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1594_fu_12487741_p2() {
    add_ln703_1594_fu_12487741_p2 = (!zext_ln203_374_fu_12432740_p1.read().is_01() || !zext_ln203_375_fu_12432764_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_374_fu_12432740_p1.read()) + sc_biguint<9>(zext_ln203_375_fu_12432764_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1595_fu_12487751_p2() {
    add_ln703_1595_fu_12487751_p2 = (!zext_ln703_256_fu_12487747_p1.read().is_01() || !sext_ln203_233_fu_12432854_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_256_fu_12487747_p1.read()) + sc_bigint<12>(sext_ln203_233_fu_12432854_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1596_fu_12507294_p2() {
    add_ln703_1596_fu_12507294_p2 = (!sext_ln703_1011_fu_12507291_p1.read().is_01() || !add_ln703_1593_fu_12507285_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1011_fu_12507291_p1.read()) + sc_biguint<15>(add_ln703_1593_fu_12507285_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1597_fu_12487757_p2() {
    add_ln703_1597_fu_12487757_p2 = (!sext_ln203_230_fu_12432736_p1.read().is_01() || !sext_ln203_232_fu_12432840_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_230_fu_12432736_p1.read()) + sc_bigint<11>(sext_ln203_232_fu_12432840_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1598_fu_12487767_p2() {
    add_ln703_1598_fu_12487767_p2 = (!sext_ln703_1012_fu_12487763_p1.read().is_01() || !zext_ln203_81_fu_12432812_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1012_fu_12487763_p1.read()) + sc_biguint<12>(zext_ln203_81_fu_12432812_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1599_fu_12487773_p2() {
    add_ln703_1599_fu_12487773_p2 = (!zext_ln708_1119_fu_12421216_p1.read().is_01() || !sext_ln203_235_fu_12432892_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1119_fu_12421216_p1.read()) + sc_bigint<8>(sext_ln203_235_fu_12432892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_159_fu_12478795_p2() {
    add_ln703_159_fu_12478795_p2 = (!sext_ln203_25_fu_12405099_p1.read().is_01() || !zext_ln703_fu_12478791_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_25_fu_12405099_p1.read()) + sc_biguint<12>(zext_ln703_fu_12478791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_15_fu_12503456_p2() {
    add_ln703_15_fu_12503456_p2 = (!sext_ln703_19_fu_12503453_p1.read().is_01() || !sext_ln703_18_fu_12503449_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_19_fu_12503453_p1.read()) + sc_bigint<15>(sext_ln703_18_fu_12503449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1600_fu_12487783_p2() {
    add_ln703_1600_fu_12487783_p2 = (!sext_ln703_1013_fu_12487779_p1.read().is_01() || !sext_ln203_231_fu_12432788_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_1013_fu_12487779_p1.read()) + sc_bigint<9>(sext_ln203_231_fu_12432788_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1601_fu_12487793_p2() {
    add_ln703_1601_fu_12487793_p2 = (!sext_ln703_1014_fu_12487789_p1.read().is_01() || !add_ln703_1598_fu_12487767_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1014_fu_12487789_p1.read()) + sc_biguint<12>(add_ln703_1598_fu_12487767_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1603_fu_12487799_p2() {
    add_ln703_1603_fu_12487799_p2 = (!zext_ln203_376_fu_12432916_p1.read().is_01() || !ap_const_lv9_158.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_376_fu_12432916_p1.read()) + sc_bigint<9>(ap_const_lv9_158));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1604_fu_12487809_p2() {
    add_ln703_1604_fu_12487809_p2 = (!zext_ln203_377_fu_12432936_p1.read().is_01() || !sext_ln703_227_fu_12487805_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_377_fu_12432936_p1.read()) + sc_bigint<10>(sext_ln703_227_fu_12487805_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1605_fu_12487815_p2() {
    add_ln703_1605_fu_12487815_p2 = (!add_ln703_1604_fu_12487809_p2.read().is_01() || !zext_ln203_378_fu_12432960_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_1604_fu_12487809_p2.read()) + sc_biguint<10>(zext_ln203_378_fu_12432960_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1606_fu_12487825_p2() {
    add_ln703_1606_fu_12487825_p2 = (!sext_ln203_236_fu_12432964_p1.read().is_01() || !sext_ln703_228_fu_12487821_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_236_fu_12432964_p1.read()) + sc_bigint<12>(sext_ln703_228_fu_12487821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1607_fu_12487831_p2() {
    add_ln703_1607_fu_12487831_p2 = (!add_ln703_1606_fu_12487825_p2.read().is_01() || !zext_ln1118_2712_fu_12433002_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_1606_fu_12487825_p2.read()) + sc_biguint<12>(zext_ln1118_2712_fu_12433002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1608_fu_12487841_p2() {
    add_ln703_1608_fu_12487841_p2 = (!sext_ln203_237_fu_12432984_p1.read().is_01() || !zext_ln708_385_fu_12432988_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_237_fu_12432984_p1.read()) + sc_biguint<10>(zext_ln708_385_fu_12432988_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1609_fu_12487851_p2() {
    add_ln703_1609_fu_12487851_p2 = (!sext_ln703_1018_fu_12487847_p1.read().is_01() || !sext_ln703_1017_fu_12487837_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1018_fu_12487847_p1.read()) + sc_bigint<13>(sext_ln703_1017_fu_12487837_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_160_fu_12478801_p2() {
    add_ln703_160_fu_12478801_p2 = (!add_ln703_159_fu_12478795_p2.read().is_01() || !zext_ln1118_503_fu_12405127_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_159_fu_12478795_p2.read()) + sc_biguint<12>(zext_ln1118_503_fu_12405127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1610_fu_12507313_p2() {
    add_ln703_1610_fu_12507313_p2 = (!add_ln703_1609_reg_12516747.read().is_01() || !sext_ln1118_513_fu_12503041_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_1609_reg_12516747.read()) + sc_bigint<13>(sext_ln1118_513_fu_12503041_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1611_fu_12487857_p2() {
    add_ln703_1611_fu_12487857_p2 = (!trunc_ln1118_95_fu_12433030_p4.read().is_01() || !zext_ln708_1219_fu_12433060_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_95_fu_12433030_p4.read()) + sc_biguint<9>(zext_ln708_1219_fu_12433060_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1612_fu_12507321_p2() {
    add_ln703_1612_fu_12507321_p2 = (!zext_ln703_257_fu_12507318_p1.read().is_01() || !add_ln703_1610_fu_12507313_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_257_fu_12507318_p1.read()) + sc_biguint<13>(add_ln703_1610_fu_12507313_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1613_fu_12487863_p2() {
    add_ln703_1613_fu_12487863_p2 = (!sext_ln1118_514_fu_12433088_p1.read().is_01() || !sext_ln1118_515_fu_12433102_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_514_fu_12433088_p1.read()) + sc_bigint<11>(sext_ln1118_515_fu_12433102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1614_fu_12487873_p2() {
    add_ln703_1614_fu_12487873_p2 = (!zext_ln708_1220_fu_12433074_p1.read().is_01() || !sext_ln1118_512_fu_12433026_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1220_fu_12433074_p1.read()) + sc_bigint<8>(sext_ln1118_512_fu_12433026_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1615_fu_12487883_p2() {
    add_ln703_1615_fu_12487883_p2 = (!sext_ln703_1021_fu_12487879_p1.read().is_01() || !sext_ln703_1020_fu_12487869_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1021_fu_12487879_p1.read()) + sc_bigint<12>(sext_ln703_1020_fu_12487869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1616_fu_12507334_p2() {
    add_ln703_1616_fu_12507334_p2 = (!sext_ln703_1022_fu_12507331_p1.read().is_01() || !sext_ln703_1019_fu_12507327_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1022_fu_12507331_p1.read()) + sc_bigint<14>(sext_ln703_1019_fu_12507327_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1617_fu_12507340_p2() {
    add_ln703_1617_fu_12507340_p2 = (!add_ln703_1616_fu_12507334_p2.read().is_01() || !sext_ln1118_516_fu_12503044_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_1616_fu_12507334_p2.read()) + sc_bigint<14>(sext_ln1118_516_fu_12503044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1618_fu_12487889_p2() {
    add_ln703_1618_fu_12487889_p2 = (!sext_ln1118_334_fu_12421746_p1.read().is_01() || !sext_ln203_163_fu_12423415_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_334_fu_12421746_p1.read()) + sc_bigint<12>(sext_ln203_163_fu_12423415_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1619_fu_12507353_p2() {
    add_ln703_1619_fu_12507353_p2 = (!sext_ln703_1024_fu_12507350_p1.read().is_01() || !sext_ln1118_520_fu_12503050_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1024_fu_12507350_p1.read()) + sc_bigint<13>(sext_ln1118_520_fu_12503050_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_161_fu_12478811_p2() {
    add_ln703_161_fu_12478811_p2 = (!sext_ln1118_51_fu_12405113_p1.read().is_01() || !sext_ln708_8_fu_12405141_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_51_fu_12405113_p1.read()) + sc_bigint<11>(sext_ln708_8_fu_12405141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1620_fu_12507363_p2() {
    add_ln703_1620_fu_12507363_p2 = (!sext_ln703_1025_fu_12507359_p1.read().is_01() || !sext_ln703_1023_fu_12507346_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1025_fu_12507359_p1.read()) + sc_bigint<15>(sext_ln703_1023_fu_12507346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1621_fu_12487895_p2() {
    add_ln703_1621_fu_12487895_p2 = (!zext_ln708_1222_fu_12433168_p1.read().is_01() || !zext_ln708_1223_fu_12433182_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1222_fu_12433168_p1.read()) + sc_biguint<11>(zext_ln708_1223_fu_12433182_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1622_fu_12487901_p2() {
    add_ln703_1622_fu_12487901_p2 = (!add_ln703_1621_fu_12487895_p2.read().is_01() || !zext_ln708_1221_fu_12433126_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_1621_fu_12487895_p2.read()) + sc_biguint<11>(zext_ln708_1221_fu_12433126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1623_fu_12487911_p2() {
    add_ln703_1623_fu_12487911_p2 = (!sext_ln1118_518_fu_12433154_p1.read().is_01() || !sext_ln1118_517_fu_12433140_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_518_fu_12433154_p1.read()) + sc_bigint<11>(sext_ln1118_517_fu_12433140_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1624_fu_12487921_p2() {
    add_ln703_1624_fu_12487921_p2 = (!sext_ln703_1026_fu_12487917_p1.read().is_01() || !zext_ln1118_2714_fu_12433186_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1026_fu_12487917_p1.read()) + sc_biguint<12>(zext_ln1118_2714_fu_12433186_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1625_fu_12487931_p2() {
    add_ln703_1625_fu_12487931_p2 = (!sext_ln703_1027_fu_12487927_p1.read().is_01() || !zext_ln703_258_fu_12487907_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1027_fu_12487927_p1.read()) + sc_biguint<13>(zext_ln703_258_fu_12487907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1626_fu_12507372_p2() {
    add_ln703_1626_fu_12507372_p2 = (!sext_ln703_1028_fu_12507369_p1.read().is_01() || !add_ln703_1620_fu_12507363_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1028_fu_12507369_p1.read()) + sc_biguint<15>(add_ln703_1620_fu_12507363_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1627_fu_12507378_p2() {
    add_ln703_1627_fu_12507378_p2 = (!add_ln703_1626_fu_12507372_p2.read().is_01() || !sext_ln203_240_fu_12503053_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1626_fu_12507372_p2.read()) + sc_bigint<15>(sext_ln203_240_fu_12503053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1628_fu_12487937_p2() {
    add_ln703_1628_fu_12487937_p2 = (!sext_ln203_242_fu_12433290_p1.read().is_01() || !zext_ln203_82_fu_12433338_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_242_fu_12433290_p1.read()) + sc_biguint<12>(zext_ln203_82_fu_12433338_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1629_fu_12507387_p2() {
    add_ln703_1629_fu_12507387_p2 = (!sext_ln703_1029_fu_12507384_p1.read().is_01() || !add_ln703_1627_fu_12507378_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1029_fu_12507384_p1.read()) + sc_biguint<15>(add_ln703_1627_fu_12507378_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_162_fu_12478821_p2() {
    add_ln703_162_fu_12478821_p2 = (!sext_ln703_135_fu_12478817_p1.read().is_01() || !sext_ln703_134_fu_12478807_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_135_fu_12478817_p1.read()) + sc_bigint<13>(sext_ln703_134_fu_12478807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1630_fu_12487943_p2() {
    add_ln703_1630_fu_12487943_p2 = (!sext_ln203_243_fu_12433304_p1.read().is_01() || !sext_ln203_238_fu_12433210_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_243_fu_12433304_p1.read()) + sc_bigint<10>(sext_ln203_238_fu_12433210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1631_fu_12487953_p2() {
    add_ln703_1631_fu_12487953_p2 = (!sext_ln203_244_fu_12433324_p1.read().is_01() || !sext_ln203_241_fu_12433270_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_244_fu_12433324_p1.read()) + sc_bigint<9>(sext_ln203_241_fu_12433270_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1632_fu_12487963_p2() {
    add_ln703_1632_fu_12487963_p2 = (!sext_ln703_1031_fu_12487959_p1.read().is_01() || !sext_ln203_239_fu_12433230_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1031_fu_12487959_p1.read()) + sc_bigint<10>(sext_ln203_239_fu_12433230_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1633_fu_12487973_p2() {
    add_ln703_1633_fu_12487973_p2 = (!sext_ln703_1032_fu_12487969_p1.read().is_01() || !sext_ln703_1030_fu_12487949_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1032_fu_12487969_p1.read()) + sc_bigint<11>(sext_ln703_1030_fu_12487949_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1635_fu_12487979_p2() {
    add_ln703_1635_fu_12487979_p2 = (!zext_ln708_1224_fu_12433362_p1.read().is_01() || !ap_const_lv11_450.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1224_fu_12433362_p1.read()) + sc_bigint<11>(ap_const_lv11_450));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1636_fu_12487989_p2() {
    add_ln703_1636_fu_12487989_p2 = (!zext_ln203_83_fu_12433414_p1.read().is_01() || !sext_ln203_245_fu_12433382_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_83_fu_12433414_p1.read()) + sc_bigint<12>(sext_ln203_245_fu_12433382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1637_fu_12487995_p2() {
    add_ln703_1637_fu_12487995_p2 = (!add_ln703_1636_fu_12487989_p2.read().is_01() || !sext_ln703_233_fu_12487985_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_1636_fu_12487989_p2.read()) + sc_bigint<12>(sext_ln703_233_fu_12487985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1638_fu_12488001_p2() {
    add_ln703_1638_fu_12488001_p2 = (!add_ln703_1637_fu_12487995_p2.read().is_01() || !zext_ln1118_2717_fu_12433428_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_1637_fu_12487995_p2.read()) + sc_biguint<12>(zext_ln1118_2717_fu_12433428_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1639_fu_12488007_p2() {
    add_ln703_1639_fu_12488007_p2 = (!zext_ln1118_2719_fu_12433472_p1.read().is_01() || !sext_ln708_98_fu_12433448_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2719_fu_12433472_p1.read()) + sc_bigint<10>(sext_ln708_98_fu_12433448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_163_fu_12478827_p2() {
    add_ln703_163_fu_12478827_p2 = (!add_ln703_162_fu_12478821_p2.read().is_01() || !zext_ln1118_504_fu_12405165_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_162_fu_12478821_p2.read()) + sc_biguint<13>(zext_ln1118_504_fu_12405165_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1640_fu_12488017_p2() {
    add_ln703_1640_fu_12488017_p2 = (!sext_ln703_1035_fu_12488013_p1.read().is_01() || !add_ln703_1638_fu_12488001_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1035_fu_12488013_p1.read()) + sc_biguint<12>(add_ln703_1638_fu_12488001_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1641_fu_12488027_p2() {
    add_ln703_1641_fu_12488027_p2 = (!sext_ln703_1036_fu_12488023_p1.read().is_01() || !zext_ln1118_2721_fu_12433500_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1036_fu_12488023_p1.read()) + sc_biguint<13>(zext_ln1118_2721_fu_12433500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1642_fu_12488033_p2() {
    add_ln703_1642_fu_12488033_p2 = (!zext_ln1118_2722_fu_12433542_p1.read().is_01() || !zext_ln1118_2723_fu_12433556_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2722_fu_12433542_p1.read()) + sc_biguint<10>(zext_ln1118_2723_fu_12433556_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1643_fu_12488043_p2() {
    add_ln703_1643_fu_12488043_p2 = (!zext_ln703_259_fu_12488039_p1.read().is_01() || !zext_ln708_1225_fu_12433514_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_259_fu_12488039_p1.read()) + sc_biguint<11>(zext_ln708_1225_fu_12433514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1644_fu_12488053_p2() {
    add_ln703_1644_fu_12488053_p2 = (!zext_ln703_260_fu_12488049_p1.read().is_01() || !add_ln703_1641_fu_12488027_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_260_fu_12488049_p1.read()) + sc_biguint<13>(add_ln703_1641_fu_12488027_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1645_fu_12488059_p2() {
    add_ln703_1645_fu_12488059_p2 = (!zext_ln1118_2726_fu_12433622_p1.read().is_01() || !zext_ln1116_244_fu_12433642_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2726_fu_12433622_p1.read()) + sc_biguint<10>(zext_ln1116_244_fu_12433642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1646_fu_12488069_p2() {
    add_ln703_1646_fu_12488069_p2 = (!zext_ln1118_2724_fu_12433570_p1.read().is_01() || !sext_ln708_99_fu_12433496_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1118_2724_fu_12433570_p1.read()) + sc_bigint<6>(sext_ln708_99_fu_12433496_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1647_fu_12488079_p2() {
    add_ln703_1647_fu_12488079_p2 = (!sext_ln703_1038_fu_12488075_p1.read().is_01() || !sext_ln1118_522_fu_12433602_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_1038_fu_12488075_p1.read()) + sc_bigint<9>(sext_ln1118_522_fu_12433602_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1648_fu_12488089_p2() {
    add_ln703_1648_fu_12488089_p2 = (!sext_ln703_1039_fu_12488085_p1.read().is_01() || !zext_ln703_261_fu_12488065_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1039_fu_12488085_p1.read()) + sc_biguint<11>(zext_ln703_261_fu_12488065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1649_fu_12507412_p2() {
    add_ln703_1649_fu_12507412_p2 = (!sext_ln703_1040_fu_12507409_p1.read().is_01() || !sext_ln703_1037_fu_12507406_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1040_fu_12507409_p1.read()) + sc_bigint<14>(sext_ln703_1037_fu_12507406_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_164_fu_12478833_p2() {
    add_ln703_164_fu_12478833_p2 = (!zext_ln1118_2264_fu_12405277_p1.read().is_01() || !zext_ln708_976_fu_12405309_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2264_fu_12405277_p1.read()) + sc_biguint<9>(zext_ln708_976_fu_12405309_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1650_fu_12507418_p2() {
    add_ln703_1650_fu_12507418_p2 = (!add_ln703_1649_fu_12507412_p2.read().is_01() || !sext_ln708_100_fu_12503056_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_1649_fu_12507412_p2.read()) + sc_bigint<14>(sext_ln708_100_fu_12503056_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1651_fu_12488095_p2() {
    add_ln703_1651_fu_12488095_p2 = (!zext_ln708_1227_fu_12433766_p1.read().is_01() || !trunc_ln1118_96_fu_12433820_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1227_fu_12433766_p1.read()) + sc_biguint<10>(trunc_ln1118_96_fu_12433820_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1652_fu_12488105_p2() {
    add_ln703_1652_fu_12488105_p2 = (!zext_ln703_262_fu_12488101_p1.read().is_01() || !zext_ln708_1226_fu_12433686_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_262_fu_12488101_p1.read()) + sc_biguint<11>(zext_ln708_1226_fu_12433686_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1653_fu_12507427_p2() {
    add_ln703_1653_fu_12507427_p2 = (!zext_ln703_263_fu_12507424_p1.read().is_01() || !add_ln703_1650_fu_12507418_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_263_fu_12507424_p1.read()) + sc_biguint<14>(add_ln703_1650_fu_12507418_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1654_fu_12488111_p2() {
    add_ln703_1654_fu_12488111_p2 = (!sext_ln1118_525_fu_12433722_p1.read().is_01() || !sext_ln1118_530_fu_12433860_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_525_fu_12433722_p1.read()) + sc_bigint<11>(sext_ln1118_530_fu_12433860_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1655_fu_12488121_p2() {
    add_ln703_1655_fu_12488121_p2 = (!sext_ln1118_523_fu_12433666_p1.read().is_01() || !sext_ln1118_526_fu_12433752_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_523_fu_12433666_p1.read()) + sc_bigint<9>(sext_ln1118_526_fu_12433752_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1656_fu_12488131_p2() {
    add_ln703_1656_fu_12488131_p2 = (!sext_ln703_1043_fu_12488127_p1.read().is_01() || !sext_ln1118_528_fu_12433800_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1043_fu_12488127_p1.read()) + sc_bigint<10>(sext_ln1118_528_fu_12433800_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1657_fu_12488141_p2() {
    add_ln703_1657_fu_12488141_p2 = (!sext_ln703_1044_fu_12488137_p1.read().is_01() || !sext_ln703_1042_fu_12488117_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1044_fu_12488137_p1.read()) + sc_bigint<12>(sext_ln703_1042_fu_12488117_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1658_fu_12507440_p2() {
    add_ln703_1658_fu_12507440_p2 = (!sext_ln703_1045_fu_12507437_p1.read().is_01() || !sext_ln703_1041_fu_12507433_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1045_fu_12507437_p1.read()) + sc_bigint<15>(sext_ln703_1041_fu_12507433_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1659_fu_12507446_p2() {
    add_ln703_1659_fu_12507446_p2 = (!add_ln703_1658_fu_12507440_p2.read().is_01() || !zext_ln203_84_fu_12503059_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1658_fu_12507440_p2.read()) + sc_biguint<15>(zext_ln203_84_fu_12503059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_165_fu_12478843_p2() {
    add_ln703_165_fu_12478843_p2 = (!zext_ln703_33_fu_12478839_p1.read().is_01() || !zext_ln708_975_fu_12405221_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_33_fu_12478839_p1.read()) + sc_biguint<11>(zext_ln708_975_fu_12405221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1660_fu_12488147_p2() {
    add_ln703_1660_fu_12488147_p2 = (!sext_ln203_227_fu_12432186_p1.read().is_01() || !sext_ln203_249_fu_12433954_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_227_fu_12432186_p1.read()) + sc_bigint<11>(sext_ln203_249_fu_12433954_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1661_fu_12507455_p2() {
    add_ln703_1661_fu_12507455_p2 = (!sext_ln703_1046_fu_12507452_p1.read().is_01() || !add_ln703_1659_fu_12507446_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1046_fu_12507452_p1.read()) + sc_biguint<15>(add_ln703_1659_fu_12507446_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1662_fu_12488153_p2() {
    add_ln703_1662_fu_12488153_p2 = (!sext_ln203_246_fu_12433874_p1.read().is_01() || !sext_ln203_247_fu_12433888_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_246_fu_12433874_p1.read()) + sc_bigint<10>(sext_ln203_247_fu_12433888_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1663_fu_12488163_p2() {
    add_ln703_1663_fu_12488163_p2 = (!sext_ln203_248_fu_12433912_p1.read().is_01() || !sext_ln203_234_fu_12432888_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_248_fu_12433912_p1.read()) + sc_bigint<9>(sext_ln203_234_fu_12432888_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1664_fu_12488173_p2() {
    add_ln703_1664_fu_12488173_p2 = (!sext_ln703_1048_fu_12488169_p1.read().is_01() || !sext_ln703_1047_fu_12488159_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1048_fu_12488169_p1.read()) + sc_bigint<11>(sext_ln703_1047_fu_12488159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1666_fu_12488179_p2() {
    add_ln703_1666_fu_12488179_p2 = (!trunc_ln203_18_fu_12433976_p4.read().is_01() || !ap_const_lv9_1D8.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_18_fu_12433976_p4.read()) + sc_bigint<9>(ap_const_lv9_1D8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1667_fu_12488189_p2() {
    add_ln703_1667_fu_12488189_p2 = (!zext_ln708_1228_fu_12434002_p1.read().is_01() || !sext_ln703_238_fu_12488185_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1228_fu_12434002_p1.read()) + sc_bigint<11>(sext_ln703_238_fu_12488185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1668_fu_12488199_p2() {
    add_ln703_1668_fu_12488199_p2 = (!sext_ln703_239_fu_12488195_p1.read().is_01() || !zext_ln203_86_fu_12434016_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_239_fu_12488195_p1.read()) + sc_biguint<12>(zext_ln203_86_fu_12434016_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1669_fu_12488209_p2() {
    add_ln703_1669_fu_12488209_p2 = (!zext_ln708_1229_fu_12434030_p1.read().is_01() || !trunc_ln708_2004_fu_12434034_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1229_fu_12434030_p1.read()) + sc_biguint<10>(trunc_ln708_2004_fu_12434034_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_166_fu_12478853_p2() {
    add_ln703_166_fu_12478853_p2 = (!zext_ln703_34_fu_12478849_p1.read().is_01() || !add_ln703_163_fu_12478827_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_34_fu_12478849_p1.read()) + sc_biguint<13>(add_ln703_163_fu_12478827_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1670_fu_12488219_p2() {
    add_ln703_1670_fu_12488219_p2 = (!zext_ln703_264_fu_12488215_p1.read().is_01() || !sext_ln703_240_fu_12488205_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_264_fu_12488215_p1.read()) + sc_bigint<13>(sext_ln703_240_fu_12488205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1671_fu_12488225_p2() {
    add_ln703_1671_fu_12488225_p2 = (!zext_ln708_1230_fu_12434068_p1.read().is_01() || !sext_ln1118_392_fu_12425729_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1230_fu_12434068_p1.read()) + sc_bigint<11>(sext_ln1118_392_fu_12425729_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1672_fu_12488235_p2() {
    add_ln703_1672_fu_12488235_p2 = (!sext_ln703_1051_fu_12488231_p1.read().is_01() || !zext_ln1118_2734_fu_12434054_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1051_fu_12488231_p1.read()) + sc_biguint<12>(zext_ln1118_2734_fu_12434054_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1673_fu_12488245_p2() {
    add_ln703_1673_fu_12488245_p2 = (!sext_ln703_1052_fu_12488241_p1.read().is_01() || !add_ln703_1670_fu_12488219_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1052_fu_12488241_p1.read()) + sc_biguint<13>(add_ln703_1670_fu_12488219_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1674_fu_12488251_p2() {
    add_ln703_1674_fu_12488251_p2 = (!zext_ln1118_2736_fu_12434120_p1.read().is_01() || !trunc_ln1118_97_fu_12434152_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2736_fu_12434120_p1.read()) + sc_biguint<10>(trunc_ln1118_97_fu_12434152_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1675_fu_12507480_p2() {
    add_ln703_1675_fu_12507480_p2 = (!zext_ln703_265_fu_12507477_p1.read().is_01() || !sext_ln703_241_fu_12507474_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_265_fu_12507477_p1.read()) + sc_bigint<14>(sext_ln703_241_fu_12507474_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1676_fu_12488257_p2() {
    add_ln703_1676_fu_12488257_p2 = (!sext_ln708_101_fu_12434148_p1.read().is_01() || !sext_ln1118_533_fu_12434106_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_101_fu_12434148_p1.read()) + sc_bigint<11>(sext_ln1118_533_fu_12434106_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1677_fu_12488267_p2() {
    add_ln703_1677_fu_12488267_p2 = (!sext_ln703_1053_fu_12488263_p1.read().is_01() || !sext_ln1118_532_fu_12434082_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1053_fu_12488263_p1.read()) + sc_bigint<12>(sext_ln1118_532_fu_12434082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1678_fu_12507489_p2() {
    add_ln703_1678_fu_12507489_p2 = (!sext_ln703_1054_fu_12507486_p1.read().is_01() || !add_ln703_1675_fu_12507480_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1054_fu_12507486_p1.read()) + sc_biguint<14>(add_ln703_1675_fu_12507480_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1679_fu_12507495_p2() {
    add_ln703_1679_fu_12507495_p2 = (!add_ln703_1678_fu_12507489_p2.read().is_01() || !sext_ln1118_536_fu_12503062_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_1678_fu_12507489_p2.read()) + sc_bigint<14>(sext_ln1118_536_fu_12503062_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_167_fu_12478859_p2() {
    add_ln703_167_fu_12478859_p2 = (!trunc_ln1118_10_fu_12403899_p4.read().is_01() || !zext_ln203_333_fu_12405329_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_10_fu_12403899_p4.read()) + sc_biguint<9>(zext_ln203_333_fu_12405329_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1680_fu_12488273_p2() {
    add_ln703_1680_fu_12488273_p2 = (!zext_ln1118_2740_fu_12434218_p1.read().is_01() || !zext_ln1118_2741_fu_12434232_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2740_fu_12434218_p1.read()) + sc_biguint<9>(zext_ln1118_2741_fu_12434232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1681_fu_12488283_p2() {
    add_ln703_1681_fu_12488283_p2 = (!zext_ln703_266_fu_12488279_p1.read().is_01() || !zext_ln203_379_fu_12434204_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_266_fu_12488279_p1.read()) + sc_biguint<10>(zext_ln203_379_fu_12434204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1682_fu_12507504_p2() {
    add_ln703_1682_fu_12507504_p2 = (!zext_ln703_267_fu_12507501_p1.read().is_01() || !add_ln703_1679_fu_12507495_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_267_fu_12507501_p1.read()) + sc_biguint<14>(add_ln703_1679_fu_12507495_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1683_fu_12488289_p2() {
    add_ln703_1683_fu_12488289_p2 = (!sext_ln1118_535_fu_12434190_p1.read().is_01() || !sext_ln1118_525_fu_12433722_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_535_fu_12434190_p1.read()) + sc_bigint<11>(sext_ln1118_525_fu_12433722_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1684_fu_12488299_p2() {
    add_ln703_1684_fu_12488299_p2 = (!sext_ln703_1056_fu_12488295_p1.read().is_01() || !zext_ln1118_2743_fu_12434292_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1056_fu_12488295_p1.read()) + sc_biguint<12>(zext_ln1118_2743_fu_12434292_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1685_fu_12488309_p2() {
    add_ln703_1685_fu_12488309_p2 = (!sext_ln708_102_fu_12434278_p1.read().is_01() || !sext_ln1118_508_fu_12432684_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_102_fu_12434278_p1.read()) + sc_bigint<9>(sext_ln1118_508_fu_12432684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1686_fu_12488319_p2() {
    add_ln703_1686_fu_12488319_p2 = (!sext_ln703_1058_fu_12488315_p1.read().is_01() || !sext_ln1118_537_fu_12434246_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1058_fu_12488315_p1.read()) + sc_bigint<11>(sext_ln1118_537_fu_12434246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1687_fu_12488329_p2() {
    add_ln703_1687_fu_12488329_p2 = (!sext_ln703_1059_fu_12488325_p1.read().is_01() || !sext_ln703_1057_fu_12488305_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1059_fu_12488325_p1.read()) + sc_bigint<13>(sext_ln703_1057_fu_12488305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1688_fu_12507517_p2() {
    add_ln703_1688_fu_12507517_p2 = (!sext_ln703_1060_fu_12507514_p1.read().is_01() || !sext_ln703_1055_fu_12507510_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1060_fu_12507514_p1.read()) + sc_bigint<15>(sext_ln703_1055_fu_12507510_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1689_fu_12507523_p2() {
    add_ln703_1689_fu_12507523_p2 = (!add_ln703_1688_fu_12507517_p2.read().is_01() || !zext_ln203_87_fu_12503065_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1688_fu_12507517_p2.read()) + sc_biguint<15>(zext_ln203_87_fu_12503065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_168_fu_12478869_p2() {
    add_ln703_168_fu_12478869_p2 = (!zext_ln1118_544_fu_12405345_p1.read().is_01() || !sext_ln1118_53_fu_12405245_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_544_fu_12405345_p1.read()) + sc_bigint<11>(sext_ln1118_53_fu_12405245_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1690_fu_12488335_p2() {
    add_ln703_1690_fu_12488335_p2 = (!zext_ln708_1232_fu_12434374_p1.read().is_01() || !zext_ln708_1233_fu_12434388_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1232_fu_12434374_p1.read()) + sc_biguint<11>(zext_ln708_1233_fu_12434388_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1691_fu_12488341_p2() {
    add_ln703_1691_fu_12488341_p2 = (!add_ln703_1690_fu_12488335_p2.read().is_01() || !zext_ln708_1231_fu_12434360_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_1690_fu_12488335_p2.read()) + sc_biguint<11>(zext_ln708_1231_fu_12434360_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1692_fu_12507532_p2() {
    add_ln703_1692_fu_12507532_p2 = (!zext_ln703_268_fu_12507529_p1.read().is_01() || !add_ln703_1689_fu_12507523_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_268_fu_12507529_p1.read()) + sc_biguint<15>(add_ln703_1689_fu_12507523_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1693_fu_12488347_p2() {
    add_ln703_1693_fu_12488347_p2 = (!zext_ln203_380_fu_12434408_p1.read().is_01() || !zext_ln203_381_fu_12434440_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_380_fu_12434408_p1.read()) + sc_biguint<10>(zext_ln203_381_fu_12434440_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1694_fu_12488357_p2() {
    add_ln703_1694_fu_12488357_p2 = (!sext_ln203_251_fu_12434336_p1.read().is_01() || !sext_ln203_252_fu_12434460_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_251_fu_12434336_p1.read()) + sc_bigint<9>(sext_ln203_252_fu_12434460_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1695_fu_12488367_p2() {
    add_ln703_1695_fu_12488367_p2 = (!sext_ln703_1061_fu_12488363_p1.read().is_01() || !sext_ln203_250_fu_12434306_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1061_fu_12488363_p1.read()) + sc_bigint<11>(sext_ln203_250_fu_12434306_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1696_fu_12488377_p2() {
    add_ln703_1696_fu_12488377_p2 = (!sext_ln703_1062_fu_12488373_p1.read().is_01() || !zext_ln703_269_fu_12488353_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1062_fu_12488373_p1.read()) + sc_biguint<12>(zext_ln703_269_fu_12488353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1698_fu_12488383_p2() {
    add_ln703_1698_fu_12488383_p2 = (!trunc_ln203_19_fu_12434478_p4.read().is_01() || !ap_const_lv8_98.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln203_19_fu_12434478_p4.read()) + sc_bigint<8>(ap_const_lv8_98));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1699_fu_12488393_p2() {
    add_ln703_1699_fu_12488393_p2 = (!sext_ln203_253_fu_12434488_p1.read().is_01() || !sext_ln703_244_fu_12488389_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_253_fu_12434488_p1.read()) + sc_bigint<12>(sext_ln703_244_fu_12488389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_169_fu_12478875_p2() {
    add_ln703_169_fu_12478875_p2 = (!add_ln703_168_fu_12478869_p2.read().is_01() || !sext_ln708_9_fu_12405207_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_168_fu_12478869_p2.read()) + sc_bigint<11>(sext_ln708_9_fu_12405207_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_16_fu_12477895_p2() {
    add_ln703_16_fu_12477895_p2 = (!zext_ln708_952_fu_12401321_p1.read().is_01() || !sext_ln1116_3_fu_12401025_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_952_fu_12401321_p1.read()) + sc_bigint<11>(sext_ln1116_3_fu_12401025_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1700_fu_12488403_p2() {
    add_ln703_1700_fu_12488403_p2 = (!sext_ln1118_538_fu_12434502_p1.read().is_01() || !sext_ln1118_540_fu_12434538_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_538_fu_12434502_p1.read()) + sc_bigint<11>(sext_ln1118_540_fu_12434538_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1701_fu_12488413_p2() {
    add_ln703_1701_fu_12488413_p2 = (!sext_ln703_1065_fu_12488409_p1.read().is_01() || !sext_ln703_245_fu_12488399_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1065_fu_12488409_p1.read()) + sc_bigint<13>(sext_ln703_245_fu_12488399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1702_fu_12488419_p2() {
    add_ln703_1702_fu_12488419_p2 = (!add_ln703_1701_fu_12488413_p2.read().is_01() || !zext_ln1118_2749_fu_12434582_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_1701_fu_12488413_p2.read()) + sc_biguint<13>(zext_ln1118_2749_fu_12434582_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1703_fu_12488425_p2() {
    add_ln703_1703_fu_12488425_p2 = (!zext_ln1118_2750_fu_12434596_p1.read().is_01() || !zext_ln1116_238_fu_12429053_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2750_fu_12434596_p1.read()) + sc_biguint<10>(zext_ln1116_238_fu_12429053_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1704_fu_12488435_p2() {
    add_ln703_1704_fu_12488435_p2 = (!zext_ln703_270_fu_12488431_p1.read().is_01() || !add_ln703_1702_fu_12488419_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_270_fu_12488431_p1.read()) + sc_biguint<13>(add_ln703_1702_fu_12488419_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1705_fu_12488441_p2() {
    add_ln703_1705_fu_12488441_p2 = (!zext_ln708_1235_fu_12434630_p1.read().is_01() || !sext_ln1118_544_fu_12434616_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1235_fu_12434630_p1.read()) + sc_bigint<11>(sext_ln1118_544_fu_12434616_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1706_fu_12488451_p2() {
    add_ln703_1706_fu_12488451_p2 = (!sext_ln708_103_fu_12434558_p1.read().is_01() || !sext_ln1116_39_fu_12426599_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_103_fu_12434558_p1.read()) + sc_bigint<10>(sext_ln1116_39_fu_12426599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1707_fu_12488461_p2() {
    add_ln703_1707_fu_12488461_p2 = (!sext_ln703_1068_fu_12488457_p1.read().is_01() || !sext_ln703_1067_fu_12488447_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1068_fu_12488457_p1.read()) + sc_bigint<12>(sext_ln703_1067_fu_12488447_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1708_fu_12507557_p2() {
    add_ln703_1708_fu_12507557_p2 = (!sext_ln703_1069_fu_12507554_p1.read().is_01() || !sext_ln703_1066_fu_12507551_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1069_fu_12507554_p1.read()) + sc_bigint<14>(sext_ln703_1066_fu_12507551_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1709_fu_12507563_p2() {
    add_ln703_1709_fu_12507563_p2 = (!add_ln703_1708_fu_12507557_p2.read().is_01() || !sext_ln1118_546_fu_12503071_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_1708_fu_12507557_p2.read()) + sc_bigint<14>(sext_ln1118_546_fu_12503071_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_170_fu_12478885_p2() {
    add_ln703_170_fu_12478885_p2 = (!sext_ln703_137_fu_12478881_p1.read().is_01() || !zext_ln703_35_fu_12478865_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_137_fu_12478881_p1.read()) + sc_biguint<12>(zext_ln703_35_fu_12478865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1710_fu_12488467_p2() {
    add_ln703_1710_fu_12488467_p2 = (!sext_ln1118_550_fu_12434724_p1.read().is_01() || !sext_ln1118_551_fu_12434738_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_550_fu_12434724_p1.read()) + sc_bigint<12>(sext_ln1118_551_fu_12434738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1711_fu_12488477_p2() {
    add_ln703_1711_fu_12488477_p2 = (!sext_ln703_1071_fu_12488473_p1.read().is_01() || !sext_ln1118_549_fu_12434710_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1071_fu_12488473_p1.read()) + sc_bigint<13>(sext_ln1118_549_fu_12434710_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1712_fu_12507576_p2() {
    add_ln703_1712_fu_12507576_p2 = (!sext_ln703_1072_fu_12507573_p1.read().is_01() || !sext_ln703_1070_fu_12507569_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1072_fu_12507573_p1.read()) + sc_bigint<15>(sext_ln703_1070_fu_12507569_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1713_fu_12488483_p2() {
    add_ln703_1713_fu_12488483_p2 = (!sext_ln1118_553_fu_12434772_p1.read().is_01() || !sext_ln1118_334_fu_12421746_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_553_fu_12434772_p1.read()) + sc_bigint<12>(sext_ln1118_334_fu_12421746_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1714_fu_12488493_p2() {
    add_ln703_1714_fu_12488493_p2 = (!sext_ln1118_547_fu_12434682_p1.read().is_01() || !sext_ln1118_552_fu_12434758_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_547_fu_12434682_p1.read()) + sc_bigint<9>(sext_ln1118_552_fu_12434758_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1715_fu_12488503_p2() {
    add_ln703_1715_fu_12488503_p2 = (!sext_ln703_1074_fu_12488499_p1.read().is_01() || !zext_ln1118_2754_fu_12434786_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1074_fu_12488499_p1.read()) + sc_biguint<10>(zext_ln1118_2754_fu_12434786_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1716_fu_12488513_p2() {
    add_ln703_1716_fu_12488513_p2 = (!sext_ln703_1075_fu_12488509_p1.read().is_01() || !sext_ln703_1073_fu_12488489_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1075_fu_12488509_p1.read()) + sc_bigint<13>(sext_ln703_1073_fu_12488489_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1717_fu_12507585_p2() {
    add_ln703_1717_fu_12507585_p2 = (!sext_ln703_1076_fu_12507582_p1.read().is_01() || !add_ln703_1712_fu_12507576_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1076_fu_12507582_p1.read()) + sc_biguint<15>(add_ln703_1712_fu_12507576_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1718_fu_12488519_p2() {
    add_ln703_1718_fu_12488519_p2 = (!sext_ln203_255_fu_12434840_p1.read().is_01() || !sext_ln203_256_fu_12434906_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_255_fu_12434840_p1.read()) + sc_bigint<12>(sext_ln203_256_fu_12434906_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1719_fu_12507594_p2() {
    add_ln703_1719_fu_12507594_p2 = (!sext_ln703_1077_fu_12507591_p1.read().is_01() || !add_ln703_1717_fu_12507585_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1077_fu_12507591_p1.read()) + sc_biguint<15>(add_ln703_1717_fu_12507585_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_171_fu_12503811_p2() {
    add_ln703_171_fu_12503811_p2 = (!sext_ln703_138_fu_12503808_p1.read().is_01() || !sext_ln703_136_fu_12503805_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_138_fu_12503808_p1.read()) + sc_bigint<14>(sext_ln703_136_fu_12503805_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1720_fu_12488525_p2() {
    add_ln703_1720_fu_12488525_p2 = (!trunc_ln203_57_fu_12434844_p4.read().is_01() || !zext_ln203_382_fu_12434864_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_57_fu_12434844_p4.read()) + sc_biguint<10>(zext_ln203_382_fu_12434864_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1721_fu_12488535_p2() {
    add_ln703_1721_fu_12488535_p2 = (!zext_ln703_271_fu_12488531_p1.read().is_01() || !sext_ln203_257_fu_12434962_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_271_fu_12488531_p1.read()) + sc_bigint<12>(sext_ln203_257_fu_12434962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1722_fu_12507603_p2() {
    add_ln703_1722_fu_12507603_p2 = (!sext_ln703_1078_fu_12507600_p1.read().is_01() || !add_ln703_1719_fu_12507594_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1078_fu_12507600_p1.read()) + sc_biguint<15>(add_ln703_1719_fu_12507594_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1723_fu_12488541_p2() {
    add_ln703_1723_fu_12488541_p2 = (!zext_ln708_1237_fu_12434892_p1.read().is_01() || !zext_ln708_1159_fu_12427017_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1237_fu_12434892_p1.read()) + sc_biguint<11>(zext_ln708_1159_fu_12427017_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1724_fu_12488547_p2() {
    add_ln703_1724_fu_12488547_p2 = (!add_ln703_1723_fu_12488541_p2.read().is_01() || !zext_ln708_1236_fu_12434878_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_1723_fu_12488541_p2.read()) + sc_biguint<11>(zext_ln708_1236_fu_12434878_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1725_fu_12488557_p2() {
    add_ln703_1725_fu_12488557_p2 = (!zext_ln708_1238_fu_12434976_p1.read().is_01() || !sext_ln203_254_fu_12434820_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1238_fu_12434976_p1.read()) + sc_bigint<11>(sext_ln203_254_fu_12434820_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1726_fu_12488567_p2() {
    add_ln703_1726_fu_12488567_p2 = (!sext_ln703_1080_fu_12488563_p1.read().is_01() || !zext_ln203_88_fu_12434938_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1080_fu_12488563_p1.read()) + sc_biguint<12>(zext_ln203_88_fu_12434938_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1727_fu_12488577_p2() {
    add_ln703_1727_fu_12488577_p2 = (!sext_ln703_1081_fu_12488573_p1.read().is_01() || !zext_ln703_272_fu_12488553_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1081_fu_12488573_p1.read()) + sc_biguint<13>(zext_ln703_272_fu_12488553_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1729_fu_12488583_p2() {
    add_ln703_1729_fu_12488583_p2 = (!zext_ln708_1239_fu_12435004_p1.read().is_01() || !ap_const_lv11_5F8.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1239_fu_12435004_p1.read()) + sc_bigint<11>(ap_const_lv11_5F8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_172_fu_12503817_p2() {
    add_ln703_172_fu_12503817_p2 = (!add_ln703_171_fu_12503811_p2.read().is_01() || !sext_ln1118_58_fu_12502819_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_171_fu_12503811_p2.read()) + sc_bigint<14>(sext_ln1118_58_fu_12502819_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1730_fu_12488593_p2() {
    add_ln703_1730_fu_12488593_p2 = (!sext_ln703_1083_fu_12488589_p1.read().is_01() || !sext_ln203_258_fu_12434990_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1083_fu_12488589_p1.read()) + sc_bigint<12>(sext_ln203_258_fu_12434990_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1731_fu_12488603_p2() {
    add_ln703_1731_fu_12488603_p2 = (!sext_ln1118_538_fu_12434502_p1.read().is_01() || !sext_ln203_259_fu_12435024_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_538_fu_12434502_p1.read()) + sc_bigint<11>(sext_ln203_259_fu_12435024_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1732_fu_12488613_p2() {
    add_ln703_1732_fu_12488613_p2 = (!sext_ln703_1084_fu_12488609_p1.read().is_01() || !sext_ln703_249_fu_12488599_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1084_fu_12488609_p1.read()) + sc_bigint<13>(sext_ln703_249_fu_12488599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1733_fu_12488619_p2() {
    add_ln703_1733_fu_12488619_p2 = (!add_ln703_1732_fu_12488613_p2.read().is_01() || !zext_ln1118_2759_fu_12435048_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_1732_fu_12488613_p2.read()) + sc_biguint<13>(zext_ln1118_2759_fu_12435048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1734_fu_12488625_p2() {
    add_ln703_1734_fu_12488625_p2 = (!zext_ln708_1234_fu_12434578_p1.read().is_01() || !zext_ln708_1240_fu_12435072_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1234_fu_12434578_p1.read()) + sc_biguint<11>(zext_ln708_1240_fu_12435072_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1735_fu_12507625_p2() {
    add_ln703_1735_fu_12507625_p2 = (!zext_ln703_273_fu_12507622_p1.read().is_01() || !add_ln703_1733_reg_12516882.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_273_fu_12507622_p1.read()) + sc_biguint<13>(add_ln703_1733_reg_12516882.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1736_fu_12488631_p2() {
    add_ln703_1736_fu_12488631_p2 = (!zext_ln1118_2762_fu_12435096_p1.read().is_01() || !sext_ln1118_559_fu_12435116_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2762_fu_12435096_p1.read()) + sc_bigint<10>(sext_ln1118_559_fu_12435116_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1737_fu_12488641_p2() {
    add_ln703_1737_fu_12488641_p2 = (!sext_ln1118_560_fu_12435140_p1.read().is_01() || !sext_ln708_98_fu_12433448_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_560_fu_12435140_p1.read()) + sc_bigint<10>(sext_ln708_98_fu_12433448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1738_fu_12488651_p2() {
    add_ln703_1738_fu_12488651_p2 = (!sext_ln703_1086_fu_12488647_p1.read().is_01() || !sext_ln703_1085_fu_12488637_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1086_fu_12488647_p1.read()) + sc_bigint<11>(sext_ln703_1085_fu_12488637_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1739_fu_12507633_p2() {
    add_ln703_1739_fu_12507633_p2 = (!sext_ln703_1087_fu_12507630_p1.read().is_01() || !add_ln703_1735_fu_12507625_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1087_fu_12507630_p1.read()) + sc_biguint<13>(add_ln703_1735_fu_12507625_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_173_fu_12478891_p2() {
    add_ln703_173_fu_12478891_p2 = (!zext_ln1118_2272_fu_12405491_p1.read().is_01() || !zext_ln1118_2274_fu_12405519_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_2272_fu_12405491_p1.read()) + sc_biguint<8>(zext_ln1118_2274_fu_12405519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1740_fu_12507643_p2() {
    add_ln703_1740_fu_12507643_p2 = (!sext_ln1118_545_fu_12503068_p1.read().is_01() || !sext_ln1118_519_fu_12503047_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_545_fu_12503068_p1.read()) + sc_bigint<12>(sext_ln1118_519_fu_12503047_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1741_fu_12507653_p2() {
    add_ln703_1741_fu_12507653_p2 = (!sext_ln703_1089_fu_12507649_p1.read().is_01() || !sext_ln703_1088_fu_12507639_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1089_fu_12507649_p1.read()) + sc_bigint<14>(sext_ln703_1088_fu_12507639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1742_fu_12488657_p2() {
    add_ln703_1742_fu_12488657_p2 = (!zext_ln1118_2765_fu_12435164_p1.read().is_01() || !trunc_ln1118_98_fu_12435168_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2765_fu_12435164_p1.read()) + sc_biguint<10>(trunc_ln1118_98_fu_12435168_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1743_fu_12488667_p2() {
    add_ln703_1743_fu_12488667_p2 = (!zext_ln703_274_fu_12488663_p1.read().is_01() || !sext_ln708_104_fu_12435302_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_274_fu_12488663_p1.read()) + sc_bigint<12>(sext_ln708_104_fu_12435302_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1744_fu_12507662_p2() {
    add_ln703_1744_fu_12507662_p2 = (!sext_ln703_1090_fu_12507659_p1.read().is_01() || !add_ln703_1741_fu_12507653_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1090_fu_12507659_p1.read()) + sc_biguint<14>(add_ln703_1741_fu_12507653_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1745_fu_12488673_p2() {
    add_ln703_1745_fu_12488673_p2 = (!zext_ln708_1242_fu_12435322_p1.read().is_01() || !zext_ln708_1243_fu_12435336_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1242_fu_12435322_p1.read()) + sc_biguint<11>(zext_ln708_1243_fu_12435336_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1746_fu_12488679_p2() {
    add_ln703_1746_fu_12488679_p2 = (!add_ln703_1745_fu_12488673_p2.read().is_01() || !zext_ln708_1241_fu_12435230_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_1745_fu_12488673_p2.read()) + sc_biguint<11>(zext_ln708_1241_fu_12435230_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1747_fu_12488689_p2() {
    add_ln703_1747_fu_12488689_p2 = (!sext_ln1118_565_fu_12435268_p1.read().is_01() || !sext_ln1118_562_fu_12435216_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_565_fu_12435268_p1.read()) + sc_bigint<11>(sext_ln1118_562_fu_12435216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1748_fu_12488699_p2() {
    add_ln703_1748_fu_12488699_p2 = (!sext_ln703_1092_fu_12488695_p1.read().is_01() || !sext_ln1118_564_fu_12435254_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1092_fu_12488695_p1.read()) + sc_bigint<12>(sext_ln1118_564_fu_12435254_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1749_fu_12488709_p2() {
    add_ln703_1749_fu_12488709_p2 = (!sext_ln703_1093_fu_12488705_p1.read().is_01() || !zext_ln703_275_fu_12488685_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1093_fu_12488705_p1.read()) + sc_biguint<13>(zext_ln703_275_fu_12488685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_174_fu_12478901_p2() {
    add_ln703_174_fu_12478901_p2 = (!zext_ln703_36_fu_12478897_p1.read().is_01() || !zext_ln1118_2269_fu_12405407_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_36_fu_12478897_p1.read()) + sc_biguint<10>(zext_ln1118_2269_fu_12405407_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1750_fu_12507675_p2() {
    add_ln703_1750_fu_12507675_p2 = (!sext_ln703_1094_fu_12507672_p1.read().is_01() || !sext_ln703_1091_fu_12507668_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1094_fu_12507672_p1.read()) + sc_bigint<15>(sext_ln703_1091_fu_12507668_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1751_fu_12507681_p2() {
    add_ln703_1751_fu_12507681_p2 = (!add_ln703_1750_fu_12507675_p2.read().is_01() || !sext_ln203_260_fu_12503074_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1750_fu_12507675_p2.read()) + sc_bigint<15>(sext_ln203_260_fu_12503074_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1752_fu_12488715_p2() {
    add_ln703_1752_fu_12488715_p2 = (!zext_ln708_1244_fu_12435364_p1.read().is_01() || !zext_ln708_1246_fu_12435440_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1244_fu_12435364_p1.read()) + sc_biguint<11>(zext_ln708_1246_fu_12435440_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1753_fu_12488725_p2() {
    add_ln703_1753_fu_12488725_p2 = (!zext_ln703_276_fu_12488721_p1.read().is_01() || !sext_ln203_263_fu_12435472_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_276_fu_12488721_p1.read()) + sc_bigint<13>(sext_ln203_263_fu_12435472_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1754_fu_12507690_p2() {
    add_ln703_1754_fu_12507690_p2 = (!sext_ln703_1095_fu_12507687_p1.read().is_01() || !add_ln703_1751_fu_12507681_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1095_fu_12507687_p1.read()) + sc_biguint<15>(add_ln703_1751_fu_12507681_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1755_fu_12488731_p2() {
    add_ln703_1755_fu_12488731_p2 = (!sext_ln203_193_fu_12427696_p1.read().is_01() || !sext_ln203_264_fu_12435486_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_193_fu_12427696_p1.read()) + sc_bigint<11>(sext_ln203_264_fu_12435486_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1756_fu_12488741_p2() {
    add_ln703_1756_fu_12488741_p2 = (!zext_ln708_1245_fu_12435378_p1.read().is_01() || !sext_ln203_261_fu_12435412_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1245_fu_12435378_p1.read()) + sc_bigint<8>(sext_ln203_261_fu_12435412_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1757_fu_12488751_p2() {
    add_ln703_1757_fu_12488751_p2 = (!sext_ln703_1097_fu_12488747_p1.read().is_01() || !zext_ln203_89_fu_12435350_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1097_fu_12488747_p1.read()) + sc_biguint<11>(zext_ln203_89_fu_12435350_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1758_fu_12488761_p2() {
    add_ln703_1758_fu_12488761_p2 = (!sext_ln703_1098_fu_12488757_p1.read().is_01() || !sext_ln703_1096_fu_12488737_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1098_fu_12488757_p1.read()) + sc_bigint<12>(sext_ln703_1096_fu_12488737_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_175_fu_12503826_p2() {
    add_ln703_175_fu_12503826_p2 = (!zext_ln703_37_fu_12503823_p1.read().is_01() || !add_ln703_172_fu_12503817_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_37_fu_12503823_p1.read()) + sc_biguint<14>(add_ln703_172_fu_12503817_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1760_fu_12488767_p2() {
    add_ln703_1760_fu_12488767_p2 = (!zext_ln1116_245_fu_12435540_p1.read().is_01() || !trunc_ln1118_99_fu_12435550_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_245_fu_12435540_p1.read()) + sc_biguint<10>(trunc_ln1118_99_fu_12435550_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1761_fu_12488777_p2() {
    add_ln703_1761_fu_12488777_p2 = (!zext_ln703_277_fu_12488773_p1.read().is_01() || !ap_const_lv11_560.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_277_fu_12488773_p1.read()) + sc_bigint<11>(ap_const_lv11_560));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1762_fu_12488787_p2() {
    add_ln703_1762_fu_12488787_p2 = (!zext_ln1116_247_fu_12435574_p1.read().is_01() || !sext_ln1116_55_fu_12435520_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_247_fu_12435574_p1.read()) + sc_bigint<10>(sext_ln1116_55_fu_12435520_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1763_fu_12488797_p2() {
    add_ln703_1763_fu_12488797_p2 = (!sext_ln703_1102_fu_12488793_p1.read().is_01() || !zext_ln708_1247_fu_12435570_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1102_fu_12488793_p1.read()) + sc_biguint<11>(zext_ln708_1247_fu_12435570_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1764_fu_12488807_p2() {
    add_ln703_1764_fu_12488807_p2 = (!sext_ln703_1103_fu_12488803_p1.read().is_01() || !sext_ln703_1101_fu_12488783_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1103_fu_12488803_p1.read()) + sc_bigint<12>(sext_ln703_1101_fu_12488783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1765_fu_12488813_p2() {
    add_ln703_1765_fu_12488813_p2 = (!add_ln703_1764_fu_12488807_p2.read().is_01() || !zext_ln708_409_fu_12435578_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_1764_fu_12488807_p2.read()) + sc_biguint<12>(zext_ln708_409_fu_12435578_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1766_fu_12488819_p2() {
    add_ln703_1766_fu_12488819_p2 = (!zext_ln1118_2694_fu_12432392_p1.read().is_01() || !zext_ln1116_250_fu_12435598_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2694_fu_12432392_p1.read()) + sc_biguint<10>(zext_ln1116_250_fu_12435598_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1767_fu_12507715_p2() {
    add_ln703_1767_fu_12507715_p2 = (!zext_ln703_278_fu_12507712_p1.read().is_01() || !sext_ln703_1104_fu_12507709_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_278_fu_12507712_p1.read()) + sc_bigint<13>(sext_ln703_1104_fu_12507709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1768_fu_12507721_p2() {
    add_ln703_1768_fu_12507721_p2 = (!add_ln703_1767_fu_12507715_p2.read().is_01() || !zext_ln1118_2772_fu_12503077_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_1767_fu_12507715_p2.read()) + sc_biguint<13>(zext_ln1118_2772_fu_12503077_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1769_fu_12488825_p2() {
    add_ln703_1769_fu_12488825_p2 = (!zext_ln708_1248_fu_12435670_p1.read().is_01() || !sext_ln1118_570_fu_12435628_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1248_fu_12435670_p1.read()) + sc_bigint<11>(sext_ln1118_570_fu_12435628_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_176_fu_12478907_p2() {
    add_ln703_176_fu_12478907_p2 = (!sext_ln1118_55_fu_12405379_p1.read().is_01() || !sext_ln1118_57_fu_12405435_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_55_fu_12405379_p1.read()) + sc_bigint<11>(sext_ln1118_57_fu_12405435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1770_fu_12507730_p2() {
    add_ln703_1770_fu_12507730_p2 = (!sext_ln703_1105_fu_12507727_p1.read().is_01() || !add_ln703_1768_fu_12507721_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1105_fu_12507727_p1.read()) + sc_biguint<13>(add_ln703_1768_fu_12507721_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1771_fu_12488831_p2() {
    add_ln703_1771_fu_12488831_p2 = (!sext_ln708_105_fu_12435656_p1.read().is_01() || !zext_ln708_411_fu_12435642_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_105_fu_12435656_p1.read()) + sc_biguint<11>(zext_ln708_411_fu_12435642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1772_fu_12488837_p2() {
    add_ln703_1772_fu_12488837_p2 = (!sext_ln1116_56_fu_12435684_p1.read().is_01() || !zext_ln1118_2248_fu_12420229_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_56_fu_12435684_p1.read()) + sc_biguint<10>(zext_ln1118_2248_fu_12420229_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1773_fu_12488847_p2() {
    add_ln703_1773_fu_12488847_p2 = (!sext_ln703_1107_fu_12488843_p1.read().is_01() || !add_ln703_1771_fu_12488831_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1107_fu_12488843_p1.read()) + sc_biguint<11>(add_ln703_1771_fu_12488831_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1774_fu_12507743_p2() {
    add_ln703_1774_fu_12507743_p2 = (!sext_ln703_1108_fu_12507740_p1.read().is_01() || !sext_ln703_1106_fu_12507736_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1108_fu_12507740_p1.read()) + sc_bigint<14>(sext_ln703_1106_fu_12507736_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1775_fu_12507749_p2() {
    add_ln703_1775_fu_12507749_p2 = (!sext_ln1118_413_fu_12502999_p1.read().is_01() || !sext_ln1116_59_fu_12503080_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_413_fu_12502999_p1.read()) + sc_bigint<12>(sext_ln1116_59_fu_12503080_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1776_fu_12507759_p2() {
    add_ln703_1776_fu_12507759_p2 = (!sext_ln703_1109_fu_12507755_p1.read().is_01() || !add_ln703_1774_fu_12507743_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1109_fu_12507755_p1.read()) + sc_biguint<14>(add_ln703_1774_fu_12507743_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1777_fu_12488853_p2() {
    add_ln703_1777_fu_12488853_p2 = (!sext_ln1118_574_fu_12435790_p1.read().is_01() || !zext_ln708_414_fu_12435688_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_574_fu_12435790_p1.read()) + sc_biguint<12>(zext_ln708_414_fu_12435688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1778_fu_12488859_p2() {
    add_ln703_1778_fu_12488859_p2 = (!zext_ln1116_251_fu_12435726_p1.read().is_01() || !zext_ln1116_259_fu_12435809_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_251_fu_12435726_p1.read()) + sc_biguint<10>(zext_ln1116_259_fu_12435809_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1779_fu_12488869_p2() {
    add_ln703_1779_fu_12488869_p2 = (!zext_ln703_279_fu_12488865_p1.read().is_01() || !add_ln703_1777_fu_12488853_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_279_fu_12488865_p1.read()) + sc_biguint<12>(add_ln703_1777_fu_12488853_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_177_fu_12478917_p2() {
    add_ln703_177_fu_12478917_p2 = (!sext_ln703_142_fu_12478913_p1.read().is_01() || !zext_ln1118_550_fu_12405547_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_142_fu_12478913_p1.read()) + sc_biguint<12>(zext_ln1118_550_fu_12405547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1780_fu_12507772_p2() {
    add_ln703_1780_fu_12507772_p2 = (!sext_ln703_1111_fu_12507769_p1.read().is_01() || !sext_ln703_1110_fu_12507765_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1111_fu_12507769_p1.read()) + sc_bigint<15>(sext_ln703_1110_fu_12507765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1781_fu_12488875_p2() {
    add_ln703_1781_fu_12488875_p2 = (!zext_ln1116_276_fu_12435833_p1.read().is_01() || !trunc_ln1118_100_fu_12435848_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_276_fu_12435833_p1.read()) + sc_biguint<9>(trunc_ln1118_100_fu_12435848_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1782_fu_12488885_p2() {
    add_ln703_1782_fu_12488885_p2 = (!zext_ln708_1160_fu_12427049_p1.read().is_01() || !sext_ln1118_572_fu_12435712_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1160_fu_12427049_p1.read()) + sc_bigint<11>(sext_ln1118_572_fu_12435712_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1783_fu_12488895_p2() {
    add_ln703_1783_fu_12488895_p2 = (!sext_ln703_1112_fu_12488891_p1.read().is_01() || !zext_ln703_280_fu_12488881_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1112_fu_12488891_p1.read()) + sc_biguint<12>(zext_ln703_280_fu_12488881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1784_fu_12488901_p2() {
    add_ln703_1784_fu_12488901_p2 = (!sext_ln1118_523_fu_12433666_p1.read().is_01() || !sext_ln1116_58_fu_12435760_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_523_fu_12433666_p1.read()) + sc_bigint<9>(sext_ln1116_58_fu_12435760_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1785_fu_12488911_p2() {
    add_ln703_1785_fu_12488911_p2 = (!zext_ln203_61_fu_12424937_p1.read().is_01() || !zext_ln1118_2296_fu_12420965_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_61_fu_12424937_p1.read()) + sc_biguint<9>(zext_ln1118_2296_fu_12420965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1786_fu_12488921_p2() {
    add_ln703_1786_fu_12488921_p2 = (!zext_ln703_281_fu_12488917_p1.read().is_01() || !sext_ln703_1113_fu_12488907_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_281_fu_12488917_p1.read()) + sc_bigint<11>(sext_ln703_1113_fu_12488907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1787_fu_12488931_p2() {
    add_ln703_1787_fu_12488931_p2 = (!sext_ln703_1114_fu_12488927_p1.read().is_01() || !add_ln703_1783_fu_12488895_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1114_fu_12488927_p1.read()) + sc_biguint<12>(add_ln703_1783_fu_12488895_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1788_fu_12507781_p2() {
    add_ln703_1788_fu_12507781_p2 = (!sext_ln703_1115_fu_12507778_p1.read().is_01() || !add_ln703_1780_fu_12507772_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1115_fu_12507778_p1.read()) + sc_biguint<15>(add_ln703_1780_fu_12507772_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1789_fu_12488937_p2() {
    add_ln703_1789_fu_12488937_p2 = (!sext_ln203_265_fu_12435868_p1.read().is_01() || !sext_ln203_266_fu_12435872_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_265_fu_12435868_p1.read()) + sc_bigint<12>(sext_ln203_266_fu_12435872_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_178_fu_12478927_p2() {
    add_ln703_178_fu_12478927_p2 = (!sext_ln708_10_fu_12405533_p1.read().is_01() || !sext_ln1118_54_fu_12405365_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_10_fu_12405533_p1.read()) + sc_bigint<11>(sext_ln1118_54_fu_12405365_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1791_fu_12488943_p2() {
    add_ln703_1791_fu_12488943_p2 = (!sext_ln203_267_fu_12435886_p1.read().is_01() || !ap_const_lv12_D60.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_267_fu_12435886_p1.read()) + sc_bigint<12>(ap_const_lv12_D60));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1792_fu_12488953_p2() {
    add_ln703_1792_fu_12488953_p2 = (!sext_ln703_257_fu_12488949_p1.read().is_01() || !sext_ln203_180_fu_12425107_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_257_fu_12488949_p1.read()) + sc_bigint<13>(sext_ln203_180_fu_12425107_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1793_fu_12488959_p2() {
    add_ln703_1793_fu_12488959_p2 = (!sext_ln1118_575_fu_12435914_p1.read().is_01() || !zext_ln1118_2779_fu_12435938_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_575_fu_12435914_p1.read()) + sc_biguint<12>(zext_ln1118_2779_fu_12435938_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1794_fu_12488969_p2() {
    add_ln703_1794_fu_12488969_p2 = (!sext_ln703_1118_fu_12488965_p1.read().is_01() || !add_ln703_1792_fu_12488953_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1118_fu_12488965_p1.read()) + sc_biguint<13>(add_ln703_1792_fu_12488953_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1795_fu_12488979_p2() {
    add_ln703_1795_fu_12488979_p2 = (!sext_ln703_258_fu_12488975_p1.read().is_01() || !sext_ln203_269_fu_12435966_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_258_fu_12488975_p1.read()) + sc_bigint<14>(sext_ln203_269_fu_12435966_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1796_fu_12488985_p2() {
    add_ln703_1796_fu_12488985_p2 = (!zext_ln1118_2780_fu_12435980_p1.read().is_01() || !trunc_ln1118_101_fu_12435994_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2780_fu_12435980_p1.read()) + sc_biguint<10>(trunc_ln1118_101_fu_12435994_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1797_fu_12488995_p2() {
    add_ln703_1797_fu_12488995_p2 = (!zext_ln703_282_fu_12488991_p1.read().is_01() || !zext_ln708_1249_fu_12435952_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_282_fu_12488991_p1.read()) + sc_biguint<11>(zext_ln708_1249_fu_12435952_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1798_fu_12507803_p2() {
    add_ln703_1798_fu_12507803_p2 = (!zext_ln703_283_fu_12507800_p1.read().is_01() || !add_ln703_1795_reg_12516952.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_283_fu_12507800_p1.read()) + sc_biguint<14>(add_ln703_1795_reg_12516952.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1799_fu_12489001_p2() {
    add_ln703_1799_fu_12489001_p2 = (!trunc_ln1118_102_fu_12436026_p4.read().is_01() || !zext_ln708_1250_fu_12436036_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_102_fu_12436026_p4.read()) + sc_biguint<10>(zext_ln708_1250_fu_12436036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_179_fu_12478937_p2() {
    add_ln703_179_fu_12478937_p2 = (!sext_ln703_144_fu_12478933_p1.read().is_01() || !sext_ln1118_59_fu_12405505_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_144_fu_12478933_p1.read()) + sc_bigint<12>(sext_ln1118_59_fu_12405505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_17_fu_12477905_p2() {
    add_ln703_17_fu_12477905_p2 = (!sext_ln703_20_fu_12477901_p1.read().is_01() || !zext_ln1116_12_fu_12401257_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_20_fu_12477901_p1.read()) + sc_biguint<12>(zext_ln1116_12_fu_12401257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1800_fu_12489011_p2() {
    add_ln703_1800_fu_12489011_p2 = (!zext_ln703_284_fu_12489007_p1.read().is_01() || !zext_ln708_1127_fu_12422370_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_284_fu_12489007_p1.read()) + sc_biguint<11>(zext_ln708_1127_fu_12422370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1801_fu_12489021_p2() {
    add_ln703_1801_fu_12489021_p2 = (!zext_ln1118_2228_fu_12419981_p1.read().is_01() || !zext_ln708_319_fu_12427260_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2228_fu_12419981_p1.read()) + sc_biguint<9>(zext_ln708_319_fu_12427260_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1802_fu_12489031_p2() {
    add_ln703_1802_fu_12489031_p2 = (!zext_ln703_286_fu_12489027_p1.read().is_01() || !sext_ln1118_352_fu_12423025_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_286_fu_12489027_p1.read()) + sc_bigint<11>(sext_ln1118_352_fu_12423025_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1803_fu_12489041_p2() {
    add_ln703_1803_fu_12489041_p2 = (!sext_ln703_1119_fu_12489037_p1.read().is_01() || !zext_ln703_285_fu_12489017_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1119_fu_12489037_p1.read()) + sc_biguint<12>(zext_ln703_285_fu_12489017_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1804_fu_12507811_p2() {
    add_ln703_1804_fu_12507811_p2 = (!sext_ln703_1120_fu_12507808_p1.read().is_01() || !add_ln703_1798_fu_12507803_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1120_fu_12507808_p1.read()) + sc_biguint<14>(add_ln703_1798_fu_12507803_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1805_fu_12507821_p2() {
    add_ln703_1805_fu_12507821_p2 = (!sext_ln1118_413_fu_12502999_p1.read().is_01() || !sext_ln1118_578_fu_12503083_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_413_fu_12502999_p1.read()) + sc_bigint<12>(sext_ln1118_578_fu_12503083_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1806_fu_12507831_p2() {
    add_ln703_1806_fu_12507831_p2 = (!sext_ln703_1121_fu_12507827_p1.read().is_01() || !sext_ln703_259_fu_12507817_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1121_fu_12507827_p1.read()) + sc_bigint<15>(sext_ln703_259_fu_12507817_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1807_fu_12489047_p2() {
    add_ln703_1807_fu_12489047_p2 = (!zext_ln708_1251_fu_12436060_p1.read().is_01() || !zext_ln708_1190_fu_12429783_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1251_fu_12436060_p1.read()) + sc_biguint<11>(zext_ln708_1190_fu_12429783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1808_fu_12489057_p2() {
    add_ln703_1808_fu_12489057_p2 = (!zext_ln703_287_fu_12489053_p1.read().is_01() || !sext_ln1118_579_fu_12436160_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_287_fu_12489053_p1.read()) + sc_bigint<13>(sext_ln1118_579_fu_12436160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1809_fu_12507840_p2() {
    add_ln703_1809_fu_12507840_p2 = (!sext_ln703_1122_fu_12507837_p1.read().is_01() || !add_ln703_1806_fu_12507831_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1122_fu_12507837_p1.read()) + sc_biguint<15>(add_ln703_1806_fu_12507831_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_180_fu_12478947_p2() {
    add_ln703_180_fu_12478947_p2 = (!sext_ln703_145_fu_12478943_p1.read().is_01() || !sext_ln703_143_fu_12478923_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_145_fu_12478943_p1.read()) + sc_bigint<13>(sext_ln703_143_fu_12478923_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1810_fu_12489063_p2() {
    add_ln703_1810_fu_12489063_p2 = (!zext_ln708_1253_fu_12436102_p1.read().is_01() || !zext_ln708_1254_fu_12436174_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1253_fu_12436102_p1.read()) + sc_biguint<11>(zext_ln708_1254_fu_12436174_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1811_fu_12489069_p2() {
    add_ln703_1811_fu_12489069_p2 = (!add_ln703_1810_fu_12489063_p2.read().is_01() || !zext_ln708_1252_fu_12436088_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_1810_fu_12489063_p2.read()) + sc_biguint<11>(zext_ln708_1252_fu_12436088_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1812_fu_12489079_p2() {
    add_ln703_1812_fu_12489079_p2 = (!zext_ln708_443_fu_12436040_p1.read().is_01() || !sext_ln1118_577_fu_12436136_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_443_fu_12436040_p1.read()) + sc_bigint<11>(sext_ln1118_577_fu_12436136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1813_fu_12489085_p2() {
    add_ln703_1813_fu_12489085_p2 = (!add_ln703_1812_fu_12489079_p2.read().is_01() || !zext_ln1118_2263_fu_12420482_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_1812_fu_12489079_p2.read()) + sc_biguint<11>(zext_ln1118_2263_fu_12420482_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1814_fu_12489095_p2() {
    add_ln703_1814_fu_12489095_p2 = (!sext_ln703_1123_fu_12489091_p1.read().is_01() || !zext_ln703_288_fu_12489075_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1123_fu_12489091_p1.read()) + sc_biguint<13>(zext_ln703_288_fu_12489075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1815_fu_12507849_p2() {
    add_ln703_1815_fu_12507849_p2 = (!sext_ln703_1124_fu_12507846_p1.read().is_01() || !add_ln703_1809_fu_12507840_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1124_fu_12507846_p1.read()) + sc_biguint<15>(add_ln703_1809_fu_12507840_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1816_fu_12489101_p2() {
    add_ln703_1816_fu_12489101_p2 = (!zext_ln708_1255_fu_12436228_p1.read().is_01() || !zext_ln708_1256_fu_12436270_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1255_fu_12436228_p1.read()) + sc_biguint<11>(zext_ln708_1256_fu_12436270_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1817_fu_12507858_p2() {
    add_ln703_1817_fu_12507858_p2 = (!zext_ln703_289_fu_12507855_p1.read().is_01() || !add_ln703_1815_fu_12507849_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_289_fu_12507855_p1.read()) + sc_biguint<15>(add_ln703_1815_fu_12507849_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1818_fu_12489107_p2() {
    add_ln703_1818_fu_12489107_p2 = (!sext_ln203_271_fu_12436208_p1.read().is_01() || !sext_ln203_272_fu_12436242_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_271_fu_12436208_p1.read()) + sc_bigint<11>(sext_ln203_272_fu_12436242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1819_fu_12489117_p2() {
    add_ln703_1819_fu_12489117_p2 = (!sext_ln203_270_fu_12436194_p1.read().is_01() || !zext_ln203_91_fu_12436256_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_270_fu_12436194_p1.read()) + sc_biguint<10>(zext_ln203_91_fu_12436256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_181_fu_12503839_p2() {
    add_ln703_181_fu_12503839_p2 = (!sext_ln703_146_fu_12503836_p1.read().is_01() || !sext_ln703_139_fu_12503832_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_146_fu_12503836_p1.read()) + sc_bigint<15>(sext_ln703_139_fu_12503832_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1820_fu_12489127_p2() {
    add_ln703_1820_fu_12489127_p2 = (!sext_ln703_1126_fu_12489123_p1.read().is_01() || !sext_ln703_1125_fu_12489113_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1126_fu_12489123_p1.read()) + sc_bigint<12>(sext_ln703_1125_fu_12489113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1822_fu_12489133_p2() {
    add_ln703_1822_fu_12489133_p2 = (!trunc_ln1118_103_fu_12436274_p4.read().is_01() || !ap_const_lv8_A0.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln1118_103_fu_12436274_p4.read()) + sc_bigint<8>(ap_const_lv8_A0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1823_fu_12489143_p2() {
    add_ln703_1823_fu_12489143_p2 = (!sext_ln703_1129_fu_12489139_p1.read().is_01() || !sext_ln203_170_fu_12423713_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1129_fu_12489139_p1.read()) + sc_bigint<12>(sext_ln203_170_fu_12423713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1824_fu_12489153_p2() {
    add_ln703_1824_fu_12489153_p2 = (!sext_ln703_261_fu_12489149_p1.read().is_01() || !sext_ln203_274_fu_12436406_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_261_fu_12489149_p1.read()) + sc_bigint<13>(sext_ln203_274_fu_12436406_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1825_fu_12489159_p2() {
    add_ln703_1825_fu_12489159_p2 = (!zext_ln708_1257_fu_12436308_p1.read().is_01() || !zext_ln708_1258_fu_12436346_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1257_fu_12436308_p1.read()) + sc_biguint<9>(zext_ln708_1258_fu_12436346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1826_fu_12507880_p2() {
    add_ln703_1826_fu_12507880_p2 = (!zext_ln703_290_fu_12507877_p1.read().is_01() || !add_ln703_1824_reg_12516987.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_290_fu_12507877_p1.read()) + sc_biguint<13>(add_ln703_1824_reg_12516987.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1827_fu_12489165_p2() {
    add_ln703_1827_fu_12489165_p2 = (!zext_ln708_1259_fu_12436374_p1.read().is_01() || !sext_ln1118_580_fu_12436294_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1259_fu_12436374_p1.read()) + sc_bigint<11>(sext_ln1118_580_fu_12436294_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1828_fu_12489171_p2() {
    add_ln703_1828_fu_12489171_p2 = (!zext_ln1118_2786_fu_12436360_p1.read().is_01() || !zext_ln708_1260_fu_12436420_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln1118_2786_fu_12436360_p1.read()) + sc_biguint<7>(zext_ln708_1260_fu_12436420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1829_fu_12489177_p2() {
    add_ln703_1829_fu_12489177_p2 = (!add_ln703_1828_fu_12489171_p2.read().is_01() || !zext_ln1118_2784_fu_12436322_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(add_ln703_1828_fu_12489171_p2.read()) + sc_biguint<7>(zext_ln1118_2784_fu_12436322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_182_fu_12503845_p2() {
    add_ln703_182_fu_12503845_p2 = (!add_ln703_181_fu_12503839_p2.read().is_01() || !sext_ln203_26_fu_12502822_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_181_fu_12503839_p2.read()) + sc_bigint<15>(sext_ln203_26_fu_12502822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1830_fu_12489187_p2() {
    add_ln703_1830_fu_12489187_p2 = (!zext_ln703_291_fu_12489183_p1.read().is_01() || !add_ln703_1827_fu_12489165_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_291_fu_12489183_p1.read()) + sc_biguint<11>(add_ln703_1827_fu_12489165_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1831_fu_12507888_p2() {
    add_ln703_1831_fu_12507888_p2 = (!sext_ln703_1130_fu_12507885_p1.read().is_01() || !add_ln703_1826_fu_12507880_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1130_fu_12507885_p1.read()) + sc_biguint<13>(add_ln703_1826_fu_12507880_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1832_fu_12507898_p2() {
    add_ln703_1832_fu_12507898_p2 = (!sext_ln703_262_fu_12507894_p1.read().is_01() || !zext_ln203_92_fu_12503086_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_262_fu_12507894_p1.read()) + sc_biguint<14>(zext_ln203_92_fu_12503086_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1833_fu_12489193_p2() {
    add_ln703_1833_fu_12489193_p2 = (!zext_ln708_1172_fu_12427908_p1.read().is_01() || !zext_ln1118_2788_fu_12436458_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1172_fu_12427908_p1.read()) + sc_biguint<10>(zext_ln1118_2788_fu_12436458_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1834_fu_12507907_p2() {
    add_ln703_1834_fu_12507907_p2 = (!zext_ln703_292_fu_12507904_p1.read().is_01() || !add_ln703_1832_fu_12507898_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_292_fu_12507904_p1.read()) + sc_biguint<14>(add_ln703_1832_fu_12507898_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1835_fu_12489199_p2() {
    add_ln703_1835_fu_12489199_p2 = (!zext_ln1118_2789_fu_12436472_p1.read().is_01() || !zext_ln1118_2790_fu_12436486_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2789_fu_12436472_p1.read()) + sc_biguint<9>(zext_ln1118_2790_fu_12436486_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1836_fu_12489209_p2() {
    add_ln703_1836_fu_12489209_p2 = (!zext_ln708_1261_fu_12436506_p1.read().is_01() || !sext_ln1118_581_fu_12436444_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1261_fu_12436506_p1.read()) + sc_bigint<11>(sext_ln1118_581_fu_12436444_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1837_fu_12489219_p2() {
    add_ln703_1837_fu_12489219_p2 = (!sext_ln703_1131_fu_12489215_p1.read().is_01() || !zext_ln703_293_fu_12489205_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1131_fu_12489215_p1.read()) + sc_biguint<12>(zext_ln703_293_fu_12489205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1838_fu_12507916_p2() {
    add_ln703_1838_fu_12507916_p2 = (!sext_ln703_1132_fu_12507913_p1.read().is_01() || !add_ln703_1834_fu_12507907_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1132_fu_12507913_p1.read()) + sc_biguint<14>(add_ln703_1834_fu_12507907_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1839_fu_12489225_p2() {
    add_ln703_1839_fu_12489225_p2 = (!sext_ln203_163_fu_12423415_p1.read().is_01() || !sext_ln1118_587_fu_12436658_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_163_fu_12423415_p1.read()) + sc_bigint<12>(sext_ln1118_587_fu_12436658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_183_fu_12478953_p2() {
    add_ln703_183_fu_12478953_p2 = (!sext_ln203_27_fu_12405585_p1.read().is_01() || !sext_ln203_28_fu_12405645_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_27_fu_12405585_p1.read()) + sc_bigint<12>(sext_ln203_28_fu_12405645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1840_fu_12507929_p2() {
    add_ln703_1840_fu_12507929_p2 = (!sext_ln703_1133_fu_12507926_p1.read().is_01() || !sext_ln703_263_fu_12507922_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1133_fu_12507926_p1.read()) + sc_bigint<15>(sext_ln703_263_fu_12507922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1841_fu_12489231_p2() {
    add_ln703_1841_fu_12489231_p2 = (!zext_ln1118_2792_fu_12436554_p1.read().is_01() || !trunc_ln1118_104_fu_12436572_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2792_fu_12436554_p1.read()) + sc_biguint<10>(trunc_ln1118_104_fu_12436572_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1842_fu_12489241_p2() {
    add_ln703_1842_fu_12489241_p2 = (!zext_ln703_294_fu_12489237_p1.read().is_01() || !sext_ln1118_588_fu_12436672_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_294_fu_12489237_p1.read()) + sc_bigint<12>(sext_ln1118_588_fu_12436672_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1843_fu_12507938_p2() {
    add_ln703_1843_fu_12507938_p2 = (!sext_ln703_1134_fu_12507935_p1.read().is_01() || !add_ln703_1840_fu_12507929_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1134_fu_12507935_p1.read()) + sc_biguint<15>(add_ln703_1840_fu_12507929_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1844_fu_12489247_p2() {
    add_ln703_1844_fu_12489247_p2 = (!zext_ln1118_2794_fu_12436616_p1.read().is_01() || !zext_ln1118_2797_fu_12436696_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2794_fu_12436616_p1.read()) + sc_biguint<10>(zext_ln1118_2797_fu_12436696_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1845_fu_12489257_p2() {
    add_ln703_1845_fu_12489257_p2 = (!zext_ln703_295_fu_12489253_p1.read().is_01() || !zext_ln708_1262_fu_12436592_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_295_fu_12489253_p1.read()) + sc_biguint<11>(zext_ln708_1262_fu_12436592_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1846_fu_12489267_p2() {
    add_ln703_1846_fu_12489267_p2 = (!sext_ln1118_583_fu_12436530_p1.read().is_01() || !sext_ln708_107_fu_12436568_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_583_fu_12436530_p1.read()) + sc_bigint<9>(sext_ln708_107_fu_12436568_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1847_fu_12489277_p2() {
    add_ln703_1847_fu_12489277_p2 = (!sext_ln703_1135_fu_12489273_p1.read().is_01() || !sext_ln1118_585_fu_12436630_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1135_fu_12489273_p1.read()) + sc_bigint<10>(sext_ln1118_585_fu_12436630_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1848_fu_12489287_p2() {
    add_ln703_1848_fu_12489287_p2 = (!sext_ln703_1136_fu_12489283_p1.read().is_01() || !zext_ln703_296_fu_12489263_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1136_fu_12489283_p1.read()) + sc_biguint<12>(zext_ln703_296_fu_12489263_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1849_fu_12507947_p2() {
    add_ln703_1849_fu_12507947_p2 = (!sext_ln703_1137_fu_12507944_p1.read().is_01() || !add_ln703_1843_fu_12507938_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1137_fu_12507944_p1.read()) + sc_biguint<15>(add_ln703_1843_fu_12507938_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_184_fu_12503854_p2() {
    add_ln703_184_fu_12503854_p2 = (!sext_ln703_147_fu_12503851_p1.read().is_01() || !add_ln703_182_fu_12503845_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_147_fu_12503851_p1.read()) + sc_biguint<15>(add_ln703_182_fu_12503845_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1850_fu_12507953_p2() {
    add_ln703_1850_fu_12507953_p2 = (!add_ln703_1849_fu_12507947_p2.read().is_01() || !sext_ln203_276_fu_12503089_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1849_fu_12507947_p2.read()) + sc_bigint<15>(sext_ln203_276_fu_12503089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1851_fu_12489293_p2() {
    add_ln703_1851_fu_12489293_p2 = (!zext_ln708_1263_fu_12436768_p1.read().is_01() || !sext_ln203_275_fu_12436710_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1263_fu_12436768_p1.read()) + sc_bigint<11>(sext_ln203_275_fu_12436710_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1852_fu_12489303_p2() {
    add_ln703_1852_fu_12489303_p2 = (!sext_ln703_1138_fu_12489299_p1.read().is_01() || !zext_ln203_93_fu_12436738_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1138_fu_12489299_p1.read()) + sc_biguint<12>(zext_ln203_93_fu_12436738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1854_fu_12489309_p2() {
    add_ln703_1854_fu_12489309_p2 = (!sext_ln203_277_fu_12436782_p1.read().is_01() || !ap_const_lv12_FD8.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_277_fu_12436782_p1.read()) + sc_bigint<12>(ap_const_lv12_FD8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1855_fu_12489319_p2() {
    add_ln703_1855_fu_12489319_p2 = (!sext_ln703_265_fu_12489315_p1.read().is_01() || !sext_ln203_278_fu_12436796_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_265_fu_12489315_p1.read()) + sc_bigint<13>(sext_ln203_278_fu_12436796_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1856_fu_12489325_p2() {
    add_ln703_1856_fu_12489325_p2 = (!zext_ln1118_2799_fu_12436834_p1.read().is_01() || !sext_ln708_108_fu_12436820_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2799_fu_12436834_p1.read()) + sc_bigint<12>(sext_ln708_108_fu_12436820_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1857_fu_12489335_p2() {
    add_ln703_1857_fu_12489335_p2 = (!sext_ln703_1141_fu_12489331_p1.read().is_01() || !add_ln703_1855_fu_12489319_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1141_fu_12489331_p1.read()) + sc_biguint<13>(add_ln703_1855_fu_12489319_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1858_fu_12489345_p2() {
    add_ln703_1858_fu_12489345_p2 = (!sext_ln1118_591_fu_12436862_p1.read().is_01() || !zext_ln1118_2801_fu_12436876_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_591_fu_12436862_p1.read()) + sc_biguint<12>(zext_ln1118_2801_fu_12436876_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1859_fu_12489355_p2() {
    add_ln703_1859_fu_12489355_p2 = (!sext_ln703_1142_fu_12489351_p1.read().is_01() || !sext_ln703_266_fu_12489341_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1142_fu_12489351_p1.read()) + sc_bigint<14>(sext_ln703_266_fu_12489341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_185_fu_12478959_p2() {
    add_ln703_185_fu_12478959_p2 = (!zext_ln708_977_fu_12405599_p1.read().is_01() || !zext_ln708_978_fu_12405613_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_977_fu_12405599_p1.read()) + sc_biguint<11>(zext_ln708_978_fu_12405613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1860_fu_12489361_p2() {
    add_ln703_1860_fu_12489361_p2 = (!sext_ln1118_595_fu_12436940_p1.read().is_01() || !sext_ln1118_590_fu_12436838_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_595_fu_12436940_p1.read()) + sc_bigint<9>(sext_ln1118_590_fu_12436838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1861_fu_12489371_p2() {
    add_ln703_1861_fu_12489371_p2 = (!sext_ln703_1143_fu_12489367_p1.read().is_01() || !sext_ln1118_593_fu_12436900_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1143_fu_12489367_p1.read()) + sc_bigint<10>(sext_ln1118_593_fu_12436900_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1862_fu_12489381_p2() {
    add_ln703_1862_fu_12489381_p2 = (!sext_ln703_1144_fu_12489377_p1.read().is_01() || !add_ln703_1859_fu_12489355_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1144_fu_12489377_p1.read()) + sc_biguint<14>(add_ln703_1859_fu_12489355_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1863_fu_12489387_p2() {
    add_ln703_1863_fu_12489387_p2 = (!zext_ln1118_2805_fu_12436954_p1.read().is_01() || !sext_ln1118_384_fu_12425357_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2805_fu_12436954_p1.read()) + sc_bigint<12>(sext_ln1118_384_fu_12425357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1864_fu_12507975_p2() {
    add_ln703_1864_fu_12507975_p2 = (!sext_ln703_1145_fu_12507972_p1.read().is_01() || !add_ln703_1862_reg_12517032.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1145_fu_12507972_p1.read()) + sc_biguint<14>(add_ln703_1862_reg_12517032.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1865_fu_12489393_p2() {
    add_ln703_1865_fu_12489393_p2 = (!zext_ln1118_2806_fu_12436968_p1.read().is_01() || !zext_ln1118_2808_fu_12436992_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2806_fu_12436968_p1.read()) + sc_biguint<10>(zext_ln1118_2808_fu_12436992_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1866_fu_12489403_p2() {
    add_ln703_1866_fu_12489403_p2 = (!zext_ln703_297_fu_12489399_p1.read().is_01() || !sext_ln1118_334_fu_12421746_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_297_fu_12489399_p1.read()) + sc_bigint<12>(sext_ln1118_334_fu_12421746_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1867_fu_12507983_p2() {
    add_ln703_1867_fu_12507983_p2 = (!sext_ln703_1146_fu_12507980_p1.read().is_01() || !add_ln703_1864_fu_12507975_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1146_fu_12507980_p1.read()) + sc_biguint<14>(add_ln703_1864_fu_12507975_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1868_fu_12489409_p2() {
    add_ln703_1868_fu_12489409_p2 = (!zext_ln708_1264_fu_12437020_p1.read().is_01() || !sext_ln1118_597_fu_12437054_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1264_fu_12437020_p1.read()) + sc_bigint<11>(sext_ln1118_597_fu_12437054_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1869_fu_12489419_p2() {
    add_ln703_1869_fu_12489419_p2 = (!sext_ln703_1148_fu_12489415_p1.read().is_01() || !zext_ln708_449_fu_12437006_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1148_fu_12489415_p1.read()) + sc_biguint<12>(zext_ln708_449_fu_12437006_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_186_fu_12478965_p2() {
    add_ln703_186_fu_12478965_p2 = (!trunc_ln203_51_fu_12405671_p4.read().is_01() || !zext_ln203_11_fu_12405571_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_51_fu_12405671_p4.read()) + sc_biguint<9>(zext_ln203_11_fu_12405571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1870_fu_12489425_p2() {
    add_ln703_1870_fu_12489425_p2 = (!sext_ln1118_598_fu_12437086_p1.read().is_01() || !sext_ln1118_600_fu_12437114_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_598_fu_12437086_p1.read()) + sc_bigint<10>(sext_ln1118_600_fu_12437114_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1871_fu_12489435_p2() {
    add_ln703_1871_fu_12489435_p2 = (!zext_ln708_1164_fu_12427468_p1.read().is_01() || !sext_ln1118_599_fu_12437110_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1164_fu_12427468_p1.read()) + sc_bigint<8>(sext_ln1118_599_fu_12437110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1872_fu_12489445_p2() {
    add_ln703_1872_fu_12489445_p2 = (!sext_ln703_1150_fu_12489441_p1.read().is_01() || !sext_ln703_1149_fu_12489431_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1150_fu_12489441_p1.read()) + sc_bigint<11>(sext_ln703_1149_fu_12489431_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1873_fu_12489455_p2() {
    add_ln703_1873_fu_12489455_p2 = (!sext_ln703_1151_fu_12489451_p1.read().is_01() || !add_ln703_1869_fu_12489419_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1151_fu_12489451_p1.read()) + sc_biguint<12>(add_ln703_1869_fu_12489419_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1874_fu_12507996_p2() {
    add_ln703_1874_fu_12507996_p2 = (!sext_ln703_1152_fu_12507993_p1.read().is_01() || !sext_ln703_1147_fu_12507989_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1152_fu_12507993_p1.read()) + sc_bigint<15>(sext_ln703_1147_fu_12507989_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1875_fu_12489461_p2() {
    add_ln703_1875_fu_12489461_p2 = (!sext_ln203_279_fu_12437128_p1.read().is_01() || !sext_ln1118_344_fu_12422703_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_279_fu_12437128_p1.read()) + sc_bigint<12>(sext_ln1118_344_fu_12422703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1876_fu_12508005_p2() {
    add_ln703_1876_fu_12508005_p2 = (!sext_ln703_1153_fu_12508002_p1.read().is_01() || !add_ln703_1874_fu_12507996_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1153_fu_12508002_p1.read()) + sc_biguint<15>(add_ln703_1874_fu_12507996_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1877_fu_12489467_p2() {
    add_ln703_1877_fu_12489467_p2 = (!zext_ln203_383_fu_12437142_p1.read().is_01() || !trunc_ln203_58_fu_12437192_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_383_fu_12437142_p1.read()) + sc_biguint<10>(trunc_ln203_58_fu_12437192_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1878_fu_12508014_p2() {
    add_ln703_1878_fu_12508014_p2 = (!zext_ln703_298_fu_12508011_p1.read().is_01() || !sext_ln203_282_fu_12503092_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_298_fu_12508011_p1.read()) + sc_bigint<12>(sext_ln203_282_fu_12503092_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1879_fu_12508024_p2() {
    add_ln703_1879_fu_12508024_p2 = (!sext_ln703_1154_fu_12508020_p1.read().is_01() || !add_ln703_1876_fu_12508005_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1154_fu_12508020_p1.read()) + sc_biguint<15>(add_ln703_1876_fu_12508005_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_187_fu_12478975_p2() {
    add_ln703_187_fu_12478975_p2 = (!zext_ln703_38_fu_12478971_p1.read().is_01() || !add_ln703_185_fu_12478959_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_38_fu_12478971_p1.read()) + sc_biguint<11>(add_ln703_185_fu_12478959_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1880_fu_12489473_p2() {
    add_ln703_1880_fu_12489473_p2 = (!zext_ln203_384_fu_12437256_p1.read().is_01() || !sext_ln203_283_fu_12437232_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_384_fu_12437256_p1.read()) + sc_bigint<9>(sext_ln203_283_fu_12437232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1881_fu_12489483_p2() {
    add_ln703_1881_fu_12489483_p2 = (!sext_ln703_1155_fu_12489479_p1.read().is_01() || !zext_ln203_93_fu_12436738_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1155_fu_12489479_p1.read()) + sc_biguint<12>(zext_ln203_93_fu_12436738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1882_fu_12489489_p2() {
    add_ln703_1882_fu_12489489_p2 = (!sext_ln203_281_fu_12437188_p1.read().is_01() || !sext_ln203_284_fu_12437276_p1.read().is_01())? sc_lv<6>(): (sc_bigint<6>(sext_ln203_281_fu_12437188_p1.read()) + sc_bigint<6>(sext_ln203_284_fu_12437276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1883_fu_12489499_p2() {
    add_ln703_1883_fu_12489499_p2 = (!sext_ln703_1156_fu_12489495_p1.read().is_01() || !zext_ln203_94_fu_12437156_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_1156_fu_12489495_p1.read()) + sc_biguint<9>(zext_ln203_94_fu_12437156_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1884_fu_12489509_p2() {
    add_ln703_1884_fu_12489509_p2 = (!sext_ln703_1157_fu_12489505_p1.read().is_01() || !add_ln703_1881_fu_12489483_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1157_fu_12489505_p1.read()) + sc_biguint<12>(add_ln703_1881_fu_12489483_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1886_fu_12489515_p2() {
    add_ln703_1886_fu_12489515_p2 = (!zext_ln1118_2814_fu_12437300_p1.read().is_01() || !zext_ln1118_2815_fu_12437314_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2814_fu_12437300_p1.read()) + sc_biguint<10>(zext_ln1118_2815_fu_12437314_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1887_fu_12489525_p2() {
    add_ln703_1887_fu_12489525_p2 = (!zext_ln703_299_fu_12489521_p1.read().is_01() || !zext_ln708_1265_fu_12437280_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_299_fu_12489521_p1.read()) + sc_biguint<11>(zext_ln708_1265_fu_12437280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1888_fu_12489535_p2() {
    add_ln703_1888_fu_12489535_p2 = (!sext_ln1116_55_fu_12435520_p1.read().is_01() || !ap_const_lv10_2E0.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_55_fu_12435520_p1.read()) + sc_bigint<10>(ap_const_lv10_2E0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1889_fu_12489541_p2() {
    add_ln703_1889_fu_12489541_p2 = (!add_ln703_1888_fu_12489535_p2.read().is_01() || !zext_ln708_1266_fu_12437328_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_1888_fu_12489535_p2.read()) + sc_biguint<10>(zext_ln708_1266_fu_12437328_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1890_fu_12489551_p2() {
    add_ln703_1890_fu_12489551_p2 = (!sext_ln703_1160_fu_12489547_p1.read().is_01() || !zext_ln703_300_fu_12489531_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1160_fu_12489547_p1.read()) + sc_biguint<12>(zext_ln703_300_fu_12489531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1891_fu_12489557_p2() {
    add_ln703_1891_fu_12489557_p2 = (!add_ln703_1890_fu_12489551_p2.read().is_01() || !zext_ln1116_164_fu_12437360_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_1890_fu_12489551_p2.read()) + sc_biguint<12>(zext_ln1116_164_fu_12437360_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1892_fu_12489563_p2() {
    add_ln703_1892_fu_12489563_p2 = (!sext_ln708_110_fu_12437379_p1.read().is_01() || !zext_ln1118_2817_fu_12437403_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_110_fu_12437379_p1.read()) + sc_biguint<12>(zext_ln1118_2817_fu_12437403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1893_fu_12508049_p2() {
    add_ln703_1893_fu_12508049_p2 = (!sext_ln703_1162_fu_12508046_p1.read().is_01() || !sext_ln703_1161_fu_12508043_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1162_fu_12508046_p1.read()) + sc_bigint<13>(sext_ln703_1161_fu_12508043_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1894_fu_12508055_p2() {
    add_ln703_1894_fu_12508055_p2 = (!add_ln703_1893_fu_12508049_p2.read().is_01() || !zext_ln708_455_fu_12503095_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_1893_fu_12508049_p2.read()) + sc_biguint<13>(zext_ln708_455_fu_12503095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1895_fu_12489569_p2() {
    add_ln703_1895_fu_12489569_p2 = (!zext_ln1118_2821_fu_12437465_p1.read().is_01() || !zext_ln1116_277_fu_12437503_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2821_fu_12437465_p1.read()) + sc_biguint<10>(zext_ln1116_277_fu_12437503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1896_fu_12508064_p2() {
    add_ln703_1896_fu_12508064_p2 = (!zext_ln703_301_fu_12508061_p1.read().is_01() || !add_ln703_1894_fu_12508055_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_301_fu_12508061_p1.read()) + sc_biguint<13>(add_ln703_1894_fu_12508055_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1897_fu_12489575_p2() {
    add_ln703_1897_fu_12489575_p2 = (!zext_ln1118_2823_fu_12437507_p1.read().is_01() || !zext_ln1118_2819_fu_12437441_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2823_fu_12437507_p1.read()) + sc_biguint<10>(zext_ln1118_2819_fu_12437441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1898_fu_12489585_p2() {
    add_ln703_1898_fu_12489585_p2 = (!sext_ln1118_603_fu_12437427_p1.read().is_01() || !sext_ln1116_60_fu_12437499_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(sext_ln1118_603_fu_12437427_p1.read()) + sc_bigint<8>(sext_ln1116_60_fu_12437499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1899_fu_12489595_p2() {
    add_ln703_1899_fu_12489595_p2 = (!sext_ln703_1164_fu_12489591_p1.read().is_01() || !zext_ln703_302_fu_12489581_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1164_fu_12489591_p1.read()) + sc_biguint<11>(zext_ln703_302_fu_12489581_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_189_fu_12478981_p2() {
    add_ln703_189_fu_12478981_p2 = (!sext_ln203_29_fu_12405709_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_29_fu_12405709_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_18_fu_12477911_p2() {
    add_ln703_18_fu_12477911_p2 = (!sext_ln1116_4_fu_12401166_p1.read().is_01() || !sext_ln1116_5_fu_12401201_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_4_fu_12401166_p1.read()) + sc_bigint<10>(sext_ln1116_5_fu_12401201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1900_fu_12508077_p2() {
    add_ln703_1900_fu_12508077_p2 = (!sext_ln703_1165_fu_12508074_p1.read().is_01() || !sext_ln703_1163_fu_12508070_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1165_fu_12508074_p1.read()) + sc_bigint<14>(sext_ln703_1163_fu_12508070_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1901_fu_12489601_p2() {
    add_ln703_1901_fu_12489601_p2 = (!sext_ln1118_605_fu_12437521_p1.read().is_01() || !sext_ln1118_606_fu_12437577_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_605_fu_12437521_p1.read()) + sc_bigint<12>(sext_ln1118_606_fu_12437577_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1902_fu_12508086_p2() {
    add_ln703_1902_fu_12508086_p2 = (!sext_ln703_1166_fu_12508083_p1.read().is_01() || !add_ln703_1900_fu_12508077_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1166_fu_12508083_p1.read()) + sc_biguint<14>(add_ln703_1900_fu_12508077_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1903_fu_12489607_p2() {
    add_ln703_1903_fu_12489607_p2 = (!sext_ln1118_607_fu_12437591_p1.read().is_01() || !sext_ln1118_609_fu_12437621_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_607_fu_12437591_p1.read()) + sc_bigint<12>(sext_ln1118_609_fu_12437621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1904_fu_12489617_p2() {
    add_ln703_1904_fu_12489617_p2 = (!zext_ln1116_279_fu_12437535_p1.read().is_01() || !zext_ln708_1267_fu_12437549_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_279_fu_12437535_p1.read()) + sc_biguint<10>(zext_ln708_1267_fu_12437549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1905_fu_12489627_p2() {
    add_ln703_1905_fu_12489627_p2 = (!zext_ln703_303_fu_12489623_p1.read().is_01() || !sext_ln703_1168_fu_12489613_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_303_fu_12489623_p1.read()) + sc_bigint<13>(sext_ln703_1168_fu_12489613_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1906_fu_12508099_p2() {
    add_ln703_1906_fu_12508099_p2 = (!sext_ln703_1169_fu_12508096_p1.read().is_01() || !sext_ln703_1167_fu_12508092_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1169_fu_12508096_p1.read()) + sc_bigint<15>(sext_ln703_1167_fu_12508092_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1907_fu_12489633_p2() {
    add_ln703_1907_fu_12489633_p2 = (!zext_ln1118_2828_fu_12437681_p1.read().is_01() || !zext_ln1118_2830_fu_12437733_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2828_fu_12437681_p1.read()) + sc_biguint<10>(zext_ln1118_2830_fu_12437733_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1908_fu_12489643_p2() {
    add_ln703_1908_fu_12489643_p2 = (!zext_ln703_304_fu_12489639_p1.read().is_01() || !zext_ln708_1268_fu_12437653_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_304_fu_12489639_p1.read()) + sc_biguint<11>(zext_ln708_1268_fu_12437653_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1909_fu_12489653_p2() {
    add_ln703_1909_fu_12489653_p2 = (!sext_ln1118_523_fu_12433666_p1.read().is_01() || !sext_ln1118_475_fu_12431011_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_523_fu_12433666_p1.read()) + sc_bigint<9>(sext_ln1118_475_fu_12431011_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_190_fu_12478991_p2() {
    add_ln703_190_fu_12478991_p2 = (!sext_ln703_30_fu_12478987_p1.read().is_01() || !sext_ln203_30_fu_12405741_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_30_fu_12478987_p1.read()) + sc_bigint<13>(sext_ln203_30_fu_12405741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1910_fu_12489663_p2() {
    add_ln703_1910_fu_12489663_p2 = (!zext_ln1118_2824_fu_12437563_p1.read().is_01() || !sext_ln1118_610_fu_12437701_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2824_fu_12437563_p1.read()) + sc_bigint<9>(sext_ln1118_610_fu_12437701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1911_fu_12489673_p2() {
    add_ln703_1911_fu_12489673_p2 = (!sext_ln703_1171_fu_12489669_p1.read().is_01() || !sext_ln703_1170_fu_12489659_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1171_fu_12489669_p1.read()) + sc_bigint<10>(sext_ln703_1170_fu_12489659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1912_fu_12489683_p2() {
    add_ln703_1912_fu_12489683_p2 = (!sext_ln703_1172_fu_12489679_p1.read().is_01() || !zext_ln703_305_fu_12489649_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1172_fu_12489679_p1.read()) + sc_biguint<12>(zext_ln703_305_fu_12489649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1913_fu_12508108_p2() {
    add_ln703_1913_fu_12508108_p2 = (!sext_ln703_1173_fu_12508105_p1.read().is_01() || !add_ln703_1906_fu_12508099_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1173_fu_12508105_p1.read()) + sc_biguint<15>(add_ln703_1906_fu_12508099_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1914_fu_12508114_p2() {
    add_ln703_1914_fu_12508114_p2 = (!add_ln703_1913_fu_12508108_p2.read().is_01() || !zext_ln203_95_fu_12503098_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_1913_fu_12508108_p2.read()) + sc_biguint<15>(zext_ln203_95_fu_12503098_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1915_fu_12489689_p2() {
    add_ln703_1915_fu_12489689_p2 = (!sext_ln203_285_fu_12437777_p1.read().is_01() || !sext_ln203_286_fu_12437791_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_285_fu_12437777_p1.read()) + sc_bigint<11>(sext_ln203_286_fu_12437791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1916_fu_12489695_p2() {
    add_ln703_1916_fu_12489695_p2 = (!add_ln703_1915_fu_12489689_p2.read().is_01() || !zext_ln708_1269_fu_12437811_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_1915_fu_12489689_p2.read()) + sc_biguint<11>(zext_ln708_1269_fu_12437811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1918_fu_12489701_p2() {
    add_ln703_1918_fu_12489701_p2 = (!trunc_ln203_20_fu_12437815_p4.read().is_01() || !ap_const_lv10_C0.is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_20_fu_12437815_p4.read()) + sc_biguint<10>(ap_const_lv10_C0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1919_fu_12489711_p2() {
    add_ln703_1919_fu_12489711_p2 = (!sext_ln203_253_fu_12434488_p1.read().is_01() || !zext_ln703_5_fu_12489707_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_253_fu_12434488_p1.read()) + sc_biguint<12>(zext_ln703_5_fu_12489707_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_191_fu_12478997_p2() {
    add_ln703_191_fu_12478997_p2 = (!zext_ln1118_2275_fu_12405787_p1.read().is_01() || !zext_ln1118_2277_fu_12405801_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2275_fu_12405787_p1.read()) + sc_biguint<10>(zext_ln1118_2277_fu_12405801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1920_fu_12489721_p2() {
    add_ln703_1920_fu_12489721_p2 = (!sext_ln703_273_fu_12489717_p1.read().is_01() || !sext_ln203_288_fu_12437841_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_273_fu_12489717_p1.read()) + sc_bigint<13>(sext_ln203_288_fu_12437841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1921_fu_12489727_p2() {
    add_ln703_1921_fu_12489727_p2 = (!sext_ln708_111_fu_12437861_p1.read().is_01() || !zext_ln708_456_fu_12437875_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_111_fu_12437861_p1.read()) + sc_biguint<11>(zext_ln708_456_fu_12437875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1922_fu_12489737_p2() {
    add_ln703_1922_fu_12489737_p2 = (!sext_ln703_1176_fu_12489733_p1.read().is_01() || !add_ln703_1920_fu_12489721_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1176_fu_12489733_p1.read()) + sc_biguint<13>(add_ln703_1920_fu_12489721_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1923_fu_12489743_p2() {
    add_ln703_1923_fu_12489743_p2 = (!zext_ln708_1270_fu_12437889_p1.read().is_01() || !zext_ln708_1212_fu_12431840_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1270_fu_12437889_p1.read()) + sc_biguint<11>(zext_ln708_1212_fu_12431840_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1924_fu_12508139_p2() {
    add_ln703_1924_fu_12508139_p2 = (!zext_ln703_306_fu_12508136_p1.read().is_01() || !sext_ln703_274_fu_12508133_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_306_fu_12508136_p1.read()) + sc_bigint<14>(sext_ln703_274_fu_12508133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1925_fu_12489749_p2() {
    add_ln703_1925_fu_12489749_p2 = (!sext_ln1118_612_fu_12437913_p1.read().is_01() || !sext_ln1118_613_fu_12437937_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln1118_612_fu_12437913_p1.read()) + sc_bigint<7>(sext_ln1118_613_fu_12437937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1926_fu_12489759_p2() {
    add_ln703_1926_fu_12489759_p2 = (!sext_ln703_1177_fu_12489755_p1.read().is_01() || !zext_ln1118_2834_fu_12437917_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1177_fu_12489755_p1.read()) + sc_biguint<10>(zext_ln1118_2834_fu_12437917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1927_fu_12508148_p2() {
    add_ln703_1927_fu_12508148_p2 = (!sext_ln703_1178_fu_12508145_p1.read().is_01() || !add_ln703_1924_fu_12508139_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1178_fu_12508145_p1.read()) + sc_biguint<14>(add_ln703_1924_fu_12508139_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1928_fu_12508154_p2() {
    add_ln703_1928_fu_12508154_p2 = (!add_ln703_1927_fu_12508148_p2.read().is_01() || !zext_ln708_459_fu_12503101_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_1927_fu_12508148_p2.read()) + sc_biguint<14>(zext_ln708_459_fu_12503101_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1929_fu_12489765_p2() {
    add_ln703_1929_fu_12489765_p2 = (!sext_ln1118_384_fu_12425357_p1.read().is_01() || !sext_ln1118_618_fu_12438033_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_384_fu_12425357_p1.read()) + sc_bigint<12>(sext_ln1118_618_fu_12438033_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_192_fu_12479007_p2() {
    add_ln703_192_fu_12479007_p2 = (!zext_ln703_40_fu_12479003_p1.read().is_01() || !sext_ln1118_60_fu_12405755_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_40_fu_12479003_p1.read()) + sc_bigint<12>(sext_ln1118_60_fu_12405755_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1930_fu_12489775_p2() {
    add_ln703_1930_fu_12489775_p2 = (!sext_ln703_1180_fu_12489771_p1.read().is_01() || !sext_ln1118_615_fu_12437979_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1180_fu_12489771_p1.read()) + sc_bigint<13>(sext_ln1118_615_fu_12437979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1931_fu_12508167_p2() {
    add_ln703_1931_fu_12508167_p2 = (!sext_ln703_1181_fu_12508164_p1.read().is_01() || !sext_ln703_1179_fu_12508160_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1181_fu_12508164_p1.read()) + sc_bigint<15>(sext_ln703_1179_fu_12508160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1932_fu_12489781_p2() {
    add_ln703_1932_fu_12489781_p2 = (!zext_ln1118_2836_fu_12438019_p1.read().is_01() || !trunc_ln1118_105_fu_12438079_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2836_fu_12438019_p1.read()) + sc_biguint<10>(trunc_ln1118_105_fu_12438079_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1933_fu_12489791_p2() {
    add_ln703_1933_fu_12489791_p2 = (!zext_ln703_307_fu_12489787_p1.read().is_01() || !sext_ln708_112_fu_12438065_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_307_fu_12489787_p1.read()) + sc_bigint<12>(sext_ln708_112_fu_12438065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1934_fu_12489801_p2() {
    add_ln703_1934_fu_12489801_p2 = (!sext_ln1118_617_fu_12437999_p1.read().is_01() || !zext_ln1118_2835_fu_12437951_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_617_fu_12437999_p1.read()) + sc_biguint<10>(zext_ln1118_2835_fu_12437951_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1935_fu_12489811_p2() {
    add_ln703_1935_fu_12489811_p2 = (!sext_ln703_1183_fu_12489807_p1.read().is_01() || !sext_ln1118_614_fu_12437965_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1183_fu_12489807_p1.read()) + sc_bigint<11>(sext_ln1118_614_fu_12437965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1936_fu_12489821_p2() {
    add_ln703_1936_fu_12489821_p2 = (!sext_ln703_1184_fu_12489817_p1.read().is_01() || !sext_ln703_1182_fu_12489797_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1184_fu_12489817_p1.read()) + sc_bigint<13>(sext_ln703_1182_fu_12489797_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1937_fu_12508176_p2() {
    add_ln703_1937_fu_12508176_p2 = (!sext_ln703_1185_fu_12508173_p1.read().is_01() || !add_ln703_1931_fu_12508167_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1185_fu_12508173_p1.read()) + sc_biguint<15>(add_ln703_1931_fu_12508167_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1938_fu_12489827_p2() {
    add_ln703_1938_fu_12489827_p2 = (!sext_ln203_289_fu_12438099_p1.read().is_01() || !sext_ln203_290_fu_12438113_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_289_fu_12438099_p1.read()) + sc_bigint<12>(sext_ln203_290_fu_12438113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1939_fu_12508185_p2() {
    add_ln703_1939_fu_12508185_p2 = (!sext_ln703_1186_fu_12508182_p1.read().is_01() || !add_ln703_1937_fu_12508176_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1186_fu_12508182_p1.read()) + sc_biguint<15>(add_ln703_1937_fu_12508176_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_193_fu_12479017_p2() {
    add_ln703_193_fu_12479017_p2 = (!sext_ln703_149_fu_12479013_p1.read().is_01() || !add_ln703_190_fu_12478991_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_149_fu_12479013_p1.read()) + sc_biguint<13>(add_ln703_190_fu_12478991_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1940_fu_12489833_p2() {
    add_ln703_1940_fu_12489833_p2 = (!sext_ln203_292_fu_12438231_p1.read().is_01() || !zext_ln203_96_fu_12438127_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_292_fu_12438231_p1.read()) + sc_biguint<12>(zext_ln203_96_fu_12438127_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1941_fu_12489843_p2() {
    add_ln703_1941_fu_12489843_p2 = (!sext_ln703_1187_fu_12489839_p1.read().is_01() || !sext_ln203_291_fu_12438151_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1187_fu_12489839_p1.read()) + sc_bigint<13>(sext_ln203_291_fu_12438151_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1942_fu_12508194_p2() {
    add_ln703_1942_fu_12508194_p2 = (!sext_ln703_1188_fu_12508191_p1.read().is_01() || !add_ln703_1939_fu_12508185_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1188_fu_12508191_p1.read()) + sc_biguint<15>(add_ln703_1939_fu_12508185_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1943_fu_12489849_p2() {
    add_ln703_1943_fu_12489849_p2 = (!zext_ln203_386_fu_12438175_p1.read().is_01() || !zext_ln203_387_fu_12438189_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_386_fu_12438175_p1.read()) + sc_biguint<10>(zext_ln203_387_fu_12438189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1944_fu_12489855_p2() {
    add_ln703_1944_fu_12489855_p2 = (!add_ln703_1943_fu_12489849_p2.read().is_01() || !zext_ln203_385_fu_12438131_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_1943_fu_12489849_p2.read()) + sc_biguint<10>(zext_ln203_385_fu_12438131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1945_fu_12489865_p2() {
    add_ln703_1945_fu_12489865_p2 = (!zext_ln708_1271_fu_12438217_p1.read().is_01() || !sext_ln203_293_fu_12438235_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1271_fu_12438217_p1.read()) + sc_bigint<11>(sext_ln203_293_fu_12438235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1946_fu_12489875_p2() {
    add_ln703_1946_fu_12489875_p2 = (!sext_ln703_1190_fu_12489871_p1.read().is_01() || !zext_ln203_97_fu_12438203_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1190_fu_12489871_p1.read()) + sc_biguint<12>(zext_ln203_97_fu_12438203_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1947_fu_12489881_p2() {
    add_ln703_1947_fu_12489881_p2 = (!add_ln703_1946_fu_12489875_p2.read().is_01() || !zext_ln703_308_fu_12489861_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_1946_fu_12489875_p2.read()) + sc_biguint<12>(zext_ln703_308_fu_12489861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1949_fu_12489887_p2() {
    add_ln703_1949_fu_12489887_p2 = (!sext_ln1118_619_fu_12438255_p1.read().is_01() || !ap_const_lv9_98.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_619_fu_12438255_p1.read()) + sc_biguint<9>(ap_const_lv9_98));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_194_fu_12503876_p2() {
    add_ln703_194_fu_12503876_p2 = (!sext_ln703_31_fu_12503873_p1.read().is_01() || !sext_ln203_31_fu_12502825_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_31_fu_12503873_p1.read()) + sc_bigint<14>(sext_ln203_31_fu_12502825_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1950_fu_12489893_p2() {
    add_ln703_1950_fu_12489893_p2 = (!add_ln703_1949_fu_12489887_p2.read().is_01() || !zext_ln1118_2839_fu_12438273_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(add_ln703_1949_fu_12489887_p2.read()) + sc_biguint<9>(zext_ln1118_2839_fu_12438273_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1951_fu_12489903_p2() {
    add_ln703_1951_fu_12489903_p2 = (!sext_ln1118_621_fu_12438287_p1.read().is_01() || !sext_ln1118_620_fu_12438259_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_621_fu_12438287_p1.read()) + sc_bigint<11>(sext_ln1118_620_fu_12438259_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1952_fu_12489913_p2() {
    add_ln703_1952_fu_12489913_p2 = (!sext_ln703_1192_fu_12489909_p1.read().is_01() || !zext_ln703_309_fu_12489899_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1192_fu_12489909_p1.read()) + sc_biguint<12>(zext_ln703_309_fu_12489899_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1953_fu_12489919_p2() {
    add_ln703_1953_fu_12489919_p2 = (!add_ln703_1952_fu_12489913_p2.read().is_01() || !zext_ln708_462_fu_12438315_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_1952_fu_12489913_p2.read()) + sc_biguint<12>(zext_ln708_462_fu_12438315_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1954_fu_12489925_p2() {
    add_ln703_1954_fu_12489925_p2 = (!zext_ln1118_2843_fu_12438367_p1.read().is_01() || !zext_ln1118_2676_fu_12431906_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2843_fu_12438367_p1.read()) + sc_biguint<10>(zext_ln1118_2676_fu_12431906_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1955_fu_12489935_p2() {
    add_ln703_1955_fu_12489935_p2 = (!zext_ln703_310_fu_12489931_p1.read().is_01() || !add_ln703_1953_fu_12489919_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_310_fu_12489931_p1.read()) + sc_biguint<12>(add_ln703_1953_fu_12489919_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1956_fu_12489941_p2() {
    add_ln703_1956_fu_12489941_p2 = (!sext_ln1118_624_fu_12438343_p1.read().is_01() || !sext_ln1118_623_fu_12438291_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_624_fu_12438343_p1.read()) + sc_bigint<11>(sext_ln1118_623_fu_12438291_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1957_fu_12489951_p2() {
    add_ln703_1957_fu_12489951_p2 = (!sext_ln1118_428_fu_12427894_p1.read().is_01() || !zext_ln1118_2841_fu_12438329_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_428_fu_12427894_p1.read()) + sc_biguint<10>(zext_ln1118_2841_fu_12438329_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1958_fu_12489961_p2() {
    add_ln703_1958_fu_12489961_p2 = (!sext_ln703_1195_fu_12489957_p1.read().is_01() || !sext_ln1118_625_fu_12438381_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1195_fu_12489957_p1.read()) + sc_bigint<11>(sext_ln1118_625_fu_12438381_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1959_fu_12489971_p2() {
    add_ln703_1959_fu_12489971_p2 = (!sext_ln703_1196_fu_12489967_p1.read().is_01() || !sext_ln703_1194_fu_12489947_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1196_fu_12489967_p1.read()) + sc_bigint<12>(sext_ln703_1194_fu_12489947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_195_fu_12479023_p2() {
    add_ln703_195_fu_12479023_p2 = (!zext_ln1118_2281_fu_12405829_p1.read().is_01() || !zext_ln1118_2289_fu_12405861_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2281_fu_12405829_p1.read()) + sc_biguint<10>(zext_ln1118_2289_fu_12405861_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1960_fu_12508219_p2() {
    add_ln703_1960_fu_12508219_p2 = (!sext_ln703_1197_fu_12508216_p1.read().is_01() || !sext_ln703_1193_fu_12508213_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1197_fu_12508216_p1.read()) + sc_bigint<13>(sext_ln703_1193_fu_12508213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1961_fu_12508229_p2() {
    add_ln703_1961_fu_12508229_p2 = (!sext_ln703_1198_fu_12508225_p1.read().is_01() || !sext_ln1118_629_fu_12503104_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1198_fu_12508225_p1.read()) + sc_bigint<14>(sext_ln1118_629_fu_12503104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1962_fu_12489977_p2() {
    add_ln703_1962_fu_12489977_p2 = (!sext_ln1118_633_fu_12438521_p1.read().is_01() || !zext_ln1118_2846_fu_12438437_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_633_fu_12438521_p1.read()) + sc_biguint<12>(zext_ln1118_2846_fu_12438437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1963_fu_12489987_p2() {
    add_ln703_1963_fu_12489987_p2 = (!sext_ln703_1199_fu_12489983_p1.read().is_01() || !sext_ln708_113_fu_12438451_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1199_fu_12489983_p1.read()) + sc_bigint<13>(sext_ln708_113_fu_12438451_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1964_fu_12508238_p2() {
    add_ln703_1964_fu_12508238_p2 = (!sext_ln703_1200_fu_12508235_p1.read().is_01() || !add_ln703_1961_fu_12508229_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1200_fu_12508235_p1.read()) + sc_biguint<14>(add_ln703_1961_fu_12508229_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1965_fu_12489993_p2() {
    add_ln703_1965_fu_12489993_p2 = (!sext_ln708_105_fu_12435656_p1.read().is_01() || !sext_ln1118_632_fu_12438497_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_105_fu_12435656_p1.read()) + sc_bigint<11>(sext_ln1118_632_fu_12438497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1966_fu_12490003_p2() {
    add_ln703_1966_fu_12490003_p2 = (!sext_ln1118_631_fu_12438483_p1.read().is_01() || !zext_ln1118_2847_fu_12438455_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_631_fu_12438483_p1.read()) + sc_biguint<10>(zext_ln1118_2847_fu_12438455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1967_fu_12490013_p2() {
    add_ln703_1967_fu_12490013_p2 = (!sext_ln703_1203_fu_12490009_p1.read().is_01() || !sext_ln1118_630_fu_12438469_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1203_fu_12490009_p1.read()) + sc_bigint<11>(sext_ln1118_630_fu_12438469_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1968_fu_12490023_p2() {
    add_ln703_1968_fu_12490023_p2 = (!sext_ln703_1204_fu_12490019_p1.read().is_01() || !sext_ln703_1202_fu_12489999_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1204_fu_12490019_p1.read()) + sc_bigint<12>(sext_ln703_1202_fu_12489999_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1969_fu_12508251_p2() {
    add_ln703_1969_fu_12508251_p2 = (!sext_ln703_1205_fu_12508248_p1.read().is_01() || !sext_ln703_1201_fu_12508244_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1205_fu_12508248_p1.read()) + sc_bigint<15>(sext_ln703_1201_fu_12508244_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_196_fu_12479033_p2() {
    add_ln703_196_fu_12479033_p2 = (!zext_ln703_41_fu_12479029_p1.read().is_01() || !sext_ln1116_2_fu_12400961_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_41_fu_12479029_p1.read()) + sc_bigint<12>(sext_ln1116_2_fu_12400961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1970_fu_12490029_p2() {
    add_ln703_1970_fu_12490029_p2 = (!zext_ln203_98_fu_12438525_p1.read().is_01() || !sext_ln1118_344_fu_12422703_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_98_fu_12438525_p1.read()) + sc_bigint<12>(sext_ln1118_344_fu_12422703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1971_fu_12508260_p2() {
    add_ln703_1971_fu_12508260_p2 = (!sext_ln703_1206_fu_12508257_p1.read().is_01() || !add_ln703_1969_fu_12508251_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1206_fu_12508257_p1.read()) + sc_biguint<15>(add_ln703_1969_fu_12508251_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1972_fu_12490035_p2() {
    add_ln703_1972_fu_12490035_p2 = (!zext_ln203_388_fu_12438553_p1.read().is_01() || !zext_ln203_389_fu_12438567_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_388_fu_12438553_p1.read()) + sc_biguint<10>(zext_ln203_389_fu_12438567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1973_fu_12490045_p2() {
    add_ln703_1973_fu_12490045_p2 = (!zext_ln703_311_fu_12490041_p1.read().is_01() || !sext_ln203_296_fu_12438645_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_311_fu_12490041_p1.read()) + sc_bigint<12>(sext_ln203_296_fu_12438645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1974_fu_12508269_p2() {
    add_ln703_1974_fu_12508269_p2 = (!sext_ln703_1207_fu_12508266_p1.read().is_01() || !add_ln703_1971_fu_12508260_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1207_fu_12508266_p1.read()) + sc_biguint<15>(add_ln703_1971_fu_12508260_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1975_fu_12490051_p2() {
    add_ln703_1975_fu_12490051_p2 = (!trunc_ln708_1672_fu_12425545_p4.read().is_01() || !zext_ln203_390_fu_12438665_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln708_1672_fu_12425545_p4.read()) + sc_biguint<10>(zext_ln203_390_fu_12438665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1976_fu_12490061_p2() {
    add_ln703_1976_fu_12490061_p2 = (!zext_ln703_312_fu_12490057_p1.read().is_01() || !zext_ln708_1272_fu_12438591_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_312_fu_12490057_p1.read()) + sc_biguint<11>(zext_ln708_1272_fu_12438591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1977_fu_12490071_p2() {
    add_ln703_1977_fu_12490071_p2 = (!zext_ln1118_2286_fu_12420817_p1.read().is_01() || !sext_ln203_294_fu_12438549_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2286_fu_12420817_p1.read()) + sc_bigint<10>(sext_ln203_294_fu_12438549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1978_fu_12490081_p2() {
    add_ln703_1978_fu_12490081_p2 = (!sext_ln703_1208_fu_12490077_p1.read().is_01() || !sext_ln203_295_fu_12438621_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1208_fu_12490077_p1.read()) + sc_bigint<11>(sext_ln203_295_fu_12438621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1979_fu_12490091_p2() {
    add_ln703_1979_fu_12490091_p2 = (!sext_ln703_1209_fu_12490087_p1.read().is_01() || !zext_ln703_313_fu_12490067_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1209_fu_12490087_p1.read()) + sc_biguint<12>(zext_ln703_313_fu_12490067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_197_fu_12503885_p2() {
    add_ln703_197_fu_12503885_p2 = (!sext_ln703_153_fu_12503882_p1.read().is_01() || !add_ln703_194_fu_12503876_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_153_fu_12503882_p1.read()) + sc_biguint<14>(add_ln703_194_fu_12503876_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1981_fu_12490097_p2() {
    add_ln703_1981_fu_12490097_p2 = (!zext_ln203_391_fu_12438685_p1.read().is_01() || !ap_const_lv10_3F0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_391_fu_12438685_p1.read()) + sc_bigint<10>(ap_const_lv10_3F0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1982_fu_12490107_p2() {
    add_ln703_1982_fu_12490107_p2 = (!zext_ln708_1273_fu_12438713_p1.read().is_01() || !sext_ln703_281_fu_12490103_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1273_fu_12438713_p1.read()) + sc_bigint<11>(sext_ln703_281_fu_12490103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1983_fu_12490117_p2() {
    add_ln703_1983_fu_12490117_p2 = (!zext_ln1118_2854_fu_12438727_p1.read().is_01() || !zext_ln203_392_fu_12438731_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2854_fu_12438727_p1.read()) + sc_biguint<10>(zext_ln203_392_fu_12438731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1984_fu_12490127_p2() {
    add_ln703_1984_fu_12490127_p2 = (!zext_ln703_314_fu_12490123_p1.read().is_01() || !sext_ln703_282_fu_12490113_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_314_fu_12490123_p1.read()) + sc_bigint<12>(sext_ln703_282_fu_12490113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1985_fu_12490133_p2() {
    add_ln703_1985_fu_12490133_p2 = (!add_ln703_1984_fu_12490127_p2.read().is_01() || !zext_ln1118_2857_fu_12438763_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_1984_fu_12490127_p2.read()) + sc_biguint<12>(zext_ln1118_2857_fu_12438763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1986_fu_12490143_p2() {
    add_ln703_1986_fu_12490143_p2 = (!sext_ln1118_637_fu_12438735_p1.read().is_01() || !sext_ln1118_418_fu_12427218_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_637_fu_12438735_p1.read()) + sc_bigint<11>(sext_ln1118_418_fu_12427218_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1987_fu_12490149_p2() {
    add_ln703_1987_fu_12490149_p2 = (!add_ln703_1986_fu_12490143_p2.read().is_01() || !zext_ln708_1274_fu_12438777_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_1986_fu_12490143_p2.read()) + sc_biguint<11>(zext_ln708_1274_fu_12438777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1988_fu_12490159_p2() {
    add_ln703_1988_fu_12490159_p2 = (!sext_ln703_1213_fu_12490155_p1.read().is_01() || !sext_ln703_1212_fu_12490139_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1213_fu_12490155_p1.read()) + sc_bigint<13>(sext_ln703_1212_fu_12490139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1989_fu_12490165_p2() {
    add_ln703_1989_fu_12490165_p2 = (!zext_ln1118_2859_fu_12438801_p1.read().is_01() || !zext_ln1118_2860_fu_12438815_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2859_fu_12438801_p1.read()) + sc_biguint<10>(zext_ln1118_2860_fu_12438815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_198_fu_12479039_p2() {
    add_ln703_198_fu_12479039_p2 = (!zext_ln708_981_fu_12405907_p1.read().is_01() || !zext_ln708_983_fu_12405945_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_981_fu_12405907_p1.read()) + sc_biguint<11>(zext_ln708_983_fu_12405945_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1990_fu_12490175_p2() {
    add_ln703_1990_fu_12490175_p2 = (!zext_ln703_315_fu_12490171_p1.read().is_01() || !add_ln703_1988_fu_12490159_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_315_fu_12490171_p1.read()) + sc_biguint<13>(add_ln703_1988_fu_12490159_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1991_fu_12490181_p2() {
    add_ln703_1991_fu_12490181_p2 = (!sext_ln1118_544_fu_12434616_p1.read().is_01() || !sext_ln1118_640_fu_12438829_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_544_fu_12434616_p1.read()) + sc_bigint<11>(sext_ln1118_640_fu_12438829_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1992_fu_12490191_p2() {
    add_ln703_1992_fu_12490191_p2 = (!sext_ln1118_594_fu_12436936_p1.read().is_01() || !zext_ln708_197_fu_12421590_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_594_fu_12436936_p1.read()) + sc_biguint<10>(zext_ln708_197_fu_12421590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1993_fu_12490201_p2() {
    add_ln703_1993_fu_12490201_p2 = (!sext_ln703_1216_fu_12490197_p1.read().is_01() || !sext_ln703_1215_fu_12490187_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1216_fu_12490197_p1.read()) + sc_bigint<12>(sext_ln703_1215_fu_12490187_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1994_fu_12508294_p2() {
    add_ln703_1994_fu_12508294_p2 = (!sext_ln703_1217_fu_12508291_p1.read().is_01() || !sext_ln703_1214_fu_12508288_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1217_fu_12508291_p1.read()) + sc_bigint<14>(sext_ln703_1214_fu_12508288_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1995_fu_12490207_p2() {
    add_ln703_1995_fu_12490207_p2 = (!sext_ln1118_605_fu_12437521_p1.read().is_01() || !sext_ln1118_642_fu_12438951_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_605_fu_12437521_p1.read()) + sc_bigint<12>(sext_ln1118_642_fu_12438951_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1996_fu_12508303_p2() {
    add_ln703_1996_fu_12508303_p2 = (!sext_ln703_1218_fu_12508300_p1.read().is_01() || !add_ln703_1994_fu_12508294_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1218_fu_12508300_p1.read()) + sc_biguint<14>(add_ln703_1994_fu_12508294_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1997_fu_12490213_p2() {
    add_ln703_1997_fu_12490213_p2 = (!zext_ln708_1277_fu_12438875_p1.read().is_01() || !zext_ln708_1278_fu_12438889_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1277_fu_12438875_p1.read()) + sc_biguint<11>(zext_ln708_1278_fu_12438889_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1998_fu_12490219_p2() {
    add_ln703_1998_fu_12490219_p2 = (!add_ln703_1997_fu_12490213_p2.read().is_01() || !zext_ln708_1276_fu_12438871_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_1997_fu_12490213_p2.read()) + sc_biguint<11>(zext_ln708_1276_fu_12438871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1999_fu_12508316_p2() {
    add_ln703_1999_fu_12508316_p2 = (!zext_ln703_316_fu_12508313_p1.read().is_01() || !sext_ln703_1219_fu_12508309_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_316_fu_12508313_p1.read()) + sc_bigint<15>(sext_ln703_1219_fu_12508309_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_199_fu_12479045_p2() {
    add_ln703_199_fu_12479045_p2 = (!add_ln703_198_fu_12479039_p2.read().is_01() || !zext_ln708_979_fu_12405875_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_198_fu_12479039_p2.read()) + sc_biguint<11>(zext_ln708_979_fu_12405875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_19_fu_12477921_p2() {
    add_ln703_19_fu_12477921_p2 = (!sext_ln703_21_fu_12477917_p1.read().is_01() || !zext_ln1118_181_fu_12401116_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_21_fu_12477917_p1.read()) + sc_biguint<11>(zext_ln1118_181_fu_12401116_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_1_fu_12477809_p2() {
    add_ln703_1_fu_12477809_p2 = (!add_ln703_fu_12477803_p2.read().is_01() || !zext_ln1116_3_fu_12400508_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_fu_12477803_p2.read()) + sc_biguint<12>(zext_ln1116_3_fu_12400508_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2000_fu_12490225_p2() {
    add_ln703_2000_fu_12490225_p2 = (!trunc_ln1118_106_fu_12438969_p4.read().is_01() || !zext_ln1118_2863_fu_12438995_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_106_fu_12438969_p4.read()) + sc_biguint<10>(zext_ln1118_2863_fu_12438995_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2001_fu_12490235_p2() {
    add_ln703_2001_fu_12490235_p2 = (!zext_ln703_317_fu_12490231_p1.read().is_01() || !zext_ln708_1279_fu_12438937_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_317_fu_12490231_p1.read()) + sc_biguint<11>(zext_ln708_1279_fu_12438937_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2002_fu_12490245_p2() {
    add_ln703_2002_fu_12490245_p2 = (!sext_ln708_115_fu_12438965_p1.read().is_01() || !sext_ln708_114_fu_12438843_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_115_fu_12438965_p1.read()) + sc_bigint<11>(sext_ln708_114_fu_12438843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2003_fu_12490251_p2() {
    add_ln703_2003_fu_12490251_p2 = (!zext_ln708_1275_fu_12438857_p1.read().is_01() || !sext_ln1118_641_fu_12438913_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1275_fu_12438857_p1.read()) + sc_bigint<8>(sext_ln1118_641_fu_12438913_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2004_fu_12490261_p2() {
    add_ln703_2004_fu_12490261_p2 = (!sext_ln703_1220_fu_12490257_p1.read().is_01() || !add_ln703_2002_fu_12490245_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1220_fu_12490257_p1.read()) + sc_biguint<11>(add_ln703_2002_fu_12490245_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2005_fu_12490271_p2() {
    add_ln703_2005_fu_12490271_p2 = (!sext_ln703_1221_fu_12490267_p1.read().is_01() || !zext_ln703_318_fu_12490241_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1221_fu_12490267_p1.read()) + sc_biguint<12>(zext_ln703_318_fu_12490241_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2006_fu_12508325_p2() {
    add_ln703_2006_fu_12508325_p2 = (!sext_ln703_1222_fu_12508322_p1.read().is_01() || !add_ln703_1999_fu_12508316_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1222_fu_12508322_p1.read()) + sc_biguint<15>(add_ln703_1999_fu_12508316_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2007_fu_12490277_p2() {
    add_ln703_2007_fu_12490277_p2 = (!zext_ln203_393_fu_12439019_p1.read().is_01() || !trunc_ln203_59_fu_12439037_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_393_fu_12439019_p1.read()) + sc_biguint<10>(trunc_ln203_59_fu_12439037_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2008_fu_12508334_p2() {
    add_ln703_2008_fu_12508334_p2 = (!zext_ln703_319_fu_12508331_p1.read().is_01() || !add_ln703_2006_fu_12508325_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_319_fu_12508331_p1.read()) + sc_biguint<15>(add_ln703_2006_fu_12508325_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2009_fu_12490283_p2() {
    add_ln703_2009_fu_12490283_p2 = (!sext_ln708_73_fu_12427003_p1.read().is_01() || !sext_ln203_299_fu_12439067_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln708_73_fu_12427003_p1.read()) + sc_bigint<9>(sext_ln203_299_fu_12439067_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_200_fu_12479055_p2() {
    add_ln703_200_fu_12479055_p2 = (!zext_ln1118_2290_fu_12405893_p1.read().is_01() || !zext_ln708_982_fu_12405931_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln1118_2290_fu_12405893_p1.read()) + sc_biguint<7>(zext_ln708_982_fu_12405931_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2010_fu_12490293_p2() {
    add_ln703_2010_fu_12490293_p2 = (!sext_ln703_1223_fu_12490289_p1.read().is_01() || !sext_ln203_298_fu_12439033_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1223_fu_12490289_p1.read()) + sc_bigint<10>(sext_ln203_298_fu_12439033_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2012_fu_12490299_p2() {
    add_ln703_2012_fu_12490299_p2 = (!sext_ln203_300_fu_12439137_p1.read().is_01() || !ap_const_lv12_C40.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_300_fu_12439137_p1.read()) + sc_bigint<12>(ap_const_lv12_C40));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2013_fu_12490305_p2() {
    add_ln703_2013_fu_12490305_p2 = (!add_ln703_2012_fu_12490299_p2.read().is_01() || !zext_ln1116_171_fu_12439240_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2012_fu_12490299_p2.read()) + sc_biguint<12>(zext_ln1116_171_fu_12439240_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2014_fu_12490311_p2() {
    add_ln703_2014_fu_12490311_p2 = (!sext_ln1116_62_fu_12439201_p1.read().is_01() || !sext_ln1118_644_fu_12439274_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_62_fu_12439201_p1.read()) + sc_bigint<10>(sext_ln1118_644_fu_12439274_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2015_fu_12490321_p2() {
    add_ln703_2015_fu_12490321_p2 = (!sext_ln703_1226_fu_12490317_p1.read().is_01() || !add_ln703_2013_fu_12490305_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1226_fu_12490317_p1.read()) + sc_biguint<12>(add_ln703_2013_fu_12490305_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2016_fu_12490331_p2() {
    add_ln703_2016_fu_12490331_p2 = (!sext_ln703_1227_fu_12490327_p1.read().is_01() || !sext_ln1116_63_fu_12439514_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1227_fu_12490327_p1.read()) + sc_bigint<13>(sext_ln1116_63_fu_12439514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2017_fu_12490337_p2() {
    add_ln703_2017_fu_12490337_p2 = (!zext_ln708_1280_fu_12439382_p1.read().is_01() || !zext_ln708_1281_fu_12439422_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1280_fu_12439382_p1.read()) + sc_biguint<11>(zext_ln708_1281_fu_12439422_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2018_fu_12508356_p2() {
    add_ln703_2018_fu_12508356_p2 = (!zext_ln703_320_fu_12508353_p1.read().is_01() || !add_ln703_2016_reg_12517217.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_320_fu_12508353_p1.read()) + sc_biguint<13>(add_ln703_2016_reg_12517217.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2019_fu_12490343_p2() {
    add_ln703_2019_fu_12490343_p2 = (!zext_ln1116_280_fu_12439487_p1.read().is_01() || !zext_ln1116_282_fu_12439637_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_280_fu_12439487_p1.read()) + sc_biguint<9>(zext_ln1116_282_fu_12439637_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_201_fu_12479065_p2() {
    add_ln703_201_fu_12479065_p2 = (!zext_ln703_43_fu_12479061_p1.read().is_01() || !sext_ln1118_61_fu_12405815_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_43_fu_12479061_p1.read()) + sc_bigint<11>(sext_ln1118_61_fu_12405815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2020_fu_12490353_p2() {
    add_ln703_2020_fu_12490353_p2 = (!sext_ln708_116_fu_12439332_p1.read().is_01() || !sext_ln708_117_fu_12439577_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_116_fu_12439332_p1.read()) + sc_bigint<10>(sext_ln708_117_fu_12439577_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2021_fu_12490363_p2() {
    add_ln703_2021_fu_12490363_p2 = (!sext_ln703_1228_fu_12490359_p1.read().is_01() || !zext_ln703_321_fu_12490349_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1228_fu_12490359_p1.read()) + sc_biguint<11>(zext_ln703_321_fu_12490349_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2022_fu_12508364_p2() {
    add_ln703_2022_fu_12508364_p2 = (!sext_ln703_1229_fu_12508361_p1.read().is_01() || !add_ln703_2018_fu_12508356_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1229_fu_12508361_p1.read()) + sc_biguint<13>(add_ln703_2018_fu_12508356_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2023_fu_12490369_p2() {
    add_ln703_2023_fu_12490369_p2 = (!sext_ln1116_64_fu_12439693_p1.read().is_01() || !sext_ln1116_68_fu_12440087_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_64_fu_12439693_p1.read()) + sc_bigint<12>(sext_ln1116_68_fu_12440087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2024_fu_12508377_p2() {
    add_ln703_2024_fu_12508377_p2 = (!sext_ln703_1231_fu_12508374_p1.read().is_01() || !sext_ln703_1230_fu_12508370_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1231_fu_12508374_p1.read()) + sc_bigint<14>(sext_ln703_1230_fu_12508370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2025_fu_12490375_p2() {
    add_ln703_2025_fu_12490375_p2 = (!zext_ln708_1282_fu_12439721_p1.read().is_01() || !zext_ln708_1283_fu_12439801_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1282_fu_12439721_p1.read()) + sc_biguint<11>(zext_ln708_1283_fu_12439801_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2026_fu_12490385_p2() {
    add_ln703_2026_fu_12490385_p2 = (!zext_ln703_322_fu_12490381_p1.read().is_01() || !sext_ln1116_69_fu_12440132_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_322_fu_12490381_p1.read()) + sc_bigint<13>(sext_ln1116_69_fu_12440132_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2027_fu_12508390_p2() {
    add_ln703_2027_fu_12508390_p2 = (!sext_ln703_1233_fu_12508387_p1.read().is_01() || !sext_ln703_1232_fu_12508383_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1233_fu_12508387_p1.read()) + sc_bigint<15>(sext_ln703_1232_fu_12508383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2028_fu_12490391_p2() {
    add_ln703_2028_fu_12490391_p2 = (!zext_ln708_1284_fu_12440053_p1.read().is_01() || !sext_ln1116_65_fu_12439757_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1284_fu_12440053_p1.read()) + sc_bigint<11>(sext_ln1116_65_fu_12439757_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2029_fu_12490401_p2() {
    add_ln703_2029_fu_12490401_p2 = (!sext_ln703_1234_fu_12490397_p1.read().is_01() || !zext_ln1116_180_fu_12439989_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1234_fu_12490397_p1.read()) + sc_biguint<12>(zext_ln1116_180_fu_12439989_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_202_fu_12479075_p2() {
    add_ln703_202_fu_12479075_p2 = (!sext_ln703_154_fu_12479071_p1.read().is_01() || !zext_ln703_42_fu_12479051_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_154_fu_12479071_p1.read()) + sc_biguint<12>(zext_ln703_42_fu_12479051_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2030_fu_12490407_p2() {
    add_ln703_2030_fu_12490407_p2 = (!sext_ln1116_66_fu_12439898_p1.read().is_01() || !sext_ln1116_67_fu_12439933_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_66_fu_12439898_p1.read()) + sc_bigint<10>(sext_ln1116_67_fu_12439933_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2031_fu_12490417_p2() {
    add_ln703_2031_fu_12490417_p2 = (!sext_ln703_1235_fu_12490413_p1.read().is_01() || !zext_ln1118_2897_fu_12439848_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1235_fu_12490413_p1.read()) + sc_biguint<11>(zext_ln1118_2897_fu_12439848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2032_fu_12490427_p2() {
    add_ln703_2032_fu_12490427_p2 = (!sext_ln703_1236_fu_12490423_p1.read().is_01() || !add_ln703_2029_fu_12490401_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1236_fu_12490423_p1.read()) + sc_biguint<12>(add_ln703_2029_fu_12490401_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2033_fu_12508399_p2() {
    add_ln703_2033_fu_12508399_p2 = (!sext_ln703_1237_fu_12508396_p1.read().is_01() || !add_ln703_2027_fu_12508390_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1237_fu_12508396_p1.read()) + sc_biguint<15>(add_ln703_2027_fu_12508390_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2034_fu_12508405_p2() {
    add_ln703_2034_fu_12508405_p2 = (!add_ln703_2033_fu_12508399_p2.read().is_01() || !zext_ln203_100_fu_12503107_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2033_fu_12508399_p2.read()) + sc_biguint<15>(zext_ln203_100_fu_12503107_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2035_fu_12490433_p2() {
    add_ln703_2035_fu_12490433_p2 = (!zext_ln203_394_fu_12440303_p1.read().is_01() || !zext_ln203_395_fu_12440426_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_394_fu_12440303_p1.read()) + sc_biguint<10>(zext_ln203_395_fu_12440426_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2036_fu_12490443_p2() {
    add_ln703_2036_fu_12490443_p2 = (!zext_ln703_323_fu_12490439_p1.read().is_01() || !sext_ln203_301_fu_12440220_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_323_fu_12490439_p1.read()) + sc_bigint<12>(sext_ln203_301_fu_12440220_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2037_fu_12508414_p2() {
    add_ln703_2037_fu_12508414_p2 = (!sext_ln703_1238_fu_12508411_p1.read().is_01() || !add_ln703_2034_fu_12508405_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1238_fu_12508411_p1.read()) + sc_biguint<15>(add_ln703_2034_fu_12508405_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2038_fu_12490449_p2() {
    add_ln703_2038_fu_12490449_p2 = (!trunc_ln203_60_fu_12440484_p4.read().is_01() || !zext_ln203_396_fu_12440550_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_60_fu_12440484_p4.read()) + sc_biguint<10>(zext_ln203_396_fu_12440550_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2039_fu_12490459_p2() {
    add_ln703_2039_fu_12490459_p2 = (!sext_ln203_303_fu_12440385_p1.read().is_01() || !zext_ln203_101_fu_12440586_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_303_fu_12440385_p1.read()) + sc_biguint<11>(zext_ln203_101_fu_12440586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_203_fu_12503894_p2() {
    add_ln703_203_fu_12503894_p2 = (!sext_ln703_156_fu_12503891_p1.read().is_01() || !add_ln703_197_fu_12503885_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_156_fu_12503891_p1.read()) + sc_biguint<14>(add_ln703_197_fu_12503885_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2040_fu_12490469_p2() {
    add_ln703_2040_fu_12490469_p2 = (!sext_ln703_1239_fu_12490465_p1.read().is_01() || !sext_ln203_302_fu_12440246_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1239_fu_12490465_p1.read()) + sc_bigint<12>(sext_ln203_302_fu_12440246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2041_fu_12490475_p2() {
    add_ln703_2041_fu_12490475_p2 = (!add_ln703_2040_fu_12490469_p2.read().is_01() || !zext_ln703_324_fu_12490455_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2040_fu_12490469_p2.read()) + sc_biguint<12>(zext_ln703_324_fu_12490455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2043_fu_12490481_p2() {
    add_ln703_2043_fu_12490481_p2 = (!trunc_ln203_22_fu_12440595_p4.read().is_01() || !ap_const_lv9_110.is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_22_fu_12440595_p4.read()) + sc_bigint<9>(ap_const_lv9_110));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2044_fu_12490491_p2() {
    add_ln703_2044_fu_12490491_p2 = (!sext_ln203_304_fu_12440615_p1.read().is_01() || !sext_ln703_291_fu_12490487_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_304_fu_12440615_p1.read()) + sc_bigint<12>(sext_ln703_291_fu_12490487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2045_fu_12490501_p2() {
    add_ln703_2045_fu_12490501_p2 = (!sext_ln1118_648_fu_12440629_p1.read().is_01() || !zext_ln1118_2931_fu_12440669_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_648_fu_12440629_p1.read()) + sc_biguint<12>(zext_ln1118_2931_fu_12440669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2046_fu_12490511_p2() {
    add_ln703_2046_fu_12490511_p2 = (!sext_ln703_1242_fu_12490507_p1.read().is_01() || !sext_ln703_292_fu_12490497_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1242_fu_12490507_p1.read()) + sc_bigint<13>(sext_ln703_292_fu_12490497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2047_fu_12490517_p2() {
    add_ln703_2047_fu_12490517_p2 = (!zext_ln1118_2935_fu_12440773_p1.read().is_01() || !sext_ln1118_649_fu_12440733_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2935_fu_12440773_p1.read()) + sc_bigint<10>(sext_ln1118_649_fu_12440733_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2048_fu_12490527_p2() {
    add_ln703_2048_fu_12490527_p2 = (!sext_ln703_1243_fu_12490523_p1.read().is_01() || !zext_ln708_1286_fu_12440701_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1243_fu_12490523_p1.read()) + sc_biguint<11>(zext_ln708_1286_fu_12440701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2049_fu_12490537_p2() {
    add_ln703_2049_fu_12490537_p2 = (!sext_ln703_1244_fu_12490533_p1.read().is_01() || !add_ln703_2046_fu_12490511_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1244_fu_12490533_p1.read()) + sc_biguint<13>(add_ln703_2046_fu_12490511_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_204_fu_12479081_p2() {
    add_ln703_204_fu_12479081_p2 = (!zext_ln1118_565_fu_12405959_p1.read().is_01() || !sext_ln1118_62_fu_12405991_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_565_fu_12405959_p1.read()) + sc_bigint<12>(sext_ln1118_62_fu_12405991_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2050_fu_12490543_p2() {
    add_ln703_2050_fu_12490543_p2 = (!sext_ln1118_652_fu_12440942_p1.read().is_01() || !zext_ln708_491_fu_12440868_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_652_fu_12440942_p1.read()) + sc_biguint<12>(zext_ln708_491_fu_12440868_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2051_fu_12508439_p2() {
    add_ln703_2051_fu_12508439_p2 = (!sext_ln703_1245_fu_12508436_p1.read().is_01() || !sext_ln703_293_fu_12508433_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1245_fu_12508436_p1.read()) + sc_bigint<14>(sext_ln703_293_fu_12508433_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2052_fu_12490549_p2() {
    add_ln703_2052_fu_12490549_p2 = (!zext_ln708_1287_fu_12440896_p1.read().is_01() || !zext_ln708_1288_fu_12440910_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1287_fu_12440896_p1.read()) + sc_biguint<11>(zext_ln708_1288_fu_12440910_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2053_fu_12490559_p2() {
    add_ln703_2053_fu_12490559_p2 = (!sext_ln1118_651_fu_12440815_p1.read().is_01() || !zext_ln708_492_fu_12440882_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_651_fu_12440815_p1.read()) + sc_biguint<10>(zext_ln708_492_fu_12440882_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2054_fu_12490569_p2() {
    add_ln703_2054_fu_12490569_p2 = (!sext_ln703_1246_fu_12490565_p1.read().is_01() || !zext_ln703_325_fu_12490555_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1246_fu_12490565_p1.read()) + sc_biguint<12>(zext_ln703_325_fu_12490555_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2055_fu_12508448_p2() {
    add_ln703_2055_fu_12508448_p2 = (!sext_ln703_1247_fu_12508445_p1.read().is_01() || !add_ln703_2051_fu_12508439_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1247_fu_12508445_p1.read()) + sc_biguint<14>(add_ln703_2051_fu_12508439_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2056_fu_12508454_p2() {
    add_ln703_2056_fu_12508454_p2 = (!add_ln703_2055_fu_12508448_p2.read().is_01() || !sext_ln708_118_fu_12503110_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2055_fu_12508448_p2.read()) + sc_bigint<14>(sext_ln708_118_fu_12503110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2057_fu_12490575_p2() {
    add_ln703_2057_fu_12490575_p2 = (!sext_ln1118_656_fu_12441112_p1.read().is_01() || !sext_ln1118_658_fu_12441166_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_656_fu_12441112_p1.read()) + sc_bigint<12>(sext_ln1118_658_fu_12441166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2058_fu_12490585_p2() {
    add_ln703_2058_fu_12490585_p2 = (!sext_ln703_1249_fu_12490581_p1.read().is_01() || !sext_ln1118_655_fu_12441080_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1249_fu_12490581_p1.read()) + sc_bigint<13>(sext_ln1118_655_fu_12441080_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2059_fu_12508467_p2() {
    add_ln703_2059_fu_12508467_p2 = (!sext_ln703_1250_fu_12508464_p1.read().is_01() || !sext_ln703_1248_fu_12508460_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1250_fu_12508464_p1.read()) + sc_bigint<15>(sext_ln703_1248_fu_12508460_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_205_fu_12503907_p2() {
    add_ln703_205_fu_12503907_p2 = (!sext_ln703_157_fu_12503904_p1.read().is_01() || !sext_ln703_32_fu_12503900_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_157_fu_12503904_p1.read()) + sc_bigint<15>(sext_ln703_32_fu_12503900_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2060_fu_12490591_p2() {
    add_ln703_2060_fu_12490591_p2 = (!zext_ln1118_2941_fu_12441056_p1.read().is_01() || !trunc_ln1118_107_fu_12441060_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2941_fu_12441056_p1.read()) + sc_biguint<10>(trunc_ln1118_107_fu_12441060_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2061_fu_12490601_p2() {
    add_ln703_2061_fu_12490601_p2 = (!zext_ln703_326_fu_12490597_p1.read().is_01() || !sext_ln1118_659_fu_12441180_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_326_fu_12490597_p1.read()) + sc_bigint<12>(sext_ln1118_659_fu_12441180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2062_fu_12490611_p2() {
    add_ln703_2062_fu_12490611_p2 = (!sext_ln1118_653_fu_12441028_p1.read().is_01() || !sext_ln1118_654_fu_12441042_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_653_fu_12441028_p1.read()) + sc_bigint<10>(sext_ln1118_654_fu_12441042_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2063_fu_12490621_p2() {
    add_ln703_2063_fu_12490621_p2 = (!sext_ln703_1252_fu_12490617_p1.read().is_01() || !zext_ln1118_2938_fu_12440984_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1252_fu_12490617_p1.read()) + sc_biguint<11>(zext_ln1118_2938_fu_12440984_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2064_fu_12490631_p2() {
    add_ln703_2064_fu_12490631_p2 = (!sext_ln703_1253_fu_12490627_p1.read().is_01() || !sext_ln703_1251_fu_12490607_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1253_fu_12490627_p1.read()) + sc_bigint<13>(sext_ln703_1251_fu_12490607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2065_fu_12508476_p2() {
    add_ln703_2065_fu_12508476_p2 = (!sext_ln703_1254_fu_12508473_p1.read().is_01() || !add_ln703_2059_fu_12508467_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1254_fu_12508473_p1.read()) + sc_biguint<15>(add_ln703_2059_fu_12508467_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2066_fu_12508482_p2() {
    add_ln703_2066_fu_12508482_p2 = (!add_ln703_2065_fu_12508476_p2.read().is_01() || !zext_ln203_102_fu_12503113_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2065_fu_12508476_p2.read()) + sc_biguint<15>(zext_ln203_102_fu_12503113_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2067_fu_12490637_p2() {
    add_ln703_2067_fu_12490637_p2 = (!trunc_ln203_61_fu_12441310_p4.read().is_01() || !zext_ln203_397_fu_12441353_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln203_61_fu_12441310_p4.read()) + sc_biguint<10>(zext_ln203_397_fu_12441353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2068_fu_12490647_p2() {
    add_ln703_2068_fu_12490647_p2 = (!zext_ln703_327_fu_12490643_p1.read().is_01() || !zext_ln708_1289_fu_12441306_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_327_fu_12490643_p1.read()) + sc_biguint<11>(zext_ln708_1289_fu_12441306_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2069_fu_12508491_p2() {
    add_ln703_2069_fu_12508491_p2 = (!zext_ln703_328_fu_12508488_p1.read().is_01() || !add_ln703_2066_fu_12508482_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_328_fu_12508488_p1.read()) + sc_biguint<15>(add_ln703_2066_fu_12508482_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_206_fu_12479087_p2() {
    add_ln703_206_fu_12479087_p2 = (!sext_ln1118_63_fu_12406005_p1.read().is_01() || !sext_ln1118_22_fu_12403337_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_63_fu_12406005_p1.read()) + sc_bigint<12>(sext_ln1118_22_fu_12403337_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2070_fu_12490653_p2() {
    add_ln703_2070_fu_12490653_p2 = (!zext_ln708_1290_fu_12441367_p1.read().is_01() || !zext_ln708_1291_fu_12441391_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1290_fu_12441367_p1.read()) + sc_biguint<11>(zext_ln708_1291_fu_12441391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2071_fu_12490663_p2() {
    add_ln703_2071_fu_12490663_p2 = (!sext_ln203_305_fu_12441224_p1.read().is_01() || !sext_ln203_306_fu_12441405_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_305_fu_12441224_p1.read()) + sc_bigint<11>(sext_ln203_306_fu_12441405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2072_fu_12490673_p2() {
    add_ln703_2072_fu_12490673_p2 = (!sext_ln703_1256_fu_12490669_p1.read().is_01() || !zext_ln203_103_fu_12441449_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1256_fu_12490669_p1.read()) + sc_biguint<12>(zext_ln203_103_fu_12441449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2073_fu_12490683_p2() {
    add_ln703_2073_fu_12490683_p2 = (!sext_ln703_1257_fu_12490679_p1.read().is_01() || !zext_ln703_329_fu_12490659_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1257_fu_12490679_p1.read()) + sc_biguint<13>(zext_ln703_329_fu_12490659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2075_fu_12490689_p2() {
    add_ln703_2075_fu_12490689_p2 = (!sext_ln203_307_fu_12441463_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_307_fu_12441463_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2076_fu_12490699_p2() {
    add_ln703_2076_fu_12490699_p2 = (!sext_ln708_119_fu_12441477_p1.read().is_01() || !zext_ln1118_2952_fu_12441491_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_119_fu_12441477_p1.read()) + sc_biguint<12>(zext_ln1118_2952_fu_12441491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2077_fu_12490709_p2() {
    add_ln703_2077_fu_12490709_p2 = (!sext_ln703_1259_fu_12490705_p1.read().is_01() || !sext_ln703_296_fu_12490695_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1259_fu_12490705_p1.read()) + sc_bigint<13>(sext_ln703_296_fu_12490695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2078_fu_12490715_p2() {
    add_ln703_2078_fu_12490715_p2 = (!zext_ln1118_2953_fu_12441527_p1.read().is_01() || !zext_ln708_1292_fu_12441595_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2953_fu_12441527_p1.read()) + sc_biguint<10>(zext_ln708_1292_fu_12441595_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2079_fu_12490725_p2() {
    add_ln703_2079_fu_12490725_p2 = (!zext_ln1118_2957_fu_12441609_p1.read().is_01() || !sext_ln1118_660_fu_12441563_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_2957_fu_12441609_p1.read()) + sc_bigint<12>(sext_ln1118_660_fu_12441563_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_207_fu_12479097_p2() {
    add_ln703_207_fu_12479097_p2 = (!sext_ln203_1_fu_12401488_p1.read().is_01() || !zext_ln1118_567_fu_12406025_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_1_fu_12401488_p1.read()) + sc_biguint<12>(zext_ln1118_567_fu_12406025_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2080_fu_12490731_p2() {
    add_ln703_2080_fu_12490731_p2 = (!add_ln703_2079_fu_12490725_p2.read().is_01() || !zext_ln703_330_fu_12490721_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2079_fu_12490725_p2.read()) + sc_biguint<12>(zext_ln703_330_fu_12490721_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2081_fu_12490741_p2() {
    add_ln703_2081_fu_12490741_p2 = (!sext_ln703_1260_fu_12490737_p1.read().is_01() || !add_ln703_2077_fu_12490709_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1260_fu_12490737_p1.read()) + sc_biguint<13>(add_ln703_2077_fu_12490709_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2082_fu_12490747_p2() {
    add_ln703_2082_fu_12490747_p2 = (!add_ln703_2081_fu_12490741_p2.read().is_01() || !zext_ln1116_172_fu_12439483_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2081_fu_12490741_p2.read()) + sc_biguint<13>(zext_ln1116_172_fu_12439483_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2083_fu_12490753_p2() {
    add_ln703_2083_fu_12490753_p2 = (!sext_ln1118_661_fu_12441623_p1.read().is_01() || !zext_ln708_495_fu_12441740_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_661_fu_12441623_p1.read()) + sc_biguint<12>(zext_ln708_495_fu_12441740_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2084_fu_12508516_p2() {
    add_ln703_2084_fu_12508516_p2 = (!sext_ln703_1262_fu_12508513_p1.read().is_01() || !sext_ln703_1261_fu_12508510_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1262_fu_12508513_p1.read()) + sc_bigint<14>(sext_ln703_1261_fu_12508510_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2085_fu_12490759_p2() {
    add_ln703_2085_fu_12490759_p2 = (!trunc_ln1118_108_fu_12441771_p4.read().is_01() || !zext_ln1118_2965_fu_12441821_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_108_fu_12441771_p4.read()) + sc_biguint<10>(zext_ln1118_2965_fu_12441821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2086_fu_12490769_p2() {
    add_ln703_2086_fu_12490769_p2 = (!zext_ln708_1294_fu_12441754_p1.read().is_01() || !sext_ln708_120_fu_12441659_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1294_fu_12441754_p1.read()) + sc_bigint<8>(sext_ln708_120_fu_12441659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2087_fu_12490775_p2() {
    add_ln703_2087_fu_12490775_p2 = (!add_ln703_2086_fu_12490769_p2.read().is_01() || !zext_ln1118_2960_fu_12441687_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(add_ln703_2086_fu_12490769_p2.read()) + sc_biguint<8>(zext_ln1118_2960_fu_12441687_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2088_fu_12490785_p2() {
    add_ln703_2088_fu_12490785_p2 = (!sext_ln703_1263_fu_12490781_p1.read().is_01() || !zext_ln703_331_fu_12490765_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1263_fu_12490781_p1.read()) + sc_biguint<12>(zext_ln703_331_fu_12490765_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2089_fu_12508525_p2() {
    add_ln703_2089_fu_12508525_p2 = (!sext_ln703_1264_fu_12508522_p1.read().is_01() || !add_ln703_2084_fu_12508516_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1264_fu_12508522_p1.read()) + sc_biguint<14>(add_ln703_2084_fu_12508516_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_208_fu_12479107_p2() {
    add_ln703_208_fu_12479107_p2 = (!sext_ln703_159_fu_12479103_p1.read().is_01() || !sext_ln703_158_fu_12479093_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_159_fu_12479103_p1.read()) + sc_bigint<13>(sext_ln703_158_fu_12479093_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2090_fu_12490791_p2() {
    add_ln703_2090_fu_12490791_p2 = (!sext_ln1118_662_fu_12441835_p1.read().is_01() || !sext_ln1118_665_fu_12441973_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_662_fu_12441835_p1.read()) + sc_bigint<12>(sext_ln1118_665_fu_12441973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2091_fu_12508534_p2() {
    add_ln703_2091_fu_12508534_p2 = (!sext_ln703_1265_fu_12508531_p1.read().is_01() || !add_ln703_2089_fu_12508525_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1265_fu_12508531_p1.read()) + sc_biguint<14>(add_ln703_2089_fu_12508525_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2092_fu_12490797_p2() {
    add_ln703_2092_fu_12490797_p2 = (!sext_ln1118_668_fu_12442117_p1.read().is_01() || !sext_ln1118_669_fu_12442131_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_668_fu_12442117_p1.read()) + sc_bigint<12>(sext_ln1118_669_fu_12442131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2093_fu_12490807_p2() {
    add_ln703_2093_fu_12490807_p2 = (!sext_ln703_1267_fu_12490803_p1.read().is_01() || !sext_ln1118_667_fu_12442073_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1267_fu_12490803_p1.read()) + sc_bigint<13>(sext_ln1118_667_fu_12442073_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2094_fu_12508547_p2() {
    add_ln703_2094_fu_12508547_p2 = (!sext_ln703_1268_fu_12508544_p1.read().is_01() || !sext_ln703_1266_fu_12508540_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1268_fu_12508544_p1.read()) + sc_bigint<15>(sext_ln703_1266_fu_12508540_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2095_fu_12490813_p2() {
    add_ln703_2095_fu_12490813_p2 = (!zext_ln1118_2974_fu_12441987_p1.read().is_01() || !zext_ln708_1295_fu_12442023_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_2974_fu_12441987_p1.read()) + sc_biguint<10>(zext_ln708_1295_fu_12442023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2096_fu_12490819_p2() {
    add_ln703_2096_fu_12490819_p2 = (!add_ln703_2095_fu_12490813_p2.read().is_01() || !zext_ln1118_2971_fu_12441929_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2095_fu_12490813_p2.read()) + sc_biguint<10>(zext_ln1118_2971_fu_12441929_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2097_fu_12490829_p2() {
    add_ln703_2097_fu_12490829_p2 = (!zext_ln708_1296_fu_12442163_p1.read().is_01() || !sext_ln1118_664_fu_12441881_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1296_fu_12442163_p1.read()) + sc_bigint<11>(sext_ln1118_664_fu_12441881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2098_fu_12490839_p2() {
    add_ln703_2098_fu_12490839_p2 = (!sext_ln708_121_fu_12442177_p1.read().is_01() || !zext_ln1118_2977_fu_12442037_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_121_fu_12442177_p1.read()) + sc_biguint<11>(zext_ln1118_2977_fu_12442037_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2099_fu_12490849_p2() {
    add_ln703_2099_fu_12490849_p2 = (!sext_ln703_1270_fu_12490845_p1.read().is_01() || !sext_ln703_1269_fu_12490835_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1270_fu_12490845_p1.read()) + sc_bigint<12>(sext_ln703_1269_fu_12490835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_209_fu_12503916_p2() {
    add_ln703_209_fu_12503916_p2 = (!sext_ln703_160_fu_12503913_p1.read().is_01() || !add_ln703_205_fu_12503907_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_160_fu_12503913_p1.read()) + sc_biguint<15>(add_ln703_205_fu_12503907_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_20_fu_12477931_p2() {
    add_ln703_20_fu_12477931_p2 = (!sext_ln703_23_fu_12477927_p1.read().is_01() || !add_ln703_17_fu_12477905_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_23_fu_12477927_p1.read()) + sc_biguint<12>(add_ln703_17_fu_12477905_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2100_fu_12490859_p2() {
    add_ln703_2100_fu_12490859_p2 = (!sext_ln703_1271_fu_12490855_p1.read().is_01() || !zext_ln703_332_fu_12490825_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1271_fu_12490855_p1.read()) + sc_biguint<13>(zext_ln703_332_fu_12490825_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2101_fu_12508556_p2() {
    add_ln703_2101_fu_12508556_p2 = (!sext_ln703_1272_fu_12508553_p1.read().is_01() || !add_ln703_2094_fu_12508547_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1272_fu_12508553_p1.read()) + sc_biguint<15>(add_ln703_2094_fu_12508547_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2102_fu_12490865_p2() {
    add_ln703_2102_fu_12490865_p2 = (!zext_ln203_104_fu_12442191_p1.read().is_01() || !sext_ln203_310_fu_12442267_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_104_fu_12442191_p1.read()) + sc_bigint<12>(sext_ln203_310_fu_12442267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2103_fu_12508565_p2() {
    add_ln703_2103_fu_12508565_p2 = (!sext_ln703_1273_fu_12508562_p1.read().is_01() || !add_ln703_2101_fu_12508556_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1273_fu_12508562_p1.read()) + sc_biguint<15>(add_ln703_2101_fu_12508556_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2104_fu_12490871_p2() {
    add_ln703_2104_fu_12490871_p2 = (!zext_ln203_105_fu_12442203_p1.read().is_01() || !sext_ln203_309_fu_12442253_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_105_fu_12442203_p1.read()) + sc_bigint<11>(sext_ln203_309_fu_12442253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2105_fu_12490877_p2() {
    add_ln703_2105_fu_12490877_p2 = (!add_ln703_2104_fu_12490871_p2.read().is_01() || !sext_ln203_308_fu_12442217_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2104_fu_12490871_p2.read()) + sc_bigint<11>(sext_ln203_308_fu_12442217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2107_fu_12490883_p2() {
    add_ln703_2107_fu_12490883_p2 = (!sext_ln1118_670_fu_12442299_p1.read().is_01() || !ap_const_lv9_1B0.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_670_fu_12442299_p1.read()) + sc_bigint<9>(ap_const_lv9_1B0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2108_fu_12490893_p2() {
    add_ln703_2108_fu_12490893_p2 = (!sext_ln1118_672_fu_12442345_p1.read().is_01() || !sext_ln1118_671_fu_12442331_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_672_fu_12442345_p1.read()) + sc_bigint<11>(sext_ln1118_671_fu_12442331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2109_fu_12490903_p2() {
    add_ln703_2109_fu_12490903_p2 = (!sext_ln703_1276_fu_12490899_p1.read().is_01() || !zext_ln703_333_fu_12490889_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1276_fu_12490899_p1.read()) + sc_biguint<12>(zext_ln703_333_fu_12490889_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_210_fu_12479113_p2() {
    add_ln703_210_fu_12479113_p2 = (!trunc_ln1118_24_fu_12406063_p4.read().is_01() || !zext_ln1118_2300_fu_12406083_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_24_fu_12406063_p4.read()) + sc_biguint<9>(zext_ln1118_2300_fu_12406083_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2110_fu_12490913_p2() {
    add_ln703_2110_fu_12490913_p2 = (!sext_ln703_1277_fu_12490909_p1.read().is_01() || !sext_ln1118_673_fu_12442377_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1277_fu_12490909_p1.read()) + sc_bigint<13>(sext_ln1118_673_fu_12442377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2111_fu_12490919_p2() {
    add_ln703_2111_fu_12490919_p2 = (!sext_ln1118_675_fu_12442427_p1.read().is_01() || !sext_ln1118_674_fu_12442391_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_675_fu_12442427_p1.read()) + sc_bigint<11>(sext_ln1118_674_fu_12442391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2112_fu_12490929_p2() {
    add_ln703_2112_fu_12490929_p2 = (!sext_ln703_1278_fu_12490925_p1.read().is_01() || !sext_ln708_122_fu_12442481_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1278_fu_12490925_p1.read()) + sc_bigint<12>(sext_ln708_122_fu_12442481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2113_fu_12490939_p2() {
    add_ln703_2113_fu_12490939_p2 = (!sext_ln703_1279_fu_12490935_p1.read().is_01() || !add_ln703_2110_fu_12490913_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1279_fu_12490935_p1.read()) + sc_biguint<13>(add_ln703_2110_fu_12490913_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2114_fu_12508587_p2() {
    add_ln703_2114_fu_12508587_p2 = (!sext_ln703_1280_fu_12508584_p1.read().is_01() || !zext_ln1118_2991_fu_12503116_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1280_fu_12508584_p1.read()) + sc_biguint<14>(zext_ln1118_2991_fu_12503116_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2115_fu_12490945_p2() {
    add_ln703_2115_fu_12490945_p2 = (!zext_ln1118_2992_fu_12442519_p1.read().is_01() || !trunc_ln1118_109_fu_12442631_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_2992_fu_12442519_p1.read()) + sc_biguint<9>(trunc_ln1118_109_fu_12442631_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2116_fu_12508596_p2() {
    add_ln703_2116_fu_12508596_p2 = (!zext_ln703_334_fu_12508593_p1.read().is_01() || !sext_ln1118_677_fu_12503119_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_334_fu_12508593_p1.read()) + sc_bigint<12>(sext_ln1118_677_fu_12503119_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2117_fu_12508606_p2() {
    add_ln703_2117_fu_12508606_p2 = (!sext_ln703_1281_fu_12508602_p1.read().is_01() || !add_ln703_2114_fu_12508587_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1281_fu_12508602_p1.read()) + sc_biguint<14>(add_ln703_2114_fu_12508587_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2118_fu_12490951_p2() {
    add_ln703_2118_fu_12490951_p2 = (!sext_ln1118_680_fu_12442651_p1.read().is_01() || !sext_ln1118_681_fu_12442665_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_680_fu_12442651_p1.read()) + sc_bigint<10>(sext_ln1118_681_fu_12442665_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2119_fu_12490961_p2() {
    add_ln703_2119_fu_12490961_p2 = (!sext_ln703_1282_fu_12490957_p1.read().is_01() || !sext_ln1118_679_fu_12442605_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1282_fu_12490957_p1.read()) + sc_bigint<11>(sext_ln1118_679_fu_12442605_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_211_fu_12479123_p2() {
    add_ln703_211_fu_12479123_p2 = (!zext_ln203_334_fu_12406107_p1.read().is_01() || !trunc_ln1118_26_fu_12406111_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_334_fu_12406107_p1.read()) + sc_biguint<10>(trunc_ln1118_26_fu_12406111_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2120_fu_12490971_p2() {
    add_ln703_2120_fu_12490971_p2 = (!sext_ln1118_678_fu_12442591_p1.read().is_01() || !zext_ln708_497_fu_12441767_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_678_fu_12442591_p1.read()) + sc_biguint<10>(zext_ln708_497_fu_12441767_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2121_fu_12490981_p2() {
    add_ln703_2121_fu_12490981_p2 = (!sext_ln703_1284_fu_12490977_p1.read().is_01() || !sext_ln1118_682_fu_12442679_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1284_fu_12490977_p1.read()) + sc_bigint<11>(sext_ln1118_682_fu_12442679_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2122_fu_12490991_p2() {
    add_ln703_2122_fu_12490991_p2 = (!sext_ln703_1285_fu_12490987_p1.read().is_01() || !sext_ln703_1283_fu_12490967_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1285_fu_12490987_p1.read()) + sc_bigint<12>(sext_ln703_1283_fu_12490967_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2123_fu_12508615_p2() {
    add_ln703_2123_fu_12508615_p2 = (!sext_ln703_1286_fu_12508612_p1.read().is_01() || !add_ln703_2117_fu_12508606_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1286_fu_12508612_p1.read()) + sc_biguint<14>(add_ln703_2117_fu_12508606_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2124_fu_12508625_p2() {
    add_ln703_2124_fu_12508625_p2 = (!sext_ln703_1287_fu_12508621_p1.read().is_01() || !sext_ln203_312_fu_12503122_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1287_fu_12508621_p1.read()) + sc_bigint<15>(sext_ln203_312_fu_12503122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2125_fu_12490997_p2() {
    add_ln703_2125_fu_12490997_p2 = (!sext_ln203_313_fu_12442781_p1.read().is_01() || !sext_ln203_314_fu_12442835_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_313_fu_12442781_p1.read()) + sc_bigint<12>(sext_ln203_314_fu_12442835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2126_fu_12508634_p2() {
    add_ln703_2126_fu_12508634_p2 = (!sext_ln703_1288_fu_12508631_p1.read().is_01() || !add_ln703_2124_fu_12508625_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1288_fu_12508631_p1.read()) + sc_biguint<15>(add_ln703_2124_fu_12508625_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2127_fu_12491003_p2() {
    add_ln703_2127_fu_12491003_p2 = (!sext_ln203_318_fu_12443019_p1.read().is_01() || !zext_ln203_106_fu_12442725_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_318_fu_12443019_p1.read()) + sc_biguint<12>(zext_ln203_106_fu_12442725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2128_fu_12491013_p2() {
    add_ln703_2128_fu_12491013_p2 = (!zext_ln708_1297_fu_12442749_p1.read().is_01() || !zext_ln708_1298_fu_12442867_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1297_fu_12442749_p1.read()) + sc_biguint<11>(zext_ln708_1298_fu_12442867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2129_fu_12491023_p2() {
    add_ln703_2129_fu_12491023_p2 = (!zext_ln703_335_fu_12491019_p1.read().is_01() || !sext_ln703_1289_fu_12491009_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_335_fu_12491019_p1.read()) + sc_bigint<13>(sext_ln703_1289_fu_12491009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_212_fu_12479133_p2() {
    add_ln703_212_fu_12479133_p2 = (!zext_ln703_45_fu_12479129_p1.read().is_01() || !zext_ln703_44_fu_12479119_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_45_fu_12479129_p1.read()) + sc_biguint<11>(zext_ln703_44_fu_12479119_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2130_fu_12508643_p2() {
    add_ln703_2130_fu_12508643_p2 = (!sext_ln703_1290_fu_12508640_p1.read().is_01() || !add_ln703_2126_fu_12508634_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1290_fu_12508640_p1.read()) + sc_biguint<15>(add_ln703_2126_fu_12508634_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2131_fu_12491029_p2() {
    add_ln703_2131_fu_12491029_p2 = (!zext_ln708_1299_fu_12442945_p1.read().is_01() || !zext_ln708_1300_fu_12442973_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1299_fu_12442945_p1.read()) + sc_biguint<11>(zext_ln708_1300_fu_12442973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2132_fu_12491039_p2() {
    add_ln703_2132_fu_12491039_p2 = (!zext_ln203_107_fu_12443033_p1.read().is_01() || !sext_ln203_316_fu_12442917_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_107_fu_12443033_p1.read()) + sc_bigint<12>(sext_ln203_316_fu_12442917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2133_fu_12491049_p2() {
    add_ln703_2133_fu_12491049_p2 = (!sext_ln703_1292_fu_12491045_p1.read().is_01() || !zext_ln703_336_fu_12491035_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1292_fu_12491045_p1.read()) + sc_biguint<13>(zext_ln703_336_fu_12491035_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2134_fu_12491055_p2() {
    add_ln703_2134_fu_12491055_p2 = (!sext_ln203_319_fu_12443047_p1.read().is_01() || !sext_ln203_315_fu_12442903_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_319_fu_12443047_p1.read()) + sc_bigint<11>(sext_ln203_315_fu_12442903_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2135_fu_12491061_p2() {
    add_ln703_2135_fu_12491061_p2 = (!sext_ln203_317_fu_12443005_p1.read().is_01() || !sext_ln203_311_fu_12442711_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_317_fu_12443005_p1.read()) + sc_bigint<9>(sext_ln203_311_fu_12442711_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2136_fu_12491071_p2() {
    add_ln703_2136_fu_12491071_p2 = (!sext_ln703_1293_fu_12491067_p1.read().is_01() || !add_ln703_2134_fu_12491055_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1293_fu_12491067_p1.read()) + sc_biguint<11>(add_ln703_2134_fu_12491055_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2137_fu_12491081_p2() {
    add_ln703_2137_fu_12491081_p2 = (!sext_ln703_1294_fu_12491077_p1.read().is_01() || !add_ln703_2133_fu_12491049_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1294_fu_12491077_p1.read()) + sc_biguint<13>(add_ln703_2133_fu_12491049_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2139_fu_12491087_p2() {
    add_ln703_2139_fu_12491087_p2 = (!trunc_ln1118_110_fu_12443083_p4.read().is_01() || !ap_const_lv8_B0.is_01())? sc_lv<8>(): (sc_biguint<8>(trunc_ln1118_110_fu_12443083_p4.read()) + sc_bigint<8>(ap_const_lv8_B0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_213_fu_12479143_p2() {
    add_ln703_213_fu_12479143_p2 = (!zext_ln708_984_fu_12406157_p1.read().is_01() || !trunc_ln708_958_fu_12406179_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_984_fu_12406157_p1.read()) + sc_biguint<10>(trunc_ln708_958_fu_12406179_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2140_fu_12491097_p2() {
    add_ln703_2140_fu_12491097_p2 = (!sext_ln703_1296_fu_12491093_p1.read().is_01() || !sext_ln203_320_fu_12443079_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1296_fu_12491093_p1.read()) + sc_bigint<12>(sext_ln203_320_fu_12443079_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2141_fu_12491107_p2() {
    add_ln703_2141_fu_12491107_p2 = (!sext_ln703_304_fu_12491103_p1.read().is_01() || !sext_ln203_321_fu_12443103_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_304_fu_12491103_p1.read()) + sc_bigint<13>(sext_ln203_321_fu_12443103_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2142_fu_12491113_p2() {
    add_ln703_2142_fu_12491113_p2 = (!sext_ln708_123_fu_12443135_p1.read().is_01() || !zext_ln1118_3007_fu_12443149_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_123_fu_12443135_p1.read()) + sc_biguint<10>(zext_ln1118_3007_fu_12443149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2143_fu_12491123_p2() {
    add_ln703_2143_fu_12491123_p2 = (!sext_ln703_1297_fu_12491119_p1.read().is_01() || !add_ln703_2141_fu_12491107_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1297_fu_12491119_p1.read()) + sc_biguint<13>(add_ln703_2141_fu_12491107_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2144_fu_12508662_p2() {
    add_ln703_2144_fu_12508662_p2 = (!add_ln703_2143_reg_12517362.read().is_01() || !sext_ln1118_684_fu_12503125_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2143_reg_12517362.read()) + sc_bigint<13>(sext_ln1118_684_fu_12503125_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2145_fu_12491129_p2() {
    add_ln703_2145_fu_12491129_p2 = (!sext_ln1118_685_fu_12443177_p1.read().is_01() || !sext_ln1118_688_fu_12443229_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_685_fu_12443177_p1.read()) + sc_bigint<10>(sext_ln1118_688_fu_12443229_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2146_fu_12491139_p2() {
    add_ln703_2146_fu_12491139_p2 = (!sext_ln703_1298_fu_12491135_p1.read().is_01() || !sext_ln1118_687_fu_12443215_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1298_fu_12491135_p1.read()) + sc_bigint<11>(sext_ln1118_687_fu_12443215_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2147_fu_12508670_p2() {
    add_ln703_2147_fu_12508670_p2 = (!sext_ln703_1299_fu_12508667_p1.read().is_01() || !add_ln703_2144_fu_12508662_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1299_fu_12508667_p1.read()) + sc_biguint<13>(add_ln703_2144_fu_12508662_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2148_fu_12491145_p2() {
    add_ln703_2148_fu_12491145_p2 = (!sext_ln1118_691_fu_12443365_p1.read().is_01() || !sext_ln1116_68_fu_12440087_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_691_fu_12443365_p1.read()) + sc_bigint<12>(sext_ln1116_68_fu_12440087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2149_fu_12508683_p2() {
    add_ln703_2149_fu_12508683_p2 = (!sext_ln703_1301_fu_12508680_p1.read().is_01() || !sext_ln703_1300_fu_12508676_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1301_fu_12508680_p1.read()) + sc_bigint<14>(sext_ln703_1300_fu_12508676_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_214_fu_12479153_p2() {
    add_ln703_214_fu_12479153_p2 = (!zext_ln708_45_fu_12406161_p1.read().is_01() || !sext_ln1118_65_fu_12406059_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_45_fu_12406161_p1.read()) + sc_bigint<11>(sext_ln1118_65_fu_12406059_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2150_fu_12491151_p2() {
    add_ln703_2150_fu_12491151_p2 = (!zext_ln708_1301_fu_12443325_p1.read().is_01() || !zext_ln708_1302_fu_12443351_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1301_fu_12443325_p1.read()) + sc_biguint<11>(zext_ln708_1302_fu_12443351_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2151_fu_12491157_p2() {
    add_ln703_2151_fu_12491157_p2 = (!zext_ln1118_3014_fu_12443379_p1.read().is_01() || !zext_ln1116_284_fu_12443431_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3014_fu_12443379_p1.read()) + sc_biguint<10>(zext_ln1116_284_fu_12443431_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2152_fu_12491167_p2() {
    add_ln703_2152_fu_12491167_p2 = (!zext_ln703_337_fu_12491163_p1.read().is_01() || !add_ln703_2150_fu_12491151_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_337_fu_12491163_p1.read()) + sc_biguint<11>(add_ln703_2150_fu_12491151_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2153_fu_12508692_p2() {
    add_ln703_2153_fu_12508692_p2 = (!zext_ln703_338_fu_12508689_p1.read().is_01() || !add_ln703_2149_fu_12508683_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_338_fu_12508689_p1.read()) + sc_biguint<14>(add_ln703_2149_fu_12508683_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2154_fu_12491173_p2() {
    add_ln703_2154_fu_12491173_p2 = (!zext_ln1118_3018_fu_12443485_p1.read().is_01() || !zext_ln1118_3019_fu_12443505_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3018_fu_12443485_p1.read()) + sc_biguint<10>(zext_ln1118_3019_fu_12443505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2155_fu_12491179_p2() {
    add_ln703_2155_fu_12491179_p2 = (!add_ln703_2154_fu_12491173_p2.read().is_01() || !zext_ln1116_286_fu_12443466_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2154_fu_12491173_p2.read()) + sc_biguint<10>(zext_ln1116_286_fu_12443466_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2156_fu_12491189_p2() {
    add_ln703_2156_fu_12491189_p2 = (!sext_ln1118_690_fu_12443283_p1.read().is_01() || !sext_ln1118_692_fu_12443411_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_690_fu_12443283_p1.read()) + sc_bigint<11>(sext_ln1118_692_fu_12443411_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2157_fu_12491199_p2() {
    add_ln703_2157_fu_12491199_p2 = (!sext_ln1118_694_fu_12443560_p1.read().is_01() || !sext_ln1118_693_fu_12443524_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_694_fu_12443560_p1.read()) + sc_bigint<11>(sext_ln1118_693_fu_12443524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2158_fu_12491209_p2() {
    add_ln703_2158_fu_12491209_p2 = (!sext_ln703_1304_fu_12491205_p1.read().is_01() || !sext_ln703_1303_fu_12491195_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1304_fu_12491205_p1.read()) + sc_bigint<12>(sext_ln703_1303_fu_12491195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2159_fu_12491219_p2() {
    add_ln703_2159_fu_12491219_p2 = (!sext_ln703_1305_fu_12491215_p1.read().is_01() || !zext_ln703_339_fu_12491185_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1305_fu_12491215_p1.read()) + sc_biguint<13>(zext_ln703_339_fu_12491185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_215_fu_12479163_p2() {
    add_ln703_215_fu_12479163_p2 = (!sext_ln703_161_fu_12479159_p1.read().is_01() || !zext_ln703_47_fu_12479149_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_161_fu_12479159_p1.read()) + sc_biguint<12>(zext_ln703_47_fu_12479149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2160_fu_12508705_p2() {
    add_ln703_2160_fu_12508705_p2 = (!sext_ln703_1306_fu_12508702_p1.read().is_01() || !sext_ln703_1302_fu_12508698_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1306_fu_12508702_p1.read()) + sc_bigint<15>(sext_ln703_1302_fu_12508698_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2161_fu_12508711_p2() {
    add_ln703_2161_fu_12508711_p2 = (!add_ln703_2160_fu_12508705_p2.read().is_01() || !zext_ln203_108_fu_12503128_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2160_fu_12508705_p2.read()) + sc_biguint<15>(zext_ln203_108_fu_12503128_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2162_fu_12491225_p2() {
    add_ln703_2162_fu_12491225_p2 = (!sext_ln203_324_fu_12443770_p1.read().is_01() || !zext_ln203_110_fu_12443658_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_324_fu_12443770_p1.read()) + sc_biguint<12>(zext_ln203_110_fu_12443658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2163_fu_12491235_p2() {
    add_ln703_2163_fu_12491235_p2 = (!sext_ln703_1307_fu_12491231_p1.read().is_01() || !sext_ln203_323_fu_12443635_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1307_fu_12491231_p1.read()) + sc_bigint<13>(sext_ln203_323_fu_12443635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2164_fu_12508720_p2() {
    add_ln703_2164_fu_12508720_p2 = (!sext_ln703_1308_fu_12508717_p1.read().is_01() || !add_ln703_2161_fu_12508711_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1308_fu_12508717_p1.read()) + sc_biguint<15>(add_ln703_2161_fu_12508711_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2165_fu_12491241_p2() {
    add_ln703_2165_fu_12491241_p2 = (!zext_ln708_1304_fu_12443729_p1.read().is_01() || !zext_ln708_1305_fu_12443747_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1304_fu_12443729_p1.read()) + sc_biguint<11>(zext_ln708_1305_fu_12443747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2166_fu_12491247_p2() {
    add_ln703_2166_fu_12491247_p2 = (!add_ln703_2165_fu_12491241_p2.read().is_01() || !zext_ln708_1303_fu_12443689_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2165_fu_12491241_p2.read()) + sc_biguint<11>(zext_ln708_1303_fu_12443689_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2167_fu_12491257_p2() {
    add_ln703_2167_fu_12491257_p2 = (!sext_ln203_322_fu_12443613_p1.read().is_01() || !zext_ln203_109_fu_12443599_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_322_fu_12443613_p1.read()) + sc_biguint<11>(zext_ln203_109_fu_12443599_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2168_fu_12491263_p2() {
    add_ln703_2168_fu_12491263_p2 = (!add_ln703_2167_fu_12491257_p2.read().is_01() || !zext_ln708_1306_fu_12443807_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2167_fu_12491257_p2.read()) + sc_biguint<11>(zext_ln708_1306_fu_12443807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2169_fu_12491273_p2() {
    add_ln703_2169_fu_12491273_p2 = (!sext_ln703_1309_fu_12491269_p1.read().is_01() || !zext_ln703_340_fu_12491253_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1309_fu_12491269_p1.read()) + sc_biguint<13>(zext_ln703_340_fu_12491253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_216_fu_12479173_p2() {
    add_ln703_216_fu_12479173_p2 = (!sext_ln703_162_fu_12479169_p1.read().is_01() || !zext_ln703_46_fu_12479139_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_162_fu_12479169_p1.read()) + sc_biguint<13>(zext_ln703_46_fu_12479139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2171_fu_12491291_p2() {
    add_ln703_2171_fu_12491291_p2 = (!sext_ln203_325_fu_12443831_p1.read().is_01() || !zext_ln703_6_fu_12491287_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_325_fu_12443831_p1.read()) + sc_biguint<12>(zext_ln703_6_fu_12491287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2172_fu_12491297_p2() {
    add_ln703_2172_fu_12491297_p2 = (!add_ln703_2171_fu_12491291_p2.read().is_01() || !zext_ln1118_3026_fu_12443859_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2171_fu_12491291_p2.read()) + sc_biguint<12>(zext_ln1118_3026_fu_12443859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2173_fu_12491307_p2() {
    add_ln703_2173_fu_12491307_p2 = (!sext_ln1118_695_fu_12443845_p1.read().is_01() || !sext_ln708_124_fu_12443873_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_695_fu_12443845_p1.read()) + sc_bigint<11>(sext_ln708_124_fu_12443873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2174_fu_12491317_p2() {
    add_ln703_2174_fu_12491317_p2 = (!sext_ln703_1313_fu_12491313_p1.read().is_01() || !sext_ln703_1312_fu_12491303_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1313_fu_12491313_p1.read()) + sc_bigint<13>(sext_ln703_1312_fu_12491303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2175_fu_12491323_p2() {
    add_ln703_2175_fu_12491323_p2 = (!add_ln703_2174_fu_12491317_p2.read().is_01() || !zext_ln1118_3027_fu_12443897_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2174_fu_12491317_p2.read()) + sc_biguint<13>(zext_ln1118_3027_fu_12443897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2176_fu_12491329_p2() {
    add_ln703_2176_fu_12491329_p2 = (!zext_ln1118_3031_fu_12444009_p1.read().is_01() || !zext_ln708_1308_fu_12444041_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_3031_fu_12444009_p1.read()) + sc_biguint<9>(zext_ln708_1308_fu_12444041_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2177_fu_12491339_p2() {
    add_ln703_2177_fu_12491339_p2 = (!zext_ln703_341_fu_12491335_p1.read().is_01() || !zext_ln708_1307_fu_12443953_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_341_fu_12491335_p1.read()) + sc_biguint<11>(zext_ln708_1307_fu_12443953_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2178_fu_12491349_p2() {
    add_ln703_2178_fu_12491349_p2 = (!zext_ln703_342_fu_12491345_p1.read().is_01() || !add_ln703_2175_fu_12491323_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_342_fu_12491345_p1.read()) + sc_biguint<13>(add_ln703_2175_fu_12491323_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2179_fu_12491355_p2() {
    add_ln703_2179_fu_12491355_p2 = (!trunc_ln1118_109_fu_12442631_p4.read().is_01() || !zext_ln203_399_fu_12444061_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_109_fu_12442631_p4.read()) + sc_biguint<9>(zext_ln203_399_fu_12444061_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_217_fu_12503925_p2() {
    add_ln703_217_fu_12503925_p2 = (!sext_ln703_164_fu_12503922_p1.read().is_01() || !add_ln703_209_fu_12503916_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_164_fu_12503922_p1.read()) + sc_biguint<15>(add_ln703_209_fu_12503916_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2180_fu_12491365_p2() {
    add_ln703_2180_fu_12491365_p2 = (!zext_ln1118_3033_fu_12444077_p1.read().is_01() || !sext_ln1118_697_fu_12443977_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_3033_fu_12444077_p1.read()) + sc_bigint<11>(sext_ln1118_697_fu_12443977_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2181_fu_12491371_p2() {
    add_ln703_2181_fu_12491371_p2 = (!add_ln703_2180_fu_12491365_p2.read().is_01() || !sext_ln708_125_fu_12443939_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2180_fu_12491365_p2.read()) + sc_bigint<11>(sext_ln708_125_fu_12443939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2182_fu_12491381_p2() {
    add_ln703_2182_fu_12491381_p2 = (!sext_ln703_1315_fu_12491377_p1.read().is_01() || !zext_ln703_343_fu_12491361_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1315_fu_12491377_p1.read()) + sc_biguint<12>(zext_ln703_343_fu_12491361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2183_fu_12508745_p2() {
    add_ln703_2183_fu_12508745_p2 = (!sext_ln703_1316_fu_12508742_p1.read().is_01() || !sext_ln703_1314_fu_12508739_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1316_fu_12508742_p1.read()) + sc_bigint<14>(sext_ln703_1314_fu_12508739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2184_fu_12508751_p2() {
    add_ln703_2184_fu_12508751_p2 = (!add_ln703_2183_fu_12508745_p2.read().is_01() || !sext_ln1118_702_fu_12503131_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2183_fu_12508745_p2.read()) + sc_bigint<14>(sext_ln1118_702_fu_12503131_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2185_fu_12491387_p2() {
    add_ln703_2185_fu_12491387_p2 = (!zext_ln1118_3037_fu_12444223_p1.read().is_01() || !zext_ln1118_3038_fu_12444251_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_3037_fu_12444223_p1.read()) + sc_biguint<8>(zext_ln1118_3038_fu_12444251_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2186_fu_12491397_p2() {
    add_ln703_2186_fu_12491397_p2 = (!zext_ln703_344_fu_12491393_p1.read().is_01() || !zext_ln1118_3034_fu_12444139_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_344_fu_12491393_p1.read()) + sc_biguint<10>(zext_ln1118_3034_fu_12444139_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2187_fu_12508760_p2() {
    add_ln703_2187_fu_12508760_p2 = (!zext_ln703_345_fu_12508757_p1.read().is_01() || !add_ln703_2184_fu_12508751_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_345_fu_12508757_p1.read()) + sc_biguint<14>(add_ln703_2184_fu_12508751_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2188_fu_12491403_p2() {
    add_ln703_2188_fu_12491403_p2 = (!sext_ln1118_699_fu_12444111_p1.read().is_01() || !sext_ln1118_701_fu_12444167_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_699_fu_12444111_p1.read()) + sc_bigint<11>(sext_ln1118_701_fu_12444167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2189_fu_12491413_p2() {
    add_ln703_2189_fu_12491413_p2 = (!sext_ln703_1318_fu_12491409_p1.read().is_01() || !zext_ln1118_3039_fu_12444279_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1318_fu_12491409_p1.read()) + sc_biguint<12>(zext_ln1118_3039_fu_12444279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_218_fu_12503931_p2() {
    add_ln703_218_fu_12503931_p2 = (!add_ln703_217_fu_12503925_p2.read().is_01() || !zext_ln203_12_fu_12502828_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_217_fu_12503925_p2.read()) + sc_biguint<15>(zext_ln203_12_fu_12502828_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2190_fu_12491423_p2() {
    add_ln703_2190_fu_12491423_p2 = (!sext_ln708_126_fu_12444265_p1.read().is_01() || !sext_ln1118_698_fu_12444097_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_126_fu_12444265_p1.read()) + sc_bigint<11>(sext_ln1118_698_fu_12444097_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2191_fu_12491433_p2() {
    add_ln703_2191_fu_12491433_p2 = (!sext_ln703_1320_fu_12491429_p1.read().is_01() || !sext_ln1118_703_fu_12444237_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1320_fu_12491429_p1.read()) + sc_bigint<12>(sext_ln1118_703_fu_12444237_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2192_fu_12491443_p2() {
    add_ln703_2192_fu_12491443_p2 = (!sext_ln703_1321_fu_12491439_p1.read().is_01() || !sext_ln703_1319_fu_12491419_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1321_fu_12491439_p1.read()) + sc_bigint<13>(sext_ln703_1319_fu_12491419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2193_fu_12508773_p2() {
    add_ln703_2193_fu_12508773_p2 = (!sext_ln703_1322_fu_12508770_p1.read().is_01() || !sext_ln703_1317_fu_12508766_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1322_fu_12508770_p1.read()) + sc_bigint<15>(sext_ln703_1317_fu_12508766_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2194_fu_12508779_p2() {
    add_ln703_2194_fu_12508779_p2 = (!add_ln703_2193_fu_12508773_p2.read().is_01() || !sext_ln203_326_fu_12503134_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2193_fu_12508773_p2.read()) + sc_bigint<15>(sext_ln203_326_fu_12503134_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2195_fu_12491449_p2() {
    add_ln703_2195_fu_12491449_p2 = (!sext_ln203_327_fu_12444317_p1.read().is_01() || !sext_ln203_328_fu_12444377_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_327_fu_12444317_p1.read()) + sc_bigint<12>(sext_ln203_328_fu_12444377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2196_fu_12508788_p2() {
    add_ln703_2196_fu_12508788_p2 = (!sext_ln703_1323_fu_12508785_p1.read().is_01() || !add_ln703_2194_fu_12508779_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1323_fu_12508785_p1.read()) + sc_biguint<15>(add_ln703_2194_fu_12508779_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2197_fu_12491455_p2() {
    add_ln703_2197_fu_12491455_p2 = (!zext_ln708_1309_fu_12444331_p1.read().is_01() || !zext_ln708_1310_fu_12444345_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1309_fu_12444331_p1.read()) + sc_biguint<11>(zext_ln708_1310_fu_12444345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2198_fu_12491461_p2() {
    add_ln703_2198_fu_12491461_p2 = (!trunc_ln203_62_fu_12444403_p4.read().is_01() || !zext_ln203_111_fu_12444303_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln203_62_fu_12444403_p4.read()) + sc_biguint<9>(zext_ln203_111_fu_12444303_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2199_fu_12491471_p2() {
    add_ln703_2199_fu_12491471_p2 = (!zext_ln703_346_fu_12491467_p1.read().is_01() || !add_ln703_2197_fu_12491455_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_346_fu_12491467_p1.read()) + sc_biguint<11>(add_ln703_2197_fu_12491455_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_219_fu_12479179_p2() {
    add_ln703_219_fu_12479179_p2 = (!zext_ln708_985_fu_12406219_p1.read().is_01() || !zext_ln708_986_fu_12406233_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_985_fu_12406219_p1.read()) + sc_biguint<11>(zext_ln708_986_fu_12406233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_21_fu_12503465_p2() {
    add_ln703_21_fu_12503465_p2 = (!sext_ln703_24_fu_12503462_p1.read().is_01() || !add_ln703_15_fu_12503456_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_24_fu_12503462_p1.read()) + sc_biguint<15>(add_ln703_15_fu_12503456_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2201_fu_12491477_p2() {
    add_ln703_2201_fu_12491477_p2 = (!sext_ln203_329_fu_12444441_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_329_fu_12444441_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2202_fu_12491487_p2() {
    add_ln703_2202_fu_12491487_p2 = (!sext_ln703_312_fu_12491483_p1.read().is_01() || !sext_ln203_330_fu_12444473_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_312_fu_12491483_p1.read()) + sc_bigint<13>(sext_ln203_330_fu_12444473_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2203_fu_12491493_p2() {
    add_ln703_2203_fu_12491493_p2 = (!zext_ln1118_3046_fu_12444519_p1.read().is_01() || !zext_ln1118_3047_fu_12444533_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3046_fu_12444519_p1.read()) + sc_biguint<10>(zext_ln1118_3047_fu_12444533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2204_fu_12491503_p2() {
    add_ln703_2204_fu_12491503_p2 = (!zext_ln703_348_fu_12491499_p1.read().is_01() || !sext_ln1118_704_fu_12444487_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_348_fu_12491499_p1.read()) + sc_bigint<12>(sext_ln1118_704_fu_12444487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2205_fu_12491513_p2() {
    add_ln703_2205_fu_12491513_p2 = (!sext_ln703_1325_fu_12491509_p1.read().is_01() || !add_ln703_2202_fu_12491487_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1325_fu_12491509_p1.read()) + sc_biguint<13>(add_ln703_2202_fu_12491487_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2206_fu_12508810_p2() {
    add_ln703_2206_fu_12508810_p2 = (!sext_ln703_313_fu_12508807_p1.read().is_01() || !sext_ln203_331_fu_12503137_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_313_fu_12508807_p1.read()) + sc_bigint<14>(sext_ln203_331_fu_12503137_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2207_fu_12491519_p2() {
    add_ln703_2207_fu_12491519_p2 = (!zext_ln1118_3048_fu_12444561_p1.read().is_01() || !zext_ln1118_3050_fu_12444593_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3048_fu_12444561_p1.read()) + sc_biguint<10>(zext_ln1118_3050_fu_12444593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2208_fu_12491529_p2() {
    add_ln703_2208_fu_12491529_p2 = (!zext_ln703_349_fu_12491525_p1.read().is_01() || !sext_ln1116_64_fu_12439693_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_349_fu_12491525_p1.read()) + sc_bigint<12>(sext_ln1116_64_fu_12439693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2209_fu_12508819_p2() {
    add_ln703_2209_fu_12508819_p2 = (!sext_ln703_1326_fu_12508816_p1.read().is_01() || !add_ln703_2206_fu_12508810_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1326_fu_12508816_p1.read()) + sc_biguint<14>(add_ln703_2206_fu_12508810_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2210_fu_12491535_p2() {
    add_ln703_2210_fu_12491535_p2 = (!zext_ln708_1313_fu_12444639_p1.read().is_01() || !zext_ln708_1315_fu_12444677_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1313_fu_12444639_p1.read()) + sc_biguint<11>(zext_ln708_1315_fu_12444677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2211_fu_12491541_p2() {
    add_ln703_2211_fu_12491541_p2 = (!add_ln703_2210_fu_12491535_p2.read().is_01() || !zext_ln708_1311_fu_12444607_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2210_fu_12491535_p2.read()) + sc_biguint<11>(zext_ln708_1311_fu_12444607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2212_fu_12491551_p2() {
    add_ln703_2212_fu_12491551_p2 = (!zext_ln1118_3051_fu_12444625_p1.read().is_01() || !zext_ln708_1314_fu_12444663_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln1118_3051_fu_12444625_p1.read()) + sc_biguint<7>(zext_ln708_1314_fu_12444663_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2213_fu_12491561_p2() {
    add_ln703_2213_fu_12491561_p2 = (!zext_ln703_351_fu_12491557_p1.read().is_01() || !sext_ln1118_705_fu_12444547_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_351_fu_12491557_p1.read()) + sc_bigint<11>(sext_ln1118_705_fu_12444547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2214_fu_12491571_p2() {
    add_ln703_2214_fu_12491571_p2 = (!sext_ln703_1327_fu_12491567_p1.read().is_01() || !zext_ln703_350_fu_12491547_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1327_fu_12491567_p1.read()) + sc_biguint<12>(zext_ln703_350_fu_12491547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2215_fu_12508828_p2() {
    add_ln703_2215_fu_12508828_p2 = (!sext_ln703_1328_fu_12508825_p1.read().is_01() || !add_ln703_2209_fu_12508819_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1328_fu_12508825_p1.read()) + sc_biguint<14>(add_ln703_2209_fu_12508819_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2216_fu_12491577_p2() {
    add_ln703_2216_fu_12491577_p2 = (!zext_ln1118_3052_fu_12444691_p1.read().is_01() || !sext_ln1118_706_fu_12444723_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3052_fu_12444691_p1.read()) + sc_bigint<12>(sext_ln1118_706_fu_12444723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2217_fu_12508841_p2() {
    add_ln703_2217_fu_12508841_p2 = (!sext_ln703_1329_fu_12508838_p1.read().is_01() || !sext_ln703_314_fu_12508834_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1329_fu_12508838_p1.read()) + sc_bigint<15>(sext_ln703_314_fu_12508834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2218_fu_12491583_p2() {
    add_ln703_2218_fu_12491583_p2 = (!sext_ln1118_707_fu_12444737_p1.read().is_01() || !sext_ln1118_666_fu_12442069_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_707_fu_12444737_p1.read()) + sc_bigint<12>(sext_ln1118_666_fu_12442069_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2219_fu_12491593_p2() {
    add_ln703_2219_fu_12491593_p2 = (!sext_ln203_301_fu_12440220_p1.read().is_01() || !zext_ln1118_3054_fu_12444757_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_301_fu_12440220_p1.read()) + sc_biguint<12>(zext_ln1118_3054_fu_12444757_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_221_fu_12479185_p2() {
    add_ln703_221_fu_12479185_p2 = (!zext_ln203_335_fu_12406265_p1.read().is_01() || !ap_const_lv10_2F0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_335_fu_12406265_p1.read()) + sc_bigint<10>(ap_const_lv10_2F0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2220_fu_12491603_p2() {
    add_ln703_2220_fu_12491603_p2 = (!sext_ln703_1331_fu_12491599_p1.read().is_01() || !sext_ln703_1330_fu_12491589_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1331_fu_12491599_p1.read()) + sc_bigint<13>(sext_ln703_1330_fu_12491589_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2221_fu_12508850_p2() {
    add_ln703_2221_fu_12508850_p2 = (!sext_ln703_1332_fu_12508847_p1.read().is_01() || !add_ln703_2217_fu_12508841_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1332_fu_12508847_p1.read()) + sc_biguint<15>(add_ln703_2217_fu_12508841_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2222_fu_12491609_p2() {
    add_ln703_2222_fu_12491609_p2 = (!trunc_ln1118_111_fu_12444795_p4.read().is_01() || !zext_ln1118_3056_fu_12444815_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_111_fu_12444795_p4.read()) + sc_biguint<9>(zext_ln1118_3056_fu_12444815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2223_fu_12491619_p2() {
    add_ln703_2223_fu_12491619_p2 = (!zext_ln203_400_fu_12444839_p1.read().is_01() || !trunc_ln1118_112_fu_12444843_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_400_fu_12444839_p1.read()) + sc_biguint<10>(trunc_ln1118_112_fu_12444843_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2224_fu_12491629_p2() {
    add_ln703_2224_fu_12491629_p2 = (!zext_ln703_353_fu_12491625_p1.read().is_01() || !zext_ln703_352_fu_12491615_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_353_fu_12491625_p1.read()) + sc_biguint<11>(zext_ln703_352_fu_12491615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2225_fu_12491639_p2() {
    add_ln703_2225_fu_12491639_p2 = (!zext_ln708_1316_fu_12444889_p1.read().is_01() || !trunc_ln708_2386_fu_12444911_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1316_fu_12444889_p1.read()) + sc_biguint<10>(trunc_ln708_2386_fu_12444911_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2226_fu_12491649_p2() {
    add_ln703_2226_fu_12491649_p2 = (!zext_ln708_516_fu_12444893_p1.read().is_01() || !sext_ln1118_709_fu_12444791_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_516_fu_12444893_p1.read()) + sc_bigint<11>(sext_ln1118_709_fu_12444791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2227_fu_12491659_p2() {
    add_ln703_2227_fu_12491659_p2 = (!sext_ln703_1333_fu_12491655_p1.read().is_01() || !zext_ln703_355_fu_12491645_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1333_fu_12491655_p1.read()) + sc_biguint<12>(zext_ln703_355_fu_12491645_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2228_fu_12491669_p2() {
    add_ln703_2228_fu_12491669_p2 = (!sext_ln703_1334_fu_12491665_p1.read().is_01() || !zext_ln703_354_fu_12491635_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1334_fu_12491665_p1.read()) + sc_biguint<13>(zext_ln703_354_fu_12491635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2229_fu_12508859_p2() {
    add_ln703_2229_fu_12508859_p2 = (!sext_ln703_1335_fu_12508856_p1.read().is_01() || !add_ln703_2221_fu_12508850_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1335_fu_12508856_p1.read()) + sc_biguint<15>(add_ln703_2221_fu_12508850_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_222_fu_12479191_p2() {
    add_ln703_222_fu_12479191_p2 = (!add_ln703_221_fu_12479185_p2.read().is_01() || !sext_ln1118_67_fu_12406289_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_221_fu_12479185_p2.read()) + sc_bigint<10>(sext_ln1118_67_fu_12406289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2230_fu_12508865_p2() {
    add_ln703_2230_fu_12508865_p2 = (!add_ln703_2229_fu_12508859_p2.read().is_01() || !zext_ln203_112_fu_12503140_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2229_fu_12508859_p2.read()) + sc_biguint<15>(zext_ln203_112_fu_12503140_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2231_fu_12491675_p2() {
    add_ln703_2231_fu_12491675_p2 = (!zext_ln708_1317_fu_12444951_p1.read().is_01() || !zext_ln708_1318_fu_12444965_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1317_fu_12444951_p1.read()) + sc_biguint<11>(zext_ln708_1318_fu_12444965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2233_fu_12491681_p2() {
    add_ln703_2233_fu_12491681_p2 = (!zext_ln203_401_fu_12444997_p1.read().is_01() || !ap_const_lv10_2F0.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_401_fu_12444997_p1.read()) + sc_bigint<10>(ap_const_lv10_2F0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2234_fu_12491687_p2() {
    add_ln703_2234_fu_12491687_p2 = (!add_ln703_2233_fu_12491681_p2.read().is_01() || !sext_ln1118_711_fu_12445021_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2233_fu_12491681_p2.read()) + sc_bigint<10>(sext_ln1118_711_fu_12445021_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2235_fu_12491697_p2() {
    add_ln703_2235_fu_12491697_p2 = (!sext_ln1118_713_fu_12445075_p1.read().is_01() || !sext_ln1118_714_fu_12445095_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_713_fu_12445075_p1.read()) + sc_bigint<11>(sext_ln1118_714_fu_12445095_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2236_fu_12491707_p2() {
    add_ln703_2236_fu_12491707_p2 = (!sext_ln703_1338_fu_12491703_p1.read().is_01() || !sext_ln703_1337_fu_12491693_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1338_fu_12491703_p1.read()) + sc_bigint<12>(sext_ln703_1337_fu_12491693_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2237_fu_12491713_p2() {
    add_ln703_2237_fu_12491713_p2 = (!zext_ln708_1319_fu_12445183_p1.read().is_01() || !sext_ln1118_717_fu_12445219_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1319_fu_12445183_p1.read()) + sc_bigint<11>(sext_ln1118_717_fu_12445219_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2238_fu_12491723_p2() {
    add_ln703_2238_fu_12491723_p2 = (!sext_ln703_1339_fu_12491719_p1.read().is_01() || !add_ln703_2236_fu_12491707_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1339_fu_12491719_p1.read()) + sc_biguint<12>(add_ln703_2236_fu_12491707_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2239_fu_12491733_p2() {
    add_ln703_2239_fu_12491733_p2 = (!sext_ln1118_716_fu_12445159_p1.read().is_01() || !sext_ln1118_718_fu_12445263_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_716_fu_12445159_p1.read()) + sc_bigint<10>(sext_ln1118_718_fu_12445263_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_223_fu_12479201_p2() {
    add_ln703_223_fu_12479201_p2 = (!sext_ln1118_69_fu_12406343_p1.read().is_01() || !sext_ln1118_70_fu_12406363_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_69_fu_12406343_p1.read()) + sc_bigint<11>(sext_ln1118_70_fu_12406363_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2240_fu_12491743_p2() {
    add_ln703_2240_fu_12491743_p2 = (!sext_ln703_1341_fu_12491739_p1.read().is_01() || !sext_ln1118_715_fu_12445115_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1341_fu_12491739_p1.read()) + sc_bigint<11>(sext_ln1118_715_fu_12445115_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2241_fu_12491753_p2() {
    add_ln703_2241_fu_12491753_p2 = (!sext_ln703_1342_fu_12491749_p1.read().is_01() || !sext_ln703_1340_fu_12491729_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1342_fu_12491749_p1.read()) + sc_bigint<13>(sext_ln703_1340_fu_12491729_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2242_fu_12491759_p2() {
    add_ln703_2242_fu_12491759_p2 = (!add_ln703_2241_fu_12491753_p2.read().is_01() || !sext_ln1118_730_fu_12445491_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2241_fu_12491753_p2.read()) + sc_bigint<13>(sext_ln1118_730_fu_12445491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2243_fu_12491765_p2() {
    add_ln703_2243_fu_12491765_p2 = (!zext_ln708_1321_fu_12445505_p1.read().is_01() || !sext_ln1118_722_fu_12445327_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1321_fu_12445505_p1.read()) + sc_bigint<11>(sext_ln1118_722_fu_12445327_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2244_fu_12491775_p2() {
    add_ln703_2244_fu_12491775_p2 = (!sext_ln703_1344_fu_12491771_p1.read().is_01() || !zext_ln1118_3070_fu_12445359_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1344_fu_12491771_p1.read()) + sc_biguint<12>(zext_ln1118_3070_fu_12445359_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2245_fu_12508890_p2() {
    add_ln703_2245_fu_12508890_p2 = (!sext_ln703_1345_fu_12508887_p1.read().is_01() || !sext_ln703_1343_fu_12508884_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1345_fu_12508887_p1.read()) + sc_bigint<14>(sext_ln703_1343_fu_12508884_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2246_fu_12491781_p2() {
    add_ln703_2246_fu_12491781_p2 = (!sext_ln1118_725_fu_12445413_p1.read().is_01() || !sext_ln1118_729_fu_12445477_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_725_fu_12445413_p1.read()) + sc_bigint<11>(sext_ln1118_729_fu_12445477_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2247_fu_12491791_p2() {
    add_ln703_2247_fu_12491791_p2 = (!sext_ln703_1346_fu_12491787_p1.read().is_01() || !sext_ln1118_723_fu_12445341_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1346_fu_12491787_p1.read()) + sc_bigint<12>(sext_ln1118_723_fu_12445341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2248_fu_12491797_p2() {
    add_ln703_2248_fu_12491797_p2 = (!sext_ln1118_727_fu_12445447_p1.read().is_01() || !sext_ln1118_731_fu_12445519_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_727_fu_12445447_p1.read()) + sc_bigint<9>(sext_ln1118_731_fu_12445519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2249_fu_12491807_p2() {
    add_ln703_2249_fu_12491807_p2 = (!sext_ln703_1347_fu_12491803_p1.read().is_01() || !sext_ln1118_720_fu_12445293_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1347_fu_12491803_p1.read()) + sc_bigint<10>(sext_ln1118_720_fu_12445293_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_224_fu_12479211_p2() {
    add_ln703_224_fu_12479211_p2 = (!sext_ln703_167_fu_12479207_p1.read().is_01() || !sext_ln703_166_fu_12479197_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_167_fu_12479207_p1.read()) + sc_bigint<12>(sext_ln703_166_fu_12479197_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2250_fu_12491817_p2() {
    add_ln703_2250_fu_12491817_p2 = (!sext_ln703_1348_fu_12491813_p1.read().is_01() || !add_ln703_2247_fu_12491791_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1348_fu_12491813_p1.read()) + sc_biguint<12>(add_ln703_2247_fu_12491791_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2251_fu_12508899_p2() {
    add_ln703_2251_fu_12508899_p2 = (!sext_ln703_1349_fu_12508896_p1.read().is_01() || !add_ln703_2245_fu_12508890_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1349_fu_12508896_p1.read()) + sc_biguint<14>(add_ln703_2245_fu_12508890_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2252_fu_12508905_p2() {
    add_ln703_2252_fu_12508905_p2 = (!zext_ln203_113_fu_12503143_p1.read().is_01() || !sext_ln203_336_fu_12503146_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_113_fu_12503143_p1.read()) + sc_bigint<12>(sext_ln203_336_fu_12503146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2253_fu_12508915_p2() {
    add_ln703_2253_fu_12508915_p2 = (!sext_ln703_1350_fu_12508911_p1.read().is_01() || !add_ln703_2251_fu_12508899_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1350_fu_12508911_p1.read()) + sc_biguint<14>(add_ln703_2251_fu_12508899_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2254_fu_12491823_p2() {
    add_ln703_2254_fu_12491823_p2 = (!zext_ln203_402_fu_12445561_p1.read().is_01() || !zext_ln203_403_fu_12445689_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_402_fu_12445561_p1.read()) + sc_biguint<9>(zext_ln203_403_fu_12445689_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2255_fu_12491833_p2() {
    add_ln703_2255_fu_12491833_p2 = (!zext_ln203_404_fu_12445717_p1.read().is_01() || !zext_ln203_398_fu_12441445_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_404_fu_12445717_p1.read()) + sc_biguint<9>(zext_ln203_398_fu_12441445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2256_fu_12491843_p2() {
    add_ln703_2256_fu_12491843_p2 = (!zext_ln703_358_fu_12491839_p1.read().is_01() || !zext_ln703_357_fu_12491829_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_358_fu_12491839_p1.read()) + sc_biguint<10>(zext_ln703_357_fu_12491829_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2257_fu_12508928_p2() {
    add_ln703_2257_fu_12508928_p2 = (!zext_ln703_359_fu_12508925_p1.read().is_01() || !sext_ln703_1351_fu_12508921_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_359_fu_12508925_p1.read()) + sc_bigint<15>(sext_ln703_1351_fu_12508921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2258_fu_12491849_p2() {
    add_ln703_2258_fu_12491849_p2 = (!sext_ln203_333_fu_12445607_p1.read().is_01() || !sext_ln203_334_fu_12445627_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_333_fu_12445607_p1.read()) + sc_bigint<11>(sext_ln203_334_fu_12445627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2259_fu_12491859_p2() {
    add_ln703_2259_fu_12491859_p2 = (!sext_ln703_1352_fu_12491855_p1.read().is_01() || !sext_ln203_332_fu_12445575_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1352_fu_12491855_p1.read()) + sc_bigint<12>(sext_ln203_332_fu_12445575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_225_fu_12479217_p2() {
    add_ln703_225_fu_12479217_p2 = (!zext_ln708_987_fu_12406451_p1.read().is_01() || !sext_ln1118_73_fu_12406487_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_987_fu_12406451_p1.read()) + sc_bigint<11>(sext_ln1118_73_fu_12406487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2260_fu_12491869_p2() {
    add_ln703_2260_fu_12491869_p2 = (!sext_ln203_339_fu_12445789_p1.read().is_01() || !sext_ln203_337_fu_12445703_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_339_fu_12445789_p1.read()) + sc_bigint<11>(sext_ln203_337_fu_12445703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2261_fu_12491875_p2() {
    add_ln703_2261_fu_12491875_p2 = (!sext_ln203_335_fu_12445659_p1.read().is_01() || !sext_ln203_338_fu_12445753_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_335_fu_12445659_p1.read()) + sc_bigint<9>(sext_ln203_338_fu_12445753_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2262_fu_12491885_p2() {
    add_ln703_2262_fu_12491885_p2 = (!sext_ln703_1354_fu_12491881_p1.read().is_01() || !add_ln703_2260_fu_12491869_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1354_fu_12491881_p1.read()) + sc_biguint<11>(add_ln703_2260_fu_12491869_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2263_fu_12491895_p2() {
    add_ln703_2263_fu_12491895_p2 = (!sext_ln703_1355_fu_12491891_p1.read().is_01() || !sext_ln703_1353_fu_12491865_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1355_fu_12491891_p1.read()) + sc_bigint<13>(sext_ln703_1353_fu_12491865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2265_fu_12491901_p2() {
    add_ln703_2265_fu_12491901_p2 = (!zext_ln1116_288_fu_12445831_p1.read().is_01() || !trunc_ln1118_113_fu_12445860_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_288_fu_12445831_p1.read()) + sc_biguint<9>(trunc_ln1118_113_fu_12445860_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2266_fu_12491911_p2() {
    add_ln703_2266_fu_12491911_p2 = (!zext_ln703_360_fu_12491907_p1.read().is_01() || !ap_const_lv11_418.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_360_fu_12491907_p1.read()) + sc_bigint<11>(ap_const_lv11_418));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2267_fu_12491921_p2() {
    add_ln703_2267_fu_12491921_p2 = (!zext_ln1118_3084_fu_12445898_p1.read().is_01() || !trunc_ln1116_13_fu_12445906_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3084_fu_12445898_p1.read()) + sc_biguint<10>(trunc_ln1116_13_fu_12445906_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2268_fu_12491931_p2() {
    add_ln703_2268_fu_12491931_p2 = (!zext_ln708_1322_fu_12445926_p1.read().is_01() || !sext_ln1118_732_fu_12445793_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1322_fu_12445926_p1.read()) + sc_bigint<11>(sext_ln1118_732_fu_12445793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2269_fu_12491941_p2() {
    add_ln703_2269_fu_12491941_p2 = (!sext_ln703_1359_fu_12491937_p1.read().is_01() || !zext_ln703_361_fu_12491927_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1359_fu_12491937_p1.read()) + sc_biguint<12>(zext_ln703_361_fu_12491927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_226_fu_12479227_p2() {
    add_ln703_226_fu_12479227_p2 = (!sext_ln703_168_fu_12479223_p1.read().is_01() || !add_ln703_224_fu_12479211_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_168_fu_12479223_p1.read()) + sc_biguint<12>(add_ln703_224_fu_12479211_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2270_fu_12491947_p2() {
    add_ln703_2270_fu_12491947_p2 = (!add_ln703_2269_fu_12491941_p2.read().is_01() || !sext_ln703_1358_fu_12491917_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2269_fu_12491941_p2.read()) + sc_bigint<12>(sext_ln703_1358_fu_12491917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2271_fu_12491953_p2() {
    add_ln703_2271_fu_12491953_p2 = (!add_ln703_2270_fu_12491947_p2.read().is_01() || !zext_ln708_520_fu_12445994_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2270_fu_12491947_p2.read()) + sc_biguint<12>(zext_ln708_520_fu_12445994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2272_fu_12491959_p2() {
    add_ln703_2272_fu_12491959_p2 = (!sext_ln1118_688_fu_12443229_p1.read().is_01() || !sext_ln1116_70_fu_12445965_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_688_fu_12443229_p1.read()) + sc_bigint<10>(sext_ln1116_70_fu_12445965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2273_fu_12491969_p2() {
    add_ln703_2273_fu_12491969_p2 = (!sext_ln703_1360_fu_12491965_p1.read().is_01() || !add_ln703_2271_fu_12491953_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1360_fu_12491965_p1.read()) + sc_biguint<12>(add_ln703_2271_fu_12491953_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2274_fu_12508950_p2() {
    add_ln703_2274_fu_12508950_p2 = (!sext_ln703_1361_fu_12508947_p1.read().is_01() || !zext_ln1116_199_fu_12503149_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1361_fu_12508947_p1.read()) + sc_biguint<13>(zext_ln1116_199_fu_12503149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2275_fu_12508956_p2() {
    add_ln703_2275_fu_12508956_p2 = (!sext_ln1118_735_fu_12503155_p1.read().is_01() || !zext_ln708_528_fu_12503152_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_735_fu_12503155_p1.read()) + sc_biguint<12>(zext_ln708_528_fu_12503152_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2276_fu_12508966_p2() {
    add_ln703_2276_fu_12508966_p2 = (!sext_ln703_1362_fu_12508962_p1.read().is_01() || !add_ln703_2274_fu_12508950_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1362_fu_12508962_p1.read()) + sc_biguint<13>(add_ln703_2274_fu_12508950_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2277_fu_12491975_p2() {
    add_ln703_2277_fu_12491975_p2 = (!sext_ln1116_71_fu_12446176_p1.read().is_01() || !zext_ln1118_3088_fu_12446064_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_71_fu_12446176_p1.read()) + sc_biguint<11>(zext_ln1118_3088_fu_12446064_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2278_fu_12491981_p2() {
    add_ln703_2278_fu_12491981_p2 = (!zext_ln1116_289_fu_12446096_p1.read().is_01() || !sext_ln1118_736_fu_12446156_p1.read().is_01())? sc_lv<6>(): (sc_biguint<6>(zext_ln1116_289_fu_12446096_p1.read()) + sc_bigint<6>(sext_ln1118_736_fu_12446156_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2279_fu_12491991_p2() {
    add_ln703_2279_fu_12491991_p2 = (!sext_ln703_1363_fu_12491987_p1.read().is_01() || !zext_ln1118_3089_fu_12446078_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln703_1363_fu_12491987_p1.read()) + sc_biguint<7>(zext_ln1118_3089_fu_12446078_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_227_fu_12479237_p2() {
    add_ln703_227_fu_12479237_p2 = (!sext_ln1118_72_fu_12406427_p1.read().is_01() || !sext_ln1118_74_fu_12406531_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_72_fu_12406427_p1.read()) + sc_bigint<10>(sext_ln1118_74_fu_12406531_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2280_fu_12492001_p2() {
    add_ln703_2280_fu_12492001_p2 = (!sext_ln703_1364_fu_12491997_p1.read().is_01() || !add_ln703_2277_fu_12491975_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1364_fu_12491997_p1.read()) + sc_biguint<11>(add_ln703_2277_fu_12491975_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2281_fu_12508975_p2() {
    add_ln703_2281_fu_12508975_p2 = (!sext_ln703_1365_fu_12508972_p1.read().is_01() || !add_ln703_2276_fu_12508966_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1365_fu_12508972_p1.read()) + sc_biguint<13>(add_ln703_2276_fu_12508966_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2282_fu_12508985_p2() {
    add_ln703_2282_fu_12508985_p2 = (!sext_ln703_1366_fu_12508981_p1.read().is_01() || !zext_ln1116_201_fu_12503158_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1366_fu_12508981_p1.read()) + sc_biguint<14>(zext_ln1116_201_fu_12503158_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2283_fu_12492007_p2() {
    add_ln703_2283_fu_12492007_p2 = (!zext_ln708_1323_fu_12446206_p1.read().is_01() || !trunc_ln708_2429_fu_12446224_p4.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_1323_fu_12446206_p1.read()) + sc_biguint<9>(trunc_ln708_2429_fu_12446224_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2284_fu_12492017_p2() {
    add_ln703_2284_fu_12492017_p2 = (!zext_ln703_362_fu_12492013_p1.read().is_01() || !sext_ln708_129_fu_12446262_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_362_fu_12492013_p1.read()) + sc_bigint<12>(sext_ln708_129_fu_12446262_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2285_fu_12508994_p2() {
    add_ln703_2285_fu_12508994_p2 = (!sext_ln703_1367_fu_12508991_p1.read().is_01() || !add_ln703_2282_fu_12508985_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1367_fu_12508991_p1.read()) + sc_biguint<14>(add_ln703_2282_fu_12508985_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2286_fu_12492023_p2() {
    add_ln703_2286_fu_12492023_p2 = (!zext_ln708_1324_fu_12446327_p1.read().is_01() || !sext_ln708_130_fu_12446308_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1324_fu_12446327_p1.read()) + sc_bigint<11>(sext_ln708_130_fu_12446308_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2287_fu_12492033_p2() {
    add_ln703_2287_fu_12492033_p2 = (!sext_ln703_1369_fu_12492029_p1.read().is_01() || !zext_ln1116_203_fu_12446248_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1369_fu_12492029_p1.read()) + sc_biguint<12>(zext_ln1116_203_fu_12446248_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2288_fu_12492043_p2() {
    add_ln703_2288_fu_12492043_p2 = (!sext_ln203_335_fu_12445659_p1.read().is_01() || !sext_ln708_131_fu_12446369_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_335_fu_12445659_p1.read()) + sc_bigint<9>(sext_ln708_131_fu_12446369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2289_fu_12492053_p2() {
    add_ln703_2289_fu_12492053_p2 = (!sext_ln703_1371_fu_12492049_p1.read().is_01() || !sext_ln1116_72_fu_12446276_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1371_fu_12492049_p1.read()) + sc_bigint<10>(sext_ln1116_72_fu_12446276_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_228_fu_12479247_p2() {
    add_ln703_228_fu_12479247_p2 = (!sext_ln703_170_fu_12479243_p1.read().is_01() || !sext_ln1118_71_fu_12406383_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_170_fu_12479243_p1.read()) + sc_bigint<11>(sext_ln1118_71_fu_12406383_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2290_fu_12492063_p2() {
    add_ln703_2290_fu_12492063_p2 = (!sext_ln703_1372_fu_12492059_p1.read().is_01() || !sext_ln703_1370_fu_12492039_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1372_fu_12492059_p1.read()) + sc_bigint<13>(sext_ln703_1370_fu_12492039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2291_fu_12509007_p2() {
    add_ln703_2291_fu_12509007_p2 = (!sext_ln703_1373_fu_12509004_p1.read().is_01() || !sext_ln703_1368_fu_12509000_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1373_fu_12509004_p1.read()) + sc_bigint<15>(sext_ln703_1368_fu_12509000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2292_fu_12509013_p2() {
    add_ln703_2292_fu_12509013_p2 = (!add_ln703_2291_fu_12509007_p2.read().is_01() || !zext_ln203_114_fu_12503161_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2291_fu_12509007_p2.read()) + sc_biguint<15>(zext_ln203_114_fu_12503161_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2293_fu_12492069_p2() {
    add_ln703_2293_fu_12492069_p2 = (!zext_ln203_116_fu_12446433_p1.read().is_01() || !sext_ln203_340_fu_12446454_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_116_fu_12446433_p1.read()) + sc_bigint<12>(sext_ln203_340_fu_12446454_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2294_fu_12492075_p2() {
    add_ln703_2294_fu_12492075_p2 = (!add_ln703_2293_fu_12492069_p2.read().is_01() || !zext_ln203_115_fu_12446419_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2293_fu_12492069_p2.read()) + sc_biguint<12>(zext_ln203_115_fu_12446419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2296_fu_12492081_p2() {
    add_ln703_2296_fu_12492081_p2 = (!zext_ln203_405_fu_12446468_p1.read().is_01() || !ap_const_lv10_378.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_405_fu_12446468_p1.read()) + sc_bigint<10>(ap_const_lv10_378));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2297_fu_12492091_p2() {
    add_ln703_2297_fu_12492091_p2 = (!zext_ln708_1327_fu_12446500_p1.read().is_01() || !sext_ln703_325_fu_12492087_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1327_fu_12446500_p1.read()) + sc_bigint<11>(sext_ln703_325_fu_12492087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2298_fu_12492101_p2() {
    add_ln703_2298_fu_12492101_p2 = (!sext_ln703_326_fu_12492097_p1.read().is_01() || !zext_ln203_117_fu_12446532_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_326_fu_12492097_p1.read()) + sc_biguint<12>(zext_ln203_117_fu_12446532_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2299_fu_12509032_p2() {
    add_ln703_2299_fu_12509032_p2 = (!add_ln703_2298_reg_12517512.read().is_01() || !zext_ln1118_3099_fu_12503164_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2298_reg_12517512.read()) + sc_biguint<12>(zext_ln1118_3099_fu_12503164_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_229_fu_12479257_p2() {
    add_ln703_229_fu_12479257_p2 = (!sext_ln703_174_fu_12479253_p1.read().is_01() || !sext_ln703_169_fu_12479233_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_174_fu_12479253_p1.read()) + sc_bigint<13>(sext_ln703_169_fu_12479233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_22_fu_12503471_p2() {
    add_ln703_22_fu_12503471_p2 = (!add_ln703_21_fu_12503465_p2.read().is_01() || !zext_ln203_fu_12502795_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_21_fu_12503465_p2.read()) + sc_biguint<15>(zext_ln203_fu_12502795_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2300_fu_12492107_p2() {
    add_ln703_2300_fu_12492107_p2 = (!sext_ln1118_739_fu_12446560_p1.read().is_01() || !sext_ln1118_740_fu_12446584_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_739_fu_12446560_p1.read()) + sc_bigint<11>(sext_ln1118_740_fu_12446584_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2301_fu_12509040_p2() {
    add_ln703_2301_fu_12509040_p2 = (!sext_ln703_1376_fu_12509037_p1.read().is_01() || !add_ln703_2299_fu_12509032_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1376_fu_12509037_p1.read()) + sc_biguint<12>(add_ln703_2299_fu_12509032_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2302_fu_12509050_p2() {
    add_ln703_2302_fu_12509050_p2 = (!sext_ln703_1377_fu_12509046_p1.read().is_01() || !sext_ln1118_741_fu_12503167_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1377_fu_12509046_p1.read()) + sc_bigint<13>(sext_ln1118_741_fu_12503167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2303_fu_12492113_p2() {
    add_ln703_2303_fu_12492113_p2 = (!sext_ln1118_743_fu_12446752_p1.read().is_01() || !zext_ln1118_3101_fu_12446658_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_743_fu_12446752_p1.read()) + sc_biguint<12>(zext_ln1118_3101_fu_12446658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2304_fu_12509059_p2() {
    add_ln703_2304_fu_12509059_p2 = (!sext_ln703_1378_fu_12509056_p1.read().is_01() || !add_ln703_2302_fu_12509050_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1378_fu_12509056_p1.read()) + sc_biguint<13>(add_ln703_2302_fu_12509050_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2305_fu_12492119_p2() {
    add_ln703_2305_fu_12492119_p2 = (!trunc_ln1118_114_fu_12446672_p4.read().is_01() || !zext_ln1118_3103_fu_12446702_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_114_fu_12446672_p4.read()) + sc_biguint<10>(zext_ln1118_3103_fu_12446702_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2306_fu_12492129_p2() {
    add_ln703_2306_fu_12492129_p2 = (!zext_ln708_1320_fu_12445355_p1.read().is_01() || !sext_ln1118_742_fu_12446716_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1320_fu_12445355_p1.read()) + sc_bigint<11>(sext_ln1118_742_fu_12446716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2307_fu_12492139_p2() {
    add_ln703_2307_fu_12492139_p2 = (!sext_ln703_1380_fu_12492135_p1.read().is_01() || !zext_ln703_363_fu_12492125_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1380_fu_12492135_p1.read()) + sc_biguint<12>(zext_ln703_363_fu_12492125_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2308_fu_12509072_p2() {
    add_ln703_2308_fu_12509072_p2 = (!sext_ln703_1381_fu_12509069_p1.read().is_01() || !sext_ln703_1379_fu_12509065_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1381_fu_12509069_p1.read()) + sc_bigint<14>(sext_ln703_1379_fu_12509065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2309_fu_12492145_p2() {
    add_ln703_2309_fu_12492145_p2 = (!sext_ln708_133_fu_12446888_p1.read().is_01() || !sext_ln1118_747_fu_12446996_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_133_fu_12446888_p1.read()) + sc_bigint<12>(sext_ln1118_747_fu_12446996_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_230_fu_12479263_p2() {
    add_ln703_230_fu_12479263_p2 = (!add_ln703_229_fu_12479257_p2.read().is_01() || !sext_ln1118_86_fu_12406759_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_229_fu_12479257_p2.read()) + sc_bigint<13>(sext_ln1118_86_fu_12406759_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2310_fu_12509081_p2() {
    add_ln703_2310_fu_12509081_p2 = (!sext_ln703_1382_fu_12509078_p1.read().is_01() || !add_ln703_2308_fu_12509072_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1382_fu_12509078_p1.read()) + sc_biguint<14>(add_ln703_2308_fu_12509072_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2311_fu_12492151_p2() {
    add_ln703_2311_fu_12492151_p2 = (!zext_ln708_1329_fu_12446820_p1.read().is_01() || !zext_ln708_1331_fu_12446874_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1329_fu_12446820_p1.read()) + sc_biguint<11>(zext_ln708_1331_fu_12446874_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2312_fu_12492157_p2() {
    add_ln703_2312_fu_12492157_p2 = (!add_ln703_2311_fu_12492151_p2.read().is_01() || !zext_ln708_1328_fu_12446800_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2311_fu_12492151_p2.read()) + sc_biguint<11>(zext_ln708_1328_fu_12446800_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2313_fu_12509094_p2() {
    add_ln703_2313_fu_12509094_p2 = (!zext_ln703_364_fu_12509091_p1.read().is_01() || !sext_ln703_1383_fu_12509087_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_364_fu_12509091_p1.read()) + sc_bigint<15>(sext_ln703_1383_fu_12509087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2314_fu_12492163_p2() {
    add_ln703_2314_fu_12492163_p2 = (!zext_ln1118_3112_fu_12446948_p1.read().is_01() || !trunc_ln1118_115_fu_12446952_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3112_fu_12446948_p1.read()) + sc_biguint<10>(trunc_ln1118_115_fu_12446952_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2315_fu_12492173_p2() {
    add_ln703_2315_fu_12492173_p2 = (!zext_ln703_365_fu_12492169_p1.read().is_01() || !zext_ln708_1332_fu_12446908_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_365_fu_12492169_p1.read()) + sc_biguint<11>(zext_ln708_1332_fu_12446908_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2316_fu_12492183_p2() {
    add_ln703_2316_fu_12492183_p2 = (!sext_ln1118_745_fu_12446776_p1.read().is_01() || !sext_ln1118_682_fu_12442679_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_745_fu_12446776_p1.read()) + sc_bigint<11>(sext_ln1118_682_fu_12442679_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2317_fu_12492193_p2() {
    add_ln703_2317_fu_12492193_p2 = (!sext_ln1118_746_fu_12446972_p1.read().is_01() || !zext_ln1118_3108_fu_12446838_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_746_fu_12446972_p1.read()) + sc_biguint<10>(zext_ln1118_3108_fu_12446838_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2318_fu_12492203_p2() {
    add_ln703_2318_fu_12492203_p2 = (!sext_ln703_1385_fu_12492199_p1.read().is_01() || !sext_ln703_1384_fu_12492189_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1385_fu_12492199_p1.read()) + sc_bigint<12>(sext_ln703_1384_fu_12492189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2319_fu_12492213_p2() {
    add_ln703_2319_fu_12492213_p2 = (!sext_ln703_1386_fu_12492209_p1.read().is_01() || !zext_ln703_366_fu_12492179_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1386_fu_12492209_p1.read()) + sc_biguint<13>(zext_ln703_366_fu_12492179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_231_fu_12479269_p2() {
    add_ln703_231_fu_12479269_p2 = (!zext_ln708_989_fu_12406773_p1.read().is_01() || !sext_ln1118_78_fu_12406595_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_989_fu_12406773_p1.read()) + sc_bigint<11>(sext_ln1118_78_fu_12406595_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2320_fu_12509103_p2() {
    add_ln703_2320_fu_12509103_p2 = (!sext_ln703_1387_fu_12509100_p1.read().is_01() || !add_ln703_2313_fu_12509094_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1387_fu_12509100_p1.read()) + sc_biguint<15>(add_ln703_2313_fu_12509094_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2321_fu_12509109_p2() {
    add_ln703_2321_fu_12509109_p2 = (!add_ln703_2320_fu_12509103_p2.read().is_01() || !sext_ln203_341_fu_12503170_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2320_fu_12509103_p2.read()) + sc_bigint<15>(sext_ln203_341_fu_12503170_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2322_fu_12492219_p2() {
    add_ln703_2322_fu_12492219_p2 = (!sext_ln203_342_fu_12447042_p1.read().is_01() || !zext_ln203_119_fu_12447086_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_342_fu_12447042_p1.read()) + sc_biguint<12>(zext_ln203_119_fu_12447086_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2323_fu_12509118_p2() {
    add_ln703_2323_fu_12509118_p2 = (!sext_ln703_1388_fu_12509115_p1.read().is_01() || !add_ln703_2321_fu_12509109_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1388_fu_12509115_p1.read()) + sc_biguint<15>(add_ln703_2321_fu_12509109_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2324_fu_12492225_p2() {
    add_ln703_2324_fu_12492225_p2 = (!sext_ln203_343_fu_12447062_p1.read().is_01() || !zext_ln203_105_fu_12442203_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_343_fu_12447062_p1.read()) + sc_biguint<11>(zext_ln203_105_fu_12442203_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2325_fu_12492235_p2() {
    add_ln703_2325_fu_12492235_p2 = (!zext_ln708_1333_fu_12447010_p1.read().is_01() || !zext_ln708_1334_fu_12447100_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1333_fu_12447010_p1.read()) + sc_biguint<8>(zext_ln708_1334_fu_12447100_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2326_fu_12492245_p2() {
    add_ln703_2326_fu_12492245_p2 = (!zext_ln703_367_fu_12492241_p1.read().is_01() || !sext_ln703_1389_fu_12492231_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_367_fu_12492241_p1.read()) + sc_bigint<12>(sext_ln703_1389_fu_12492231_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2328_fu_12492251_p2() {
    add_ln703_2328_fu_12492251_p2 = (!sext_ln203_320_fu_12443079_p1.read().is_01() || !ap_const_lv12_E80.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_320_fu_12443079_p1.read()) + sc_bigint<12>(ap_const_lv12_E80));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2329_fu_12492261_p2() {
    add_ln703_2329_fu_12492261_p2 = (!sext_ln1118_749_fu_12447134_p1.read().is_01() || !zext_ln708_565_fu_12447158_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_749_fu_12447134_p1.read()) + sc_biguint<12>(zext_ln708_565_fu_12447158_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_232_fu_12479279_p2() {
    add_ln703_232_fu_12479279_p2 = (!sext_ln703_176_fu_12479275_p1.read().is_01() || !zext_ln1118_597_fu_12406627_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_176_fu_12479275_p1.read()) + sc_biguint<12>(zext_ln1118_597_fu_12406627_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2330_fu_12492271_p2() {
    add_ln703_2330_fu_12492271_p2 = (!sext_ln703_1392_fu_12492267_p1.read().is_01() || !sext_ln703_331_fu_12492257_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1392_fu_12492267_p1.read()) + sc_bigint<13>(sext_ln703_331_fu_12492257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2331_fu_12492277_p2() {
    add_ln703_2331_fu_12492277_p2 = (!sext_ln1118_748_fu_12447120_p1.read().is_01() || !zext_ln1118_3007_fu_12443149_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_748_fu_12447120_p1.read()) + sc_biguint<10>(zext_ln1118_3007_fu_12443149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2332_fu_12492287_p2() {
    add_ln703_2332_fu_12492287_p2 = (!sext_ln703_1393_fu_12492283_p1.read().is_01() || !zext_ln1118_3116_fu_12447172_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1393_fu_12492283_p1.read()) + sc_biguint<12>(zext_ln1118_3116_fu_12447172_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2333_fu_12492297_p2() {
    add_ln703_2333_fu_12492297_p2 = (!sext_ln703_1394_fu_12492293_p1.read().is_01() || !add_ln703_2330_fu_12492271_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1394_fu_12492293_p1.read()) + sc_biguint<13>(add_ln703_2330_fu_12492271_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2334_fu_12492303_p2() {
    add_ln703_2334_fu_12492303_p2 = (!add_ln703_2333_fu_12492297_p2.read().is_01() || !zext_ln708_567_fu_12447186_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2333_fu_12492297_p2.read()) + sc_biguint<13>(zext_ln708_567_fu_12447186_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2335_fu_12492309_p2() {
    add_ln703_2335_fu_12492309_p2 = (!zext_ln1118_3117_fu_12447228_p1.read().is_01() || !zext_ln708_1338_fu_12447274_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3117_fu_12447228_p1.read()) + sc_biguint<10>(zext_ln708_1338_fu_12447274_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2336_fu_12509143_p2() {
    add_ln703_2336_fu_12509143_p2 = (!zext_ln703_368_fu_12509140_p1.read().is_01() || !sext_ln1118_735_fu_12503155_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_368_fu_12509140_p1.read()) + sc_bigint<12>(sext_ln1118_735_fu_12503155_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2337_fu_12509153_p2() {
    add_ln703_2337_fu_12509153_p2 = (!sext_ln703_1396_fu_12509149_p1.read().is_01() || !sext_ln703_1395_fu_12509137_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1396_fu_12509149_p1.read()) + sc_bigint<14>(sext_ln703_1395_fu_12509137_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2338_fu_12492315_p2() {
    add_ln703_2338_fu_12492315_p2 = (!zext_ln1118_3120_fu_12447308_p1.read().is_01() || !zext_ln708_1339_fu_12447336_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_3120_fu_12447308_p1.read()) + sc_biguint<9>(zext_ln708_1339_fu_12447336_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2339_fu_12492325_p2() {
    add_ln703_2339_fu_12492325_p2 = (!zext_ln703_369_fu_12492321_p1.read().is_01() || !trunc_ln1118_116_fu_12447278_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_369_fu_12492321_p1.read()) + sc_biguint<10>(trunc_ln1118_116_fu_12447278_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_233_fu_12503956_p2() {
    add_ln703_233_fu_12503956_p2 = (!sext_ln703_177_fu_12503953_p1.read().is_01() || !sext_ln703_175_fu_12503950_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_177_fu_12503953_p1.read()) + sc_bigint<14>(sext_ln703_175_fu_12503950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2340_fu_12492335_p2() {
    add_ln703_2340_fu_12492335_p2 = (!zext_ln708_1336_fu_12447200_p1.read().is_01() || !zext_ln708_1337_fu_12447214_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1336_fu_12447200_p1.read()) + sc_biguint<8>(zext_ln708_1337_fu_12447214_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2341_fu_12492345_p2() {
    add_ln703_2341_fu_12492345_p2 = (!zext_ln703_371_fu_12492341_p1.read().is_01() || !sext_ln1118_750_fu_12447260_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_371_fu_12492341_p1.read()) + sc_bigint<10>(sext_ln1118_750_fu_12447260_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2342_fu_12492355_p2() {
    add_ln703_2342_fu_12492355_p2 = (!sext_ln703_1397_fu_12492351_p1.read().is_01() || !zext_ln703_370_fu_12492331_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1397_fu_12492351_p1.read()) + sc_biguint<12>(zext_ln703_370_fu_12492331_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2343_fu_12509162_p2() {
    add_ln703_2343_fu_12509162_p2 = (!sext_ln703_1398_fu_12509159_p1.read().is_01() || !add_ln703_2337_fu_12509153_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1398_fu_12509159_p1.read()) + sc_biguint<14>(add_ln703_2337_fu_12509153_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2344_fu_12492361_p2() {
    add_ln703_2344_fu_12492361_p2 = (!sext_ln708_134_fu_12447406_p1.read().is_01() || !zext_ln1118_3123_fu_12447374_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_134_fu_12447406_p1.read()) + sc_biguint<12>(zext_ln1118_3123_fu_12447374_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2345_fu_12509171_p2() {
    add_ln703_2345_fu_12509171_p2 = (!sext_ln703_1399_fu_12509168_p1.read().is_01() || !add_ln703_2343_fu_12509162_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1399_fu_12509168_p1.read()) + sc_biguint<14>(add_ln703_2343_fu_12509162_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2346_fu_12492367_p2() {
    add_ln703_2346_fu_12492367_p2 = (!zext_ln708_1341_fu_12447482_p1.read().is_01() || !zext_ln708_1342_fu_12447496_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1341_fu_12447482_p1.read()) + sc_biguint<11>(zext_ln708_1342_fu_12447496_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2347_fu_12492373_p2() {
    add_ln703_2347_fu_12492373_p2 = (!zext_ln1118_3127_fu_12447516_p1.read().is_01() || !zext_ln1118_3129_fu_12447572_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3127_fu_12447516_p1.read()) + sc_biguint<10>(zext_ln1118_3129_fu_12447572_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2348_fu_12492383_p2() {
    add_ln703_2348_fu_12492383_p2 = (!zext_ln703_372_fu_12492379_p1.read().is_01() || !add_ln703_2346_fu_12492367_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_372_fu_12492379_p1.read()) + sc_biguint<11>(add_ln703_2346_fu_12492367_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2349_fu_12509184_p2() {
    add_ln703_2349_fu_12509184_p2 = (!zext_ln703_373_fu_12509181_p1.read().is_01() || !sext_ln703_1400_fu_12509177_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_373_fu_12509181_p1.read()) + sc_bigint<15>(sext_ln703_1400_fu_12509177_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_234_fu_12479285_p2() {
    add_ln703_234_fu_12479285_p2 = (!sext_ln1118_81_fu_12406681_p1.read().is_01() || !sext_ln1118_85_fu_12406745_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_81_fu_12406681_p1.read()) + sc_bigint<11>(sext_ln1118_85_fu_12406745_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2350_fu_12492389_p2() {
    add_ln703_2350_fu_12492389_p2 = (!zext_ln708_1343_fu_12447618_p1.read().is_01() || !sext_ln1118_754_fu_12447586_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1343_fu_12447618_p1.read()) + sc_bigint<11>(sext_ln1118_754_fu_12447586_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2351_fu_12492399_p2() {
    add_ln703_2351_fu_12492399_p2 = (!sext_ln1118_755_fu_12447632_p1.read().is_01() || !sext_ln1118_753_fu_12447558_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_755_fu_12447632_p1.read()) + sc_bigint<11>(sext_ln1118_753_fu_12447558_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2352_fu_12492409_p2() {
    add_ln703_2352_fu_12492409_p2 = (!sext_ln703_1402_fu_12492405_p1.read().is_01() || !sext_ln703_1401_fu_12492395_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1402_fu_12492405_p1.read()) + sc_bigint<12>(sext_ln703_1401_fu_12492395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2353_fu_12492415_p2() {
    add_ln703_2353_fu_12492415_p2 = (!zext_ln1118_3121_fu_12447350_p1.read().is_01() || !zext_ln1118_3125_fu_12447420_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln1118_3121_fu_12447350_p1.read()) + sc_biguint<7>(zext_ln1118_3125_fu_12447420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2354_fu_12492425_p2() {
    add_ln703_2354_fu_12492425_p2 = (!zext_ln708_1340_fu_12447468_p1.read().is_01() || !sext_ln708_135_fu_12447454_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1340_fu_12447468_p1.read()) + sc_bigint<8>(sext_ln708_135_fu_12447454_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2355_fu_12492435_p2() {
    add_ln703_2355_fu_12492435_p2 = (!sext_ln703_1403_fu_12492431_p1.read().is_01() || !zext_ln703_374_fu_12492421_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_1403_fu_12492431_p1.read()) + sc_biguint<9>(zext_ln703_374_fu_12492421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2356_fu_12492445_p2() {
    add_ln703_2356_fu_12492445_p2 = (!sext_ln703_1404_fu_12492441_p1.read().is_01() || !add_ln703_2352_fu_12492409_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1404_fu_12492441_p1.read()) + sc_biguint<12>(add_ln703_2352_fu_12492409_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2357_fu_12509193_p2() {
    add_ln703_2357_fu_12509193_p2 = (!sext_ln703_1405_fu_12509190_p1.read().is_01() || !add_ln703_2349_fu_12509184_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1405_fu_12509190_p1.read()) + sc_biguint<15>(add_ln703_2349_fu_12509184_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2358_fu_12492451_p2() {
    add_ln703_2358_fu_12492451_p2 = (!sext_ln203_328_fu_12444377_p1.read().is_01() || !sext_ln203_346_fu_12447652_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_328_fu_12444377_p1.read()) + sc_bigint<12>(sext_ln203_346_fu_12447652_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_235_fu_12479295_p2() {
    add_ln703_235_fu_12479295_p2 = (!sext_ln703_178_fu_12479291_p1.read().is_01() || !sext_ln1118_79_fu_12406609_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_178_fu_12479291_p1.read()) + sc_bigint<12>(sext_ln1118_79_fu_12406609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2360_fu_12492457_p2() {
    add_ln703_2360_fu_12492457_p2 = (!sext_ln203_347_fu_12447666_p1.read().is_01() || !ap_const_lv12_F40.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_347_fu_12447666_p1.read()) + sc_bigint<12>(ap_const_lv12_F40));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2361_fu_12492463_p2() {
    add_ln703_2361_fu_12492463_p2 = (!add_ln703_2360_fu_12492457_p2.read().is_01() || !zext_ln1118_3133_fu_12447716_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2360_fu_12492457_p2.read()) + sc_biguint<12>(zext_ln1118_3133_fu_12447716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2362_fu_12492469_p2() {
    add_ln703_2362_fu_12492469_p2 = (!sext_ln1118_756_fu_12447702_p1.read().is_01() || !sext_ln1118_757_fu_12447740_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_756_fu_12447702_p1.read()) + sc_bigint<11>(sext_ln1118_757_fu_12447740_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2363_fu_12492475_p2() {
    add_ln703_2363_fu_12492475_p2 = (!add_ln703_2362_fu_12492469_p2.read().is_01() || !zext_ln708_1344_fu_12447772_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2362_fu_12492469_p2.read()) + sc_biguint<11>(zext_ln708_1344_fu_12447772_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2364_fu_12492485_p2() {
    add_ln703_2364_fu_12492485_p2 = (!sext_ln703_1408_fu_12492481_p1.read().is_01() || !add_ln703_2361_fu_12492463_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1408_fu_12492481_p1.read()) + sc_biguint<12>(add_ln703_2361_fu_12492463_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2365_fu_12492495_p2() {
    add_ln703_2365_fu_12492495_p2 = (!sext_ln1118_759_fu_12447820_p1.read().is_01() || !sext_ln708_136_fu_12447834_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_759_fu_12447820_p1.read()) + sc_bigint<12>(sext_ln708_136_fu_12447834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2366_fu_12492505_p2() {
    add_ln703_2366_fu_12492505_p2 = (!sext_ln703_1410_fu_12492501_p1.read().is_01() || !sext_ln703_1409_fu_12492491_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1410_fu_12492501_p1.read()) + sc_bigint<13>(sext_ln703_1409_fu_12492491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2367_fu_12492511_p2() {
    add_ln703_2367_fu_12492511_p2 = (!zext_ln1118_3136_fu_12447806_p1.read().is_01() || !zext_ln1118_3137_fu_12447854_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln1118_3136_fu_12447806_p1.read()) + sc_biguint<8>(zext_ln1118_3137_fu_12447854_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2368_fu_12492521_p2() {
    add_ln703_2368_fu_12492521_p2 = (!sext_ln1118_758_fu_12447786_p1.read().is_01() || !sext_ln1118_760_fu_12447868_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_758_fu_12447786_p1.read()) + sc_bigint<10>(sext_ln1118_760_fu_12447868_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2369_fu_12492531_p2() {
    add_ln703_2369_fu_12492531_p2 = (!sext_ln703_1412_fu_12492527_p1.read().is_01() || !zext_ln703_375_fu_12492517_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1412_fu_12492527_p1.read()) + sc_biguint<11>(zext_ln703_375_fu_12492517_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_236_fu_12479301_p2() {
    add_ln703_236_fu_12479301_p2 = (!sext_ln1118_83_fu_12406715_p1.read().is_01() || !sext_ln1118_87_fu_12406787_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_83_fu_12406715_p1.read()) + sc_bigint<9>(sext_ln1118_87_fu_12406787_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2370_fu_12509218_p2() {
    add_ln703_2370_fu_12509218_p2 = (!sext_ln703_1413_fu_12509215_p1.read().is_01() || !sext_ln703_1411_fu_12509212_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1413_fu_12509215_p1.read()) + sc_bigint<14>(sext_ln703_1411_fu_12509212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2371_fu_12492537_p2() {
    add_ln703_2371_fu_12492537_p2 = (!sext_ln1118_764_fu_12448096_p1.read().is_01() || !zext_ln1118_3138_fu_12447916_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_764_fu_12448096_p1.read()) + sc_biguint<12>(zext_ln1118_3138_fu_12447916_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2372_fu_12509227_p2() {
    add_ln703_2372_fu_12509227_p2 = (!sext_ln703_1414_fu_12509224_p1.read().is_01() || !add_ln703_2370_fu_12509218_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1414_fu_12509224_p1.read()) + sc_biguint<14>(add_ln703_2370_fu_12509218_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2373_fu_12492543_p2() {
    add_ln703_2373_fu_12492543_p2 = (!sext_ln1118_761_fu_12447882_p1.read().is_01() || !sext_ln1118_745_fu_12446776_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_761_fu_12447882_p1.read()) + sc_bigint<11>(sext_ln1118_745_fu_12446776_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2374_fu_12492553_p2() {
    add_ln703_2374_fu_12492553_p2 = (!sext_ln708_137_fu_12447948_p1.read().is_01() || !zext_ln1118_3143_fu_12448082_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_137_fu_12447948_p1.read()) + sc_biguint<11>(zext_ln1118_3143_fu_12448082_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2375_fu_12492563_p2() {
    add_ln703_2375_fu_12492563_p2 = (!sext_ln703_1416_fu_12492559_p1.read().is_01() || !sext_ln703_1415_fu_12492549_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1416_fu_12492559_p1.read()) + sc_bigint<12>(sext_ln703_1415_fu_12492549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2376_fu_12509236_p2() {
    add_ln703_2376_fu_12509236_p2 = (!sext_ln703_1417_fu_12509233_p1.read().is_01() || !add_ln703_2372_fu_12509227_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1417_fu_12509233_p1.read()) + sc_biguint<14>(add_ln703_2372_fu_12509227_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2377_fu_12492569_p2() {
    add_ln703_2377_fu_12492569_p2 = (!sext_ln1118_762_fu_12447902_p1.read().is_01() || !sext_ln708_138_fu_12448000_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_762_fu_12447902_p1.read()) + sc_bigint<10>(sext_ln708_138_fu_12448000_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2378_fu_12492579_p2() {
    add_ln703_2378_fu_12492579_p2 = (!sext_ln1118_766_fu_12448126_p1.read().is_01() || !zext_ln1118_3140_fu_12447962_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_766_fu_12448126_p1.read()) + sc_biguint<9>(zext_ln1118_3140_fu_12447962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2379_fu_12492589_p2() {
    add_ln703_2379_fu_12492589_p2 = (!sext_ln703_1420_fu_12492585_p1.read().is_01() || !sext_ln703_1419_fu_12492575_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1420_fu_12492585_p1.read()) + sc_bigint<11>(sext_ln703_1419_fu_12492575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_237_fu_12479311_p2() {
    add_ln703_237_fu_12479311_p2 = (!sext_ln703_179_fu_12479307_p1.read().is_01() || !sext_ln1118_76_fu_12406561_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_179_fu_12479307_p1.read()) + sc_bigint<10>(sext_ln1118_76_fu_12406561_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2380_fu_12492595_p2() {
    add_ln703_2380_fu_12492595_p2 = (!zext_ln708_1345_fu_12448014_p1.read().is_01() || !zext_ln708_1346_fu_12448048_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1345_fu_12448014_p1.read()) + sc_biguint<8>(zext_ln708_1346_fu_12448048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2381_fu_12492605_p2() {
    add_ln703_2381_fu_12492605_p2 = (!zext_ln708_1347_fu_12448062_p1.read().is_01() || !sext_ln708_139_fu_12448034_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(zext_ln708_1347_fu_12448062_p1.read()) + sc_bigint<7>(sext_ln708_139_fu_12448034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2382_fu_12492615_p2() {
    add_ln703_2382_fu_12492615_p2 = (!sext_ln703_1421_fu_12492611_p1.read().is_01() || !zext_ln703_376_fu_12492601_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_1421_fu_12492611_p1.read()) + sc_biguint<9>(zext_ln703_376_fu_12492601_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2383_fu_12492625_p2() {
    add_ln703_2383_fu_12492625_p2 = (!sext_ln703_1422_fu_12492621_p1.read().is_01() || !add_ln703_2379_fu_12492589_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1422_fu_12492621_p1.read()) + sc_biguint<11>(add_ln703_2379_fu_12492589_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2384_fu_12509249_p2() {
    add_ln703_2384_fu_12509249_p2 = (!sext_ln703_1423_fu_12509246_p1.read().is_01() || !sext_ln703_1418_fu_12509242_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1423_fu_12509246_p1.read()) + sc_bigint<15>(sext_ln703_1418_fu_12509242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2385_fu_12492631_p2() {
    add_ln703_2385_fu_12492631_p2 = (!sext_ln203_349_fu_12448198_p1.read().is_01() || !zext_ln203_120_fu_12448170_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_349_fu_12448198_p1.read()) + sc_biguint<11>(zext_ln203_120_fu_12448170_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2386_fu_12509258_p2() {
    add_ln703_2386_fu_12509258_p2 = (!sext_ln703_1424_fu_12509255_p1.read().is_01() || !add_ln703_2384_fu_12509249_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1424_fu_12509255_p1.read()) + sc_biguint<15>(add_ln703_2384_fu_12509249_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2387_fu_12492637_p2() {
    add_ln703_2387_fu_12492637_p2 = (!sext_ln203_348_fu_12448150_p1.read().is_01() || !zext_ln203_121_fu_12448184_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_348_fu_12448150_p1.read()) + sc_biguint<9>(zext_ln203_121_fu_12448184_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2388_fu_12492647_p2() {
    add_ln703_2388_fu_12492647_p2 = (!sext_ln703_1425_fu_12492643_p1.read().is_01() || !sext_ln203_350_fu_12448232_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1425_fu_12492643_p1.read()) + sc_bigint<10>(sext_ln203_350_fu_12448232_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_238_fu_12479321_p2() {
    add_ln703_238_fu_12479321_p2 = (!sext_ln703_180_fu_12479317_p1.read().is_01() || !add_ln703_235_fu_12479295_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_180_fu_12479317_p1.read()) + sc_biguint<12>(add_ln703_235_fu_12479295_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2390_fu_12492653_p2() {
    add_ln703_2390_fu_12492653_p2 = (!zext_ln203_406_fu_12448246_p1.read().is_01() || !ap_const_lv9_140.is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_406_fu_12448246_p1.read()) + sc_bigint<9>(ap_const_lv9_140));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2391_fu_12492663_p2() {
    add_ln703_2391_fu_12492663_p2 = (!sext_ln203_351_fu_12448260_p1.read().is_01() || !zext_ln703_7_fu_12492659_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_351_fu_12448260_p1.read()) + sc_biguint<12>(zext_ln703_7_fu_12492659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2392_fu_12492673_p2() {
    add_ln703_2392_fu_12492673_p2 = (!sext_ln1118_768_fu_12448274_p1.read().is_01() || !sext_ln1116_74_fu_12448294_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_768_fu_12448274_p1.read()) + sc_bigint<12>(sext_ln1116_74_fu_12448294_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2393_fu_12492683_p2() {
    add_ln703_2393_fu_12492683_p2 = (!sext_ln703_1428_fu_12492679_p1.read().is_01() || !sext_ln703_339_fu_12492669_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1428_fu_12492679_p1.read()) + sc_bigint<13>(sext_ln703_339_fu_12492669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2394_fu_12492689_p2() {
    add_ln703_2394_fu_12492689_p2 = (!sext_ln1116_75_fu_12448313_p1.read().is_01() || !sext_ln1118_769_fu_12448333_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_75_fu_12448313_p1.read()) + sc_bigint<12>(sext_ln1118_769_fu_12448333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2395_fu_12509283_p2() {
    add_ln703_2395_fu_12509283_p2 = (!sext_ln703_1429_fu_12509280_p1.read().is_01() || !sext_ln703_340_fu_12509277_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1429_fu_12509280_p1.read()) + sc_bigint<14>(sext_ln703_340_fu_12509277_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2396_fu_12492695_p2() {
    add_ln703_2396_fu_12492695_p2 = (!sext_ln1118_770_fu_12448375_p1.read().is_01() || !zext_ln1118_3146_fu_12448347_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_770_fu_12448375_p1.read()) + sc_biguint<12>(zext_ln1118_3146_fu_12448347_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2397_fu_12492705_p2() {
    add_ln703_2397_fu_12492705_p2 = (!zext_ln1118_3149_fu_12448395_p1.read().is_01() || !zext_ln1116_290_fu_12448419_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3149_fu_12448395_p1.read()) + sc_biguint<10>(zext_ln1116_290_fu_12448419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2398_fu_12492715_p2() {
    add_ln703_2398_fu_12492715_p2 = (!zext_ln703_377_fu_12492711_p1.read().is_01() || !sext_ln703_1430_fu_12492701_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_377_fu_12492711_p1.read()) + sc_bigint<13>(sext_ln703_1430_fu_12492701_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2399_fu_12509292_p2() {
    add_ln703_2399_fu_12509292_p2 = (!sext_ln703_1431_fu_12509289_p1.read().is_01() || !add_ln703_2395_fu_12509283_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1431_fu_12509289_p1.read()) + sc_biguint<14>(add_ln703_2395_fu_12509283_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_239_fu_12503965_p2() {
    add_ln703_239_fu_12503965_p2 = (!sext_ln703_181_fu_12503962_p1.read().is_01() || !add_ln703_233_fu_12503956_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_181_fu_12503962_p1.read()) + sc_biguint<14>(add_ln703_233_fu_12503956_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_23_fu_12477937_p2() {
    add_ln703_23_fu_12477937_p2 = (!zext_ln203_328_fu_12401571_p1.read().is_01() || !zext_ln203_329_fu_12401694_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_328_fu_12401571_p1.read()) + sc_biguint<10>(zext_ln203_329_fu_12401694_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2400_fu_12492721_p2() {
    add_ln703_2400_fu_12492721_p2 = (!zext_ln1118_3151_fu_12448449_p1.read().is_01() || !sext_ln1116_76_fu_12448487_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3151_fu_12448449_p1.read()) + sc_bigint<12>(sext_ln1116_76_fu_12448487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2401_fu_12509305_p2() {
    add_ln703_2401_fu_12509305_p2 = (!sext_ln703_1432_fu_12509302_p1.read().is_01() || !sext_ln703_341_fu_12509298_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1432_fu_12509302_p1.read()) + sc_bigint<15>(sext_ln703_341_fu_12509298_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2402_fu_12492727_p2() {
    add_ln703_2402_fu_12492727_p2 = (!sext_ln708_140_fu_12448540_p1.read().is_01() || !sext_ln1118_775_fu_12448642_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_140_fu_12448540_p1.read()) + sc_bigint<12>(sext_ln1118_775_fu_12448642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2403_fu_12492737_p2() {
    add_ln703_2403_fu_12492737_p2 = (!trunc_ln1116_14_fu_12448467_p4.read().is_01() || !zext_ln1116_291_fu_12448519_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1116_14_fu_12448467_p4.read()) + sc_biguint<9>(zext_ln1116_291_fu_12448519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2404_fu_12492747_p2() {
    add_ln703_2404_fu_12492747_p2 = (!zext_ln703_378_fu_12492743_p1.read().is_01() || !sext_ln703_1433_fu_12492733_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_378_fu_12492743_p1.read()) + sc_bigint<13>(sext_ln703_1433_fu_12492733_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2405_fu_12509314_p2() {
    add_ln703_2405_fu_12509314_p2 = (!sext_ln703_1434_fu_12509311_p1.read().is_01() || !add_ln703_2401_fu_12509305_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1434_fu_12509311_p1.read()) + sc_biguint<15>(add_ln703_2401_fu_12509305_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2406_fu_12492753_p2() {
    add_ln703_2406_fu_12492753_p2 = (!zext_ln1118_3154_fu_12448568_p1.read().is_01() || !zext_ln1116_292_fu_12448656_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3154_fu_12448568_p1.read()) + sc_biguint<10>(zext_ln1116_292_fu_12448656_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2407_fu_12492763_p2() {
    add_ln703_2407_fu_12492763_p2 = (!zext_ln703_379_fu_12492759_p1.read().is_01() || !zext_ln708_1348_fu_12448554_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_379_fu_12492759_p1.read()) + sc_biguint<11>(zext_ln708_1348_fu_12448554_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2408_fu_12492773_p2() {
    add_ln703_2408_fu_12492773_p2 = (!zext_ln1118_3159_fu_12448684_p1.read().is_01() || !zext_ln1118_3160_fu_12448698_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_3159_fu_12448684_p1.read()) + sc_biguint<9>(zext_ln1118_3160_fu_12448698_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2409_fu_12492783_p2() {
    add_ln703_2409_fu_12492783_p2 = (!sext_ln1118_664_fu_12441881_p1.read().is_01() || !sext_ln1118_773_fu_12448604_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_664_fu_12441881_p1.read()) + sc_bigint<11>(sext_ln1118_773_fu_12448604_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_240_fu_12503971_p2() {
    add_ln703_240_fu_12503971_p2 = (!zext_ln203_13_fu_12502831_p1.read().is_01() || !sext_ln203_36_fu_12502834_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_13_fu_12502831_p1.read()) + sc_bigint<12>(sext_ln203_36_fu_12502834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2410_fu_12492793_p2() {
    add_ln703_2410_fu_12492793_p2 = (!sext_ln703_1435_fu_12492789_p1.read().is_01() || !zext_ln703_381_fu_12492779_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1435_fu_12492789_p1.read()) + sc_biguint<12>(zext_ln703_381_fu_12492779_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2411_fu_12492803_p2() {
    add_ln703_2411_fu_12492803_p2 = (!sext_ln703_1436_fu_12492799_p1.read().is_01() || !zext_ln703_380_fu_12492769_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1436_fu_12492799_p1.read()) + sc_biguint<13>(zext_ln703_380_fu_12492769_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2412_fu_12509323_p2() {
    add_ln703_2412_fu_12509323_p2 = (!sext_ln703_1437_fu_12509320_p1.read().is_01() || !add_ln703_2405_fu_12509314_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1437_fu_12509320_p1.read()) + sc_biguint<15>(add_ln703_2405_fu_12509314_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2413_fu_12509329_p2() {
    add_ln703_2413_fu_12509329_p2 = (!add_ln703_2412_fu_12509323_p2.read().is_01() || !sext_ln203_352_fu_12503173_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2412_fu_12509323_p2.read()) + sc_bigint<15>(sext_ln203_352_fu_12503173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2414_fu_12492809_p2() {
    add_ln703_2414_fu_12492809_p2 = (!sext_ln203_353_fu_12448787_p1.read().is_01() || !zext_ln203_122_fu_12448740_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_353_fu_12448787_p1.read()) + sc_biguint<12>(zext_ln203_122_fu_12448740_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2415_fu_12509342_p2() {
    add_ln703_2415_fu_12509342_p2 = (!sext_ln703_1439_fu_12509339_p1.read().is_01() || !sext_ln703_1438_fu_12509335_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1439_fu_12509339_p1.read()) + sc_bigint<16>(sext_ln703_1438_fu_12509335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2416_fu_12492815_p2() {
    add_ln703_2416_fu_12492815_p2 = (!zext_ln708_1349_fu_12448754_p1.read().is_01() || !zext_ln708_1350_fu_12448768_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1349_fu_12448754_p1.read()) + sc_biguint<11>(zext_ln708_1350_fu_12448768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2417_fu_12492825_p2() {
    add_ln703_2417_fu_12492825_p2 = (!zext_ln708_1351_fu_12448801_p1.read().is_01() || !sext_ln203_354_fu_12448821_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1351_fu_12448801_p1.read()) + sc_bigint<11>(sext_ln203_354_fu_12448821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2418_fu_12492835_p2() {
    add_ln703_2418_fu_12492835_p2 = (!sext_ln703_1440_fu_12492831_p1.read().is_01() || !zext_ln203_115_fu_12446419_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1440_fu_12492831_p1.read()) + sc_biguint<12>(zext_ln203_115_fu_12446419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2419_fu_12492845_p2() {
    add_ln703_2419_fu_12492845_p2 = (!sext_ln703_1441_fu_12492841_p1.read().is_01() || !zext_ln703_382_fu_12492821_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1441_fu_12492841_p1.read()) + sc_biguint<13>(zext_ln703_382_fu_12492821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_241_fu_12503981_p2() {
    add_ln703_241_fu_12503981_p2 = (!sext_ln703_182_fu_12503977_p1.read().is_01() || !add_ln703_239_fu_12503965_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_182_fu_12503977_p1.read()) + sc_biguint<14>(add_ln703_239_fu_12503965_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2421_fu_12492851_p2() {
    add_ln703_2421_fu_12492851_p2 = (!zext_ln708_1353_fu_12448855_p1.read().is_01() || !ap_const_lv11_5D0.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1353_fu_12448855_p1.read()) + sc_bigint<11>(ap_const_lv11_5D0));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2422_fu_12492857_p2() {
    add_ln703_2422_fu_12492857_p2 = (!add_ln703_2421_fu_12492851_p2.read().is_01() || !zext_ln708_1352_fu_12448835_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2421_fu_12492851_p2.read()) + sc_biguint<11>(zext_ln708_1352_fu_12448835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2423_fu_12492867_p2() {
    add_ln703_2423_fu_12492867_p2 = (!sext_ln703_343_fu_12492863_p1.read().is_01() || !sext_ln203_355_fu_12448893_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_343_fu_12492863_p1.read()) + sc_bigint<12>(sext_ln203_355_fu_12448893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2424_fu_12492873_p2() {
    add_ln703_2424_fu_12492873_p2 = (!add_ln703_2423_fu_12492867_p2.read().is_01() || !zext_ln1118_3163_fu_12448913_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2423_fu_12492867_p2.read()) + sc_biguint<12>(zext_ln1118_3163_fu_12448913_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2425_fu_12492883_p2() {
    add_ln703_2425_fu_12492883_p2 = (!zext_ln708_1354_fu_12448927_p1.read().is_01() || !sext_ln1118_674_fu_12442391_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1354_fu_12448927_p1.read()) + sc_bigint<11>(sext_ln1118_674_fu_12442391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2426_fu_12492893_p2() {
    add_ln703_2426_fu_12492893_p2 = (!sext_ln703_1444_fu_12492889_p1.read().is_01() || !sext_ln703_1443_fu_12492879_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1444_fu_12492889_p1.read()) + sc_bigint<13>(sext_ln703_1443_fu_12492879_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2427_fu_12492899_p2() {
    add_ln703_2427_fu_12492899_p2 = (!add_ln703_2426_fu_12492893_p2.read().is_01() || !zext_ln708_575_fu_12448959_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2426_fu_12492893_p2.read()) + sc_biguint<13>(zext_ln708_575_fu_12448959_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2428_fu_12492905_p2() {
    add_ln703_2428_fu_12492905_p2 = (!sext_ln1118_777_fu_12449011_p1.read().is_01() || !sext_ln1118_778_fu_12449031_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_777_fu_12449011_p1.read()) + sc_bigint<12>(sext_ln1118_778_fu_12449031_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2429_fu_12509363_p2() {
    add_ln703_2429_fu_12509363_p2 = (!sext_ln703_1446_fu_12509360_p1.read().is_01() || !sext_ln703_1445_fu_12509357_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1446_fu_12509360_p1.read()) + sc_bigint<14>(sext_ln703_1445_fu_12509357_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_242_fu_12479327_p2() {
    add_ln703_242_fu_12479327_p2 = (!zext_ln203_336_fu_12406829_p1.read().is_01() || !zext_ln203_337_fu_12406957_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_336_fu_12406829_p1.read()) + sc_biguint<9>(zext_ln203_337_fu_12406957_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2430_fu_12492911_p2() {
    add_ln703_2430_fu_12492911_p2 = (!zext_ln1118_3167_fu_12448997_p1.read().is_01() || !zext_ln1118_3103_fu_12446702_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3167_fu_12448997_p1.read()) + sc_biguint<10>(zext_ln1118_3103_fu_12446702_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2431_fu_12492917_p2() {
    add_ln703_2431_fu_12492917_p2 = (!trunc_ln1118_117_fu_12449053_p4.read().is_01() || !zext_ln1118_3165_fu_12448973_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(trunc_ln1118_117_fu_12449053_p4.read()) + sc_biguint<9>(zext_ln1118_3165_fu_12448973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2432_fu_12492927_p2() {
    add_ln703_2432_fu_12492927_p2 = (!zext_ln703_383_fu_12492923_p1.read().is_01() || !add_ln703_2430_fu_12492911_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_383_fu_12492923_p1.read()) + sc_biguint<10>(add_ln703_2430_fu_12492911_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2433_fu_12509372_p2() {
    add_ln703_2433_fu_12509372_p2 = (!zext_ln703_384_fu_12509369_p1.read().is_01() || !add_ln703_2429_fu_12509363_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_384_fu_12509369_p1.read()) + sc_biguint<14>(add_ln703_2429_fu_12509363_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2434_fu_12492933_p2() {
    add_ln703_2434_fu_12492933_p2 = (!sext_ln1118_779_fu_12449095_p1.read().is_01() || !sext_ln1118_780_fu_12449153_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_779_fu_12449095_p1.read()) + sc_bigint<12>(sext_ln1118_780_fu_12449153_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2435_fu_12509381_p2() {
    add_ln703_2435_fu_12509381_p2 = (!sext_ln703_1447_fu_12509378_p1.read().is_01() || !add_ln703_2433_fu_12509372_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1447_fu_12509378_p1.read()) + sc_biguint<14>(add_ln703_2433_fu_12509372_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2436_fu_12492939_p2() {
    add_ln703_2436_fu_12492939_p2 = (!zext_ln708_1329_fu_12446820_p1.read().is_01() || !zext_ln708_1356_fu_12449149_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1329_fu_12446820_p1.read()) + sc_biguint<11>(zext_ln708_1356_fu_12449149_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2437_fu_12492949_p2() {
    add_ln703_2437_fu_12492949_p2 = (!zext_ln703_385_fu_12492945_p1.read().is_01() || !zext_ln708_576_fu_12449109_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_385_fu_12492945_p1.read()) + sc_biguint<12>(zext_ln708_576_fu_12449109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2438_fu_12509394_p2() {
    add_ln703_2438_fu_12509394_p2 = (!zext_ln703_386_fu_12509391_p1.read().is_01() || !sext_ln703_1448_fu_12509387_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_386_fu_12509391_p1.read()) + sc_bigint<15>(sext_ln703_1448_fu_12509387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2439_fu_12492955_p2() {
    add_ln703_2439_fu_12492955_p2 = (!zext_ln708_1358_fu_12449195_p1.read().is_01() || !zext_ln708_1359_fu_12449229_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1358_fu_12449195_p1.read()) + sc_biguint<11>(zext_ln708_1359_fu_12449229_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_243_fu_12479337_p2() {
    add_ln703_243_fu_12479337_p2 = (!zext_ln203_338_fu_12406985_p1.read().is_01() || !zext_ln203_332_fu_12402713_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_338_fu_12406985_p1.read()) + sc_biguint<9>(zext_ln203_332_fu_12402713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2440_fu_12492961_p2() {
    add_ln703_2440_fu_12492961_p2 = (!add_ln703_2439_fu_12492955_p2.read().is_01() || !zext_ln708_1357_fu_12449167_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2439_fu_12492955_p2.read()) + sc_biguint<11>(zext_ln708_1357_fu_12449167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2441_fu_12492971_p2() {
    add_ln703_2441_fu_12492971_p2 = (!zext_ln708_1355_fu_12449129_p1.read().is_01() || !zext_ln1118_3091_fu_12446136_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_1355_fu_12449129_p1.read()) + sc_biguint<10>(zext_ln1118_3091_fu_12446136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2442_fu_12492981_p2() {
    add_ln703_2442_fu_12492981_p2 = (!zext_ln703_388_fu_12492977_p1.read().is_01() || !sext_ln708_142_fu_12449209_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_388_fu_12492977_p1.read()) + sc_bigint<12>(sext_ln708_142_fu_12449209_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2443_fu_12492991_p2() {
    add_ln703_2443_fu_12492991_p2 = (!sext_ln703_1449_fu_12492987_p1.read().is_01() || !zext_ln703_387_fu_12492967_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1449_fu_12492987_p1.read()) + sc_biguint<13>(zext_ln703_387_fu_12492967_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2444_fu_12509403_p2() {
    add_ln703_2444_fu_12509403_p2 = (!sext_ln703_1450_fu_12509400_p1.read().is_01() || !add_ln703_2438_fu_12509394_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1450_fu_12509400_p1.read()) + sc_biguint<15>(add_ln703_2438_fu_12509394_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2445_fu_12509409_p2() {
    add_ln703_2445_fu_12509409_p2 = (!add_ln703_2444_fu_12509403_p2.read().is_01() || !sext_ln203_356_fu_12503176_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2444_fu_12509403_p2.read()) + sc_bigint<15>(sext_ln203_356_fu_12503176_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2446_fu_12492997_p2() {
    add_ln703_2446_fu_12492997_p2 = (!sext_ln203_357_fu_12449253_p1.read().is_01() || !sext_ln203_358_fu_12449335_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_357_fu_12449253_p1.read()) + sc_bigint<12>(sext_ln203_358_fu_12449335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2447_fu_12509418_p2() {
    add_ln703_2447_fu_12509418_p2 = (!sext_ln703_1451_fu_12509415_p1.read().is_01() || !add_ln703_2445_fu_12509409_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1451_fu_12509415_p1.read()) + sc_biguint<15>(add_ln703_2445_fu_12509409_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2448_fu_12493003_p2() {
    add_ln703_2448_fu_12493003_p2 = (!zext_ln708_1360_fu_12449281_p1.read().is_01() || !zext_ln708_1361_fu_12449301_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1360_fu_12449281_p1.read()) + sc_biguint<11>(zext_ln708_1361_fu_12449301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2449_fu_12493013_p2() {
    add_ln703_2449_fu_12493013_p2 = (!sext_ln203_360_fu_12449385_p1.read().is_01() || !sext_ln203_359_fu_12449339_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_360_fu_12449385_p1.read()) + sc_bigint<10>(sext_ln203_359_fu_12449339_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_244_fu_12479347_p2() {
    add_ln703_244_fu_12479347_p2 = (!zext_ln703_50_fu_12479343_p1.read().is_01() || !zext_ln703_49_fu_12479333_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_50_fu_12479343_p1.read()) + sc_biguint<10>(zext_ln703_49_fu_12479333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2450_fu_12493023_p2() {
    add_ln703_2450_fu_12493023_p2 = (!sext_ln703_1453_fu_12493019_p1.read().is_01() || !zext_ln708_1362_fu_12449353_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1453_fu_12493019_p1.read()) + sc_biguint<11>(zext_ln708_1362_fu_12449353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2451_fu_12493033_p2() {
    add_ln703_2451_fu_12493033_p2 = (!sext_ln703_1454_fu_12493029_p1.read().is_01() || !zext_ln703_389_fu_12493009_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1454_fu_12493029_p1.read()) + sc_biguint<13>(zext_ln703_389_fu_12493009_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2453_fu_12493039_p2() {
    add_ln703_2453_fu_12493039_p2 = (!sext_ln203_320_fu_12443079_p1.read().is_01() || !zext_ln203_125_fu_12449405_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_320_fu_12443079_p1.read()) + sc_biguint<12>(zext_ln203_125_fu_12449405_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2454_fu_12493045_p2() {
    add_ln703_2454_fu_12493045_p2 = (!zext_ln1118_3179_fu_12449437_p1.read().is_01() || !ap_const_lv10_3B8.is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3179_fu_12449437_p1.read()) + sc_bigint<10>(ap_const_lv10_3B8));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2455_fu_12493055_p2() {
    add_ln703_2455_fu_12493055_p2 = (!sext_ln703_1456_fu_12493051_p1.read().is_01() || !add_ln703_2453_fu_12493039_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1456_fu_12493051_p1.read()) + sc_biguint<12>(add_ln703_2453_fu_12493039_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2456_fu_12493065_p2() {
    add_ln703_2456_fu_12493065_p2 = (!sext_ln703_348_fu_12493061_p1.read().is_01() || !sext_ln203_361_fu_12449491_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_348_fu_12493061_p1.read()) + sc_bigint<13>(sext_ln203_361_fu_12449491_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2457_fu_12493071_p2() {
    add_ln703_2457_fu_12493071_p2 = (!zext_ln708_1363_fu_12449477_p1.read().is_01() || !sext_ln708_143_fu_12449457_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1363_fu_12449477_p1.read()) + sc_bigint<11>(sext_ln708_143_fu_12449457_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2458_fu_12493081_p2() {
    add_ln703_2458_fu_12493081_p2 = (!sext_ln703_1457_fu_12493077_p1.read().is_01() || !add_ln703_2456_fu_12493065_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1457_fu_12493077_p1.read()) + sc_biguint<13>(add_ln703_2456_fu_12493065_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2459_fu_12493091_p2() {
    add_ln703_2459_fu_12493091_p2 = (!zext_ln708_1364_fu_12449505_p1.read().is_01() || !zext_ln708_1365_fu_12449571_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1364_fu_12449505_p1.read()) + sc_biguint<11>(zext_ln708_1365_fu_12449571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_245_fu_12503994_p2() {
    add_ln703_245_fu_12503994_p2 = (!zext_ln703_51_fu_12503991_p1.read().is_01() || !sext_ln703_183_fu_12503987_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_51_fu_12503991_p1.read()) + sc_bigint<15>(sext_ln703_183_fu_12503987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2460_fu_12493101_p2() {
    add_ln703_2460_fu_12493101_p2 = (!zext_ln703_390_fu_12493097_p1.read().is_01() || !sext_ln703_349_fu_12493087_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_390_fu_12493097_p1.read()) + sc_bigint<14>(sext_ln703_349_fu_12493087_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2461_fu_12493107_p2() {
    add_ln703_2461_fu_12493107_p2 = (!sext_ln708_145_fu_12449557_p1.read().is_01() || !zext_ln1118_3180_fu_12449533_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_145_fu_12449557_p1.read()) + sc_biguint<11>(zext_ln1118_3180_fu_12449533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2462_fu_12493117_p2() {
    add_ln703_2462_fu_12493117_p2 = (!sext_ln703_1458_fu_12493113_p1.read().is_01() || !sext_ln708_144_fu_12449519_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1458_fu_12493113_p1.read()) + sc_bigint<12>(sext_ln708_144_fu_12449519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2463_fu_12493127_p2() {
    add_ln703_2463_fu_12493127_p2 = (!sext_ln703_1459_fu_12493123_p1.read().is_01() || !add_ln703_2460_fu_12493101_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1459_fu_12493123_p1.read()) + sc_biguint<14>(add_ln703_2460_fu_12493101_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2464_fu_12493133_p2() {
    add_ln703_2464_fu_12493133_p2 = (!sext_ln1118_783_fu_12449663_p1.read().is_01() || !sext_ln708_148_fu_12449783_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_783_fu_12449663_p1.read()) + sc_bigint<12>(sext_ln708_148_fu_12449783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2465_fu_12509443_p2() {
    add_ln703_2465_fu_12509443_p2 = (!sext_ln703_1460_fu_12509440_p1.read().is_01() || !sext_ln703_350_fu_12509437_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1460_fu_12509440_p1.read()) + sc_bigint<15>(sext_ln703_350_fu_12509437_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2466_fu_12493139_p2() {
    add_ln703_2466_fu_12493139_p2 = (!zext_ln708_1366_fu_12449621_p1.read().is_01() || !zext_ln708_1367_fu_12449635_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1366_fu_12449621_p1.read()) + sc_biguint<11>(zext_ln708_1367_fu_12449635_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2467_fu_12493149_p2() {
    add_ln703_2467_fu_12493149_p2 = (!zext_ln708_1368_fu_12449649_p1.read().is_01() || !zext_ln708_1369_fu_12449677_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1368_fu_12449649_p1.read()) + sc_biguint<11>(zext_ln708_1369_fu_12449677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2468_fu_12493159_p2() {
    add_ln703_2468_fu_12493159_p2 = (!zext_ln703_392_fu_12493155_p1.read().is_01() || !zext_ln703_391_fu_12493145_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_392_fu_12493155_p1.read()) + sc_biguint<12>(zext_ln703_391_fu_12493145_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2469_fu_12509452_p2() {
    add_ln703_2469_fu_12509452_p2 = (!zext_ln703_393_fu_12509449_p1.read().is_01() || !add_ln703_2465_fu_12509443_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln703_393_fu_12509449_p1.read()) + sc_biguint<15>(add_ln703_2465_fu_12509443_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_246_fu_12479353_p2() {
    add_ln703_246_fu_12479353_p2 = (!sext_ln203_33_fu_12406875_p1.read().is_01() || !sext_ln203_34_fu_12406895_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_33_fu_12406875_p1.read()) + sc_bigint<11>(sext_ln203_34_fu_12406895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2470_fu_12493165_p2() {
    add_ln703_2470_fu_12493165_p2 = (!trunc_ln1118_118_fu_12449787_p4.read().is_01() || !zext_ln1118_3187_fu_12449807_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(trunc_ln1118_118_fu_12449787_p4.read()) + sc_biguint<10>(zext_ln1118_3187_fu_12449807_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2471_fu_12493175_p2() {
    add_ln703_2471_fu_12493175_p2 = (!zext_ln703_394_fu_12493171_p1.read().is_01() || !zext_ln708_1371_fu_12449739_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_394_fu_12493171_p1.read()) + sc_biguint<11>(zext_ln708_1371_fu_12449739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2472_fu_12493185_p2() {
    add_ln703_2472_fu_12493185_p2 = (!zext_ln708_1370_fu_12449715_p1.read().is_01() || !sext_ln708_146_fu_12449607_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_1370_fu_12449715_p1.read()) + sc_bigint<8>(sext_ln708_146_fu_12449607_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2473_fu_12493195_p2() {
    add_ln703_2473_fu_12493195_p2 = (!sext_ln708_147_fu_12449701_p1.read().is_01() || !sext_ln1118_784_fu_12449763_p1.read().is_01())? sc_lv<7>(): (sc_bigint<7>(sext_ln708_147_fu_12449701_p1.read()) + sc_bigint<7>(sext_ln1118_784_fu_12449763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2474_fu_12493205_p2() {
    add_ln703_2474_fu_12493205_p2 = (!sext_ln703_1462_fu_12493201_p1.read().is_01() || !sext_ln703_1461_fu_12493191_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln703_1462_fu_12493201_p1.read()) + sc_bigint<9>(sext_ln703_1461_fu_12493191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2475_fu_12493215_p2() {
    add_ln703_2475_fu_12493215_p2 = (!sext_ln703_1463_fu_12493211_p1.read().is_01() || !zext_ln703_395_fu_12493181_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1463_fu_12493211_p1.read()) + sc_biguint<12>(zext_ln703_395_fu_12493181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2476_fu_12509461_p2() {
    add_ln703_2476_fu_12509461_p2 = (!sext_ln703_1464_fu_12509458_p1.read().is_01() || !add_ln703_2469_fu_12509452_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1464_fu_12509458_p1.read()) + sc_biguint<15>(add_ln703_2469_fu_12509452_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2477_fu_12509467_p2() {
    add_ln703_2477_fu_12509467_p2 = (!add_ln703_2476_fu_12509461_p2.read().is_01() || !sext_ln203_362_fu_12503179_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2476_fu_12509461_p2.read()) + sc_bigint<15>(sext_ln203_362_fu_12503179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2478_fu_12493221_p2() {
    add_ln703_2478_fu_12493221_p2 = (!sext_ln203_342_fu_12447042_p1.read().is_01() || !sext_ln203_366_fu_12449929_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_342_fu_12447042_p1.read()) + sc_bigint<12>(sext_ln203_366_fu_12449929_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2479_fu_12509476_p2() {
    add_ln703_2479_fu_12509476_p2 = (!sext_ln703_1465_fu_12509473_p1.read().is_01() || !add_ln703_2477_fu_12509467_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1465_fu_12509473_p1.read()) + sc_biguint<15>(add_ln703_2477_fu_12509467_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_247_fu_12479363_p2() {
    add_ln703_247_fu_12479363_p2 = (!sext_ln703_186_fu_12479359_p1.read().is_01() || !sext_ln203_32_fu_12406843_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_186_fu_12479359_p1.read()) + sc_bigint<12>(sext_ln203_32_fu_12406843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2480_fu_12493227_p2() {
    add_ln703_2480_fu_12493227_p2 = (!zext_ln708_1372_fu_12449867_p1.read().is_01() || !sext_ln203_363_fu_12449831_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1372_fu_12449867_p1.read()) + sc_bigint<11>(sext_ln203_363_fu_12449831_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2481_fu_12493237_p2() {
    add_ln703_2481_fu_12493237_p2 = (!sext_ln203_367_fu_12449965_p1.read().is_01() || !sext_ln203_364_fu_12449891_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_367_fu_12449965_p1.read()) + sc_bigint<11>(sext_ln203_364_fu_12449891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2482_fu_12493247_p2() {
    add_ln703_2482_fu_12493247_p2 = (!sext_ln703_1468_fu_12493243_p1.read().is_01() || !sext_ln203_365_fu_12449895_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1468_fu_12493243_p1.read()) + sc_bigint<12>(sext_ln203_365_fu_12449895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2483_fu_12493253_p2() {
    add_ln703_2483_fu_12493253_p2 = (!add_ln703_2482_fu_12493247_p2.read().is_01() || !sext_ln703_1467_fu_12493233_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2482_fu_12493247_p2.read()) + sc_bigint<12>(sext_ln703_1467_fu_12493233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2485_fu_12493259_p2() {
    add_ln703_2485_fu_12493259_p2 = (!zext_ln708_1373_fu_12449993_p1.read().is_01() || !sext_ln1118_787_fu_12449979_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1373_fu_12449993_p1.read()) + sc_bigint<11>(sext_ln1118_787_fu_12449979_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2486_fu_12493269_p2() {
    add_ln703_2486_fu_12493269_p2 = (!sext_ln703_1470_fu_12493265_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1470_fu_12493265_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2487_fu_12493275_p2() {
    add_ln703_2487_fu_12493275_p2 = (!zext_ln1118_3198_fu_12450057_p1.read().is_01() || !trunc_ln1118_119_fu_12450109_p4.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3198_fu_12450057_p1.read()) + sc_biguint<10>(trunc_ln1118_119_fu_12450109_p4.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2488_fu_12493285_p2() {
    add_ln703_2488_fu_12493285_p2 = (!zext_ln703_396_fu_12493281_p1.read().is_01() || !add_ln703_2486_fu_12493269_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_396_fu_12493281_p1.read()) + sc_biguint<12>(add_ln703_2486_fu_12493269_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2489_fu_12493291_p2() {
    add_ln703_2489_fu_12493291_p2 = (!zext_ln708_1374_fu_12450129_p1.read().is_01() || !sext_ln1118_788_fu_12450029_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1374_fu_12450129_p1.read()) + sc_bigint<11>(sext_ln1118_788_fu_12450029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_248_fu_12479373_p2() {
    add_ln703_248_fu_12479373_p2 = (!sext_ln203_39_fu_12407057_p1.read().is_01() || !sext_ln203_37_fu_12406971_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_39_fu_12407057_p1.read()) + sc_bigint<11>(sext_ln203_37_fu_12406971_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2490_fu_12493297_p2() {
    add_ln703_2490_fu_12493297_p2 = (!zext_ln708_580_fu_12450095_p1.read().is_01() || !sext_ln708_149_fu_12450081_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_580_fu_12450095_p1.read()) + sc_bigint<9>(sext_ln708_149_fu_12450081_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2491_fu_12493307_p2() {
    add_ln703_2491_fu_12493307_p2 = (!sext_ln703_1471_fu_12493303_p1.read().is_01() || !add_ln703_2489_fu_12493291_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1471_fu_12493303_p1.read()) + sc_biguint<11>(add_ln703_2489_fu_12493291_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2492_fu_12493317_p2() {
    add_ln703_2492_fu_12493317_p2 = (!sext_ln703_1472_fu_12493313_p1.read().is_01() || !add_ln703_2488_fu_12493285_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1472_fu_12493313_p1.read()) + sc_biguint<12>(add_ln703_2488_fu_12493285_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2493_fu_12493323_p2() {
    add_ln703_2493_fu_12493323_p2 = (!sext_ln1118_789_fu_12450165_p1.read().is_01() || !zext_ln1118_3202_fu_12450185_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_789_fu_12450165_p1.read()) + sc_biguint<12>(zext_ln1118_3202_fu_12450185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2494_fu_12509501_p2() {
    add_ln703_2494_fu_12509501_p2 = (!sext_ln703_1474_fu_12509498_p1.read().is_01() || !sext_ln703_1473_fu_12509495_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1474_fu_12509498_p1.read()) + sc_bigint<13>(sext_ln703_1473_fu_12509495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2495_fu_12493329_p2() {
    add_ln703_2495_fu_12493329_p2 = (!sext_ln1118_790_fu_12450199_p1.read().is_01() || !sext_ln1118_791_fu_12450213_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_790_fu_12450199_p1.read()) + sc_bigint<10>(sext_ln1118_791_fu_12450213_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2496_fu_12493339_p2() {
    add_ln703_2496_fu_12493339_p2 = (!sext_ln703_1475_fu_12493335_p1.read().is_01() || !sext_ln1118_793_fu_12450241_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1475_fu_12493335_p1.read()) + sc_bigint<11>(sext_ln1118_793_fu_12450241_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2497_fu_12509510_p2() {
    add_ln703_2497_fu_12509510_p2 = (!sext_ln703_1476_fu_12509507_p1.read().is_01() || !add_ln703_2494_fu_12509501_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1476_fu_12509507_p1.read()) + sc_biguint<13>(add_ln703_2494_fu_12509501_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2498_fu_12509520_p2() {
    add_ln703_2498_fu_12509520_p2 = (!sext_ln1118_798_fu_12503182_p1.read().is_01() || !sext_ln1118_800_fu_12503185_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_798_fu_12503182_p1.read()) + sc_bigint<12>(sext_ln1118_800_fu_12503185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2499_fu_12509530_p2() {
    add_ln703_2499_fu_12509530_p2 = (!sext_ln703_1478_fu_12509526_p1.read().is_01() || !sext_ln703_1477_fu_12509516_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1478_fu_12509526_p1.read()) + sc_bigint<14>(sext_ln703_1477_fu_12509516_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_249_fu_12479379_p2() {
    add_ln703_249_fu_12479379_p2 = (!sext_ln203_35_fu_12406927_p1.read().is_01() || !sext_ln203_38_fu_12407021_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_35_fu_12406927_p1.read()) + sc_bigint<9>(sext_ln203_38_fu_12407021_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_24_fu_12477947_p2() {
    add_ln703_24_fu_12477947_p2 = (!zext_ln703_15_fu_12477943_p1.read().is_01() || !sext_ln203_1_fu_12401488_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_15_fu_12477943_p1.read()) + sc_bigint<12>(sext_ln203_1_fu_12401488_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2500_fu_12493345_p2() {
    add_ln703_2500_fu_12493345_p2 = (!zext_ln1118_3207_fu_12450303_p1.read().is_01() || !zext_ln708_1375_fu_12450409_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_3207_fu_12450303_p1.read()) + sc_biguint<10>(zext_ln708_1375_fu_12450409_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2501_fu_12493351_p2() {
    add_ln703_2501_fu_12493351_p2 = (!add_ln703_2500_fu_12493345_p2.read().is_01() || !zext_ln1118_3206_fu_12450289_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_2500_fu_12493345_p2.read()) + sc_biguint<10>(zext_ln1118_3206_fu_12450289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2502_fu_12509539_p2() {
    add_ln703_2502_fu_12509539_p2 = (!zext_ln703_397_fu_12509536_p1.read().is_01() || !add_ln703_2499_fu_12509530_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_397_fu_12509536_p1.read()) + sc_biguint<14>(add_ln703_2499_fu_12509530_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2503_fu_12493357_p2() {
    add_ln703_2503_fu_12493357_p2 = (!zext_ln1118_3211_fu_12450437_p1.read().is_01() || !sext_ln1118_802_fu_12450499_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_3211_fu_12450437_p1.read()) + sc_bigint<12>(sext_ln1118_802_fu_12450499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2504_fu_12493363_p2() {
    add_ln703_2504_fu_12493363_p2 = (!add_ln703_2503_fu_12493357_p2.read().is_01() || !zext_ln708_583_fu_12450423_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2503_fu_12493357_p2.read()) + sc_biguint<12>(zext_ln708_583_fu_12450423_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2505_fu_12493373_p2() {
    add_ln703_2505_fu_12493373_p2 = (!sext_ln1118_796_fu_12450345_p1.read().is_01() || !sext_ln1118_797_fu_12450377_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_796_fu_12450345_p1.read()) + sc_bigint<9>(sext_ln1118_797_fu_12450377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2506_fu_12493383_p2() {
    add_ln703_2506_fu_12493383_p2 = (!sext_ln703_1481_fu_12493379_p1.read().is_01() || !sext_ln1118_794_fu_12450265_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1481_fu_12493379_p1.read()) + sc_bigint<10>(sext_ln1118_794_fu_12450265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2507_fu_12493393_p2() {
    add_ln703_2507_fu_12493393_p2 = (!sext_ln703_1482_fu_12493389_p1.read().is_01() || !sext_ln703_1480_fu_12493369_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1482_fu_12493389_p1.read()) + sc_bigint<13>(sext_ln703_1480_fu_12493369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2508_fu_12509552_p2() {
    add_ln703_2508_fu_12509552_p2 = (!sext_ln703_1483_fu_12509549_p1.read().is_01() || !sext_ln703_1479_fu_12509545_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1483_fu_12509549_p1.read()) + sc_bigint<15>(sext_ln703_1479_fu_12509545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2509_fu_12509558_p2() {
    add_ln703_2509_fu_12509558_p2 = (!add_ln703_2508_fu_12509552_p2.read().is_01() || !zext_ln203_126_fu_12503188_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2508_fu_12509552_p2.read()) + sc_biguint<15>(zext_ln203_126_fu_12503188_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_250_fu_12479389_p2() {
    add_ln703_250_fu_12479389_p2 = (!sext_ln703_188_fu_12479385_p1.read().is_01() || !add_ln703_248_fu_12479373_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_188_fu_12479385_p1.read()) + sc_biguint<11>(add_ln703_248_fu_12479373_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2510_fu_12493399_p2() {
    add_ln703_2510_fu_12493399_p2 = (!sext_ln203_369_fu_12450611_p1.read().is_01() || !zext_ln203_127_fu_12450569_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_369_fu_12450611_p1.read()) + sc_biguint<12>(zext_ln203_127_fu_12450569_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2511_fu_12509567_p2() {
    add_ln703_2511_fu_12509567_p2 = (!sext_ln703_1484_fu_12509564_p1.read().is_01() || !add_ln703_2509_fu_12509558_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1484_fu_12509564_p1.read()) + sc_biguint<15>(add_ln703_2509_fu_12509558_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0::thread_add_ln703_2512_fu_12493405_p2() {
    add_ln703_2512_fu_12493405_p2 = (!zext_ln708_1376_fu_12450583_p1.read().is_01() || !zext_ln708_1377_fu_12450597_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_1376_fu_12450583_p1.read()) + sc_biguint<11>(zext_ln708_1377_fu_12450597_p1.read()));
}

}

