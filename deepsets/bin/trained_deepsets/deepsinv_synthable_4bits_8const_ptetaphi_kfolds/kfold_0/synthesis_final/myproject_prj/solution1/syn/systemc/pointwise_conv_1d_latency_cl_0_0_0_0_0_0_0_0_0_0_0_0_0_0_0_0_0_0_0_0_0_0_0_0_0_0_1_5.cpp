#include "pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2889_fu_61273_p2() {
    add_ln703_2889_fu_61273_p2 = (!sext_ln703_1605_fu_61239_p1.read().is_01() || !zext_ln703_508_fu_61269_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1605_fu_61239_p1.read()) + sc_biguint<12>(zext_ln703_508_fu_61269_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_288_fu_44162_p2() {
    add_ln703_288_fu_44162_p2 = (!sext_ln203_34_fu_26747_p1.read().is_01() || !sext_ln703_68_fu_44158_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_34_fu_26747_p1.read()) + sc_bigint<11>(sext_ln703_68_fu_44158_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2891_fu_24110_p2() {
    add_ln703_2891_fu_24110_p2 = (!zext_ln708_517_fu_13980_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_517_fu_13980_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2892_fu_24116_p2() {
    add_ln703_2892_fu_24116_p2 = (!zext_ln708_520_fu_14040_p1.read().is_01() || !zext_ln708_519_fu_14012_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_520_fu_14040_p1.read()) + sc_biguint<10>(zext_ln708_519_fu_14012_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2893_fu_24126_p2() {
    add_ln703_2893_fu_24126_p2 = (!add_ln703_2891_fu_24110_p2.read().is_01() || !zext_ln703_509_fu_24122_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2891_fu_24110_p2.read()) + sc_biguint<11>(zext_ln703_509_fu_24122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2894_fu_24136_p2() {
    add_ln703_2894_fu_24136_p2 = (!zext_ln203_209_fu_14068_p1.read().is_01() || !sext_ln703_825_fu_24132_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_209_fu_14068_p1.read()) + sc_bigint<12>(sext_ln703_825_fu_24132_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2895_fu_24146_p2() {
    add_ln703_2895_fu_24146_p2 = (!sext_ln203_434_fu_13684_p1.read().is_01() || !sext_ln703_826_fu_24142_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_434_fu_13684_p1.read()) + sc_bigint<13>(sext_ln703_826_fu_24142_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2896_fu_24152_p2() {
    add_ln703_2896_fu_24152_p2 = (!zext_ln1118_541_fu_14118_p1.read().is_01() || !zext_ln708_524_fu_14104_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_541_fu_14118_p1.read()) + sc_biguint<10>(zext_ln708_524_fu_14104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2897_fu_24162_p2() {
    add_ln703_2897_fu_24162_p2 = (!zext_ln708_522_fu_14088_p1.read().is_01() || !zext_ln703_510_fu_24158_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_522_fu_14088_p1.read()) + sc_biguint<11>(zext_ln703_510_fu_24158_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2898_fu_24172_p2() {
    add_ln703_2898_fu_24172_p2 = (!add_ln703_2895_fu_24146_p2.read().is_01() || !zext_ln703_511_fu_24168_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2895_fu_24146_p2.read()) + sc_biguint<13>(zext_ln703_511_fu_24168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2899_fu_61296_p2() {
    add_ln703_2899_fu_61296_p2 = (!sext_ln708_222_fu_39780_p1.read().is_01() || !zext_ln1118_543_reg_69867.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_222_fu_39780_p1.read()) + sc_biguint<12>(zext_ln1118_543_reg_69867.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2900_fu_61305_p2() {
    add_ln703_2900_fu_61305_p2 = (!sext_ln703_827_fu_61293_p1.read().is_01() || !sext_ln703_1607_fu_61301_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_827_fu_61293_p1.read()) + sc_bigint<14>(sext_ln703_1607_fu_61301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2901_fu_61311_p2() {
    add_ln703_2901_fu_61311_p2 = (!zext_ln203_205_reg_69823.read().is_01() || !sext_ln203_438_fu_39786_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_205_reg_69823.read()) + sc_bigint<10>(sext_ln203_438_fu_39786_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2902_fu_61320_p2() {
    add_ln703_2902_fu_61320_p2 = (!zext_ln1118_544_fu_39792_p1.read().is_01() || !zext_ln1116_162_reg_69835.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_544_fu_39792_p1.read()) + sc_biguint<9>(zext_ln1116_162_reg_69835.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2903_fu_61329_p2() {
    add_ln703_2903_fu_61329_p2 = (!sext_ln703_1608_fu_61316_p1.read().is_01() || !zext_ln703_512_fu_61325_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1608_fu_61316_p1.read()) + sc_biguint<11>(zext_ln703_512_fu_61325_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2904_fu_61339_p2() {
    add_ln703_2904_fu_61339_p2 = (!add_ln703_2900_fu_61305_p2.read().is_01() || !sext_ln703_1609_fu_61335_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2900_fu_61305_p2.read()) + sc_bigint<14>(sext_ln703_1609_fu_61335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2905_fu_61345_p2() {
    add_ln703_2905_fu_61345_p2 = (!zext_ln1118_546_fu_39821_p1.read().is_01() || !add_ln703_2904_fu_61339_p2.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln1118_546_fu_39821_p1.read()) + sc_biguint<14>(add_ln703_2904_fu_61339_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2906_fu_61355_p2() {
    add_ln703_2906_fu_61355_p2 = (!sext_ln1118_405_fu_39969_p1.read().is_01() || !sext_ln1118_403_fu_39854_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_405_fu_39969_p1.read()) + sc_bigint<12>(sext_ln1118_403_fu_39854_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2907_fu_61365_p2() {
    add_ln703_2907_fu_61365_p2 = (!sext_ln708_223_fu_39825_p1.read().is_01() || !sext_ln703_1611_fu_61361_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln708_223_fu_39825_p1.read()) + sc_bigint<13>(sext_ln703_1611_fu_61361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2908_fu_61375_p2() {
    add_ln703_2908_fu_61375_p2 = (!sext_ln703_1610_fu_61351_p1.read().is_01() || !sext_ln703_1612_fu_61371_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1610_fu_61351_p1.read()) + sc_bigint<15>(sext_ln703_1612_fu_61371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2909_fu_61381_p2() {
    add_ln703_2909_fu_61381_p2 = (!zext_ln708_529_fu_39918_p1.read().is_01() || !zext_ln708_528_fu_39914_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_529_fu_39918_p1.read()) + sc_biguint<11>(zext_ln708_528_fu_39914_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_290_fu_17764_p2() {
    add_ln703_290_fu_17764_p2 = (!sext_ln1118_58_fu_1932_p1.read().is_01() || !ap_const_lv10_380.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_58_fu_1932_p1.read()) + sc_bigint<10>(ap_const_lv10_380));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2910_fu_61391_p2() {
    add_ln703_2910_fu_61391_p2 = (!sext_ln1118_404_fu_39937_p1.read().is_01() || !zext_ln1118_548_fu_39835_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_404_fu_39937_p1.read()) + sc_biguint<11>(zext_ln1118_548_fu_39835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2911_fu_61397_p2() {
    add_ln703_2911_fu_61397_p2 = (!sext_ln708_224_fu_39886_p1.read().is_01() || !add_ln703_2910_fu_61391_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_224_fu_39886_p1.read()) + sc_biguint<11>(add_ln703_2910_fu_61391_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2912_fu_61407_p2() {
    add_ln703_2912_fu_61407_p2 = (!zext_ln703_513_fu_61387_p1.read().is_01() || !sext_ln703_1613_fu_61403_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_513_fu_61387_p1.read()) + sc_bigint<13>(sext_ln703_1613_fu_61403_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2913_fu_61417_p2() {
    add_ln703_2913_fu_61417_p2 = (!add_ln703_2908_fu_61375_p2.read().is_01() || !sext_ln703_1614_fu_61413_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2908_fu_61375_p2.read()) + sc_bigint<15>(sext_ln703_1614_fu_61413_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2914_fu_61423_p2() {
    add_ln703_2914_fu_61423_p2 = (!zext_ln203_210_fu_40039_p1.read().is_01() || !add_ln703_2913_fu_61417_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_210_fu_40039_p1.read()) + sc_biguint<15>(add_ln703_2913_fu_61417_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2915_fu_61429_p2() {
    add_ln703_2915_fu_61429_p2 = (!zext_ln1118_536_fu_39723_p1.read().is_01() || !sext_ln203_441_fu_40063_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_536_fu_39723_p1.read()) + sc_bigint<10>(sext_ln203_441_fu_40063_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2916_fu_61439_p2() {
    add_ln703_2916_fu_61439_p2 = (!sext_ln203_439_fu_40001_p1.read().is_01() || !sext_ln703_1615_fu_61435_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_439_fu_40001_p1.read()) + sc_bigint<11>(sext_ln703_1615_fu_61435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2918_fu_24178_p2() {
    add_ln703_2918_fu_24178_p2 = (!sext_ln1118_406_fu_14304_p1.read().is_01() || !ap_const_lv10_380.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_406_fu_14304_p1.read()) + sc_bigint<10>(ap_const_lv10_380));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2919_fu_24188_p2() {
    add_ln703_2919_fu_24188_p2 = (!sext_ln1118_408_fu_14344_p1.read().is_01() || !sext_ln1118_407_fu_14324_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_408_fu_14344_p1.read()) + sc_bigint<9>(sext_ln1118_407_fu_14324_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_291_fu_17774_p2() {
    add_ln703_291_fu_17774_p2 = (!sext_ln1118_60_fu_1972_p1.read().is_01() || !sext_ln1118_59_fu_1952_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_60_fu_1972_p1.read()) + sc_bigint<9>(sext_ln1118_59_fu_1952_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2920_fu_24198_p2() {
    add_ln703_2920_fu_24198_p2 = (!sext_ln703_1618_fu_24184_p1.read().is_01() || !sext_ln703_1619_fu_24194_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1618_fu_24184_p1.read()) + sc_bigint<11>(sext_ln703_1619_fu_24194_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2921_fu_24208_p2() {
    add_ln703_2921_fu_24208_p2 = (!sext_ln1118_410_fu_14448_p1.read().is_01() || !sext_ln703_1620_fu_24204_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_410_fu_14448_p1.read()) + sc_bigint<12>(sext_ln703_1620_fu_24204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2922_fu_24214_p2() {
    add_ln703_2922_fu_24214_p2 = (!zext_ln1118_555_fu_14396_p1.read().is_01() || !sext_ln708_226_fu_14480_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_555_fu_14396_p1.read()) + sc_bigint<11>(sext_ln708_226_fu_14480_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2923_fu_24224_p2() {
    add_ln703_2923_fu_24224_p2 = (!add_ln703_2921_fu_24208_p2.read().is_01() || !sext_ln703_1621_fu_24220_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2921_fu_24208_p2.read()) + sc_bigint<12>(sext_ln703_1621_fu_24220_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2924_fu_24230_p2() {
    add_ln703_2924_fu_24230_p2 = (!sext_ln1118_409_fu_14428_p1.read().is_01() || !zext_ln1118_558_fu_14512_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_409_fu_14428_p1.read()) + sc_biguint<11>(zext_ln1118_558_fu_14512_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2925_fu_24240_p2() {
    add_ln703_2925_fu_24240_p2 = (!zext_ln203_205_fu_13872_p1.read().is_01() || !sext_ln708_225_fu_14364_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_205_fu_13872_p1.read()) + sc_bigint<10>(sext_ln708_225_fu_14364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2926_fu_24250_p2() {
    add_ln703_2926_fu_24250_p2 = (!sext_ln703_1623_fu_24236_p1.read().is_01() || !sext_ln703_1624_fu_24246_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1623_fu_24236_p1.read()) + sc_bigint<12>(sext_ln703_1624_fu_24246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2927_fu_61465_p2() {
    add_ln703_2927_fu_61465_p2 = (!sext_ln703_1622_fu_61459_p1.read().is_01() || !sext_ln703_1625_fu_61462_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1622_fu_61459_p1.read()) + sc_bigint<13>(sext_ln703_1625_fu_61462_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2928_fu_61471_p2() {
    add_ln703_2928_fu_61471_p2 = (!sext_ln1118_416_fu_40227_p1.read().is_01() || !add_ln703_2927_fu_61465_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_416_fu_40227_p1.read()) + sc_biguint<13>(add_ln703_2927_fu_61465_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2929_fu_61481_p2() {
    add_ln703_2929_fu_61481_p2 = (!sext_ln708_227_fu_40150_p1.read().is_01() || !sext_ln1118_413_fu_40118_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_227_fu_40150_p1.read()) + sc_bigint<10>(sext_ln1118_413_fu_40118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_292_fu_17784_p2() {
    add_ln703_292_fu_17784_p2 = (!sext_ln703_71_fu_17770_p1.read().is_01() || !sext_ln703_72_fu_17780_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_71_fu_17770_p1.read()) + sc_bigint<11>(sext_ln703_72_fu_17780_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2930_fu_61491_p2() {
    add_ln703_2930_fu_61491_p2 = (!sext_ln1118_417_fu_40251_p1.read().is_01() || !sext_ln703_1627_fu_61487_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_417_fu_40251_p1.read()) + sc_bigint<11>(sext_ln703_1627_fu_61487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2931_fu_61501_p2() {
    add_ln703_2931_fu_61501_p2 = (!sext_ln703_1626_fu_61477_p1.read().is_01() || !sext_ln703_1628_fu_61497_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1626_fu_61477_p1.read()) + sc_bigint<14>(sext_ln703_1628_fu_61497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2932_fu_61507_p2() {
    add_ln703_2932_fu_61507_p2 = (!sext_ln1118_411_fu_40083_p1.read().is_01() || !sext_ln708_229_fu_40287_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_411_fu_40083_p1.read()) + sc_bigint<10>(sext_ln708_229_fu_40287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2933_fu_61517_p2() {
    add_ln703_2933_fu_61517_p2 = (!zext_ln1118_561_fu_40157_p1.read().is_01() || !sext_ln1118_415_fu_40196_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_561_fu_40157_p1.read()) + sc_bigint<9>(sext_ln1118_415_fu_40196_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2934_fu_61527_p2() {
    add_ln703_2934_fu_61527_p2 = (!sext_ln1118_414_fu_40176_p1.read().is_01() || !sext_ln703_1630_fu_61523_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_414_fu_40176_p1.read()) + sc_bigint<10>(sext_ln703_1630_fu_61523_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2935_fu_61537_p2() {
    add_ln703_2935_fu_61537_p2 = (!sext_ln703_1629_fu_61513_p1.read().is_01() || !sext_ln703_1631_fu_61533_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1629_fu_61513_p1.read()) + sc_bigint<11>(sext_ln703_1631_fu_61533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2936_fu_61547_p2() {
    add_ln703_2936_fu_61547_p2 = (!add_ln703_2931_fu_61501_p2.read().is_01() || !sext_ln703_1632_fu_61543_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2931_fu_61501_p2.read()) + sc_bigint<14>(sext_ln703_1632_fu_61543_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2937_fu_61553_p2() {
    add_ln703_2937_fu_61553_p2 = (!sext_ln203_443_fu_40341_p1.read().is_01() || !add_ln703_2936_fu_61547_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_443_fu_40341_p1.read()) + sc_biguint<14>(add_ln703_2936_fu_61547_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2938_fu_61559_p2() {
    add_ln703_2938_fu_61559_p2 = (!sext_ln203_445_fu_40365_p1.read().is_01() || !sext_ln203_444_fu_40361_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_445_fu_40365_p1.read()) + sc_bigint<11>(sext_ln203_444_fu_40361_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2939_fu_61569_p2() {
    add_ln703_2939_fu_61569_p2 = (!add_ln703_2937_fu_61553_p2.read().is_01() || !sext_ln703_1633_fu_61565_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2937_fu_61553_p2.read()) + sc_bigint<14>(sext_ln703_1633_fu_61565_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_293_fu_17794_p2() {
    add_ln703_293_fu_17794_p2 = (!sext_ln1118_62_fu_2076_p1.read().is_01() || !sext_ln703_73_fu_17790_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_62_fu_2076_p1.read()) + sc_bigint<12>(sext_ln703_73_fu_17790_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2940_fu_61575_p2() {
    add_ln703_2940_fu_61575_p2 = (!zext_ln1118_551_reg_69907.read().is_01() || !sext_ln203_447_fu_40387_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_551_reg_69907.read()) + sc_bigint<11>(sext_ln203_447_fu_40387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2941_fu_61584_p2() {
    add_ln703_2941_fu_61584_p2 = (!zext_ln708_514_fu_39752_p1.read().is_01() || !zext_ln203_211_fu_40305_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_514_fu_39752_p1.read()) + sc_biguint<9>(zext_ln203_211_fu_40305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2942_fu_61594_p2() {
    add_ln703_2942_fu_61594_p2 = (!sext_ln203_442_fu_40309_p1.read().is_01() || !zext_ln703_514_fu_61590_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_442_fu_40309_p1.read()) + sc_biguint<10>(zext_ln703_514_fu_61590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2943_fu_61604_p2() {
    add_ln703_2943_fu_61604_p2 = (!sext_ln703_1634_fu_61580_p1.read().is_01() || !sext_ln703_1635_fu_61600_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1634_fu_61580_p1.read()) + sc_bigint<12>(sext_ln703_1635_fu_61600_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2945_fu_24266_p2() {
    add_ln703_2945_fu_24266_p2 = (!zext_ln203_213_fu_14576_p1.read().is_01() || !sext_ln703_834_fu_24262_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_213_fu_14576_p1.read()) + sc_bigint<9>(sext_ln703_834_fu_24262_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2946_fu_24276_p2() {
    add_ln703_2946_fu_24276_p2 = (!zext_ln203_214_fu_14594_p1.read().is_01() || !sext_ln703_835_fu_24272_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_214_fu_14594_p1.read()) + sc_bigint<10>(sext_ln703_835_fu_24272_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2947_fu_24290_p2() {
    add_ln703_2947_fu_24290_p2 = (!sext_ln703_836_fu_24282_p1.read().is_01() || !zext_ln703_515_fu_24286_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_836_fu_24282_p1.read()) + sc_biguint<11>(zext_ln703_515_fu_24286_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2948_fu_24300_p2() {
    add_ln703_2948_fu_24300_p2 = (!sext_ln1116_65_fu_13688_p1.read().is_01() || !sext_ln703_837_fu_24296_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_65_fu_13688_p1.read()) + sc_bigint<12>(sext_ln703_837_fu_24296_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2949_fu_24310_p2() {
    add_ln703_2949_fu_24310_p2 = (!zext_ln203_217_fu_14634_p1.read().is_01() || !sext_ln703_838_fu_24306_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln203_217_fu_14634_p1.read()) + sc_bigint<13>(sext_ln703_838_fu_24306_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_294_fu_17800_p2() {
    add_ln703_294_fu_17800_p2 = (!zext_ln1118_57_fu_2024_p1.read().is_01() || !sext_ln708_79_fu_2108_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_57_fu_2024_p1.read()) + sc_bigint<11>(sext_ln708_79_fu_2108_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2950_fu_24316_p2() {
    add_ln703_2950_fu_24316_p2 = (!zext_ln708_523_fu_14100_p1.read().is_01() || !sext_ln1118_419_fu_14676_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_523_fu_14100_p1.read()) + sc_bigint<12>(sext_ln1118_419_fu_14676_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2951_fu_24326_p2() {
    add_ln703_2951_fu_24326_p2 = (!add_ln703_2949_fu_24310_p2.read().is_01() || !sext_ln703_1638_fu_24322_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2949_fu_24310_p2.read()) + sc_bigint<13>(sext_ln703_1638_fu_24322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2952_fu_24336_p2() {
    add_ln703_2952_fu_24336_p2 = (!sext_ln203_448_fu_14708_p1.read().is_01() || !sext_ln703_839_fu_24332_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_448_fu_14708_p1.read()) + sc_bigint<14>(sext_ln703_839_fu_24332_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2953_fu_24342_p2() {
    add_ln703_2953_fu_24342_p2 = (!sext_ln708_230_fu_14744_p1.read().is_01() || !zext_ln1118_571_fu_14816_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_230_fu_14744_p1.read()) + sc_biguint<12>(zext_ln1118_571_fu_14816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2954_fu_24352_p2() {
    add_ln703_2954_fu_24352_p2 = (!zext_ln708_539_fu_14784_p1.read().is_01() || !sext_ln703_1639_fu_24348_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_539_fu_14784_p1.read()) + sc_bigint<13>(sext_ln703_1639_fu_24348_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2955_fu_24362_p2() {
    add_ln703_2955_fu_24362_p2 = (!add_ln703_2952_fu_24336_p2.read().is_01() || !sext_ln703_1640_fu_24358_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2952_fu_24336_p2.read()) + sc_bigint<14>(sext_ln703_1640_fu_24358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2956_fu_61627_p2() {
    add_ln703_2956_fu_61627_p2 = (!sext_ln203_452_fu_40438_p1.read().is_01() || !sext_ln1118_421_fu_40435_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_452_fu_40438_p1.read()) + sc_bigint<12>(sext_ln1118_421_fu_40435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2957_fu_61637_p2() {
    add_ln703_2957_fu_61637_p2 = (!sext_ln703_840_fu_61624_p1.read().is_01() || !sext_ln703_1641_fu_61633_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_840_fu_61624_p1.read()) + sc_bigint<15>(sext_ln703_1641_fu_61633_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2958_fu_61643_p2() {
    add_ln703_2958_fu_61643_p2 = (!zext_ln708_542_fu_40427_p1.read().is_01() || !sext_ln708_231_fu_40493_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_542_fu_40427_p1.read()) + sc_bigint<12>(sext_ln708_231_fu_40493_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2959_fu_61653_p2() {
    add_ln703_2959_fu_61653_p2 = (!sext_ln1118_424_fu_40461_p1.read().is_01() || !sext_ln703_1642_fu_61649_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_424_fu_40461_p1.read()) + sc_bigint<13>(sext_ln703_1642_fu_61649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_295_fu_17810_p2() {
    add_ln703_295_fu_17810_p2 = (!add_ln703_293_fu_17794_p2.read().is_01() || !sext_ln703_74_fu_17806_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_293_fu_17794_p2.read()) + sc_bigint<12>(sext_ln703_74_fu_17806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2960_fu_61663_p2() {
    add_ln703_2960_fu_61663_p2 = (!add_ln703_2957_fu_61637_p2.read().is_01() || !sext_ln703_1643_fu_61659_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2957_fu_61637_p2.read()) + sc_bigint<15>(sext_ln703_1643_fu_61659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2961_fu_61669_p2() {
    add_ln703_2961_fu_61669_p2 = (!zext_ln1118_572_fu_40431_p1.read().is_01() || !zext_ln708_529_fu_39918_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_572_fu_40431_p1.read()) + sc_biguint<11>(zext_ln708_529_fu_39918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2962_fu_61679_p2() {
    add_ln703_2962_fu_61679_p2 = (!zext_ln708_545_fu_40521_p1.read().is_01() || !zext_ln703_516_fu_61675_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_545_fu_40521_p1.read()) + sc_biguint<12>(zext_ln703_516_fu_61675_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2963_fu_61689_p2() {
    add_ln703_2963_fu_61689_p2 = (!zext_ln1116_165_fu_39495_p1.read().is_01() || !zext_ln1118_518_fu_39445_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_165_fu_39495_p1.read()) + sc_biguint<9>(zext_ln1118_518_fu_39445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2964_fu_61699_p2() {
    add_ln703_2964_fu_61699_p2 = (!sext_ln203_451_fu_40404_p1.read().is_01() || !zext_ln703_518_fu_61695_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_451_fu_40404_p1.read()) + sc_biguint<11>(zext_ln703_518_fu_61695_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2965_fu_61709_p2() {
    add_ln703_2965_fu_61709_p2 = (!zext_ln703_517_fu_61685_p1.read().is_01() || !sext_ln703_1644_fu_61705_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_517_fu_61685_p1.read()) + sc_bigint<13>(sext_ln703_1644_fu_61705_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2966_fu_61719_p2() {
    add_ln703_2966_fu_61719_p2 = (!add_ln703_2960_fu_61663_p2.read().is_01() || !sext_ln703_1645_fu_61715_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_2960_fu_61663_p2.read()) + sc_bigint<15>(sext_ln703_1645_fu_61715_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2967_fu_61729_p2() {
    add_ln703_2967_fu_61729_p2 = (!mult_3195_V_fu_40573_p1.read().is_01() || !sext_ln703_841_fu_61725_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3195_V_fu_40573_p1.read()) + sc_bigint<16>(sext_ln703_841_fu_61725_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2968_fu_61735_p2() {
    add_ln703_2968_fu_61735_p2 = (!sext_ln203_453_fu_40569_p1.read().is_01() || !sext_ln203_454_fu_40605_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_453_fu_40569_p1.read()) + sc_bigint<12>(sext_ln203_454_fu_40605_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2969_fu_61745_p2() {
    add_ln703_2969_fu_61745_p2 = (!add_ln703_2967_fu_61729_p2.read().is_01() || !sext_ln703_1646_fu_61741_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_2967_fu_61729_p2.read()) + sc_bigint<16>(sext_ln703_1646_fu_61741_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_296_fu_17816_p2() {
    add_ln703_296_fu_17816_p2 = (!sext_ln1118_61_fu_2056_p1.read().is_01() || !zext_ln1118_60_fu_2140_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_61_fu_2056_p1.read()) + sc_biguint<11>(zext_ln1118_60_fu_2140_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2970_fu_61751_p2() {
    add_ln703_2970_fu_61751_p2 = (!zext_ln203_220_fu_40629_p1.read().is_01() || !zext_ln203_219_fu_40537_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_220_fu_40629_p1.read()) + sc_biguint<10>(zext_ln203_219_fu_40537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2971_fu_61761_p2() {
    add_ln703_2971_fu_61761_p2 = (!sext_ln203_440_fu_40059_p1.read().is_01() || !sext_ln203_455_fu_40625_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_440_fu_40059_p1.read()) + sc_bigint<9>(sext_ln203_455_fu_40625_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2972_fu_61771_p2() {
    add_ln703_2972_fu_61771_p2 = (!zext_ln703_519_fu_61757_p1.read().is_01() || !sext_ln703_1647_fu_61767_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_519_fu_61757_p1.read()) + sc_bigint<12>(sext_ln703_1647_fu_61767_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2974_fu_24368_p2() {
    add_ln703_2974_fu_24368_p2 = (!zext_ln1116_176_fu_14902_p1.read().is_01() || !add_ln703_2918_fu_24178_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_176_fu_14902_p1.read()) + sc_bigint<10>(add_ln703_2918_fu_24178_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2975_fu_24378_p2() {
    add_ln703_2975_fu_24378_p2 = (!sext_ln1116_67_fu_14962_p1.read().is_01() || !sext_ln703_1649_fu_24374_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_67_fu_14962_p1.read()) + sc_bigint<11>(sext_ln703_1649_fu_24374_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2976_fu_24384_p2() {
    add_ln703_2976_fu_24384_p2 = (!zext_ln708_546_fu_14926_p1.read().is_01() || !sext_ln708_233_fu_14922_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_546_fu_14926_p1.read()) + sc_bigint<10>(sext_ln708_233_fu_14922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2977_fu_24394_p2() {
    add_ln703_2977_fu_24394_p2 = (!add_ln703_2975_fu_24378_p2.read().is_01() || !sext_ln703_1650_fu_24390_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_2975_fu_24378_p2.read()) + sc_bigint<11>(sext_ln703_1650_fu_24390_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2978_fu_24404_p2() {
    add_ln703_2978_fu_24404_p2 = (!sext_ln1116_69_fu_15022_p1.read().is_01() || !sext_ln1116_68_fu_14990_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_69_fu_15022_p1.read()) + sc_bigint<11>(sext_ln1116_68_fu_14990_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2979_fu_24414_p2() {
    add_ln703_2979_fu_24414_p2 = (!sext_ln703_1651_fu_24400_p1.read().is_01() || !sext_ln703_1652_fu_24410_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1651_fu_24400_p1.read()) + sc_bigint<12>(sext_ln703_1652_fu_24410_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_297_fu_17826_p2() {
    add_ln703_297_fu_17826_p2 = (!zext_ln203_1_fu_1500_p1.read().is_01() || !sext_ln708_78_fu_1992_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_1_fu_1500_p1.read()) + sc_bigint<10>(sext_ln708_78_fu_1992_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2980_fu_61790_p2() {
    add_ln703_2980_fu_61790_p2 = (!zext_ln1116_181_fu_40645_p1.read().is_01() || !sext_ln1118_400_fu_39427_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_181_fu_40645_p1.read()) + sc_bigint<9>(sext_ln1118_400_fu_39427_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2981_fu_61800_p2() {
    add_ln703_2981_fu_61800_p2 = (!sext_ln1116_70_fu_40639_p1.read().is_01() || !sext_ln703_1654_fu_61796_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_70_fu_40639_p1.read()) + sc_bigint<10>(sext_ln703_1654_fu_61796_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2982_fu_61810_p2() {
    add_ln703_2982_fu_61810_p2 = (!sext_ln703_1653_fu_61787_p1.read().is_01() || !sext_ln703_1655_fu_61806_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1653_fu_61787_p1.read()) + sc_bigint<13>(sext_ln703_1655_fu_61806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2983_fu_61816_p2() {
    add_ln703_2983_fu_61816_p2 = (!sext_ln1118_425_reg_70061.read().is_01() || !sext_ln708_234_fu_40670_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_425_reg_70061.read()) + sc_bigint<11>(sext_ln708_234_fu_40670_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2984_fu_61825_p2() {
    add_ln703_2984_fu_61825_p2 = (!add_ln703_2982_fu_61810_p2.read().is_01() || !sext_ln703_1656_fu_61821_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_2982_fu_61810_p2.read()) + sc_bigint<13>(sext_ln703_1656_fu_61821_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2985_fu_61835_p2() {
    add_ln703_2985_fu_61835_p2 = (!zext_ln1118_585_fu_40677_p1.read().is_01() || !sext_ln1118_417_fu_40251_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_585_fu_40677_p1.read()) + sc_bigint<11>(sext_ln1118_417_fu_40251_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2986_fu_61845_p2() {
    add_ln703_2986_fu_61845_p2 = (!sext_ln708_235_fu_40731_p1.read().is_01() || !sext_ln703_1658_fu_61841_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_235_fu_40731_p1.read()) + sc_bigint<12>(sext_ln703_1658_fu_61841_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2987_fu_61855_p2() {
    add_ln703_2987_fu_61855_p2 = (!sext_ln703_1657_fu_61831_p1.read().is_01() || !sext_ln703_1659_fu_61851_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1657_fu_61831_p1.read()) + sc_bigint<14>(sext_ln703_1659_fu_61851_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2988_fu_61861_p2() {
    add_ln703_2988_fu_61861_p2 = (!sext_ln1118_426_fu_40700_p1.read().is_01() || !sext_ln1116_71_fu_40790_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_426_fu_40700_p1.read()) + sc_bigint<10>(sext_ln1116_71_fu_40790_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2989_fu_61871_p2() {
    add_ln703_2989_fu_61871_p2 = (!zext_ln1116_182_fu_40738_p1.read().is_01() || !sext_ln703_1660_fu_61867_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1116_182_fu_40738_p1.read()) + sc_bigint<11>(sext_ln703_1660_fu_61867_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_298_fu_17836_p2() {
    add_ln703_298_fu_17836_p2 = (!sext_ln703_76_fu_17822_p1.read().is_01() || !sext_ln703_77_fu_17832_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_76_fu_17822_p1.read()) + sc_bigint<12>(sext_ln703_77_fu_17832_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2990_fu_61881_p2() {
    add_ln703_2990_fu_61881_p2 = (!zext_ln708_508_fu_39657_p1.read().is_01() || !zext_ln1118_589_fu_40767_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_508_fu_39657_p1.read()) + sc_biguint<9>(zext_ln1118_589_fu_40767_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2991_fu_61891_p2() {
    add_ln703_2991_fu_61891_p2 = (!sext_ln1116_72_fu_40816_p1.read().is_01() || !zext_ln703_520_fu_61887_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_72_fu_40816_p1.read()) + sc_biguint<10>(zext_ln703_520_fu_61887_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2992_fu_61901_p2() {
    add_ln703_2992_fu_61901_p2 = (!sext_ln703_1661_fu_61877_p1.read().is_01() || !sext_ln703_1662_fu_61897_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1661_fu_61877_p1.read()) + sc_bigint<12>(sext_ln703_1662_fu_61897_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2993_fu_61911_p2() {
    add_ln703_2993_fu_61911_p2 = (!add_ln703_2987_fu_61855_p2.read().is_01() || !sext_ln703_1663_fu_61907_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_2987_fu_61855_p2.read()) + sc_bigint<14>(sext_ln703_1663_fu_61907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2994_fu_61917_p2() {
    add_ln703_2994_fu_61917_p2 = (!sext_ln203_456_fu_40848_p1.read().is_01() || !add_ln703_2993_fu_61911_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_456_fu_40848_p1.read()) + sc_biguint<14>(add_ln703_2993_fu_61911_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2995_fu_61923_p2() {
    add_ln703_2995_fu_61923_p2 = (!zext_ln203_212_fu_40391_p1.read().is_01() || !sext_ln203_457_fu_40871_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_212_fu_40391_p1.read()) + sc_bigint<10>(sext_ln203_457_fu_40871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2997_fu_24420_p2() {
    add_ln703_2997_fu_24420_p2 = (!sext_ln708_237_fu_15160_p1.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_237_fu_15160_p1.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2998_fu_24430_p2() {
    add_ln703_2998_fu_24430_p2 = (!sext_ln708_238_fu_15242_p1.read().is_01() || !zext_ln1118_593_fu_15206_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_238_fu_15242_p1.read()) + sc_biguint<12>(zext_ln1118_593_fu_15206_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_2999_fu_24436_p2() {
    add_ln703_2999_fu_24436_p2 = (!zext_ln703_521_fu_24426_p1.read().is_01() || !add_ln703_2998_fu_24430_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_521_fu_24426_p1.read()) + sc_biguint<12>(add_ln703_2998_fu_24430_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_299_fu_44188_p2() {
    add_ln703_299_fu_44188_p2 = (!sext_ln703_75_fu_44182_p1.read().is_01() || !sext_ln703_78_fu_44185_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_75_fu_44182_p1.read()) + sc_bigint<13>(sext_ln703_78_fu_44185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3000_fu_24442_p2() {
    add_ln703_3000_fu_24442_p2 = (!zext_ln708_557_fu_15182_p1.read().is_01() || !zext_ln708_536_fu_14590_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_557_fu_15182_p1.read()) + sc_biguint<8>(zext_ln708_536_fu_14590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3001_fu_24452_p2() {
    add_ln703_3001_fu_24452_p2 = (!zext_ln203_221_fu_15164_p1.read().is_01() || !zext_ln703_522_fu_24448_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_221_fu_15164_p1.read()) + sc_biguint<10>(zext_ln703_522_fu_24448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3002_fu_24462_p2() {
    add_ln703_3002_fu_24462_p2 = (!add_ln703_2999_fu_24436_p2.read().is_01() || !zext_ln703_523_fu_24458_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_2999_fu_24436_p2.read()) + sc_biguint<12>(zext_ln703_523_fu_24458_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3003_fu_24472_p2() {
    add_ln703_3003_fu_24472_p2 = (!sext_ln1118_420_fu_14712_p1.read().is_01() || !sext_ln1118_428_fu_15294_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_420_fu_14712_p1.read()) + sc_bigint<12>(sext_ln1118_428_fu_15294_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3004_fu_24482_p2() {
    add_ln703_3004_fu_24482_p2 = (!zext_ln703_524_fu_24468_p1.read().is_01() || !sext_ln703_1666_fu_24478_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_524_fu_24468_p1.read()) + sc_bigint<14>(sext_ln703_1666_fu_24478_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3005_fu_24488_p2() {
    add_ln703_3005_fu_24488_p2 = (!zext_ln708_531_fu_14368_p1.read().is_01() || !zext_ln708_559_fu_15262_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_531_fu_14368_p1.read()) + sc_biguint<10>(zext_ln708_559_fu_15262_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3006_fu_24498_p2() {
    add_ln703_3006_fu_24498_p2 = (!sext_ln708_239_fu_15318_p1.read().is_01() || !zext_ln703_525_fu_24494_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_239_fu_15318_p1.read()) + sc_biguint<12>(zext_ln703_525_fu_24494_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3007_fu_24508_p2() {
    add_ln703_3007_fu_24508_p2 = (!add_ln703_3004_fu_24482_p2.read().is_01() || !sext_ln703_1667_fu_24504_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3004_fu_24482_p2.read()) + sc_bigint<14>(sext_ln703_1667_fu_24504_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3008_fu_24514_p2() {
    add_ln703_3008_fu_24514_p2 = (!sext_ln1118_429_fu_15370_p1.read().is_01() || !zext_ln203_222_fu_15338_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_429_fu_15370_p1.read()) + sc_biguint<12>(zext_ln203_222_fu_15338_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3009_fu_24524_p2() {
    add_ln703_3009_fu_24524_p2 = (!add_ln703_3007_fu_24508_p2.read().is_01() || !sext_ln703_1668_fu_24520_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3007_fu_24508_p2.read()) + sc_bigint<14>(sext_ln703_1668_fu_24520_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_300_fu_44194_p2() {
    add_ln703_300_fu_44194_p2 = (!sext_ln1118_68_fu_26973_p1.read().is_01() || !add_ln703_299_fu_44188_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_68_fu_26973_p1.read()) + sc_biguint<13>(add_ln703_299_fu_44188_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3010_fu_61946_p2() {
    add_ln703_3010_fu_61946_p2 = (!sext_ln1118_433_fu_40993_p1.read().is_01() || !sext_ln1118_432_fu_40969_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_433_fu_40993_p1.read()) + sc_bigint<12>(sext_ln1118_432_fu_40969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3011_fu_61956_p2() {
    add_ln703_3011_fu_61956_p2 = (!sext_ln1118_431_fu_40950_p1.read().is_01() || !sext_ln703_1670_fu_61952_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_431_fu_40950_p1.read()) + sc_bigint<13>(sext_ln703_1670_fu_61952_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3012_fu_61966_p2() {
    add_ln703_3012_fu_61966_p2 = (!sext_ln703_1669_fu_61943_p1.read().is_01() || !sext_ln703_1671_fu_61962_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1669_fu_61943_p1.read()) + sc_bigint<15>(sext_ln703_1671_fu_61962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3013_fu_61972_p2() {
    add_ln703_3013_fu_61972_p2 = (!sext_ln708_240_fu_40894_p1.read().is_01() || !zext_ln1118_598_fu_40926_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_240_fu_40894_p1.read()) + sc_biguint<12>(zext_ln1118_598_fu_40926_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3014_fu_61978_p2() {
    add_ln703_3014_fu_61978_p2 = (!zext_ln1118_571_reg_69988.read().is_01() || !add_ln703_3013_fu_61972_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_571_reg_69988.read()) + sc_biguint<12>(add_ln703_3013_fu_61972_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3015_fu_61987_p2() {
    add_ln703_3015_fu_61987_p2 = (!zext_ln1118_589_fu_40767_p1.read().is_01() || !zext_ln708_505_fu_39492_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_589_fu_40767_p1.read()) + sc_biguint<9>(zext_ln708_505_fu_39492_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3016_fu_61997_p2() {
    add_ln703_3016_fu_61997_p2 = (!sext_ln1118_430_fu_40946_p1.read().is_01() || !zext_ln703_526_fu_61993_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_430_fu_40946_p1.read()) + sc_biguint<11>(zext_ln703_526_fu_61993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3017_fu_62007_p2() {
    add_ln703_3017_fu_62007_p2 = (!sext_ln703_1672_fu_61983_p1.read().is_01() || !sext_ln703_1673_fu_62003_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1672_fu_61983_p1.read()) + sc_bigint<13>(sext_ln703_1673_fu_62003_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3018_fu_62017_p2() {
    add_ln703_3018_fu_62017_p2 = (!add_ln703_3012_fu_61966_p2.read().is_01() || !sext_ln703_1674_fu_62013_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3012_fu_61966_p2.read()) + sc_bigint<15>(sext_ln703_1674_fu_62013_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3019_fu_62023_p2() {
    add_ln703_3019_fu_62023_p2 = (!sext_ln203_459_fu_41016_p1.read().is_01() || !add_ln703_3018_fu_62017_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_459_fu_41016_p1.read()) + sc_biguint<15>(add_ln703_3018_fu_62017_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_301_fu_44204_p2() {
    add_ln703_301_fu_44204_p2 = (!sext_ln708_80_fu_26896_p1.read().is_01() || !sext_ln1118_65_fu_26864_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_80_fu_26896_p1.read()) + sc_bigint<10>(sext_ln1118_65_fu_26864_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3020_fu_62033_p2() {
    add_ln703_3020_fu_62033_p2 = (!sext_ln203_446_fu_40383_p1.read().is_01() || !sext_ln203_460_fu_41050_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_446_fu_40383_p1.read()) + sc_bigint<12>(sext_ln203_460_fu_41050_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3021_fu_62043_p2() {
    add_ln703_3021_fu_62043_p2 = (!sext_ln703_1675_fu_62029_p1.read().is_01() || !sext_ln703_1676_fu_62039_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1675_fu_62029_p1.read()) + sc_bigint<16>(sext_ln703_1676_fu_62039_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3022_fu_62049_p2() {
    add_ln703_3022_fu_62049_p2 = (!zext_ln203_218_fu_40533_p1.read().is_01() || !sext_ln203_463_fu_41109_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_218_fu_40533_p1.read()) + sc_bigint<11>(sext_ln203_463_fu_41109_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3023_fu_62059_p2() {
    add_ln703_3023_fu_62059_p2 = (!zext_ln708_562_fu_41078_p1.read().is_01() || !zext_ln708_561_fu_41030_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_562_fu_41078_p1.read()) + sc_biguint<8>(zext_ln708_561_fu_41030_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3024_fu_62069_p2() {
    add_ln703_3024_fu_62069_p2 = (!sext_ln203_462_fu_41074_p1.read().is_01() || !zext_ln703_527_fu_62065_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_462_fu_41074_p1.read()) + sc_biguint<10>(zext_ln703_527_fu_62065_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3025_fu_62079_p2() {
    add_ln703_3025_fu_62079_p2 = (!sext_ln703_1677_fu_62055_p1.read().is_01() || !sext_ln703_1678_fu_62075_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1677_fu_62055_p1.read()) + sc_bigint<12>(sext_ln703_1678_fu_62075_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3027_fu_24542_p2() {
    add_ln703_3027_fu_24542_p2 = (!zext_ln708_556_fu_15168_p1.read().is_01() || !zext_ln703_528_fu_24538_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_556_fu_15168_p1.read()) + sc_biguint<9>(zext_ln703_528_fu_24538_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3028_fu_24552_p2() {
    add_ln703_3028_fu_24552_p2 = (!sext_ln203_464_fu_15438_p1.read().is_01() || !zext_ln703_529_fu_24548_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_464_fu_15438_p1.read()) + sc_biguint<12>(zext_ln703_529_fu_24548_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3029_fu_24558_p2() {
    add_ln703_3029_fu_24558_p2 = (!sext_ln1118_434_fu_15462_p1.read().is_01() || !add_ln703_3028_fu_24552_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_434_fu_15462_p1.read()) + sc_biguint<12>(add_ln703_3028_fu_24552_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_302_fu_44214_p2() {
    add_ln703_302_fu_44214_p2 = (!sext_ln1118_69_fu_26997_p1.read().is_01() || !sext_ln703_80_fu_44210_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_69_fu_26997_p1.read()) + sc_bigint<11>(sext_ln703_80_fu_44210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3030_fu_24568_p2() {
    add_ln703_3030_fu_24568_p2 = (!zext_ln1118_606_fu_15494_p1.read().is_01() || !sext_ln708_241_fu_15482_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_606_fu_15494_p1.read()) + sc_bigint<11>(sext_ln708_241_fu_15482_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3031_fu_24578_p2() {
    add_ln703_3031_fu_24578_p2 = (!sext_ln703_1680_fu_24564_p1.read().is_01() || !sext_ln703_1681_fu_24574_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1680_fu_24564_p1.read()) + sc_bigint<13>(sext_ln703_1681_fu_24574_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3032_fu_24588_p2() {
    add_ln703_3032_fu_24588_p2 = (!sext_ln1118_436_fu_15546_p1.read().is_01() || !sext_ln1118_435_fu_15514_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_436_fu_15546_p1.read()) + sc_bigint<12>(sext_ln1118_435_fu_15514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3033_fu_24598_p2() {
    add_ln703_3033_fu_24598_p2 = (!sext_ln703_851_fu_24584_p1.read().is_01() || !sext_ln703_1682_fu_24594_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_851_fu_24584_p1.read()) + sc_bigint<14>(sext_ln703_1682_fu_24594_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3034_fu_62095_p2() {
    add_ln703_3034_fu_62095_p2 = (!zext_ln1118_610_fu_41122_p1.read().is_01() || !sext_ln1118_437_fu_41125_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_610_fu_41122_p1.read()) + sc_bigint<11>(sext_ln1118_437_fu_41125_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3035_fu_62105_p2() {
    add_ln703_3035_fu_62105_p2 = (!sext_ln708_242_fu_41116_p1.read().is_01() || !sext_ln703_1683_fu_62101_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_242_fu_41116_p1.read()) + sc_bigint<12>(sext_ln703_1683_fu_62101_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3036_fu_62115_p2() {
    add_ln703_3036_fu_62115_p2 = (!add_ln703_3033_reg_71057.read().is_01() || !sext_ln703_1684_fu_62111_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3033_reg_71057.read()) + sc_bigint<14>(sext_ln703_1684_fu_62111_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3037_fu_62120_p2() {
    add_ln703_3037_fu_62120_p2 = (!sext_ln708_244_fu_41203_p1.read().is_01() || !add_ln703_3036_fu_62115_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln708_244_fu_41203_p1.read()) + sc_biguint<14>(add_ln703_3036_fu_62115_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3038_fu_62130_p2() {
    add_ln703_3038_fu_62130_p2 = (!sext_ln1118_439_fu_41243_p1.read().is_01() || !sext_ln708_243_fu_41147_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_439_fu_41243_p1.read()) + sc_bigint<11>(sext_ln708_243_fu_41147_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3039_fu_62140_p2() {
    add_ln703_3039_fu_62140_p2 = (!sext_ln1118_438_fu_41128_p1.read().is_01() || !sext_ln703_1686_fu_62136_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_438_fu_41128_p1.read()) + sc_bigint<12>(sext_ln703_1686_fu_62136_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_303_fu_44224_p2() {
    add_ln703_303_fu_44224_p2 = (!sext_ln703_79_fu_44200_p1.read().is_01() || !sext_ln703_81_fu_44220_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_79_fu_44200_p1.read()) + sc_bigint<14>(sext_ln703_81_fu_44220_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3040_fu_62150_p2() {
    add_ln703_3040_fu_62150_p2 = (!sext_ln703_1685_fu_62126_p1.read().is_01() || !sext_ln703_1687_fu_62146_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1685_fu_62126_p1.read()) + sc_bigint<15>(sext_ln703_1687_fu_62146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3041_fu_62156_p2() {
    add_ln703_3041_fu_62156_p2 = (!sext_ln1118_412_fu_40114_p1.read().is_01() || !zext_ln203_223_fu_41223_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_412_fu_40114_p1.read()) + sc_biguint<11>(zext_ln203_223_fu_41223_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3042_fu_62166_p2() {
    add_ln703_3042_fu_62166_p2 = (!zext_ln1118_611_fu_41171_p1.read().is_01() || !sext_ln703_1688_fu_62162_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_611_fu_41171_p1.read()) + sc_bigint<12>(sext_ln703_1688_fu_62162_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3043_fu_62172_p2() {
    add_ln703_3043_fu_62172_p2 = (!zext_ln1118_526_fu_39535_p1.read().is_01() || !sext_ln1118_414_fu_40176_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_526_fu_39535_p1.read()) + sc_bigint<10>(sext_ln1118_414_fu_40176_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3044_fu_62178_p2() {
    add_ln703_3044_fu_62178_p2 = (!sext_ln203_450_fu_40401_p1.read().is_01() || !add_ln703_3043_fu_62172_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_450_fu_40401_p1.read()) + sc_biguint<10>(add_ln703_3043_fu_62172_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3045_fu_62188_p2() {
    add_ln703_3045_fu_62188_p2 = (!add_ln703_3042_fu_62166_p2.read().is_01() || !sext_ln703_1689_fu_62184_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3042_fu_62166_p2.read()) + sc_bigint<12>(sext_ln703_1689_fu_62184_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3046_fu_62198_p2() {
    add_ln703_3046_fu_62198_p2 = (!add_ln703_3040_fu_62150_p2.read().is_01() || !sext_ln703_1690_fu_62194_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3040_fu_62150_p2.read()) + sc_bigint<15>(sext_ln703_1690_fu_62194_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3047_fu_62204_p2() {
    add_ln703_3047_fu_62204_p2 = (!sext_ln203_465_fu_41284_p1.read().is_01() || !add_ln703_3046_fu_62198_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_465_fu_41284_p1.read()) + sc_biguint<15>(add_ln703_3046_fu_62198_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3048_fu_62210_p2() {
    add_ln703_3048_fu_62210_p2 = (!sext_ln203_471_fu_41441_p1.read().is_01() || !sext_ln203_469_fu_41395_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_471_fu_41441_p1.read()) + sc_bigint<12>(sext_ln203_469_fu_41395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3049_fu_62220_p2() {
    add_ln703_3049_fu_62220_p2 = (!add_ln703_3047_fu_62204_p2.read().is_01() || !sext_ln703_1691_fu_62216_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3047_fu_62204_p2.read()) + sc_bigint<15>(sext_ln703_1691_fu_62216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_304_fu_44230_p2() {
    add_ln703_304_fu_44230_p2 = (!sext_ln1118_63_fu_26829_p1.read().is_01() || !sext_ln708_82_fu_27033_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_63_fu_26829_p1.read()) + sc_bigint<10>(sext_ln708_82_fu_27033_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3050_fu_62226_p2() {
    add_ln703_3050_fu_62226_p2 = (!zext_ln203_224_fu_41328_p1.read().is_01() || !sext_ln203_466_fu_41316_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_224_fu_41328_p1.read()) + sc_bigint<11>(sext_ln203_466_fu_41316_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3051_fu_62236_p2() {
    add_ln703_3051_fu_62236_p2 = (!sext_ln203_470_fu_41399_p1.read().is_01() || !sext_ln203_468_fu_41352_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_470_fu_41399_p1.read()) + sc_bigint<9>(sext_ln203_468_fu_41352_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3052_fu_62246_p2() {
    add_ln703_3052_fu_62246_p2 = (!zext_ln203_225_fu_41364_p1.read().is_01() || !sext_ln703_1693_fu_62242_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_225_fu_41364_p1.read()) + sc_bigint<11>(sext_ln703_1693_fu_62242_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3053_fu_62256_p2() {
    add_ln703_3053_fu_62256_p2 = (!sext_ln703_1692_fu_62232_p1.read().is_01() || !sext_ln703_1694_fu_62252_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1692_fu_62232_p1.read()) + sc_bigint<12>(sext_ln703_1694_fu_62252_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3055_fu_24604_p2() {
    add_ln703_3055_fu_24604_p2 = (!sext_ln203_472_fu_15660_p1.read().is_01() || !ap_const_lv12_180.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_472_fu_15660_p1.read()) + sc_biguint<12>(ap_const_lv12_180));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3056_fu_24614_p2() {
    add_ln703_3056_fu_24614_p2 = (!sext_ln203_473_fu_15680_p1.read().is_01() || !sext_ln703_854_fu_24610_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_473_fu_15680_p1.read()) + sc_bigint<13>(sext_ln703_854_fu_24610_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3057_fu_24620_p2() {
    add_ln703_3057_fu_24620_p2 = (!zext_ln1118_618_fu_15692_p1.read().is_01() || !sext_ln708_218_fu_13628_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_618_fu_15692_p1.read()) + sc_bigint<12>(sext_ln708_218_fu_13628_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3058_fu_24630_p2() {
    add_ln703_3058_fu_24630_p2 = (!add_ln703_3056_fu_24614_p2.read().is_01() || !sext_ln703_1697_fu_24626_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3056_fu_24614_p2.read()) + sc_bigint<13>(sext_ln703_1697_fu_24626_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3059_fu_24640_p2() {
    add_ln703_3059_fu_24640_p2 = (!sext_ln203_474_fu_15724_p1.read().is_01() || !sext_ln703_855_fu_24636_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_474_fu_15724_p1.read()) + sc_bigint<14>(sext_ln703_855_fu_24636_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_305_fu_44240_p2() {
    add_ln703_305_fu_44240_p2 = (!zext_ln1118_63_fu_26903_p1.read().is_01() || !sext_ln1118_67_fu_26942_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_63_fu_26903_p1.read()) + sc_bigint<9>(sext_ln1118_67_fu_26942_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3060_fu_24646_p2() {
    add_ln703_3060_fu_24646_p2 = (!sext_ln1118_442_fu_15748_p1.read().is_01() || !sext_ln1118_443_fu_15768_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_442_fu_15748_p1.read()) + sc_bigint<11>(sext_ln1118_443_fu_15768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3061_fu_24656_p2() {
    add_ln703_3061_fu_24656_p2 = (!sext_ln708_245_fu_15788_p1.read().is_01() || !sext_ln703_1698_fu_24652_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_245_fu_15788_p1.read()) + sc_bigint<12>(sext_ln703_1698_fu_24652_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3062_fu_24666_p2() {
    add_ln703_3062_fu_24666_p2 = (!add_ln703_3059_fu_24640_p2.read().is_01() || !sext_ln703_1699_fu_24662_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3059_fu_24640_p2.read()) + sc_bigint<14>(sext_ln703_1699_fu_24662_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3063_fu_24672_p2() {
    add_ln703_3063_fu_24672_p2 = (!sext_ln1118_447_fu_15888_p1.read().is_01() || !add_ln703_3062_fu_24666_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_447_fu_15888_p1.read()) + sc_biguint<14>(add_ln703_3062_fu_24666_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3064_fu_24678_p2() {
    add_ln703_3064_fu_24678_p2 = (!zext_ln1118_621_fu_15812_p1.read().is_01() || !sext_ln708_246_fu_15940_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_621_fu_15812_p1.read()) + sc_bigint<12>(sext_ln708_246_fu_15940_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3065_fu_24688_p2() {
    add_ln703_3065_fu_24688_p2 = (!sext_ln1118_448_fu_15920_p1.read().is_01() || !sext_ln703_1701_fu_24684_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_448_fu_15920_p1.read()) + sc_bigint<13>(sext_ln703_1701_fu_24684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3066_fu_62282_p2() {
    add_ln703_3066_fu_62282_p2 = (!sext_ln703_1700_fu_62276_p1.read().is_01() || !sext_ln703_1702_fu_62279_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1700_fu_62276_p1.read()) + sc_bigint<15>(sext_ln703_1702_fu_62279_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3067_fu_62288_p2() {
    add_ln703_3067_fu_62288_p2 = (!sext_ln1118_446_fu_41448_p1.read().is_01() || !sext_ln1118_444_fu_41445_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_446_fu_41448_p1.read()) + sc_bigint<11>(sext_ln1118_444_fu_41445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3068_fu_62298_p2() {
    add_ln703_3068_fu_62298_p2 = (!zext_ln1118_624_fu_41451_p1.read().is_01() || !sext_ln203_449_fu_40398_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_624_fu_41451_p1.read()) + sc_bigint<9>(sext_ln203_449_fu_40398_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3069_fu_62308_p2() {
    add_ln703_3069_fu_62308_p2 = (!sext_ln1118_445_reg_70160.read().is_01() || !sext_ln703_1704_fu_62304_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_445_reg_70160.read()) + sc_bigint<10>(sext_ln703_1704_fu_62304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_306_fu_44250_p2() {
    add_ln703_306_fu_44250_p2 = (!sext_ln1118_66_fu_26922_p1.read().is_01() || !sext_ln703_83_fu_44246_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_66_fu_26922_p1.read()) + sc_bigint<10>(sext_ln703_83_fu_44246_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3070_fu_62317_p2() {
    add_ln703_3070_fu_62317_p2 = (!sext_ln703_1703_fu_62294_p1.read().is_01() || !sext_ln703_1705_fu_62313_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1703_fu_62294_p1.read()) + sc_bigint<12>(sext_ln703_1705_fu_62313_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3071_fu_62327_p2() {
    add_ln703_3071_fu_62327_p2 = (!add_ln703_3066_fu_62282_p2.read().is_01() || !sext_ln703_1706_fu_62323_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3066_fu_62282_p2.read()) + sc_bigint<15>(sext_ln703_1706_fu_62323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3072_fu_62333_p2() {
    add_ln703_3072_fu_62333_p2 = (!sext_ln203_477_fu_41573_p1.read().is_01() || !sext_ln203_476_fu_41549_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_477_fu_41573_p1.read()) + sc_bigint<12>(sext_ln203_476_fu_41549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3073_fu_62343_p2() {
    add_ln703_3073_fu_62343_p2 = (!add_ln703_3071_fu_62327_p2.read().is_01() || !sext_ln703_1707_fu_62339_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3071_fu_62327_p2.read()) + sc_bigint<15>(sext_ln703_1707_fu_62339_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3074_fu_62353_p2() {
    add_ln703_3074_fu_62353_p2 = (!sext_ln203_480_fu_41667_p1.read().is_01() || !sext_ln203_479_fu_41609_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_480_fu_41667_p1.read()) + sc_bigint<12>(sext_ln203_479_fu_41609_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3075_fu_62363_p2() {
    add_ln703_3075_fu_62363_p2 = (!zext_ln203_226_fu_41507_p1.read().is_01() || !sext_ln203_481_fu_41699_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_226_fu_41507_p1.read()) + sc_bigint<12>(sext_ln203_481_fu_41699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3076_fu_62373_p2() {
    add_ln703_3076_fu_62373_p2 = (!sext_ln703_1709_fu_62359_p1.read().is_01() || !sext_ln703_1710_fu_62369_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1709_fu_62359_p1.read()) + sc_bigint<13>(sext_ln703_1710_fu_62369_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3077_fu_62383_p2() {
    add_ln703_3077_fu_62383_p2 = (!sext_ln703_1708_fu_62349_p1.read().is_01() || !sext_ln703_1711_fu_62379_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1708_fu_62349_p1.read()) + sc_bigint<16>(sext_ln703_1711_fu_62379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3078_fu_62389_p2() {
    add_ln703_3078_fu_62389_p2 = (!sext_ln203_478_fu_41577_p1.read().is_01() || !sext_ln203_475_fu_41473_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_478_fu_41577_p1.read()) + sc_bigint<10>(sext_ln203_475_fu_41473_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3079_fu_62399_p2() {
    add_ln703_3079_fu_62399_p2 = (!zext_ln203_227_fu_41647_p1.read().is_01() || !sext_ln703_1712_fu_62395_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_227_fu_41647_p1.read()) + sc_bigint<11>(sext_ln703_1712_fu_62395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_307_fu_44260_p2() {
    add_ln703_307_fu_44260_p2 = (!sext_ln703_82_fu_44236_p1.read().is_01() || !sext_ln703_84_fu_44256_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_82_fu_44236_p1.read()) + sc_bigint<11>(sext_ln703_84_fu_44256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3080_fu_62409_p2() {
    add_ln703_3080_fu_62409_p2 = (!sext_ln203_470_fu_41399_p1.read().is_01() || !sext_ln1116_66_fu_39527_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_470_fu_41399_p1.read()) + sc_bigint<9>(sext_ln1116_66_fu_39527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3081_fu_62419_p2() {
    add_ln703_3081_fu_62419_p2 = (!zext_ln708_568_fu_41623_p1.read().is_01() || !zext_ln708_561_fu_41030_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_568_fu_41623_p1.read()) + sc_biguint<8>(zext_ln708_561_fu_41030_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3082_fu_62429_p2() {
    add_ln703_3082_fu_62429_p2 = (!sext_ln703_1714_fu_62415_p1.read().is_01() || !zext_ln703_530_fu_62425_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1714_fu_62415_p1.read()) + sc_biguint<10>(zext_ln703_530_fu_62425_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3083_fu_62439_p2() {
    add_ln703_3083_fu_62439_p2 = (!sext_ln703_1713_fu_62405_p1.read().is_01() || !sext_ln703_1715_fu_62435_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1713_fu_62405_p1.read()) + sc_bigint<12>(sext_ln703_1715_fu_62435_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3085_fu_62463_p2() {
    add_ln703_3085_fu_62463_p2 = (!zext_ln203_228_reg_70175.read().is_01() || !sext_ln203_483_fu_41703_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_228_reg_70175.read()) + sc_bigint<12>(sext_ln203_483_fu_41703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3086_fu_62472_p2() {
    add_ln703_3086_fu_62472_p2 = (!or_ln703_15_fu_62455_p3.read().is_01() || !sext_ln703_1717_fu_62468_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_15_fu_62455_p3.read()) + sc_bigint<16>(sext_ln703_1717_fu_62468_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3087_fu_24694_p2() {
    add_ln703_3087_fu_24694_p2 = (!zext_ln708_526_fu_14174_p1.read().is_01() || !zext_ln708_572_fu_16014_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_526_fu_14174_p1.read()) + sc_biguint<11>(zext_ln708_572_fu_16014_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3088_fu_62481_p2() {
    add_ln703_3088_fu_62481_p2 = (!zext_ln708_567_fu_41503_p1.read().is_01() || !zext_ln708_574_fu_41728_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_567_fu_41503_p1.read()) + sc_biguint<11>(zext_ln708_574_fu_41728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3089_fu_62491_p2() {
    add_ln703_3089_fu_62491_p2 = (!zext_ln703_531_fu_62478_p1.read().is_01() || !zext_ln703_532_fu_62487_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_531_fu_62478_p1.read()) + sc_biguint<12>(zext_ln703_532_fu_62487_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_308_fu_44270_p2() {
    add_ln703_308_fu_44270_p2 = (!add_ln703_303_fu_44224_p2.read().is_01() || !sext_ln703_85_fu_44266_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_303_fu_44224_p2.read()) + sc_bigint<14>(sext_ln703_85_fu_44266_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3090_fu_62501_p2() {
    add_ln703_3090_fu_62501_p2 = (!add_ln703_3086_fu_62472_p2.read().is_01() || !zext_ln703_533_fu_62497_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3086_fu_62472_p2.read()) + sc_biguint<16>(zext_ln703_533_fu_62497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3091_fu_62507_p2() {
    add_ln703_3091_fu_62507_p2 = (!zext_ln708_577_fu_41835_p1.read().is_01() || !zext_ln708_576_fu_41811_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_577_fu_41835_p1.read()) + sc_biguint<11>(zext_ln708_576_fu_41811_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3092_fu_62517_p2() {
    add_ln703_3092_fu_62517_p2 = (!zext_ln203_231_fu_41771_p1.read().is_01() || !zext_ln703_534_fu_62513_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_231_fu_41771_p1.read()) + sc_biguint<12>(zext_ln703_534_fu_62513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3093_fu_62527_p2() {
    add_ln703_3093_fu_62527_p2 = (!sext_ln203_485_fu_41739_p1.read().is_01() || !sext_ln1118_425_reg_70061.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_485_fu_41739_p1.read()) + sc_bigint<11>(sext_ln1118_425_reg_70061.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3094_fu_62536_p2() {
    add_ln703_3094_fu_62536_p2 = (!sext_ln1118_439_fu_41243_p1.read().is_01() || !sext_ln203_486_fu_41791_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_439_fu_41243_p1.read()) + sc_bigint<11>(sext_ln203_486_fu_41791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3095_fu_62546_p2() {
    add_ln703_3095_fu_62546_p2 = (!sext_ln703_1718_fu_62532_p1.read().is_01() || !sext_ln703_1719_fu_62542_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1718_fu_62532_p1.read()) + sc_bigint<12>(sext_ln703_1719_fu_62542_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3096_fu_62556_p2() {
    add_ln703_3096_fu_62556_p2 = (!zext_ln703_535_fu_62523_p1.read().is_01() || !sext_ln703_1720_fu_62552_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_535_fu_62523_p1.read()) + sc_bigint<14>(sext_ln703_1720_fu_62552_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3097_fu_62566_p2() {
    add_ln703_3097_fu_62566_p2 = (!add_ln703_3090_fu_62501_p2.read().is_01() || !sext_ln703_1721_fu_62562_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3090_fu_62501_p2.read()) + sc_bigint<16>(sext_ln703_1721_fu_62562_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3098_fu_62572_p2() {
    add_ln703_3098_fu_62572_p2 = (!zext_ln708_507_fu_39571_p1.read().is_01() || !zext_ln708_573_fu_41709_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_507_fu_39571_p1.read()) + sc_biguint<10>(zext_ln708_573_fu_41709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3099_fu_62582_p2() {
    add_ln703_3099_fu_62582_p2 = (!sext_ln203_446_fu_40383_p1.read().is_01() || !zext_ln703_536_fu_62578_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_446_fu_40383_p1.read()) + sc_biguint<12>(zext_ln703_536_fu_62578_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_309_fu_44276_p2() {
    add_ln703_309_fu_44276_p2 = (!sext_ln203_38_fu_27087_p1.read().is_01() || !add_ln703_308_fu_44270_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_38_fu_27087_p1.read()) + sc_biguint<14>(add_ln703_308_fu_44270_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3100_fu_62592_p2() {
    add_ln703_3100_fu_62592_p2 = (!sext_ln203_436_fu_39653_p1.read().is_01() || !zext_ln708_516_reg_69841.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_436_fu_39653_p1.read()) + sc_biguint<11>(zext_ln708_516_reg_69841.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3101_fu_24700_p2() {
    add_ln703_3101_fu_24700_p2 = (!sext_ln203_482_fu_16018_p1.read().is_01() || !zext_ln203_230_fu_16058_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_482_fu_16018_p1.read()) + sc_biguint<11>(zext_ln203_230_fu_16058_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3102_fu_62604_p2() {
    add_ln703_3102_fu_62604_p2 = (!sext_ln703_1723_fu_62597_p1.read().is_01() || !sext_ln703_1724_fu_62601_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1723_fu_62597_p1.read()) + sc_bigint<12>(sext_ln703_1724_fu_62601_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3103_fu_62614_p2() {
    add_ln703_3103_fu_62614_p2 = (!sext_ln703_1722_fu_62588_p1.read().is_01() || !sext_ln703_1725_fu_62610_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1722_fu_62588_p1.read()) + sc_bigint<13>(sext_ln703_1725_fu_62610_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3104_fu_62620_p2() {
    add_ln703_3104_fu_62620_p2 = (!sext_ln203_468_fu_41352_p1.read().is_01() || !sext_ln203_484_fu_41735_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_468_fu_41352_p1.read()) + sc_bigint<9>(sext_ln203_484_fu_41735_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3105_fu_62630_p2() {
    add_ln703_3105_fu_62630_p2 = (!sext_ln203_438_fu_39786_p1.read().is_01() || !sext_ln703_1726_fu_62626_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_438_fu_39786_p1.read()) + sc_bigint<10>(sext_ln703_1726_fu_62626_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3106_fu_62640_p2() {
    add_ln703_3106_fu_62640_p2 = (!zext_ln203_229_fu_41706_p1.read().is_01() || !sext_ln203_461_fu_41070_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_229_fu_41706_p1.read()) + sc_bigint<9>(sext_ln203_461_fu_41070_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3107_fu_62650_p2() {
    add_ln703_3107_fu_62650_p2 = (!zext_ln708_534_fu_40301_p1.read().is_01() || !zext_ln708_527_fu_39789_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_534_fu_40301_p1.read()) + sc_biguint<8>(zext_ln708_527_fu_39789_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3108_fu_62660_p2() {
    add_ln703_3108_fu_62660_p2 = (!sext_ln703_1728_fu_62646_p1.read().is_01() || !zext_ln703_537_fu_62656_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1728_fu_62646_p1.read()) + sc_biguint<10>(zext_ln703_537_fu_62656_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3109_fu_62670_p2() {
    add_ln703_3109_fu_62670_p2 = (!sext_ln703_1727_fu_62636_p1.read().is_01() || !sext_ln703_1729_fu_62666_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1727_fu_62636_p1.read()) + sc_bigint<11>(sext_ln703_1729_fu_62666_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_310_fu_44282_p2() {
    add_ln703_310_fu_44282_p2 = (!sext_ln203_40_fu_27111_p1.read().is_01() || !sext_ln203_39_fu_27107_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_40_fu_27111_p1.read()) + sc_bigint<11>(sext_ln203_39_fu_27107_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3110_fu_62680_p2() {
    add_ln703_3110_fu_62680_p2 = (!add_ln703_3103_fu_62614_p2.read().is_01() || !sext_ln703_1730_fu_62676_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3103_fu_62614_p2.read()) + sc_bigint<13>(sext_ln703_1730_fu_62676_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3112_fu_24706_p2() {
    add_ln703_3112_fu_24706_p2 = (!sext_ln708_236_fu_15156_p1.read().is_01() || !ap_const_lv11_500.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_236_fu_15156_p1.read()) + sc_bigint<11>(ap_const_lv11_500));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3113_fu_24716_p2() {
    add_ln703_3113_fu_24716_p2 = (!sext_ln1118_452_fu_16098_p1.read().is_01() || !sext_ln703_1732_fu_24712_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_452_fu_16098_p1.read()) + sc_bigint<12>(sext_ln703_1732_fu_24712_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3114_fu_24722_p2() {
    add_ln703_3114_fu_24722_p2 = (!zext_ln708_556_fu_15168_p1.read().is_01() || !sext_ln708_247_fu_16118_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_556_fu_15168_p1.read()) + sc_bigint<9>(sext_ln708_247_fu_16118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3115_fu_24732_p2() {
    add_ln703_3115_fu_24732_p2 = (!zext_ln1118_632_fu_16142_p1.read().is_01() || !sext_ln703_1733_fu_24728_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_632_fu_16142_p1.read()) + sc_bigint<11>(sext_ln703_1733_fu_24728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3116_fu_24742_p2() {
    add_ln703_3116_fu_24742_p2 = (!add_ln703_3113_fu_24716_p2.read().is_01() || !sext_ln703_1734_fu_24738_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3113_fu_24716_p2.read()) + sc_bigint<12>(sext_ln703_1734_fu_24738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3117_fu_24752_p2() {
    add_ln703_3117_fu_24752_p2 = (!sext_ln708_245_fu_15788_p1.read().is_01() || !sext_ln1118_435_fu_15514_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_245_fu_15788_p1.read()) + sc_bigint<12>(sext_ln1118_435_fu_15514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3118_fu_24762_p2() {
    add_ln703_3118_fu_24762_p2 = (!sext_ln703_1735_fu_24748_p1.read().is_01() || !sext_ln703_1736_fu_24758_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1735_fu_24748_p1.read()) + sc_bigint<13>(sext_ln703_1736_fu_24758_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3119_fu_62699_p2() {
    add_ln703_3119_fu_62699_p2 = (!zext_ln1116_160_fu_39433_p1.read().is_01() || !sext_ln203_437_fu_39783_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_160_fu_39433_p1.read()) + sc_bigint<9>(sext_ln203_437_fu_39783_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_311_fu_44292_p2() {
    add_ln703_311_fu_44292_p2 = (!add_ln703_309_fu_44276_p2.read().is_01() || !sext_ln703_86_fu_44288_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_309_fu_44276_p2.read()) + sc_bigint<14>(sext_ln703_86_fu_44288_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3120_fu_62709_p2() {
    add_ln703_3120_fu_62709_p2 = (!sext_ln203_487_fu_41859_p1.read().is_01() || !sext_ln703_1738_fu_62705_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_487_fu_41859_p1.read()) + sc_bigint<12>(sext_ln703_1738_fu_62705_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3121_fu_62719_p2() {
    add_ln703_3121_fu_62719_p2 = (!sext_ln703_1737_fu_62696_p1.read().is_01() || !sext_ln703_1739_fu_62715_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1737_fu_62696_p1.read()) + sc_bigint<14>(sext_ln703_1739_fu_62715_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3122_fu_62725_p2() {
    add_ln703_3122_fu_62725_p2 = (!zext_ln708_579_fu_41879_p1.read().is_01() || !sext_ln708_248_fu_41942_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_579_fu_41879_p1.read()) + sc_bigint<12>(sext_ln708_248_fu_41942_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3123_fu_62735_p2() {
    add_ln703_3123_fu_62735_p2 = (!add_ln703_3121_fu_62719_p2.read().is_01() || !sext_ln703_1740_fu_62731_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3121_fu_62719_p2.read()) + sc_bigint<14>(sext_ln703_1740_fu_62731_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3124_fu_62741_p2() {
    add_ln703_3124_fu_62741_p2 = (!zext_ln1118_634_fu_41918_p1.read().is_01() || !sext_ln1118_439_fu_41243_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_634_fu_41918_p1.read()) + sc_bigint<11>(sext_ln1118_439_fu_41243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3125_fu_62751_p2() {
    add_ln703_3125_fu_62751_p2 = (!zext_ln708_580_fu_41899_p1.read().is_01() || !sext_ln703_1741_fu_62747_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_580_fu_41899_p1.read()) + sc_bigint<12>(sext_ln703_1741_fu_62747_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3126_fu_62761_p2() {
    add_ln703_3126_fu_62761_p2 = (!add_ln703_3123_fu_62735_p2.read().is_01() || !sext_ln703_1742_fu_62757_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3123_fu_62735_p2.read()) + sc_bigint<14>(sext_ln703_1742_fu_62757_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3127_fu_62771_p2() {
    add_ln703_3127_fu_62771_p2 = (!zext_ln1116_163_fu_39489_p1.read().is_01() || !sext_ln1116_72_fu_40816_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_163_fu_39489_p1.read()) + sc_bigint<10>(sext_ln1116_72_fu_40816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3128_fu_62777_p2() {
    add_ln703_3128_fu_62777_p2 = (!sext_ln1118_426_fu_40700_p1.read().is_01() || !add_ln703_3127_fu_62771_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_426_fu_40700_p1.read()) + sc_biguint<10>(add_ln703_3127_fu_62771_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3129_fu_62787_p2() {
    add_ln703_3129_fu_62787_p2 = (!zext_ln708_515_fu_39766_p1.read().is_01() || !zext_ln708_561_fu_41030_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_515_fu_39766_p1.read()) + sc_biguint<8>(zext_ln708_561_fu_41030_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_312_fu_44298_p2() {
    add_ln703_312_fu_44298_p2 = (!zext_ln1118_53_reg_68170.read().is_01() || !sext_ln203_42_fu_27133_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_53_reg_68170.read()) + sc_bigint<11>(sext_ln203_42_fu_27133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3130_fu_62797_p2() {
    add_ln703_3130_fu_62797_p2 = (!zext_ln1118_589_fu_40767_p1.read().is_01() || !zext_ln703_538_fu_62793_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_589_fu_40767_p1.read()) + sc_biguint<9>(zext_ln703_538_fu_62793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3131_fu_62807_p2() {
    add_ln703_3131_fu_62807_p2 = (!sext_ln703_1744_fu_62783_p1.read().is_01() || !zext_ln703_539_fu_62803_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1744_fu_62783_p1.read()) + sc_biguint<11>(zext_ln703_539_fu_62803_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3133_fu_62835_p2() {
    add_ln703_3133_fu_62835_p2 = (!mult_3420_V_fu_42101_p1.read().is_01() || !or_ln703_16_fu_62827_p3.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_3420_V_fu_42101_p1.read()) + sc_biguint<16>(or_ln703_16_fu_62827_p3.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3134_fu_62841_p2() {
    add_ln703_3134_fu_62841_p2 = (!zext_ln708_544_fu_40517_p1.read().is_01() || !zext_ln708_583_fu_42014_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_544_fu_40517_p1.read()) + sc_biguint<11>(zext_ln708_583_fu_42014_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3135_fu_62851_p2() {
    add_ln703_3135_fu_62851_p2 = (!zext_ln203_235_fu_41970_p1.read().is_01() || !zext_ln703_540_fu_62847_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_235_fu_41970_p1.read()) + sc_biguint<12>(zext_ln703_540_fu_62847_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3136_fu_62861_p2() {
    add_ln703_3136_fu_62861_p2 = (!add_ln703_3133_fu_62835_p2.read().is_01() || !zext_ln703_541_fu_62857_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3133_fu_62835_p2.read()) + sc_biguint<16>(zext_ln703_541_fu_62857_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3137_fu_62867_p2() {
    add_ln703_3137_fu_62867_p2 = (!zext_ln708_587_fu_42151_p1.read().is_01() || !zext_ln708_586_fu_42132_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_587_fu_42151_p1.read()) + sc_biguint<11>(zext_ln708_586_fu_42132_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3138_fu_62877_p2() {
    add_ln703_3138_fu_62877_p2 = (!zext_ln203_237_fu_42057_p1.read().is_01() || !zext_ln703_542_fu_62873_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_237_fu_42057_p1.read()) + sc_biguint<12>(zext_ln703_542_fu_62873_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3139_fu_62887_p2() {
    add_ln703_3139_fu_62887_p2 = (!zext_ln203_233_reg_70197.read().is_01() || !sext_ln203_490_fu_42077_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_233_reg_70197.read()) + sc_bigint<11>(sext_ln203_490_fu_42077_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_313_fu_44307_p2() {
    add_ln703_313_fu_44307_p2 = (!zext_ln708_31_fu_26498_p1.read().is_01() || !zext_ln203_7_fu_27051_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_31_fu_26498_p1.read()) + sc_biguint<9>(zext_ln203_7_fu_27051_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3140_fu_62896_p2() {
    add_ln703_3140_fu_62896_p2 = (!sext_ln203_488_fu_41946_p1.read().is_01() || !sext_ln703_1746_fu_62892_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_488_fu_41946_p1.read()) + sc_bigint<12>(sext_ln703_1746_fu_62892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3141_fu_62906_p2() {
    add_ln703_3141_fu_62906_p2 = (!zext_ln703_543_fu_62883_p1.read().is_01() || !sext_ln703_1747_fu_62902_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_543_fu_62883_p1.read()) + sc_bigint<14>(sext_ln703_1747_fu_62902_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3142_fu_62916_p2() {
    add_ln703_3142_fu_62916_p2 = (!add_ln703_3136_fu_62861_p2.read().is_01() || !sext_ln703_1748_fu_62912_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3136_fu_62861_p2.read()) + sc_bigint<16>(sext_ln703_1748_fu_62912_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3143_fu_24768_p2() {
    add_ln703_3143_fu_24768_p2 = (!zext_ln1118_579_fu_14942_p1.read().is_01() || !zext_ln203_232_fu_16146_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_579_fu_14942_p1.read()) + sc_biguint<10>(zext_ln203_232_fu_16146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3144_fu_62925_p2() {
    add_ln703_3144_fu_62925_p2 = (!zext_ln203_236_fu_41994_p1.read().is_01() || !zext_ln703_544_fu_62922_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_236_fu_41994_p1.read()) + sc_biguint<11>(zext_ln703_544_fu_62922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3145_fu_62935_p2() {
    add_ln703_3145_fu_62935_p2 = (!sext_ln203_489_fu_42034_p1.read().is_01() || !zext_ln1118_548_fu_39835_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_489_fu_42034_p1.read()) + sc_biguint<11>(zext_ln1118_548_fu_39835_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3146_fu_62945_p2() {
    add_ln703_3146_fu_62945_p2 = (!zext_ln708_523_reg_69851.read().is_01() || !sext_ln703_1749_fu_62941_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_523_reg_69851.read()) + sc_bigint<12>(sext_ln703_1749_fu_62941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3147_fu_62954_p2() {
    add_ln703_3147_fu_62954_p2 = (!zext_ln703_545_fu_62931_p1.read().is_01() || !sext_ln703_1750_fu_62950_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_545_fu_62931_p1.read()) + sc_bigint<13>(sext_ln703_1750_fu_62950_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3148_fu_62960_p2() {
    add_ln703_3148_fu_62960_p2 = (!zext_ln708_494_reg_69801.read().is_01() || !zext_ln1118_580_fu_40636_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_494_reg_69801.read()) + sc_biguint<9>(zext_ln1118_580_fu_40636_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3149_fu_62969_p2() {
    add_ln703_3149_fu_62969_p2 = (!sext_ln203_467_fu_41348_p1.read().is_01() || !zext_ln703_546_fu_62965_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_467_fu_41348_p1.read()) + sc_biguint<11>(zext_ln703_546_fu_62965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_314_fu_44317_p2() {
    add_ln703_314_fu_44317_p2 = (!sext_ln203_37_fu_27055_p1.read().is_01() || !zext_ln703_13_fu_44313_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_37_fu_27055_p1.read()) + sc_biguint<10>(zext_ln703_13_fu_44313_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3150_fu_62979_p2() {
    add_ln703_3150_fu_62979_p2 = (!zext_ln708_514_fu_39752_p1.read().is_01() || !zext_ln203_234_fu_41952_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_514_fu_39752_p1.read()) + sc_biguint<9>(zext_ln203_234_fu_41952_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3151_fu_62989_p2() {
    add_ln703_3151_fu_62989_p2 = (!zext_ln708_498_reg_69807.read().is_01() || !zext_ln703_547_fu_62985_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_498_reg_69807.read()) + sc_biguint<10>(zext_ln703_547_fu_62985_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3152_fu_62998_p2() {
    add_ln703_3152_fu_62998_p2 = (!sext_ln703_1751_fu_62975_p1.read().is_01() || !zext_ln703_548_fu_62994_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1751_fu_62975_p1.read()) + sc_biguint<12>(zext_ln703_548_fu_62994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3153_fu_63008_p2() {
    add_ln703_3153_fu_63008_p2 = (!add_ln703_3147_fu_62954_p2.read().is_01() || !sext_ln703_1752_fu_63004_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3147_fu_62954_p2.read()) + sc_bigint<13>(sext_ln703_1752_fu_63004_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3155_fu_24774_p2() {
    add_ln703_3155_fu_24774_p2 = (!zext_ln708_588_fu_16180_p1.read().is_01() || !ap_const_lv11_500.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_588_fu_16180_p1.read()) + sc_bigint<11>(ap_const_lv11_500));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3156_fu_24780_p2() {
    add_ln703_3156_fu_24780_p2 = (!zext_ln708_589_fu_16200_p1.read().is_01() || !add_ln703_3155_fu_24774_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_589_fu_16200_p1.read()) + sc_biguint<11>(add_ln703_3155_fu_24774_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3157_fu_24790_p2() {
    add_ln703_3157_fu_24790_p2 = (!zext_ln708_590_fu_16204_p1.read().is_01() || !zext_ln708_571_fu_15982_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_590_fu_16204_p1.read()) + sc_biguint<11>(zext_ln708_571_fu_15982_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3158_fu_24800_p2() {
    add_ln703_3158_fu_24800_p2 = (!sext_ln703_862_fu_24786_p1.read().is_01() || !zext_ln703_549_fu_24796_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_862_fu_24786_p1.read()) + sc_biguint<12>(zext_ln703_549_fu_24796_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3159_fu_24810_p2() {
    add_ln703_3159_fu_24810_p2 = (!sext_ln203_458_fu_15238_p1.read().is_01() || !sext_ln703_863_fu_24806_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_458_fu_15238_p1.read()) + sc_bigint<13>(sext_ln703_863_fu_24806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_315_fu_44327_p2() {
    add_ln703_315_fu_44327_p2 = (!sext_ln703_87_fu_44303_p1.read().is_01() || !sext_ln703_88_fu_44323_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_87_fu_44303_p1.read()) + sc_bigint<12>(sext_ln703_88_fu_44323_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3160_fu_24816_p2() {
    add_ln703_3160_fu_24816_p2 = (!zext_ln708_524_fu_14104_p1.read().is_01() || !zext_ln708_591_fu_16216_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_524_fu_14104_p1.read()) + sc_biguint<10>(zext_ln708_591_fu_16216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3161_fu_24826_p2() {
    add_ln703_3161_fu_24826_p2 = (!add_ln703_3159_fu_24810_p2.read().is_01() || !zext_ln703_550_fu_24822_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3159_fu_24810_p2.read()) + sc_biguint<13>(zext_ln703_550_fu_24822_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3162_fu_24836_p2() {
    add_ln703_3162_fu_24836_p2 = (!zext_ln203_238_fu_16240_p1.read().is_01() || !sext_ln703_864_fu_24832_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln203_238_fu_16240_p1.read()) + sc_bigint<14>(sext_ln703_864_fu_24832_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3163_fu_63024_p2() {
    add_ln703_3163_fu_63024_p2 = (!zext_ln708_597_fu_42187_p1.read().is_01() || !zext_ln708_593_fu_42155_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_597_fu_42187_p1.read()) + sc_biguint<11>(zext_ln708_593_fu_42155_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3164_fu_63034_p2() {
    add_ln703_3164_fu_63034_p2 = (!add_ln703_3162_reg_71092.read().is_01() || !zext_ln703_551_fu_63030_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3162_reg_71092.read()) + sc_biguint<14>(zext_ln703_551_fu_63030_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3165_fu_63039_p2() {
    add_ln703_3165_fu_63039_p2 = (!zext_ln708_594_fu_42158_p1.read().is_01() || !zext_ln708_573_fu_41709_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_594_fu_42158_p1.read()) + sc_biguint<10>(zext_ln708_573_fu_41709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3166_fu_24842_p2() {
    add_ln703_3166_fu_24842_p2 = (!zext_ln1116_159_fu_13814_p1.read().is_01() || !zext_ln203_239_fu_16288_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_159_fu_13814_p1.read()) + sc_biguint<10>(zext_ln203_239_fu_16288_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3167_fu_24852_p2() {
    add_ln703_3167_fu_24852_p2 = (!zext_ln708_595_fu_16284_p1.read().is_01() || !zext_ln703_553_fu_24848_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_595_fu_16284_p1.read()) + sc_biguint<11>(zext_ln703_553_fu_24848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3168_fu_63052_p2() {
    add_ln703_3168_fu_63052_p2 = (!zext_ln703_552_fu_63045_p1.read().is_01() || !zext_ln703_554_fu_63049_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_552_fu_63045_p1.read()) + sc_biguint<12>(zext_ln703_554_fu_63049_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3169_fu_63062_p2() {
    add_ln703_3169_fu_63062_p2 = (!add_ln703_3164_fu_63034_p2.read().is_01() || !zext_ln703_555_fu_63058_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3164_fu_63034_p2.read()) + sc_biguint<14>(zext_ln703_555_fu_63058_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3170_fu_63072_p2() {
    add_ln703_3170_fu_63072_p2 = (!sext_ln1118_453_fu_42257_p1.read().is_01() || !zext_ln203_240_fu_42253_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_453_fu_42257_p1.read()) + sc_biguint<12>(zext_ln203_240_fu_42253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3171_fu_63082_p2() {
    add_ln703_3171_fu_63082_p2 = (!sext_ln703_865_fu_63068_p1.read().is_01() || !sext_ln703_1754_fu_63078_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_865_fu_63068_p1.read()) + sc_bigint<15>(sext_ln703_1754_fu_63078_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3172_fu_63088_p2() {
    add_ln703_3172_fu_63088_p2 = (!sext_ln708_228_fu_40283_p1.read().is_01() || !zext_ln1116_182_fu_40738_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_228_fu_40283_p1.read()) + sc_biguint<11>(zext_ln1116_182_fu_40738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3173_fu_63098_p2() {
    add_ln703_3173_fu_63098_p2 = (!zext_ln708_598_fu_42191_p1.read().is_01() || !sext_ln703_1755_fu_63094_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_598_fu_42191_p1.read()) + sc_bigint<12>(sext_ln703_1755_fu_63094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3174_fu_63108_p2() {
    add_ln703_3174_fu_63108_p2 = (!add_ln703_3171_fu_63082_p2.read().is_01() || !sext_ln703_1756_fu_63104_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3171_fu_63082_p2.read()) + sc_bigint<15>(sext_ln703_1756_fu_63104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3175_fu_63114_p2() {
    add_ln703_3175_fu_63114_p2 = (!zext_ln203_218_fu_40533_p1.read().is_01() || !sext_ln708_250_fu_42229_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_218_fu_40533_p1.read()) + sc_bigint<11>(sext_ln708_250_fu_42229_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3176_fu_63120_p2() {
    add_ln703_3176_fu_63120_p2 = (!sext_ln203_436_fu_39653_p1.read().is_01() || !add_ln703_3175_fu_63114_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_436_fu_39653_p1.read()) + sc_biguint<11>(add_ln703_3175_fu_63114_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3177_fu_63130_p2() {
    add_ln703_3177_fu_63130_p2 = (!zext_ln1116_163_fu_39489_p1.read().is_01() || !sext_ln708_219_fu_39467_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_163_fu_39489_p1.read()) + sc_bigint<10>(sext_ln708_219_fu_39467_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3178_fu_63140_p2() {
    add_ln703_3178_fu_63140_p2 = (!zext_ln708_599_fu_42205_p1.read().is_01() || !zext_ln708_554_fu_40763_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_599_fu_42205_p1.read()) + sc_biguint<8>(zext_ln708_554_fu_40763_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3179_fu_63150_p2() {
    add_ln703_3179_fu_63150_p2 = (!sext_ln703_1758_fu_63136_p1.read().is_01() || !zext_ln703_556_fu_63146_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1758_fu_63136_p1.read()) + sc_biguint<11>(zext_ln703_556_fu_63146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_317_fu_17852_p2() {
    add_ln703_317_fu_17852_p2 = (!zext_ln203_9_fu_2204_p1.read().is_01() || !sext_ln703_91_fu_17848_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_9_fu_2204_p1.read()) + sc_bigint<9>(sext_ln703_91_fu_17848_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3180_fu_63160_p2() {
    add_ln703_3180_fu_63160_p2 = (!sext_ln703_1757_fu_63126_p1.read().is_01() || !sext_ln703_1759_fu_63156_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1757_fu_63126_p1.read()) + sc_bigint<12>(sext_ln703_1759_fu_63156_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3181_fu_63170_p2() {
    add_ln703_3181_fu_63170_p2 = (!add_ln703_3174_fu_63108_p2.read().is_01() || !sext_ln703_1760_fu_63166_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3174_fu_63108_p2.read()) + sc_bigint<15>(sext_ln703_1760_fu_63166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3182_fu_63176_p2() {
    add_ln703_3182_fu_63176_p2 = (!sext_ln203_491_fu_42281_p1.read().is_01() || !add_ln703_3181_fu_63170_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_491_fu_42281_p1.read()) + sc_biguint<15>(add_ln703_3181_fu_63170_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3183_fu_63182_p2() {
    add_ln703_3183_fu_63182_p2 = (!zext_ln1118_539_fu_39770_p1.read().is_01() || !sext_ln203_470_fu_41399_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_539_fu_39770_p1.read()) + sc_bigint<9>(sext_ln203_470_fu_41399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3185_fu_24858_p2() {
    add_ln703_3185_fu_24858_p2 = (!zext_ln708_518_fu_13984_p1.read().is_01() || !sext_ln708_237_fu_15160_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_518_fu_13984_p1.read()) + sc_bigint<10>(sext_ln708_237_fu_15160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3186_fu_24864_p2() {
    add_ln703_3186_fu_24864_p2 = (!add_ln703_3185_fu_24858_p2.read().is_01() || !ap_const_lv10_380.is_01())? sc_lv<10>(): (sc_biguint<10>(add_ln703_3185_fu_24858_p2.read()) + sc_bigint<10>(ap_const_lv10_380));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3187_fu_24874_p2() {
    add_ln703_3187_fu_24874_p2 = (!zext_ln708_602_fu_16336_p1.read().is_01() || !zext_ln708_601_fu_16322_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_602_fu_16336_p1.read()) + sc_biguint<8>(zext_ln708_601_fu_16322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3188_fu_24884_p2() {
    add_ln703_3188_fu_24884_p2 = (!zext_ln708_486_fu_13636_p1.read().is_01() || !zext_ln703_557_fu_24880_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_486_fu_13636_p1.read()) + sc_biguint<9>(zext_ln703_557_fu_24880_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3189_fu_24894_p2() {
    add_ln703_3189_fu_24894_p2 = (!sext_ln703_1763_fu_24870_p1.read().is_01() || !zext_ln703_558_fu_24890_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1763_fu_24870_p1.read()) + sc_biguint<11>(zext_ln703_558_fu_24890_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_318_fu_17862_p2() {
    add_ln703_318_fu_17862_p2 = (!zext_ln203_10_fu_2222_p1.read().is_01() || !sext_ln703_92_fu_17858_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_10_fu_2222_p1.read()) + sc_bigint<10>(sext_ln703_92_fu_17858_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3190_fu_24904_p2() {
    add_ln703_3190_fu_24904_p2 = (!sext_ln1118_454_fu_16384_p1.read().is_01() || !sext_ln1116_74_fu_16356_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_454_fu_16384_p1.read()) + sc_bigint<10>(sext_ln1116_74_fu_16356_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3191_fu_24914_p2() {
    add_ln703_3191_fu_24914_p2 = (!sext_ln703_1764_fu_24900_p1.read().is_01() || !sext_ln703_1765_fu_24910_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1764_fu_24900_p1.read()) + sc_bigint<12>(sext_ln703_1765_fu_24910_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3192_fu_24920_p2() {
    add_ln703_3192_fu_24920_p2 = (!sext_ln1116_75_fu_16388_p1.read().is_01() || !add_ln703_3191_fu_24914_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_75_fu_16388_p1.read()) + sc_biguint<12>(add_ln703_3191_fu_24914_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3193_fu_63205_p2() {
    add_ln703_3193_fu_63205_p2 = (!sext_ln203_437_fu_39783_p1.read().is_01() || !sext_ln1116_76_fu_42285_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_437_fu_39783_p1.read()) + sc_bigint<9>(sext_ln1116_76_fu_42285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3194_fu_63215_p2() {
    add_ln703_3194_fu_63215_p2 = (!sext_ln1116_77_fu_42291_p1.read().is_01() || !sext_ln703_1767_fu_63211_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_77_fu_42291_p1.read()) + sc_bigint<11>(sext_ln703_1767_fu_63211_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3195_fu_63225_p2() {
    add_ln703_3195_fu_63225_p2 = (!sext_ln703_1766_fu_63202_p1.read().is_01() || !sext_ln703_1768_fu_63221_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1766_fu_63202_p1.read()) + sc_bigint<13>(sext_ln703_1768_fu_63221_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3196_fu_63231_p2() {
    add_ln703_3196_fu_63231_p2 = (!sext_ln1118_455_fu_42294_p1.read().is_01() || !add_ln703_3195_fu_63225_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_455_fu_42294_p1.read()) + sc_biguint<13>(add_ln703_3195_fu_63225_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3197_fu_63241_p2() {
    add_ln703_3197_fu_63241_p2 = (!sext_ln1118_402_fu_39619_p1.read().is_01() || !sext_ln1118_457_fu_42341_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_402_fu_39619_p1.read()) + sc_bigint<11>(sext_ln1118_457_fu_42341_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3198_fu_63251_p2() {
    add_ln703_3198_fu_63251_p2 = (!sext_ln1118_456_fu_42297_p1.read().is_01() || !sext_ln703_1770_fu_63247_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_456_fu_42297_p1.read()) + sc_bigint<12>(sext_ln703_1770_fu_63247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3199_fu_63261_p2() {
    add_ln703_3199_fu_63261_p2 = (!sext_ln703_1769_fu_63237_p1.read().is_01() || !sext_ln703_1771_fu_63257_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1769_fu_63237_p1.read()) + sc_bigint<14>(sext_ln703_1771_fu_63257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_319_fu_17876_p2() {
    add_ln703_319_fu_17876_p2 = (!sext_ln703_93_fu_17868_p1.read().is_01() || !zext_ln703_14_fu_17872_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_93_fu_17868_p1.read()) + sc_biguint<11>(zext_ln703_14_fu_17872_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3200_fu_63267_p2() {
    add_ln703_3200_fu_63267_p2 = (!sext_ln1116_78_fu_42317_p1.read().is_01() || !sext_ln1116_80_fu_42345_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_78_fu_42317_p1.read()) + sc_bigint<10>(sext_ln1116_80_fu_42345_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3201_fu_63277_p2() {
    add_ln703_3201_fu_63277_p2 = (!zext_ln708_513_fu_39685_p1.read().is_01() || !sext_ln1116_72_fu_40816_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_513_fu_39685_p1.read()) + sc_bigint<10>(sext_ln1116_72_fu_40816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3202_fu_63283_p2() {
    add_ln703_3202_fu_63283_p2 = (!sext_ln1116_79_fu_42321_p1.read().is_01() || !add_ln703_3201_fu_63277_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_79_fu_42321_p1.read()) + sc_biguint<10>(add_ln703_3201_fu_63277_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3203_fu_63293_p2() {
    add_ln703_3203_fu_63293_p2 = (!sext_ln703_1772_fu_63273_p1.read().is_01() || !sext_ln703_1773_fu_63289_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1772_fu_63273_p1.read()) + sc_bigint<11>(sext_ln703_1773_fu_63289_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3204_fu_63303_p2() {
    add_ln703_3204_fu_63303_p2 = (!add_ln703_3199_fu_63261_p2.read().is_01() || !sext_ln703_1774_fu_63299_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3199_fu_63261_p2.read()) + sc_bigint<14>(sext_ln703_1774_fu_63299_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3205_fu_63309_p2() {
    add_ln703_3205_fu_63309_p2 = (!sext_ln203_493_fu_42369_p1.read().is_01() || !add_ln703_3204_fu_63303_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_493_fu_42369_p1.read()) + sc_biguint<14>(add_ln703_3204_fu_63303_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3206_fu_63315_p2() {
    add_ln703_3206_fu_63315_p2 = (!zext_ln203_242_fu_42379_p1.read().is_01() || !zext_ln1116_174_fu_39717_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_242_fu_42379_p1.read()) + sc_biguint<9>(zext_ln1116_174_fu_39717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3208_fu_24936_p2() {
    add_ln703_3208_fu_24936_p2 = (!sext_ln1118_460_fu_16472_p1.read().is_01() || !sext_ln1118_459_fu_16452_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_460_fu_16472_p1.read()) + sc_bigint<12>(sext_ln1118_459_fu_16452_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3209_fu_24946_p2() {
    add_ln703_3209_fu_24946_p2 = (!zext_ln703_560_fu_24932_p1.read().is_01() || !sext_ln703_1776_fu_24942_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_560_fu_24932_p1.read()) + sc_bigint<13>(sext_ln703_1776_fu_24942_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_320_fu_17886_p2() {
    add_ln703_320_fu_17886_p2 = (!sext_ln1116_fu_1316_p1.read().is_01() || !sext_ln703_94_fu_17882_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_fu_1316_p1.read()) + sc_bigint<12>(sext_ln703_94_fu_17882_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3210_fu_24956_p2() {
    add_ln703_3210_fu_24956_p2 = (!sext_ln1118_435_fu_15514_p1.read().is_01() || !sext_ln1118_462_fu_16496_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_435_fu_15514_p1.read()) + sc_bigint<12>(sext_ln1118_462_fu_16496_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3211_fu_24966_p2() {
    add_ln703_3211_fu_24966_p2 = (!sext_ln703_872_fu_24952_p1.read().is_01() || !sext_ln703_1777_fu_24962_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_872_fu_24952_p1.read()) + sc_bigint<14>(sext_ln703_1777_fu_24962_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3212_fu_24976_p2() {
    add_ln703_3212_fu_24976_p2 = (!sext_ln1118_436_fu_15546_p1.read().is_01() || !sext_ln703_1778_fu_24972_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_436_fu_15546_p1.read()) + sc_bigint<12>(sext_ln703_1778_fu_24972_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3213_fu_63338_p2() {
    add_ln703_3213_fu_63338_p2 = (!add_ln703_3211_reg_71107.read().is_01() || !sext_ln703_1779_fu_63335_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3211_reg_71107.read()) + sc_bigint<14>(sext_ln703_1779_fu_63335_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3214_fu_63343_p2() {
    add_ln703_3214_fu_63343_p2 = (!sext_ln1118_470_fu_42437_p1.read().is_01() || !add_ln703_3213_fu_63338_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_470_fu_42437_p1.read()) + sc_biguint<14>(add_ln703_3213_fu_63338_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3215_fu_63353_p2() {
    add_ln703_3215_fu_63353_p2 = (!sext_ln1118_468_reg_70266.read().is_01() || !sext_ln1118_466_fu_42391_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_468_reg_70266.read()) + sc_bigint<11>(sext_ln1118_466_fu_42391_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3216_fu_63362_p2() {
    add_ln703_3216_fu_63362_p2 = (!sext_ln1118_465_fu_42388_p1.read().is_01() || !sext_ln703_1781_fu_63358_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_465_fu_42388_p1.read()) + sc_bigint<12>(sext_ln703_1781_fu_63358_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3217_fu_63372_p2() {
    add_ln703_3217_fu_63372_p2 = (!sext_ln703_1780_fu_63349_p1.read().is_01() || !sext_ln703_1782_fu_63368_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1780_fu_63349_p1.read()) + sc_bigint<15>(sext_ln703_1782_fu_63368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3218_fu_24982_p2() {
    add_ln703_3218_fu_24982_p2 = (!sext_ln1118_464_fu_16520_p1.read().is_01() || !sext_ln1118_454_fu_16384_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_464_fu_16520_p1.read()) + sc_bigint<10>(sext_ln1118_454_fu_16384_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3219_fu_63381_p2() {
    add_ln703_3219_fu_63381_p2 = (!zext_ln203_204_reg_69795.read().is_01() || !sext_ln203_495_fu_42385_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_204_reg_69795.read()) + sc_bigint<10>(sext_ln203_495_fu_42385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_321_fu_17896_p2() {
    add_ln703_321_fu_17896_p2 = (!zext_ln203_13_fu_2262_p1.read().is_01() || !sext_ln703_95_fu_17892_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln203_13_fu_2262_p1.read()) + sc_bigint<13>(sext_ln703_95_fu_17892_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3220_fu_63390_p2() {
    add_ln703_3220_fu_63390_p2 = (!sext_ln1118_467_fu_42414_p1.read().is_01() || !sext_ln703_1784_fu_63386_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_467_fu_42414_p1.read()) + sc_bigint<11>(sext_ln703_1784_fu_63386_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3221_fu_63400_p2() {
    add_ln703_3221_fu_63400_p2 = (!sext_ln703_1783_fu_63378_p1.read().is_01() || !sext_ln703_1785_fu_63396_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1783_fu_63378_p1.read()) + sc_bigint<12>(sext_ln703_1785_fu_63396_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3222_fu_63410_p2() {
    add_ln703_3222_fu_63410_p2 = (!add_ln703_3217_fu_63372_p2.read().is_01() || !sext_ln703_1786_fu_63406_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3217_fu_63372_p2.read()) + sc_bigint<15>(sext_ln703_1786_fu_63406_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3223_fu_63416_p2() {
    add_ln703_3223_fu_63416_p2 = (!sext_ln203_480_fu_41667_p1.read().is_01() || !sext_ln203_497_fu_42461_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_480_fu_41667_p1.read()) + sc_bigint<12>(sext_ln203_497_fu_42461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3224_fu_63426_p2() {
    add_ln703_3224_fu_63426_p2 = (!add_ln703_3222_fu_63410_p2.read().is_01() || !sext_ln703_1787_fu_63422_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3222_fu_63410_p2.read()) + sc_bigint<15>(sext_ln703_1787_fu_63422_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3225_fu_63432_p2() {
    add_ln703_3225_fu_63432_p2 = (!sext_ln203_498_fu_42469_p1.read().is_01() || !sext_ln203_471_fu_41441_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_498_fu_42469_p1.read()) + sc_bigint<12>(sext_ln203_471_fu_41441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3226_fu_63438_p2() {
    add_ln703_3226_fu_63438_p2 = (!sext_ln708_229_fu_40287_p1.read().is_01() || !sext_ln708_227_fu_40150_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_229_fu_40287_p1.read()) + sc_bigint<10>(sext_ln708_227_fu_40150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3227_fu_63448_p2() {
    add_ln703_3227_fu_63448_p2 = (!add_ln703_3225_fu_63432_p2.read().is_01() || !sext_ln703_1788_fu_63444_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3225_fu_63432_p2.read()) + sc_bigint<12>(sext_ln703_1788_fu_63444_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3228_fu_63458_p2() {
    add_ln703_3228_fu_63458_p2 = (!add_ln703_3224_fu_63426_p2.read().is_01() || !sext_ln703_1789_fu_63454_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3224_fu_63426_p2.read()) + sc_bigint<15>(sext_ln703_1789_fu_63454_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3229_fu_63468_p2() {
    add_ln703_3229_fu_63468_p2 = (!zext_ln1116_169_fu_39697_p1.read().is_01() || !sext_ln203_501_fu_42485_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1116_169_fu_39697_p1.read()) + sc_bigint<11>(sext_ln203_501_fu_42485_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_322_fu_17902_p2() {
    add_ln703_322_fu_17902_p2 = (!zext_ln708_40_fu_1728_p1.read().is_01() || !sext_ln1118_71_fu_2304_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_40_fu_1728_p1.read()) + sc_bigint<12>(sext_ln1118_71_fu_2304_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3230_fu_63478_p2() {
    add_ln703_3230_fu_63478_p2 = (!sext_ln203_496_fu_42441_p1.read().is_01() || !zext_ln203_225_fu_41364_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_496_fu_42441_p1.read()) + sc_biguint<11>(zext_ln203_225_fu_41364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3231_fu_63488_p2() {
    add_ln703_3231_fu_63488_p2 = (!sext_ln703_1791_fu_63474_p1.read().is_01() || !sext_ln703_1792_fu_63484_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1791_fu_63474_p1.read()) + sc_bigint<12>(sext_ln703_1792_fu_63484_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3232_fu_63498_p2() {
    add_ln703_3232_fu_63498_p2 = (!zext_ln1116_163_fu_39489_p1.read().is_01() || !sext_ln203_442_fu_40309_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_163_fu_39489_p1.read()) + sc_bigint<10>(sext_ln203_442_fu_40309_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3233_fu_63508_p2() {
    add_ln703_3233_fu_63508_p2 = (!zext_ln203_243_fu_42465_p1.read().is_01() || !zext_ln1118_524_fu_39505_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_243_fu_42465_p1.read()) + sc_biguint<9>(zext_ln1118_524_fu_39505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3234_fu_63518_p2() {
    add_ln703_3234_fu_63518_p2 = (!sext_ln703_1794_fu_63504_p1.read().is_01() || !zext_ln703_561_fu_63514_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1794_fu_63504_p1.read()) + sc_biguint<11>(zext_ln703_561_fu_63514_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3235_fu_63528_p2() {
    add_ln703_3235_fu_63528_p2 = (!sext_ln703_1793_fu_63494_p1.read().is_01() || !sext_ln703_1795_fu_63524_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1793_fu_63494_p1.read()) + sc_bigint<13>(sext_ln703_1795_fu_63524_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3237_fu_63544_p2() {
    add_ln703_3237_fu_63544_p2 = (!sext_ln203_504_fu_42495_p1.read().is_01() || !sext_ln708_242_fu_41116_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_504_fu_42495_p1.read()) + sc_bigint<12>(sext_ln708_242_fu_41116_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3238_fu_63554_p2() {
    add_ln703_3238_fu_63554_p2 = (!or_ln703_15_fu_62455_p3.read().is_01() || !sext_ln703_1797_fu_63550_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_15_fu_62455_p3.read()) + sc_bigint<16>(sext_ln703_1797_fu_63550_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3239_fu_63560_p2() {
    add_ln703_3239_fu_63560_p2 = (!sext_ln203_509_fu_42541_p1.read().is_01() || !sext_ln708_231_fu_40493_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_509_fu_42541_p1.read()) + sc_bigint<12>(sext_ln708_231_fu_40493_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_323_fu_17912_p2() {
    add_ln703_323_fu_17912_p2 = (!add_ln703_321_fu_17896_p2.read().is_01() || !sext_ln703_96_fu_17908_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_321_fu_17896_p2.read()) + sc_bigint<13>(sext_ln703_96_fu_17908_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3240_fu_63570_p2() {
    add_ln703_3240_fu_63570_p2 = (!zext_ln203_228_reg_70175.read().is_01() || !sext_ln203_481_fu_41699_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_228_reg_70175.read()) + sc_bigint<12>(sext_ln203_481_fu_41699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3241_fu_63579_p2() {
    add_ln703_3241_fu_63579_p2 = (!sext_ln703_1798_fu_63566_p1.read().is_01() || !sext_ln703_1799_fu_63575_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1798_fu_63566_p1.read()) + sc_bigint<13>(sext_ln703_1799_fu_63575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3242_fu_63589_p2() {
    add_ln703_3242_fu_63589_p2 = (!add_ln703_3238_fu_63554_p2.read().is_01() || !sext_ln703_1800_fu_63585_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3238_fu_63554_p2.read()) + sc_bigint<16>(sext_ln703_1800_fu_63585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3243_fu_63595_p2() {
    add_ln703_3243_fu_63595_p2 = (!sext_ln203_486_fu_41791_p1.read().is_01() || !sext_ln203_502_reg_70271.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_486_fu_41791_p1.read()) + sc_bigint<11>(sext_ln203_502_reg_70271.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3244_fu_63604_p2() {
    add_ln703_3244_fu_63604_p2 = (!sext_ln203_505_fu_42509_p1.read().is_01() || !sext_ln1118_402_fu_39619_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_505_fu_42509_p1.read()) + sc_bigint<11>(sext_ln1118_402_fu_39619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3245_fu_63614_p2() {
    add_ln703_3245_fu_63614_p2 = (!sext_ln703_1801_fu_63600_p1.read().is_01() || !sext_ln703_1802_fu_63610_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1801_fu_63600_p1.read()) + sc_bigint<12>(sext_ln703_1802_fu_63610_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3246_fu_63624_p2() {
    add_ln703_3246_fu_63624_p2 = (!sext_ln203_507_fu_42517_p1.read().is_01() || !sext_ln203_506_fu_42513_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_507_fu_42517_p1.read()) + sc_bigint<11>(sext_ln203_506_fu_42513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3247_fu_63634_p2() {
    add_ln703_3247_fu_63634_p2 = (!zext_ln708_559_reg_70079.read().is_01() || !zext_ln708_521_fu_39774_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_559_reg_70079.read()) + sc_biguint<10>(zext_ln708_521_fu_39774_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3248_fu_63643_p2() {
    add_ln703_3248_fu_63643_p2 = (!sext_ln703_1804_fu_63630_p1.read().is_01() || !zext_ln703_562_fu_63639_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1804_fu_63630_p1.read()) + sc_biguint<12>(zext_ln703_562_fu_63639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3249_fu_63653_p2() {
    add_ln703_3249_fu_63653_p2 = (!sext_ln703_1803_fu_63620_p1.read().is_01() || !sext_ln703_1805_fu_63649_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1803_fu_63620_p1.read()) + sc_bigint<13>(sext_ln703_1805_fu_63649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_324_fu_17922_p2() {
    add_ln703_324_fu_17922_p2 = (!sext_ln203_43_fu_2336_p1.read().is_01() || !sext_ln703_97_fu_17918_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_43_fu_2336_p1.read()) + sc_bigint<14>(sext_ln703_97_fu_17918_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3250_fu_63663_p2() {
    add_ln703_3250_fu_63663_p2 = (!add_ln703_3242_fu_63589_p2.read().is_01() || !sext_ln703_1806_fu_63659_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3242_fu_63589_p2.read()) + sc_bigint<16>(sext_ln703_1806_fu_63659_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3251_fu_63669_p2() {
    add_ln703_3251_fu_63669_p2 = (!zext_ln708_569_fu_41643_p1.read().is_01() || !zext_ln708_551_fu_40735_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_569_fu_41643_p1.read()) + sc_biguint<10>(zext_ln708_551_fu_40735_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3252_fu_63679_p2() {
    add_ln703_3252_fu_63679_p2 = (!zext_ln203_245_fu_42489_p1.read().is_01() || !zext_ln1118_620_reg_70134.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_245_fu_42489_p1.read()) + sc_biguint<10>(zext_ln1118_620_reg_70134.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3253_fu_63688_p2() {
    add_ln703_3253_fu_63688_p2 = (!zext_ln703_563_fu_63675_p1.read().is_01() || !zext_ln703_564_fu_63684_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_563_fu_63675_p1.read()) + sc_biguint<11>(zext_ln703_564_fu_63684_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3254_fu_63698_p2() {
    add_ln703_3254_fu_63698_p2 = (!zext_ln1118_625_fu_41454_p1.read().is_01() || !zext_ln1118_642_fu_42394_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_625_fu_41454_p1.read()) + sc_biguint<10>(zext_ln1118_642_fu_42394_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3255_fu_63708_p2() {
    add_ln703_3255_fu_63708_p2 = (!sext_ln203_503_fu_42492_p1.read().is_01() || !zext_ln708_483_reg_69763.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_503_fu_42492_p1.read()) + sc_biguint<10>(zext_ln708_483_reg_69763.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3256_fu_63717_p2() {
    add_ln703_3256_fu_63717_p2 = (!zext_ln703_566_fu_63704_p1.read().is_01() || !sext_ln703_1807_fu_63713_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_566_fu_63704_p1.read()) + sc_bigint<12>(sext_ln703_1807_fu_63713_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3257_fu_63727_p2() {
    add_ln703_3257_fu_63727_p2 = (!zext_ln703_565_fu_63694_p1.read().is_01() || !sext_ln703_1808_fu_63723_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_565_fu_63694_p1.read()) + sc_bigint<13>(sext_ln703_1808_fu_63723_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3258_fu_63737_p2() {
    add_ln703_3258_fu_63737_p2 = (!sext_ln203_455_fu_40625_p1.read().is_01() || !sext_ln203_484_fu_41735_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_455_fu_40625_p1.read()) + sc_bigint<9>(sext_ln203_484_fu_41735_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3259_fu_63747_p2() {
    add_ln703_3259_fu_63747_p2 = (!zext_ln708_500_fu_39439_p1.read().is_01() || !zext_ln708_492_fu_39430_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_500_fu_39439_p1.read()) + sc_biguint<8>(zext_ln708_492_fu_39430_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_325_fu_17928_p2() {
    add_ln703_325_fu_17928_p2 = (!sext_ln708_83_fu_2372_p1.read().is_01() || !zext_ln1118_73_fu_2444_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_83_fu_2372_p1.read()) + sc_biguint<12>(zext_ln1118_73_fu_2444_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3260_fu_63757_p2() {
    add_ln703_3260_fu_63757_p2 = (!sext_ln703_1810_fu_63743_p1.read().is_01() || !zext_ln703_567_fu_63753_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1810_fu_63743_p1.read()) + sc_biguint<10>(zext_ln703_567_fu_63753_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3261_fu_63767_p2() {
    add_ln703_3261_fu_63767_p2 = (!zext_ln1118_518_fu_39445_p1.read().is_01() || !zext_ln1116_161_reg_69828.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_518_fu_39445_p1.read()) + sc_biguint<9>(zext_ln1116_161_reg_69828.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3262_fu_63776_p2() {
    add_ln703_3262_fu_63776_p2 = (!zext_ln708_508_fu_39657_p1.read().is_01() || !zext_ln1116_165_fu_39495_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_508_fu_39657_p1.read()) + sc_biguint<9>(zext_ln1116_165_fu_39495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3263_fu_63786_p2() {
    add_ln703_3263_fu_63786_p2 = (!zext_ln703_568_fu_63772_p1.read().is_01() || !zext_ln703_569_fu_63782_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_568_fu_63772_p1.read()) + sc_biguint<10>(zext_ln703_569_fu_63782_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3264_fu_63796_p2() {
    add_ln703_3264_fu_63796_p2 = (!sext_ln703_1811_fu_63763_p1.read().is_01() || !zext_ln703_570_fu_63792_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1811_fu_63763_p1.read()) + sc_biguint<12>(zext_ln703_570_fu_63792_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3265_fu_63806_p2() {
    add_ln703_3265_fu_63806_p2 = (!sext_ln703_1809_fu_63733_p1.read().is_01() || !sext_ln703_1812_fu_63802_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1809_fu_63733_p1.read()) + sc_bigint<14>(sext_ln703_1812_fu_63802_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3267_fu_24988_p2() {
    add_ln703_3267_fu_24988_p2 = (!sext_ln203_472_fu_15660_p1.read().is_01() || !ap_const_lv12_300.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_472_fu_15660_p1.read()) + sc_biguint<12>(ap_const_lv12_300));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3268_fu_24998_p2() {
    add_ln703_3268_fu_24998_p2 = (!sext_ln203_433_fu_13624_p1.read().is_01() || !sext_ln703_875_fu_24994_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_433_fu_13624_p1.read()) + sc_bigint<13>(sext_ln703_875_fu_24994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3269_fu_25004_p2() {
    add_ln703_3269_fu_25004_p2 = (!zext_ln203_215_fu_14598_p1.read().is_01() || !sext_ln1118_471_fu_16598_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_215_fu_14598_p1.read()) + sc_bigint<11>(sext_ln1118_471_fu_16598_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_326_fu_17938_p2() {
    add_ln703_326_fu_17938_p2 = (!zext_ln708_56_fu_2412_p1.read().is_01() || !sext_ln703_98_fu_17934_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_56_fu_2412_p1.read()) + sc_bigint<13>(sext_ln703_98_fu_17934_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3270_fu_25014_p2() {
    add_ln703_3270_fu_25014_p2 = (!add_ln703_3268_fu_24998_p2.read().is_01() || !sext_ln703_1814_fu_25010_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3268_fu_24998_p2.read()) + sc_bigint<13>(sext_ln703_1814_fu_25010_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3271_fu_25024_p2() {
    add_ln703_3271_fu_25024_p2 = (!zext_ln203_246_fu_16622_p1.read().is_01() || !sext_ln1118_472_fu_16642_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_246_fu_16622_p1.read()) + sc_bigint<12>(sext_ln1118_472_fu_16642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3272_fu_25034_p2() {
    add_ln703_3272_fu_25034_p2 = (!sext_ln703_876_fu_25020_p1.read().is_01() || !sext_ln703_1815_fu_25030_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_876_fu_25020_p1.read()) + sc_bigint<14>(sext_ln703_1815_fu_25030_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3273_fu_25040_p2() {
    add_ln703_3273_fu_25040_p2 = (!zext_ln708_531_fu_14368_p1.read().is_01() || !zext_ln708_578_fu_16138_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_531_fu_14368_p1.read()) + sc_biguint<10>(zext_ln708_578_fu_16138_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3274_fu_25050_p2() {
    add_ln703_3274_fu_25050_p2 = (!sext_ln708_251_fu_16618_p1.read().is_01() || !zext_ln703_571_fu_25046_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_251_fu_16618_p1.read()) + sc_biguint<12>(zext_ln703_571_fu_25046_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3275_fu_25060_p2() {
    add_ln703_3275_fu_25060_p2 = (!add_ln703_3272_fu_25034_p2.read().is_01() || !sext_ln703_1816_fu_25056_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3272_fu_25034_p2.read()) + sc_bigint<14>(sext_ln703_1816_fu_25056_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3276_fu_25066_p2() {
    add_ln703_3276_fu_25066_p2 = (!sext_ln1118_473_fu_16666_p1.read().is_01() || !add_ln703_3275_fu_25060_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_473_fu_16666_p1.read()) + sc_biguint<14>(add_ln703_3275_fu_25060_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3277_fu_63825_p2() {
    add_ln703_3277_fu_63825_p2 = (!sext_ln1118_476_fu_42567_p1.read().is_01() || !sext_ln708_239_reg_70085.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_476_fu_42567_p1.read()) + sc_bigint<12>(sext_ln708_239_reg_70085.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3278_fu_63834_p2() {
    add_ln703_3278_fu_63834_p2 = (!sext_ln703_1817_fu_63822_p1.read().is_01() || !sext_ln703_1818_fu_63830_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1817_fu_63822_p1.read()) + sc_bigint<15>(sext_ln703_1818_fu_63830_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3279_fu_63840_p2() {
    add_ln703_3279_fu_63840_p2 = (!sext_ln708_253_fu_42591_p1.read().is_01() || !sext_ln1118_474_fu_42545_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_253_fu_42591_p1.read()) + sc_bigint<11>(sext_ln1118_474_fu_42545_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_327_fu_17948_p2() {
    add_ln703_327_fu_17948_p2 = (!add_ln703_324_fu_17922_p2.read().is_01() || !sext_ln703_99_fu_17944_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_324_fu_17922_p2.read()) + sc_bigint<14>(sext_ln703_99_fu_17944_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3280_fu_63850_p2() {
    add_ln703_3280_fu_63850_p2 = (!sext_ln203_450_fu_40401_p1.read().is_01() || !sext_ln1116_70_fu_40639_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_450_fu_40401_p1.read()) + sc_bigint<10>(sext_ln1116_70_fu_40639_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3281_fu_63860_p2() {
    add_ln703_3281_fu_63860_p2 = (!sext_ln1118_409_reg_69925.read().is_01() || !sext_ln703_1820_fu_63856_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_409_reg_69925.read()) + sc_bigint<11>(sext_ln703_1820_fu_63856_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3282_fu_63869_p2() {
    add_ln703_3282_fu_63869_p2 = (!sext_ln703_1819_fu_63846_p1.read().is_01() || !sext_ln703_1821_fu_63865_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1819_fu_63846_p1.read()) + sc_bigint<12>(sext_ln703_1821_fu_63865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3283_fu_63879_p2() {
    add_ln703_3283_fu_63879_p2 = (!add_ln703_3278_fu_63834_p2.read().is_01() || !sext_ln703_1822_fu_63875_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3278_fu_63834_p2.read()) + sc_bigint<15>(sext_ln703_1822_fu_63875_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3284_fu_63885_p2() {
    add_ln703_3284_fu_63885_p2 = (!sext_ln203_513_fu_42703_p1.read().is_01() || !sext_ln203_477_fu_41573_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_513_fu_42703_p1.read()) + sc_bigint<12>(sext_ln203_477_fu_41573_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3285_fu_63895_p2() {
    add_ln703_3285_fu_63895_p2 = (!add_ln703_3283_fu_63879_p2.read().is_01() || !sext_ln703_1823_fu_63891_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3283_fu_63879_p2.read()) + sc_bigint<15>(sext_ln703_1823_fu_63891_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3286_fu_63901_p2() {
    add_ln703_3286_fu_63901_p2 = (!sext_ln203_510_fu_42611_p1.read().is_01() || !sext_ln203_514_fu_42726_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_510_fu_42611_p1.read()) + sc_bigint<12>(sext_ln203_514_fu_42726_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3287_fu_63911_p2() {
    add_ln703_3287_fu_63911_p2 = (!zext_ln203_247_fu_42631_p1.read().is_01() || !sext_ln203_486_fu_41791_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_247_fu_42631_p1.read()) + sc_bigint<11>(sext_ln203_486_fu_41791_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3288_fu_63921_p2() {
    add_ln703_3288_fu_63921_p2 = (!sext_ln703_1824_fu_63907_p1.read().is_01() || !sext_ln703_1825_fu_63917_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1824_fu_63907_p1.read()) + sc_bigint<13>(sext_ln703_1825_fu_63917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3289_fu_63931_p2() {
    add_ln703_3289_fu_63931_p2 = (!add_ln703_3285_fu_63895_p2.read().is_01() || !sext_ln703_1826_fu_63927_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3285_fu_63895_p2.read()) + sc_bigint<15>(sext_ln703_1826_fu_63927_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_328_fu_44350_p2() {
    add_ln703_328_fu_44350_p2 = (!sext_ln203_47_fu_27184_p1.read().is_01() || !sext_ln1118_73_fu_27181_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_47_fu_27184_p1.read()) + sc_bigint<12>(sext_ln1118_73_fu_27181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3290_fu_63941_p2() {
    add_ln703_3290_fu_63941_p2 = (!sext_ln1116_78_fu_42317_p1.read().is_01() || !sext_ln203_516_fu_42734_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_78_fu_42317_p1.read()) + sc_bigint<10>(sext_ln203_516_fu_42734_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3291_fu_63951_p2() {
    add_ln703_3291_fu_63951_p2 = (!zext_ln203_248_fu_42675_p1.read().is_01() || !sext_ln703_1828_fu_63947_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_248_fu_42675_p1.read()) + sc_bigint<11>(sext_ln703_1828_fu_63947_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3292_fu_63961_p2() {
    add_ln703_3292_fu_63961_p2 = (!sext_ln203_461_fu_41070_p1.read().is_01() || !sext_ln203_511_fu_42651_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_461_fu_41070_p1.read()) + sc_bigint<9>(sext_ln203_511_fu_42651_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3293_fu_63971_p2() {
    add_ln703_3293_fu_63971_p2 = (!zext_ln1118_531_fu_39587_p1.read().is_01() || !sext_ln203_515_fu_42730_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_531_fu_39587_p1.read()) + sc_bigint<10>(sext_ln203_515_fu_42730_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3294_fu_63981_p2() {
    add_ln703_3294_fu_63981_p2 = (!sext_ln703_1830_fu_63967_p1.read().is_01() || !sext_ln703_1831_fu_63977_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1830_fu_63967_p1.read()) + sc_bigint<11>(sext_ln703_1831_fu_63977_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3295_fu_63991_p2() {
    add_ln703_3295_fu_63991_p2 = (!sext_ln703_1829_fu_63957_p1.read().is_01() || !sext_ln703_1832_fu_63987_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1829_fu_63957_p1.read()) + sc_bigint<12>(sext_ln703_1832_fu_63987_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3297_fu_25072_p2() {
    add_ln703_3297_fu_25072_p2 = (!zext_ln708_605_fu_16706_p1.read().is_01() || !ap_const_lv11_480.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_605_fu_16706_p1.read()) + sc_bigint<11>(ap_const_lv11_480));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3298_fu_25078_p2() {
    add_ln703_3298_fu_25078_p2 = (!zext_ln708_604_fu_16686_p1.read().is_01() || !add_ln703_3297_fu_25072_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_604_fu_16686_p1.read()) + sc_biguint<11>(add_ln703_3297_fu_25072_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3299_fu_25088_p2() {
    add_ln703_3299_fu_25088_p2 = (!sext_ln203_517_fu_16726_p1.read().is_01() || !sext_ln703_879_fu_25084_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_517_fu_16726_p1.read()) + sc_bigint<12>(sext_ln703_879_fu_25084_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_329_fu_44360_p2() {
    add_ln703_329_fu_44360_p2 = (!sext_ln703_100_fu_44347_p1.read().is_01() || !sext_ln703_101_fu_44356_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_100_fu_44347_p1.read()) + sc_bigint<15>(sext_ln703_101_fu_44356_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3300_fu_25094_p2() {
    add_ln703_3300_fu_25094_p2 = (!sext_ln1118_479_fu_16730_p1.read().is_01() || !sext_ln1118_480_fu_16744_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_479_fu_16730_p1.read()) + sc_bigint<11>(sext_ln1118_480_fu_16744_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3301_fu_25104_p2() {
    add_ln703_3301_fu_25104_p2 = (!add_ln703_3299_fu_25088_p2.read().is_01() || !sext_ln703_1834_fu_25100_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3299_fu_25088_p2.read()) + sc_bigint<12>(sext_ln703_1834_fu_25100_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3302_fu_25114_p2() {
    add_ln703_3302_fu_25114_p2 = (!sext_ln203_518_fu_16764_p1.read().is_01() || !sext_ln703_1835_fu_25110_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_518_fu_16764_p1.read()) + sc_bigint<13>(sext_ln703_1835_fu_25110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3303_fu_25124_p2() {
    add_ln703_3303_fu_25124_p2 = (!zext_ln1118_644_fu_16788_p1.read().is_01() || !sext_ln1118_472_fu_16642_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_644_fu_16788_p1.read()) + sc_bigint<12>(sext_ln1118_472_fu_16642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3304_fu_25134_p2() {
    add_ln703_3304_fu_25134_p2 = (!sext_ln703_1836_fu_25120_p1.read().is_01() || !sext_ln703_1837_fu_25130_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1836_fu_25120_p1.read()) + sc_bigint<14>(sext_ln703_1837_fu_25130_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3305_fu_64007_p2() {
    add_ln703_3305_fu_64007_p2 = (!zext_ln708_495_fu_39436_p1.read().is_01() || !sext_ln203_495_fu_42385_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_495_fu_39436_p1.read()) + sc_bigint<10>(sext_ln203_495_fu_42385_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3306_fu_64017_p2() {
    add_ln703_3306_fu_64017_p2 = (!zext_ln708_581_fu_41949_p1.read().is_01() || !zext_ln708_500_fu_39439_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_581_fu_41949_p1.read()) + sc_biguint<8>(zext_ln708_500_fu_39439_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3307_fu_64027_p2() {
    add_ln703_3307_fu_64027_p2 = (!sext_ln703_1838_fu_64013_p1.read().is_01() || !zext_ln703_572_fu_64023_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1838_fu_64013_p1.read()) + sc_biguint<11>(zext_ln703_572_fu_64023_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3308_fu_64037_p2() {
    add_ln703_3308_fu_64037_p2 = (!add_ln703_3304_reg_71127.read().is_01() || !sext_ln703_1839_fu_64033_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3304_reg_71127.read()) + sc_bigint<14>(sext_ln703_1839_fu_64033_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3309_fu_64042_p2() {
    add_ln703_3309_fu_64042_p2 = (!sext_ln1116_81_fu_42766_p1.read().is_01() || !sext_ln203_487_fu_41859_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_81_fu_42766_p1.read()) + sc_bigint<12>(sext_ln203_487_fu_41859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_330_fu_44366_p2() {
    add_ln703_330_fu_44366_p2 = (!zext_ln708_59_fu_27173_p1.read().is_01() || !sext_ln708_84_fu_27239_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_59_fu_27173_p1.read()) + sc_bigint<12>(sext_ln708_84_fu_27239_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3310_fu_64052_p2() {
    add_ln703_3310_fu_64052_p2 = (!add_ln703_3308_fu_64037_p2.read().is_01() || !sext_ln703_1840_fu_64048_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3308_fu_64037_p2.read()) + sc_bigint<14>(sext_ln703_1840_fu_64048_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3311_fu_64062_p2() {
    add_ln703_3311_fu_64062_p2 = (!sext_ln1116_82_fu_42815_p1.read().is_01() || !sext_ln1118_402_fu_39619_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_82_fu_42815_p1.read()) + sc_bigint<11>(sext_ln1118_402_fu_39619_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3312_fu_64072_p2() {
    add_ln703_3312_fu_64072_p2 = (!sext_ln708_255_fu_42792_p1.read().is_01() || !sext_ln703_1842_fu_64068_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_255_fu_42792_p1.read()) + sc_bigint<12>(sext_ln703_1842_fu_64068_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3313_fu_64082_p2() {
    add_ln703_3313_fu_64082_p2 = (!sext_ln703_1841_fu_64058_p1.read().is_01() || !sext_ln703_1843_fu_64078_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1841_fu_64058_p1.read()) + sc_bigint<15>(sext_ln703_1843_fu_64078_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3314_fu_64088_p2() {
    add_ln703_3314_fu_64088_p2 = (!zext_ln1116_163_fu_39489_p1.read().is_01() || !zext_ln708_603_fu_42671_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_163_fu_39489_p1.read()) + sc_biguint<10>(zext_ln708_603_fu_42671_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3315_fu_64098_p2() {
    add_ln703_3315_fu_64098_p2 = (!sext_ln708_256_fu_42819_p1.read().is_01() || !zext_ln703_573_fu_64094_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_256_fu_42819_p1.read()) + sc_biguint<12>(zext_ln703_573_fu_64094_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3316_fu_64104_p2() {
    add_ln703_3316_fu_64104_p2 = (!zext_ln1116_172_fu_39709_p1.read().is_01() || !zext_ln1118_524_fu_39505_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_172_fu_39709_p1.read()) + sc_biguint<9>(zext_ln1118_524_fu_39505_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3317_fu_64114_p2() {
    add_ln703_3317_fu_64114_p2 = (!zext_ln708_553_fu_40749_p1.read().is_01() || !zext_ln703_574_fu_64110_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_553_fu_40749_p1.read()) + sc_biguint<10>(zext_ln703_574_fu_64110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3318_fu_64124_p2() {
    add_ln703_3318_fu_64124_p2 = (!add_ln703_3315_fu_64098_p2.read().is_01() || !zext_ln703_575_fu_64120_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3315_fu_64098_p2.read()) + sc_biguint<12>(zext_ln703_575_fu_64120_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3319_fu_64134_p2() {
    add_ln703_3319_fu_64134_p2 = (!add_ln703_3313_fu_64082_p2.read().is_01() || !sext_ln703_1844_fu_64130_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3313_fu_64082_p2.read()) + sc_bigint<15>(sext_ln703_1844_fu_64130_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_331_fu_44376_p2() {
    add_ln703_331_fu_44376_p2 = (!sext_ln1118_76_fu_27207_p1.read().is_01() || !sext_ln703_102_fu_44372_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_76_fu_27207_p1.read()) + sc_bigint<13>(sext_ln703_102_fu_44372_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3320_fu_64140_p2() {
    add_ln703_3320_fu_64140_p2 = (!sext_ln203_508_fu_42537_p1.read().is_01() || !add_ln703_3319_fu_64134_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_508_fu_42537_p1.read()) + sc_biguint<15>(add_ln703_3319_fu_64134_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3321_fu_64146_p2() {
    add_ln703_3321_fu_64146_p2 = (!sext_ln203_519_fu_42823_p1.read().is_01() || !sext_ln203_471_fu_41441_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_519_fu_42823_p1.read()) + sc_bigint<12>(sext_ln203_471_fu_41441_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3323_fu_25140_p2() {
    add_ln703_3323_fu_25140_p2 = (!zext_ln708_570_fu_15962_p1.read().is_01() || !sext_ln708_257_fu_16808_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_570_fu_15962_p1.read()) + sc_bigint<11>(sext_ln708_257_fu_16808_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3324_fu_25150_p2() {
    add_ln703_3324_fu_25150_p2 = (!sext_ln203_520_fu_16812_p1.read().is_01() || !sext_ln703_1847_fu_25146_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_520_fu_16812_p1.read()) + sc_bigint<12>(sext_ln703_1847_fu_25146_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3325_fu_25160_p2() {
    add_ln703_3325_fu_25160_p2 = (!zext_ln708_547_fu_14930_p1.read().is_01() || !sext_ln203_502_fu_16560_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_547_fu_14930_p1.read()) + sc_bigint<11>(sext_ln203_502_fu_16560_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3326_fu_25170_p2() {
    add_ln703_3326_fu_25170_p2 = (!sext_ln703_1848_fu_25156_p1.read().is_01() || !sext_ln703_1849_fu_25166_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1848_fu_25156_p1.read()) + sc_bigint<13>(sext_ln703_1849_fu_25166_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3327_fu_25180_p2() {
    add_ln703_3327_fu_25180_p2 = (!sext_ln708_258_fu_16866_p1.read().is_01() || !sext_ln1118_481_fu_16836_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_258_fu_16866_p1.read()) + sc_bigint<12>(sext_ln1118_481_fu_16836_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3328_fu_25190_p2() {
    add_ln703_3328_fu_25190_p2 = (!sext_ln703_885_fu_25176_p1.read().is_01() || !sext_ln703_1850_fu_25186_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_885_fu_25176_p1.read()) + sc_bigint<14>(sext_ln703_1850_fu_25186_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3329_fu_25196_p2() {
    add_ln703_3329_fu_25196_p2 = (!zext_ln708_531_fu_14368_p1.read().is_01() || !zext_ln1118_556_fu_14408_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_531_fu_14368_p1.read()) + sc_biguint<10>(zext_ln1118_556_fu_14408_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_332_fu_44386_p2() {
    add_ln703_332_fu_44386_p2 = (!add_ln703_329_fu_44360_p2.read().is_01() || !sext_ln703_103_fu_44382_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_329_fu_44360_p2.read()) + sc_bigint<15>(sext_ln703_103_fu_44382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3330_fu_25206_p2() {
    add_ln703_3330_fu_25206_p2 = (!zext_ln708_608_fu_16890_p1.read().is_01() || !zext_ln703_576_fu_25202_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_608_fu_16890_p1.read()) + sc_biguint<11>(zext_ln703_576_fu_25202_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3331_fu_25216_p2() {
    add_ln703_3331_fu_25216_p2 = (!add_ln703_3328_fu_25190_p2.read().is_01() || !zext_ln703_577_fu_25212_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3328_fu_25190_p2.read()) + sc_biguint<14>(zext_ln703_577_fu_25212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3332_fu_64169_p2() {
    add_ln703_3332_fu_64169_p2 = (!sext_ln1118_485_fu_42886_p1.read().is_01() || !sext_ln1118_483_fu_42826_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_485_fu_42886_p1.read()) + sc_bigint<12>(sext_ln1118_483_fu_42826_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3333_fu_64179_p2() {
    add_ln703_3333_fu_64179_p2 = (!sext_ln703_886_fu_64166_p1.read().is_01() || !sext_ln703_1851_fu_64175_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_886_fu_64166_p1.read()) + sc_bigint<15>(sext_ln703_1851_fu_64175_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3334_fu_64185_p2() {
    add_ln703_3334_fu_64185_p2 = (!zext_ln708_610_fu_42882_p1.read().is_01() || !zext_ln708_609_fu_42863_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_610_fu_42882_p1.read()) + sc_biguint<11>(zext_ln708_609_fu_42863_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3335_fu_64195_p2() {
    add_ln703_3335_fu_64195_p2 = (!sext_ln1118_486_fu_42889_p1.read().is_01() || !zext_ln703_578_fu_64191_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_486_fu_42889_p1.read()) + sc_biguint<13>(zext_ln703_578_fu_64191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3336_fu_64205_p2() {
    add_ln703_3336_fu_64205_p2 = (!add_ln703_3333_fu_64179_p2.read().is_01() || !sext_ln703_1852_fu_64201_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3333_fu_64179_p2.read()) + sc_bigint<15>(sext_ln703_1852_fu_64201_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3337_fu_64211_p2() {
    add_ln703_3337_fu_64211_p2 = (!zext_ln1118_548_fu_39835_p1.read().is_01() || !sext_ln1118_484_fu_42844_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_548_fu_39835_p1.read()) + sc_bigint<11>(sext_ln1118_484_fu_42844_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3338_fu_64221_p2() {
    add_ln703_3338_fu_64221_p2 = (!sext_ln708_252_fu_42587_p1.read().is_01() || !sext_ln703_1853_fu_64217_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_252_fu_42587_p1.read()) + sc_bigint<12>(sext_ln703_1853_fu_64217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3339_fu_64227_p2() {
    add_ln703_3339_fu_64227_p2 = (!zext_ln1116_165_fu_39495_p1.read().is_01() || !zext_ln1118_624_fu_41451_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_165_fu_39495_p1.read()) + sc_biguint<9>(zext_ln1118_624_fu_41451_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_333_fu_44392_p2() {
    add_ln703_333_fu_44392_p2 = (!zext_ln1118_74_fu_27177_p1.read().is_01() || !zext_ln708_46_fu_26664_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_74_fu_27177_p1.read()) + sc_biguint<11>(zext_ln708_46_fu_26664_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3340_fu_64237_p2() {
    add_ln703_3340_fu_64237_p2 = (!sext_ln203_521_fu_42909_p1.read().is_01() || !zext_ln703_579_fu_64233_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_521_fu_42909_p1.read()) + sc_biguint<10>(zext_ln703_579_fu_64233_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3341_fu_64247_p2() {
    add_ln703_3341_fu_64247_p2 = (!add_ln703_3338_fu_64221_p2.read().is_01() || !sext_ln703_1854_fu_64243_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3338_fu_64221_p2.read()) + sc_bigint<12>(sext_ln703_1854_fu_64243_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3342_fu_64257_p2() {
    add_ln703_3342_fu_64257_p2 = (!add_ln703_3336_fu_64205_p2.read().is_01() || !sext_ln703_1855_fu_64253_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3336_fu_64205_p2.read()) + sc_bigint<15>(sext_ln703_1855_fu_64253_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3343_fu_64263_p2() {
    add_ln703_3343_fu_64263_p2 = (!sext_ln203_522_fu_42913_p1.read().is_01() || !add_ln703_3342_fu_64257_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_522_fu_42913_p1.read()) + sc_biguint<15>(add_ln703_3342_fu_64257_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3344_fu_64269_p2() {
    add_ln703_3344_fu_64269_p2 = (!sext_ln203_523_fu_42947_p1.read().is_01() || !sext_ln203_513_fu_42703_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_523_fu_42947_p1.read()) + sc_bigint<12>(sext_ln203_513_fu_42703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3345_fu_64279_p2() {
    add_ln703_3345_fu_64279_p2 = (!add_ln703_3343_fu_64263_p2.read().is_01() || !sext_ln703_1856_fu_64275_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3343_fu_64263_p2.read()) + sc_bigint<15>(sext_ln703_1856_fu_64275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3346_fu_64289_p2() {
    add_ln703_3346_fu_64289_p2 = (!sext_ln203_445_fu_40365_p1.read().is_01() || !sext_ln203_505_fu_42509_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_445_fu_40365_p1.read()) + sc_bigint<11>(sext_ln203_505_fu_42509_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3347_fu_64299_p2() {
    add_ln703_3347_fu_64299_p2 = (!zext_ln203_249_fu_42927_p1.read().is_01() || !sext_ln203_499_fu_42473_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_249_fu_42927_p1.read()) + sc_bigint<9>(sext_ln203_499_fu_42473_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3348_fu_64309_p2() {
    add_ln703_3348_fu_64309_p2 = (!sext_ln203_447_fu_40387_p1.read().is_01() || !sext_ln703_1859_fu_64305_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_447_fu_40387_p1.read()) + sc_bigint<11>(sext_ln703_1859_fu_64305_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3349_fu_64319_p2() {
    add_ln703_3349_fu_64319_p2 = (!sext_ln703_1858_fu_64295_p1.read().is_01() || !sext_ln703_1860_fu_64315_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1858_fu_64295_p1.read()) + sc_bigint<12>(sext_ln703_1860_fu_64315_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_334_fu_44402_p2() {
    add_ln703_334_fu_44402_p2 = (!zext_ln708_62_fu_27267_p1.read().is_01() || !zext_ln703_15_fu_44398_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_62_fu_27267_p1.read()) + sc_biguint<12>(zext_ln703_15_fu_44398_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3351_fu_25222_p2() {
    add_ln703_3351_fu_25222_p2 = (!sext_ln1118_487_fu_16934_p1.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_487_fu_16934_p1.read()) + sc_bigint<11>(ap_const_lv11_780));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3352_fu_25232_p2() {
    add_ln703_3352_fu_25232_p2 = (!sext_ln1118_489_fu_16962_p1.read().is_01() || !sext_ln1118_488_fu_16938_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_489_fu_16962_p1.read()) + sc_bigint<12>(sext_ln1118_488_fu_16938_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3353_fu_25242_p2() {
    add_ln703_3353_fu_25242_p2 = (!sext_ln703_888_fu_25228_p1.read().is_01() || !sext_ln703_1862_fu_25238_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_888_fu_25228_p1.read()) + sc_bigint<13>(sext_ln703_1862_fu_25238_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3354_fu_25248_p2() {
    add_ln703_3354_fu_25248_p2 = (!sext_ln1118_490_fu_16966_p1.read().is_01() || !zext_ln1118_650_fu_16986_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_490_fu_16966_p1.read()) + sc_biguint<11>(zext_ln1118_650_fu_16986_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3355_fu_25258_p2() {
    add_ln703_3355_fu_25258_p2 = (!add_ln703_3353_fu_25242_p2.read().is_01() || !sext_ln703_1863_fu_25254_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3353_fu_25242_p2.read()) + sc_bigint<13>(sext_ln703_1863_fu_25254_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3356_fu_25264_p2() {
    add_ln703_3356_fu_25264_p2 = (!sext_ln203_525_fu_16974_p1.read().is_01() || !sext_ln203_524_fu_16970_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_525_fu_16974_p1.read()) + sc_bigint<9>(sext_ln203_524_fu_16970_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3357_fu_25274_p2() {
    add_ln703_3357_fu_25274_p2 = (!zext_ln1118_512_fu_13696_p1.read().is_01() || !sext_ln708_260_fu_16982_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_512_fu_13696_p1.read()) + sc_bigint<10>(sext_ln708_260_fu_16982_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3358_fu_25284_p2() {
    add_ln703_3358_fu_25284_p2 = (!sext_ln703_1864_fu_25270_p1.read().is_01() || !sext_ln703_1865_fu_25280_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1864_fu_25270_p1.read()) + sc_bigint<11>(sext_ln703_1865_fu_25280_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3359_fu_25294_p2() {
    add_ln703_3359_fu_25294_p2 = (!add_ln703_3355_fu_25258_p2.read().is_01() || !sext_ln703_1866_fu_25290_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3355_fu_25258_p2.read()) + sc_bigint<13>(sext_ln703_1866_fu_25290_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_335_fu_44412_p2() {
    add_ln703_335_fu_44412_p2 = (!zext_ln1116_12_fu_26241_p1.read().is_01() || !zext_ln1118_20_fu_26191_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_12_fu_26241_p1.read()) + sc_biguint<9>(zext_ln1118_20_fu_26191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3360_fu_25304_p2() {
    add_ln703_3360_fu_25304_p2 = (!sext_ln1118_492_fu_17020_p1.read().is_01() || !sext_ln703_1867_fu_25300_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_492_fu_17020_p1.read()) + sc_bigint<14>(sext_ln703_1867_fu_25300_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3361_fu_25310_p2() {
    add_ln703_3361_fu_25310_p2 = (!sext_ln1118_495_fu_17032_p1.read().is_01() || !sext_ln1118_494_fu_17028_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_495_fu_17032_p1.read()) + sc_bigint<12>(sext_ln1118_494_fu_17028_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3362_fu_25320_p2() {
    add_ln703_3362_fu_25320_p2 = (!add_ln703_3360_fu_25304_p2.read().is_01() || !sext_ln703_1868_fu_25316_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3360_fu_25304_p2.read()) + sc_bigint<14>(sext_ln703_1868_fu_25316_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3363_fu_25326_p2() {
    add_ln703_3363_fu_25326_p2 = (!zext_ln1118_543_fu_14178_p1.read().is_01() || !sext_ln1118_429_fu_15370_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_543_fu_14178_p1.read()) + sc_bigint<12>(sext_ln1118_429_fu_15370_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3364_fu_25336_p2() {
    add_ln703_3364_fu_25336_p2 = (!sext_ln1118_425_fu_15112_p1.read().is_01() || !sext_ln1118_468_fu_16556_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_425_fu_15112_p1.read()) + sc_bigint<11>(sext_ln1118_468_fu_16556_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3365_fu_25346_p2() {
    add_ln703_3365_fu_25346_p2 = (!sext_ln1118_491_fu_17000_p1.read().is_01() || !sext_ln703_1871_fu_25342_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_491_fu_17000_p1.read()) + sc_bigint<12>(sext_ln703_1871_fu_25342_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3366_fu_25356_p2() {
    add_ln703_3366_fu_25356_p2 = (!sext_ln703_1870_fu_25332_p1.read().is_01() || !sext_ln703_1872_fu_25352_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1870_fu_25332_p1.read()) + sc_bigint<13>(sext_ln703_1872_fu_25352_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3367_fu_64341_p2() {
    add_ln703_3367_fu_64341_p2 = (!sext_ln703_1869_fu_64335_p1.read().is_01() || !sext_ln703_1873_fu_64338_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1869_fu_64335_p1.read()) + sc_bigint<15>(sext_ln703_1873_fu_64338_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3368_fu_64347_p2() {
    add_ln703_3368_fu_64347_p2 = (!sext_ln203_527_fu_43071_p1.read().is_01() || !sext_ln203_526_fu_42971_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_527_fu_43071_p1.read()) + sc_bigint<12>(sext_ln203_526_fu_42971_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3369_fu_64357_p2() {
    add_ln703_3369_fu_64357_p2 = (!add_ln703_3367_fu_64341_p2.read().is_01() || !sext_ln703_1874_fu_64353_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3367_fu_64341_p2.read()) + sc_bigint<15>(sext_ln703_1874_fu_64353_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_336_fu_44422_p2() {
    add_ln703_336_fu_44422_p2 = (!sext_ln203_46_fu_27150_p1.read().is_01() || !zext_ln703_17_fu_44418_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_46_fu_27150_p1.read()) + sc_biguint<11>(zext_ln703_17_fu_44418_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3370_fu_64363_p2() {
    add_ln703_3370_fu_64363_p2 = (!sext_ln203_529_fu_43114_p1.read().is_01() || !sext_ln203_469_fu_41395_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_529_fu_43114_p1.read()) + sc_bigint<12>(sext_ln203_469_fu_41395_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3371_fu_64373_p2() {
    add_ln703_3371_fu_64373_p2 = (!zext_ln203_251_fu_42999_p1.read().is_01() || !sext_ln203_481_fu_41699_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_251_fu_42999_p1.read()) + sc_bigint<12>(sext_ln203_481_fu_41699_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3372_fu_64383_p2() {
    add_ln703_3372_fu_64383_p2 = (!sext_ln703_1875_fu_64369_p1.read().is_01() || !sext_ln703_1876_fu_64379_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1875_fu_64369_p1.read()) + sc_bigint<13>(sext_ln703_1876_fu_64379_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3373_fu_64393_p2() {
    add_ln703_3373_fu_64393_p2 = (!add_ln703_3369_fu_64357_p2.read().is_01() || !sext_ln703_1877_fu_64389_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3369_fu_64357_p2.read()) + sc_bigint<15>(sext_ln703_1877_fu_64389_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3374_fu_64403_p2() {
    add_ln703_3374_fu_64403_p2 = (!zext_ln708_614_fu_43047_p1.read().is_01() || !zext_ln708_612_fu_43019_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_614_fu_43047_p1.read()) + sc_biguint<11>(zext_ln708_612_fu_43019_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3375_fu_64413_p2() {
    add_ln703_3375_fu_64413_p2 = (!sext_ln203_528_fu_43091_p1.read().is_01() || !sext_ln1116_82_fu_42815_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_528_fu_43091_p1.read()) + sc_bigint<11>(sext_ln1116_82_fu_42815_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3376_fu_64423_p2() {
    add_ln703_3376_fu_64423_p2 = (!zext_ln703_580_fu_64409_p1.read().is_01() || !sext_ln703_1879_fu_64419_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_580_fu_64409_p1.read()) + sc_bigint<13>(sext_ln703_1879_fu_64419_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3377_fu_64429_p2() {
    add_ln703_3377_fu_64429_p2 = (!zext_ln203_244_fu_42477_p1.read().is_01() || !zext_ln203_250_fu_42975_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_244_fu_42477_p1.read()) + sc_biguint<10>(zext_ln203_250_fu_42975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3378_fu_64439_p2() {
    add_ln703_3378_fu_64439_p2 = (!zext_ln203_249_fu_42927_p1.read().is_01() || !zext_ln708_511_fu_39669_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_249_fu_42927_p1.read()) + sc_biguint<9>(zext_ln708_511_fu_39669_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3379_fu_64449_p2() {
    add_ln703_3379_fu_64449_p2 = (!zext_ln703_581_fu_64435_p1.read().is_01() || !zext_ln703_582_fu_64445_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_581_fu_64435_p1.read()) + sc_biguint<11>(zext_ln703_582_fu_64445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_337_fu_44432_p2() {
    add_ln703_337_fu_44432_p2 = (!zext_ln703_16_fu_44408_p1.read().is_01() || !sext_ln703_104_fu_44428_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_16_fu_44408_p1.read()) + sc_bigint<13>(sext_ln703_104_fu_44428_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3380_fu_64459_p2() {
    add_ln703_3380_fu_64459_p2 = (!add_ln703_3376_fu_64423_p2.read().is_01() || !zext_ln703_583_fu_64455_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3376_fu_64423_p2.read()) + sc_biguint<13>(zext_ln703_583_fu_64455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3382_fu_25362_p2() {
    add_ln703_3382_fu_25362_p2 = (!zext_ln203_253_fu_17042_p1.read().is_01() || !sext_ln203_472_fu_15660_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_253_fu_17042_p1.read()) + sc_bigint<12>(sext_ln203_472_fu_15660_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3383_fu_25372_p2() {
    add_ln703_3383_fu_25372_p2 = (!sext_ln203_433_fu_13624_p1.read().is_01() || !sext_ln703_892_fu_25368_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_433_fu_13624_p1.read()) + sc_bigint<13>(sext_ln703_892_fu_25368_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3384_fu_25378_p2() {
    add_ln703_3384_fu_25378_p2 = (!zext_ln1118_652_fu_17046_p1.read().is_01() || !zext_ln708_572_fu_16014_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_652_fu_17046_p1.read()) + sc_biguint<11>(zext_ln708_572_fu_16014_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3385_fu_25388_p2() {
    add_ln703_3385_fu_25388_p2 = (!add_ln703_3383_fu_25372_p2.read().is_01() || !zext_ln703_584_fu_25384_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3383_fu_25372_p2.read()) + sc_biguint<13>(zext_ln703_584_fu_25384_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3386_fu_25398_p2() {
    add_ln703_3386_fu_25398_p2 = (!sext_ln1118_481_fu_16836_p1.read().is_01() || !sext_ln1118_498_fu_17070_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_481_fu_16836_p1.read()) + sc_bigint<12>(sext_ln1118_498_fu_17070_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3387_fu_25408_p2() {
    add_ln703_3387_fu_25408_p2 = (!sext_ln703_893_fu_25394_p1.read().is_01() || !sext_ln703_1881_fu_25404_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_893_fu_25394_p1.read()) + sc_bigint<14>(sext_ln703_1881_fu_25404_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3388_fu_25414_p2() {
    add_ln703_3388_fu_25414_p2 = (!zext_ln708_615_fu_17094_p1.read().is_01() || !zext_ln708_592_fu_16236_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_615_fu_17094_p1.read()) + sc_biguint<11>(zext_ln708_592_fu_16236_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3389_fu_25424_p2() {
    add_ln703_3389_fu_25424_p2 = (!zext_ln1118_654_fu_17090_p1.read().is_01() || !zext_ln703_585_fu_25420_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_654_fu_17090_p1.read()) + sc_biguint<12>(zext_ln703_585_fu_25420_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_338_fu_44442_p2() {
    add_ln703_338_fu_44442_p2 = (!add_ln703_332_fu_44386_p2.read().is_01() || !sext_ln703_105_fu_44438_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_332_fu_44386_p2.read()) + sc_bigint<15>(sext_ln703_105_fu_44438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3390_fu_25434_p2() {
    add_ln703_3390_fu_25434_p2 = (!add_ln703_3387_fu_25408_p2.read().is_01() || !zext_ln703_586_fu_25430_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3387_fu_25408_p2.read()) + sc_biguint<14>(zext_ln703_586_fu_25430_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3391_fu_25444_p2() {
    add_ln703_3391_fu_25444_p2 = (!sext_ln203_530_fu_17108_p1.read().is_01() || !sext_ln703_894_fu_25440_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_530_fu_17108_p1.read()) + sc_bigint<15>(sext_ln703_894_fu_25440_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3392_fu_64475_p2() {
    add_ln703_3392_fu_64475_p2 = (!zext_ln708_600_fu_42249_p1.read().is_01() || !zext_ln708_620_fu_43157_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_600_fu_42249_p1.read()) + sc_biguint<11>(zext_ln708_620_fu_43157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3393_fu_64485_p2() {
    add_ln703_3393_fu_64485_p2 = (!add_ln703_3391_reg_71147.read().is_01() || !zext_ln703_587_fu_64481_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3391_reg_71147.read()) + sc_biguint<15>(zext_ln703_587_fu_64481_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3394_fu_64494_p2() {
    add_ln703_3394_fu_64494_p2 = (!zext_ln1118_648_reg_70297.read().is_01() || !zext_ln708_565_fu_41167_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_648_reg_70297.read()) + sc_biguint<10>(zext_ln708_565_fu_41167_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3395_fu_64503_p2() {
    add_ln703_3395_fu_64503_p2 = (!zext_ln703_588_fu_64490_p1.read().is_01() || !zext_ln703_589_fu_64499_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_588_fu_64490_p1.read()) + sc_biguint<11>(zext_ln703_589_fu_64499_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3396_fu_64513_p2() {
    add_ln703_3396_fu_64513_p2 = (!add_ln703_3393_fu_64485_p2.read().is_01() || !zext_ln703_590_fu_64509_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3393_fu_64485_p2.read()) + sc_biguint<15>(zext_ln703_590_fu_64509_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3397_fu_64519_p2() {
    add_ln703_3397_fu_64519_p2 = (!sext_ln203_499_fu_42473_p1.read().is_01() || !sext_ln1118_415_fu_40196_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_499_fu_42473_p1.read()) + sc_bigint<9>(sext_ln1118_415_fu_40196_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3398_fu_64529_p2() {
    add_ln703_3398_fu_64529_p2 = (!zext_ln708_581_fu_41949_p1.read().is_01() || !zext_ln708_617_fu_43121_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_581_fu_41949_p1.read()) + sc_biguint<8>(zext_ln708_617_fu_43121_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3399_fu_64539_p2() {
    add_ln703_3399_fu_64539_p2 = (!sext_ln703_1882_fu_64525_p1.read().is_01() || !zext_ln703_591_fu_64535_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1882_fu_64525_p1.read()) + sc_biguint<10>(zext_ln703_591_fu_64535_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_339_fu_44452_p2() {
    add_ln703_339_fu_44452_p2 = (!mult_123_V_fu_27319_p1.read().is_01() || !sext_ln703_106_fu_44448_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(mult_123_V_fu_27319_p1.read()) + sc_bigint<16>(sext_ln703_106_fu_44448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3400_fu_64549_p2() {
    add_ln703_3400_fu_64549_p2 = (!zext_ln203_206_fu_39479_p1.read().is_01() || !zext_ln1118_522_fu_39448_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_206_fu_39479_p1.read()) + sc_biguint<9>(zext_ln1118_522_fu_39448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3401_fu_64559_p2() {
    add_ln703_3401_fu_64559_p2 = (!zext_ln708_619_fu_43138_p1.read().is_01() || !zext_ln708_618_fu_43134_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_619_fu_43138_p1.read()) + sc_biguint<8>(zext_ln708_618_fu_43134_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3402_fu_64569_p2() {
    add_ln703_3402_fu_64569_p2 = (!zext_ln708_505_fu_39492_p1.read().is_01() || !zext_ln703_593_fu_64565_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_505_fu_39492_p1.read()) + sc_biguint<9>(zext_ln703_593_fu_64565_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3403_fu_64579_p2() {
    add_ln703_3403_fu_64579_p2 = (!zext_ln703_592_fu_64555_p1.read().is_01() || !zext_ln703_594_fu_64575_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_592_fu_64555_p1.read()) + sc_biguint<10>(zext_ln703_594_fu_64575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3404_fu_64589_p2() {
    add_ln703_3404_fu_64589_p2 = (!sext_ln703_1883_fu_64545_p1.read().is_01() || !zext_ln703_595_fu_64585_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1883_fu_64545_p1.read()) + sc_biguint<12>(zext_ln703_595_fu_64585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3405_fu_64599_p2() {
    add_ln703_3405_fu_64599_p2 = (!add_ln703_3396_fu_64513_p2.read().is_01() || !sext_ln703_1884_fu_64595_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3396_fu_64513_p2.read()) + sc_bigint<15>(sext_ln703_1884_fu_64595_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3406_fu_64605_p2() {
    add_ln703_3406_fu_64605_p2 = (!sext_ln203_532_fu_43185_p1.read().is_01() || !add_ln703_3405_fu_64599_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_532_fu_43185_p1.read()) + sc_biguint<15>(add_ln703_3405_fu_64599_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3407_fu_64615_p2() {
    add_ln703_3407_fu_64615_p2 = (!zext_ln203_241_fu_42376_p1.read().is_01() || !zext_ln1118_602_fu_41089_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_241_fu_42376_p1.read()) + sc_biguint<10>(zext_ln1118_602_fu_41089_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3408_fu_64625_p2() {
    add_ln703_3408_fu_64625_p2 = (!sext_ln1118_453_fu_42257_p1.read().is_01() || !zext_ln703_596_fu_64621_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_453_fu_42257_p1.read()) + sc_biguint<12>(zext_ln703_596_fu_64621_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_340_fu_44458_p2() {
    add_ln703_340_fu_44458_p2 = (!sext_ln203_48_fu_27315_p1.read().is_01() || !sext_ln203_49_fu_27351_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_48_fu_27315_p1.read()) + sc_bigint<12>(sext_ln203_49_fu_27351_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3410_fu_25450_p2() {
    add_ln703_3410_fu_25450_p2 = (!zext_ln708_621_fu_17142_p1.read().is_01() || !zext_ln708_605_fu_16706_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_621_fu_17142_p1.read()) + sc_biguint<11>(zext_ln708_605_fu_16706_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3411_fu_64652_p2() {
    add_ln703_3411_fu_64652_p2 = (!or_ln703_17_fu_64641_p3.read().is_01() || !zext_ln703_597_fu_64649_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_17_fu_64641_p3.read()) + sc_biguint<16>(zext_ln703_597_fu_64649_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3412_fu_64658_p2() {
    add_ln703_3412_fu_64658_p2 = (!zext_ln708_623_fu_43235_p1.read().is_01() || !zext_ln708_567_fu_41503_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_623_fu_43235_p1.read()) + sc_biguint<11>(zext_ln708_567_fu_41503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3413_fu_64668_p2() {
    add_ln703_3413_fu_64668_p2 = (!zext_ln203_256_fu_43195_p1.read().is_01() || !zext_ln703_598_fu_64664_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_256_fu_43195_p1.read()) + sc_biguint<12>(zext_ln703_598_fu_64664_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3414_fu_64678_p2() {
    add_ln703_3414_fu_64678_p2 = (!add_ln703_3411_fu_64652_p2.read().is_01() || !zext_ln703_599_fu_64674_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3411_fu_64652_p2.read()) + sc_biguint<16>(zext_ln703_599_fu_64674_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3415_fu_64684_p2() {
    add_ln703_3415_fu_64684_p2 = (!sext_ln203_533_fu_43192_p1.read().is_01() || !zext_ln203_258_fu_43287_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_533_fu_43192_p1.read()) + sc_biguint<12>(zext_ln203_258_fu_43287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3416_fu_64694_p2() {
    add_ln703_3416_fu_64694_p2 = (!zext_ln203_257_fu_43263_p1.read().is_01() || !sext_ln703_1887_fu_64690_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln203_257_fu_43263_p1.read()) + sc_bigint<13>(sext_ln703_1887_fu_64690_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3417_fu_64704_p2() {
    add_ln703_3417_fu_64704_p2 = (!sext_ln1118_439_fu_41243_p1.read().is_01() || !sext_ln1118_425_reg_70061.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_439_fu_41243_p1.read()) + sc_bigint<11>(sext_ln1118_425_reg_70061.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3418_fu_64713_p2() {
    add_ln703_3418_fu_64713_p2 = (!zext_ln708_622_fu_43215_p1.read().is_01() || !zext_ln708_573_fu_41709_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_622_fu_43215_p1.read()) + sc_biguint<10>(zext_ln708_573_fu_41709_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3419_fu_64723_p2() {
    add_ln703_3419_fu_64723_p2 = (!sext_ln703_1889_fu_64709_p1.read().is_01() || !zext_ln703_600_fu_64719_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1889_fu_64709_p1.read()) + sc_biguint<12>(zext_ln703_600_fu_64719_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_341_fu_44468_p2() {
    add_ln703_341_fu_44468_p2 = (!add_ln703_339_fu_44452_p2.read().is_01() || !sext_ln703_107_fu_44464_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_339_fu_44452_p2.read()) + sc_bigint<16>(sext_ln703_107_fu_44464_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3420_fu_64733_p2() {
    add_ln703_3420_fu_64733_p2 = (!sext_ln703_1888_fu_64700_p1.read().is_01() || !sext_ln703_1890_fu_64729_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1888_fu_64700_p1.read()) + sc_bigint<14>(sext_ln703_1890_fu_64729_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3421_fu_64743_p2() {
    add_ln703_3421_fu_64743_p2 = (!add_ln703_3414_fu_64678_p2.read().is_01() || !sext_ln703_1891_fu_64739_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3414_fu_64678_p2.read()) + sc_bigint<16>(sext_ln703_1891_fu_64739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3422_fu_64749_p2() {
    add_ln703_3422_fu_64749_p2 = (!sext_ln203_535_fu_43259_p1.read().is_01() || !sext_ln203_478_fu_41577_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_535_fu_43259_p1.read()) + sc_bigint<10>(sext_ln203_478_fu_41577_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3423_fu_64759_p2() {
    add_ln703_3423_fu_64759_p2 = (!sext_ln1118_442_reg_70140.read().is_01() || !sext_ln703_1892_fu_64755_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_442_reg_70140.read()) + sc_bigint<11>(sext_ln703_1892_fu_64755_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3424_fu_25456_p2() {
    add_ln703_3424_fu_25456_p2 = (!zext_ln1118_556_fu_14408_p1.read().is_01() || !zext_ln203_254_fu_17122_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_556_fu_14408_p1.read()) + sc_biguint<10>(zext_ln203_254_fu_17122_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3425_fu_64771_p2() {
    add_ln703_3425_fu_64771_p2 = (!sext_ln203_500_fu_42481_p1.read().is_01() || !zext_ln703_601_fu_64768_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_500_fu_42481_p1.read()) + sc_biguint<12>(zext_ln703_601_fu_64768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3426_fu_64777_p2() {
    add_ln703_3426_fu_64777_p2 = (!sext_ln703_1893_fu_64764_p1.read().is_01() || !add_ln703_3425_fu_64771_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1893_fu_64764_p1.read()) + sc_biguint<12>(add_ln703_3425_fu_64771_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3427_fu_64787_p2() {
    add_ln703_3427_fu_64787_p2 = (!sext_ln203_437_fu_39783_p1.read().is_01() || !sext_ln1118_400_fu_39427_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_437_fu_39783_p1.read()) + sc_bigint<9>(sext_ln1118_400_fu_39427_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3428_fu_64797_p2() {
    add_ln703_3428_fu_64797_p2 = (!zext_ln203_225_fu_41364_p1.read().is_01() || !sext_ln703_1895_fu_64793_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_225_fu_41364_p1.read()) + sc_bigint<11>(sext_ln703_1895_fu_64793_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3429_fu_64807_p2() {
    add_ln703_3429_fu_64807_p2 = (!zext_ln203_255_fu_43189_p1.read().is_01() || !sext_ln1116_66_fu_39527_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_255_fu_43189_p1.read()) + sc_bigint<9>(sext_ln1116_66_fu_39527_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_342_fu_44474_p2() {
    add_ln703_342_fu_44474_p2 = (!zext_ln203_16_fu_27375_p1.read().is_01() || !zext_ln203_15_fu_27283_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_16_fu_27375_p1.read()) + sc_biguint<10>(zext_ln203_15_fu_27283_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3430_fu_64817_p2() {
    add_ln703_3430_fu_64817_p2 = (!zext_ln708_527_fu_39789_p1.read().is_01() || !zext_ln708_525_fu_39777_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_527_fu_39789_p1.read()) + sc_biguint<8>(zext_ln708_525_fu_39777_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3431_fu_64827_p2() {
    add_ln703_3431_fu_64827_p2 = (!sext_ln703_1897_fu_64813_p1.read().is_01() || !zext_ln703_602_fu_64823_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_1897_fu_64813_p1.read()) + sc_biguint<10>(zext_ln703_602_fu_64823_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3432_fu_64837_p2() {
    add_ln703_3432_fu_64837_p2 = (!sext_ln703_1896_fu_64803_p1.read().is_01() || !sext_ln703_1898_fu_64833_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1896_fu_64803_p1.read()) + sc_bigint<12>(sext_ln703_1898_fu_64833_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3433_fu_64847_p2() {
    add_ln703_3433_fu_64847_p2 = (!sext_ln703_1894_fu_64783_p1.read().is_01() || !sext_ln703_1899_fu_64843_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1894_fu_64783_p1.read()) + sc_bigint<13>(sext_ln703_1899_fu_64843_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3435_fu_64870_p2() {
    add_ln703_3435_fu_64870_p2 = (!sext_ln203_538_fu_43317_p1.read().is_01() || !sext_ln203_536_fu_43291_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_538_fu_43317_p1.read()) + sc_bigint<12>(sext_ln203_536_fu_43291_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3436_fu_64880_p2() {
    add_ln703_3436_fu_64880_p2 = (!or_ln703_18_fu_64863_p3.read().is_01() || !sext_ln703_1901_fu_64876_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_18_fu_64863_p3.read()) + sc_bigint<16>(sext_ln703_1901_fu_64876_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3437_fu_25462_p2() {
    add_ln703_3437_fu_25462_p2 = (!zext_ln708_621_fu_17142_p1.read().is_01() || !zext_ln708_625_fu_17162_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_621_fu_17142_p1.read()) + sc_biguint<11>(zext_ln708_625_fu_17162_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3438_fu_64889_p2() {
    add_ln703_3438_fu_64889_p2 = (!sext_ln203_512_fu_42699_p1.read().is_01() || !zext_ln703_603_fu_64886_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_512_fu_42699_p1.read()) + sc_biguint<13>(zext_ln703_603_fu_64886_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3439_fu_64899_p2() {
    add_ln703_3439_fu_64899_p2 = (!add_ln703_3436_fu_64880_p2.read().is_01() || !sext_ln703_1902_fu_64895_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3436_fu_64880_p2.read()) + sc_bigint<16>(sext_ln703_1902_fu_64895_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_343_fu_44484_p2() {
    add_ln703_343_fu_44484_p2 = (!sext_ln203_35_fu_26805_p1.read().is_01() || !sext_ln203_50_fu_27371_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_35_fu_26805_p1.read()) + sc_bigint<9>(sext_ln203_50_fu_27371_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3440_fu_64905_p2() {
    add_ln703_3440_fu_64905_p2 = (!sext_ln708_234_fu_40670_p1.read().is_01() || !sext_ln203_537_fu_43294_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_234_fu_40670_p1.read()) + sc_bigint<11>(sext_ln203_537_fu_43294_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3441_fu_64915_p2() {
    add_ln703_3441_fu_64915_p2 = (!zext_ln708_580_fu_41899_p1.read().is_01() || !sext_ln703_1903_fu_64911_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_580_fu_41899_p1.read()) + sc_bigint<12>(sext_ln703_1903_fu_64911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3442_fu_64925_p2() {
    add_ln703_3442_fu_64925_p2 = (!sext_ln708_254_fu_42788_p1.read().is_01() || !sext_ln1118_430_fu_40946_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_254_fu_42788_p1.read()) + sc_bigint<11>(sext_ln1118_430_fu_40946_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3443_fu_64935_p2() {
    add_ln703_3443_fu_64935_p2 = (!sext_ln708_228_fu_40283_p1.read().is_01() || !sext_ln203_447_fu_40387_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_228_fu_40283_p1.read()) + sc_bigint<11>(sext_ln203_447_fu_40387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3444_fu_64945_p2() {
    add_ln703_3444_fu_64945_p2 = (!sext_ln703_1905_fu_64931_p1.read().is_01() || !sext_ln703_1906_fu_64941_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1905_fu_64931_p1.read()) + sc_bigint<12>(sext_ln703_1906_fu_64941_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3445_fu_64955_p2() {
    add_ln703_3445_fu_64955_p2 = (!sext_ln703_1904_fu_64921_p1.read().is_01() || !sext_ln703_1907_fu_64951_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1904_fu_64921_p1.read()) + sc_bigint<13>(sext_ln703_1907_fu_64951_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3446_fu_64965_p2() {
    add_ln703_3446_fu_64965_p2 = (!add_ln703_3439_fu_64899_p2.read().is_01() || !sext_ln703_1908_fu_64961_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3439_fu_64899_p2.read()) + sc_bigint<16>(sext_ln703_1908_fu_64961_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3447_fu_64971_p2() {
    add_ln703_3447_fu_64971_p2 = (!zext_ln1118_550_fu_39866_p1.read().is_01() || !zext_ln1118_620_reg_70134.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_550_fu_39866_p1.read()) + sc_biguint<10>(zext_ln1118_620_reg_70134.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3448_fu_64980_p2() {
    add_ln703_3448_fu_64980_p2 = (!sext_ln203_534_fu_43239_p1.read().is_01() || !zext_ln703_604_fu_64976_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_534_fu_43239_p1.read()) + sc_biguint<12>(zext_ln703_604_fu_64976_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3449_fu_64986_p2() {
    add_ln703_3449_fu_64986_p2 = (!sext_ln1118_415_fu_40196_p1.read().is_01() || !zext_ln203_213_reg_69978.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1118_415_fu_40196_p1.read()) + sc_biguint<9>(zext_ln203_213_reg_69978.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_344_fu_44494_p2() {
    add_ln703_344_fu_44494_p2 = (!zext_ln703_18_fu_44480_p1.read().is_01() || !sext_ln703_108_fu_44490_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_18_fu_44480_p1.read()) + sc_bigint<12>(sext_ln703_108_fu_44490_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3450_fu_64995_p2() {
    add_ln703_3450_fu_64995_p2 = (!zext_ln1118_578_fu_40633_p1.read().is_01() || !zext_ln203_255_fu_43189_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_578_fu_40633_p1.read()) + sc_biguint<9>(zext_ln203_255_fu_43189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3451_fu_65005_p2() {
    add_ln703_3451_fu_65005_p2 = (!sext_ln703_1909_fu_64991_p1.read().is_01() || !zext_ln703_605_fu_65001_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1909_fu_64991_p1.read()) + sc_biguint<11>(zext_ln703_605_fu_65001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3452_fu_65015_p2() {
    add_ln703_3452_fu_65015_p2 = (!add_ln703_3448_fu_64980_p2.read().is_01() || !sext_ln703_1910_fu_65011_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3448_fu_64980_p2.read()) + sc_bigint<12>(sext_ln703_1910_fu_65011_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3453_fu_65025_p2() {
    add_ln703_3453_fu_65025_p2 = (!zext_ln1118_544_fu_39792_p1.read().is_01() || !zext_ln1116_161_reg_69828.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_544_fu_39792_p1.read()) + sc_biguint<9>(zext_ln1116_161_reg_69828.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3454_fu_65030_p2() {
    add_ln703_3454_fu_65030_p2 = (!zext_ln708_501_fu_39442_p1.read().is_01() || !add_ln703_3453_fu_65025_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_501_fu_39442_p1.read()) + sc_biguint<9>(add_ln703_3453_fu_65025_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3455_fu_65040_p2() {
    add_ln703_3455_fu_65040_p2 = (!zext_ln708_508_fu_39657_p1.read().is_01() || !zext_ln203_206_fu_39479_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_508_fu_39657_p1.read()) + sc_biguint<9>(zext_ln203_206_fu_39479_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3456_fu_65050_p2() {
    add_ln703_3456_fu_65050_p2 = (!zext_ln708_514_fu_39752_p1.read().is_01() || !zext_ln1116_174_fu_39717_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_514_fu_39752_p1.read()) + sc_biguint<9>(zext_ln1116_174_fu_39717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3457_fu_65060_p2() {
    add_ln703_3457_fu_65060_p2 = (!zext_ln703_607_fu_65046_p1.read().is_01() || !zext_ln703_608_fu_65056_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_607_fu_65046_p1.read()) + sc_biguint<10>(zext_ln703_608_fu_65056_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3458_fu_65070_p2() {
    add_ln703_3458_fu_65070_p2 = (!zext_ln703_606_fu_65036_p1.read().is_01() || !zext_ln703_609_fu_65066_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_606_fu_65036_p1.read()) + sc_biguint<11>(zext_ln703_609_fu_65066_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3459_fu_65080_p2() {
    add_ln703_3459_fu_65080_p2 = (!sext_ln703_1911_fu_65021_p1.read().is_01() || !zext_ln703_610_fu_65076_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1911_fu_65021_p1.read()) + sc_biguint<13>(zext_ln703_610_fu_65076_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3461_fu_25468_p2() {
    add_ln703_3461_fu_25468_p2 = (!sext_ln203_539_fu_17182_p1.read().is_01() || !ap_const_lv11_780.is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_539_fu_17182_p1.read()) + sc_bigint<11>(ap_const_lv11_780));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3462_fu_25478_p2() {
    add_ln703_3462_fu_25478_p2 = (!zext_ln203_228_fu_15986_p1.read().is_01() || !sext_ln703_1913_fu_25474_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_228_fu_15986_p1.read()) + sc_bigint<12>(sext_ln703_1913_fu_25474_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3463_fu_25484_p2() {
    add_ln703_3463_fu_25484_p2 = (!sext_ln203_517_fu_16726_p1.read().is_01() || !add_ln703_3462_fu_25478_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_517_fu_16726_p1.read()) + sc_biguint<12>(add_ln703_3462_fu_25478_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3464_fu_25494_p2() {
    add_ln703_3464_fu_25494_p2 = (!sext_ln203_540_fu_17202_p1.read().is_01() || !zext_ln1118_632_fu_16142_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_540_fu_17202_p1.read()) + sc_biguint<11>(zext_ln1118_632_fu_16142_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3465_fu_25504_p2() {
    add_ln703_3465_fu_25504_p2 = (!sext_ln703_1914_fu_25490_p1.read().is_01() || !sext_ln703_1915_fu_25500_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1914_fu_25490_p1.read()) + sc_bigint<13>(sext_ln703_1915_fu_25500_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3466_fu_25510_p2() {
    add_ln703_3466_fu_25510_p2 = (!sext_ln1118_463_fu_16500_p1.read().is_01() || !add_ln703_3465_fu_25504_p2.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_463_fu_16500_p1.read()) + sc_biguint<13>(add_ln703_3465_fu_25504_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3467_fu_25520_p2() {
    add_ln703_3467_fu_25520_p2 = (!sext_ln708_259_fu_16978_p1.read().is_01() || !sext_ln1118_499_fu_17216_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_259_fu_16978_p1.read()) + sc_bigint<11>(sext_ln1118_499_fu_17216_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3468_fu_25530_p2() {
    add_ln703_3468_fu_25530_p2 = (!sext_ln1118_428_fu_15294_p1.read().is_01() || !sext_ln703_1917_fu_25526_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_428_fu_15294_p1.read()) + sc_bigint<12>(sext_ln703_1917_fu_25526_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3469_fu_25540_p2() {
    add_ln703_3469_fu_25540_p2 = (!sext_ln703_1916_fu_25516_p1.read().is_01() || !sext_ln703_1918_fu_25536_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1916_fu_25516_p1.read()) + sc_bigint<14>(sext_ln703_1918_fu_25536_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_346_fu_17954_p2() {
    add_ln703_346_fu_17954_p2 = (!zext_ln1116_23_fu_2530_p1.read().is_01() || !add_ln703_290_fu_17764_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1116_23_fu_2530_p1.read()) + sc_bigint<10>(add_ln703_290_fu_17764_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3470_fu_25546_p2() {
    add_ln703_3470_fu_25546_p2 = (!sext_ln1118_492_fu_17020_p1.read().is_01() || !add_ln703_3469_fu_25540_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_492_fu_17020_p1.read()) + sc_biguint<14>(add_ln703_3469_fu_25540_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3471_fu_25552_p2() {
    add_ln703_3471_fu_25552_p2 = (!sext_ln1118_429_fu_15370_p1.read().is_01() || !sext_ln1118_495_fu_17032_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_429_fu_15370_p1.read()) + sc_bigint<12>(sext_ln1118_495_fu_17032_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3472_fu_25562_p2() {
    add_ln703_3472_fu_25562_p2 = (!sext_ln1118_493_fu_17024_p1.read().is_01() || !sext_ln703_1920_fu_25558_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_493_fu_17024_p1.read()) + sc_bigint<13>(sext_ln703_1920_fu_25558_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3473_fu_65102_p2() {
    add_ln703_3473_fu_65102_p2 = (!sext_ln703_1919_fu_65096_p1.read().is_01() || !sext_ln703_1921_fu_65099_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1919_fu_65096_p1.read()) + sc_bigint<15>(sext_ln703_1921_fu_65099_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3474_fu_65108_p2() {
    add_ln703_3474_fu_65108_p2 = (!zext_ln1118_543_reg_69867.read().is_01() || !sext_ln203_541_fu_43324_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_543_reg_69867.read()) + sc_bigint<12>(sext_ln203_541_fu_43324_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3475_fu_65117_p2() {
    add_ln703_3475_fu_65117_p2 = (!zext_ln203_259_fu_43321_p1.read().is_01() || !sext_ln708_227_fu_40150_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_259_fu_43321_p1.read()) + sc_bigint<10>(sext_ln708_227_fu_40150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3476_fu_65127_p2() {
    add_ln703_3476_fu_65127_p2 = (!sext_ln708_254_fu_42788_p1.read().is_01() || !sext_ln703_1923_fu_65123_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_254_fu_42788_p1.read()) + sc_bigint<11>(sext_ln703_1923_fu_65123_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3477_fu_65137_p2() {
    add_ln703_3477_fu_65137_p2 = (!sext_ln703_1922_fu_65113_p1.read().is_01() || !sext_ln703_1924_fu_65133_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1922_fu_65113_p1.read()) + sc_bigint<13>(sext_ln703_1924_fu_65133_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3478_fu_65147_p2() {
    add_ln703_3478_fu_65147_p2 = (!add_ln703_3473_fu_65102_p2.read().is_01() || !sext_ln703_1925_fu_65143_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3473_fu_65102_p2.read()) + sc_bigint<15>(sext_ln703_1925_fu_65143_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3479_fu_65153_p2() {
    add_ln703_3479_fu_65153_p2 = (!sext_ln203_542_fu_43382_p1.read().is_01() || !sext_ln203_497_fu_42461_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_542_fu_43382_p1.read()) + sc_bigint<12>(sext_ln203_497_fu_42461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_347_fu_17964_p2() {
    add_ln703_347_fu_17964_p2 = (!sext_ln1116_10_fu_2590_p1.read().is_01() || !sext_ln703_110_fu_17960_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_10_fu_2590_p1.read()) + sc_bigint<11>(sext_ln703_110_fu_17960_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3480_fu_65163_p2() {
    add_ln703_3480_fu_65163_p2 = (!add_ln703_3478_fu_65147_p2.read().is_01() || !sext_ln703_1926_fu_65159_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3478_fu_65147_p2.read()) + sc_bigint<15>(sext_ln703_1926_fu_65159_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3481_fu_65173_p2() {
    add_ln703_3481_fu_65173_p2 = (!zext_ln708_627_fu_43362_p1.read().is_01() || !zext_ln708_626_fu_43342_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_627_fu_43362_p1.read()) + sc_biguint<11>(zext_ln708_626_fu_43342_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3482_fu_65183_p2() {
    add_ln703_3482_fu_65183_p2 = (!sext_ln203_543_fu_43386_p1.read().is_01() || !zext_ln703_611_fu_65179_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_543_fu_43386_p1.read()) + sc_biguint<13>(zext_ln703_611_fu_65179_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3483_fu_65193_p2() {
    add_ln703_3483_fu_65193_p2 = (!sext_ln703_1927_fu_65169_p1.read().is_01() || !sext_ln703_1928_fu_65189_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1927_fu_65169_p1.read()) + sc_bigint<16>(sext_ln703_1928_fu_65189_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3484_fu_65199_p2() {
    add_ln703_3484_fu_65199_p2 = (!sext_ln203_445_fu_40365_p1.read().is_01() || !sext_ln203_545_fu_43426_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_445_fu_40365_p1.read()) + sc_bigint<11>(sext_ln203_545_fu_43426_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3485_fu_65209_p2() {
    add_ln703_3485_fu_65209_p2 = (!zext_ln203_260_fu_43446_p1.read().is_01() || !sext_ln703_1929_fu_65205_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_260_fu_43446_p1.read()) + sc_bigint<12>(sext_ln703_1929_fu_65205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3486_fu_65219_p2() {
    add_ln703_3486_fu_65219_p2 = (!zext_ln203_212_fu_40391_p1.read().is_01() || !zext_ln203_220_fu_40629_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_212_fu_40391_p1.read()) + sc_biguint<10>(zext_ln203_220_fu_40629_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3487_fu_65229_p2() {
    add_ln703_3487_fu_65229_p2 = (!sext_ln203_544_fu_43406_p1.read().is_01() || !zext_ln703_612_fu_65225_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_544_fu_43406_p1.read()) + sc_biguint<11>(zext_ln703_612_fu_65225_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3488_fu_65239_p2() {
    add_ln703_3488_fu_65239_p2 = (!sext_ln703_1930_fu_65215_p1.read().is_01() || !sext_ln703_1931_fu_65235_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1930_fu_65215_p1.read()) + sc_bigint<13>(sext_ln703_1931_fu_65235_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_348_fu_17970_p2() {
    add_ln703_348_fu_17970_p2 = (!zext_ln708_63_fu_2554_p1.read().is_01() || !sext_ln708_86_fu_2550_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_63_fu_2554_p1.read()) + sc_bigint<10>(sext_ln708_86_fu_2550_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3490_fu_25568_p2() {
    add_ln703_3490_fu_25568_p2 = (!sext_ln203_492_fu_16292_p1.read().is_01() || !sext_ln203_546_fu_17236_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_492_fu_16292_p1.read()) + sc_bigint<12>(sext_ln203_546_fu_17236_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3491_fu_25578_p2() {
    add_ln703_3491_fu_25578_p2 = (!zext_ln1118_657_fu_17240_p1.read().is_01() || !sext_ln203_547_fu_17264_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_657_fu_17240_p1.read()) + sc_bigint<12>(sext_ln203_547_fu_17264_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3492_fu_25588_p2() {
    add_ln703_3492_fu_25588_p2 = (!sext_ln703_900_fu_25574_p1.read().is_01() || !sext_ln703_1933_fu_25584_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_900_fu_25574_p1.read()) + sc_bigint<13>(sext_ln703_1933_fu_25584_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3493_fu_25598_p2() {
    add_ln703_3493_fu_25598_p2 = (!sext_ln1118_435_fu_15514_p1.read().is_01() || !sext_ln203_520_fu_16812_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_435_fu_15514_p1.read()) + sc_bigint<12>(sext_ln203_520_fu_16812_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3494_fu_25608_p2() {
    add_ln703_3494_fu_25608_p2 = (!sext_ln703_901_fu_25594_p1.read().is_01() || !sext_ln703_1934_fu_25604_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_901_fu_25594_p1.read()) + sc_bigint<14>(sext_ln703_1934_fu_25604_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3495_fu_25614_p2() {
    add_ln703_3495_fu_25614_p2 = (!zext_ln708_628_fu_17278_p1.read().is_01() || !sext_ln1118_472_fu_16642_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_628_fu_17278_p1.read()) + sc_bigint<12>(sext_ln1118_472_fu_16642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3496_fu_25624_p2() {
    add_ln703_3496_fu_25624_p2 = (!sext_ln203_518_fu_16764_p1.read().is_01() || !sext_ln703_1935_fu_25620_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_518_fu_16764_p1.read()) + sc_bigint<13>(sext_ln703_1935_fu_25620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3497_fu_25634_p2() {
    add_ln703_3497_fu_25634_p2 = (!add_ln703_3494_fu_25608_p2.read().is_01() || !sext_ln703_1936_fu_25630_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3494_fu_25608_p2.read()) + sc_bigint<14>(sext_ln703_1936_fu_25630_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3498_fu_25640_p2() {
    add_ln703_3498_fu_25640_p2 = (!sext_ln1118_500_fu_17302_p1.read().is_01() || !add_ln703_3497_fu_25634_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_500_fu_17302_p1.read()) + sc_biguint<14>(add_ln703_3497_fu_25634_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3499_fu_65258_p2() {
    add_ln703_3499_fu_65258_p2 = (!sext_ln1118_465_fu_42388_p1.read().is_01() || !sext_ln1116_81_fu_42766_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_465_fu_42388_p1.read()) + sc_bigint<12>(sext_ln1116_81_fu_42766_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_349_fu_17980_p2() {
    add_ln703_349_fu_17980_p2 = (!add_ln703_347_fu_17964_p2.read().is_01() || !sext_ln703_111_fu_17976_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_347_fu_17964_p2.read()) + sc_bigint<11>(sext_ln703_111_fu_17976_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3500_fu_65268_p2() {
    add_ln703_3500_fu_65268_p2 = (!sext_ln203_548_fu_43488_p1.read().is_01() || !sext_ln703_1938_fu_65264_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_548_fu_43488_p1.read()) + sc_bigint<13>(sext_ln703_1938_fu_65264_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3501_fu_65278_p2() {
    add_ln703_3501_fu_65278_p2 = (!sext_ln703_1937_fu_65255_p1.read().is_01() || !sext_ln703_1939_fu_65274_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1937_fu_65255_p1.read()) + sc_bigint<15>(sext_ln703_1939_fu_65274_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3502_fu_65284_p2() {
    add_ln703_3502_fu_65284_p2 = (!zext_ln708_565_fu_41167_p1.read().is_01() || !zext_ln708_629_fu_43465_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_565_fu_41167_p1.read()) + sc_biguint<10>(zext_ln708_629_fu_43465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3503_fu_65294_p2() {
    add_ln703_3503_fu_65294_p2 = (!zext_ln708_616_fu_43118_p1.read().is_01() || !zext_ln703_613_fu_65290_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_616_fu_43118_p1.read()) + sc_biguint<11>(zext_ln703_613_fu_65290_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3504_fu_65304_p2() {
    add_ln703_3504_fu_65304_p2 = (!sext_ln203_449_fu_40398_p1.read().is_01() || !sext_ln203_494_fu_42382_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_449_fu_40398_p1.read()) + sc_bigint<9>(sext_ln203_494_fu_42382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3505_fu_65314_p2() {
    add_ln703_3505_fu_65314_p2 = (!sext_ln1118_501_fu_43469_p1.read().is_01() || !sext_ln703_1940_fu_65310_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_501_fu_43469_p1.read()) + sc_bigint<10>(sext_ln703_1940_fu_65310_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3506_fu_65324_p2() {
    add_ln703_3506_fu_65324_p2 = (!zext_ln703_614_fu_65300_p1.read().is_01() || !sext_ln703_1941_fu_65320_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_614_fu_65300_p1.read()) + sc_bigint<12>(sext_ln703_1941_fu_65320_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3507_fu_65334_p2() {
    add_ln703_3507_fu_65334_p2 = (!add_ln703_3501_fu_65278_p2.read().is_01() || !sext_ln703_1942_fu_65330_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3501_fu_65278_p2.read()) + sc_bigint<15>(sext_ln703_1942_fu_65330_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3508_fu_65340_p2() {
    add_ln703_3508_fu_65340_p2 = (!sext_ln203_527_fu_43071_p1.read().is_01() || !sext_ln203_549_fu_43492_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_527_fu_43071_p1.read()) + sc_bigint<12>(sext_ln203_549_fu_43492_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3509_fu_65350_p2() {
    add_ln703_3509_fu_65350_p2 = (!add_ln703_3507_fu_65334_p2.read().is_01() || !sext_ln703_1943_fu_65346_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3507_fu_65334_p2.read()) + sc_bigint<15>(sext_ln703_1943_fu_65346_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_350_fu_17990_p2() {
    add_ln703_350_fu_17990_p2 = (!sext_ln1116_12_fu_2650_p1.read().is_01() || !sext_ln1116_11_fu_2618_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1116_12_fu_2650_p1.read()) + sc_bigint<11>(sext_ln1116_11_fu_2618_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3510_fu_65360_p2() {
    add_ln703_3510_fu_65360_p2 = (!sext_ln203_479_fu_41609_p1.read().is_01() || !sext_ln203_550_fu_43512_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_479_fu_41609_p1.read()) + sc_bigint<12>(sext_ln203_550_fu_43512_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3511_fu_65370_p2() {
    add_ln703_3511_fu_65370_p2 = (!sext_ln708_248_fu_41942_p1.read().is_01() || !sext_ln203_531_fu_43181_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_248_fu_41942_p1.read()) + sc_bigint<12>(sext_ln203_531_fu_43181_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3512_fu_65380_p2() {
    add_ln703_3512_fu_65380_p2 = (!sext_ln703_1945_fu_65366_p1.read().is_01() || !sext_ln703_1946_fu_65376_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1945_fu_65366_p1.read()) + sc_bigint<13>(sext_ln703_1946_fu_65376_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3513_fu_65390_p2() {
    add_ln703_3513_fu_65390_p2 = (!sext_ln703_1944_fu_65356_p1.read().is_01() || !sext_ln703_1947_fu_65386_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_1944_fu_65356_p1.read()) + sc_bigint<16>(sext_ln703_1947_fu_65386_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3514_fu_65396_p2() {
    add_ln703_3514_fu_65396_p2 = (!sext_ln203_551_fu_43526_p1.read().is_01() || !sext_ln708_254_fu_42788_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_551_fu_43526_p1.read()) + sc_bigint<11>(sext_ln708_254_fu_42788_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3515_fu_65406_p2() {
    add_ln703_3515_fu_65406_p2 = (!zext_ln203_252_fu_43023_p1.read().is_01() || !sext_ln703_1948_fu_65402_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_252_fu_43023_p1.read()) + sc_bigint<12>(sext_ln703_1948_fu_65402_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3516_fu_65416_p2() {
    add_ln703_3516_fu_65416_p2 = (!zext_ln708_569_fu_41643_p1.read().is_01() || !zext_ln708_507_fu_39571_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_569_fu_41643_p1.read()) + sc_biguint<10>(zext_ln708_507_fu_39571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3517_fu_65426_p2() {
    add_ln703_3517_fu_65426_p2 = (!sext_ln203_468_fu_41352_p1.read().is_01() || !sext_ln203_499_fu_42473_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_468_fu_41352_p1.read()) + sc_bigint<9>(sext_ln203_499_fu_42473_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3518_fu_65436_p2() {
    add_ln703_3518_fu_65436_p2 = (!zext_ln703_615_fu_65422_p1.read().is_01() || !sext_ln703_1950_fu_65432_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_615_fu_65422_p1.read()) + sc_bigint<12>(sext_ln703_1950_fu_65432_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3519_fu_65446_p2() {
    add_ln703_3519_fu_65446_p2 = (!sext_ln703_1949_fu_65412_p1.read().is_01() || !sext_ln703_1951_fu_65442_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1949_fu_65412_p1.read()) + sc_bigint<13>(sext_ln703_1951_fu_65442_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_351_fu_18000_p2() {
    add_ln703_351_fu_18000_p2 = (!sext_ln703_112_fu_17986_p1.read().is_01() || !sext_ln703_113_fu_17996_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_112_fu_17986_p1.read()) + sc_bigint<12>(sext_ln703_113_fu_17996_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3521_fu_25646_p2() {
    add_ln703_3521_fu_25646_p2 = (!zext_ln708_625_fu_17162_p1.read().is_01() || !zext_ln708_589_fu_16200_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_625_fu_17162_p1.read()) + sc_biguint<11>(zext_ln708_589_fu_16200_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3522_fu_25652_p2() {
    add_ln703_3522_fu_25652_p2 = (!zext_ln708_630_fu_17338_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_630_fu_17338_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3523_fu_25658_p2() {
    add_ln703_3523_fu_25658_p2 = (!add_ln703_3521_fu_25646_p2.read().is_01() || !add_ln703_3522_fu_25652_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3521_fu_25646_p2.read()) + sc_biguint<11>(add_ln703_3522_fu_25652_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3524_fu_25668_p2() {
    add_ln703_3524_fu_25668_p2 = (!sext_ln203_552_fu_17358_p1.read().is_01() || !sext_ln703_904_fu_25664_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_552_fu_17358_p1.read()) + sc_bigint<12>(sext_ln703_904_fu_25664_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3525_fu_25674_p2() {
    add_ln703_3525_fu_25674_p2 = (!zext_ln1116_197_fu_17382_p1.read().is_01() || !add_ln703_3524_fu_25668_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_197_fu_17382_p1.read()) + sc_biguint<12>(add_ln703_3524_fu_25668_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3526_fu_25684_p2() {
    add_ln703_3526_fu_25684_p2 = (!zext_ln1118_660_fu_17362_p1.read().is_01() || !zext_ln1118_579_fu_14942_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_660_fu_17362_p1.read()) + sc_biguint<10>(zext_ln1118_579_fu_14942_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3527_fu_25694_p2() {
    add_ln703_3527_fu_25694_p2 = (!zext_ln708_632_fu_17406_p1.read().is_01() || !zext_ln703_616_fu_25690_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_632_fu_17406_p1.read()) + sc_biguint<11>(zext_ln703_616_fu_25690_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3528_fu_25704_p2() {
    add_ln703_3528_fu_25704_p2 = (!sext_ln703_1953_fu_25680_p1.read().is_01() || !zext_ln703_617_fu_25700_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1953_fu_25680_p1.read()) + sc_biguint<13>(zext_ln703_617_fu_25700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3529_fu_65465_p2() {
    add_ln703_3529_fu_65465_p2 = (!sext_ln203_553_fu_43530_p1.read().is_01() || !sext_ln703_906_fu_65462_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_553_fu_43530_p1.read()) + sc_bigint<14>(sext_ln703_906_fu_65462_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_352_fu_44513_p2() {
    add_ln703_352_fu_44513_p2 = (!zext_ln1116_28_fu_27391_p1.read().is_01() || !sext_ln1118_52_fu_26173_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_28_fu_27391_p1.read()) + sc_bigint<9>(sext_ln1118_52_fu_26173_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3530_fu_65471_p2() {
    add_ln703_3530_fu_65471_p2 = (!sext_ln1118_502_fu_43533_p1.read().is_01() || !sext_ln1118_444_fu_41445_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_502_fu_43533_p1.read()) + sc_bigint<11>(sext_ln1118_444_fu_41445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3531_fu_65481_p2() {
    add_ln703_3531_fu_65481_p2 = (!add_ln703_3529_fu_65465_p2.read().is_01() || !sext_ln703_1954_fu_65477_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3529_fu_65465_p2.read()) + sc_bigint<14>(sext_ln703_1954_fu_65477_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3532_fu_65487_p2() {
    add_ln703_3532_fu_65487_p2 = (!zext_ln1118_642_fu_42394_p1.read().is_01() || !zext_ln708_629_fu_43465_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_642_fu_42394_p1.read()) + sc_biguint<10>(zext_ln708_629_fu_43465_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3533_fu_65497_p2() {
    add_ln703_3533_fu_65497_p2 = (!zext_ln708_527_fu_39789_p1.read().is_01() || !zext_ln708_548_fu_40642_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_527_fu_39789_p1.read()) + sc_biguint<8>(zext_ln708_548_fu_40642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3534_fu_65507_p2() {
    add_ln703_3534_fu_65507_p2 = (!zext_ln703_618_fu_65493_p1.read().is_01() || !zext_ln703_619_fu_65503_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_618_fu_65493_p1.read()) + sc_biguint<11>(zext_ln703_619_fu_65503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3535_fu_65517_p2() {
    add_ln703_3535_fu_65517_p2 = (!add_ln703_3531_fu_65481_p2.read().is_01() || !zext_ln703_620_fu_65513_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3531_fu_65481_p2.read()) + sc_biguint<14>(zext_ln703_620_fu_65513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3536_fu_65527_p2() {
    add_ln703_3536_fu_65527_p2 = (!sext_ln203_460_fu_41050_p1.read().is_01() || !sext_ln203_452_fu_40438_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_460_fu_41050_p1.read()) + sc_bigint<12>(sext_ln203_452_fu_40438_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3537_fu_65537_p2() {
    add_ln703_3537_fu_65537_p2 = (!sext_ln703_907_fu_65523_p1.read().is_01() || !sext_ln703_1955_fu_65533_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_907_fu_65523_p1.read()) + sc_bigint<15>(sext_ln703_1955_fu_65533_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3538_fu_65543_p2() {
    add_ln703_3538_fu_65543_p2 = (!sext_ln203_447_fu_40387_p1.read().is_01() || !sext_ln708_253_fu_42591_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_447_fu_40387_p1.read()) + sc_bigint<11>(sext_ln708_253_fu_42591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3539_fu_65553_p2() {
    add_ln703_3539_fu_65553_p2 = (!zext_ln1116_201_fu_43551_p1.read().is_01() || !sext_ln703_1956_fu_65549_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_201_fu_43551_p1.read()) + sc_bigint<12>(sext_ln703_1956_fu_65549_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_353_fu_44523_p2() {
    add_ln703_353_fu_44523_p2 = (!sext_ln1116_13_fu_27385_p1.read().is_01() || !sext_ln703_115_fu_44519_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_13_fu_27385_p1.read()) + sc_bigint<10>(sext_ln703_115_fu_44519_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3540_fu_65563_p2() {
    add_ln703_3540_fu_65563_p2 = (!add_ln703_3537_fu_65537_p2.read().is_01() || !sext_ln703_1957_fu_65559_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3537_fu_65537_p2.read()) + sc_bigint<15>(sext_ln703_1957_fu_65559_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3541_fu_65569_p2() {
    add_ln703_3541_fu_65569_p2 = (!zext_ln203_243_fu_42465_p1.read().is_01() || !zext_ln1116_165_fu_39495_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_243_fu_42465_p1.read()) + sc_biguint<9>(zext_ln1116_165_fu_39495_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3542_fu_65579_p2() {
    add_ln703_3542_fu_65579_p2 = (!zext_ln708_633_fu_43571_p1.read().is_01() || !zext_ln703_621_fu_65575_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_633_fu_43571_p1.read()) + sc_biguint<10>(zext_ln703_621_fu_65575_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3543_fu_65589_p2() {
    add_ln703_3543_fu_65589_p2 = (!zext_ln708_534_fu_40301_p1.read().is_01() || !zext_ln708_619_fu_43138_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_534_fu_40301_p1.read()) + sc_biguint<8>(zext_ln708_619_fu_43138_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3544_fu_65599_p2() {
    add_ln703_3544_fu_65599_p2 = (!zext_ln1116_172_fu_39709_p1.read().is_01() || !zext_ln1116_200_fu_43547_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_172_fu_39709_p1.read()) + sc_biguint<9>(zext_ln1116_200_fu_43547_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3545_fu_65609_p2() {
    add_ln703_3545_fu_65609_p2 = (!zext_ln703_623_fu_65595_p1.read().is_01() || !zext_ln703_624_fu_65605_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_623_fu_65595_p1.read()) + sc_biguint<10>(zext_ln703_624_fu_65605_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3546_fu_65619_p2() {
    add_ln703_3546_fu_65619_p2 = (!zext_ln703_622_fu_65585_p1.read().is_01() || !zext_ln703_625_fu_65615_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_622_fu_65585_p1.read()) + sc_biguint<11>(zext_ln703_625_fu_65615_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3548_fu_25710_p2() {
    add_ln703_3548_fu_25710_p2 = (!zext_ln1118_502_fu_13498_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_502_fu_13498_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3549_fu_25720_p2() {
    add_ln703_3549_fu_25720_p2 = (!zext_ln1118_661_fu_17410_p1.read().is_01() || !sext_ln203_539_fu_17182_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_661_fu_17410_p1.read()) + sc_bigint<11>(sext_ln203_539_fu_17182_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_354_fu_44533_p2() {
    add_ln703_354_fu_44533_p2 = (!sext_ln703_114_fu_44510_p1.read().is_01() || !sext_ln703_116_fu_44529_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_114_fu_44510_p1.read()) + sc_bigint<13>(sext_ln703_116_fu_44529_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3550_fu_25730_p2() {
    add_ln703_3550_fu_25730_p2 = (!sext_ln703_909_fu_25716_p1.read().is_01() || !sext_ln703_1958_fu_25726_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_909_fu_25716_p1.read()) + sc_bigint<12>(sext_ln703_1958_fu_25726_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3551_fu_25736_p2() {
    add_ln703_3551_fu_25736_p2 = (!sext_ln1118_442_fu_15748_p1.read().is_01() || !sext_ln708_241_fu_15482_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_442_fu_15748_p1.read()) + sc_bigint<11>(sext_ln708_241_fu_15482_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3552_fu_25746_p2() {
    add_ln703_3552_fu_25746_p2 = (!add_ln703_3550_fu_25730_p2.read().is_01() || !sext_ln703_1959_fu_25742_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3550_fu_25730_p2.read()) + sc_bigint<12>(sext_ln703_1959_fu_25742_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3553_fu_25756_p2() {
    add_ln703_3553_fu_25756_p2 = (!sext_ln1118_463_fu_16500_p1.read().is_01() || !sext_ln703_1960_fu_25752_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_463_fu_16500_p1.read()) + sc_bigint<13>(sext_ln703_1960_fu_25752_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3554_fu_25762_p2() {
    add_ln703_3554_fu_25762_p2 = (!sext_ln203_555_fu_17430_p1.read().is_01() || !zext_ln1118_662_fu_17434_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_555_fu_17430_p1.read()) + sc_biguint<12>(zext_ln1118_662_fu_17434_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3555_fu_25772_p2() {
    add_ln703_3555_fu_25772_p2 = (!add_ln703_3553_fu_25756_p2.read().is_01() || !sext_ln703_1961_fu_25768_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3553_fu_25756_p2.read()) + sc_bigint<13>(sext_ln703_1961_fu_25768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3556_fu_65642_p2() {
    add_ln703_3556_fu_65642_p2 = (!sext_ln1118_503_fu_43575_p1.read().is_01() || !zext_ln708_616_fu_43118_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_503_fu_43575_p1.read()) + sc_biguint<11>(zext_ln708_616_fu_43118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3557_fu_65652_p2() {
    add_ln703_3557_fu_65652_p2 = (!zext_ln1116_160_fu_39433_p1.read().is_01() || !zext_ln1118_580_fu_40636_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_160_fu_39433_p1.read()) + sc_biguint<9>(zext_ln1118_580_fu_40636_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3558_fu_65662_p2() {
    add_ln703_3558_fu_65662_p2 = (!sext_ln703_1963_fu_65648_p1.read().is_01() || !zext_ln703_627_fu_65658_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1963_fu_65648_p1.read()) + sc_biguint<12>(zext_ln703_627_fu_65658_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3559_fu_65672_p2() {
    add_ln703_3559_fu_65672_p2 = (!sext_ln703_1962_fu_65639_p1.read().is_01() || !sext_ln703_1964_fu_65668_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1962_fu_65639_p1.read()) + sc_bigint<14>(sext_ln703_1964_fu_65668_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_355_fu_44539_p2() {
    add_ln703_355_fu_44539_p2 = (!sext_ln1118_77_reg_68324.read().is_01() || !sext_ln708_87_fu_27416_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_77_reg_68324.read()) + sc_bigint<11>(sext_ln708_87_fu_27416_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3560_fu_65678_p2() {
    add_ln703_3560_fu_65678_p2 = (!sext_ln1118_504_fu_43581_p1.read().is_01() || !add_ln703_3559_fu_65672_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_504_fu_43581_p1.read()) + sc_biguint<14>(add_ln703_3559_fu_65672_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3561_fu_65684_p2() {
    add_ln703_3561_fu_65684_p2 = (!sext_ln203_556_fu_43578_p1.read().is_01() || !zext_ln1118_663_fu_43585_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_556_fu_43578_p1.read()) + sc_biguint<12>(zext_ln1118_663_fu_43585_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3562_fu_65694_p2() {
    add_ln703_3562_fu_65694_p2 = (!sext_ln1118_505_fu_43589_p1.read().is_01() || !sext_ln703_1965_fu_65690_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_505_fu_43589_p1.read()) + sc_bigint<13>(sext_ln703_1965_fu_65690_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3563_fu_65704_p2() {
    add_ln703_3563_fu_65704_p2 = (!add_ln703_3560_fu_65678_p2.read().is_01() || !sext_ln703_1966_fu_65700_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3560_fu_65678_p2.read()) + sc_bigint<14>(sext_ln703_1966_fu_65700_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3564_fu_65714_p2() {
    add_ln703_3564_fu_65714_p2 = (!zext_ln1118_642_fu_42394_p1.read().is_01() || !zext_ln708_551_fu_40735_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_642_fu_42394_p1.read()) + sc_biguint<10>(zext_ln708_551_fu_40735_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3565_fu_65724_p2() {
    add_ln703_3565_fu_65724_p2 = (!sext_ln203_510_fu_42611_p1.read().is_01() || !zext_ln703_628_fu_65720_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_510_fu_42611_p1.read()) + sc_biguint<12>(zext_ln703_628_fu_65720_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3566_fu_65730_p2() {
    add_ln703_3566_fu_65730_p2 = (!zext_ln1118_525_fu_39508_p1.read().is_01() || !sext_ln1116_78_fu_42317_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_525_fu_39508_p1.read()) + sc_bigint<10>(sext_ln1116_78_fu_42317_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3567_fu_65736_p2() {
    add_ln703_3567_fu_65736_p2 = (!sext_ln1118_411_fu_40083_p1.read().is_01() || !add_ln703_3566_fu_65730_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_411_fu_40083_p1.read()) + sc_biguint<10>(add_ln703_3566_fu_65730_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3568_fu_65746_p2() {
    add_ln703_3568_fu_65746_p2 = (!add_ln703_3565_fu_65724_p2.read().is_01() || !sext_ln703_1968_fu_65742_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3565_fu_65724_p2.read()) + sc_bigint<12>(sext_ln703_1968_fu_65742_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3569_fu_65756_p2() {
    add_ln703_3569_fu_65756_p2 = (!sext_ln703_1967_fu_65710_p1.read().is_01() || !sext_ln703_1969_fu_65752_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1967_fu_65710_p1.read()) + sc_bigint<15>(sext_ln703_1969_fu_65752_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_356_fu_44548_p2() {
    add_ln703_356_fu_44548_p2 = (!add_ln703_354_fu_44533_p2.read().is_01() || !sext_ln703_117_fu_44544_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_354_fu_44533_p2.read()) + sc_bigint<13>(sext_ln703_117_fu_44544_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3570_fu_65762_p2() {
    add_ln703_3570_fu_65762_p2 = (!sext_ln203_558_fu_43617_p1.read().is_01() || !add_ln703_3569_fu_65756_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_558_fu_43617_p1.read()) + sc_biguint<15>(add_ln703_3569_fu_65756_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3571_fu_65768_p2() {
    add_ln703_3571_fu_65768_p2 = (!sext_ln708_248_fu_41942_p1.read().is_01() || !sext_ln203_513_fu_42703_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_248_fu_41942_p1.read()) + sc_bigint<12>(sext_ln203_513_fu_42703_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3572_fu_65778_p2() {
    add_ln703_3572_fu_65778_p2 = (!add_ln703_3570_fu_65762_p2.read().is_01() || !sext_ln703_1970_fu_65774_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3570_fu_65762_p2.read()) + sc_bigint<15>(sext_ln703_1970_fu_65774_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3573_fu_65784_p2() {
    add_ln703_3573_fu_65784_p2 = (!sext_ln203_559_fu_43636_p1.read().is_01() || !sext_ln203_439_fu_40001_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_559_fu_43636_p1.read()) + sc_bigint<11>(sext_ln203_439_fu_40001_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3574_fu_65794_p2() {
    add_ln703_3574_fu_65794_p2 = (!sext_ln203_440_fu_40059_p1.read().is_01() || !sext_ln203_557_fu_43593_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_440_fu_40059_p1.read()) + sc_bigint<9>(sext_ln203_557_fu_43593_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3575_fu_65804_p2() {
    add_ln703_3575_fu_65804_p2 = (!sext_ln1116_80_fu_42345_p1.read().is_01() || !sext_ln703_1972_fu_65800_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_80_fu_42345_p1.read()) + sc_bigint<10>(sext_ln703_1972_fu_65800_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3576_fu_65814_p2() {
    add_ln703_3576_fu_65814_p2 = (!sext_ln703_1971_fu_65790_p1.read().is_01() || !sext_ln703_1973_fu_65810_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1971_fu_65790_p1.read()) + sc_bigint<12>(sext_ln703_1973_fu_65810_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3578_fu_25778_p2() {
    add_ln703_3578_fu_25778_p2 = (!zext_ln708_589_fu_16200_p1.read().is_01() || !ap_const_lv11_580.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_589_fu_16200_p1.read()) + sc_bigint<11>(ap_const_lv11_580));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3579_fu_25784_p2() {
    add_ln703_3579_fu_25784_p2 = (!zext_ln203_214_fu_14594_p1.read().is_01() || !zext_ln1118_554_fu_14284_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_214_fu_14594_p1.read()) + sc_biguint<10>(zext_ln1118_554_fu_14284_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_357_fu_44558_p2() {
    add_ln703_357_fu_44558_p2 = (!zext_ln1118_87_fu_27423_p1.read().is_01() || !sext_ln1118_69_fu_26997_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_87_fu_27423_p1.read()) + sc_bigint<11>(sext_ln1118_69_fu_26997_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3580_fu_25794_p2() {
    add_ln703_3580_fu_25794_p2 = (!zext_ln203_233_fu_16150_p1.read().is_01() || !zext_ln703_629_fu_25790_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_233_fu_16150_p1.read()) + sc_biguint<11>(zext_ln703_629_fu_25790_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3581_fu_25800_p2() {
    add_ln703_3581_fu_25800_p2 = (!add_ln703_3578_fu_25778_p2.read().is_01() || !add_ln703_3580_fu_25794_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3578_fu_25778_p2.read()) + sc_biguint<11>(add_ln703_3580_fu_25794_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3582_fu_25810_p2() {
    add_ln703_3582_fu_25810_p2 = (!zext_ln203_261_fu_17438_p1.read().is_01() || !sext_ln703_914_fu_25806_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_261_fu_17438_p1.read()) + sc_bigint<12>(sext_ln703_914_fu_25806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3583_fu_25820_p2() {
    add_ln703_3583_fu_25820_p2 = (!zext_ln203_262_fu_17466_p1.read().is_01() || !sext_ln703_915_fu_25816_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln203_262_fu_17466_p1.read()) + sc_bigint<13>(sext_ln703_915_fu_25816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3584_fu_25826_p2() {
    add_ln703_3584_fu_25826_p2 = (!sext_ln1118_507_fu_17442_p1.read().is_01() || !zext_ln1118_654_fu_17090_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_507_fu_17442_p1.read()) + sc_biguint<12>(zext_ln1118_654_fu_17090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3585_fu_25836_p2() {
    add_ln703_3585_fu_25836_p2 = (!add_ln703_3583_fu_25820_p2.read().is_01() || !sext_ln703_1976_fu_25832_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3583_fu_25820_p2.read()) + sc_bigint<13>(sext_ln703_1976_fu_25832_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3586_fu_25842_p2() {
    add_ln703_3586_fu_25842_p2 = (!zext_ln1118_664_fu_17490_p1.read().is_01() || !sext_ln708_261_fu_17470_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_664_fu_17490_p1.read()) + sc_bigint<11>(sext_ln708_261_fu_17470_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3587_fu_65840_p2() {
    add_ln703_3587_fu_65840_p2 = (!sext_ln703_916_fu_65834_p1.read().is_01() || !sext_ln703_1977_fu_65837_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_916_fu_65834_p1.read()) + sc_bigint<14>(sext_ln703_1977_fu_65837_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3588_fu_25848_p2() {
    add_ln703_3588_fu_25848_p2 = (!zext_ln1118_582_fu_15026_p1.read().is_01() || !zext_ln1118_639_fu_16364_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_582_fu_15026_p1.read()) + sc_biguint<10>(zext_ln1118_639_fu_16364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3589_fu_65849_p2() {
    add_ln703_3589_fu_65849_p2 = (!zext_ln1116_160_fu_39433_p1.read().is_01() || !sext_ln1116_76_fu_42285_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_160_fu_39433_p1.read()) + sc_bigint<9>(sext_ln1116_76_fu_42285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_358_fu_44568_p2() {
    add_ln703_358_fu_44568_p2 = (!sext_ln708_88_fu_27477_p1.read().is_01() || !sext_ln703_119_fu_44564_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_88_fu_27477_p1.read()) + sc_bigint<12>(sext_ln703_119_fu_44564_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3590_fu_65859_p2() {
    add_ln703_3590_fu_65859_p2 = (!zext_ln703_630_fu_65846_p1.read().is_01() || !sext_ln703_1978_fu_65855_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_630_fu_65846_p1.read()) + sc_bigint<12>(sext_ln703_1978_fu_65855_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3591_fu_65869_p2() {
    add_ln703_3591_fu_65869_p2 = (!add_ln703_3587_fu_65840_p2.read().is_01() || !sext_ln703_1979_fu_65865_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3587_fu_65840_p2.read()) + sc_bigint<14>(sext_ln703_1979_fu_65865_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3592_fu_65875_p2() {
    add_ln703_3592_fu_65875_p2 = (!zext_ln708_542_fu_40427_p1.read().is_01() || !sext_ln203_454_fu_40605_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln708_542_fu_40427_p1.read()) + sc_bigint<12>(sext_ln203_454_fu_40605_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3593_fu_65885_p2() {
    add_ln703_3593_fu_65885_p2 = (!add_ln703_3591_fu_65869_p2.read().is_01() || !sext_ln703_1980_fu_65881_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3591_fu_65869_p2.read()) + sc_bigint<14>(sext_ln703_1980_fu_65881_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3594_fu_65895_p2() {
    add_ln703_3594_fu_65895_p2 = (!zext_ln708_638_fu_43669_p1.read().is_01() || !zext_ln708_583_fu_42014_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_638_fu_43669_p1.read()) + sc_biguint<11>(zext_ln708_583_fu_42014_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3595_fu_65905_p2() {
    add_ln703_3595_fu_65905_p2 = (!zext_ln708_582_fu_41990_p1.read().is_01() || !zext_ln708_550_fu_40674_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_582_fu_41990_p1.read()) + sc_biguint<10>(zext_ln708_550_fu_40674_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3596_fu_65915_p2() {
    add_ln703_3596_fu_65915_p2 = (!zext_ln703_631_fu_65901_p1.read().is_01() || !zext_ln703_632_fu_65911_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_631_fu_65901_p1.read()) + sc_biguint<12>(zext_ln703_632_fu_65911_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3597_fu_65925_p2() {
    add_ln703_3597_fu_65925_p2 = (!sext_ln703_1981_fu_65891_p1.read().is_01() || !zext_ln703_633_fu_65921_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_1981_fu_65891_p1.read()) + sc_biguint<15>(zext_ln703_633_fu_65921_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3598_fu_65931_p2() {
    add_ln703_3598_fu_65931_p2 = (!sext_ln203_451_fu_40404_p1.read().is_01() || !zext_ln708_543_fu_40497_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_451_fu_40404_p1.read()) + sc_biguint<11>(zext_ln708_543_fu_40497_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3599_fu_65937_p2() {
    add_ln703_3599_fu_65937_p2 = (!sext_ln203_468_fu_41352_p1.read().is_01() || !sext_ln708_262_fu_43640_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_468_fu_41352_p1.read()) + sc_bigint<9>(sext_ln708_262_fu_43640_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_359_fu_44578_p2() {
    add_ln703_359_fu_44578_p2 = (!sext_ln703_118_fu_44554_p1.read().is_01() || !sext_ln703_120_fu_44574_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_118_fu_44554_p1.read()) + sc_bigint<14>(sext_ln703_120_fu_44574_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3600_fu_65947_p2() {
    add_ln703_3600_fu_65947_p2 = (!add_ln703_3598_fu_65931_p2.read().is_01() || !sext_ln703_1982_fu_65943_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3598_fu_65931_p2.read()) + sc_bigint<11>(sext_ln703_1982_fu_65943_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3601_fu_65957_p2() {
    add_ln703_3601_fu_65957_p2 = (!zext_ln708_636_fu_43648_p1.read().is_01() || !zext_ln708_533_fu_40154_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_636_fu_43648_p1.read()) + sc_biguint<8>(zext_ln708_533_fu_40154_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3602_fu_65967_p2() {
    add_ln703_3602_fu_65967_p2 = (!zext_ln1116_200_fu_43547_p1.read().is_01() || !zext_ln708_508_fu_39657_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_200_fu_43547_p1.read()) + sc_biguint<9>(zext_ln708_508_fu_39657_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3603_fu_65977_p2() {
    add_ln703_3603_fu_65977_p2 = (!zext_ln703_634_fu_65963_p1.read().is_01() || !zext_ln703_635_fu_65973_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_634_fu_65963_p1.read()) + sc_biguint<10>(zext_ln703_635_fu_65973_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3604_fu_65987_p2() {
    add_ln703_3604_fu_65987_p2 = (!sext_ln703_1983_fu_65953_p1.read().is_01() || !zext_ln703_636_fu_65983_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1983_fu_65953_p1.read()) + sc_biguint<12>(zext_ln703_636_fu_65983_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3605_fu_65997_p2() {
    add_ln703_3605_fu_65997_p2 = (!add_ln703_3597_fu_65925_p2.read().is_01() || !sext_ln703_1984_fu_65993_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3597_fu_65925_p2.read()) + sc_bigint<15>(sext_ln703_1984_fu_65993_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3606_fu_66003_p2() {
    add_ln703_3606_fu_66003_p2 = (!zext_ln203_263_fu_43673_p1.read().is_01() || !add_ln703_3605_fu_65997_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(zext_ln203_263_fu_43673_p1.read()) + sc_biguint<15>(add_ln703_3605_fu_65997_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3607_fu_66009_p2() {
    add_ln703_3607_fu_66009_p2 = (!zext_ln203_220_fu_40629_p1.read().is_01() || !zext_ln708_633_fu_43571_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_220_fu_40629_p1.read()) + sc_biguint<10>(zext_ln708_633_fu_43571_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3609_fu_25854_p2() {
    add_ln703_3609_fu_25854_p2 = (!sext_ln1116_73_fu_16296_p1.read().is_01() || !ap_const_lv9_180.is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_73_fu_16296_p1.read()) + sc_bigint<9>(ap_const_lv9_180));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_360_fu_44584_p2() {
    add_ln703_360_fu_44584_p2 = (!sext_ln1118_78_fu_27446_p1.read().is_01() || !sext_ln1116_14_fu_27536_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_78_fu_27446_p1.read()) + sc_bigint<10>(sext_ln1116_14_fu_27536_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3610_fu_25864_p2() {
    add_ln703_3610_fu_25864_p2 = (!sext_ln1118_508_fu_17520_p1.read().is_01() || !sext_ln203_539_fu_17182_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_508_fu_17520_p1.read()) + sc_bigint<11>(sext_ln203_539_fu_17182_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3611_fu_25870_p2() {
    add_ln703_3611_fu_25870_p2 = (!sext_ln703_1986_fu_25860_p1.read().is_01() || !add_ln703_3610_fu_25864_p2.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1986_fu_25860_p1.read()) + sc_biguint<11>(add_ln703_3610_fu_25864_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3612_fu_66032_p2() {
    add_ln703_3612_fu_66032_p2 = (!sext_ln1118_509_fu_43681_p1.read().is_01() || !sext_ln703_1987_fu_66029_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_509_fu_43681_p1.read()) + sc_bigint<12>(sext_ln703_1987_fu_66029_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3613_fu_66038_p2() {
    add_ln703_3613_fu_66038_p2 = (!sext_ln203_437_fu_39783_p1.read().is_01() || !sext_ln203_494_fu_42382_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_437_fu_39783_p1.read()) + sc_bigint<9>(sext_ln203_494_fu_42382_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3614_fu_66048_p2() {
    add_ln703_3614_fu_66048_p2 = (!sext_ln1118_510_fu_43684_p1.read().is_01() || !sext_ln703_1988_fu_66044_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_510_fu_43684_p1.read()) + sc_bigint<10>(sext_ln703_1988_fu_66044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3615_fu_66058_p2() {
    add_ln703_3615_fu_66058_p2 = (!add_ln703_3612_fu_66032_p2.read().is_01() || !sext_ln703_1989_fu_66054_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_3612_fu_66032_p2.read()) + sc_bigint<12>(sext_ln703_1989_fu_66054_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3616_fu_66068_p2() {
    add_ln703_3616_fu_66068_p2 = (!sext_ln1118_455_fu_42294_p1.read().is_01() || !sext_ln703_1990_fu_66064_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_455_fu_42294_p1.read()) + sc_bigint<13>(sext_ln703_1990_fu_66064_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3617_fu_66074_p2() {
    add_ln703_3617_fu_66074_p2 = (!sext_ln708_252_fu_42587_p1.read().is_01() || !sext_ln703_1770_fu_63247_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_252_fu_42587_p1.read()) + sc_bigint<12>(sext_ln703_1770_fu_63247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3618_fu_66084_p2() {
    add_ln703_3618_fu_66084_p2 = (!add_ln703_3616_fu_66068_p2.read().is_01() || !sext_ln703_1991_fu_66080_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3616_fu_66068_p2.read()) + sc_bigint<13>(sext_ln703_1991_fu_66080_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3619_fu_66094_p2() {
    add_ln703_3619_fu_66094_p2 = (!sext_ln1118_411_fu_40083_p1.read().is_01() || !sext_ln203_475_fu_41473_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_411_fu_40083_p1.read()) + sc_bigint<10>(sext_ln203_475_fu_41473_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_361_fu_44594_p2() {
    add_ln703_361_fu_44594_p2 = (!zext_ln1116_29_fu_27484_p1.read().is_01() || !sext_ln703_121_fu_44590_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1116_29_fu_27484_p1.read()) + sc_bigint<11>(sext_ln703_121_fu_44590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3620_fu_66104_p2() {
    add_ln703_3620_fu_66104_p2 = (!zext_ln708_510_fu_39665_p1.read().is_01() || !sext_ln1118_511_fu_43688_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_510_fu_39665_p1.read()) + sc_bigint<10>(sext_ln1118_511_fu_43688_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3621_fu_66110_p2() {
    add_ln703_3621_fu_66110_p2 = (!sext_ln1118_414_fu_40176_p1.read().is_01() || !add_ln703_3620_fu_66104_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_414_fu_40176_p1.read()) + sc_biguint<10>(add_ln703_3620_fu_66104_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3622_fu_66120_p2() {
    add_ln703_3622_fu_66120_p2 = (!sext_ln703_1993_fu_66100_p1.read().is_01() || !sext_ln703_1994_fu_66116_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_1993_fu_66100_p1.read()) + sc_bigint<11>(sext_ln703_1994_fu_66116_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3623_fu_66130_p2() {
    add_ln703_3623_fu_66130_p2 = (!sext_ln703_1992_fu_66090_p1.read().is_01() || !sext_ln703_1995_fu_66126_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_1992_fu_66090_p1.read()) + sc_bigint<14>(sext_ln703_1995_fu_66126_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3625_fu_25876_p2() {
    add_ln703_3625_fu_25876_p2 = (!zext_ln1116_202_fu_17524_p1.read().is_01() || !sext_ln1118_487_fu_16934_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1116_202_fu_17524_p1.read()) + sc_bigint<11>(sext_ln1118_487_fu_16934_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3626_fu_25882_p2() {
    add_ln703_3626_fu_25882_p2 = (!add_ln703_3625_fu_25876_p2.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3625_fu_25876_p2.read()) + sc_bigint<11>(ap_const_lv11_600));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3627_fu_25892_p2() {
    add_ln703_3627_fu_25892_p2 = (!zext_ln1118_665_fu_17528_p1.read().is_01() || !sext_ln1118_460_fu_16472_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_665_fu_17528_p1.read()) + sc_bigint<12>(sext_ln1118_460_fu_16472_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3628_fu_25898_p2() {
    add_ln703_3628_fu_25898_p2 = (!sext_ln703_1997_fu_25888_p1.read().is_01() || !add_ln703_3627_fu_25892_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_1997_fu_25888_p1.read()) + sc_biguint<12>(add_ln703_3627_fu_25892_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3629_fu_25908_p2() {
    add_ln703_3629_fu_25908_p2 = (!zext_ln708_639_fu_17536_p1.read().is_01() || !sext_ln708_263_fu_17532_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_639_fu_17536_p1.read()) + sc_bigint<10>(sext_ln708_263_fu_17532_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_362_fu_44604_p2() {
    add_ln703_362_fu_44604_p2 = (!zext_ln708_25_fu_26403_p1.read().is_01() || !zext_ln1118_91_fu_27513_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_25_fu_26403_p1.read()) + sc_biguint<9>(zext_ln1118_91_fu_27513_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3630_fu_25918_p2() {
    add_ln703_3630_fu_25918_p2 = (!zext_ln1118_666_fu_17540_p1.read().is_01() || !sext_ln703_1999_fu_25914_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_666_fu_17540_p1.read()) + sc_bigint<11>(sext_ln703_1999_fu_25914_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3631_fu_25928_p2() {
    add_ln703_3631_fu_25928_p2 = (!sext_ln703_1998_fu_25904_p1.read().is_01() || !sext_ln703_2000_fu_25924_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_1998_fu_25904_p1.read()) + sc_bigint<13>(sext_ln703_2000_fu_25924_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3632_fu_25934_p2() {
    add_ln703_3632_fu_25934_p2 = (!zext_ln1118_667_fu_17544_p1.read().is_01() || !add_ln703_3631_fu_25928_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln1118_667_fu_17544_p1.read()) + sc_biguint<13>(add_ln703_3631_fu_25928_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3633_fu_25940_p2() {
    add_ln703_3633_fu_25940_p2 = (!sext_ln1116_83_fu_17568_p1.read().is_01() || !sext_ln1118_513_fu_17548_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln1116_83_fu_17568_p1.read()) + sc_bigint<9>(sext_ln1118_513_fu_17548_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3634_fu_25950_p2() {
    add_ln703_3634_fu_25950_p2 = (!sext_ln1118_445_fu_15848_p1.read().is_01() || !sext_ln703_2001_fu_25946_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_445_fu_15848_p1.read()) + sc_bigint<10>(sext_ln703_2001_fu_25946_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3635_fu_25960_p2() {
    add_ln703_3635_fu_25960_p2 = (!add_ln703_3632_fu_25934_p2.read().is_01() || !sext_ln703_2002_fu_25956_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3632_fu_25934_p2.read()) + sc_bigint<13>(sext_ln703_2002_fu_25956_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3636_fu_66149_p2() {
    add_ln703_3636_fu_66149_p2 = (!sext_ln708_264_fu_43715_p1.read().is_01() || !sext_ln1118_476_fu_42567_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_264_fu_43715_p1.read()) + sc_bigint<12>(sext_ln1118_476_fu_42567_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3637_fu_66159_p2() {
    add_ln703_3637_fu_66159_p2 = (!sext_ln703_2003_fu_66146_p1.read().is_01() || !sext_ln703_2004_fu_66155_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2003_fu_66146_p1.read()) + sc_bigint<14>(sext_ln703_2004_fu_66155_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3638_fu_66169_p2() {
    add_ln703_3638_fu_66169_p2 = (!sext_ln1118_433_fu_40993_p1.read().is_01() || !sext_ln203_497_fu_42461_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_433_fu_40993_p1.read()) + sc_bigint<12>(sext_ln203_497_fu_42461_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3639_fu_66179_p2() {
    add_ln703_3639_fu_66179_p2 = (!zext_ln1116_203_fu_43734_p1.read().is_01() || !sext_ln708_265_fu_43738_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_203_fu_43734_p1.read()) + sc_bigint<12>(sext_ln708_265_fu_43738_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_363_fu_44614_p2() {
    add_ln703_363_fu_44614_p2 = (!sext_ln1116_15_fu_27562_p1.read().is_01() || !zext_ln703_19_fu_44610_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_15_fu_27562_p1.read()) + sc_biguint<10>(zext_ln703_19_fu_44610_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3640_fu_66189_p2() {
    add_ln703_3640_fu_66189_p2 = (!sext_ln703_2006_fu_66175_p1.read().is_01() || !sext_ln703_2007_fu_66185_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2006_fu_66175_p1.read()) + sc_bigint<13>(sext_ln703_2007_fu_66185_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3641_fu_66199_p2() {
    add_ln703_3641_fu_66199_p2 = (!sext_ln703_2005_fu_66165_p1.read().is_01() || !sext_ln703_2008_fu_66195_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2005_fu_66165_p1.read()) + sc_bigint<15>(sext_ln703_2008_fu_66195_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3642_fu_66205_p2() {
    add_ln703_3642_fu_66205_p2 = (!sext_ln203_451_fu_40404_p1.read().is_01() || !zext_ln203_236_fu_41994_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_451_fu_40404_p1.read()) + sc_biguint<11>(zext_ln203_236_fu_41994_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3643_fu_66211_p2() {
    add_ln703_3643_fu_66211_p2 = (!zext_ln1118_524_fu_39505_p1.read().is_01() || !zext_ln1118_561_fu_40157_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_524_fu_39505_p1.read()) + sc_biguint<9>(zext_ln1118_561_fu_40157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3644_fu_66221_p2() {
    add_ln703_3644_fu_66221_p2 = (!add_ln703_3642_fu_66205_p2.read().is_01() || !zext_ln703_638_fu_66217_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3642_fu_66205_p2.read()) + sc_biguint<11>(zext_ln703_638_fu_66217_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3645_fu_66231_p2() {
    add_ln703_3645_fu_66231_p2 = (!zext_ln708_561_fu_41030_p1.read().is_01() || !zext_ln708_599_fu_42205_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_561_fu_41030_p1.read()) + sc_biguint<8>(zext_ln708_599_fu_42205_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3646_fu_66241_p2() {
    add_ln703_3646_fu_66241_p2 = (!zext_ln203_249_fu_42927_p1.read().is_01() || !zext_ln708_512_fu_39681_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_249_fu_42927_p1.read()) + sc_biguint<9>(zext_ln708_512_fu_39681_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3647_fu_66251_p2() {
    add_ln703_3647_fu_66251_p2 = (!zext_ln703_639_fu_66237_p1.read().is_01() || !zext_ln703_640_fu_66247_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_639_fu_66237_p1.read()) + sc_biguint<10>(zext_ln703_640_fu_66247_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3648_fu_66261_p2() {
    add_ln703_3648_fu_66261_p2 = (!sext_ln703_2009_fu_66227_p1.read().is_01() || !zext_ln703_641_fu_66257_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2009_fu_66227_p1.read()) + sc_biguint<12>(zext_ln703_641_fu_66257_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3649_fu_66271_p2() {
    add_ln703_3649_fu_66271_p2 = (!add_ln703_3641_fu_66199_p2.read().is_01() || !sext_ln703_2010_fu_66267_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3641_fu_66199_p2.read()) + sc_bigint<15>(sext_ln703_2010_fu_66267_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_364_fu_44624_p2() {
    add_ln703_364_fu_44624_p2 = (!sext_ln703_122_fu_44600_p1.read().is_01() || !sext_ln703_123_fu_44620_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_122_fu_44600_p1.read()) + sc_bigint<12>(sext_ln703_123_fu_44620_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3650_fu_66277_p2() {
    add_ln703_3650_fu_66277_p2 = (!sext_ln203_561_fu_43742_p1.read().is_01() || !add_ln703_3649_fu_66271_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_561_fu_43742_p1.read()) + sc_biguint<15>(add_ln703_3649_fu_66271_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3652_fu_66300_p2() {
    add_ln703_3652_fu_66300_p2 = (!or_ln703_15_fu_62455_p3.read().is_01() || !zext_ln703_642_fu_66297_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_15_fu_62455_p3.read()) + sc_biguint<16>(zext_ln703_642_fu_66297_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3653_fu_66306_p2() {
    add_ln703_3653_fu_66306_p2 = (!zext_ln708_611_fu_42995_p1.read().is_01() || !zext_ln708_567_fu_41503_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_611_fu_42995_p1.read()) + sc_biguint<11>(zext_ln708_567_fu_41503_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3654_fu_66316_p2() {
    add_ln703_3654_fu_66316_p2 = (!zext_ln708_641_fu_43808_p1.read().is_01() || !zext_ln708_586_fu_42132_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_641_fu_43808_p1.read()) + sc_biguint<11>(zext_ln708_586_fu_42132_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3655_fu_66326_p2() {
    add_ln703_3655_fu_66326_p2 = (!zext_ln703_643_fu_66312_p1.read().is_01() || !zext_ln703_644_fu_66322_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_643_fu_66312_p1.read()) + sc_biguint<12>(zext_ln703_644_fu_66322_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3656_fu_66336_p2() {
    add_ln703_3656_fu_66336_p2 = (!add_ln703_3652_fu_66300_p2.read().is_01() || !zext_ln703_645_fu_66332_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3652_fu_66300_p2.read()) + sc_biguint<16>(zext_ln703_645_fu_66332_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3657_fu_66342_p2() {
    add_ln703_3657_fu_66342_p2 = (!sext_ln203_444_fu_40361_p1.read().is_01() || !sext_ln203_485_fu_41739_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_444_fu_40361_p1.read()) + sc_bigint<11>(sext_ln203_485_fu_41739_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3658_fu_66352_p2() {
    add_ln703_3658_fu_66352_p2 = (!sext_ln203_562_fu_43745_p1.read().is_01() || !sext_ln703_2013_fu_66348_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_562_fu_43745_p1.read()) + sc_bigint<12>(sext_ln703_2013_fu_66348_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3659_fu_66362_p2() {
    add_ln703_3659_fu_66362_p2 = (!zext_ln708_640_fu_43788_p1.read().is_01() || !zext_ln708_559_reg_70079.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_640_fu_43788_p1.read()) + sc_biguint<10>(zext_ln708_559_reg_70079.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_365_fu_44634_p2() {
    add_ln703_365_fu_44634_p2 = (!add_ln703_359_fu_44578_p2.read().is_01() || !sext_ln703_124_fu_44630_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_359_fu_44578_p2.read()) + sc_bigint<14>(sext_ln703_124_fu_44630_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3660_fu_66371_p2() {
    add_ln703_3660_fu_66371_p2 = (!sext_ln1116_71_fu_40790_p1.read().is_01() || !sext_ln203_563_fu_43764_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_71_fu_40790_p1.read()) + sc_bigint<10>(sext_ln203_563_fu_43764_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3661_fu_66381_p2() {
    add_ln703_3661_fu_66381_p2 = (!zext_ln703_646_fu_66367_p1.read().is_01() || !sext_ln703_2015_fu_66377_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_646_fu_66367_p1.read()) + sc_bigint<12>(sext_ln703_2015_fu_66377_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3662_fu_66391_p2() {
    add_ln703_3662_fu_66391_p2 = (!sext_ln703_2014_fu_66358_p1.read().is_01() || !sext_ln703_2016_fu_66387_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2014_fu_66358_p1.read()) + sc_bigint<13>(sext_ln703_2016_fu_66387_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3663_fu_66401_p2() {
    add_ln703_3663_fu_66401_p2 = (!add_ln703_3656_fu_66336_p2.read().is_01() || !sext_ln703_2017_fu_66397_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_3656_fu_66336_p2.read()) + sc_bigint<16>(sext_ln703_2017_fu_66397_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3664_fu_25966_p2() {
    add_ln703_3664_fu_25966_p2 = (!zext_ln1118_648_fu_16914_p1.read().is_01() || !zext_ln1118_582_fu_15026_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_648_fu_16914_p1.read()) + sc_biguint<10>(zext_ln1118_582_fu_15026_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3665_fu_25976_p2() {
    add_ln703_3665_fu_25976_p2 = (!zext_ln203_266_fu_17586_p1.read().is_01() || !zext_ln703_647_fu_25972_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_266_fu_17586_p1.read()) + sc_biguint<11>(zext_ln703_647_fu_25972_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3666_fu_66410_p2() {
    add_ln703_3666_fu_66410_p2 = (!sext_ln203_451_fu_40404_p1.read().is_01() || !zext_ln708_584_fu_42038_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_451_fu_40404_p1.read()) + sc_biguint<11>(zext_ln708_584_fu_42038_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3667_fu_66416_p2() {
    add_ln703_3667_fu_66416_p2 = (!zext_ln708_485_reg_69773.read().is_01() || !sext_ln203_564_fu_43768_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_485_reg_69773.read()) + sc_bigint<10>(sext_ln203_564_fu_43768_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3668_fu_66425_p2() {
    add_ln703_3668_fu_66425_p2 = (!add_ln703_3666_fu_66410_p2.read().is_01() || !sext_ln703_2018_fu_66421_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3666_fu_66410_p2.read()) + sc_bigint<11>(sext_ln703_2018_fu_66421_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3669_fu_66435_p2() {
    add_ln703_3669_fu_66435_p2 = (!zext_ln703_648_fu_66407_p1.read().is_01() || !sext_ln703_2019_fu_66431_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln703_648_fu_66407_p1.read()) + sc_bigint<13>(sext_ln703_2019_fu_66431_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_366_fu_44640_p2() {
    add_ln703_366_fu_44640_p2 = (!sext_ln203_51_fu_27594_p1.read().is_01() || !add_ln703_365_fu_44634_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_51_fu_27594_p1.read()) + sc_biguint<14>(add_ln703_365_fu_44634_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3670_fu_25982_p2() {
    add_ln703_3670_fu_25982_p2 = (!zext_ln203_265_fu_17582_p1.read().is_01() || !zext_ln1116_155_fu_13644_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_265_fu_17582_p1.read()) + sc_biguint<9>(zext_ln1116_155_fu_13644_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3671_fu_66448_p2() {
    add_ln703_3671_fu_66448_p2 = (!zext_ln708_494_reg_69801.read().is_01() || !zext_ln708_491_reg_69783.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_494_reg_69801.read()) + sc_biguint<9>(zext_ln708_491_reg_69783.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3672_fu_66456_p2() {
    add_ln703_3672_fu_66456_p2 = (!zext_ln703_649_fu_66445_p1.read().is_01() || !zext_ln703_650_fu_66452_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_649_fu_66445_p1.read()) + sc_biguint<10>(zext_ln703_650_fu_66452_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3673_fu_66466_p2() {
    add_ln703_3673_fu_66466_p2 = (!zext_ln708_508_fu_39657_p1.read().is_01() || !zext_ln1118_522_fu_39448_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_508_fu_39657_p1.read()) + sc_biguint<9>(zext_ln1118_522_fu_39448_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3674_fu_66476_p2() {
    add_ln703_3674_fu_66476_p2 = (!zext_ln203_242_fu_42379_p1.read().is_01() || !zext_ln708_512_fu_39681_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln203_242_fu_42379_p1.read()) + sc_biguint<9>(zext_ln708_512_fu_39681_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3675_fu_66486_p2() {
    add_ln703_3675_fu_66486_p2 = (!zext_ln703_652_fu_66472_p1.read().is_01() || !zext_ln703_653_fu_66482_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_652_fu_66472_p1.read()) + sc_biguint<10>(zext_ln703_653_fu_66482_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3676_fu_66496_p2() {
    add_ln703_3676_fu_66496_p2 = (!zext_ln703_651_fu_66462_p1.read().is_01() || !zext_ln703_654_fu_66492_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln703_651_fu_66462_p1.read()) + sc_biguint<11>(zext_ln703_654_fu_66492_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3677_fu_66506_p2() {
    add_ln703_3677_fu_66506_p2 = (!sext_ln703_2020_fu_66441_p1.read().is_01() || !zext_ln703_655_fu_66502_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2020_fu_66441_p1.read()) + sc_biguint<14>(zext_ln703_655_fu_66502_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3679_fu_25988_p2() {
    add_ln703_3679_fu_25988_p2 = (!zext_ln708_516_fu_13960_p1.read().is_01() || !sext_ln708_266_fu_17590_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_516_fu_13960_p1.read()) + sc_bigint<11>(sext_ln708_266_fu_17590_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_367_fu_44646_p2() {
    add_ln703_367_fu_44646_p2 = (!zext_ln203_8_fu_27137_p1.read().is_01() || !sext_ln203_52_fu_27617_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_8_fu_27137_p1.read()) + sc_bigint<10>(sext_ln203_52_fu_27617_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3680_fu_25998_p2() {
    add_ln703_3680_fu_25998_p2 = (!sext_ln703_2022_fu_25994_p1.read().is_01() || !ap_const_lv12_C00.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2022_fu_25994_p1.read()) + sc_bigint<12>(ap_const_lv12_C00));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3681_fu_26008_p2() {
    add_ln703_3681_fu_26008_p2 = (!sext_ln203_433_fu_13624_p1.read().is_01() || !sext_ln703_927_fu_26004_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_433_fu_13624_p1.read()) + sc_bigint<13>(sext_ln703_927_fu_26004_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3682_fu_26014_p2() {
    add_ln703_3682_fu_26014_p2 = (!sext_ln1118_479_fu_16730_p1.read().is_01() || !zext_ln708_590_fu_16204_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_479_fu_16730_p1.read()) + sc_biguint<11>(zext_ln708_590_fu_16204_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3683_fu_26024_p2() {
    add_ln703_3683_fu_26024_p2 = (!zext_ln203_209_fu_14068_p1.read().is_01() || !sext_ln703_2023_fu_26020_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_209_fu_14068_p1.read()) + sc_bigint<12>(sext_ln703_2023_fu_26020_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3684_fu_26034_p2() {
    add_ln703_3684_fu_26034_p2 = (!add_ln703_3681_fu_26008_p2.read().is_01() || !sext_ln703_2024_fu_26030_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3681_fu_26008_p2.read()) + sc_bigint<13>(sext_ln703_2024_fu_26030_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3685_fu_26040_p2() {
    add_ln703_3685_fu_26040_p2 = (!zext_ln708_642_fu_17598_p1.read().is_01() || !add_ln703_3684_fu_26034_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln708_642_fu_17598_p1.read()) + sc_biguint<13>(add_ln703_3684_fu_26034_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3686_fu_26046_p2() {
    add_ln703_3686_fu_26046_p2 = (!zext_ln1118_648_fu_16914_p1.read().is_01() || !zext_ln708_566_fu_15808_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_648_fu_16914_p1.read()) + sc_biguint<10>(zext_ln708_566_fu_15808_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3687_fu_26056_p2() {
    add_ln703_3687_fu_26056_p2 = (!sext_ln203_565_fu_17594_p1.read().is_01() || !zext_ln703_656_fu_26052_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_565_fu_17594_p1.read()) + sc_biguint<12>(zext_ln703_656_fu_26052_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3688_fu_26066_p2() {
    add_ln703_3688_fu_26066_p2 = (!add_ln703_3685_fu_26040_p2.read().is_01() || !sext_ln703_2025_fu_26062_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3685_fu_26040_p2.read()) + sc_bigint<13>(sext_ln703_2025_fu_26062_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3689_fu_66525_p2() {
    add_ln703_3689_fu_66525_p2 = (!sext_ln1118_512_fu_43712_p1.read().is_01() || !zext_ln708_596_fu_42168_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_512_fu_43712_p1.read()) + sc_biguint<11>(zext_ln708_596_fu_42168_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3690_fu_66535_p2() {
    add_ln703_3690_fu_66535_p2 = (!zext_ln708_500_fu_39439_p1.read().is_01() || !zext_ln708_564_fu_41119_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_500_fu_39439_p1.read()) + sc_biguint<8>(zext_ln708_564_fu_41119_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3691_fu_66545_p2() {
    add_ln703_3691_fu_66545_p2 = (!zext_ln708_491_reg_69783.read().is_01() || !zext_ln703_657_fu_66541_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_491_reg_69783.read()) + sc_biguint<9>(zext_ln703_657_fu_66541_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3692_fu_66554_p2() {
    add_ln703_3692_fu_66554_p2 = (!sext_ln703_2027_fu_66531_p1.read().is_01() || !zext_ln703_658_fu_66550_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2027_fu_66531_p1.read()) + sc_biguint<12>(zext_ln703_658_fu_66550_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3693_fu_66564_p2() {
    add_ln703_3693_fu_66564_p2 = (!sext_ln703_2026_fu_66522_p1.read().is_01() || !sext_ln703_2028_fu_66560_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_2026_fu_66522_p1.read()) + sc_bigint<14>(sext_ln703_2028_fu_66560_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3694_fu_66570_p2() {
    add_ln703_3694_fu_66570_p2 = (!sext_ln1118_514_fu_43812_p1.read().is_01() || !zext_ln708_635_fu_43644_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_514_fu_43812_p1.read()) + sc_biguint<12>(zext_ln708_635_fu_43644_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3695_fu_66580_p2() {
    add_ln703_3695_fu_66580_p2 = (!add_ln703_3693_fu_66564_p2.read().is_01() || !sext_ln703_2029_fu_66576_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3693_fu_66564_p2.read()) + sc_bigint<14>(sext_ln703_2029_fu_66576_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3696_fu_66586_p2() {
    add_ln703_3696_fu_66586_p2 = (!sext_ln1116_80_fu_42345_p1.read().is_01() || !sext_ln708_229_fu_40287_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1116_80_fu_42345_p1.read()) + sc_bigint<10>(sext_ln708_229_fu_40287_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3697_fu_66596_p2() {
    add_ln703_3697_fu_66596_p2 = (!zext_ln203_267_fu_43831_p1.read().is_01() || !sext_ln703_2030_fu_66592_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_267_fu_43831_p1.read()) + sc_bigint<11>(sext_ln703_2030_fu_66592_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3698_fu_66606_p2() {
    add_ln703_3698_fu_66606_p2 = (!add_ln703_3695_fu_66580_p2.read().is_01() || !sext_ln703_2031_fu_66602_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3695_fu_66580_p2.read()) + sc_bigint<14>(sext_ln703_2031_fu_66602_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3699_fu_66616_p2() {
    add_ln703_3699_fu_66616_p2 = (!sext_ln203_557_fu_43593_p1.read().is_01() || !sext_ln708_220_fu_39471_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_557_fu_43593_p1.read()) + sc_bigint<9>(sext_ln708_220_fu_39471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_369_fu_18006_p2() {
    add_ln703_369_fu_18006_p2 = (!sext_ln708_90_fu_2788_p1.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln708_90_fu_2788_p1.read()) + sc_bigint<10>(ap_const_lv10_280));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3700_fu_66626_p2() {
    add_ln703_3700_fu_66626_p2 = (!zext_ln708_585_fu_42112_p1.read().is_01() || !sext_ln703_2033_fu_66622_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_585_fu_42112_p1.read()) + sc_bigint<11>(sext_ln703_2033_fu_66622_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3701_fu_66636_p2() {
    add_ln703_3701_fu_66636_p2 = (!zext_ln708_505_fu_39492_p1.read().is_01() || !zext_ln1118_561_fu_40157_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_505_fu_39492_p1.read()) + sc_biguint<9>(zext_ln1118_561_fu_40157_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3702_fu_66646_p2() {
    add_ln703_3702_fu_66646_p2 = (!zext_ln708_512_fu_39681_p1.read().is_01() || !zext_ln708_637_fu_43651_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_512_fu_39681_p1.read()) + sc_biguint<9>(zext_ln708_637_fu_43651_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3703_fu_66656_p2() {
    add_ln703_3703_fu_66656_p2 = (!zext_ln703_659_fu_66642_p1.read().is_01() || !zext_ln703_660_fu_66652_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_659_fu_66642_p1.read()) + sc_biguint<10>(zext_ln703_660_fu_66652_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3704_fu_66666_p2() {
    add_ln703_3704_fu_66666_p2 = (!sext_ln703_2034_fu_66632_p1.read().is_01() || !zext_ln703_661_fu_66662_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2034_fu_66632_p1.read()) + sc_biguint<12>(zext_ln703_661_fu_66662_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3705_fu_66676_p2() {
    add_ln703_3705_fu_66676_p2 = (!sext_ln703_2032_fu_66612_p1.read().is_01() || !sext_ln703_2035_fu_66672_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_2032_fu_66612_p1.read()) + sc_bigint<15>(sext_ln703_2035_fu_66672_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3706_fu_66682_p2() {
    add_ln703_3706_fu_66682_p2 = (!sext_ln708_221_fu_39748_p1.read().is_01() || !zext_ln203_264_fu_43677_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln708_221_fu_39748_p1.read()) + sc_biguint<11>(zext_ln203_264_fu_43677_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3708_fu_26072_p2() {
    add_ln703_3708_fu_26072_p2 = (!lshr_ln708_431_fu_16676_p4.read().is_01() || !ap_const_lv10_380.is_01())? sc_lv<10>(): (sc_biguint<10>(lshr_ln708_431_fu_16676_p4.read()) + sc_bigint<10>(ap_const_lv10_380));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3709_fu_26082_p2() {
    add_ln703_3709_fu_26082_p2 = (!sext_ln703_931_fu_26078_p1.read().is_01() || !zext_ln203_268_fu_17606_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_931_fu_26078_p1.read()) + sc_biguint<12>(zext_ln203_268_fu_17606_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_370_fu_18016_p2() {
    add_ln703_370_fu_18016_p2 = (!sext_ln708_91_fu_2870_p1.read().is_01() || !zext_ln1118_95_fu_2834_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_91_fu_2870_p1.read()) + sc_biguint<12>(zext_ln1118_95_fu_2834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3710_fu_26092_p2() {
    add_ln703_3710_fu_26092_p2 = (!zext_ln203_269_fu_17610_p1.read().is_01() || !sext_ln703_932_fu_26088_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(zext_ln203_269_fu_17610_p1.read()) + sc_bigint<13>(sext_ln703_932_fu_26088_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3711_fu_26098_p2() {
    add_ln703_3711_fu_26098_p2 = (!sext_ln1118_434_fu_15462_p1.read().is_01() || !zext_ln1118_593_fu_15206_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_434_fu_15462_p1.read()) + sc_biguint<12>(zext_ln1118_593_fu_15206_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3712_fu_26108_p2() {
    add_ln703_3712_fu_26108_p2 = (!add_ln703_3710_fu_26092_p2.read().is_01() || !sext_ln703_2038_fu_26104_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_3710_fu_26092_p2.read()) + sc_bigint<13>(sext_ln703_2038_fu_26104_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3713_fu_26118_p2() {
    add_ln703_3713_fu_26118_p2 = (!zext_ln203_270_fu_17614_p1.read().is_01() || !sext_ln1118_472_fu_16642_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_270_fu_17614_p1.read()) + sc_bigint<12>(sext_ln1118_472_fu_16642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3714_fu_26128_p2() {
    add_ln703_3714_fu_26128_p2 = (!sext_ln703_933_fu_26114_p1.read().is_01() || !sext_ln703_2039_fu_26124_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_933_fu_26114_p1.read()) + sc_bigint<14>(sext_ln703_2039_fu_26124_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3715_fu_26134_p2() {
    add_ln703_3715_fu_26134_p2 = (!sext_ln1116_75_fu_16388_p1.read().is_01() || !zext_ln1118_654_fu_17090_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1116_75_fu_16388_p1.read()) + sc_biguint<12>(zext_ln1118_654_fu_17090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3716_fu_26144_p2() {
    add_ln703_3716_fu_26144_p2 = (!zext_ln708_643_fu_17602_p1.read().is_01() || !zext_ln1118_620_fu_15728_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_643_fu_17602_p1.read()) + sc_biguint<10>(zext_ln1118_620_fu_15728_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3717_fu_26154_p2() {
    add_ln703_3717_fu_26154_p2 = (!sext_ln703_2040_fu_26140_p1.read().is_01() || !zext_ln703_662_fu_26150_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_2040_fu_26140_p1.read()) + sc_biguint<13>(zext_ln703_662_fu_26150_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3718_fu_26164_p2() {
    add_ln703_3718_fu_26164_p2 = (!add_ln703_3714_fu_26128_p2.read().is_01() || !sext_ln703_2041_fu_26160_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_3714_fu_26128_p2.read()) + sc_bigint<14>(sext_ln703_2041_fu_26160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3719_fu_66705_p2() {
    add_ln703_3719_fu_66705_p2 = (!sext_ln203_554_fu_43537_p1.read().is_01() || !sext_ln703_934_fu_66702_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_554_fu_43537_p1.read()) + sc_bigint<15>(sext_ln703_934_fu_66702_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_371_fu_18022_p2() {
    add_ln703_371_fu_18022_p2 = (!zext_ln703_20_fu_18012_p1.read().is_01() || !add_ln703_370_fu_18016_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_20_fu_18012_p1.read()) + sc_biguint<12>(add_ln703_370_fu_18016_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3720_fu_66711_p2() {
    add_ln703_3720_fu_66711_p2 = (!zext_ln708_620_fu_43157_p1.read().is_01() || !zext_ln708_583_fu_42014_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_620_fu_43157_p1.read()) + sc_biguint<11>(zext_ln708_583_fu_42014_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3721_fu_66721_p2() {
    add_ln703_3721_fu_66721_p2 = (!add_ln703_3719_fu_66705_p2.read().is_01() || !zext_ln703_663_fu_66717_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3719_fu_66705_p2.read()) + sc_biguint<15>(zext_ln703_663_fu_66717_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3722_fu_66727_p2() {
    add_ln703_3722_fu_66727_p2 = (!zext_ln1118_585_fu_40677_p1.read().is_01() || !sext_ln708_253_fu_42591_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_585_fu_40677_p1.read()) + sc_bigint<11>(sext_ln708_253_fu_42591_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3723_fu_66737_p2() {
    add_ln703_3723_fu_66737_p2 = (!zext_ln203_271_fu_43835_p1.read().is_01() || !zext_ln1118_648_reg_70297.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_271_fu_43835_p1.read()) + sc_biguint<10>(zext_ln1118_648_reg_70297.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3724_fu_66746_p2() {
    add_ln703_3724_fu_66746_p2 = (!sext_ln703_2042_fu_66733_p1.read().is_01() || !zext_ln703_664_fu_66742_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2042_fu_66733_p1.read()) + sc_biguint<12>(zext_ln703_664_fu_66742_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3725_fu_66756_p2() {
    add_ln703_3725_fu_66756_p2 = (!add_ln703_3721_fu_66721_p2.read().is_01() || !sext_ln703_2043_fu_66752_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3721_fu_66721_p2.read()) + sc_bigint<15>(sext_ln703_2043_fu_66752_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3726_fu_66762_p2() {
    add_ln703_3726_fu_66762_p2 = (!sext_ln203_566_fu_43838_p1.read().is_01() || !sext_ln708_220_fu_39471_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_566_fu_43838_p1.read()) + sc_bigint<9>(sext_ln708_220_fu_39471_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3727_fu_66772_p2() {
    add_ln703_3727_fu_66772_p2 = (!zext_ln1116_162_reg_69835.read().is_01() || !zext_ln708_499_reg_69812.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_162_reg_69835.read()) + sc_biguint<9>(zext_ln708_499_reg_69812.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3728_fu_66780_p2() {
    add_ln703_3728_fu_66780_p2 = (!sext_ln703_2044_fu_66768_p1.read().is_01() || !zext_ln703_665_fu_66776_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln703_2044_fu_66768_p1.read()) + sc_biguint<11>(zext_ln703_665_fu_66776_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3729_fu_66790_p2() {
    add_ln703_3729_fu_66790_p2 = (!zext_ln1116_198_fu_43540_p1.read().is_01() || !zext_ln1118_529_fu_39579_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1116_198_fu_43540_p1.read()) + sc_biguint<9>(zext_ln1118_529_fu_39579_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_372_fu_18028_p2() {
    add_ln703_372_fu_18028_p2 = (!zext_ln708_74_fu_2810_p1.read().is_01() || !zext_ln708_53_fu_2218_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_74_fu_2810_p1.read()) + sc_biguint<8>(zext_ln708_53_fu_2218_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3730_fu_66800_p2() {
    add_ln703_3730_fu_66800_p2 = (!zext_ln703_634_fu_65963_p1.read().is_01() || !zext_ln703_666_fu_66796_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln703_634_fu_65963_p1.read()) + sc_biguint<10>(zext_ln703_666_fu_66796_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3731_fu_66810_p2() {
    add_ln703_3731_fu_66810_p2 = (!sext_ln703_2045_fu_66786_p1.read().is_01() || !zext_ln703_667_fu_66806_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_2045_fu_66786_p1.read()) + sc_biguint<12>(zext_ln703_667_fu_66806_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3732_fu_66820_p2() {
    add_ln703_3732_fu_66820_p2 = (!add_ln703_3725_fu_66756_p2.read().is_01() || !sext_ln703_2046_fu_66816_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3725_fu_66756_p2.read()) + sc_bigint<15>(sext_ln703_2046_fu_66816_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3733_fu_66826_p2() {
    add_ln703_3733_fu_66826_p2 = (!zext_ln1116_201_fu_43551_p1.read().is_01() || !sext_ln203_460_fu_41050_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1116_201_fu_43551_p1.read()) + sc_bigint<12>(sext_ln203_460_fu_41050_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3734_fu_66836_p2() {
    add_ln703_3734_fu_66836_p2 = (!add_ln703_3732_fu_66820_p2.read().is_01() || !sext_ln703_2047_fu_66832_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_3732_fu_66820_p2.read()) + sc_bigint<15>(sext_ln703_2047_fu_66832_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3735_fu_66846_p2() {
    add_ln703_3735_fu_66846_p2 = (!sext_ln1118_404_fu_39937_p1.read().is_01() || !zext_ln203_225_fu_41364_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_404_fu_39937_p1.read()) + sc_biguint<11>(zext_ln203_225_fu_41364_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3736_fu_66852_p2() {
    add_ln703_3736_fu_66852_p2 = (!sext_ln203_440_fu_40059_p1.read().is_01() || !sext_ln203_470_fu_41399_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_440_fu_40059_p1.read()) + sc_bigint<9>(sext_ln203_470_fu_41399_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_3737_fu_66862_p2() {
    add_ln703_3737_fu_66862_p2 = (!add_ln703_3735_fu_66846_p2.read().is_01() || !sext_ln703_2049_fu_66858_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(add_ln703_3735_fu_66846_p2.read()) + sc_bigint<11>(sext_ln703_2049_fu_66858_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_373_fu_18038_p2() {
    add_ln703_373_fu_18038_p2 = (!zext_ln203_17_fu_2792_p1.read().is_01() || !zext_ln703_21_fu_18034_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln203_17_fu_2792_p1.read()) + sc_biguint<10>(zext_ln703_21_fu_18034_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_374_fu_18048_p2() {
    add_ln703_374_fu_18048_p2 = (!add_ln703_371_fu_18022_p2.read().is_01() || !zext_ln703_22_fu_18044_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_371_fu_18022_p2.read()) + sc_biguint<12>(zext_ln703_22_fu_18044_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_375_fu_18058_p2() {
    add_ln703_375_fu_18058_p2 = (!sext_ln1118_72_fu_2340_p1.read().is_01() || !sext_ln1118_80_fu_2922_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_72_fu_2340_p1.read()) + sc_bigint<12>(sext_ln1118_80_fu_2922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_376_fu_18068_p2() {
    add_ln703_376_fu_18068_p2 = (!zext_ln703_23_fu_18054_p1.read().is_01() || !sext_ln703_127_fu_18064_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_23_fu_18054_p1.read()) + sc_bigint<14>(sext_ln703_127_fu_18064_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_377_fu_18074_p2() {
    add_ln703_377_fu_18074_p2 = (!zext_ln708_48_fu_1996_p1.read().is_01() || !zext_ln708_76_fu_2890_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_48_fu_1996_p1.read()) + sc_biguint<10>(zext_ln708_76_fu_2890_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_378_fu_18084_p2() {
    add_ln703_378_fu_18084_p2 = (!sext_ln708_92_fu_2946_p1.read().is_01() || !zext_ln703_24_fu_18080_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_92_fu_2946_p1.read()) + sc_biguint<12>(zext_ln703_24_fu_18080_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_379_fu_18094_p2() {
    add_ln703_379_fu_18094_p2 = (!add_ln703_376_fu_18068_p2.read().is_01() || !sext_ln703_128_fu_18090_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_376_fu_18068_p2.read()) + sc_bigint<14>(sext_ln703_128_fu_18090_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_380_fu_18100_p2() {
    add_ln703_380_fu_18100_p2 = (!sext_ln1118_81_fu_2998_p1.read().is_01() || !zext_ln203_18_fu_2966_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_81_fu_2998_p1.read()) + sc_biguint<12>(zext_ln203_18_fu_2966_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_381_fu_18110_p2() {
    add_ln703_381_fu_18110_p2 = (!add_ln703_379_fu_18094_p2.read().is_01() || !sext_ln703_129_fu_18106_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_379_fu_18094_p2.read()) + sc_bigint<14>(sext_ln703_129_fu_18106_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_382_fu_44669_p2() {
    add_ln703_382_fu_44669_p2 = (!sext_ln1118_85_fu_27739_p1.read().is_01() || !sext_ln1118_84_fu_27715_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_85_fu_27739_p1.read()) + sc_bigint<12>(sext_ln1118_84_fu_27715_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_383_fu_44679_p2() {
    add_ln703_383_fu_44679_p2 = (!sext_ln1118_83_fu_27696_p1.read().is_01() || !sext_ln703_131_fu_44675_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_83_fu_27696_p1.read()) + sc_bigint<13>(sext_ln703_131_fu_44675_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_384_fu_44689_p2() {
    add_ln703_384_fu_44689_p2 = (!sext_ln703_130_fu_44666_p1.read().is_01() || !sext_ln703_132_fu_44685_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_130_fu_44666_p1.read()) + sc_bigint<15>(sext_ln703_132_fu_44685_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_385_fu_44695_p2() {
    add_ln703_385_fu_44695_p2 = (!sext_ln708_93_fu_27640_p1.read().is_01() || !zext_ln1118_100_fu_27672_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_93_fu_27640_p1.read()) + sc_biguint<12>(zext_ln1118_100_fu_27672_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_386_fu_44701_p2() {
    add_ln703_386_fu_44701_p2 = (!zext_ln1118_73_reg_68251.read().is_01() || !add_ln703_385_fu_44695_p2.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_73_reg_68251.read()) + sc_biguint<12>(add_ln703_385_fu_44695_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_387_fu_44710_p2() {
    add_ln703_387_fu_44710_p2 = (!zext_ln1118_91_fu_27513_p1.read().is_01() || !zext_ln708_22_fu_26238_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_91_fu_27513_p1.read()) + sc_biguint<9>(zext_ln708_22_fu_26238_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_388_fu_44720_p2() {
    add_ln703_388_fu_44720_p2 = (!sext_ln1118_82_fu_27692_p1.read().is_01() || !zext_ln703_25_fu_44716_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_82_fu_27692_p1.read()) + sc_biguint<11>(zext_ln703_25_fu_44716_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_389_fu_44730_p2() {
    add_ln703_389_fu_44730_p2 = (!sext_ln703_133_fu_44706_p1.read().is_01() || !sext_ln703_134_fu_44726_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_133_fu_44706_p1.read()) + sc_bigint<13>(sext_ln703_134_fu_44726_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_390_fu_44740_p2() {
    add_ln703_390_fu_44740_p2 = (!add_ln703_384_fu_44689_p2.read().is_01() || !sext_ln703_135_fu_44736_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_384_fu_44689_p2.read()) + sc_bigint<15>(sext_ln703_135_fu_44736_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_391_fu_44746_p2() {
    add_ln703_391_fu_44746_p2 = (!sext_ln203_54_fu_27762_p1.read().is_01() || !add_ln703_390_fu_44740_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_54_fu_27762_p1.read()) + sc_biguint<15>(add_ln703_390_fu_44740_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_392_fu_44756_p2() {
    add_ln703_392_fu_44756_p2 = (!sext_ln203_41_fu_27129_p1.read().is_01() || !sext_ln203_55_fu_27796_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_41_fu_27129_p1.read()) + sc_bigint<12>(sext_ln203_55_fu_27796_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_393_fu_44766_p2() {
    add_ln703_393_fu_44766_p2 = (!sext_ln703_136_fu_44752_p1.read().is_01() || !sext_ln703_137_fu_44762_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_136_fu_44752_p1.read()) + sc_bigint<16>(sext_ln703_137_fu_44762_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_394_fu_44772_p2() {
    add_ln703_394_fu_44772_p2 = (!zext_ln203_14_fu_27279_p1.read().is_01() || !sext_ln203_58_fu_27855_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_14_fu_27279_p1.read()) + sc_bigint<11>(sext_ln203_58_fu_27855_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_395_fu_44782_p2() {
    add_ln703_395_fu_44782_p2 = (!zext_ln708_79_fu_27824_p1.read().is_01() || !zext_ln708_78_fu_27776_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_79_fu_27824_p1.read()) + sc_biguint<8>(zext_ln708_78_fu_27776_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_396_fu_44792_p2() {
    add_ln703_396_fu_44792_p2 = (!sext_ln203_57_fu_27820_p1.read().is_01() || !zext_ln703_26_fu_44788_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_57_fu_27820_p1.read()) + sc_biguint<10>(zext_ln703_26_fu_44788_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_397_fu_44802_p2() {
    add_ln703_397_fu_44802_p2 = (!sext_ln703_138_fu_44778_p1.read().is_01() || !sext_ln703_139_fu_44798_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_138_fu_44778_p1.read()) + sc_bigint<12>(sext_ln703_139_fu_44798_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_399_fu_18128_p2() {
    add_ln703_399_fu_18128_p2 = (!zext_ln708_73_fu_2796_p1.read().is_01() || !zext_ln703_27_fu_18124_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln708_73_fu_2796_p1.read()) + sc_biguint<9>(zext_ln703_27_fu_18124_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_400_fu_18138_p2() {
    add_ln703_400_fu_18138_p2 = (!sext_ln203_59_fu_3066_p1.read().is_01() || !zext_ln703_28_fu_18134_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_59_fu_3066_p1.read()) + sc_biguint<12>(zext_ln703_28_fu_18134_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_401_fu_18144_p2() {
    add_ln703_401_fu_18144_p2 = (!sext_ln1118_86_fu_3090_p1.read().is_01() || !add_ln703_400_fu_18138_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_86_fu_3090_p1.read()) + sc_biguint<12>(add_ln703_400_fu_18138_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_402_fu_18154_p2() {
    add_ln703_402_fu_18154_p2 = (!zext_ln1118_108_fu_3122_p1.read().is_01() || !sext_ln708_94_fu_3110_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_108_fu_3122_p1.read()) + sc_bigint<11>(sext_ln708_94_fu_3110_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_403_fu_18164_p2() {
    add_ln703_403_fu_18164_p2 = (!sext_ln703_141_fu_18150_p1.read().is_01() || !sext_ln703_142_fu_18160_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_141_fu_18150_p1.read()) + sc_bigint<13>(sext_ln703_142_fu_18160_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_404_fu_18174_p2() {
    add_ln703_404_fu_18174_p2 = (!sext_ln1118_88_fu_3174_p1.read().is_01() || !sext_ln1118_87_fu_3142_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_88_fu_3174_p1.read()) + sc_bigint<12>(sext_ln1118_87_fu_3142_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_405_fu_18184_p2() {
    add_ln703_405_fu_18184_p2 = (!sext_ln703_143_fu_18170_p1.read().is_01() || !sext_ln703_144_fu_18180_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln703_143_fu_18170_p1.read()) + sc_bigint<14>(sext_ln703_144_fu_18180_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_406_fu_44818_p2() {
    add_ln703_406_fu_44818_p2 = (!zext_ln1118_112_fu_27868_p1.read().is_01() || !sext_ln1118_89_fu_27871_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln1118_112_fu_27868_p1.read()) + sc_bigint<11>(sext_ln1118_89_fu_27871_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_407_fu_44828_p2() {
    add_ln703_407_fu_44828_p2 = (!sext_ln708_95_fu_27862_p1.read().is_01() || !sext_ln703_145_fu_44824_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_95_fu_27862_p1.read()) + sc_bigint<12>(sext_ln703_145_fu_44824_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_408_fu_44838_p2() {
    add_ln703_408_fu_44838_p2 = (!add_ln703_405_reg_70382.read().is_01() || !sext_ln703_146_fu_44834_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_405_reg_70382.read()) + sc_bigint<14>(sext_ln703_146_fu_44834_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_409_fu_44843_p2() {
    add_ln703_409_fu_44843_p2 = (!sext_ln708_97_fu_27949_p1.read().is_01() || !add_ln703_408_fu_44838_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln708_97_fu_27949_p1.read()) + sc_biguint<14>(add_ln703_408_fu_44838_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_410_fu_44853_p2() {
    add_ln703_410_fu_44853_p2 = (!sext_ln1118_91_fu_27989_p1.read().is_01() || !sext_ln708_96_fu_27893_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_91_fu_27989_p1.read()) + sc_bigint<11>(sext_ln708_96_fu_27893_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_411_fu_44863_p2() {
    add_ln703_411_fu_44863_p2 = (!sext_ln1118_90_fu_27874_p1.read().is_01() || !sext_ln703_148_fu_44859_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln1118_90_fu_27874_p1.read()) + sc_bigint<12>(sext_ln703_148_fu_44859_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_412_fu_44873_p2() {
    add_ln703_412_fu_44873_p2 = (!sext_ln703_147_fu_44849_p1.read().is_01() || !sext_ln703_149_fu_44869_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_147_fu_44849_p1.read()) + sc_bigint<15>(sext_ln703_149_fu_44869_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_413_fu_44879_p2() {
    add_ln703_413_fu_44879_p2 = (!sext_ln1118_64_fu_26860_p1.read().is_01() || !zext_ln203_19_fu_27969_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_64_fu_26860_p1.read()) + sc_biguint<11>(zext_ln203_19_fu_27969_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_414_fu_44889_p2() {
    add_ln703_414_fu_44889_p2 = (!zext_ln1118_113_fu_27917_p1.read().is_01() || !sext_ln703_150_fu_44885_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_113_fu_27917_p1.read()) + sc_bigint<12>(sext_ln703_150_fu_44885_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_415_fu_44895_p2() {
    add_ln703_415_fu_44895_p2 = (!zext_ln1118_28_fu_26281_p1.read().is_01() || !sext_ln1118_66_fu_26922_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln1118_28_fu_26281_p1.read()) + sc_bigint<10>(sext_ln1118_66_fu_26922_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_416_fu_44901_p2() {
    add_ln703_416_fu_44901_p2 = (!sext_ln203_45_fu_27147_p1.read().is_01() || !add_ln703_415_fu_44895_p2.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_45_fu_27147_p1.read()) + sc_biguint<10>(add_ln703_415_fu_44895_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_417_fu_44911_p2() {
    add_ln703_417_fu_44911_p2 = (!add_ln703_414_fu_44889_p2.read().is_01() || !sext_ln703_151_fu_44907_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(add_ln703_414_fu_44889_p2.read()) + sc_bigint<12>(sext_ln703_151_fu_44907_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_418_fu_44921_p2() {
    add_ln703_418_fu_44921_p2 = (!add_ln703_412_fu_44873_p2.read().is_01() || !sext_ln703_152_fu_44917_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_412_fu_44873_p2.read()) + sc_bigint<15>(sext_ln703_152_fu_44917_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_419_fu_44927_p2() {
    add_ln703_419_fu_44927_p2 = (!sext_ln203_60_fu_28030_p1.read().is_01() || !add_ln703_418_fu_44921_p2.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln203_60_fu_28030_p1.read()) + sc_biguint<15>(add_ln703_418_fu_44921_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_420_fu_44933_p2() {
    add_ln703_420_fu_44933_p2 = (!sext_ln203_66_fu_28187_p1.read().is_01() || !sext_ln203_64_fu_28141_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_66_fu_28187_p1.read()) + sc_bigint<12>(sext_ln203_64_fu_28141_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_421_fu_44943_p2() {
    add_ln703_421_fu_44943_p2 = (!add_ln703_419_fu_44927_p2.read().is_01() || !sext_ln703_153_fu_44939_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_419_fu_44927_p2.read()) + sc_bigint<15>(sext_ln703_153_fu_44939_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_422_fu_44949_p2() {
    add_ln703_422_fu_44949_p2 = (!zext_ln203_20_fu_28074_p1.read().is_01() || !sext_ln203_61_fu_28062_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_20_fu_28074_p1.read()) + sc_bigint<11>(sext_ln203_61_fu_28062_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_423_fu_44959_p2() {
    add_ln703_423_fu_44959_p2 = (!sext_ln203_65_fu_28145_p1.read().is_01() || !sext_ln203_63_fu_28098_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_65_fu_28145_p1.read()) + sc_bigint<9>(sext_ln203_63_fu_28098_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_424_fu_44969_p2() {
    add_ln703_424_fu_44969_p2 = (!zext_ln203_21_fu_28110_p1.read().is_01() || !sext_ln703_155_fu_44965_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_21_fu_28110_p1.read()) + sc_bigint<11>(sext_ln703_155_fu_44965_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_425_fu_44979_p2() {
    add_ln703_425_fu_44979_p2 = (!sext_ln703_154_fu_44955_p1.read().is_01() || !sext_ln703_156_fu_44975_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_154_fu_44955_p1.read()) + sc_bigint<12>(sext_ln703_156_fu_44975_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_427_fu_18190_p2() {
    add_ln703_427_fu_18190_p2 = (!sext_ln203_67_fu_3288_p1.read().is_01() || !ap_const_lv12_180.is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_67_fu_3288_p1.read()) + sc_biguint<12>(ap_const_lv12_180));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_428_fu_18200_p2() {
    add_ln703_428_fu_18200_p2 = (!sext_ln203_68_fu_3308_p1.read().is_01() || !sext_ln703_159_fu_18196_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln203_68_fu_3308_p1.read()) + sc_bigint<13>(sext_ln703_159_fu_18196_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_429_fu_18206_p2() {
    add_ln703_429_fu_18206_p2 = (!zext_ln1118_120_fu_3320_p1.read().is_01() || !sext_ln708_fu_1256_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_120_fu_3320_p1.read()) + sc_bigint<12>(sext_ln708_fu_1256_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_430_fu_18216_p2() {
    add_ln703_430_fu_18216_p2 = (!add_ln703_428_fu_18200_p2.read().is_01() || !sext_ln703_160_fu_18212_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(add_ln703_428_fu_18200_p2.read()) + sc_bigint<13>(sext_ln703_160_fu_18212_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_431_fu_18226_p2() {
    add_ln703_431_fu_18226_p2 = (!sext_ln203_69_fu_3352_p1.read().is_01() || !sext_ln703_161_fu_18222_p1.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln203_69_fu_3352_p1.read()) + sc_bigint<14>(sext_ln703_161_fu_18222_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_432_fu_18232_p2() {
    add_ln703_432_fu_18232_p2 = (!sext_ln1118_94_fu_3376_p1.read().is_01() || !sext_ln1118_95_fu_3396_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_94_fu_3376_p1.read()) + sc_bigint<11>(sext_ln1118_95_fu_3396_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_433_fu_18242_p2() {
    add_ln703_433_fu_18242_p2 = (!sext_ln708_98_fu_3416_p1.read().is_01() || !sext_ln703_162_fu_18238_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln708_98_fu_3416_p1.read()) + sc_bigint<12>(sext_ln703_162_fu_18238_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_434_fu_18252_p2() {
    add_ln703_434_fu_18252_p2 = (!add_ln703_431_fu_18226_p2.read().is_01() || !sext_ln703_163_fu_18248_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(add_ln703_431_fu_18226_p2.read()) + sc_bigint<14>(sext_ln703_163_fu_18248_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_435_fu_18258_p2() {
    add_ln703_435_fu_18258_p2 = (!sext_ln1118_99_fu_3516_p1.read().is_01() || !add_ln703_434_fu_18252_p2.read().is_01())? sc_lv<14>(): (sc_bigint<14>(sext_ln1118_99_fu_3516_p1.read()) + sc_biguint<14>(add_ln703_434_fu_18252_p2.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_436_fu_18264_p2() {
    add_ln703_436_fu_18264_p2 = (!zext_ln1118_123_fu_3440_p1.read().is_01() || !sext_ln708_99_fu_3568_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln1118_123_fu_3440_p1.read()) + sc_bigint<12>(sext_ln708_99_fu_3568_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_437_fu_18274_p2() {
    add_ln703_437_fu_18274_p2 = (!sext_ln1118_100_fu_3548_p1.read().is_01() || !sext_ln703_165_fu_18270_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln1118_100_fu_3548_p1.read()) + sc_bigint<13>(sext_ln703_165_fu_18270_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_438_fu_45005_p2() {
    add_ln703_438_fu_45005_p2 = (!sext_ln703_164_fu_44999_p1.read().is_01() || !sext_ln703_166_fu_45002_p1.read().is_01())? sc_lv<15>(): (sc_bigint<15>(sext_ln703_164_fu_44999_p1.read()) + sc_bigint<15>(sext_ln703_166_fu_45002_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_439_fu_45011_p2() {
    add_ln703_439_fu_45011_p2 = (!sext_ln1118_98_fu_28194_p1.read().is_01() || !sext_ln1118_96_fu_28191_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_98_fu_28194_p1.read()) + sc_bigint<11>(sext_ln1118_96_fu_28191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_440_fu_45021_p2() {
    add_ln703_440_fu_45021_p2 = (!zext_ln1118_126_fu_28197_p1.read().is_01() || !sext_ln203_44_fu_27144_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(zext_ln1118_126_fu_28197_p1.read()) + sc_bigint<9>(sext_ln203_44_fu_27144_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_441_fu_45031_p2() {
    add_ln703_441_fu_45031_p2 = (!sext_ln1118_97_reg_68423.read().is_01() || !sext_ln703_168_fu_45027_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln1118_97_reg_68423.read()) + sc_bigint<10>(sext_ln703_168_fu_45027_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_442_fu_45040_p2() {
    add_ln703_442_fu_45040_p2 = (!sext_ln703_167_fu_45017_p1.read().is_01() || !sext_ln703_169_fu_45036_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_167_fu_45017_p1.read()) + sc_bigint<12>(sext_ln703_169_fu_45036_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_443_fu_45050_p2() {
    add_ln703_443_fu_45050_p2 = (!add_ln703_438_fu_45005_p2.read().is_01() || !sext_ln703_170_fu_45046_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_438_fu_45005_p2.read()) + sc_bigint<15>(sext_ln703_170_fu_45046_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_444_fu_45056_p2() {
    add_ln703_444_fu_45056_p2 = (!sext_ln203_72_fu_28319_p1.read().is_01() || !sext_ln203_71_fu_28295_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_72_fu_28319_p1.read()) + sc_bigint<12>(sext_ln203_71_fu_28295_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_445_fu_45066_p2() {
    add_ln703_445_fu_45066_p2 = (!add_ln703_443_fu_45050_p2.read().is_01() || !sext_ln703_171_fu_45062_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(add_ln703_443_fu_45050_p2.read()) + sc_bigint<15>(sext_ln703_171_fu_45062_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_446_fu_45076_p2() {
    add_ln703_446_fu_45076_p2 = (!sext_ln203_75_fu_28413_p1.read().is_01() || !sext_ln203_74_fu_28355_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_75_fu_28413_p1.read()) + sc_bigint<12>(sext_ln203_74_fu_28355_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_447_fu_45086_p2() {
    add_ln703_447_fu_45086_p2 = (!zext_ln203_22_fu_28253_p1.read().is_01() || !sext_ln203_76_fu_28445_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_22_fu_28253_p1.read()) + sc_bigint<12>(sext_ln203_76_fu_28445_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_448_fu_45096_p2() {
    add_ln703_448_fu_45096_p2 = (!sext_ln703_173_fu_45082_p1.read().is_01() || !sext_ln703_174_fu_45092_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_173_fu_45082_p1.read()) + sc_bigint<13>(sext_ln703_174_fu_45092_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_449_fu_45106_p2() {
    add_ln703_449_fu_45106_p2 = (!sext_ln703_172_fu_45072_p1.read().is_01() || !sext_ln703_175_fu_45102_p1.read().is_01())? sc_lv<16>(): (sc_bigint<16>(sext_ln703_172_fu_45072_p1.read()) + sc_bigint<16>(sext_ln703_175_fu_45102_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_450_fu_45112_p2() {
    add_ln703_450_fu_45112_p2 = (!sext_ln203_73_fu_28323_p1.read().is_01() || !sext_ln203_70_fu_28219_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln203_73_fu_28323_p1.read()) + sc_bigint<10>(sext_ln203_70_fu_28219_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_451_fu_45122_p2() {
    add_ln703_451_fu_45122_p2 = (!zext_ln203_23_fu_28393_p1.read().is_01() || !sext_ln703_176_fu_45118_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln203_23_fu_28393_p1.read()) + sc_bigint<11>(sext_ln703_176_fu_45118_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_452_fu_45132_p2() {
    add_ln703_452_fu_45132_p2 = (!sext_ln203_65_fu_28145_p1.read().is_01() || !sext_ln1116_9_fu_26273_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_65_fu_28145_p1.read()) + sc_bigint<9>(sext_ln1116_9_fu_26273_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_453_fu_45142_p2() {
    add_ln703_453_fu_45142_p2 = (!zext_ln708_85_fu_28369_p1.read().is_01() || !zext_ln708_78_fu_27776_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(zext_ln708_85_fu_28369_p1.read()) + sc_biguint<8>(zext_ln708_78_fu_27776_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_454_fu_45152_p2() {
    add_ln703_454_fu_45152_p2 = (!sext_ln703_178_fu_45138_p1.read().is_01() || !zext_ln703_29_fu_45148_p1.read().is_01())? sc_lv<10>(): (sc_bigint<10>(sext_ln703_178_fu_45138_p1.read()) + sc_biguint<10>(zext_ln703_29_fu_45148_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_455_fu_45162_p2() {
    add_ln703_455_fu_45162_p2 = (!sext_ln703_177_fu_45128_p1.read().is_01() || !sext_ln703_179_fu_45158_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_177_fu_45128_p1.read()) + sc_bigint<12>(sext_ln703_179_fu_45158_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_457_fu_45186_p2() {
    add_ln703_457_fu_45186_p2 = (!zext_ln203_24_reg_68438.read().is_01() || !sext_ln203_78_fu_28449_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_24_reg_68438.read()) + sc_bigint<12>(sext_ln203_78_fu_28449_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_458_fu_45195_p2() {
    add_ln703_458_fu_45195_p2 = (!or_ln703_s_fu_45178_p3.read().is_01() || !sext_ln703_181_fu_45191_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(or_ln703_s_fu_45178_p3.read()) + sc_bigint<16>(sext_ln703_181_fu_45191_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_459_fu_18280_p2() {
    add_ln703_459_fu_18280_p2 = (!zext_ln708_43_fu_1802_p1.read().is_01() || !zext_ln708_89_fu_3642_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_43_fu_1802_p1.read()) + sc_biguint<11>(zext_ln708_89_fu_3642_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_460_fu_45204_p2() {
    add_ln703_460_fu_45204_p2 = (!zext_ln708_84_fu_28249_p1.read().is_01() || !zext_ln708_91_fu_28474_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_84_fu_28249_p1.read()) + sc_biguint<11>(zext_ln708_91_fu_28474_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_461_fu_45214_p2() {
    add_ln703_461_fu_45214_p2 = (!zext_ln703_30_fu_45201_p1.read().is_01() || !zext_ln703_31_fu_45210_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln703_30_fu_45201_p1.read()) + sc_biguint<12>(zext_ln703_31_fu_45210_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_462_fu_45224_p2() {
    add_ln703_462_fu_45224_p2 = (!add_ln703_458_fu_45195_p2.read().is_01() || !zext_ln703_32_fu_45220_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_458_fu_45195_p2.read()) + sc_biguint<16>(zext_ln703_32_fu_45220_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_463_fu_45230_p2() {
    add_ln703_463_fu_45230_p2 = (!zext_ln708_94_fu_28581_p1.read().is_01() || !zext_ln708_93_fu_28557_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln708_94_fu_28581_p1.read()) + sc_biguint<11>(zext_ln708_93_fu_28557_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_464_fu_45240_p2() {
    add_ln703_464_fu_45240_p2 = (!zext_ln203_27_fu_28517_p1.read().is_01() || !zext_ln703_33_fu_45236_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(zext_ln203_27_fu_28517_p1.read()) + sc_biguint<12>(zext_ln703_33_fu_45236_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_465_fu_45250_p2() {
    add_ln703_465_fu_45250_p2 = (!sext_ln203_80_fu_28485_p1.read().is_01() || !sext_ln1118_77_reg_68324.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_80_fu_28485_p1.read()) + sc_bigint<11>(sext_ln1118_77_reg_68324.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_466_fu_45259_p2() {
    add_ln703_466_fu_45259_p2 = (!sext_ln1118_91_fu_27989_p1.read().is_01() || !sext_ln203_81_fu_28537_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln1118_91_fu_27989_p1.read()) + sc_bigint<11>(sext_ln203_81_fu_28537_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_467_fu_45269_p2() {
    add_ln703_467_fu_45269_p2 = (!sext_ln703_182_fu_45255_p1.read().is_01() || !sext_ln703_183_fu_45265_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_182_fu_45255_p1.read()) + sc_bigint<12>(sext_ln703_183_fu_45265_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_468_fu_45279_p2() {
    add_ln703_468_fu_45279_p2 = (!zext_ln703_34_fu_45246_p1.read().is_01() || !sext_ln703_184_fu_45275_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(zext_ln703_34_fu_45246_p1.read()) + sc_bigint<14>(sext_ln703_184_fu_45275_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_469_fu_45289_p2() {
    add_ln703_469_fu_45289_p2 = (!add_ln703_462_fu_45224_p2.read().is_01() || !sext_ln703_185_fu_45285_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(add_ln703_462_fu_45224_p2.read()) + sc_bigint<16>(sext_ln703_185_fu_45285_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_470_fu_45295_p2() {
    add_ln703_470_fu_45295_p2 = (!zext_ln708_24_fu_26317_p1.read().is_01() || !zext_ln708_90_fu_28455_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln708_24_fu_26317_p1.read()) + sc_biguint<10>(zext_ln708_90_fu_28455_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_471_fu_45305_p2() {
    add_ln703_471_fu_45305_p2 = (!sext_ln203_41_fu_27129_p1.read().is_01() || !zext_ln703_35_fu_45301_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln203_41_fu_27129_p1.read()) + sc_biguint<12>(zext_ln703_35_fu_45301_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_472_fu_45315_p2() {
    add_ln703_472_fu_45315_p2 = (!sext_ln203_31_fu_26399_p1.read().is_01() || !zext_ln708_33_reg_68104.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_31_fu_26399_p1.read()) + sc_biguint<11>(zext_ln708_33_reg_68104.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_473_fu_18286_p2() {
    add_ln703_473_fu_18286_p2 = (!sext_ln203_77_fu_3646_p1.read().is_01() || !zext_ln203_26_fu_3686_p1.read().is_01())? sc_lv<11>(): (sc_bigint<11>(sext_ln203_77_fu_3646_p1.read()) + sc_biguint<11>(zext_ln203_26_fu_3686_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_474_fu_45327_p2() {
    add_ln703_474_fu_45327_p2 = (!sext_ln703_187_fu_45320_p1.read().is_01() || !sext_ln703_188_fu_45324_p1.read().is_01())? sc_lv<12>(): (sc_bigint<12>(sext_ln703_187_fu_45320_p1.read()) + sc_bigint<12>(sext_ln703_188_fu_45324_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_475_fu_45337_p2() {
    add_ln703_475_fu_45337_p2 = (!sext_ln703_186_fu_45311_p1.read().is_01() || !sext_ln703_189_fu_45333_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(sext_ln703_186_fu_45311_p1.read()) + sc_bigint<13>(sext_ln703_189_fu_45333_p1.read()));
}

void pointwise_conv_1d_latency_cl_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1::thread_add_ln703_476_fu_45343_p2() {
    add_ln703_476_fu_45343_p2 = (!sext_ln203_63_fu_28098_p1.read().is_01() || !sext_ln203_79_fu_28481_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(sext_ln203_63_fu_28098_p1.read()) + sc_bigint<9>(sext_ln203_79_fu_28481_p1.read()));
}

}

